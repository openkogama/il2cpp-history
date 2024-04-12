
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
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
  pMStack_6 = (MVPlayer *)0x0;
  BStack_7.m_value = 0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  _Var66 = (_union_86)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        _Var66 = unaff_EDI;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar15 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar15->fields)._.worldObjectClientManager;
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Stack_28 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)0x0);
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x12,(MethodInfo *)0x0);
          bVar9 = 0;
          if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
          unaff_EDI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 == pIVar12) {
                piVar13 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar13,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0)
                ;
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              goto code_?;
            }
            break;
          }
          pMVar17 = (MVNetworkGame__Class *)(pDVar16->_0).image;
          if (((pMVar17->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar17->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar18) {
            unaff_ESI = pDVar16;
          }
          bVar9 = 0;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        _Var66 = unaff_EDI;
        if (pIVar11 != pIVar12) goto code_?;
        p_Var52 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var52->__klassIndex;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x12,(MethodInfo *)0x0);
        pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pWVar15 = (pMVar14->fields).worldNetwork;
          bVar9 = 0;
          if (pWVar15 != (WorldNetwork *)0x0) {
            pMVar20 = (pWVar15->fields)._.worldObjectClientManager;
            bVar9 = 0;
            if (pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar20,unaff_EDI.__klassIndex,pDVar19,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pWVar15 = (pMVar14->fields).worldNetwork;
        bVar9 = 0;
        if (pWVar15 != (WorldNetwork *)0x0) {
          pMVar20 = (pWVar15->fields)._.worldObjectClientManager;
          bVar9 = 0;
          if (pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar20,unaff_EDI.__klassIndex,pDVar19,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_EDI = (_union_86)this;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      bVar9 = 0;
      if (pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar22 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar21,eventCode,
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        bVar9 = 0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pEVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          bVar9 = 0;
          if (pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pEVar21,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery ==
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pSVar23 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pSVar23 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pEVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              bVar9 = 0;
              if (pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                (*(pEVar21->fields)._._.invoke_impl)();
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        _Var66 = unaff_EDI;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar15 != (WorldNetwork *)0x0) {
        pMVar24 = (pWVar15->fields)._.worldInventory;
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var66.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x31,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI.typeHandle = _Var66.typeHandle;
          if (pMVar24 == (MVWorldInventory *)0x0) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var66.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              puVar25 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (pMVar24->fields).runtimePrototypes;
              bVar9 = 0;
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar26 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                     (int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                this_06 = (BytePacker *)func_?();
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          (this_06,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
                bVar9 = 0;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar26,this_06,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_3;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          bVar9 = 0;
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar15 != (WorldNetwork *)0x0) {
        _Var66 = (_union_86)(pWVar15->fields)._.worldInventory;
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x22,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI = _Var66;
          if ((_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
             (bVar9 = 0, pOVar10 != (Object *)0x0)) {
            pIVar11 = (pOVar10->klass->_0).element_class;
            pIVar12 = (TypeInfo__System__Single->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            if (pIVar11 != pIVar12) goto code_?;
            pfVar27 = (float *)func_?();
            fVar28 = *pfVar27;
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              puVar25 = (undefined4 *)func_?();
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              bVar9 = 0;
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)_Var66.type[1].data.typeHandle
                  != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                pRVar26 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)
                                     _Var66.type[1].data.typeHandle,(int32_t)unaff_ESI,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                bVar9 = 0;
                if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar26->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar26->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar26->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar26,fVar28,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar30 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar13,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar29 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar14,unaff_EDI.__klassIndex,iVar29,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar29 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar31 = (FriendStatus__Enum *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar14,unaff_EDI.__klassIndex,iVar29,*pFVar31,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar14,*piVar13,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar14,*piVar13,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar14,unaff_EDI.__klassIndex,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar14,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar13,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields)._NetworkGameStateListener_k__BackingField;
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x42,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var52 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var52->dummy;
          puVar25 = (undefined4 *)func_?();
          pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar25;
          p_Var52 = (_union_86 *)func_?();
          _Stack_28 = *p_Var52;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (unaff_ESI->_0).byval_arg.data = _Stack_28;
          ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery = pEVar21;
          (unaff_ESI->_0).namespaze = (char *)unaff_EDI;
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            iVar29 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar14,(MethodInfo *)0x0);
            pMVar32 = (unaff_ESI->_0).this_arg.data.dummy;
            *(int *)&(unaff_ESI->_0).byval_arg.attrs =
                 (int)unaff_EDI.dummy + ((int)pEVar21 - iVar29);
            if (pMVar32 == (MVItemBusinessLogic *)0x0) goto code_?;
            pIVar33 = (unaff_ESI->_0).this_arg.data.array;
            pUVar34 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar34,(MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pIVar33 != (Il2CppArrayType *)0x0) {
              (*(code *)pIVar33->lobounds)();
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar35 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar35->fields)._._ActorNr_k__BackingField;
          puVar25 = (undefined4 *)func_?();
          if ((Dictionary_2_System_Object_System_Object___Class *)*puVar25 == unaff_ESI)
          goto code_?;
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            pWVar15 = (pMVar14->fields).worldNetwork;
            bVar9 = 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pWVar15 != (WorldNetwork *)0x0) {
              _Var66 = (_union_86)(pWVar15->fields)._.worldObjectClientManager;
              _Stack_28 = _Var66;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x46,(MethodInfo *)0x0);
              bVar9 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              unaff_EDI = (_union_86)photonEvent;
              if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                piVar13 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar13,
                           pDVar19,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar30 = *piVar13;
        pPVar36 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar36,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar25;
      pfVar27 = (float *)func_?();
      pIVar12 = (Il2CppClass *)*pfVar27;
      pfVar27 = (float *)func_?();
      VStack_8.x = *pfVar27;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = (float)pIVar12;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var52->dummy;
      puVar25 = (undefined4 *)func_?();
      uVar37 = *puVar25;
      puVar25 = (undefined4 *)func_?();
      _Var66 = _Stack_28;
      uVar38 = *puVar25;
      pMVar14 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        camOrigin.y._0_1_ = SUB41(VStack_8.y,0);
        camOrigin.x = VStack_8.x;
        camOrigin.y._1_2_ = (short)((uint)VStack_8.y >> 8);
        camOrigin.y._3_1_ = (char)((uint)VStack_8.y >> 0x18);
        camOrigin.z._0_1_ = SUB41(VStack_8.z,0);
        camOrigin.z._1_2_ = (short)((uint)VStack_8.z >> 8);
        camOrigin.z._3_1_ = (char)((uint)VStack_8.z >> 0x18);
        camDir.y = (float)uVar37;
        camDir.x = (float)uVar38;
        camDir.z = (float)_Var66.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar14,*piVar13,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar14,photonEvent,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar39 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar39,pDVar19,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
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
      piVar13 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar40 = (MVTeam__Enum *)func_?();
        team = *pMVar40;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar14,*piVar13,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
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
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar30 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar13,iVar30,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar14,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar13,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      _Stack_28 = *p_Var52;
      pOVar41 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar41,
                           (MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar43 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar25 = (undefined4 *)func_?();
        pMStack_44 = (MVPlayer *)*puVar25;
        uStack_45 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var52 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var52->__klassIndex;
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar46 = (pMVar14->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pMVar46 != (MVLocalObjectController *)0x0) {
            pbVar47 = (byte *)func_?();
            bVar9 = *pbVar47;
            piVar13 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar46,*piVar13,(int32_t)pMStack_44,_Stack_24.__klassIndex,(uint)bVar9,
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar48,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
             (iVar49 = func_?(), iVar49 == 0)) goto code_?;
          iVar49 = func_?();
          bVar9 = 0;
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var52 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var52->__klassIndex;
        uStack_45 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var52 = (_union_86 *)func_?();
        _Stack_34 = *p_Var52;
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar48,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            pMVar50 = (MVWorldObjectSpawner *)func_?();
            bVar9 = 0;
            if (pMVar50 != (MVWorldObjectSpawner *)0x0) {
              pMStack_44 = (MVPlayer *)(pMVar50->fields).spawnWorldObjectID;
              uStack_51 = 3;
              pOVar10 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         unaff_EDI.typeHandle,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
              puVar25 = (undefined4 *)func_?();
              pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar25;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
              puVar25 = (undefined4 *)func_?();
              pMStack_53 = (MVWorldObject *)*puVar25;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x3a,(MethodInfo *)0x0);
              p_Var52 = (_union_86 *)func_?();
              _Stack_24 = (_union_86)p_Var52->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5c,(MethodInfo *)0x0);
              p_Var52 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var52->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x23,(MethodInfo *)0x0);
              puVar25 = (undefined4 *)func_?();
              VStack_8.z = (float)*puVar25;
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              unaff_EDI = (_union_86)this;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pWVar15 = (pMVar14->fields).worldNetwork;
                bVar9 = 0;
                if (pWVar15 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar15,(int32_t)pMStack_53,0,1,(int32_t)pMStack_44,(int32_t)pDStack_52
                             ,_Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar14 = (this->fields).networkGame;
                  bVar9 = 0;
                  if (pMVar14 != (MVNetworkGame *)0x0) {
                    pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar14,(MethodInfo *)0x0);
                    bVar9 = 0;
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
                      bVar9 = 0;
                      if (pMStack_53 != (MVWorldObject *)0x0) {
                        func_?();
                        pMVar14 = (this->fields).networkGame;
                        bVar9 = 0;
                        if (pMVar14 != (MVNetworkGame *)0x0) {
                          pMVar46 = (pMVar14->fields)._PlayerController_k__BackingField;
                          pMStack_53 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x8d,(MethodInfo *)0x0);
                          bVar9 = 0;
                          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                          if (pMVar46 != (MVLocalObjectController *)0x0) {
                            pbVar47 = (byte *)func_?();
                            bVar9 = *pbVar47;
                            piVar13 = (int32_t *)func_?();
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar46,*piVar13,(int32_t)pDStack_52,_Stack_34.__klassIndex,
                                       (uint)bVar9,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      (pMVar50,(int32_t)VStack_8.z,(MethodInfo *)0x0);
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
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      uVar55 = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar27 = (float *)func_?();
      pFVar56 = (FieldInfo *)*pfVar27;
      _Stack_34.dummy = (void *)func_?();
      uStack_51 = uVar55;
      pOVar10 = (Object *)func_?();
      VStack_8.z = (float)pFVar56;
      pOVar41 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar10,pOVar41,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      pMVar57 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar12 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar12->vtable[0].methodPtr & 0x100) == 0) {
        pIVar12 = (Il2CppClass *)func_?();
      }
      if (pIVar12->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar12 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar12->vtable[0].methodPtr & 0x100) == 0) {
        pIVar12 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar12->static_fields;
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pWVar15 = (pMVar14->fields).worldNetwork;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pWVar15 != (WorldNetwork *)0x0) {
          this_01 = (pWVar15->fields)._.runtimeEventManagerNetwork;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
          bVar9 = 0;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pWVar15 = (pMVar14->fields).worldNetwork;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pWVar15 != (WorldNetwork *)0x0) {
        this_02 = (RuntimeEventManager *)(pWVar15->fields)._.runtimeEventManagerNetwork;
        bVar9 = 0;
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var52->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var52 = (_union_86 *)func_?();
      _Stack_24 = *p_Var52;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar54 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar54;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar25;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      pMStack_44 = (MVPlayer *)*puVar25;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      bVar22 = *pbVar59;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar60 = (char *)func_?();
      pMVar14 = (this->fields).networkGame;
      if (*pcVar60 == '\0') {
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pGVar61 = (pMVar14->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar61 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar61,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_52,(int32_t)pMStack_44,bVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      else {
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pGVar61 = (pMVar14->fields).gameStatCounterManager;
          bVar9 = 0;
          if (pGVar61 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar61,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_52,(int32_t)pMStack_44,bVar22,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pGVar61 = (pMVar14->fields).gameStatCounterManager;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pGVar61 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar61,pBVar58,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      iVar29 = *piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pMVar57 = (MethodInfo *)0x0;
      pBVar58 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar58,pMVar57);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI.typeHandle,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        this_03 = (pMVar14->fields)._AvatarMetaDataWoMap_k__BackingField;
        bVar9 = 0;
        if (this_03 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_03,iVar29,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar13,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar62 = (pMVar14->fields)._GameCoinManager_k__BackingField;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar62 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar62,*pbVar59,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        _Var66 = unaff_EDI;
        if (pIVar11 != pIVar12) goto code_?;
        p_Var52 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var52->__klassIndex;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,200,(MethodInfo *)0x0);
        if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        }
        else {
          _Var66 = (_union_86)(unaff_ESI->_0).image;
          if ((*(byte *)(_Var66.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var66.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar18) {
            pDVar16 = unaff_ESI;
          }
          bVar9 = 0;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar14,unaff_EDI.__klassIndex,
                     (Dictionary_2_System_Object_System_Object_ *)pDVar16,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent == (EventData *)0x0) break;
    pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    bVar9 = 0;
    if (_Var66.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var66.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    if (((pDVar19->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar19->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar18) {
      pDVar63 = pDVar19;
    }
    bVar9 = 0;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var66.dummy = (void *)func_?();
    if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar58 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var66.typeHandle,pBVar58,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI.dummy = _Var66.dummy;
      if (pOVar10 != (Object *)0x0) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 != pIVar12) {
code_?:
          func_?();
          unaff_EDI = _Var66;
          goto code_?;
        }
        puVar54 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)_Var66 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar54);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        bVar9 = 0;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 != pIVar12) goto code_?;
          pbVar59 = (bool *)func_?();
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar14,(BytePacker *)_Var66.typeHandle,eventCode,*pbVar59,(MethodInfo *)0x0)
            ;
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    bVar9 = 0;
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar35 != (MVLocalPlayer *)0x0) {
          iVar49 = (pMVar35->fields)._._ActorNr_k__BackingField;
          bVar9 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
            pIVar12 = (TypeInfo__System__Int32->_0).element_class;
            bVar9 = pIVar11 < pIVar12;
            unaff_EDI = (_union_86)photonEvent;
            if (pIVar11 != pIVar12) goto code_?;
            piVar64 = (int *)func_?();
            if (*piVar64 == iVar49) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pMVar62 = (pMVar14->fields)._GameCoinManager_k__BackingField;
                bVar9 = 0;
                unaff_EDI = (_union_86)photonEvent;
                if (pMVar62 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar62,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar14 = (this->fields).networkGame;
                  bVar9 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (pMVar14 != (MVNetworkGame *)0x0) {
                    pMVar65 = (pMVar14->fields).operationRequests;
                    bVar9 = 0;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    unaff_EDI = (_union_86)photonEvent;
                    if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      this_07 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                (this_07,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                  (pMVar65->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar9 = 0;
                      unaff_EDI = (_union_86)photonEvent;
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
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              bVar9 = 0;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                unaff_EDI = (_union_86)(pMVar14->fields).playerContainer;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                bVar9 = 0;
                if ((unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                   (bVar9 = 0, pOVar10 != (Object *)0x0)) {
                  pIVar11 = (pOVar10->klass->_0).element_class;
                  pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar9 = pIVar11 < pIVar12;
                  if (pIVar11 != pIVar12) goto code_?;
                  pbVar59 = (bool *)func_?();
                  bVar22 = *pbVar59;
                  bVar9 = 0;
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
                    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
                    bVar9 = pIVar11 < pIVar12;
                    if (pIVar11 == pIVar12) {
                      piVar13 = (int32_t *)func_?();
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar13,bVar22,
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
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    bVar9 = 0;
    unaff_EDI = _Var66;
    if ((_Var66.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (bVar9 = 0, pOVar10 == (Object *)0x0)) break;
    pIVar11 = (pOVar10->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
    bVar9 = pIVar11 < pIVar12;
    if (pIVar11 != pIVar12) goto code_?;
    pcVar60 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var66.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,*pcVar60 == '\0',(MethodInfo *)0x0);
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
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar18) {
      pDVar16 = unaff_ESI;
    }
    bVar9 = 0;
    if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var66.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)pDVar16,*pcVar60 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    _Var66 = (_union_86)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = _Var66;
    if (photonEvent != (EventData *)0x0) {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      bVar9 = 0;
      if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)_Var66.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        if (((pDVar19->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar63 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar63 = pDVar19;
        }
        bVar9 = 0;
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar63 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)_Var66.typeHandle,pDVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar58 = (Byte__Array *)0x0;
code_?:
      pMVar14 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      bVar9 = 0;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        (pMVar14->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    bVar9 = 0;
    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
        pIVar11 = (pOVar10->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        _Var66 = unaff_EDI;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar65 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar66 = (pMVar65->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
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
    unaff_EDI.dummy = (void *)func_?();
    bVar9 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (Object *)unaff_EDI.typeHandle,pOVar10,
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar67 = (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar67->fields).logicEventQueue;
        bVar9 = 0;
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
          bVar9 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (photonEvent != (EventData *)0x0) {
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI = (_union_86)photonEvent;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              piVar13 = (int32_t *)func_?();
              pEVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              iVar29 = *piVar13;
              bVar9 = 0;
              unaff_EDI = (_union_86)photonEvent;
              if (pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)pEVar21,iVar29,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar22 == 0) {
                  pEVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                  VStack_8.z = (float)func_?();
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  bVar9 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (pEVar21 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pEVar21,iVar29,
                             (Object *)VStack_8.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                pEVar21 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
                bVar9 = 0;
                unaff_EDI = (_union_86)photonEvent;
                if (pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
                  this_08 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pEVar21,iVar29,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  bVar9 = 0;
                  unaff_EDI = (_union_86)photonEvent;
                  if (this_08 != (Queue_1_System_Object_ *)0x0) {
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
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      pMVar67 = (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar67 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar67,(MethodInfo *)0x0);
        pMVar68 = (pMVar67->fields).updateEvaluatorStep;
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar68 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar13 = &(pMVar68->fields).stepTimestamp;
          *piVar13 = *piVar13 + 1000;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar68 = *(MVNetworkGame_UpdateEvaluator **)&(unaff_ESI->_0).byval_arg.attrs;
          bVar9 = 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar68 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar68->fields).stepTimestamp = *piVar13;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar14->fields).logicObjectManagerClientWrapper;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          p_Var52 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var52->__klassIndex;
          pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          while (bVar9 = 0, pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            pMVar69 = (pEVar21->fields)._._.method_info;
            bVar9 = 0;
            if (pMVar69 == (MethodInfo_1 *)0x0) break;
            if (unaff_EDI.__klassIndex <= (int)pMVar69[2].monitor) goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0)
            ;
            pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = (_union_86)this;
    if (pMVar14 == (MVNetworkGame *)0x0) break;
    pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar14,(MethodInfo *)0x0);
    bVar9 = 0;
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    bVar9 = 0;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      bVar9 = 0;
      if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
        pMVar70 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar48,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
          bVar9 = pEVar21 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          if (pEVar21 < (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2)
          goto code_?;
          bVar9 = 0;
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
            if (pMVar70 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            bVar9 = 0;
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar70->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar49 = func_?();
              bVar9 = 0;
              if (iVar49 != 0) {
                bVar22 = 0x5e;
                pDVar16 = unaff_ESI;
                this_09 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_09,bVar22,(MethodInfo *)pDVar16);
                pMVar14 = (this->fields).networkGame;
                bVar9 = 0;
                if (pMVar14 != (MVNetworkGame *)0x0) {
                  pMVar46 = (pMVar14->fields)._PlayerController_k__BackingField;
                  bVar9 = 0;
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
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Stack_34.typeHandle = unaff_EDI.typeHandle;
      if (photonEvent != (EventData *)0x0) {
        VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xdb,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xd1,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          iVar29 = *piVar13;
          piVar13 = (int32_t *)func_?();
          iVar30 = *piVar13;
          puVar54 = (undefined1 *)func_?();
          uVar55 = *puVar54;
          piVar13 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar13,
                     CONCAT31((int3)((uint)puVar54 >> 8),uVar55),iVar30,iVar29,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar59 = (bool *)func_?();
      bVar22 = *pbVar59;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar22
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
      pMVar57 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      uVar55 = SUB41(pSVar23,0);
      uVar71 = (undefined2)((uint)pSVar23 >> 8);
      uVar72 = (undefined1)((uint)pSVar23 >> 0x18);
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar57);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = (_union_86)photonEvent;
      if (pOVar10 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar23 = (String *)func_?();
        HighlightManager::HighlightManager_Init
                  (pSVar23,(MethodInfo *)CONCAT13(uVar72,CONCAT21(uVar71,uVar55)));
        profileSettingsState = (ProfileSettingsState *)pOVar10[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar73 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)photonEvent;
        if (pGVar73 != (GoldRewardManager *)0x0) {
          pbVar59 = (bool *)func_?();
          (pGVar73->fields).isGoldRewardGame = *pbVar59;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar59 = (bool *)func_?();
          BStack_7.m_value = *pbVar59;
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar74 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)0x0;
      if (pSVar74 == (String *)0x0) {
code_?:
        pSVar23 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar23,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar74->klass == TypeInfo__System__String) {
        pSVar23 = pSVar74;
      }
      bVar9 = 0;
      if (pSVar23 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      _Var66 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var66;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar49 = func_?();
      pMVar57 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar23 = StringLiteral_V;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (iVar49 != 0) {
        pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,(Object *)pSVar23,pMVar57);
        pbVar59 = (bool *)func_?();
        bVar22 = *pbVar59;
        pMVar14 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)pSVar23;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          piVar13 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar14,*piVar13,bVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar74 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)0x0;
      if (pSVar74 != (String *)0x0) {
        if (pSVar74->klass == TypeInfo__System__String) {
          pSVar23 = pSVar74;
        }
        bVar9 = 0;
        photonEvent = (EventData *)0x0;
        if (pSVar23 == (String *)0x0) goto code_?;
      }
      bVar22 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if (bVar22 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar10[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar10[1].monitor;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pMVar75 = (pMVar14->fields).playerContainer;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar75 != (MVPlayerContainer *)0x0) {
          pMVar35 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar75,(MethodInfo *)0x0);
          bVar9 = 0;
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
    bVar9 = 0;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar14->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar13,(MethodInfo *)0x0)
          ;
          bVar9 = 0;
          if (pMVar76 != (MVPlayer *)0x0) {
            (pMVar76->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar42 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pLVar77 = (pMVar14->fields).levelRewardsManager;
          bVar9 = 0;
          unaff_EDI = unaff_EDI;
          if (pLVar77 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar77,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        pLVar77 = (pMVar14->fields).levelRewardsManager;
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if ((pOVar10 != (Object *)0x0) &&
           (bVar9 = 0, unaff_EDI = unaff_EDI, pLVar77 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar77,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
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
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar16,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar16 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar16,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        pKVar78 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar16,
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
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar78;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar16 = unaff_ESI;
      }
      bVar9 = 0;
      if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pIVar11 = (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar9 = pIVar11 < pIVar12;
        if (pIVar11 == pIVar12) {
          piVar13 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar13,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
      pMVar14 = (this->fields).networkGame;
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar14,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar79 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      fVar28 = pVVar79->z;
      Var32 = *(unkbyte9 *)pVVar79;
      pQVar80 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar81 = pQVar80->x;
      VStack_8.x = pQVar80->y;
      VStack_8.y = pQVar80->z;
      VStack_8.z = pQVar80->w;
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar14->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar13,(MethodInfo *)0x0)
          ;
          bVar9 = 0;
          if (pMVar76 != (MVPlayer *)0x0) {
            this_04 = (pMVar76->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_04 != (SpawnRolesManager *)0x0) {
              piVar13 = (int32_t *)func_?();
              position.z._1_2_ = (short)((uint)fVar28 >> 8);
              position._0_9_ = Var32;
              position.z._3_1_ = (char)((uint)fVar28 >> 0x18);
              rotation.y = VStack_8.x;
              rotation.x = fVar81;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_04,*piVar13,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    bVar9 = 0;
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
      pSVar23 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar23,(MethodInfo *)unaff_ESI);
      pUVar34 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar34,(MethodInfo *)0x0);
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar14 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar14->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = (_union_86)photonEvent;
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (bVar9 = 0, unaff_EDI = (_union_86)photonEvent, pOVar10 != (Object *)0x0)) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          if (pIVar11 != pIVar12) goto code_?;
          piVar13 = (int32_t *)func_?();
          pMVar76 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
          bVar9 = 0;
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar76 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar76,(ISpawnRoleChangeHandler *)pUVar34,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar16 = unaff_ESI;
        }
        bVar9 = 0;
        if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      _Var66.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar16,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar48 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      bVar9 = 0;
      unaff_EDI.typeHandle = _Var66.typeHandle;
      if ((_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (bVar9 = 0, pMVar48 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar48,_Var66.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar14,_Var66.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar14,(int32_t)_Var66.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            bVar9 = 0;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              pbVar59 = (bool *)func_?();
              bVar9 = 0;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar18 = false;
                }
                else {
                  bVar18 = true;
                }
                pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (bVar18) {
                  pDVar16 = unaff_ESI;
                }
                bVar9 = 0;
                if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar18 = false;
                  }
                  else {
                    bVar18 = true;
                  }
                  pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  if (bVar18) {
                    pDVar16 = unaff_ESI;
                  }
                  bVar9 = 0;
                  if (pDVar16 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pDVar16,
                               (SpawnRoleBodySwitchData *)_Var66.typeHandle,*pbVar59,
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
    bVar9 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      bVar9 = 0;
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar13 = (int32_t *)func_?();
        iVar29 = *piVar13;
        uStack_51 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar14 = (this->fields).networkGame;
        bVar9 = 0;
        if (pMVar14 != (MVNetworkGame *)0x0) {
          pMVar48 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar14,(MethodInfo *)0x0);
          bVar9 = 0;
          if (pMVar48 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar48,iVar29,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar25 = (undefined4 *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
            iVar49 = func_?();
            bVar9 = 0;
            if (iVar49 != 0) {
              pMVar57 = (MethodInfo *)0x0;
              pMVar50 = (MVWorldObjectSpawner *)func_?();
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar50,(int32_t)unaff_ESI,pMVar57);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar14 = (this->fields).networkGame;
    bVar9 = 0;
    unaff_EDI = unaff_EDI;
    if (pMVar14 != (MVNetworkGame *)0x0) {
      unaff_EDI = (_union_86)(pMVar14->fields).playerContainer;
      bVar9 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (photonEvent != (EventData *)0x0) {
        iVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        bVar9 = 0;
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          bVar22 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar29,&pMStack_6,
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
                    (photonEvent,0xde,(MethodInfo *)0x0);
          puVar82 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar82);
          bVar9 = 0;
          if (pMStack_6 != (MVPlayer *)0x0) {
            if ((pMStack_6->fields).playerState != *puVar82) {
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
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar16 = unaff_ESI;
          }
          bVar9 = 0;
          if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar16,(MethodInfo *)0x0);
        pMVar65 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        bVar9 = 0;
        if (pMVar65 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar65,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      bVar9 = 0;
      if (photonEvent != (EventData *)0x0) {
        this_10 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (this_10 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var66 = (_union_86)this_10->klass;
          if ((*(byte *)(_Var66.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var66.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pDVar83 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar18) {
            pDVar83 = this_10;
          }
          bVar9 = 0;
          this_10 = pDVar83;
          unaff_EDI = _Var66;
          if (pDVar83 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        bVar9 = 0;
        if (this_10 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pMVar57 = (MethodInfo *)&UNK_?;
          this_11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_10,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          bVar9 = 0;
          if (this_11 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar84 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_11,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)&stack0xffffff88;
            VStack_8.y = 0.0;
            _Var66 = (_union_86)pDVar84->_currentValue;
            uStack_1 = 3;
            VStack_8.z = (float)unaff_ESI;
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
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar57);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var66.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var66;
                }
                bVar9 = 0;
                photonEvent = (EventData *)unaff_ESI;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              bVar9 = 0;
              if (this_10 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar85 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_10,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar57 = (MethodInfo *)::StringLiteral___;
              if (TVar85.m_Index == 0) {
                pSVar23 = (String *)0x0;
              }
              else {
                pSVar23 = (String *)func_?();
              }
              pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)pMVar57,pSVar23,
                                   (MethodInfo *)0x0);
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
      bVar9 = 0;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          _Var66 = unaff_EDI;
          if (pIVar11 != pIVar12) goto code_?;
          puVar25 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
          pMVar14 = (this->fields).networkGame;
          bVar9 = 0;
          unaff_EDI = (_union_86)this;
          if (pMVar14 != (MVNetworkGame *)0x0) {
            pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar14,(MethodInfo *)0x0);
            bVar9 = 0;
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
              pMVar14 = (this->fields).networkGame;
              bVar9 = 0;
              if (pMVar14 != (MVNetworkGame *)0x0) {
                pMVar75 = (pMVar14->fields).playerContainer;
                bVar9 = 0;
                if (pMVar75 != (MVPlayerContainer *)0x0) {
                  bVar22 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                  if (bVar22 == 0) {
code_?:
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar75 = (pMVar14->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar75 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_3;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar75 = (pMVar14->fields).playerContainer;
                      bVar9 = 0;
                      if (pMVar75 != (MVPlayerContainer *)0x0) {
                        pMStack_44 = MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                        pDStack_52 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_52,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        VStack_8.z = (float)func_?();
                        pOVar10 = (Object *)func_?();
                        bVar9 = 0;
                        if (pDStack_52 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                     (Object *)VStack_8.z,pOVar10,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_51 = 3;
                          pOVar10 = (Object *)func_?();
                          bVar9 = 0;
                          if (pMStack_44 != (MVPlayer *)0x0) {
                            pUVar86 = (pMStack_44->fields)._UserProfileData_k__BackingField;
                            bVar9 = 0;
                            if (pUVar86 != (UserProfileData *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_52,
                                         pOVar10,(Object *)(pUVar86->fields).UserName,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_45 = 6;
                              VStack_8.z = (float)func_?();
                              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              bVar9 = 0;
                              if (pMVar14 != (MVNetworkGame *)0x0) {
                                this_05 = (pMVar14->fields)._Friends_k__BackingField;
                                bVar9 = 0;
                                if (this_05 != (FriendList *)0x0) {
                                  bStack_87 = FriendList::FriendList_IsFriend
                                                        (this_05,(pMStack_44->fields).
                                                                 _ProfileID_k__BackingField,
                                                         (MethodInfo *)0x0);
                                  pOVar10 = (Object *)func_?();
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_52
                                             ,(Object *)VStack_8.z,pOVar10,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_52
                                             ,(MethodInfo *)0x0);
                                  pMVar14 = (this->fields).networkGame;
                                  bVar9 = 0;
                                  if (pMVar14 != (MVNetworkGame *)0x0) {
                                    pGVar61 = (pMVar14->fields).gameStatCounterManager;
                                    bVar9 = 0;
                                    if (pGVar61 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar61,(int32_t)unaff_ESI,
                                                 (pMStack_44->fields)._Team_k__BackingField,
                                                 (MethodInfo *)0x0);
                                      pMVar14 = (this->fields).networkGame;
                                      bVar9 = 0;
                                      if (pMVar14 != (MVNetworkGame *)0x0) {
                                        pGVar61 = (pMVar14->fields).gameStatCounterManager;
                                        bVar9 = 0;
                                        if (pGVar61 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar61,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        bVar9 = 0;
        unaff_EDI = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          pIVar11 = (pOVar10->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar9 = pIVar11 < pIVar12;
          _Var66 = unaff_EDI;
          if (pIVar11 == pIVar12) {
            puVar25 = (undefined4 *)func_?();
            pMStack_53 = (MVWorldObject *)*puVar25;
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xfe,(MethodInfo *)0x0);
            bVar9 = 0;
            unaff_EDI = unaff_EDI;
            if (pOVar10 != (Object *)0x0) {
              pIVar11 = (pOVar10->klass->_0).element_class;
              pIVar12 = (TypeInfo__System__Int32->_0).element_class;
              bVar9 = pIVar11 < pIVar12;
              if (pIVar11 != pIVar12) goto code_?;
              piVar64 = (int *)func_?();
              iVar49 = *piVar64;
              _Var66.typeHandle =
                   (Il2CppMetadataTypeHandle)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var66.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var66.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var66.typeHandle;
                }
                bVar9 = 0;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xbc,(MethodInfo *)0x0);
              bVar9 = 0;
              if (pOVar10 != (Object *)0x0) {
                pIVar11 = (pOVar10->klass->_0).element_class;
                pIVar12 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                bVar9 = pIVar11 < pIVar12;
                _Var66 = unaff_EDI;
                if (pIVar11 != pIVar12) goto code_?;
                puVar54 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar54;
                pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item(photonEvent,0x59,(MethodInfo *)0x0);
                bVar9 = 0;
                if (pOVar10 != (Object *)0x0) {
                  pIVar11 = (pOVar10->klass->_0).element_class;
                  pIVar12 = (TypeInfo__System__Int32->_0).element_class;
                  bVar9 = pIVar11 < pIVar12;
                  if (pIVar11 != pIVar12) goto code_?;
                  p_Var52 = (_union_86 *)func_?();
                  _Stack_28 = *p_Var52;
                  pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xd0,(MethodInfo *)0x0);
                  bVar9 = 0;
                  if (pOVar10 != (Object *)0x0) {
                    pIVar11 = (pOVar10->klass->_0).element_class;
                    pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                    bVar9 = pIVar11 < pIVar12;
                    if (pIVar11 != pIVar12) goto code_?;
                    pbVar59 = (bool *)func_?();
                    bVar22 = *pbVar59;
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?();
                    }
                    pDVar16 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                        pDVar16 = unaff_ESI;
                      }
                      bVar9 = 0;
                      if (pDVar16 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                      goto code_?;
                    }
                    VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)pDVar16,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar14 = (this->fields).networkGame;
                    bVar9 = 0;
                    if (pMVar14 != (MVNetworkGame *)0x0) {
                      pMVar35 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar14,(MethodInfo *)0x0);
                      bVar9 = 0;
                      if (pMVar35 != (MVLocalPlayer *)0x0) {
                        if (iVar49 == (pMVar35->fields)._._ActorNr_k__BackingField) {
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
                                  ((MVPlayer *)unaff_ESI,iVar49,(int32_t)pMStack_53,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_8.z,0,bVar22,(MethodInfo *)0x0);
                        bVar9 = 0;
                        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                          (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                          pMVar14 = (this->fields).networkGame;
                          bVar9 = 0;
                          if (pMVar14 != (MVNetworkGame *)0x0) {
                            pMVar75 = (pMVar14->fields).playerContainer;
                            bVar9 = 0;
                            if (pMVar75 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar75,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
  _Var66 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  unaff_EDI = _Var66;
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar88 = func_?();
  bVar89 = (byte)extraout_ECX + *(byte *)(unaff_EBX + 0x53);
  bVar18 = CARRY1((byte)extraout_ECX,*(byte *)(unaff_EBX + 0x53)) || CARRY1(bVar89,bVar9);
  bVar89 = bVar89 + bVar9;
  iVar49 = CONCAT31((int3)((uint)extraout_ECX >> 8),bVar89);
  pbVar47 = (byte *)((int)uVar88 + 0x4b);
  bVar90 = *pbVar47;
  bVar91 = (byte)((uint)unaff_EBX >> 8);
  bVar9 = *pbVar47;
  *pbVar47 = bVar9 + bVar91 + bVar18;
  bVar92 = (byte)((ulonglong)uVar88 >> 8);
  bVar18 = CARRY1(in_stack_93,bVar92) ||
            CARRY1(in_stack_93 + bVar92,
                   CARRY1(bVar90,bVar91) || CARRY1(bVar9 + bVar91,bVar18));
  bVar94 = (byte)unaff_EBX;
  bVar9 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image
            + bVar94;
  bVar95 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0)
                             .image,bVar94) || CARRY1(bVar9,bVar18);
  *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       bVar9 + bVar18;
  pbVar47 = (byte *)(iVar49 + -0xfefacb3);
  bVar18 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar95);
  *pbVar47 = *pbVar47 + bVar92 + bVar95;
  bVar9 = (byte)((ulonglong)uVar88 >> 0x20);
  bVar96 = bVar9 + bVar92;
  bVar95 = CARRY1(bVar9,bVar92) || CARRY1(bVar96,bVar18);
  bVar96 = bVar96 + bVar18;
  bVar9 = (byte)((ulonglong)uVar88 >> 0x28);
  bVar97 = bVar9 + bVar89;
  bVar18 = CARRY1(bVar9,bVar89) || CARRY1(bVar97,bVar95);
  bVar97 = bVar97 + bVar95;
  pbVar47 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).
                           image + iVar49 * 2);
  bVar9 = *pbVar47;
  bVar90 = *pbVar47;
  *pbVar47 = bVar90 + bVar97 + bVar18;
  bVar18 = CARRY1(in_stack_98,bVar96) ||
            CARRY1(in_stack_98 + bVar96,
                   CARRY1(bVar9,bVar97) || CARRY1(bVar90 + bVar97,bVar18));
  bVar99 = (byte)uVar88 + bVar97;
  bVar95 = CARRY1((byte)uVar88,bVar97) || CARRY1(bVar99,bVar18);
  bVar99 = bVar99 + bVar18;
  pbVar47 = (byte *)(CONCAT31((int3)((ulonglong)uVar88 >> 8),bVar99) + 0x50);
  bVar100 = (byte)((uint)extraout_ECX >> 8);
  bVar18 = CARRY1(*pbVar47,bVar100) || CARRY1(*pbVar47 + bVar100,bVar95);
  *pbVar47 = *pbVar47 + bVar100 + bVar95;
  bVar95 = CARRY1(bVar94,bVar91) || CARRY1(bVar94 + bVar91,bVar18);
  bVar94 = bVar94 + bVar91 + bVar18;
  pbVar101 = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar94);
  pbVar47 = pbVar101 + 0x51;
  bVar18 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar95);
  *pbVar47 = *pbVar47 + bVar89 + bVar95;
  pbVar47 = pbVar101 + 0x23105351;
  bVar95 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar18);
  *pbVar47 = *pbVar47 + bVar94 + bVar18;
  uVar102 = (undefined2)((ulonglong)uVar88 >> 0x10);
  pbVar47 = pbVar101 + 0x18105352;
  bVar90 = *pbVar47;
  bVar9 = *pbVar47;
  *pbVar47 = bVar9 + bVar100 + bVar95;
  bVar18 = CARRY1(in_stack_103,bVar96) ||
            CARRY1(in_stack_103 + bVar96,
                   CARRY1(bVar90,bVar100) || CARRY1(bVar9 + bVar100,bVar95));
  bVar95 = CARRY1(bVar96,bVar92) || CARRY1(bVar96 + bVar92,bVar18);
  uVar104 = (undefined3)(CONCAT22((short)((ulonglong)uVar88 >> 0x30),CONCAT11(bVar97,bVar96)) >> 8);
  bVar9 = bVar96 + bVar92 + bVar18;
  pbVar47 = pbVar101 + 0x54;
  bVar18 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar95);
  *pbVar47 = *pbVar47 + bVar99 + bVar95;
  bVar95 = CARRY1(bVar99,bVar97) || CARRY1(bVar99 + bVar97,bVar18);
  bVar89 = bVar99 + bVar97 + bVar18;
  pbVar47 = (byte *)(CONCAT31(uVar104,bVar9) + 0x54);
  bVar18 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,bVar95);
  *pbVar47 = *pbVar47 + bVar92 + bVar95;
  bVar95 = CARRY1(bVar92,bVar94) || CARRY1(bVar92 + bVar94,bVar18);
  bVar90 = bVar92 + bVar94 + bVar18;
  bVar18 = CARRY1(bVar9,bVar90) || CARRY1(bVar9 + bVar90,bVar95);
  bVar96 = bVar9 + bVar90 + bVar95;
  iVar105 = CONCAT31(uVar104,bVar96);
  pbVar47 = (byte *)(iVar49 + 0x3a10538d);
  bVar95 = CARRY1(*pbVar47,bVar97) || CARRY1(*pbVar47 + bVar97,bVar18);
  *pbVar47 = *pbVar47 + bVar97 + bVar18;
  bVar9 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image
            + bVar96;
  bVar18 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0)
                             .image,bVar96) || CARRY1(bVar9,bVar95);
  *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       bVar9 + bVar95;
  pbVar47 = (byte *)(iVar105 + 0x1f105357);
  bVar95 = CARRY1(*pbVar47,bVar100) || CARRY1(*pbVar47 + bVar100,bVar18);
  *pbVar47 = *pbVar47 + bVar100 + bVar18;
  pbVar47 = (byte *)((int)pbVar101 * 3 + 0x53);
  bVar18 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar95);
  *pbVar47 = *pbVar47 + bVar94 + bVar95;
  pbVar47 = pbVar101 + -0x25efaca7;
  bVar95 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar18);
  *pbVar47 = *pbVar47 + bVar89 + bVar18;
  pbVar47 = pbVar101 + 0x3a10535a;
  bVar18 = CARRY1(*pbVar47,bVar91) || CARRY1(*pbVar47 + bVar91,bVar95);
  *pbVar47 = *pbVar47 + bVar91 + bVar95;
  pbVar47 = (byte *)(iVar105 + -0x48efaca5);
  bVar95 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar18);
  *pbVar47 = *pbVar47 + bVar94 + bVar18;
  bVar18 = CARRY1(bVar90,bVar90) || CARRY1(bVar90 * '\x02',bVar95);
  bVar97 = bVar90 * '\x02' + bVar95;
  pbVar106 = (byte *)CONCAT22(uVar102,CONCAT11(bVar97,bVar89));
  bVar95 = CARRY1(*pbVar101,bVar96) || CARRY1(*pbVar101 + bVar96,bVar18);
  *pbVar101 = *pbVar101 + bVar96 + bVar18;
  *(byte **)(pbVar101 + -4) = pbVar101;
  bVar9 = *(char *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image
            + bVar91;
  bVar18 = CARRY1(*(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0)
                             .image,bVar91) || CARRY1(bVar9,bVar95);
  *(byte *)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image =
       bVar9 + bVar95;
  iVar49 = *(int *)(pbVar101 + -4);
  *(byte **)(iVar49 + -4) = pbVar101;
  pbVar47 = pbVar106 + 0x5c;
  bVar90 = *pbVar47;
  bVar9 = *pbVar47;
  *pbVar47 = bVar9 + bVar91 + bVar18;
  *(byte **)(iVar49 + -8) = pbVar101;
  bVar18 = CARRY1(in_stack_107,bVar96) ||
            CARRY1(in_stack_107 + bVar96,
                   CARRY1(bVar90,bVar91) || CARRY1(bVar9 + bVar91,bVar18));
  iVar108 = *(int *)(iVar49 + -8);
  *(byte **)(iVar49 + -8) = pbVar101;
  pbVar47 = (byte *)(iVar108 + 0x5ebd1053 + (int)pbVar101 * 2);
  bVar95 = CARRY1(*pbVar47,bVar91) || CARRY1(*pbVar47 + bVar91,bVar18);
  *pbVar47 = *pbVar47 + bVar91 + bVar18;
  *(byte **)(iVar49 + -0xc) = pbVar101;
  pbVar47 = pbVar106 + -0x5eefaca1;
  bVar18 = CARRY1(*pbVar47,bVar96) || CARRY1(*pbVar47 + bVar96,bVar95);
  *pbVar47 = *pbVar47 + bVar96 + bVar95;
  uVar71 = *(undefined2 *)(iVar49 + -0xc);
  *(byte **)(iVar49 + -0xc) = pbVar101;
  pbVar47 = pbVar106 + -0x24efac9c;
  bVar95 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar18);
  *pbVar47 = *pbVar47 + bVar94 + bVar18;
  *(byte **)(iVar49 + -0x10) = pbVar101;
  pbVar47 = (byte *)(iVar105 + 0x66);
  bVar18 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar95);
  *pbVar47 = *pbVar47 + bVar89 + bVar95;
  *(byte **)(iVar49 + -0x14) = pbVar101;
  pbVar47 = (byte *)(iVar105 + 0x73105366);
  bVar95 = CARRY1(*pbVar47,bVar97) || CARRY1(*pbVar47 + bVar97,bVar18);
  *pbVar47 = *pbVar47 + bVar97 + bVar18;
  sVar109 = (short)(iVar49 + -0x14);
  puVar25 = (undefined4 *)segment(in_SS,sVar109 + -4);
  *puVar25 = pbVar101;
  bVar18 = CARRY1(bVar91,bVar97) || CARRY1(bVar91 + bVar97,bVar95);
  bVar99 = bVar91 + bVar97 + bVar95;
  pcVar60 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar99,bVar94));
  sVar109 = sVar109 + -8;
  iVar110 = CONCAT22((short)((uint)(iVar49 + -0x14) >> 0x10),sVar109);
  puVar25 = (undefined4 *)segment(in_SS,sVar109);
  *puVar25 = pcVar60;
  pbVar47 = (byte *)(pcVar60 + 0x68);
  bVar95 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar18);
  *pbVar47 = *pbVar47 + bVar94 + bVar18;
  *(char **)(iVar110 + -4) = pcVar60;
  pbVar47 = pbVar101 + iVar108 * 2;
  bVar18 = CARRY1(*pbVar47,bVar96) || CARRY1(*pbVar47 + bVar96,bVar95);
  *pbVar47 = *pbVar47 + bVar96 + bVar95;
  *(char **)(iVar110 + -8) = pcVar60;
  pbVar47 = pbVar101 + 0x5e105369;
  bVar90 = *pbVar47;
  bVar9 = *pbVar47;
  *pbVar47 = bVar9 + bVar99 + bVar18;
  *(undefined4 *)(iVar110 + -0xc) = 0x53;
  *pcVar60 = *pcVar60 + bVar89 + (CARRY1(bVar90,bVar99) || CARRY1(bVar9 + bVar99,bVar18));
  lVar111 = (longlong)*(int *)(pcVar60 + 0x10) * 0x3c;
  uVar112 = (uint)lVar111;
  puVar54 = (undefined1 *)((int)&(unaff_EDI.type)->data + 1);
  uVar55 = in((short)lVar111);
  *(undefined1 *)&(unaff_EDI.type)->data = uVar55;
  *(char **)(iVar110 + -0x10) = pcVar60;
  bVar18 = CARRY1(bVar94,bVar94) || CARRY1(bVar94 * '\x02',(int)uVar112 != lVar111);
  bVar96 = bVar94 * '\x02' + ((int)uVar112 != lVar111);
  pbVar113 = (byte *)CONCAT31((int3)((uint)pcVar60 >> 8),bVar96);
  ppMVar114 = &(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).gc_desc;
  out((MVNetworkGame__Class *)
      (((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image,(short)lVar111);
  puVar115 = (undefined1 *)(iVar110 + -0x14);
  *(byte **)(iVar110 + -0x14) = pbVar113;
  pbVar47 = pbVar106 + 0x28105370;
  bVar9 = *pbVar47;
  bVar90 = *pbVar47 + bVar89;
  bVar95 = CARRY1(*pbVar47,bVar89) || CARRY1(bVar90,bVar18);
  *pbVar47 = bVar90 + bVar18;
  if (SCARRY1(bVar9,bVar89) == SCARRY1(bVar90,bVar18)) {
    puVar116 = (undefined1 *)(iVar110 + -0x18);
    *(byte **)(iVar110 + -0x18) = pbVar113;
    goto code_?;
  }
  bVar9 = *(byte *)ppMVar114;
  bVar90 = (byte)lVar111;
  cVar117 = *(char *)ppMVar114;
  *(byte *)ppMVar114 = cVar117 + bVar90 + bVar95;
  bVar92 = (byte)((ulonglong)lVar111 >> 8);
  if (CARRY1(bVar9,bVar90) || CARRY1(cVar117 + bVar90,bVar95)) {
    puVar118 = (undefined1 *)(iVar110 + -0x18);
    *(byte **)(iVar110 + -0x18) = pbVar113;
    bVar9 = bVar92 * '\x02';
    bVar18 = CARRY1(bVar92,bVar92) || 0xfe < bVar9;
    uVar112 = CONCAT22((short)((ulonglong)lVar111 >> 0x10),CONCAT11(bVar9 + 1,bVar90));
    if ((SCARRY1(bVar92,bVar92) != SCARRY1(bVar9,'\x01')) != (char)(bVar9 + 1) < '\0')
    goto code_?;
    *(byte **)(iVar110 + -0x1c) = pbVar113;
    *pbVar101 = *pbVar101 + bVar89 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar47 = (byte *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                            ((int)photonEvent + 0x66105178))->vtable).get_Count_2.methodPtr + 2);
  bVar18 = CARRY1(*pbVar47,bVar99);
  *pbVar47 = *pbVar47 + bVar99;
  if (bVar18) {
    bVar95 = CARRY1(*pbVar106,bVar90) || CARRY1(*pbVar106 + bVar90,bVar18);
    *pbVar106 = *pbVar106 + bVar90 + bVar18;
    if (*pbVar106 != 0) {
      bVar18 = CARRY1(bVar97,bVar97) || CARRY1(bVar97 * '\x02',bVar95);
      bVar99 = bVar97 * '\x02' + bVar95;
      pbVar113 = *(byte **)(iVar110 + -0x14);
      *(byte **)(iVar110 + -0x14) = pbVar113;
      bVar95 = CARRY1(bVar89,bVar92) || CARRY1(bVar89 + bVar92,bVar18);
      bVar96 = bVar89 + bVar92 + bVar18;
      *(byte **)(iVar110 + -0x18) = pbVar113;
      puVar119 = &(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_1).cctor_thread
      ;
      bVar9 = (char)*puVar119 + bVar99;
      bVar18 = CARRY1((byte)*puVar119,bVar99) || CARRY1(bVar9,bVar95);
      *(byte *)puVar119 = bVar9 + bVar95;
      *(byte **)(iVar110 + -0x1c) = pbVar113;
      bVar95 = CARRY1(bVar90,bVar99) || CARRY1(bVar90 + bVar99,bVar18);
      bVar97 = bVar90 + bVar99 + bVar18;
      *(byte **)(iVar110 + -0x20) = pbVar113;
      bVar9 = bVar96 + bVar92;
      bVar18 = CARRY1(bVar96,bVar92) || CARRY1(bVar9,bVar95);
      bVar9 = bVar9 + bVar95;
      pbVar106 = (byte *)CONCAT31((int3)(CONCAT22(uVar102,CONCAT11(bVar99,bVar89)) >> 8),bVar9);
      *(byte **)(iVar110 + -0x24) = pbVar113;
      bVar90 = bVar97 + bVar99;
      bVar95 = CARRY1(bVar97,bVar99) || CARRY1(bVar90,bVar18);
      uVar112 = CONCAT31((int3)((ulonglong)lVar111 >> 8),bVar90 + bVar18);
      puVar116 = (undefined1 *)(iVar110 + -0x28);
      *(byte **)(iVar110 + -0x28) = pbVar113;
      bVar18 = CARRY1(bRam_?,bVar91) || CARRY1(bRam_? + bVar91,bVar95);
      bRam_? = bRam_? + bVar91 + bVar95;
      if (bRam_? != 0) {
        puVar120 = (undefined1 *)(iVar110 + -0x2c);
        *(byte **)(iVar110 + -0x2c) = pbVar113;
        cRam_? = cRam_? + bVar94 + bVar18;
        puVar121 = puVar54;
        goto code_?;
      }
      bVar90 = *pbVar113;
      bVar96 = (byte)pbVar113;
      bVar89 = *pbVar113 + bVar96;
      bVar95 = CARRY1(bVar90,bVar96) || CARRY1(bVar89,bVar18);
      *pbVar113 = bVar89 + bVar18;
      if ((CARRY1(bVar90,bVar96) || CARRY1(bVar89,bVar18)) || *pbVar113 == 0) {
        puVar122 = (undefined1 *)(iVar110 + -0x2c);
        *(byte **)(iVar110 + -0x2c) = pbVar113;
        pbVar47 = (byte *)(iVar108 + -0x7b);
        bVar90 = (byte)((uint)pbVar113 >> 8);
        bVar9 = *pbVar47 + bVar90;
        bVar123 = CARRY1(*pbVar47,bVar90) || CARRY1(bVar9,bVar95);
        *pbVar47 = bVar9 + bVar95;
        goto code_?;
      }
      pbVar47 = pbVar106 + 0x48105376;
      bVar90 = *pbVar47;
      bVar89 = *pbVar47 + bVar91;
      bVar18 = CARRY1(bVar90,bVar91) || CARRY1(bVar89,bVar95);
      *pbVar47 = bVar89 + bVar95;
      if ((!CARRY1(bVar90,bVar91) && !CARRY1(bVar89,bVar95)) && *pbVar47 != 0)
      goto code_?;
      puVar124 = (undefined1 *)(iVar110 + -0x2c);
      *(byte **)(iVar110 + -0x2c) = pbVar113;
      bVar95 = CARRY1(*(byte *)ppMVar114,bVar9) || CARRY1(*(char *)ppMVar114 + bVar9,bVar18);
      *(byte *)ppMVar114 = *(char *)ppMVar114 + bVar9 + bVar18;
      goto code_?;
    }
  }
  else {
    puVar115 = (undefined1 *)(iVar110 + -0x18);
    *(byte **)(iVar110 + -0x18) = pbVar113;
    pbVar47 = (byte *)(uVar112 + 0x7f);
    bVar95 = CARRY1(*pbVar47,bVar96) || CARRY1(*pbVar47 + bVar96,bVar18);
    *pbVar47 = *pbVar47 + bVar96 + bVar18;
  }
  puVar118 = puVar115 + -4;
  *(byte **)(puVar115 + -4) = pbVar113;
code_?:
  bVar18 = CARRY1(*pbVar106,bVar91) || CARRY1(*pbVar106 + bVar91,bVar95);
  *pbVar106 = *pbVar106 + bVar91 + bVar95;
  pbVar47 = pbVar113 + 0x10;
  bVar90 = *pbVar47;
  bVar9 = *pbVar47;
  *pbVar47 = bVar9 + 0x16 + bVar18;
  *(undefined **)(pbVar113 + 0x10) =
       &UNK_? +
       (uint)(0xe9 < bVar90 || CARRY1(bVar9 + 0x16,bVar18)) + *(int *)(pbVar113 + 0x10);
  bVar90 = (byte)pbVar106;
  bVar18 = bVar90 < *(byte *)(uVar112 + 0x82c91053);
  bVar90 = bVar90 - *(byte *)(uVar112 + 0x82c91053);
  *(byte **)(puVar118 + -4) = pbVar113;
  pbVar47 = pbVar101 + -0x7d;
  bVar9 = *pbVar47 + (byte)uVar112;
  bVar95 = CARRY1(*pbVar47,(byte)uVar112) || CARRY1(bVar9,bVar18);
  *pbVar47 = bVar9 + bVar18;
  puVar120 = puVar118 + -8;
  *(byte **)(puVar118 + -8) = pbVar113;
  bVar89 = (byte)pbVar113;
  bVar9 = bVar89 + bVar90;
  pbVar113 = (byte *)CONCAT31((int3)((uint)pbVar113 >> 8),bVar9 + bVar95);
  *(uint *)(pbVar113 + 0x10) =
       *(int *)(pbVar113 + 0x10) + 0x3b + (uint)(CARRY1(bVar89,bVar90) || CARRY1(bVar9,bVar95));
  pbVar106 = (byte *)(CONCAT31((int3)((uint)pbVar106 >> 8),bVar90) | 0x7d105385);
  puVar121 = puVar54;
code_?:
  puVar54 = puVar121 + 1;
  *puVar121 = (char)pbVar106;
  bVar95 = false;
  puVar124 = puVar120 + -4;
  *(undefined2 *)(puVar120 + -4) = uVar71;
code_?:
  do {
    LOCK();
    bVar9 = pbVar113[0x10];
    pbVar113[0x10] = (byte)uVar112;
    uVar125 = uVar112 >> 8;
    UNLOCK();
    piVar64 = (int *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                             ((int)photonEvent + -0x780ff034))->_1).element_size + 3);
    *piVar64 = *piVar64 + 1;
    puVar116 = puVar124 + -4;
    *(byte **)(puVar124 + -4) = pbVar113;
    bVar90 = (byte)(uVar112 >> 8);
    bVar18 = CARRY1((byte)pbVar106,bVar90) || CARRY1((byte)pbVar106 + bVar90,bVar95);
    uVar112 = (uint)pbVar106 & 0xffffff00;
    pbVar106 = (byte *)CONCAT31((int3)uVar125,bVar9);
code_?:
    puVar126 = puVar116 + -4;
    puVar122 = puVar116 + -4;
    *(byte **)(puVar116 + -4) = pbVar113;
    pbVar47 = (byte *)(iVar108 + -0x6fefac77);
    bVar127 = CARRY1(*pbVar47,(byte)pbVar106);
    bVar9 = *pbVar47 + (byte)pbVar106;
    bVar95 = CARRY1(bVar9,bVar18);
    bVar123 = bVar127 || bVar95;
    *pbVar47 = bVar9 + bVar18;
    uVar112 = CONCAT31((int3)(uVar112 >> 8),pbVar113[0x10]);
    if ((bVar127 || bVar95) || *pbVar47 == 0) goto code_?;
    if ((!bVar127 && !bVar95) && *pbVar47 != 0) break;
code_?:
    puVar124 = puVar122 + -4;
    *(byte **)(puVar122 + -4) = pbVar113;
    pbVar47 = (byte *)(uVar112 + 0x6105385);
    bVar95 = CARRY1(*pbVar47,bVar91) || CARRY1(*pbVar47 + bVar91,bVar123);
    *pbVar47 = *pbVar47 + bVar91 + bVar123;
  } while( true );
  pbVar47 = pbVar106 + 0x76;
  bVar18 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar123);
  *pbVar47 = *pbVar47 + bVar94 + bVar123;
  puVar128 = (undefined4 *)(puVar116 + -8);
  puVar116 = puVar116 + -8;
  *puVar128 = pbVar113;
code_?:
  pbVar47 = pbVar106 + 0x12105376;
  bVar95 = CARRY1(*pbVar47,bVar91) || CARRY1(*pbVar47 + bVar91,bVar18);
  *pbVar47 = *pbVar47 + bVar91 + bVar18;
  if ((char)*pbVar47 < '\0') {
    *(byte **)(puVar116 + -4) = pbVar113;
    LOCK();
    *(uint *)(pbVar113 + 0x10) = uVar112;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  ppMVar129 = &(((Dictionary_2_System_Object_System_Object___Class *)((int)photonEvent + 0xb1052a4))->
             vtable).ToString.method;
  bVar18 = CARRY1(*(byte *)ppMVar129,bVar94) || CARRY1(*(char *)ppMVar129 + bVar94,bVar95);
  *(byte *)ppMVar129 = *(char *)ppMVar129 + bVar94 + bVar95;
  if (*(char *)ppMVar129 < '\0') {
    pbVar47 = pbVar101 + 0x7310537a;
    bVar90 = (byte)((uint)pbVar106 >> 8);
    bVar9 = *pbVar47 + bVar90;
    bVar95 = CARRY1(*pbVar47,bVar90) || CARRY1(bVar9,bVar18);
    *pbVar47 = bVar9 + bVar18;
    if ((POPCOUNT(*pbVar47) & 1U) == 0) goto code_?;
    puVar126 = puVar116 + -4;
    *(byte **)(puVar116 + -4) = pbVar113;
    puVar54[-0x75] = puVar54[-0x75] + (char)(uVar112 >> 8) + bVar95;
code_?:
    puVar118 = puVar126 + -4;
    *(byte **)(puVar126 + -4) = pbVar113;
    piVar64 = (int *)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                             ((int)photonEvent + -0x6f70efec))->_0).fields + 3);
    *piVar64 = (int)(pbVar101 + *piVar64);
    goto code_?;
  }
  goto code_?;
code_?:
  pbVar47 = (byte *)(iVar108 + 0x7df61053 + (int)puVar54 * 2);
  bVar9 = *pbVar47 + (byte)uVar112;
  bVar18 = CARRY1(*pbVar47,(byte)uVar112) || CARRY1(bVar9,bVar95);
  *pbVar47 = bVar9 + bVar95;
  puVar118 = puVar116 + -4;
  *(byte **)(puVar116 + -4) = pbVar113;
code_?:
  pbVar47 = pbVar106 + 0x5a10537e;
  bVar9 = *pbVar47;
  bVar90 = *pbVar47 + bVar91;
  bVar95 = CARRY1(*pbVar47,bVar91) || CARRY1(bVar90,bVar18);
  *pbVar47 = bVar90 + bVar18;
  if (*pbVar47 != 0 && (SCARRY1(bVar9,bVar91) != SCARRY1(bVar90,bVar18)) == (char)*pbVar47 < '\0'
     ) {
code_?:
    *(byte **)(puVar118 + -4) = pbVar113;
    pcVar130 = (code *)swi(3);
    (*pcVar130)();
    return;
  }
  goto code_?;
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

