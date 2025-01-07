
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
  _Var62 = (_union_86)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
      _Var62 = unaff_EDI;
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (_union_86)(pWVar13->fields)._.worldObjectClientManager,
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_28 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        unaff_EDI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pMVar15 = (MVNetworkGame__Class *)(pDVar14->_0).image;
          if (((pMVar15->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar15->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar16) {
            unaff_ESI = pDVar14;
          }
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar11,
                       (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar10 != (Object *)0x0)) {
      _Var62 = unaff_EDI;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar13->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar18,unaff_EDI.__klassIndex,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
         (pMVar18 = (pWVar13->fields)._.worldObjectClientManager,
         pMVar18 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar18,unaff_EDI.__klassIndex,pDVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
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
    unaff_EDI = (_union_86)this;
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        bVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           ((HashSet_1_System_ByteEnum_ *)pEVar19,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar20 == 0) {
          pSVar21 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar21 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar21,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (this->fields).dynamicEventCallbackManager;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          if ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) &&
             (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pEVar19,
                                     eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                    ),
             unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery ==
                (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              pSVar21 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar21 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
            pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
            if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              (*(pEVar19->fields)._._.invoke_impl)();
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
      _Var62 = unaff_EDI;
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (pMVar22 = (pWVar13->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      _Var62.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x31,(MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var62.typeHandle;
      if (pMVar22 != (MVWorldInventory *)0x0) {
        _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
        if ((_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (unaff_EDI.dummy = (void *)func_?(), _Stack_28.dummy = unaff_EDI.dummy,
           unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0))
        goto code_?;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMVar22->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar24 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 (int32_t)unaff_ESI,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            this_06 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_06,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pRVar24 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar24,this_06,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (_Var62 = (_union_86)(pWVar13->fields)._.worldInventory, unaff_EDI = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      unaff_EDI = _Var62;
      if ((_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar25 = (float *)func_?();
        fVar26 = *pfVar25;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)_Var62.type[1].data.typeHandle !=
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) &&
             (pRVar24 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                   _Var62.type[1].data.typeHandle,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar24 != (RuntimePrototypeCubeModel *)0x0)) {
            (pRVar24->fields).PendingScaleUpdate.hasValue = 0;
            *(undefined3 *)&(pRVar24->fields).PendingScaleUpdate.field_0x1 = 0;
            (pRVar24->fields).PendingScaleUpdate.value = 0.0;
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                      (pRVar24,fVar26,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
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
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar28 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar11,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x28,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar27 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar12,unaff_EDI.__klassIndex,iVar27,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar27 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar29 = (FriendStatus__Enum *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar12,unaff_EDI.__klassIndex,iVar27,*pFVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar12,*piVar11,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar12,*piVar11,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar12,unaff_EDI.__klassIndex,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar12,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar11,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar12->fields)._NetworkGameStateListener_k__BackingField,
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
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        p_Var49 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var49->dummy;
        puVar23 = (undefined4 *)func_?();
        pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar23;
        p_Var49 = (_union_86 *)func_?();
        _Stack_28 = *p_Var49;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (unaff_ESI->_0).byval_arg.data = _Stack_28;
        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery = pEVar19;
        (unaff_ESI->_0).namespaze = (char *)unaff_EDI;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar12 != (MVNetworkGame *)0x0) {
          iVar27 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar12,(MethodInfo *)0x0);
          pMVar30 = (unaff_ESI->_0).this_arg.data.dummy;
          *(int *)&(unaff_ESI->_0).byval_arg.attrs = (int)unaff_EDI.dummy + ((int)pEVar19 - iVar27);
          if (pMVar30 == (MVItemBusinessLogic *)0x0) goto code_?;
          pIVar31 = (unaff_ESI->_0).this_arg.data.array;
          pUVar32 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar32,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pIVar31 != (Il2CppArrayType *)0x0) {
            (*(code *)pIVar31->lobounds)();
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
         unaff_EDI = (_union_86)photonEvent, pMVar33 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar33->fields)._._ActorNr_k__BackingField;
        puVar23 = (undefined4 *)func_?();
        if ((Dictionary_2_System_Object_System_Object___Class *)*puVar23 == unaff_ESI)
        goto code_?;
        pMVar12 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = (_union_86)photonEvent,
           pWVar13 != (WorldNetwork *)0x0)) {
          _Var62 = (_union_86)(pWVar13->fields)._.worldObjectClientManager;
          _Stack_28 = _Var62;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          unaff_EDI = (_union_86)photonEvent;
          if (_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar11,pDVar17,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (_union_86)(this->fields).networkGame;
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
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar28 = *piVar11;
        pPVar34 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar34,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      _Stack_28 = (_union_86)*puVar23;
      pfVar25 = (float *)func_?();
      pIVar35 = (Il2CppClass *)*pfVar25;
      pfVar25 = (float *)func_?();
      VStack_9.x = *pfVar25;
      VStack_9.z = (float)_Stack_28;
      VStack_9.y = (float)pIVar35;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var49->dummy;
      puVar23 = (undefined4 *)func_?();
      uVar36 = *puVar23;
      puVar23 = (undefined4 *)func_?();
      _Var62 = _Stack_28;
      uVar37 = *puVar23;
      pMVar12 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        VVar38.y = VStack_9.y;
        VVar38.x = VStack_9.x;
        VVar38.z = VStack_9.z;
        camDir.y = (float)uVar36;
        camDir.x = (float)uVar37;
        camDir.z = (float)_Var62.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar12,*piVar11,VVar38,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar39 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar39,pDVar17,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar12 = (this->fields).networkGame;
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
      piVar11 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_3((Type *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar40 = (MVTeam__Enum *)func_?();
        team = *pMVar40;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar12,*piVar11,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
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
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar28 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar11,iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x3a,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar11,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pOVar10 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_28 = *p_Var49;
      pOVar41 = (Object *)func_?();
      pSVar21 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar41,
                           (MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar43 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar23 = (undefined4 *)func_?();
        pMStack_44 = (MVPlayer *)*puVar23;
        uStack_45 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var49->__klassIndex;
        pMVar12 = (this->fields).networkGame;
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar46 = (pMVar12->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pMVar46 != (MVLocalObjectController *)0x0) {
            pbVar47 = (byte *)func_?();
            bVar48 = *pbVar47;
            piVar11 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar46,*piVar11,(int32_t)pMStack_44,_Stack_24.__klassIndex,(uint)bVar48,
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pMVar49 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar49,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)TypeInfo__MVAvatar;
        if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (iVar50 = func_?(), iVar50 == 0)) goto code_?;
        iVar50 = func_?();
        if (iVar50 != 0) {
          func_?();
          func_?();
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var49->__klassIndex;
        uStack_45 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_34 = *p_Var49;
        pMVar12 = (this->fields).networkGame;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar12,(MethodInfo *)0x0),
           pMVar49 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar49,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          pMVar51 = (MVWorldObjectSpawner *)func_?();
          if (pMVar51 != (MVWorldObjectSpawner *)0x0) {
            pMStack_44 = (MVPlayer *)(pMVar51->fields).spawnWorldObjectID;
            uStack_52 = 3;
            pOVar10 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       unaff_EDI.typeHandle,pOVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar23 = (undefined4 *)func_?();
            pDStack_53 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar23;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar23 = (undefined4 *)func_?();
            pMStack_54 = (MVWorldObject *)*puVar23;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x3a,(MethodInfo *)0x0);
            p_Var49 = (_union_86 *)func_?();
            _Stack_24 = (_union_86)p_Var49->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            p_Var49 = (_union_86 *)func_?();
            _Stack_28 = (_union_86)p_Var49->__klassIndex;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            puVar23 = (undefined4 *)func_?();
            VStack_9.z = (float)*puVar23;
            pMVar12 = (this->fields).networkGame;
            unaff_EDI = (_union_86)this;
            if ((pMVar12 != (MVNetworkGame *)0x0) &&
               (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar13,(int32_t)pMStack_54,0,1,(int32_t)pMStack_44,(int32_t)pDStack_53,
                         _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar12,(MethodInfo *)0x0),
                 pMVar49 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_54 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar49,(int32_t)pDStack_53,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                unaff_EDI = (_union_86)
                            TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
                if (pMStack_54 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar12 = (this->fields).networkGame;
                  if (pMVar12 != (MVNetworkGame *)0x0) {
                    pMVar46 = (pMVar12->fields)._PlayerController_k__BackingField;
                    pMStack_54 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (pMVar46 != (MVLocalObjectController *)0x0) {
                      pbVar47 = (byte *)func_?();
                      bVar48 = *pbVar47;
                      piVar11 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar46,*piVar11,(int32_t)pDStack_53,_Stack_34.__klassIndex,
                                 (uint)bVar48,(MethodInfo *)0x0);
                      MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                (pMVar51,(int32_t)VStack_9.z,(MethodInfo *)0x0);
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
  case MVEventCodes__Enum_Reward:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar1 = (undefined1 *)func_?();
      uVar55 = *puVar1;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar25 = (float *)func_?();
      pFVar56 = (FieldInfo *)*pfVar25;
      _Stack_34.dummy = (void *)func_?();
      uStack_52 = uVar55;
      pOVar10 = (Object *)func_?();
      VStack_9.z = (float)pFVar56;
      pOVar41 = (Object *)func_?();
      pSVar21 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar10,pOVar41,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar21,(MethodInfo *)0x0);
      pMVar57 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar35 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar35->vtable[0].methodPtr & 0x100) == 0) {
        pIVar35 = (Il2CppClass *)func_?();
      }
      if (pIVar35->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar35 = (pMVar57->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar35->vtable[0].methodPtr & 0x100) == 0) {
        pIVar35 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar35->static_fields;
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
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = unaff_EDI,
         pWVar13 != (WorldNetwork *)0x0)) {
        this_01 = (pWVar13->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (this_01 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_01,runtimeEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, unaff_EDI = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (this_02 = (RuntimeEventManager *)(pWVar13->fields)._.runtimeEventManagerNetwork,
       unaff_EDI = unaff_EDI, this_02 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_24 = *p_Var49;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar59 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar59;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      pDStack_53 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar23 = (undefined4 *)func_?();
      pMStack_44 = (MVPlayer *)*puVar23;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar60 = (bool *)func_?();
      bVar20 = *pbVar60;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar61 = (char *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (*pcVar61 == '\0') {
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pGVar62 = (pMVar12->fields).gameStatCounterManager,
           pGVar62 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar62,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                     (int32_t)pDStack_53,(int32_t)pMStack_44,bVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
      else if ((pMVar12 != (MVNetworkGame *)0x0) &&
              (pGVar62 = (pMVar12->fields).gameStatCounterManager,
              pGVar62 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar62,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                   (int32_t)pDStack_53,(int32_t)pMStack_44,bVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar58 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pGVar62 = (pMVar12->fields).gameStatCounterManager, unaff_EDI = unaff_EDI,
         pGVar62 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar62,pBVar58,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar27 = *piVar11;
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
      pMVar12 = (this->fields).networkGame;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (this_03 = (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_03 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_03,iVar27,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar11,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar60 = (bool *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar63 = (pMVar12->fields)._GameCoinManager_k__BackingField, unaff_EDI = unaff_EDI,
         pMVar63 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar63,*pbVar60,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       pOVar10 != (Object *)0x0)) {
      _Var62 = unaff_EDI;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,200,(MethodInfo *)0x0);
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      }
      else {
        _Var62 = (_union_86)(unaff_ESI->_0).image;
        if ((*(byte *)(_Var62.__klassIndex + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            ((Il2CppClass_1 *)(_Var62.__klassIndex + 100))->typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (bVar16) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pMVar12 = (this->fields).networkGame;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar12,unaff_EDI.__klassIndex,
                   (Dictionary_2_System_Object_System_Object_ *)pDVar14,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent == (EventData *)0x0) ||
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0),
       _Var62.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var62.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
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
    pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar16) {
      pDVar64 = pDVar17;
    }
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    _Var62.dummy = (void *)func_?();
    if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar58 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var62.typeHandle,pBVar58,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      unaff_EDI.dummy = _Var62.dummy;
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          unaff_EDI = _Var62;
          goto code_?;
        }
        puVar59 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)_Var62 >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar59);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar60 = (bool *)func_?();
          pMVar12 = (this->fields).networkGame;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar12,(BytePacker *)_Var62.typeHandle,eventCode,*pbVar60,(MethodInfo *)0x0)
            ;
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
          unaff_EDI = (_union_86)photonEvent, pMVar33 != (MVLocalPlayer *)0x0)) &&
         (iVar50 = (pMVar33->fields)._._ActorNr_k__BackingField, unaff_EDI = (_union_86)photonEvent,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
        unaff_EDI = (_union_86)photonEvent;
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar65 = (int *)func_?();
        if (*piVar65 == iVar50) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
          unaff_EDI = (_union_86)photonEvent;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar63 = (pMVar12->fields)._GameCoinManager_k__BackingField,
             unaff_EDI = (_union_86)photonEvent, pMVar63 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset
                      (pMVar63,(this->fields).networkGame,(MethodInfo *)0x0);
            pMVar12 = (this->fields).networkGame;
            unaff_EDI = (_union_86)photonEvent;
            if (pMVar12 != (MVNetworkGame *)0x0) {
              pMVar66 = (pMVar12->fields).operationRequests;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              unaff_EDI = (_union_86)photonEvent;
              if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
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
                            (pMVar66->fields).peer;
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_EDI = (_union_86)photonEvent;
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
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
          uStack_2 = 0;
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            unaff_EDI = (_union_86)(pMVar12->fields).playerContainer;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if ((unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
               (pOVar10 != (Object *)0x0)) {
              if ((pOVar10->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar60 = (bool *)func_?();
              bVar20 = *pbVar60;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar11 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar11,bVar20,
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
    break;
  case MVEventCodes__Enum_RequestFriends:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    unaff_EDI = _Var62;
    if ((_Var62.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (pOVar10 == (Object *)0x0)) break;
    if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar61 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var62.typeHandle,(Dictionary_2_System_Object_System_Object_ *)0x0
                 ,*pcVar61 == '\0',(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
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
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar16) {
      pDVar14 = unaff_ESI;
    }
    if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)_Var62.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)pDVar14,*pcVar61 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    _Var62 = (_union_86)(this->fields).networkGame;
    unaff_EDI = _Var62;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       _Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var62.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pDVar64 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar16) {
        pDVar64 = pDVar17;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar64 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)_Var62.typeHandle,pDVar64,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
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
      pBVar58 = (Byte__Array *)0x0;
code_?:
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar58,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (pMVar12 != (MVNetworkGame *)0x0) {
        (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)unaff_EDI;
        func_?();
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      break;
    }
    pBVar58 = (Byte__Array *)func_?();
    unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (pBVar58 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (unaff_EDI = unaff_EDI, pOVar10 != (Object *)0x0)) {
      _Var62 = unaff_EDI;
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar66 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar67 = (pMVar66->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar67 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar67->klass->vtable).SendOperation.method)();
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
    unaff_EDI.dummy = (void *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
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
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar12->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if ((pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar68->fields).logicEventQueue, unaff_EDI = unaff_EDI,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
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
        unaff_EDI = (_union_86)photonEvent;
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0),
           unaff_EDI = (_union_86)photonEvent, pOVar10 != (Object *)0x0)) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
          iVar27 = *piVar11;
          unaff_EDI = (_union_86)photonEvent;
          if (pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
            bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               ((Dictionary_2_System_Int32_System_Single_ *)pEVar19,iVar27,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar20 == 0) {
              pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
              VStack_9.z = (float)func_?();
              System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System
              ::Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                        ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_9.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              unaff_EDI = (_union_86)photonEvent;
              if (pEVar19 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pEVar19,iVar27,
                         (Object *)VStack_9.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            pEVar19 = ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->ReceivedItemFromQuery;
            unaff_EDI = (_union_86)photonEvent;
            if ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) &&
               (this_08 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pEVar19,iVar27,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), unaff_EDI = (_union_86)photonEvent,
               this_08 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_08,(Object *)photonEvent,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        );
              *unaff_FS_OFFSET = pvStack_4;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar12->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar68,(MethodInfo *)0x0);
        pMVar69 = (pMVar68->fields).updateEvaluatorStep;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar69 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar11 = &(pMVar69->fields).stepTimestamp;
          *piVar11 = *piVar11 + 1000;
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
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar12->fields).logicObjectManagerClientWrapper, unaff_EDI = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      pMVar69 = *(MVNetworkGame_UpdateEvaluator **)&(unaff_ESI->_0).byval_arg.attrs;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar69 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        (pMVar69->fields).stepTimestamp = *piVar11;
code_?:
        iVar27 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
        (pMVar69->fields).lastUpdateTick = iVar27;
        (pMVar69->fields).accumulatedTime = 0;
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar12->fields).logicObjectManagerClientWrapper, unaff_EDI = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      while ((pEVar19 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0 &&
             (pMVar70 = (pEVar19->fields)._._.method_info, pMVar70 != (MethodInfo_1 *)0x0))) {
        if (unaff_EDI.__klassIndex <= (int)pMVar70[2].klass) goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
        pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = (_union_86)this;
    if ((pMVar12 == (MVNetworkGame *)0x0) ||
       (pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar12,(MethodInfo *)0x0),
       unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    photonEvent = (EventData *)unaff_ESI;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      if (pMVar49 != (MVWorldObjectClientManager *)0x0) {
        pMVar71 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar49,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0);
          if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          if (pMVar49 != (MVWorldObjectClientManager *)0x0) {
            iVar27._0_2_ = (unaff_ESI->_0).byval_arg.attrs;
            iVar27._2_1_ = (unaff_ESI->_0).byval_arg.type;
            iVar27._3_1_ = (unaff_ESI->_0).byval_arg.field_0x7;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar49,iVar27,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar71 == (MVWorldObject *)0x0) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar71->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar50 = func_?();
              if (iVar50 != 0) {
                bVar20 = 0x6e;
                pDVar14 = unaff_ESI;
                this_09 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_09,bVar20,(MethodInfo *)pDVar14);
                pMVar12 = (this->fields).networkGame;
                if ((pMVar12 != (MVNetworkGame *)0x0) &&
                   (pMVar46 = (pMVar12->fields)._PlayerController_k__BackingField,
                   pMVar46 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar46,1,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_4;
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
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (unaff_EDI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_34.typeHandle = unaff_EDI.typeHandle, photonEvent != (EventData *)0x0)) {
      VStack_9.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar28 = *piVar11;
        puVar1 = (undefined1 *)func_?();
        uVar55 = *puVar1;
        piVar11 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar11,
                   CONCAT31((int3)((uint)puVar1 >> 8),uVar55),iVar28,iVar27,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar60 = (bool *)func_?();
      bVar20 = *pbVar60;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = bVar20
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
      method_00 = (MethodInfo *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar57);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
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
        pSVar21 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar21,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar10[2].monitor;
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)photonEvent;
        if (pGVar72 != (GoldRewardManager *)0x0) {
          pbVar60 = (bool *)func_?();
          (pGVar72->fields).isGoldRewardGame = *pbVar60;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar60 = (bool *)func_?();
          BStack_8.m_value = *pbVar60;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar21 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_8,(MethodInfo *)0x0);
          pSVar21 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar21,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar21,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar73 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar21 = (String *)0x0;
      if (pSVar73 == (String *)0x0) {
code_?:
        pSVar21 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar21,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar21,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if (pSVar73->klass == TypeInfo__System__String) {
        pSVar21 = pSVar73;
      }
      if (pSVar21 != (String *)0x0) goto code_?;
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      _Var62 = unaff_EDI;
code_?:
      func_?();
      unaff_EDI = _Var62;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar50 = func_?();
      pMVar57 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar21 = StringLiteral_V;
      unaff_EDI = unaff_EDI;
      if (iVar50 != 0) {
        pDVar43 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar43,(Object *)pSVar21,pMVar57);
        pbVar60 = (bool *)func_?();
        bVar20 = *pbVar60;
        pMVar12 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        unaff_EDI = (_union_86)pSVar21;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          piVar11 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar12,*piVar11,bVar20,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pSVar73 = (String *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar21 = (String *)0x0;
    if (pSVar73 == (String *)0x0) {
code_?:
      bVar20 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
      if (bVar20 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar21,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar10[1].klass,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)pOVar10[1].monitor;
code_?:
        func_?();
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      break;
    }
    if (pSVar73->klass == TypeInfo__System__String) {
      pSVar21 = pSVar73;
    }
    photonEvent = (EventData *)0x0;
    if (pSVar21 != (String *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_PlayerPlanetData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar14,
                             MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar74 = (pMVar12->fields).playerContainer, unaff_EDI = unaff_EDI,
          pMVar74 != (MVPlayerContainer *)0x0)) &&
         (pMVar33 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar74,(MethodInfo *)0x0),
         unaff_EDI = unaff_EDI, pMVar33 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar33,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    unaff_EDI = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        unaff_EDI = (_union_86)photonEvent;
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar14,
                             MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                            );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar11,(MethodInfo *)0x0)
          ;
          if (pMVar75 != (MVPlayer *)0x0) {
            (pMVar75->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar21 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar14,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar21,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar42 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar21,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar14,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      unaff_EDI = unaff_EDI;
      if (((pOVar10 != (Object *)0x0) &&
          (pMVar12 = (this->fields).networkGame, unaff_EDI = unaff_EDI,
          pMVar12 != (MVNetworkGame *)0x0)) &&
         (pLVar76 = (pMVar12->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
         pLVar76 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar76,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar14,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = unaff_EDI;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pLVar76 = (pMVar12->fields).levelRewardsManager, unaff_EDI = unaff_EDI,
          pOVar10 != (Object *)0x0)) &&
         (unaff_EDI = unaff_EDI, pLVar76 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar76,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar14,
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)pDVar14,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar14 = unaff_ESI;
      }
      if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pSVar21 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar14,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar21,(MethodInfo *)0x0);
      uVar42 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        pKVar77 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pDVar14,
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
        *unaff_FS_OFFSET = pvStack_4;
        return;
      }
      if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
        pDVar14 = unaff_ESI;
      }
      if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_EDI = unaff_EDI;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar11 = (int32_t *)func_?();
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar11,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_4;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    unaff_EDI = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        unaff_EDI = (_union_86)photonEvent;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar78 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_9,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar38 = *pVVar78;
      pQVar79 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar26 = pQVar79->x;
      VStack_9.x = pQVar79->y;
      VStack_9.y = pQVar79->z;
      VStack_9.z = pQVar79->w;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar11,(MethodInfo *)0x0)
          ;
          if (pMVar75 != (MVPlayer *)0x0) {
            this_04 = (pMVar75->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_04 != (SpawnRolesManager *)0x0) {
              piVar11 = (int32_t *)func_?();
              rotation.y = VStack_9.x;
              rotation.x = fVar26;
              rotation.z = VStack_9.y;
              rotation.w = VStack_9.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_04,*piVar11,VVar38,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_4;
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar21 = (String *)func_?();
      spawnRolesRuntimeData =
           (SpawnRolesRuntimeData *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar21,(MethodInfo *)unaff_ESI);
      pUVar32 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar32,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_EDI = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar12->fields).playerContainer;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)photonEvent;
        if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
           (unaff_EDI = (_union_86)photonEvent, pOVar10 != (Object *)0x0)) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          pMVar75 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)photonEvent;
          if (pMVar75 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar75,(ISpawnRoleChangeHandler *)pUVar32,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar14 = unaff_ESI;
        }
        if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      _Var62.typeHandle =
           (Il2CppMetadataTypeHandle)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     ((String *)pDVar14,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar49 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      unaff_EDI.typeHandle = _Var62.typeHandle;
      if ((_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pMVar49 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar49,_Var62.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar12,_Var62.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar12,(int32_t)_Var62.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar60 = (bool *)func_?();
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   ((MVAvatarSpawnRoleCreator__Class *)
                    (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                    [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar16 = false;
                }
                else {
                  bVar16 = true;
                }
                pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (bVar16) {
                  pDVar14 = unaff_ESI;
                }
                if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if (((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).naturalAligment <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     ((MVAvatarSpawnRoleCreator__Class *)
                      (((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_1).typeHierarchy
                      [(TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1] !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = true;
                  }
                  pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                  if (bVar16) {
                    pDVar14 = unaff_ESI;
                  }
                  if (pDVar14 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)pDVar14,
                               (SpawnRoleBodySwitchData *)_Var62.typeHandle,*pbVar60,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_4;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      if (unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        uStack_52 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar12 = (this->fields).networkGame;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar49 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar12,(MethodInfo *)0x0),
           pMVar49 != (MVWorldObjectClientManager *)0x0)) {
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar49,iVar27,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
          iVar50 = func_?();
          if (iVar50 != 0) {
            pMVar57 = (MethodInfo *)0x0;
            pMVar51 = (MVWorldObjectSpawner *)func_?();
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar51,(int32_t)unaff_ESI,pMVar57);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar12 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_EDI = (_union_86)(pMVar12->fields).playerContainer,
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
        photonEvent != (EventData *)0x0)) &&
       (iVar27 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_EDI.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      bVar20 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar27,&pMStack_7,
                          (MethodInfo *)0x0);
      if (bVar20 == 0) {
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
      puVar80 = (uint8_t *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar80);
      if (pMStack_7 != (MVPlayer *)0x0) {
        if ((pMStack_7->fields).playerState != *puVar80) {
          MVPlayer::MVPlayer_set_PlayerState(pMStack_7,eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar14 = unaff_ESI;
          }
          if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar14,(MethodInfo *)0x0);
        pMVar66 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar66,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_4;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      if (photonEvent != (EventData *)0x0) {
        this_10 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (this_10 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var62 = (_union_86)this_10->klass;
          if ((*(byte *)(_Var62.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(_Var62.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          pDVar81 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar16) {
            pDVar81 = this_10;
          }
          this_10 = pDVar81;
          unaff_EDI = _Var62;
          if (pDVar81 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
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
          if (this_11 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar82 = mscorlib.dll::System::Collections::Generic::
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
            VStack_9.y = 0.0;
            _Var62 = (_union_86)pDVar82->_currentValue;
            uStack_2 = 3;
            VStack_9.z = (float)unaff_ESI;
            do {
              bVar20 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar20 == 0) {
                uStack_2 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)unaff_ESI,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,pMVar57);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
              unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var62.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var62;
                }
                photonEvent = (EventData *)unaff_ESI;
                if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
              }
              if (this_10 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) break;
              TVar83 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  this_10,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar57 = (MethodInfo *)::StringLiteral___;
              if (TVar83.m_Index == 0) {
                pSVar21 = (String *)0x0;
              }
              else {
                pSVar21 = (String *)func_?();
              }
              pSVar21 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)pMVar57,pSVar21,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar21,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar10 != (Object *)0x0)) {
        _Var62 = unaff_EDI;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar23 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar23;
        pMVar12 = (this->fields).networkGame;
        unaff_EDI = (_union_86)this;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
           pMVar33 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI ==
              (Dictionary_2_System_Object_System_Object___Class *)
              (pMVar33->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_4;
            return;
          }
          pMVar12 = (this->fields).networkGame;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar74 = (pMVar12->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0)) {
            bVar20 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar20 == 0) {
code_?:
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar74 = (pMVar12->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_4;
                return;
              }
            }
            else {
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar74 = (pMVar12->fields).playerContainer, pMVar74 != (MVPlayerContainer *)0x0))
              {
                pMStack_44 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar74,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pDStack_53 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_53,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_9.z = (float)func_?();
                pOVar10 = (Object *)func_?();
                if (pDStack_53 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_53,
                             (Object *)VStack_9.z,pOVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_52 = 3;
                  pOVar10 = (Object *)func_?();
                  if ((pMStack_44 != (MVPlayer *)0x0) &&
                     (pUVar84 = (pMStack_44->fields)._UserProfileData_k__BackingField,
                     pUVar84 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_53,pOVar10,
                               (Object *)(pUVar84->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_45 = 6;
                    VStack_9.z = (float)func_?();
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (this_05 = (pMVar12->fields)._Friends_k__BackingField,
                       this_05 != (FriendList *)0x0)) {
                      bStack_85 = FriendList::FriendList_IsFriend
                                            (this_05,(pMStack_44->fields)._ProfileID_k__BackingField
                                             ,(MethodInfo *)0x0);
                      pOVar10 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_53,
                                 (Object *)VStack_9.z,pOVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_53,
                                 (MethodInfo *)0x0);
                      pMVar12 = (this->fields).networkGame;
                      if ((pMVar12 != (MVNetworkGame *)0x0) &&
                         (pGVar62 = (pMVar12->fields).gameStatCounterManager,
                         pGVar62 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar62,(int32_t)unaff_ESI,
                                   (pMStack_44->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar12 = (this->fields).networkGame;
                        if ((pMVar12 != (MVNetworkGame *)0x0) &&
                           (pGVar62 = (pMVar12->fields).gameStatCounterManager,
                           pGVar62 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar62,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      unaff_EDI = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), unaff_EDI = unaff_EDI,
         pOVar10 != (Object *)0x0)) {
        _Var62 = unaff_EDI;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar23 = (undefined4 *)func_?();
        pMStack_54 = (MVWorldObject *)*puVar23;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_EDI = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar65 = (int *)func_?();
          iVar50 = *piVar65;
          _Var62.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9a,(MethodInfo *)0x0);
          unaff_EDI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (_Var62.dummy != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&(_Var62.array)->etype)->image ==
                TypeInfo__System__String) {
              unaff_EDI.typeHandle = _Var62.typeHandle;
            }
            if (unaff_EDI.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          if (pOVar10 != (Object *)0x0) {
            _Var62 = unaff_EDI;
            if ((pOVar10->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar59 = (undefined1 *)func_?();
            _Stack_34.__klassIndex._0_1_ = *puVar59;
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x59,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              p_Var49 = (_union_86 *)func_?();
              _Stack_28 = *p_Var49;
              pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xd0,(MethodInfo *)0x0);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar60 = (bool *)func_?();
                bVar20 = *pbVar60;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                    pDVar14 = unaff_ESI;
                  }
                  if (pDVar14 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                VStack_9.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)pDVar14,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar12 = (this->fields).networkGame;
                if ((pMVar12 != (MVNetworkGame *)0x0) &&
                   (pMVar33 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar12,(MethodInfo *)0x0), pMVar33 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar50 == (pMVar33->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_4;
                    return;
                  }
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,iVar50,(int32_t)pMStack_54,
                             (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                             (UserProfileData *)VStack_9.z,0,bVar20,(MethodInfo *)0x0);
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                    pMVar12 = (this->fields).networkGame;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (pMVar74 = (pMVar12->fields).playerContainer,
                       pMVar74 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar74,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
    default:
      goto code_?;
    }
  }
  func_?();
  _Var62 = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  photonEvent = (EventData *)unaff_ESI;
  unaff_EDI = _Var62;
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  uVar86 = func_?();
  uVar87 = (undefined2)((ulonglong)uVar86 >> 0x10);
  bVar88 = (byte)uVar86;
  bVar89 = (byte)((ulonglong)uVar86 >> 8) & unaff_EBX[100];
  pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
            CONCAT22(uVar87,CONCAT11(bVar89,bVar88));
  puVar59 = (undefined1 *)((int)&pEVar19[-0x12bbe6f].fields._._.method_code + 3);
  bVar48 = *puVar59;
  bVar90 = (byte)extraout_ECX;
  *puVar59 = *puVar59 + bVar90;
  puVar91 = (ushort *)((int)pEVar19 + (int)((ulonglong)uVar86 >> 0x20) + -0x6e);
  *puVar91 = *puVar91 + (ushort)(0 < (short)-(*puVar91 & 3)) * -(*puVar91 & 3);
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)photonEvent);
  bVar92 = (byte)((uint)extraout_ECX >> 8);
  bVar16 = CARRY1(*pbVar47,bVar92) || CARRY1(*pbVar47 + bVar92,CARRY1(bVar48,bVar90));
  *pbVar47 = *pbVar47 + bVar92 + CARRY1(bVar48,bVar90);
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + extraout_ECX + 0x106465);
  bVar48 = (byte)((ulonglong)uVar86 >> 0x28);
  bVar93 = CARRY1(*pbVar47,bVar48) || CARRY1(*pbVar47 + bVar48,bVar16);
  *pbVar47 = *pbVar47 + bVar48 + bVar16;
  ((Il2CppClass_0 *)&(unaff_EDI.array)->etype)->image = (Il2CppImage *)pEVar19;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
  bVar16 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar93);
  *pbVar47 = *pbVar47 + bVar88 + bVar93;
  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&(unaff_EDI.type)->attrs = pEVar19;
  bVar94 = (byte)unaff_EBX;
  bVar93 = CARRY1(bVar48,bVar94) || CARRY1(bVar48 + bVar94,bVar16);
  uVar95 = (undefined2)((ulonglong)uVar86 >> 0x30);
  bVar96 = (byte)((ulonglong)uVar86 >> 0x20);
  bVar97 = bVar48 + bVar94 + bVar16;
  uVar98 = CONCAT11(bVar97,bVar96);
  iVar50 = CONCAT22(uVar95,uVar98);
  pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_1);
  bVar48 = *pbVar47;
  bVar99 = *pbVar47;
  *pbVar47 = bVar99 + bVar88 + bVar93;
  bVar16 = CARRY1(in_stack_100,bVar89) ||
            CARRY1(in_stack_100 + bVar89,
                   CARRY1(bVar48,bVar88) || CARRY1(bVar99 + bVar88,bVar93));
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
  bVar93 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar16);
  *pbVar47 = *pbVar47 + bVar88 + bVar16;
  unaff_EDI.type[1].data.__klassIndex = (TypeDefinitionIndex)pEVar19;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50 + 0x68);
  bVar99 = *pbVar47;
  bVar101 = (byte)((uint)unaff_EBX >> 8);
  bVar48 = *pbVar47;
  *pbVar47 = bVar48 + bVar101 + bVar93;
  *(byte *)((int)unaff_FS_OFFSET + (int)unaff_EBX) =
       *(byte *)((int)unaff_FS_OFFSET + (int)unaff_EBX) + bVar90 +
       (CARRY1(bVar99,bVar101) || CARRY1(bVar48 + bVar101,bVar93));
  lVar102 = (longlong)*(int *)((int)&(pEVar19->fields)._._.original_method_info + iVar50 + 3U) *
           -0x44ef9b96;
  iVar103 = (int)lVar102;
  *(undefined4 *)(iVar103 + -4) = 100;
  *(byte *)&pEVar19->klass = *(char *)&pEVar19->klass + bVar92 + (iVar103 != lVar102);
  lVar102 = (longlong)*(int *)((int)pEVar19 + iVar50 + -0x6b) * 0x6b;
  puVar59 = (undefined1 *)lVar102;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50);
  bVar16 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,(int)puVar59 != lVar102);
  *pbVar47 = *pbVar47 + bVar88 + ((int)puVar59 != lVar102);
  uVar55 = in(uVar98);
  *(undefined1 *)&unaff_EDI.type[1].attrs = uVar55;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
  bVar93 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar16);
  *pbVar47 = *pbVar47 + bVar88 + bVar16;
  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)&unaff_EDI.type[1].attrs + 1) = pEVar19;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EBX + 0x6c));
  bVar16 = CARRY1(*pbVar47,bVar96) || CARRY1(*pbVar47 + bVar96,bVar93);
  *pbVar47 = *pbVar47 + bVar96 + bVar93;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
  bVar93 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar16);
  *pbVar47 = *pbVar47 + bVar88 + bVar16;
  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)&unaff_EDI.type[2].data.dummy + 1) =
       pEVar19;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)&pEVar19[-0x47be6f].fields._._.method_info);
  bVar16 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar93);
  *pbVar47 = *pbVar47 + bVar88 + bVar93;
  uVar55 = in(uVar98);
  *(undefined1 *)((int)&unaff_EDI.type[2].attrs + 1) = uVar55;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
  bVar93 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar16);
  *pbVar47 = *pbVar47 + bVar88 + bVar16;
  *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_EDI.type[2].type = pEVar19;
  bVar16 = CARRY1(bVar90,bVar88) || CARRY1(bVar90 + bVar88,bVar93);
  uVar104 = (undefined3)((uint)extraout_ECX >> 8);
  bVar90 = bVar90 + bVar88 + bVar93;
  pbVar105 = (byte *)CONCAT31(uVar104,bVar90);
  pbVar106 = &unaff_EDI.type[3].type;
  ppMVar107 = &(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).gc_desc;
  *(MVNetworkGame__Class **)((int)&unaff_EDI.type[3].data + 2) =
       (MVNetworkGame__Class *)
       (((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).image;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50 + 0x6e);
  bVar93 = CARRY1(*pbVar47,bVar90) || CARRY1(*pbVar47 + bVar90,bVar16);
  *pbVar47 = *pbVar47 + bVar90 + bVar16;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)ppMVar107);
  bVar16 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar93);
  *pbVar47 = *pbVar47 + bVar89 + bVar93;
  pMVar108 = (MVNetworkGame__Fields *)
            &(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).name;
  out(*ppMVar107,uVar98);
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50 + 0x2f10646f);
  bVar48 = *pbVar47;
  bVar99 = *pbVar47 + bVar101;
  bVar93 = CARRY1(*pbVar47,bVar101) || CARRY1(bVar99,bVar16);
  *pbVar47 = bVar99 + bVar16;
  if (SCARRY1(bVar48,bVar101) == SCARRY1(bVar99,bVar16)) {
    pbVar47 = pbVar105 + (int)pEVar19 * 4;
    bVar16 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar93);
    *pbVar47 = *pbVar47 + bVar89 + bVar93;
code_?:
    pbVar47 = unaff_EBX + -0x80;
    bVar89 = (byte)unaff_EBX;
    bVar93 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar16);
    *pbVar47 = *pbVar47 + bVar89 + bVar16;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar105 + (int)pEVar19 * 4));
    bVar48 = *pbVar47;
    bVar88 = (byte)((uint)pEVar19 >> 8);
    bVar99 = *pbVar47;
    *pbVar47 = bVar99 + bVar88 + bVar93;
    bVar99 = bVar90 * '\x02' + (CARRY1(bVar48,bVar88) || CARRY1(bVar99 + bVar88,bVar93));
    pbVar105 = (byte *)CONCAT31(uVar104,bVar99);
    puVar109 = (uint *)((int)&pEVar19[1].fields._._.method_info + iVar50 + 2U);
    *puVar109 = *puVar109 & 0x13106482;
    puVar109 = (uint *)((int)&pEVar19[1].fields._._.delegate_trampoline + iVar50);
    *puVar109 = *puVar109 & 0xffffff83;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar59 + (int)pEVar19 * 4 + 100));
    bVar48 = *pbVar47;
    *pbVar47 = *pbVar47 + bVar99;
    bVar93 = CARRY1(bVar89,bVar92) || CARRY1(bVar89 + bVar92,CARRY1(bVar48,bVar99));
    unaff_EBX = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),
                                 bVar89 + bVar92 + CARRY1(bVar48,bVar99));
    LOCK();
    puVar23 = (undefined4 *)((int)pEVar19 + iVar50 + -0x70);
    puVar110 = (undefined1 *)*puVar23;
    *puVar23 = puVar59;
    UNLOCK();
    *(byte *)((int)&(pEVar19->fields)._._.method_is_virtual + iVar50) = bVar88;
    puVar59 = puVar110;
