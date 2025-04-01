
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
  _Var64 = (_union_86)this;
  pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = unaff_ESI;
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
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, _Var64 = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (pMVar14 = (pWVar13->fields)._.worldObjectClientManager,
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64 = unaff_EDI, photonEvent != (EventData *)0x0)) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x16,(MethodInfo *)0x0);
      pDVar15 = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      _Var64.typeHandle = unaff_EDI.typeHandle;
      if (pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0) {
        if (pDVar15 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          pMVar16 = (MVNetworkGame__Class *)(pDVar15->_0).image;
          bVar17 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          if (((pMVar16->_1).naturalAligment < bVar17) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pMVar16->_1).typeHierarchy[bVar17 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (bVar18) {
            pDVar9 = pDVar15;
          }
          unaff_ESI = pDVar9;
          if (pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
code_?:
          func_?();
          unaff_ESI = pDVar9;
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          pDVar9 = unaff_ESI;
          if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(unaff_EDI.array)->etype)->
              _0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar11 = (int32_t *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                      (pMVar14,*piVar11,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), _Var64 = unaff_EDI,
       pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x12,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar20 = pDVar19;
        }
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
         (pMVar14 = (pWVar13->fields)._.worldObjectClientManager,
         pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar14,unaff_EDI.__klassIndex,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0), _Var64 = unaff_EDI,
       pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x13,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar20 = pDVar19;
        }
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 != (WorldNetwork *)0x0)) &&
         (pMVar14 = (pWVar13->fields)._.worldObjectClientManager,
         pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar14,unaff_EDI.__klassIndex,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
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
    if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
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
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_07 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
          if (this_07 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
            pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                (this_07,eventCode,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                );
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pOVar10 != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (pOVar10[1].klass != (Object__Class *)0x0) {
                (*(code *)((pOVar10[1].klass)->_0).namespaze)();
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
              pSVar23 = StringLiteral_No_subscribers_to_event_data;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
                pSVar23 = StringLiteral_No_subscribers_to_event_data;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x2f,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = unaff_ESI;
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, _Var64 = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (pMVar24 = (pWVar13->fields)._.worldInventory, _Var64 = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      _Var64.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x31,(MethodInfo *)0x0);
      if (pMVar24 != (MVWorldInventory *)0x0) {
        _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
        unaff_EDI.typeHandle = _Var64.typeHandle;
        if ((_Var64.dummy != (MVNetworkGame *)0x0) &&
           (unaff_EDI.dummy = (void *)func_?(), _Stack_28.dummy = unaff_EDI.dummy,
           unaff_EDI.dummy == (MVNetworkGame *)0x0)) goto code_?;
        _Var64 = unaff_EDI;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar25 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (pMVar24->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            pRVar26 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 (int32_t)unaff_ESI,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            this_08 = (BytePacker *)func_?();
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_08,(Byte__Array *)unaff_EDI.typeHandle,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pRVar26 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                        (pRVar26,this_08,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, _Var64 = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (unaff_EDI = (_union_86)(pWVar13->fields)._.worldInventory, _Var64 = (_union_86)photonEvent,
       photonEvent != (EventData *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x22,(MethodInfo *)0x0);
      _Var64 = unaff_EDI;
      if ((unaff_EDI.dummy != (MVNetworkGame *)0x0) && (pOVar10 != (Object *)0x0)) {
        unaff_ESI = unaff_ESI;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar27 = (float *)func_?();
        fVar28 = *pfVar27;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar25 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (((Dictionary_2_System_Int32_System_Object_ *)unaff_EDI.type[1].data.typeHandle !=
               (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
             (pRVar26 = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                   unaff_EDI.type[1].data.typeHandle,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  ), pRVar26 != (RuntimePrototypeCubeModel *)0x0)) {
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
    break;
  case MVEventCodes__Enum_AddLink:
    pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x38,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x3a,(MethodInfo *)0x0);
      unaff_ESI = pDVar9;
      _Var64.typeHandle = unaff_EDI.typeHandle;
      if ((pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(unaff_EDI.array)->etype)->
              _0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          p_Var49 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var49->__klassIndex;
          _Var64 = unaff_EDI;
          if (_Stack_28.dummy != (MVNetworkGame *)0x0) {
            if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(_Stack_28.array)->etype)
                ->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?();
              MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                        ((MVNetworkGame *)pDVar9,*piVar11,unaff_EDI.__klassIndex,iVar29,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x3a,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x28,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x34,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?();
      iVar29 = *piVar11;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64 = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var49 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var49->__klassIndex;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x35,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Var64 = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                      (pMVar12,iVar29,unaff_EDI.__klassIndex,*piVar11,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x34,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?();
      iVar29 = *piVar11;
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64 = unaff_EDI;
      if (pOVar10 != (Object *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var49 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var49->__klassIndex;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x36,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Var64 = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if ((pOVar10->klass->_0).element_class !=
              (TypeInfo__MV__Common__FriendStatus->_0).element_class) goto code_?;
          pFVar30 = (FriendStatus__Enum *)func_?();
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                      (pMVar12,iVar29,unaff_EDI.__klassIndex,*pFVar30,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      _Var64 = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar12,*piVar11,_Var64.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Var64 = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar12,*piVar11,_Var64.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Var64 = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar12,_Var64.__klassIndex,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar12,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    _Var64 = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)_Var64.typeHandle,*piVar11,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var64 = unaff_EDI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar12->fields)._NetworkGameStateListener_k__BackingField,
       _Var64 = (_union_86)photonEvent, photonEvent != (EventData *)0x0)) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      _Var64 = (_union_86)photonEvent;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        p_Var49 = (_union_86 *)func_?();
        _Var64 = (_union_86)p_Var49->dummy;
        puVar25 = (undefined4 *)func_?();
        pGVar31 = (GameEventManager *)*puVar25;
        p_Var49 = (_union_86 *)func_?();
        _Stack_28 = *p_Var49;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (unaff_ESI->_0).byval_arg.data = _Stack_28;
        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager = pGVar31;
        (unaff_ESI->_0).namespaze = (char *)_Var64;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar12 != (MVNetworkGame *)0x0) {
          iVar29 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar12,(MethodInfo *)0x0);
          *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs =
               (Action_1_String_ *)((int)_Var64.dummy + ((int)pGVar31 - iVar29));
          pAVar32 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
                   (unaff_ESI->_0).this_arg.data.array;
          if (pAVar32 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
            pUVar33 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar33,(MethodInfo *)0x0);
            (*(pAVar32->fields)._._.invoke_impl)();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x16,(MethodInfo *)0x0), _Var64 = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64.typeHandle = unaff_EDI.typeHandle;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
          pMVar34 != (MVLocalPlayer *)0x0)) &&
         (iVar35 = (pMVar34->fields)._._ActorNr_k__BackingField,
         unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
         unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
        if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(unaff_EDI.array)->etype)->_0
            ).element_class != (TypeInfo__System__Int32->_0).element_class) {
code_?:
          func_?();
          goto code_?;
        }
        piVar36 = (int *)func_?();
        if (*piVar36 == iVar35) goto code_?;
        pMVar12 = (this->fields).networkGame;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pWVar13 = (pMVar12->fields).worldNetwork,
           unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
           pWVar13 != (WorldNetwork *)0x0)) {
          pMVar14 = (pWVar13->fields)._.worldObjectClientManager;
          unaff_EDI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0);
          pDVar15 = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x46,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          _Var64.typeHandle = unaff_EDI.typeHandle;
          if (pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (pDVar15 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            }
            else {
              pMVar16 = (MVNetworkGame__Class *)(pDVar15->_0).image;
              bVar17 = (
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment;
              if (((pMVar16->_1).naturalAligment < bVar17) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar16->_1).typeHierarchy[bVar17 - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              if (bVar18) {
                pDVar9 = pDVar15;
              }
              if (pDVar9 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
              goto code_?;
            }
            unaff_ESI = pDVar9;
            if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
              if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)
                   (unaff_EDI.array)->etype)->_0).element_class ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar11 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          (pMVar14,*piVar11,(Dictionary_2_System_Object_System_Object_ *)pDVar9,
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
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    _Var64 = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Stack_24 = _Var64;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar37 = *piVar11;
        pPVar38 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar38,iVar37,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
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
      pIVar39 = (Il2CppClass *)*pfVar27;
      pfVar27 = (float *)func_?();
      VStack_8.x = *pfVar27;
      VStack_8.z = (float)_Stack_28;
      VStack_8.y = (float)pIVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_28 = (_union_86)p_Var49->dummy;
      puVar25 = (undefined4 *)func_?();
      uVar40 = *puVar25;
      puVar25 = (undefined4 *)func_?();
      _Var62 = _Stack_28;
      uVar41 = *puVar25;
      pMVar12 = (this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      _Var64.dummy = (MVNetworkGame *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        VVar42.y = VStack_8.y;
        VVar42.x = VStack_8.x;
        VVar42.z = VStack_8.z;
        camDir.y = (float)uVar40;
        camDir.x = (float)uVar41;
        camDir.z = (float)_Var62.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar12,*piVar11,VVar42,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar12,photonEvent,(MethodInfo *)0x0);
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x58,(MethodInfo *)0x0);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      pMVar43 = (MVGameMsgType__Enum *)func_?();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar43,pDVar19,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar12 = (this->fields).networkGame;
    _Var64 = (_union_86)photonEvent;
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
      _Var64.dummy = (MVNetworkGame *)0x0;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        pMVar44 = (MVTeam__Enum *)func_?();
        team = *pMVar44;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar12,*piVar11,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x38,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x3a,(MethodInfo *)0x0);
      unaff_ESI = pDVar9;
      _Var64.typeHandle = unaff_EDI.typeHandle;
      if ((pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(unaff_EDI.array)->etype)->
              _0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          p_Var49 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var49->__klassIndex;
          _Var64 = unaff_EDI;
          if (_Stack_28.dummy != (MVNetworkGame *)0x0) {
            if ((((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)(_Stack_28.array)->etype)
                ->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?();
              MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                        ((MVNetworkGame *)pDVar9,*piVar11,unaff_EDI.__klassIndex,iVar29,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x3a,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar12,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    _Var64 = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)_Var64.typeHandle,*piVar11,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    _Var64 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_28 = *p_Var49;
      pOVar45 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar10,pOVar45,
                           (MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar46 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
      pOVar10 = (Object *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64.dummy = (MVNetworkGame *)0x0;
      if (pDVar47 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar25 = (undefined4 *)func_?();
        pMStack_48 = (MVPlayer *)*puVar25;
        uStack_49 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_24 = (_union_86)p_Var49->__klassIndex;
        pMVar12 = (this->fields).networkGame;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Var64.dummy = (MVNetworkGame *)0x0;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar50 = (pMVar12->fields)._PlayerController_k__BackingField;
          _Stack_28.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          _Var64.dummy = (MVNetworkGame *)0x0;
          if (pMVar50 != (MVLocalObjectController *)0x0) {
            pbVar51 = (byte *)func_?();
            bVar17 = *pbVar51;
            piVar11 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar50,*piVar11,(int32_t)pMStack_48,_Stack_24.__klassIndex,(uint)bVar17,
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
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0), _Var64 = unaff_EDI,
         pMVar52 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar52,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        _Var64 = (_union_86)TypeInfo__MVAvatar;
        if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (iVar35 = func_?(), iVar35 == 0)) goto code_?;
        iVar35 = func_?();
        if (iVar35 != 0) {
          func_?();
          func_?();
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      _Var64.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var64.typeHandle
                   ,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_28 = (_union_86)p_Var49->__klassIndex;
        uStack_49 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var64.typeHandle
                   ,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        p_Var49 = (_union_86 *)func_?();
        _Stack_34 = *p_Var49;
        pMVar12 = (this->fields).networkGame;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar12,(MethodInfo *)0x0),
           unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
           pMVar52 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar52,_Stack_28.__klassIndex,(MethodInfo *)0x0);
          pMVar53 = (MVWorldObjectSpawner *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if (pMVar53 != (MVWorldObjectSpawner *)0x0) {
            pMStack_48 = (MVPlayer *)(pMVar53->fields).spawnWorldObjectID;
            uStack_54 = 3;
            pOVar10 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       _Var64.typeHandle,pOVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            puVar25 = (undefined4 *)func_?();
            pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)*puVar25;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            puVar25 = (undefined4 *)func_?();
            pMStack_56 = (MVWorldObject *)*puVar25;
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
            puVar25 = (undefined4 *)func_?();
            VStack_8.z = (float)*puVar25;
            pMVar12 = (this->fields).networkGame;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
            _Var64 = (_union_86)this;
            if ((pMVar12 != (MVNetworkGame *)0x0) &&
               (pWVar13 = (pMVar12->fields).worldNetwork,
               unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
               pWVar13 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar13,(int32_t)pMStack_56,0,1,(int32_t)pMStack_48,(int32_t)pDStack_55,
                         _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
              pMVar12 = (this->fields).networkGame;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar12,(MethodInfo *)0x0),
                 unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
                 pMVar52 != (MVWorldObjectClientManager *)0x0)) {
                pMStack_56 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (pMVar52,(int32_t)pDStack_55,(MethodInfo *)0x0);
                if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                _Var64 = (_union_86)
                         TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0;
                if (_Var64.dummy == (MVNetworkGame *)0x0) {
                  if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                  _Var64.dummy = (void *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            ((UnityAction_1_System_Object_ *)_Var64.typeHandle,(Object *)object,
                             MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                       (MVWorldObjectClient_CallBackDelegate *)_Var64;
                  func_?();
                }
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
                if (pMStack_56 != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar12 = (this->fields).networkGame;
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
                  if (pMVar12 != (MVNetworkGame *)0x0) {
                    pMVar50 = (pMVar12->fields)._PlayerController_k__BackingField;
                    pMStack_56 = (MVWorldObject *)
                                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                 EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
                    _Var64.dummy = (MVNetworkGame *)0x0;
                    if (pMVar50 != (MVLocalObjectController *)0x0) {
                      pbVar51 = (byte *)func_?();
                      bVar17 = *pbVar51;
                      piVar11 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar50,*piVar11,(int32_t)pDStack_55,_Stack_34.__klassIndex,
                                 (uint)bVar17,(MethodInfo *)0x0);
                      MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                (pMVar53,(int32_t)VStack_8.z,(MethodInfo *)0x0);
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
    _Var64 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar57 = (undefined1 *)func_?();
      uVar58 = *puVar57;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      pfVar27 = (float *)func_?();
      pFVar59 = (FieldInfo *)*pfVar27;
      _Stack_34.dummy = (void *)func_?();
      uStack_54 = uVar58;
      pOVar10 = (Object *)func_?();
      VStack_8.z = (float)pFVar59;
      pOVar45 = (Object *)func_?();
      pSVar23 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar10,pOVar45,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar23,(MethodInfo *)0x0);
      pMVar60 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar39 = (pMVar60->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar39->vtable[0].methodPtr & 0x100) == 0) {
        pIVar39 = (Il2CppClass *)func_?();
      }
      if (pIVar39->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar39 = (pMVar60->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar39->vtable[0].methodPtr & 0x100) == 0) {
        pIVar39 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar39->static_fields;
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
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar61 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pWVar13 = (pMVar12->fields).worldNetwork, _Var64 = unaff_EDI,
         pWVar13 != (WorldNetwork *)0x0)) {
        this_01 = (pWVar13->fields)._.runtimeEventManagerNetwork;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,pBVar61,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        _Var64.dummy = (MVNetworkGame *)0x0;
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
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (pWVar13 = (pMVar12->fields).worldNetwork, _Var64 = unaff_EDI,
        pWVar13 != (WorldNetwork *)0x0)) &&
       (this_02 = (RuntimeEventManager *)(pWVar13->fields)._.runtimeEventManagerNetwork,
       _Var64 = unaff_EDI, this_02 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_02,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Var64 = (_union_86)p_Var49->__klassIndex;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      p_Var49 = (_union_86 *)func_?();
      _Stack_24 = *p_Var49;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar57 = (undefined1 *)func_?();
      _Stack_28.__klassIndex._0_1_ = *puVar57;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar25;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar25 = (undefined4 *)func_?();
      pMStack_48 = (MVPlayer *)*puVar25;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?();
      bVar22 = *pbVar62;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar63 = (char *)func_?();
      pMVar12 = (this->fields).networkGame;
      if (*pcVar63 == '\0') {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pGVar64 = (pMVar12->fields).gameStatCounterManager,
           unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
           pGVar64 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar64,_Stack_28.__klassIndex,_Var64.__klassIndex,_Stack_24.__klassIndex,
                     (int32_t)pDStack_55,(int32_t)pMStack_48,bVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      else {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pGVar64 = (pMVar12->fields).gameStatCounterManager,
           unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
           pGVar64 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                    (pGVar64,_Stack_28.__klassIndex,_Stack_24.__klassIndex,_Var64.__klassIndex,
                     (int32_t)pDStack_55,(int32_t)pMStack_48,bVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar61 = (Byte__Array *)func_?();
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pGVar64 = (pMVar12->fields).gameStatCounterManager, _Var64 = unaff_EDI,
         pGVar64 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar64,pBVar61,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar11 = (int32_t *)func_?();
      iVar29 = *piVar11;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      _Var64.dummy = (void *)func_?();
      pMVar60 = (MethodInfo *)0x0;
      pBVar61 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)_Var64.typeHandle,pBVar61,pMVar60);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)_Var64.typeHandle,(MethodInfo *)0x0);
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
                  (this_03,iVar29,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    _Var64 = (_union_86)(this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)_Var64.typeHandle,*piVar11,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?();
      pMVar12 = (this->fields).networkGame;
      _Var64 = unaff_EDI;
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pMVar65 = (pMVar12->fields)._GameCoinManager_k__BackingField, _Var64 = unaff_EDI,
         pMVar65 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar65,*pbVar62,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,199,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var49 = (_union_86 *)func_?();
      unaff_EDI = (_union_86)p_Var49->__klassIndex;
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,200,(MethodInfo *)0x0);
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
        if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar18) {
          pDVar20 = pDVar19;
        }
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pDVar20 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      _Var64 = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                  (pMVar12,unaff_EDI.__klassIndex,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x5d,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
code_?:
      func_?();
code_?:
      func_?();
      _Var64 = unaff_EDI;
code_?:
      unaff_EDI = _Var64;
      func_?();
      pDVar9 = unaff_ESI;
code_?:
      func_?();
      unaff_ESI = pDVar9;
      _Var64 = unaff_EDI;
    }
    break;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,1,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
      _Var64 = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var64.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    unaff_EDI.dummy = (void *)func_?();
    if (_Var64.dummy == (MVNetworkGame *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar61,(MethodInfo *)0x0);
      pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x85,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64.dummy = unaff_EDI.dummy;
      if (pOVar10 != (Object *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
code_?:
          func_?();
          pDVar9 = unaff_ESI;
          goto code_?;
        }
        puVar57 = (undefined1 *)func_?();
        eventCode._1_3_ = (undefined3)((uint)unaff_EDI >> 8);
        eventCode = CONCAT31(eventCode._1_3_,*puVar57);
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,100,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if (pOVar10 != (Object *)0x0) {
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar62 = (bool *)func_?();
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar12,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar62,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?();
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    _Var64 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      _Var64 = (_union_86)photonEvent;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
          _Var64 = (_union_86)photonEvent, pMVar34 != (MVLocalPlayer *)0x0)) &&
         (iVar35 = (pMVar34->fields)._._ActorNr_k__BackingField, _Var64 = (_union_86)photonEvent,
         unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
        unaff_EDI = (_union_86)photonEvent;
        if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar36 = (int *)func_?();
        if (*piVar36 == iVar35) {
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar12 = (this->fields).networkGame;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
          _Var64 = (_union_86)photonEvent;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar65 = (pMVar12->fields)._GameCoinManager_k__BackingField,
             unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this,
             _Var64 = (_union_86)photonEvent, pMVar65 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset(pMVar65,pMVar12,(MethodInfo *)0x0);
            pMVar12 = (this->fields).networkGame;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
            _Var64 = (_union_86)photonEvent;
            if (pMVar12 != (MVNetworkGame *)0x0) {
              pMVar66 = (pMVar12->fields).operationRequests;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
              _Var64 = (_union_86)photonEvent;
              if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
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
                            (pMVar66->fields).peer;
                if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                _Var64 = (_union_86)photonEvent;
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
          uStack_1 = 0;
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          _Var64 = (_union_86)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            unaff_EDI = (_union_86)(pMVar12->fields).playerContainer;
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (photonEvent,0xfe,(MethodInfo *)0x0);
            pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            _Var64 = unaff_EDI;
            if ((unaff_EDI.dummy != (MVNetworkGame *)0x0) && (pOVar10 != (Object *)0x0)) {
              pDVar9 = unaff_ESI;
              if ((pOVar10->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar62 = (bool *)func_?();
              bVar22 = *pbVar62;
              if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                if ((((MVNetworkGame__Class *)(unaff_ESI->_0).image)->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar11 = (int32_t *)func_?();
                  MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                            ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar11,bVar22,
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
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x33,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = (_union_86)photonEvent;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,7,(MethodInfo *)0x0);
    _Var64 = unaff_EDI;
    if ((unaff_EDI.dummy == (MVNetworkGame *)0x0) || (pOVar10 == (Object *)0x0)) break;
    if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar63 = (char *)func_?();
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,*pcVar63 == '\0',(MethodInfo *)0x0
                );
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    pMVar16 = (MVNetworkGame__Class *)(unaff_ESI->_0).image;
    bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if (((pMVar16->_1).naturalAligment < bVar17) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(pMVar16->_1).typeHierarchy[bVar17 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (bVar18) {
      pDVar9 = unaff_ESI;
    }
    photonEvent = (EventData *)unaff_ESI;
    if (pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)pDVar9,*pcVar63 == '\0',
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x83,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((photonEvent != (EventData *)0x0) &&
       (pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0),
       unaff_EDI.dummy != (MVNetworkGame *)0x0)) {
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,
                   (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar18) {
        pDVar20 = pDVar19;
      }
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar20,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    _Var64 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa4,(MethodInfo *)0x0);
    if ((Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar61 = (Byte__Array *)0x0;
code_?:
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI,pBVar61,(MethodInfo *)0x0);
      _Var64.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)_Var64.typeHandle,(BytePacker *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (pMVar12 != (MVNetworkGame *)0x0) {
        (pMVar12->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)_Var64;
        func_?();
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      break;
    }
    pBVar61 = (Byte__Array *)func_?();
    unaff_EDI.dummy = (MVNetworkGame *)0x0;
    if (pBVar61 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((photonEvent != (EventData *)0x0) &&
        (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), _Var64 = unaff_EDI,
        unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
       (_Var64 = unaff_EDI, pOVar10 != (Object *)0x0)) {
      if ((pOVar10->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                  ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar66 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var64 = unaff_EDI;
    if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pPVar67 = (pMVar66->fields).peer;
      _Var64.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)_Var64.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pPVar67 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar67->klass->vtable).SendOperation.method)();
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
    _Var64.dummy = (void *)func_?();
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      func_?();
      pOVar10 = (Object *)func_?();
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (Object *)_Var64.typeHandle,pOVar10,
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
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar12->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var64 = unaff_EDI;
      if ((pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                      (pMVar68->fields).logicEventQueue, _Var64 = unaff_EDI,
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
        _Var64 = (_union_86)photonEvent;
        if ((photonEvent != (EventData *)0x0) &&
           (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0),
           _Var64 = (_union_86)photonEvent, pOVar10 != (Object *)0x0)) {
          unaff_EDI = (_union_86)photonEvent;
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          this_04 = (Dictionary_2_System_Int32_System_Single_ *)
                    ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
          iVar29 = *piVar11;
          _Var64 = (_union_86)photonEvent;
          if (this_04 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
            bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                               (this_04,iVar29,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar22 == 0) {
              pDVar69 = (Dictionary_2_System_Int32_System_Object_ *)
                        ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
              VStack_8.z = (float)func_?();
              System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System
              ::Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                        ((ReadOnlyCollectionBuilder_1_System_Object_ *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              _Var64 = (_union_86)photonEvent;
              if (pDVar69 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        (pDVar69,iVar29,(Object *)VStack_8.z,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            pDVar69 = (Dictionary_2_System_Int32_System_Object_ *)
                      ((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->GameEventManager;
            _Var64 = (_union_86)photonEvent;
            if ((pDVar69 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
               (this_10 = (Queue_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (pDVar69,iVar29,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), _Var64 = (_union_86)photonEvent,
               this_10 != (Queue_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Enqueue
                        (this_10,(Object *)photonEvent,
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
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      pMVar68 = (pMVar12->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var64 = unaff_EDI;
      if (pMVar68 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar68,(MethodInfo *)0x0);
        pAVar70 = (Action_1_String_ *)(pMVar68->fields).updateEvaluatorStep;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        _Var64 = unaff_EDI;
        if (pAVar70 != (Action_1_String_ *)0x0) {
          ppOVar71 = &(pAVar70->fields)._._.m_target;
          *ppOVar71 = *ppOVar71 + 0x7d;
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
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar12->fields).logicObjectManagerClientWrapper, _Var64 = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), _Var64 = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      puVar25 = (undefined4 *)func_?();
      pAVar70 = *(Action_1_String_ **)&(unaff_ESI->_0).byval_arg.attrs;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var64 = unaff_EDI;
      if (pAVar70 != (Action_1_String_ *)0x0) {
        (pAVar70->fields)._._.m_target = (Object *)*puVar25;
code_?:
        pvVar72 = (void *)WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick
                                    (0,(MethodInfo *)0x0);
        (pAVar70->fields)._._.method_ptr = pvVar72;
        (pAVar70->fields)._._.invoke_impl = (void *)0x0;
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                     (pMVar12->fields).logicObjectManagerClientWrapper, _Var64 = unaff_EDI,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0), _Var64 = unaff_EDI,
       unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
      p_Var49 = (_union_86 *)func_?();
      _Var64 = (_union_86)p_Var49->__klassIndex;
      pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      while ((pEVar21 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0 &&
             (pEVar21[1].monitor != (MonitorData *)0x0))) {
        if (_Var64.__klassIndex <= *(int *)(pEVar21[1].monitor + 0x10)) goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
        pEVar21 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    _Var64 = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
              (photonEvent,0x48,(MethodInfo *)0x0);
    photonEvent = (EventData *)func_?();
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = (_union_86)this;
    if ((pMVar12 == (MVNetworkGame *)0x0) ||
       (pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar12,(MethodInfo *)0x0),
       (Dictionary_2_System_Object_System_Object___Class *)photonEvent ==
       (Dictionary_2_System_Object_System_Object___Class *)0x0)) break;
    unaff_EDI = (_union_86)this;
    if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
        (((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).namespaze !=
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
        pMVar73 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar52,(int32_t)(((Dictionary_2_System_Object_System_Object___Class *)
                                               photonEvent)->_0).byval_arg.data.__klassIndex,
                             (MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar12,(MethodInfo *)0x0);
          if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
              (((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->_0).namespaze <
              (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x2) goto code_?;
          if (pMVar52 != (MVWorldObjectClientManager *)0x0) {
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar52,(int32_t)*(Action_1_String_ **)
                                                     &(((
                                                  Dictionary_2_System_Object_System_Object___Class *
                                                  )photonEvent)->_0).byval_arg.attrs,
                                   (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (pMVar73 == (MVWorldObject *)0x0) {
code_?:
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if ((EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(unaff_ESI->_0).namespaze !=
                  (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)(pMVar73->fields).id)
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar35 = func_?();
              if (iVar35 != 0) {
                bVar22 = 0xce;
                pDVar9 = unaff_ESI;
                this_11 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_11,bVar22,(MethodInfo *)pDVar9);
                pMVar12 = (this->fields).networkGame;
                if ((pMVar12 != (MVNetworkGame *)0x0) &&
                   (pMVar50 = (pMVar12->fields)._PlayerController_k__BackingField,
                   pMVar50 != (MVLocalObjectController *)0x0)) {
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
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_XPReward:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if ((pMVar12 != (MVNetworkGame *)0x0) &&
       (_Var64.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Stack_34.typeHandle = _Var64.typeHandle, photonEvent != (EventData *)0x0)) {
      VStack_8.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                           EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xdb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        piVar11 = (int32_t *)func_?();
        iVar37 = *piVar11;
        puVar57 = (undefined1 *)func_?();
        uVar58 = *puVar57;
        piVar11 = (int32_t *)func_?();
        MVLocalPlayer::MVLocalPlayer_AddXp
                  ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar11,
                   CONCAT31((int3)((uint)puVar57 >> 8),uVar58),iVar37,iVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      pbVar62 = (bool *)func_?();
      bVar22 = *pbVar62;
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
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var64.dummy = (MVNetworkGame *)0x0;
      if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
        if ((String__Class *)(unaff_EDI.array)->etype == TypeInfo__System__String) {
          _Var64.typeHandle = unaff_EDI.typeHandle;
        }
        if (_Var64.dummy == (MVNetworkGame *)0x0) goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var64.typeHandle,
                           MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
                          );
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64.dummy = (MVNetworkGame *)0x0;
      if (pOVar10 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar10[1].monitor,(MethodInfo *)0x0);
        unaff_EDI.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        _Var64.dummy = (MVNetworkGame *)0x0;
        if (unaff_EDI.dummy != (MVNetworkGame *)0x0) {
          if ((String__Class *)(unaff_EDI.array)->etype == TypeInfo__System__String) {
            _Var64.typeHandle = unaff_EDI.typeHandle;
          }
          if (_Var64.dummy == (MVNetworkGame *)0x0) goto code_?;
        }
        HighlightManager::HighlightManager_Init((String *)_Var64.typeHandle,(MethodInfo *)0x0);
        profileSettingsState = (ProfileSettingsState *)pOVar10[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar74 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        _Var64.dummy = (MVNetworkGame *)0x0;
        if (pGVar74 != (GoldRewardManager *)0x0) {
          pbVar62 = (bool *)func_?();
          (pGVar74->fields).isGoldRewardGame = *pbVar62;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          pbVar62 = (bool *)func_?();
          BStack_7.m_value = *pbVar62;
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
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar75 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)0x0;
      if (pSVar75 == (String *)0x0) {
code_?:
        pSVar23 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar23,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar23,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
      if (pSVar75->klass == TypeInfo__System__String) {
        pSVar23 = pSVar75;
      }
      pDVar9 = unaff_ESI;
      if (pSVar23 != (String *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar35 = func_?();
      pMVar60 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar23 = StringLiteral_V;
      _Var64 = unaff_EDI;
      if (iVar35 != 0) {
        pDVar47 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  (pDVar47,(Object *)pSVar23,pMVar60);
        pbVar62 = (bool *)func_?();
        bVar22 = *pbVar62;
        pMVar12 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        _Var64 = (_union_86)pSVar23;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          piVar11 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar12,*piVar11,bVar22,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar23 = (String *)func_?();
      bVar22 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
      if (bVar22 != 0) goto code_?;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      _Var64 = unaff_EDI;
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
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Var64.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar23,pMVar60);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pMVar76 = (pMVar12->fields).playerContainer, pMVar76 != (MVPlayerContainer *)0x0)) &&
         (pMVar34 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar76,(MethodInfo *)0x0),
         pMVar34 != (MVLocalPlayer *)0x0)) {
        MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                  (pMVar34,(PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    _Var64 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar23 = (String *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar23,pMVar60);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      _Var64 = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        _Var64 = (_union_86)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        if (_Var64.dummy != (MVNetworkGame *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar77 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)_Var64.typeHandle,*piVar11,(MethodInfo *)0x0);
          if (pMVar77 != (MVPlayer *)0x0) {
            (pMVar77->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?();
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
  case MVEventCodes__Enum_TopHighScores:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pSVar23 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar60);
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar23,(MethodInfo *)0x0);
      uVar46 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
          pDVar9 = unaff_ESI;
        }
        if (pDVar9 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pDVar9,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      _Var64 = unaff_EDI;
      if (((pOVar10 != (Object *)0x0) &&
          (pMVar12 = (this->fields).networkGame, _Var64 = unaff_EDI, pMVar12 != (MVNetworkGame *)0x0
          )) && (pLVar78 = (pMVar12->fields).levelRewardsManager, _Var64 = unaff_EDI,
                pLVar78 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar78,(Dictionary_2_System_Int32_System_Int32_ *)pOVar10[1].klass,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Var64.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,(MethodInfo *)unaff_ESI);
      pMVar12 = (this->fields).networkGame;
      if (((pMVar12 != (MVNetworkGame *)0x0) &&
          (pLVar78 = (pMVar12->fields).levelRewardsManager, pOVar10 != (Object *)0x0)) &&
         (pLVar78 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar78,(int32_t)pOVar10[1].klass,(int32_t)pOVar10[1].monitor,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_3;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar23 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar60);
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
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar23 = (String *)func_?();
      newProjectEarningReport =
           (ProjectEarningsReport *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (pSVar23,pMVar60);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                (newProjectEarningReport,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar23 = (String *)func_?();
      pKVar79 = (KogamaVatValues *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar23,pMVar60);
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
      TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar79;
      func_?();
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar11 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar11,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_3;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar12 = (this->fields).networkGame;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
    _Var64 = unaff_EDI;
    if (pMVar12 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
      pMVar12 = (this->fields).networkGame;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
      _Var64 = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
        _Var64 = (_union_86)photonEvent;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup(pMVar12,photonEvent,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar80 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_8,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      VVar42 = *pVVar80;
      pQVar81 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      fVar28 = pQVar81->x;
      VStack_8.x = pQVar81->y;
      VStack_8.y = pQVar81->z;
      VStack_8.z = pQVar81->w;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      _Var64 = unaff_EDI;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        _Var64 = (_union_86)(pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if (_Var64.dummy != (MVNetworkGame *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar77 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)_Var64.typeHandle,*piVar11,(MethodInfo *)0x0);
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
          if (pMVar77 != (MVPlayer *)0x0) {
            this_05 = (pMVar77->fields).spawnRolesManager;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
            _Var64.dummy = (MVNetworkGame *)0x0;
            if (this_05 != (SpawnRolesManager *)0x0) {
              piVar11 = (int32_t *)func_?();
              rotation.y = VStack_8.x;
              rotation.x = fVar28;
              rotation.z = VStack_8.y;
              rotation.w = VStack_8.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_05,*piVar11,VVar42,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    _Var64 = (_union_86)photonEvent;
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
      pUVar33 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar33,(MethodInfo *)0x0);
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      _Var64 = (_union_86)photonEvent;
      if (pMVar12 != (MVNetworkGame *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar12->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        _Var64 = (_union_86)photonEvent;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          piVar11 = (int32_t *)func_?();
          pMVar77 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
          _Var64 = (_union_86)photonEvent;
          if (pMVar77 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar77,(ISpawnRoleChangeHandler *)pUVar33,spawnRolesRuntimeData,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    _Var64 = (_union_86)photonEvent;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar60 = 
      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
      ;
      pSVar23 = (String *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar23,pMVar60);
      pMVar52 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      _Var64 = (_union_86)photonEvent;
      if ((unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
         (_Var64 = (_union_86)photonEvent, pMVar52 != (MVWorldObjectClientManager *)0x0)) {
        _Var62.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar52,(int32_t)(unaff_ESI->_0).this_arg.data.__klassIndex,
                        (MethodInfo *)0x0);
        pMVar12 = (this->fields).networkGame;
        _Var64 = (_union_86)photonEvent;
        if (pMVar12 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar12,(int32_t)(unaff_ESI->_0).byval_arg.data.__klassIndex,(MethodInfo *)0x0)
          ;
          pMVar12 = (this->fields).networkGame;
          _Var64 = (_union_86)photonEvent;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar12,(int32_t)((MVNetworkGame__Fields *)&(unaff_ESI->_0).name)->
                                        GameEventManager,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xd0,(MethodInfo *)0x0);
            pbVar62 = (bool *)func_?();
            bVar22 = *pbVar62;
            iVar35 = func_?();
            _Var64.typeHandle = _Var62.typeHandle;
            if (iVar35 != 0) {
              pMVar60 = (MethodInfo *)0x0;
              this_12 = (MVAvatarSpawnRoleCreator *)func_?();
              MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                        (this_12,(SpawnRoleBodySwitchData *)unaff_ESI,bVar22,pMVar60);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
    _Var64 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      _Var64.dummy = (void *)func_?();
      pOVar10 = (Object *)func_?();
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (_Var64.dummy != (MVNetworkGame *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var64.typeHandle
                   ,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar11 = (int32_t *)func_?();
        iVar29 = *piVar11;
        uStack_54 = 0;
        pOVar10 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)_Var64.typeHandle
                   ,pOVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar12 = (this->fields).networkGame;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar52 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar12,(MethodInfo *)0x0),
           unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
           pMVar52 != (MVWorldObjectClientManager *)0x0)) {
          _Var64.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar52,iVar29,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x23,(MethodInfo *)0x0);
          puVar25 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
          iVar35 = func_?();
          if (iVar35 != 0) {
            pMVar60 = (MethodInfo *)0x0;
            pMVar53 = (MVWorldObjectSpawner *)func_?();
            MVWorldObjectSpawner::MVWorldObjectSpawner_Take(pMVar53,(int32_t)unaff_ESI,pMVar60);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar12 = (this->fields).networkGame;
    _Var64 = unaff_EDI;
    if (((pMVar12 != (MVNetworkGame *)0x0) &&
        (_Var64 = (_union_86)(pMVar12->fields).playerContainer,
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
        photonEvent != (EventData *)0x0)) &&
       (iVar29 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0),
       unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent,
       _Var64.dummy != (MVNetworkGame *)0x0)) {
      bVar22 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                         ((MVPlayerContainer *)_Var64.typeHandle,iVar29,&pMStack_6,
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
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)photonEvent;
      if (pMStack_6 != (MVPlayer *)0x0) {
        if ((pMStack_6->fields).playerState != *puVar82) {
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
      _Var64 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
            pDVar9 = unaff_ESI;
          }
          if (pDVar9 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Encrypt((String *)pDVar9,(MethodInfo *)0x0);
        pMVar66 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar66 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar66,(String *)unaff_ESI,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_3;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      _Var64 = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfb,(MethodInfo *)0x0);
        this_13 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)func_?();
        if ((this_13 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (this_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                                (this_13,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ),
           this_14 !=
           (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar83 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                    StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)&stack0xffffff78,
                               (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)this_14,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                              );
          photonEvent = (EventData *)&stack0xffffff88;
          VStack_8.y = 0.0;
          pSVar23 = (String *)pDVar83->_currentValue;
          uStack_1 = 3;
          VStack_8.z = (float)photonEvent;
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)photonEvent,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,in_stack_84);
              *unaff_FS_OFFSET = pvStack_3;
              return;
            }
            pSVar75 = (String *)0x0;
            if (pSVar23 != (String *)0x0) {
              if (pSVar23->klass == TypeInfo__System__String) {
                pSVar75 = pSVar23;
              }
              unaff_EDI.dummy = (MVNetworkGame *)0x0;
              if (pSVar75 == (String *)0x0) goto code_?;
            }
            TVar85 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                this_13,(Object *)pSVar75,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            in_stack_84 = (MethodInfo *)::StringLiteral___;
            if (TVar85.m_Index == 0) {
              pSVar23 = (String *)0x0;
            }
            else {
              pSVar23 = (String *)func_?();
            }
            pSVar23 = mscorlib.dll::System::String::String_Concat_4
                                (pSVar75,(String *)in_stack_84,pSVar23,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar23,(MethodInfo *)0x0);
          } while( true );
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      _Var64 = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfe,(MethodInfo *)0x0), _Var64 = unaff_EDI,
         pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar25 = (undefined4 *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar25;
        pMVar12 = (this->fields).networkGame;
        _Var64 = (_union_86)this;
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
           pMVar34 != (MVLocalPlayer *)0x0)) {
          if (unaff_ESI ==
              (Dictionary_2_System_Object_System_Object___Class *)
              (pMVar34->fields)._._ActorNr_k__BackingField) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_3;
            return;
          }
          pMVar12 = (this->fields).networkGame;
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar76 = (pMVar12->fields).playerContainer, pMVar76 != (MVPlayerContainer *)0x0)) {
            bVar22 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar76,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (bVar22 == 0) {
code_?:
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar76 = (pMVar12->fields).playerContainer, pMVar76 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar76,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_3;
                return;
              }
            }
            else {
              pMVar12 = (this->fields).networkGame;
              if ((pMVar12 != (MVNetworkGame *)0x0) &&
                 (pMVar76 = (pMVar12->fields).playerContainer, pMVar76 != (MVPlayerContainer *)0x0))
              {
                pMStack_48 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar76,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                pDStack_55 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                          (pDStack_55,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                VStack_8.z = (float)func_?();
                pOVar10 = (Object *)func_?();
                if (pDStack_55 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                             (Object *)VStack_8.z,pOVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  uStack_54 = 3;
                  pOVar10 = (Object *)func_?();
                  if ((pMStack_48 != (MVPlayer *)0x0) &&
                     (pUVar86 = (pMStack_48->fields)._UserProfileData_k__BackingField,
                     pUVar86 != (UserProfileData *)0x0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,pOVar10,
                               (Object *)(pUVar86->fields).UserName,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    uStack_49 = 6;
                    VStack_8.z = (float)func_?();
                    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (this_06 = (pMVar12->fields)._Friends_k__BackingField,
                       this_06 != (FriendList *)0x0)) {
                      bStack_87 = FriendList::FriendList_IsFriend
                                            (this_06,(pMStack_48->fields)._ProfileID_k__BackingField
                                             ,(MethodInfo *)0x0);
                      pOVar10 = (Object *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                 (Object *)VStack_8.z,pOVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,
                                 (Dictionary_2_System_Object_System_Object_ *)pDStack_55,
                                 (MethodInfo *)0x0);
                      pMVar12 = (this->fields).networkGame;
                      if ((pMVar12 != (MVNetworkGame *)0x0) &&
                         (pGVar64 = (pMVar12->fields).gameStatCounterManager,
                         pGVar64 != (GameStatCounterManager *)0x0)) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                  (pGVar64,(int32_t)unaff_ESI,
                                   (pMStack_48->fields)._Team_k__BackingField,(MethodInfo *)0x0);
                        pMVar12 = (this->fields).networkGame;
                        if ((pMVar12 != (MVNetworkGame *)0x0) &&
                           (pGVar64 = (pMVar12->fields).gameStatCounterManager,
                           pGVar64 != (GameStatCounterManager *)0x0)) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveStatsFromActor
                                    (pGVar64,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
      _Var64 = unaff_EDI;
      if ((photonEvent != (EventData *)0x0) &&
         (pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xb,(MethodInfo *)0x0), _Var64 = unaff_EDI,
         pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar25 = (undefined4 *)func_?();
        pMStack_56 = (MVWorldObject *)*puVar25;
        pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        _Var64 = unaff_EDI;
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar36 = (int *)func_?();
          iVar35 = *piVar36;
          _Var64.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9a,(MethodInfo *)0x0);
          unaff_EDI.dummy = (MVNetworkGame *)0x0;
          if (_Var64.dummy != (MVNetworkGame *)0x0) {
            if ((String__Class *)(_Var64.array)->etype == TypeInfo__System__String) {
              unaff_EDI.typeHandle = _Var64.typeHandle;
            }
            if (unaff_EDI.dummy == (MVNetworkGame *)0x0) goto code_?;
          }
          pOVar10 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xbc,(MethodInfo *)0x0);
          _Var64 = unaff_EDI;
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class !=
                (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
            puVar57 = (undefined1 *)func_?();
            _Stack_34.__klassIndex._0_1_ = *puVar57;
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
                pbVar62 = (bool *)func_?();
                bVar22 = *pbVar62;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item(photonEvent,0xe0,(MethodInfo *)0x0);
                if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(unaff_ESI->_0).image == TypeInfo__System__String) {
                    pDVar9 = unaff_ESI;
                  }
                  if (pDVar9 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                VStack_8.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                     JsonConvert_DeserializeObject_2
                                               ((String *)pDVar9,
                                                MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                               );
                pMVar12 = (this->fields).networkGame;
                if ((pMVar12 != (MVNetworkGame *)0x0) &&
                   (pMVar34 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar12,(MethodInfo *)0x0), pMVar34 != (MVLocalPlayer *)0x0
                   )) {
                  if (iVar35 == (pMVar34->fields)._._ActorNr_k__BackingField) {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Received_join_event_for_localPla,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_3;
                    return;
                  }
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
                  MVPlayer::MVPlayer__ctor
                            ((MVPlayer *)unaff_ESI,iVar35,(int32_t)pMStack_56,
                             (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                             (UserProfileData *)VStack_8.z,0,bVar22,(MethodInfo *)0x0);
                  if (unaff_ESI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    (unaff_ESI->_0).properties = (PropertyInfo *)_Stack_28;
                    pMVar12 = (this->fields).networkGame;
                    if ((pMVar12 != (MVNetworkGame *)0x0) &&
                       (pMVar76 = (pMVar12->fields).playerContainer,
                       pMVar76 != (MVPlayerContainer *)0x0)) {
                      MVPlayerContainer::MVPlayerContainer_Add
                                (pMVar76,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
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
code_?:
  unaff_EDI = _Var64;
  func_?();
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
  uVar88 = func_?();
  iVar89 = (int)((ulonglong)uVar88 >> 0x20);
  uVar90 = (uint)uVar88 ^ 0x2b;
  pcVar63 = (char *)((int)unaff_FS_OFFSET + iVar89 + -0x38ef9bd5);
  cVar91 = (char)unaff_EBX;
  *pcVar63 = *pcVar63 + cVar91;
  iVar35 = -*(int *)((uVar90 - 0x62) + iVar89);
  bVar17 = (byte)uVar90;
  uVar92 = (undefined3)((ulonglong)uVar88 >> 8);
  bVar93 = bVar17 + 0x9c;
  pbVar51 = (byte *)(CONCAT31(uVar92,bVar93) + 0x2d);
  bVar94 = (byte)((ulonglong)uVar88 >> 0x28);
  bVar18 = CARRY1(*pbVar51,bVar94) || CARRY1(*pbVar51 + bVar94,bVar17 < 100);
  *pbVar51 = *pbVar51 + bVar94 + (bVar17 < 100);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar89 + 0x2e);
  bVar95 = CARRY1(*pbVar51,bVar93) || CARRY1(*pbVar51 + bVar93,bVar18);
  *pbVar51 = *pbVar51 + bVar93 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x73ac1064 + (int)photonEvent * 2);
  bVar17 = (byte)((uint)extraout_ECX >> 8);
  bVar18 = CARRY1(*pbVar51,bVar17) || CARRY1(*pbVar51 + bVar17,bVar95);
  *pbVar51 = *pbVar51 + bVar17 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&unaff_EDI.type[5].type);
  bVar95 = CARRY1(*pbVar51,bVar17) || CARRY1(*pbVar51 + bVar17,bVar18);
  *pbVar51 = *pbVar51 + bVar17 + bVar18;
  bVar96 = (byte)((ulonglong)uVar88 >> 0x20);
  bVar18 = CARRY1(bVar17,bVar96) || CARRY1(bVar17 + bVar96,bVar95);
  bVar97 = (byte)extraout_ECX;
  bVar98 = bVar17 + bVar96 + bVar95;
  pbVar99 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar98,bVar97));
  uVar100 = (undefined2)((ulonglong)uVar88 >> 0x30);
  cVar101 = bVar94 * '\x02' + bVar18;
  iVar102 = CONCAT22(uVar100,CONCAT11(cVar101,bVar96));
  in_AF = 9 < (bVar93 & 0xf) | in_AF;
  bVar18 = 0x99 < bVar93 || (CARRY1(bVar94,bVar94) || CARRY1(bVar94 * '\x02',bVar18));
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x310b1064 + (int)photonEvent * 2);
  bVar17 = *pbVar51;
  bVar94 = *pbVar51;
  *pbVar51 = bVar94 + bVar98 + bVar18;
  bVar103 = bVar93 + in_AF * -6 + bVar18 * -0x60 + bVar98 +
           (CARRY1(bVar17,bVar98) || CARRY1(bVar94 + bVar98,bVar18));
  iVar89 = CONCAT31(uVar92,bVar103);
  puVar104 = (uint *)(iVar89 + 0x4e + iVar102);
  *puVar104 = *puVar104 ^ (uint)(&stack0xffffff74 + iVar35);
  uVar105 = (undefined2)((ulonglong)uVar88 >> 0x10);
  bVar106 = (byte)((ulonglong)uVar88 >> 8) ^ *(byte *)(iVar89 + -0x4c + iVar102);
  bVar106 = bVar106 ^ *(byte *)(CONCAT22(uVar105,CONCAT11(bVar106,bVar103)) + -0x7a + iVar102);
  iVar89 = CONCAT22(uVar105,CONCAT11(bVar106,bVar103));
  uVar107 = (uint)(&stack0xffffff74 + iVar35) ^ *(uint *)(iVar89 + 0x58 + iVar102);
  uVar92 = (undefined3)((uint)iVar89 >> 8);
  bVar93 = cVar101 + cVar91;
  iVar35 = CONCAT22(uVar100,CONCAT11(bVar93,bVar96));
  pbVar51 = (byte *)(unaff_EBX + 0x35);
  bVar17 = *pbVar51;
  *pbVar51 = *pbVar51 + bVar97;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + CONCAT31(uVar92,bVar103) + -0x53ef9bcb);
  bVar94 = *pbVar51;
  bVar108 = (byte)((uint)unaff_EBX >> 8);
  bVar109 = *pbVar51 + bVar108;
  bVar18 = CARRY1(bVar109,CARRY1(bVar17,bVar97));
  bVar110 = CARRY1(bVar94,bVar108) || bVar18;
  *pbVar51 = bVar109 + CARRY1(bVar17,bVar97);
  bVar95 = bVar110;
  if (!CARRY1(bVar94,bVar108) && !bVar18) {
    bVar17 = *(char *)&(unaff_EDI.type)->data + bVar97;
    bVar95 = CARRY1(*(byte *)&(unaff_EDI.type)->data,bVar97) || CARRY1(bVar17,bVar110);
    *(byte *)&(unaff_EDI.type)->data = bVar17 + bVar110;
  }
  bVar18 = CARRY1(*pbVar99,bVar97) || CARRY1(*pbVar99 + bVar97,bVar95);
  *pbVar99 = *pbVar99 + bVar97 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x36361064 + (int)photonEvent * 2);
  bVar95 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar18);
  *pbVar51 = *pbVar51 + bVar98 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)photonEvent * 2 + 0x73ac1064);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EBX + 0x6e);
  bVar17 = *pbVar51;
  bVar94 = *pbVar51;
  *pbVar51 = bVar94 + bVar93 + bVar18;
  bVar98 = cVar91 + bVar93 + (CARRY1(bVar17,bVar93) || CARRY1(bVar94 + bVar93,bVar18));
  iVar89 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar98);
  in_AF = 9 < (bVar103 & 0xf) | in_AF;
  uVar90 = CONCAT31(uVar92,bVar103 + in_AF * '\x06') & 0xffffff0f;
  bVar17 = (byte)uVar90;
  bVar106 = bVar106 + in_AF;
  iVar102 = CONCAT22((short)(uVar90 >> 0x10),CONCAT11(bVar106,bVar17));
  *(char *)((int)unaff_FS_OFFSET + iVar89) =
       *(char *)((int)unaff_FS_OFFSET + iVar89) + bVar93 + in_AF;
  pbVar51 = (byte *)(iVar89 + 0x910643d);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar17 < 100);
  *pbVar51 = *pbVar51 + bVar106 + (bVar17 < 100);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)photonEvent);
  bVar95 = CARRY1(*pbVar51,bVar93) || CARRY1(*pbVar51 + bVar93,bVar18);
  *pbVar51 = *pbVar51 + bVar93 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar89 + 0x3e);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + -0x42ef9bc2);
  bVar95 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar18);
  *pbVar51 = *pbVar51 + bVar96 + bVar18;
  bVar18 = CARRY1(bVar108,bVar106) || CARRY1(bVar108 + bVar106,bVar95);
  bVar106 = bVar108 + bVar106 + bVar95;
  pbVar111 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar106,bVar98));
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + unaff_EDI.__klassIndex * 2);
  bVar95 = CARRY1(*pbVar51,bVar96) || CARRY1(*pbVar51 + bVar96,bVar18);
  *pbVar51 = *pbVar51 + bVar96 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35 + 0x2b10643f);
  bVar18 = CARRY1(*pbVar51,bVar17) || CARRY1(*pbVar51 + bVar17,bVar95);
  *pbVar51 = *pbVar51 + bVar17 + bVar95;
  iVar112 = iVar102 + 1;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar99 + iVar112 * 2));
  bVar95 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar18);
  *pbVar51 = *pbVar51 + bVar106 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)unaff_EDI.dummy);
  bVar18 = CARRY1(*pbVar51,bVar97) || CARRY1(*pbVar51 + bVar97,bVar95);
  *pbVar51 = *pbVar51 + bVar97 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar112);
  bVar109 = (byte)((uint)iVar112 >> 8);
  bVar95 = CARRY1(*pbVar51,bVar109) || CARRY1(*pbVar51 + bVar109,bVar18);
  *pbVar51 = *pbVar51 + bVar109 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((int)&(((Dictionary_2_System_Object_System_Object___Class *)
                                 ((int)photonEvent + 0x17106324))->vtable).get_Count.method + 2));
  bVar94 = (byte)iVar112;
  bVar18 = CARRY1(*pbVar51,bVar94) || CARRY1(*pbVar51 + bVar94,bVar95);
  *pbVar51 = *pbVar51 + bVar94 + bVar95;
  puVar113 = (undefined1 *)((int)&(unaff_EDI.type)->data + 1);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35 + 0x48);
  bVar95 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar18);
  *pbVar51 = *pbVar51 + bVar98 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + 0x18106448));
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  pbVar99 = pbVar99 + -1;
  bVar103 = (byte)((uint)pbVar99 >> 8);
  bVar17 = (byte)pbVar99 + bVar103;
  bVar95 = CARRY1((byte)pbVar99,bVar103) || CARRY1(bVar17,bVar18);
  iVar89 = CONCAT31((int3)((uint)pbVar99 >> 8),bVar17 + bVar18) + -1;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x00000047);
  bVar18 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar95);
  *pbVar51 = *pbVar51 + bVar98 + bVar95;
  bVar103 = (byte)iVar89;
  bVar17 = bVar103 + bVar94;
  bVar95 = CARRY1(bVar103,bVar94) || CARRY1(bVar17,bVar18);
  bVar17 = bVar17 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x1f10644c);
  bVar18 = CARRY1(*pbVar51,bVar94) || CARRY1(*pbVar51 + bVar94,bVar95);
  *pbVar51 = *pbVar51 + bVar94 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET +
                    (int)&(((Dictionary_2_System_Object_System_Object___Class *)
                           ((int)photonEvent + 0x5d106310))->vtable).
                          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
                    );
  bVar95 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar18);
  *pbVar51 = *pbVar51 + bVar106 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35 + -0x69ef9bb3);
  bVar18 = CARRY1(*pbVar51,bVar109) || CARRY1(*pbVar51 + bVar109,bVar95);
  *pbVar51 = *pbVar51 + bVar109 + bVar95;
  puVar57 = (undefined1 *)
            ((int)&(((Dictionary_2_System_Object_System_Object___Class *)((int)photonEvent + -0x224)
                    )->vtable).OnDeserialization_1.method + 3);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35 * 3 + 100);
  bVar103 = (byte)((uint)iVar89 >> 8);
  bVar95 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar18);
  *pbVar51 = *pbVar51 + bVar103 + bVar18;
  bVar18 = CARRY1(*pbVar111,bVar17) || CARRY1(*pbVar111 + bVar17,bVar95);
  *pbVar111 = *pbVar111 + bVar17 + bVar95;
  *(byte **)(uVar107 - 5) = pbVar111;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)&stack0x9510644f);
  bVar95 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar18);
  *pbVar51 = *pbVar51 + bVar103 + bVar18;
  *(uint *)(uVar107 - 9) = uVar107 - 5;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)puVar113);
  bVar18 = CARRY1(*pbVar51,bVar93) || CARRY1(*pbVar51 + bVar93,bVar95);
  *pbVar51 = *pbVar51 + bVar93 + bVar95;
  *(undefined1 **)(uVar107 - 0xd) = &stack0xfffffffc;
  bVar95 = CARRY1(bVar17,bVar98) || CARRY1(bVar17 + bVar98,bVar18);
  bVar93 = bVar17 + bVar98 + bVar18;
  *(undefined1 **)(uVar107 - 0x11) = &stack0xfffffffc;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x63106457);
  bVar18 = CARRY1(*pbVar51,bVar94) || CARRY1(*pbVar51 + bVar94,bVar95);
  *pbVar51 = *pbVar51 + bVar94 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + (int)puVar57 * 2 + 0x56e61064));
  bVar95 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar18);
  *pbVar51 = *pbVar51 + bVar103 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + (int)puVar57 * 2 + 0x73ac1064));
  bVar18 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar95);
  *pbVar51 = *pbVar51 + bVar103 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + (int)puVar57 * 2 + 0x579d1064));
  bVar95 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar18);
  *pbVar51 = *pbVar51 + bVar103 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET +
                    (int)((int)&(((Dictionary_2_System_Object_System_Object___Class *)photonEvent)->
                                _0).implementedInterfaces + 3));
  bVar18 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar95);
  *pbVar51 = *pbVar51 + bVar98 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + 0x18106458));
  bVar17 = *pbVar51 + bVar93;
  bVar95 = CARRY1(*pbVar51,bVar93) || CARRY1(bVar17,bVar18);
  *pbVar51 = bVar17 + bVar18;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x18106459);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  iVar89 = *(int *)(uVar107 - 0xd);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35 + -0x1ef9ba6);
  bVar95 = CARRY1(*pbVar51,bVar94) || CARRY1(*pbVar51 + bVar94,bVar18);
  *pbVar51 = *pbVar51 + bVar94 + bVar18;
  iVar35 = *(int *)(uVar107 - 9);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(pbVar111 + 0x5b));
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar89);
  bVar17 = (byte)iVar35;
  bVar95 = CARRY1(*pbVar51,bVar17) || CARRY1(*pbVar51 + bVar17,bVar18);
  *pbVar51 = *pbVar51 + bVar17 + bVar18;
  bVar18 = CARRY1(bVar98,bVar109) || CARRY1(bVar98 + bVar109,bVar95);
  uVar40 = *(undefined4 *)(uVar107 - 1);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)puVar57);
  bVar110 = CARRY1(*pbVar51,bVar17) || CARRY1(*pbVar51 + bVar17,bVar18);
  *pbVar51 = *pbVar51 + bVar17 + bVar18;
  *(int *)(uVar107 - 1) = iVar112;
  *(int *)(uVar107 - 5) = iVar89;
  *(int *)(uVar107 - 9) = iVar35;
  *(uint *)(uVar107 - 0xd) = CONCAT31((int3)((uint)pbVar111 >> 8),bVar98 + bVar109 + bVar95);
  *(uint *)(uVar107 - 0x11) = uVar107 + 3;
  *(undefined4 *)(uVar107 - 0x15) = uVar40;
  *(undefined1 **)(uVar107 - 0x19) = puVar57;
  *(undefined1 **)(uVar107 - 0x1d) = puVar113;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x61);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar110);
  *pbVar51 = *pbVar51 + bVar106 + bVar110;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar35);
  bVar17 = *pbVar51;
  bVar93 = (byte)((uint)iVar89 >> 8);
  bVar94 = *pbVar51 + bVar93;
  *pbVar51 = bVar94 + bVar18;
  bVar109 = (byte)((uint)*(undefined4 *)(uVar107 - 0xd) >> 8);
  bVar18 = CARRY1(bVar109,(byte)*(undefined4 *)(uVar107 - 5)) ||
            CARRY1(bVar109 + (byte)*(undefined4 *)(uVar107 - 5),
                   CARRY1(bVar17,bVar93) || CARRY1(bVar94,bVar18));
  puVar113 = *(undefined1 **)(uVar107 + 3);
  puVar57 = *(undefined1 **)(uVar107 + 7);
  iVar102 = *(int *)(uVar107 + 0xb);
  uVar41 = *(undefined4 *)(uVar107 + 0x13);
  iVar89 = *(int *)(uVar107 + 0x17);
  uVar40 = *(undefined4 *)(uVar107 + 0x1b);
  iVar35 = *(int *)(uVar107 + 0x1f);
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar89 + 0x78106462);
  bVar97 = (byte)iVar89;
  bVar95 = CARRY1(*pbVar51,bVar97) || CARRY1(*pbVar51 + bVar97,bVar18);
  *pbVar51 = *pbVar51 + bVar97 + bVar18;
  puVar114 = (ushort *)(iVar35 + -0x1b + iVar89);
  sVar115 = ((ushort)(uVar107 + 0x23) & 3) - (*puVar114 & 3);
  *puVar114 = *puVar114 + (ushort)(0 < sVar115) * sVar115;
  puVar114 = (ushort *)(iVar35 + 0x7e + iVar89);
  sVar115 = ((ushort)(uVar107 + 0x23) & 3) - (*puVar114 & 3);
  *puVar114 = *puVar114 + (ushort)(0 < sVar115) * sVar115;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)puVar113);
  bVar103 = (byte)uVar40;
  bVar18 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar95);
  *pbVar51 = *pbVar51 + bVar103 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x63781064);
  bVar95 = CARRY1(*pbVar51,bVar103) || CARRY1(*pbVar51 + bVar103,bVar18);
  *pbVar51 = *pbVar51 + bVar103 + bVar18;
  bVar17 = (byte)((uint)iVar89 >> 8);
  bVar93 = (byte)uVar41 + bVar17;
  bVar18 = CARRY1((byte)uVar41,bVar17) || CARRY1(bVar93,bVar95);
  uVar92 = (undefined3)((uint)uVar41 >> 8);
  bVar93 = bVar93 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar89 + 0x15106466);
  bVar98 = (byte)((uint)uVar41 >> 8);
  bVar95 = CARRY1(*pbVar51,bVar98) || CARRY1(*pbVar51 + bVar98,bVar18);
  *pbVar51 = *pbVar51 + bVar98 + bVar18;
  pbVar51 = (byte *)segment(in_FS,(short)iVar102 + (short)puVar57 + 0x67);
  bVar109 = (byte)iVar35;
  bVar18 = CARRY1(*pbVar51,bVar109) || CARRY1(*pbVar51 + bVar109,bVar95);
  *pbVar51 = *pbVar51 + bVar109 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + (int)(puVar57 + -0x68ef9b99));
  bVar95 = CARRY1(*pbVar51,bVar93) || CARRY1(*pbVar51 + bVar93,bVar18);
  *pbVar51 = *pbVar51 + bVar93 + bVar18;
  *(undefined4 *)(uVar107 + 0x1f) = 0x69721064;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + CONCAT31(uVar92,bVar93) + 0x6a8a1064 + (int)puVar57 * 2)
  ;
  bVar106 = (byte)((uint)uVar40 >> 8);
  bVar18 = CARRY1(*pbVar51,bVar106) || CARRY1(*pbVar51 + bVar106,bVar95);
  *pbVar51 = *pbVar51 + bVar106 + bVar95;
  pbVar51 = (byte *)((int)unaff_FS_OFFSET + iVar102 + 0x7a10646b);
  bVar17 = *pbVar51;
  bVar94 = *pbVar51;
  *pbVar51 = bVar94 + bVar97 + bVar18;
  uVar105 = (undefined2)iVar89;
  uVar58 = in(uVar105);
  *puVar113 = uVar58;
  bVar18 = CARRY1(bVar106,bVar98) ||
            CARRY1(bVar106 + bVar98,CARRY1(bVar17,bVar97) || CARRY1(bVar94 + bVar97,bVar18));
  uVar58 = in(uVar105);
  puVar113[1] = uVar58;
  out(*puVar57,uVar105);
  pcVar63 = (char *)((int)unaff_FS_OFFSET + CONCAT31(uVar92,bVar93 + bVar109 + bVar18) + 0x71);
  *pcVar63 = *pcVar63 + bVar103 + (CARRY1(bVar93,bVar109) || CARRY1(bVar93 + bVar109,bVar18));
  pcVar116 = (code *)swi(3);
  (*pcVar116)();
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
          pDVar6 = (Delegate *)(pOVar4 + 1);
          unaff_EDI = pDVar6;
          pAVar2 = source;
          pAVar7 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
                   func_?(pDVar6,iVar5,source);
          bVar8 = pAVar7 != source;
          source = pAVar7;
        } while (bVar8);
        if (pDVar6->klass == (Delegate__Class *)0x0) {
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    *(HashSet_1_System_ByteEnum_ **)pMVar1 = this_01;
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
    *(Queue_1_ExitGames_Client_Photon_EventData_ **)pMVar1 = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    ppMStack2 = &(this->fields).networkGame;
    *ppMStack2 = networkGame;
    pMStack3 = networkGame;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