code_?:
    *(undefined1 **)((int)&(pEVar19->fields)._._.interp_method + iVar50 + 2U) = puVar59;
    uVar87 = (undefined2)((uint)pEVar19 >> 0x10);
    bVar48 = *(byte *)(CONCAT22(uVar87,CONCAT11(*(undefined1 *)((int)pEVar19 + iVar50 + -0x32),
                                                (char)pEVar19)) + 0x76 + iVar50);
    pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
              CONCAT22(uVar87,CONCAT11(bVar48,(char)pEVar19));
    puVar109 = *(uint **)((int)&(pEVar19->fields)._._.method_code + iVar50);
    *(undefined2 *)((int)pEVar19 + iVar50 + -0xc) = in_FS;
    if (!bVar93) {
      pbVar47 = pbVar105 + -0x65;
      bVar99 = CARRY1(*pbVar47,bVar48) || CARRY1(*pbVar47 + bVar48,bVar93);
      *pbVar47 = *pbVar47 + bVar48 + bVar93;
      goto code_?;
    }
code_?:
    bVar99 = (byte)pEVar19;
    bVar48 = *(char *)&pEVar19->klass + bVar99;
    bVar16 = CARRY1(*(byte *)&pEVar19->klass,bVar99) || CARRY1(bVar48,bVar93);
    *(byte *)&pEVar19->klass = bVar48 + bVar93;
    *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)pbVar106 = pEVar19;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                      (int)&(((Dictionary_2_System_Object_System_Object___Class *)
                             ((int)photonEvent + 0x1063a0))->vtable).
                            System_Collections_Generic_IDictionary_TKey_TValue__get_Values);
    bVar93 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar16);
    *pbVar47 = *pbVar47 + bVar99 + bVar16;
    *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)&unaff_EDI.type[4].data.dummy + 2) =
         pEVar19;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
    bVar16 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar93);
    *pbVar47 = *pbVar47 + bVar99 + bVar93;
    *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)&unaff_EDI.type[4].type = pEVar19;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pEVar19);
    bVar111 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar16);
    *pbVar47 = *pbVar47 + bVar99 + bVar16;
    pbVar106 = &unaff_EDI.type[5].type;
    *(EventHandler_1_ReceivedItemFromQueryEventArgs_ **)((int)&unaff_EDI.type[5].data.dummy + 2) =
         pEVar19;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + -0x1ef9b73);
    bVar99 = (byte)((uint)unaff_EBX >> 8);
    bVar48 = *pbVar47 + bVar99;
    bVar93 = CARRY1(*pbVar47,bVar99) || CARRY1(bVar48,bVar111);
    *pbVar47 = bVar48 + bVar111;
    puVar59 = (undefined1 *)((int)&(pEVar19->fields)._._.interp_invoke_impl + iVar50 + 3U);
  }
  else {
    pbVar47 = pbVar105 + (int)pMVar108 * 2 + 100;
    bVar16 = CARRY1(*pbVar47,bVar94) || CARRY1(*pbVar47 + bVar94,bVar93);
    *pbVar47 = *pbVar47 + bVar94 + bVar93;
    pbVar47 = pbVar105 + -0x15ef9b8f;
    bVar48 = *pbVar47;
    bVar99 = *pbVar47 + bVar96;
    bVar93 = CARRY1(*pbVar47,bVar96) || CARRY1(bVar99,bVar16);
    *pbVar47 = bVar99 + bVar16;
    if (SCARRY1(bVar48,bVar96) == SCARRY1(bVar99,bVar16)) {
      bVar16 = CARRY1(*unaff_EBX,bVar96) || CARRY1(*unaff_EBX + bVar96,bVar93);
      *unaff_EBX = *unaff_EBX + bVar96 + bVar93;
      goto code_?;
    }
    pbVar47 = pbVar105 + 0x4a106472;
    bVar48 = *pbVar47;
    bVar99 = *pbVar47 + bVar101;
    bVar111 = CARRY1(bVar48,bVar101) || CARRY1(bVar99,bVar93);
    *pbVar47 = bVar99 + bVar93;
    if (!CARRY1(bVar48,bVar101) && !CARRY1(bVar99,bVar93)) {
      pbVar47 = puVar59 + (int)pEVar19 * 4 + 100;
      bVar16 = CARRY1(*pbVar47,bVar90) || CARRY1(*pbVar47 + bVar90,bVar111);
      *pbVar47 = *pbVar47 + bVar90 + bVar111;
      goto code_?;
    }
    pbVar47 = (byte *)(iVar50 + -0x38ef9b8d);
    bVar48 = *pbVar47;
    bVar99 = *pbVar47 + bVar94;
    bVar16 = CARRY1(bVar48,bVar94) || CARRY1(bVar99,bVar111);
    *pbVar47 = bVar99 + bVar111;
    if (!CARRY1(bVar48,bVar94) && !CARRY1(bVar99,bVar111)) {
      pEVar112 = &(pEVar19 + 0xe04191)[1].fields;
      bVar48 = *(char *)&(pEVar112->_)._.method_ptr + bVar96;
      bVar93 = CARRY1(*(byte *)&(pEVar112->_)._.method_ptr,bVar96) || CARRY1(bVar48,bVar16);
      *(byte *)&(pEVar112->_)._.method_ptr = bVar48 + bVar16;
      goto code_?;
    }
    bVar48 = bVar89 + bVar97;
    bVar111 = CARRY1(bVar89,bVar97) || CARRY1(bVar48,bVar16);
    bVar99 = bVar48 + bVar16;
    pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
              CONCAT22(uVar87,CONCAT11(bVar99,bVar88));
    if (!CARRY1(bVar89,bVar97) && !CARRY1(bVar48,bVar16)) {
      bVar48 = *(char *)&pEVar19->klass + bVar101;
      bVar93 = CARRY1(*(byte *)&pEVar19->klass,bVar101) || CARRY1(bVar48,bVar111);
      *(byte *)&pEVar19->klass = bVar48 + bVar111;
      goto code_?;
    }
    bVar16 = CARRY1(*pbVar105,bVar99) || CARRY1(*pbVar105 + bVar99,bVar111);
    *pbVar105 = *pbVar105 + bVar99 + bVar111;
    if (*pbVar105 == 0) {
      bVar48 = *(char *)&pMVar108->ReceivedItemFromQuery + bVar99;
      bVar93 = CARRY1(*(byte *)&pMVar108->ReceivedItemFromQuery,bVar99) || CARRY1(bVar48,bVar16);
      *(byte *)&pMVar108->ReceivedItemFromQuery = bVar48 + bVar16;
      goto code_?;
    }
    ppMVar113 = (MVTeamManager **)
              &(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_1).
               genericContainerHandle;
    bVar93 = CARRY1(*(byte *)ppMVar113,bVar90) || CARRY1(*(char *)ppMVar113 + bVar90,bVar16);
    *(byte *)ppMVar113 = *(char *)ppMVar113 + bVar90 + bVar16;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)&pEVar19[1].fields._._.data);
    bVar16 = CARRY1(*pbVar47,bVar101) || CARRY1(*pbVar47 + bVar101,bVar93);
    *pbVar47 = *pbVar47 + bVar101 + bVar93;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x13106470);
    bVar111 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar16);
    *pbVar47 = *pbVar47 + bVar99 + bVar16;
    if (*pbVar47 != 0) {
      bVar93 = CARRY1(bVar99,bVar97) || CARRY1(bVar99 + bVar97,bVar111);
      pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                CONCAT22(uVar87,CONCAT11(bVar99 + bVar97 + bVar111,bVar88));
      goto code_?;
    }
    pbVar47 = &stack0x76cd1060 + (int)pMVar108 * 2;
    bVar16 = CARRY1(*pbVar47,bVar101) || CARRY1(*pbVar47 + bVar101,bVar111);
    *pbVar47 = *pbVar47 + bVar101 + bVar111;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&pEVar19[-0x13bbe6f].fields._._.data + 3U))
    ;
    bVar111 = CARRY1(*pbVar47,bVar99) || CARRY1(*pbVar47 + bVar99,bVar16);
    *pbVar47 = *pbVar47 + bVar99 + bVar16;
    if ((POPCOUNT(*pbVar47) & 1U) == 0) {
      bVar48 = *(char *)&pEVar19->klass + bVar88;
      bVar93 = CARRY1(*(byte *)&pEVar19->klass,bVar88) || CARRY1(bVar48,bVar111);
      *(byte *)&pEVar19->klass = bVar48 + bVar111;
      goto code_?;
    }
    bVar48 = *pbVar106;
    bVar99 = *pbVar106 + bVar96;
    bVar16 = CARRY1(*pbVar106,bVar96) || CARRY1(bVar99,bVar111);
    *pbVar106 = bVar99 + bVar111;
    if ((SCARRY1(bVar48,bVar96) != SCARRY1(bVar99,bVar111)) != (char)*pbVar106 < '\0') {
      bVar48 = *(char *)&pEVar19->klass + bVar88;
      bVar93 = CARRY1(*(byte *)&pEVar19->klass,bVar88) || CARRY1(bVar48,bVar16);
      *(byte *)&pEVar19->klass = bVar48 + bVar16;
      goto code_?;
    }
    ppDVar114 = &pEVar19[-0x53be6f].fields._.delegates;
    cVar115 = *(char *)ppDVar114;
    bVar48 = *(char *)ppDVar114 + bVar92;
    bVar111 = CARRY1(*(byte *)ppDVar114,bVar92) || CARRY1(bVar48,bVar16);
    *(byte *)ppDVar114 = bVar48 + bVar16;
    if ((SCARRY1(cVar115,bVar92) != SCARRY1(bVar48,bVar16)) != *(char *)ppDVar114 < '\0') {
      bVar93 = CARRY1(bVar97,bVar101) || CARRY1(bVar97 + bVar101,bVar111);
      iVar50 = CONCAT22(uVar95,CONCAT11(bVar97 + bVar101 + bVar111,bVar96));
      goto code_?;
    }
    pbVar47 = (byte *)(iVar50 + 0x7e);
    bVar16 = CARRY1(*pbVar47,bVar96) || CARRY1(*pbVar47 + bVar96,bVar111);
    *pbVar47 = *pbVar47 + bVar96 + bVar111;
    pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50 + -0x7cef9b82);
    bVar48 = *pbVar47;
    bVar99 = *pbVar47 + bVar97;
    bVar93 = CARRY1(*pbVar47,bVar97) || CARRY1(bVar99,bVar16);
    *pbVar47 = bVar99 + bVar16;
    if (*pbVar47 == 0 ||
        (SCARRY1(bVar48,bVar97) != SCARRY1(bVar99,bVar16)) != (char)*pbVar47 < '\0') {
      bVar48 = bVar101 + bVar97;
      bVar16 = CARRY1(bVar101,bVar97) || CARRY1(bVar48,bVar93);
      bVar99 = bVar48 + bVar93;
      unaff_EBX = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar99,bVar94));
      if (bVar99 == 0 || (SCARRY1(bVar101,bVar97) != SCARRY1(bVar48,bVar93)) != (char)bVar99 < '\0')
      goto code_?;
      puVar1 = (undefined1 *)((int)&(pEVar19 + 0x884191)[1].fields._._ + 6);
      bVar93 = CARRY1(*puVar1,bVar99) || CARRY1(*puVar1 + bVar99,bVar16);
      *puVar1 = *puVar1 + bVar99 + bVar16;
    }
    else {
      puVar1 = (undefined1 *)((int)&(pEVar19 + -3)[1].fields._._ + 6);
      bVar16 = CARRY1(*puVar1,bVar94) || CARRY1(*puVar1 + bVar94,bVar93);
      *puVar1 = *puVar1 + bVar94 + bVar93;
      pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&(pEVar19 + 0x884191)[1].fields._._ + 6U)
                        );
      bVar93 = CARRY1(*pbVar47,bVar101) || CARRY1(*pbVar47 + bVar101,bVar16);
      *pbVar47 = *pbVar47 + bVar101 + bVar16;
    }
  }
  pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&(((Dictionary_2_System_Object_System_Object___Class *)
                           ((int)photonEvent + 0x1b10645c))->_0).klass);
  bVar48 = *pbVar47 + (byte)unaff_EBX;
  bVar16 = CARRY1(*pbVar47,(byte)unaff_EBX) || CARRY1(bVar48,bVar93);
  *pbVar47 = bVar48 + bVar93;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)((int)&(pEVar19 + -0x1f3be6f)[1].fields._._ + 10U))
  ;
  bVar99 = (byte)((uint)iVar50 >> 8);
  bVar48 = *pbVar47 + bVar99;
  bVar93 = CARRY1(*pbVar47,bVar99) || CARRY1(bVar48,bVar16);
  *pbVar47 = bVar48 + bVar16;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(&stack0x96061060 + iVar50 * 4));
  bVar99 = (byte)((uint)unaff_EBX >> 8);
  bVar48 = *pbVar47 + bVar99;
  bVar16 = CARRY1(*pbVar47,bVar99) || CARRY1(bVar48,bVar93);
  *pbVar47 = bVar48 + bVar93;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(unaff_EBX + 0x6a106496));
  bVar48 = (byte)((uint)pbVar105 >> 8);
  bVar93 = CARRY1(*pbVar47,bVar48) || CARRY1(*pbVar47 + bVar48,bVar16);
  *pbVar47 = *pbVar47 + bVar48 + bVar16;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar106);
  bVar16 = CARRY1(*pbVar47,bVar48) || CARRY1(*pbVar47 + bVar48,bVar93);
  *pbVar47 = *pbVar47 + bVar48 + bVar93;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pMVar108);
  bVar99 = (byte)((uint)pbVar106 >> 8);
  bVar48 = *pbVar47 + bVar99;
  bVar93 = CARRY1(*pbVar47,bVar99) || CARRY1(bVar48,bVar16);
  *pbVar47 = bVar48 + bVar16;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                                 ((int)photonEvent + 0x3a10642c))->_1).cctor_finished_or_no_cctor +
                         1));
  bVar48 = *pbVar47 + (byte)pbVar105;
  bVar99 = CARRY1(*pbVar47,(byte)pbVar105) || CARRY1(bVar48,bVar93);
  *pbVar47 = bVar48 + bVar93;
  *(undefined2 *)(puVar59 + -4) = in_CS;
  puVar116 = (undefined4 *)(puVar59 + -8);
  *(undefined **)(puVar59 + -8) = &UNK_?;
  func_?();
  pbVar106 = (byte *)*puVar116;
  pMVar108 = (MVNetworkGame__Fields *)puVar116[1];
  puVar1 = (undefined1 *)puVar116[2];
  unaff_EBX = (byte *)puVar116[4];
  iVar50 = puVar116[5];
  pbVar105 = (byte *)puVar116[6];
  pEVar19 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)puVar116[7];
  puVar109 = puVar116 + 8;
code_?:
  bVar89 = (byte)iVar50;
  bVar48 = (byte)unaff_EBX + bVar89;
  bVar16 = CARRY1((byte)unaff_EBX,bVar89) || CARRY1(bVar48,bVar99);
  cVar115 = bVar48 + bVar99;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + CONCAT31((int3)((uint)unaff_EBX >> 8),cVar115) + -100);
  bVar48 = *pbVar47;
  bVar88 = (byte)pbVar105;
  bVar99 = *pbVar47;
  *pbVar47 = bVar99 + bVar88 + bVar16;
  *(char *)((int)unaff_FS_OFFSET + -0x72ef9b63) =
       *(char *)((int)unaff_FS_OFFSET + -0x72ef9b63) + cVar115 +
       (CARRY1(bVar48,bVar88) || CARRY1(bVar99 + bVar88,bVar16));
  bVar111 = (*puVar109 & 0x400) != 0;
  pcVar61 = (char *)((int)unaff_FS_OFFSET + iVar50 + 0x1610649d);
  *pcVar61 = *pcVar61 + (char)((uint)unaff_EBX >> 8) + ((*puVar109 & 1) != 0);
  bVar16 = ((uint)pEVar19 & 0x100) != 0;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)pbVar106);
  bVar93 = CARRY1(*pbVar47,bVar88) || CARRY1(*pbVar47 + bVar88,bVar16);
  *pbVar47 = *pbVar47 + bVar88 + bVar16;
  bVar48 = (byte)pEVar19;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                    CONCAT22((short)((uint)pEVar19 >> 0x10),
                             CONCAT11(((char)*pbVar47 < '\0') << 7 | (*pbVar47 == 0) << 6 |
                                      (((uint)pEVar19 & 0x1000) != 0) << 4 |
                                      ((POPCOUNT(*pbVar47) & 1U) == 0) << 2 | 2U | bVar93,bVar48)))
  ;
  bVar16 = CARRY1(*pbVar47,bVar48) || CARRY1(*pbVar47 + bVar48,bVar93);
  *pbVar47 = *pbVar47 + bVar48 + bVar93;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar1 + -0x5fef9b5f));
  bVar93 = CARRY1(*pbVar47,bVar89) || CARRY1(*pbVar47 + bVar89,bVar16);
  *pbVar47 = *pbVar47 + bVar89 + bVar16;
  uRam_? = uRam_?;
  pbVar47 = (byte *)((int)unaff_FS_OFFSET + iVar50);
  bVar48 = *pbVar47;
  bVar99 = *pbVar47;
  *pbVar47 = bVar99 + bVar88 + bVar93;
  *pbVar106 = *(byte *)&pMVar108->ReceivedItemFromQuery;
  *(byte *)((int)unaff_FS_OFFSET + (int)pbVar105) =
       *(byte *)((int)unaff_FS_OFFSET + (int)pbVar105) + bVar89 +
       (CARRY1(bVar48,bVar88) || CARRY1(bVar99 + bVar88,bVar93));
  pbVar47 = (byte *)((int)unaff_FS_OFFSET +
                    (int)(pbVar106 + (uint)bVar111 * -2 + 1 + (uint)bVar111 * -2 + -0x33ef9b57));
  *pbVar47 = *pbVar47 + cVar115 +
             (*(byte *)((int)pMVar108 + (uint)bVar111 * -2 + 1) < pbVar106[(uint)bVar111 * -2 + 1]);
  pcVar117 = (code *)swi(3);
  (*pcVar117)();
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

