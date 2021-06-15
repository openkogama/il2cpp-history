
/* Void HandleActorReadyMetric() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_HandleActorReadyMetric
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 3;
  uStack_2 = 0;
  piVar3 = (int *)func_?(TypeInfo__MVJoinState,&uStack_1);
  if (piVar3 == (int *)0x0) goto code_?;
  pSVar4 = (String *)(**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
  puVar5 = (undefined4 *)func_?(piVar3);
  uStack_1 = *puVar5;
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::DateTime::DateTime_get_UtcNow((DateTime *)auStack_6,(MethodInfo *)0x0);
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  func_?(&uStack_7,0x7b2,1,1,0,0,0,1);
  uStack_2 = func_?(&stack0xffffffb8,uStack_7,uStack_8);
  fVar11 = (float10)func_?(&uStack_2,0);
  auStack_6._8_8_ = (undefined8)fVar11;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar12 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar12->fields).DOMReady) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar12 == (LoadStats *)0x0) goto code_?;
    fStack_13 = (float)((double)auStack_6._8_8_ - (pLVar12->fields).DOMReady);
    fStack_14 = fStack_13;
    pOVar15 = (Object *)func_?(TypeInfo__System__Single,&fStack_13);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_CompleteJoinTime_,pOVar15,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
    if ((0.0 < fStack_14) && (fStack_14 < _UNK_?)) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_CompleteJoinTime,fStack_14,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      fStack_13 = (float)MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&fStack_13);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_CompleteJoinTime_,pOVar15,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar4,fStack_14,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar12 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar12->fields).PluginInit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar12 == (LoadStats *)0x0) goto code_?;
    fStack_13 = (float)((double)auStack_6._8_8_ - (pLVar12->fields).PluginInit);
    fStack_14 = fStack_13;
    pOVar15 = (Object *)func_?(TypeInfo__System__Single,&fStack_13);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_JoinAndInitializationTime_,pOVar15,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
    if ((0.0 < fStack_14) && (fStack_14 < _UNK_?)) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinAndInitializationTime,fStack_14,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      fStack_13 = (float)MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode,&fStack_13);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_JoinAndInitializationTime_,pOVar15,
                          (MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar4,fStack_14,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar12 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar12->fields).GameStartTime) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pLVar12 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar12 == (LoadStats *)0x0) goto code_?;
    fStack_14 = (float)((double)auStack_6._8_8_ - (pLVar12->fields).GameStartTime);
    if ((0.0 < fStack_14) && (fStack_14 < _UNK_?)) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Value_1(StringLiteral_JoinTime,fStack_14,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      fStack_13 = (float)MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameMode);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_JoinTime_,pOVar15,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar4,fStack_14,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar16 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  pMVar17 = (this->fields).networkGame;
  if (bVar16 == 0) {
    if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
    fStack_13 = (float)(pMVar17->fields)._GameType_k__BackingField;
    pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameType,&fStack_13);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_SessionType_,pOVar15,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar18 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar18 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar18->fields).embedded != 0) {
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
      fStack_13 = (float)(pMVar17->fields)._GameType_k__BackingField;
      pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameType,&fStack_13);
      pSVar4 = StringLiteral_SessionType_Embedded;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
        pSVar4 = StringLiteral_SessionType_Embedded;
      }
code_?:
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)pSVar4,pOVar15,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
    fStack_13 = (float)(pMVar17->fields)._GameType_k__BackingField;
    pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameType,&fStack_13);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_SessionType_Tourist,pOVar15,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar18 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar18 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar18->fields).embedded != 0) {
      pMVar17 = (this->fields).networkGame;
      if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
      fStack_13 = (float)(pMVar17->fields)._GameType_k__BackingField;
      pOVar15 = (Object *)func_?(TypeInfo__MV__Common__MVGameType,&fStack_13);
      pSVar4 = StringLiteral_SessionType_TouristEmbedded;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
        pSVar4 = StringLiteral_SessionType_TouristEmbedded;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_JoinCompleted,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  pMVar5 = unaff_ESI;
  method_02 = unaff_EBX;
  puVar6 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  auStack_7._0_8_ = 0;
  auStack_7._8_4_ = (MVWorldObjectClientManagerNetwork *)0x0;
  func_?();
  pEVar8 = photonEvent;
  MVar9 = eventCode & MVEventCodes__Enum_Join;
  uStack_10 = CONCAT44(&stack0xffffff64,(undefined4)uStack_10);
  uVar11 = uStack_10;
  switch(MVar9) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  (unaff_ESI,*piVar13,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (((pMVar5 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar5->fields).worldNetwork, puStack_4 = &stack0xffffff64,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (puStack_4 = &stack0xffffff64,
       unaff_EDI = (MVAvatar__Class *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)0x0),
       unaff_ESI = (MVNetworkGame *)photonEvent, photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)unaff_ESI,0x12,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        pMVar16 = (MethodInfo *)0x0;
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                  ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar13,pDVar17,pMVar16);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x12,(MethodInfo *)0x0);
      pDVar20 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      unaff_ESI = (MVNetworkGame *)func_?(pOVar18);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pWVar14 = (pMVar5->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
        pMVar21 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)pDVar20);
        uVar12 = 0;
        if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                    (pMVar21,(int32_t)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x13,(MethodInfo *)0x0);
      pDVar20 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      unaff_ESI = (MVNetworkGame *)func_?(pOVar18);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pWVar14 = (pMVar5->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
        pMVar21 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)pDVar20);
        uVar12 = 0;
        if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                    (pMVar21,(int32_t)unaff_EDI,
                     (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  default:
    if (MVar9 == MVEventCodes__Enum_PropertiesChanged) {
      uVar12 = 0;
      puStack_4 = &stack0xffffff64;
      if (photonEvent != (EventData *)0x0) {
        puStack_4 = &stack0xffffff64;
        pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)
                    func_?(pOVar18,
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        eventCode = (MVEventCodes__Enum)unaff_EDI;
        uVar11 = uStack_10;
        if ((unaff_EDI != (MVAvatar__Class *)0x0) &&
           (pDVar22 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Keys
                                ((Dictionary_2_WinningConditionType_System_Object_ *)unaff_EDI,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ), uVar11 = uStack_10,
           pDVar22 !=
           (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)) {
          func_?(&stack0xffffff70,pDVar22,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
          uStack_1 = 0;
          while (cVar23 = func_?(&stack0xffffff88,
                                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                         ), cVar23 != '\0') {
            uVar12 = func_?(&stack0xffffff88,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                     );
            pTVar24 = (Type *)func_?(uVar12,TypeInfo__System__String);
            pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)unaff_EDI,pTVar24,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar26 = mscorlib.dll::System::String::String_Concat_1
                                ((Object *)pTVar24,(Object *)::StringLiteral___,(Object *)pPVar25,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar26,(MethodInfo *)0x0);
            unaff_EDI = (MVAvatar__Class *)eventCode;
          }
          *(undefined4 *)uStack_10._4_4_ = 0xab4;
          uStack_1 = 0xffffffff;
          func_?(&stack0xffffff88,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         );
          goto code_?;
        }
        goto code_?;
      }
      break;
    }
    if (MVar9 == MVEventCodes__Enum_Leave) {
      uVar12 = 0;
      puStack_4 = &stack0xffffff64;
      if (photonEvent == (EventData *)0x0) break;
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
      unaff_EDI = unaff_EDI;
      uVar11 = uStack_10;
      if (pOVar18 == (Object *)0x0) goto code_?;
      if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      pMVar16 = (MethodInfo *)&UNK_?;
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      unaff_EDI = (MVAvatar__Class *)this;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar28 = (pMVar5->fields).playerContainer, unaff_EDI = (MVAvatar__Class *)this,
         pMVar28 != (MVPlayerContainer *)0x0)) {
        pMVar29 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar28,(MethodInfo *)0x0);
        uVar12 = 0;
        unaff_EDI = (MVAvatar__Class *)this;
        if (pMVar29 != (MVLocalPlayer *)0x0) {
          pMVar5 = (MVNetworkGame *)
                    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar29,pMVar16);
          if (unaff_ESI == pMVar5) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            goto code_?;
          }
          pMVar5 = (this->fields).networkGame;
          uVar12 = 0;
          unaff_EDI = (MVAvatar__Class *)this;
          if ((pMVar5 != (MVNetworkGame *)0x0) &&
             (pMVar28 = (pMVar5->fields).playerContainer, unaff_EDI = (MVAvatar__Class *)this,
             pMVar28 != (MVPlayerContainer *)0x0)) {
            bVar30 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar28,(int32_t)unaff_ESI,in_stack_31);
            if (bVar30 == 0) {
code_?:
              pMVar5 = (this->fields).networkGame;
              uVar12 = 0;
              unaff_EDI = (MVAvatar__Class *)this;
              if ((pMVar5 != (MVNetworkGame *)0x0) &&
                 (pMVar28 = (pMVar5->fields).playerContainer, unaff_EDI = (MVAvatar__Class *)this,
                 pMVar28 != (MVPlayerContainer *)0x0)) {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar28,(int32_t)unaff_ESI,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pMVar5 = (this->fields).networkGame;
              uVar12 = 0;
              unaff_EDI = (MVAvatar__Class *)this;
              if ((pMVar5 != (MVNetworkGame *)0x0) &&
                 (pMVar28 = (pMVar5->fields).playerContainer, unaff_EDI = (MVAvatar__Class *)this,
                 pMVar28 != (MVPlayerContainer *)0x0)) {
                pMStack_32 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar28,(int32_t)unaff_ESI,in_stack_33);
                pDStack_34 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                System.Core.dll::System::Collections::Generic::
                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                          ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDStack_34,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                eventCode = eventCode & 0xffffff;
                uVar12 = func_?();
                uStack_35 = CONCAT44(uVar12,(Il2CppType **)uStack_35);
                uStack_10 = CONCAT44(unaff_ESI,(undefined4)uStack_10);
                pTVar36 = (Theme *)func_?();
                unaff_EDI = (MVAvatar__Class *)this;
                uVar11 = uStack_10;
                if (pDStack_34 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                pDVar17 = pDStack_34;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                Dictionary_2_System_String_Theme__set_Item
                          ((Dictionary_2_System_String_Theme_ *)pDStack_34,(String *)uStack_35._4_4_
                           ,pTVar36,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                uStack_37 = 3;
                uVar12 = func_?(TypeInfo__System__Byte,&uStack_37);
                uStack_35 = CONCAT44(uVar12,(Il2CppType **)uStack_35);
                uVar12 = 0;
                unaff_EDI = (MVAvatar__Class *)this;
                if (pMStack_32 != (MVPlayer *)0x0) {
                  iVar38 = GamePointGainEffect::GamePointGainEffect_get_ID
                                     ((GamePointGainEffect *)pMStack_32,(MethodInfo *)0x0);
                  unaff_EDI = (MVAvatar__Class *)this;
                  uVar11 = uStack_10;
                  if (iVar38 == 0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                  Dictionary_2_System_String_Theme__set_Item
                            ((Dictionary_2_System_String_Theme_ *)pDStack_34,
                             (String *)uStack_35._4_4_,*(Theme **)(iVar38 + 0xc),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  pMVar16 = (MethodInfo *)&bStack_39;
                  bStack_39 = 6;
                  auStack_7._12_4_ = func_?();
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  uVar12 = 0;
                  unaff_EDI = (MVAvatar__Class *)this;
                  if (pMVar5 != (MVNetworkGame *)0x0) {
                    uStack_35 = CONCAT44((pMVar5->fields)._Friends_k__BackingField,
                                         (Il2CppType **)uStack_35);
                    pOVar18 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMStack_32
                                         ,(MethodInfo *)0x0);
                    uVar12 = 0;
                    unaff_EDI = (MVAvatar__Class *)this;
                    if (uStack_35._4_4_ != (Il2CppRGCTXData *)0x0) {
                      bStack_40 = FriendList::FriendList_IsFriend
                                            ((FriendList *)uStack_35._4_4_,(int32_t)pOVar18,pMVar16
                                            );
                      pTVar36 = (Theme *)func_?();
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]
                      ::Dictionary_2_System_String_Theme__set_Item
                                ((Dictionary_2_System_String_Theme_ *)pDStack_34,
                                 (String *)auStack_7._12_4_,pTVar36,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                (MVGameMsgType__Enum_UserLeft,pDStack_34,(MethodInfo *)0x0);
                      pMVar5 = (this->fields).networkGame;
                      uVar12 = 0;
                      unaff_EDI = (MVAvatar__Class *)this;
                      if (pMVar5 != (MVNetworkGame *)0x0) {
                        uStack_35 = CONCAT44((pMVar5->fields).gameStatCounterManager,
                                             (Il2CppType **)uStack_35);
                        pIVar41 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                  KogamaSettingsCore::KogamaSettingTypes::
                                  KogamaSettingNumericBase`1[System::Single]::
                                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                            ((KogamaSettingNumericBase_1_System_Single_ *)pMStack_32
                                             ,in_stack_42);
                        uVar12 = 0;
                        unaff_EDI = (MVAvatar__Class *)this;
                        if (uStack_35._4_4_ != (Il2CppRGCTXData *)0x0) {
                          MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                    ((GameStatCounterManager *)uStack_35._4_4_,(int32_t)unaff_ESI,
                                     (MVTeam__Enum)pIVar41,in_stack_43);
                          pMVar5 = (this->fields).networkGame;
                          uVar12 = 0;
                          unaff_EDI = (MVAvatar__Class *)this;
                          if ((pMVar5 != (MVNetworkGame *)0x0) &&
                             (pGVar44 = (pMVar5->fields).gameStatCounterManager,
                             unaff_EDI = (MVAvatar__Class *)this,
                             pGVar44 != (GameStatCounterManager *)0x0)) {
                            MVWorldObject.dll::GameStatCounterManager::
                            GameStatCounterManager_RemoveStatsFromActor
                                      (pGVar44,(int32_t)unaff_ESI,(MethodInfo *)pDVar17);
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
      break;
    }
    if (MVar9 != MVEventCodes__Enum_Join) {
      unaff_ESI = (MVNetworkGame *)(this->fields).dynamicEventCallbackManager;
      unaff_EDI = (MVAvatar__Class *)this;
      puStack_4 = &stack0xffffff64;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        puStack_4 = &stack0xffffff64;
        if (cRam_? == '\0') {
          puStack_4 = &stack0xffffff64;
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pEVar45 = (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery;
        uVar11 = uStack_10;
        if (pEVar45 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
          bVar30 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                   NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                             ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pEVar45,eventCode,
                              MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                             );
          if (bVar30 == 0) {
            uStack_46 = (undefined1)eventCode;
            pOVar18 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar26 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_Unknown_event__,pOVar18,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar26,(MethodInfo *)0x0);
            goto code_?;
          }
          unaff_ESI = (MVNetworkGame *)(this->fields).dynamicEventCallbackManager;
          uVar11 = uStack_10;
          if (unaff_ESI != (MVNetworkGame *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_15 = (Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)
                      (unaff_ESI->fields).ReceivedItemFromQuery;
            uVar11 = uStack_10;
            if (this_15 != (Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)0x0) {
              pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                        MVEventCodes,System::Object]::
                        Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                                  (this_15,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
              unaff_ESI = (MVNetworkGame *)0x0;
              uVar11 = uStack_10;
              if (pOVar18 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pOVar18[1].klass == (Object__Class *)0x0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_No_subscribers_to_event_data,(MethodInfo *)0x0)
                  ;
                }
                else {
                  mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
                  String,System::Object]]::
                  Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                            ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                              *)pOVar18[1].klass,
                             (Dictionary_2_System_String_System_Object_ *)photonEvent,
                             MethodInfo__System__Action<ExitGames::Client::Photon::EventData>__Invoke_ExitGames__Client__Photon__EventData_
                            );
                }
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent == (EventData *)0x0) break;
    pMVar16 = (MethodInfo *)photonEvent;
    puStack_4 = &stack0xffffff64;
    pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xb,(MethodInfo *)0x0);
    uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
    unaff_EDI = unaff_EDI;
    uVar11 = uStack_10;
    if (pOVar18 == (Object *)0x0) goto code_?;
    if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar13 = (int32_t *)func_?();
    auStack_7._12_4_ = *piVar13;
    pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar8,0xfe,(MethodInfo *)0x0);
    uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
    unaff_EDI = unaff_EDI;
    uVar11 = uStack_10;
    if (pOVar18 == (Object *)0x0) goto code_?;
    if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pMVar47 = (MVEventCodes__Enum *)func_?(pOVar18);
    eventCode = *pMVar47;
    pMVar48 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar8,0x9a,(MethodInfo *)0x0);
    unaff_EDI = (MVAvatar__Class *)0x0;
    if (pMVar48 == (MVAvatar__Class *)0x0) {
code_?:
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xbc,(MethodInfo *)0x0);
      uVar27 = CONCAT44(TypeInfo__MV__Common__BuildTarget,pOVar18);
      uVar11 = uStack_10;
      if (pOVar18 == (Object *)0x0) goto code_?;
      if ((pOVar18->klass->_0).element_class !=
          (TypeInfo__MV__Common__BuildTarget->_0).element_class) {
code_?:
        func_?(uVar27);
        goto code_?;
      }
      puVar6 = (undefined1 *)func_?(pOVar18);
      uStack_35._0_5_ = CONCAT14(*puVar6,(Il2CppType **)uStack_35);
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x59,(MethodInfo *)0x0);
      uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
      uVar11 = uStack_10;
      if (pOVar18 == (Object *)0x0) goto code_?;
      if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      p_Var60 = (_union_155 *)func_?(pOVar18);
      _Stack_38 = *p_Var60;
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0xe0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pMVar5 = (MVNetworkGame *)0x0;
      if (unaff_ESI == (MVNetworkGame *)0x0) {
code_?:
        pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                            ((String *)pMVar5,
                             MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                            );
        uStack_10 = CONCAT44(pXVar49,(undefined4)uStack_10);
        pMVar5 = (this->fields).networkGame;
        uVar12 = 0;
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar50 = (MethodInfo *)(pMVar5->fields).playerContainer, pMVar50 != (MethodInfo *)0x0)
           ) {
          pMVar29 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                              ((MVPlayerContainer *)pMVar50,pMVar16);
          uVar12 = 0;
          if (pMVar29 != (MVLocalPlayer *)0x0) {
            pSVar26 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar29,
                                 (MethodInfo *)0x0);
            if ((String *)eventCode == pSVar26) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Received_join_event_for_localPla,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            unaff_ESI = (MVNetworkGame *)func_?();
            MVPlayer::MVPlayer__ctor
                      ((MVPlayer *)unaff_ESI,eventCode,auStack_7._12_4_,(String *)unaff_EDI,
                       (BuildTarget__Enum)uStack_35._4_4_,(UserProfileData *)uStack_10._4_4_,0,
                       (MethodInfo *)0x0);
            uVar12 = 0;
            if (unaff_ESI != (MVNetworkGame *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
              ObjectPool_1_System_Object__set_countAll
                        ((ObjectPool_1_System_Object_ *)unaff_ESI,(int32_t)_Stack_38,pMVar50);
              pMVar5 = (this->fields).networkGame;
              uVar12 = 0;
              if ((pMVar5 != (MVNetworkGame *)0x0) &&
                 (pMVar28 = (pMVar5->fields).playerContainer, pMVar28 != (MVPlayerContainer *)0x0))
              {
                MVPlayerContainer::MVPlayerContainer_Add
                          (pMVar28,(MVPlayer *)unaff_ESI,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
        break;
      }
      if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
        pMVar5 = unaff_ESI;
      }
      pSVar51 = TypeInfo__System__String;
      if (pMVar5 != (MVNetworkGame *)0x0) goto code_?;
      goto code_?;
    }
    if ((String__Class *)(pMVar48->_0).image == TypeInfo__System__String) {
      unaff_EDI = pMVar48;
    }
    pSVar51 = TypeInfo__System__String;
    if (unaff_EDI != (MVAvatar__Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_UnregisterPrototype:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      pMVar16 = (MethodInfo *)photonEvent;
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pWVar14 = (unaff_ESI->fields).worldNetwork;
      uVar12 = 0;
      if (pWVar14 != (WorldNetwork *)0x0) {
        pMVar52 = (MVWorldInventory *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar14,
                             pMVar16);
        uVar12 = 0;
        if (pMVar52 != (MVWorldInventory *)0x0) {
          MVWorldInventory::MVWorldInventory_RemovePrototype
                    (pMVar52,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (((pMVar5 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar5->fields).worldNetwork, puStack_4 = &stack0xffffff64,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (puStack_4 = &stack0xffffff64,
       unaff_EDI = (MVAvatar__Class *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar14,
                              (MethodInfo *)0x0), unaff_ESI = (MVNetworkGame *)photonEvent,
       photonEvent != (EventData *)0x0)) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x2f,(MethodInfo *)0x0);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             ((EventData *)unaff_ESI,0x31,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        pMVar16 = (MethodInfo *)0x0;
        pBVar53 = (Byte__Array *)func_?();
        MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                  ((MVWorldInventory *)unaff_EDI,*piVar13,pBVar53,pMVar16);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    goto code_?;
  case MVEventCodes__Enum_AddLink:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x3a,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      pMStack_32 = (MVPlayer *)*puVar19;
      puVar19 = (undefined4 *)func_?();
      pMStack_54 = (MVAvatar__Class *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      unaff_ESI = (MVNetworkGame *)func_?();
      MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1
                ((Link_1 *)unaff_ESI,(MethodInfo *)0x0);
      uVar12 = 0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
             (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)eventCode;
        (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)pMStack_54;
        (unaff_ESI->fields).ReceivedItemFromQuery =
             (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_32;
        pWVar14 = *(WorldNetwork **)&(unaff_EDI->_1).interfaces_count;
        if (pWVar14 != (WorldNetwork *)0x0) {
          WorldNetwork::WorldNetwork_AddLink_1(pWVar14,(Link_1 *)unaff_ESI,in_stack_55);
          this_00 = (unaff_EDI->_0).parent;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar56 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          uVar12 = 0;
          unaff_EDI = (MVAvatar__Class *)0x0;
          if (this_00 != (Il2CppClass *)0x0) {
            pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                         LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                   ((LogicObjectManagerClient *)this_00,(Link_1 *)unaff_ESI,
                                    (IWorldObjectManager *)pMVar56,(MethodInfo *)0x0);
            pOVar18 = (Object *)func_?(TypeInfo__System__Int32,&pMStack_15);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pXVar49 = (XPLevelLimits *)
                      mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_reset_count_,pOVar18,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) == 0)
               || ((TypeInfo__UnityEngine__Debug->_1).cctor_started != 0)) goto code_?;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      if (cRam_? == '\0') {
        in_stack_55 = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pWVar14 = (unaff_ESI->fields).worldNetwork;
      uVar12 = 0;
      if (pWVar14 != (WorldNetwork *)0x0) {
        unaff_EDI = (MVAvatar__Class *)
                    WorldNetwork::WorldNetwork_RemoveLink
                              (pWVar14,(int32_t)unaff_EDI,in_stack_55);
        if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
        this_01 = (unaff_ESI->fields)._LogicObjectManager_k__BackingField;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar56 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        uVar12 = 0;
        unaff_ESI = (MVNetworkGame *)0x0;
        if (this_01 != (LogicObjectManagerClient *)0x0) {
          eventCode = LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                                (this_01,(Link_1 *)unaff_EDI,(IWorldObjectManager *)pMVar56,
                                 (MethodInfo *)0x0);
          pOVar18 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_reset_count_,pOVar18,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        puVar19 = (undefined4 *)func_?();
        unaff_ESI = (MVNetworkGame *)*puVar19;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar57 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        uVar11 = uStack_10;
        if (pIVar57 != (IEditModeUI *)0x0) {
          this_16 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar57);
          uVar12 = 0;
          if (this_16 != (PlayerInventoryRepository *)0x0) {
            PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
                      (this_16,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            goto code_?;
          }
          break;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xb,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?(pOVar18,TypeInfo__System__Int32);
      eventCode = *pMVar47;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x35,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pFVar58 = (pMVar5->fields)._Friends_k__BackingField, pFVar58 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar58,(int32_t)unaff_EDI,eventCode,*piVar13,FriendStatus__Enum_Pending,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xb,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?(pOVar18,TypeInfo__System__Int32);
      eventCode = *pMVar47;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x36,(MethodInfo *)0x0);
      pFVar59 = (FriendStatus__Enum *)func_?(pOVar18,TypeInfo__MV__Common__FriendStatus);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pFVar58 = (pMVar5->fields)._Friends_k__BackingField, pFVar58 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend
                  (pFVar58,(int32_t)unaff_EDI,eventCode,*pFVar59,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar5,*piVar13,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar5,*piVar13,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xfe,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar5,(int32_t)unaff_EDI,*piVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar5,*piVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
    puStack_4 = &stack0xffffff64;
    if (cRam_? == '\0') {
      puStack_4 = &stack0xffffff64;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pWVar14 = (unaff_ESI->fields).worldNetwork;
    uVar12 = 0;
    if (pWVar14 != (WorldNetwork *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)0x0);
      pEVar8 = photonEvent;
      uVar12 = 0;
      unaff_EDI = (MVAvatar__Class *)0x0;
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI = (MVNetworkGame *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)pMVar5);
        pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x14,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)eventCode;
        uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
        uVar11 = uStack_10;
        if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (pOVar18 == (Object *)0x0))
        goto code_?;
        if ((pOVar18->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          eventCode = func_?();
          uVar11 = uStack_10;
          if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
          if ((unaff_ESI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar13 = (int32_t *)func_?(unaff_ESI);
            MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                      ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar13,*(int32_t *)eventCode
                       ,(MethodInfo *)0x0);
            goto code_?;
          }
          uVar27 = func_?(unaff_ESI,TypeInfo__System__Int32);
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)pEVar8;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x2f,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      pWVar14 = *(WorldNetwork **)&(unaff_EDI->_1).interfaces_count;
      uVar12 = 0;
      if (pWVar14 != (WorldNetwork *)0x0) {
        pMVar52 = (MVWorldInventory *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar14,
                             pMVar16);
        uVar12 = 0;
        if (pMVar52 != (MVWorldInventory *)0x0) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar52,eventCode,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (unaff_EDI = (MVAvatar__Class *)(pMVar5->fields)._NetworkGameStateListener_k__BackingField,
       unaff_ESI = (MVNetworkGame *)pEVar8, pMStack_54 = unaff_EDI, puStack_4 = &stack0xffffff64,
       photonEvent != (EventData *)0x0)) {
      puStack_4 = &stack0xffffff64;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x41,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x42,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar38 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar60 = *piVar13;
        pMVar61 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)pMStack_54,*pMVar61,iVar60,iVar38,0,
                   (MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar38 = *piVar13;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar56 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (iVar38,(IWorldObjectManager *)pMVar56,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar29 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
         pMVar29 != (MVLocalPlayer *)0x0)) {
        unaff_ESI = (MVNetworkGame *)
                    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar29,(MethodInfo *)0x0
                              );
        puVar19 = (undefined4 *)func_?();
        if ((MVNetworkGame *)*puVar19 == unaff_ESI) goto code_?;
        uVar12 = 0;
        pMVar5 = (this->fields).networkGame;
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pWVar14 = (pMVar5->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
          pMVar21 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)0x0);
          pMStack_15 = pMVar21;
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (pEVar8,0x16,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (pEVar8,0x46,(MethodInfo *)0x0);
          unaff_ESI = (MVNetworkGame *)0x0;
          uVar11 = uStack_10;
          if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
            piVar13 = (int32_t *)func_?();
            pMVar16 = (MethodInfo *)0x0;
            pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      (pMStack_15,*piVar13,pDVar17,pMVar16);
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    pMStack_54 = unaff_EDI;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xfe,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        piVar13 = (int32_t *)func_?();
        iVar38 = *piVar13;
        piVar13 = (int32_t *)func_?();
        iVar60 = *piVar13;
        pPVar62 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_54,*pPVar62,iVar60,iVar38,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar63 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x4b,(MethodInfo *)0x0);
      pOVar64 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?(pOVar64,TypeInfo__System__Single);
      eventCode = *pMVar47;
      puVar19 = (undefined4 *)func_?(pOVar63,TypeInfo__System__Single);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)*puVar19;
      func_?(pOVar18,TypeInfo__System__Single);
      pMVar16 = (MethodInfo *)auStack_7;
      func_?();
      pEVar8 = photonEvent;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      auStack_7._0_4_ = TypeInfo__System__Single;
      puVar19 = (undefined4 *)func_?();
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)*puVar19;
      puVar19 = (undefined4 *)func_?();
      MVar9 = eventCode;
      auStack_7._0_8_ = (ulonglong)(uint)auStack_7._4_4_ << 0x20;
      uVar11 = CONCAT44(pMStack_15,*puVar19);
      func_?();
      unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      uStack_35 = auStack_7._0_8_;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)auStack_7._8_4_;
      eventCode = MVar9;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        uStack_10 = uVar11;
        puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
        unaff_ESI = (MVNetworkGame *)*puVar19;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pWVar14 = *(WorldNetwork **)&(unaff_EDI->_1).interfaces_count;
        uVar11 = uStack_10;
        if ((pWVar14 != (WorldNetwork *)0x0) &&
           (pMVar56 = (MVWorldObjectClientManager *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)pWVar14,(MethodInfo *)0x0),
           uVar11 = uStack_10, pMVar56 != (MVWorldObjectClientManager *)0x0)) {
          this_17 = (DayNightCycle *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar56,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          uVar12 = 0;
          if (this_17 != (DayNightCycle *)0x0) {
            this_18 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_17,pMVar16);
            uVar11 = uStack_10;
            if (this_18 == (CelestialParam *)0x0) goto code_?;
            this_19 = (MVPickupOwner *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                ((GameObject *)this_18,
                                 MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                                );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar30 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                               ((Object_1 *)this_19,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar30 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
              goto code_?;
            }
            uVar12 = 0;
            unaff_ESI = (MVNetworkGame *)0x0;
            if (this_19 != (MVPickupOwner *)0x0) {
              lookOrigin.z = (float)pMStack_15;
              lookOrigin.x = (float)(Il2CppType **)uStack_35;
              lookOrigin.y = (float)uStack_35._4_4_;
              lookDirection.z = (float)eventCode;
              lookDirection.x = (float)(undefined4)uStack_10;
              lookDirection.y = (float)uStack_10._4_4_;
              MVPickupOwner::MVPickupOwner_SetLineOfFire
                        (this_19,lookOrigin,lookDirection,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          break;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    puStack_4 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffff64;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    goto code_?;
  case MVEventCodes__Enum_PostGameMsgEvent:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x58,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar65 = (MVGameMsgType__Enum *)func_?();
      pMVar16 = (MethodInfo *)eventCode;
      unaff_ESI = (MVNetworkGame *)func_?();
      gameMsgType = *pMVar65;
code_?:
      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                (gameMsgType,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pMVar16);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    uVar12 = 0;
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = (MVNetworkGame *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x59,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
        func_?();
      }
      piVar13 = (int32_t *)func_?();
      pOVar18 = mscorlib.dll::System::Enum::Enum_ToObject_2
                          ((Type *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
      MVar9 = eventCode;
      unaff_EDI = (MVAvatar__Class *)0x0;
      uVar11 = uStack_10;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar66 = (MVTeam__Enum *)func_?(pOVar18,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar66;
        piVar13 = (int32_t *)func_?(pMStack_15,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)MVar9,*piVar13,team,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x3a,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      pMStack_32 = (MVPlayer *)*puVar19;
      puVar19 = (undefined4 *)func_?();
      pMStack_54 = (MVAvatar__Class *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      unaff_ESI = (MVNetworkGame *)func_?();
      MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                ((ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
      uVar12 = 0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
             (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)eventCode;
        (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)pMStack_54;
        (unaff_ESI->fields).ReceivedItemFromQuery =
             (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_32;
        pWVar14 = *(WorldNetwork **)&(unaff_EDI->_1).interfaces_count;
        if (pWVar14 != (WorldNetwork *)0x0) {
          WorldNetwork::WorldNetwork_AddObjectLink_1
                    (pWVar14,(ObjectLink *)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Remove_objectLink_,(MethodInfo *)0x0);
      pWVar14 = (unaff_ESI->fields).worldNetwork;
      uVar12 = 0;
      if (pWVar14 != (WorldNetwork *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink(pWVar14,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if ((MVNetworkGame *)eventCode == (MVNetworkGame *)0x0) goto code_?;
    puStack_4 = &stack0xffffff64;
    if (cRam_? == '\0') {
      puStack_4 = &stack0xffffff64;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_ESI = (MVNetworkGame *)photonEvent;
    uVar12 = 0;
    if (photonEvent == (EventData *)0x0) break;
    method_00 = (Int32__Array__Class *)photonEvent;
    pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
    uVar11 = uStack_10;
    if (pOVar18 == (Object *)0x0) goto code_?;
    if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    pfVar67 = (float *)func_?();
    pMStack_15 = (MVWorldObjectClientManagerNetwork *)*pfVar67;
    unaff_EDI = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)unaff_ESI,0x48,(MethodInfo *)0x0);
    pMStack_54 = (MVAvatar__Class *)TypeInfo__System__Int32;
    if (unaff_EDI == (MVAvatar__Class *)0x0) {
      unaff_ESI = (MVNetworkGame *)0x0;
    }
    else {
      method_00 = TypeInfo__System__Int32;
      unaff_ESI = (MVNetworkGame *)func_?(unaff_EDI);
      if (unaff_ESI == (MVNetworkGame *)0x0) {
code_?:
        func_?(unaff_EDI,pMStack_54);
        uVar11 = uStack_10;
        goto code_?;
      }
    }
    uVar12 = 0;
    if (*(Collection_1_VoxelHit_ **)(eventCode + 0xb0) != (Collection_1_VoxelHit_ *)0x0) {
      pMVar21 = (MVWorldObjectClientManagerNetwork *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          (*(Collection_1_VoxelHit_ **)(eventCode + 0xb0),(MethodInfo *)method_00);
      uVar12 = 0;
      if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (pMVar21,(int32_t)pMStack_15,(Int32__Array *)unaff_ESI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
    puStack_4 = &stack0xffffff64;
    if (cRam_? == '\0') {
      puStack_4 = &stack0xffffff64;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    uVar12 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,99,(MethodInfo *)0x0);
      uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
      uVar11 = uStack_10;
      if (pOVar18 == (Object *)0x0) goto code_?;
      if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar13 = (int32_t *)func_?();
      this_02 = (unaff_ESI->fields).gameDataQueryManager;
      uVar12 = 0;
      if (this_02 != (MVNetworkGame_GameDataQueryManager *)0x0) {
        MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                  (this_02,*piVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
    puStack_4 = &stack0xffffff64;
    if (cRam_? == '\0') {
      puStack_4 = &stack0xffffff64;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_03 = (UIStack *)(unaff_ESI->fields)._WinningConditionManager_k__BackingField;
    unaff_EDI = (MVAvatar__Class *)0x0;
    uVar12 = 0;
    if (this_03 != (UIStack *)0x0) {
      bVar30 = UIStack::UIStack_get_StackReady(this_03,(MethodInfo *)0x0);
      if (bVar30 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
      }
      else {
        this_04 = (unaff_ESI->fields)._WinningConditionManager_k__BackingField;
        uVar12 = 0;
        if (this_04 == (WinningConditionManager *)0x0) break;
        this_20 = MVWorldObject.dll::WinningConditionManager::
                  WinningConditionManager_GetForfilledWinningConditions
                            (this_04,(MethodInfo *)pMVar5);
        unaff_EDI = (MVAvatar__Class *)0x0;
        uVar11 = uStack_10;
        if (this_20 == (List_1_IWinningCondition_ *)0x0) goto code_?;
        pOVar18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_20,
                             MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                            );
        if (pOVar18 == (Object *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
          goto code_?;
        }
        pOVar18 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_20,
                             MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                            );
        if (1 < (int)pOVar18) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
          goto code_?;
        }
        unaff_EDI = (MVAvatar__Class *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_20,0,
                               MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                              );
      }
      this_05 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (unaff_ESI->fields).OnWinningConditionFulfilled;
      if (this_05 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_05,(Dictionary_2_System_String_System_Object_ *)unaff_EDI,
                   MethodInfo__System__Action<IWinningCondition>__Invoke_IWinningCondition_);
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)pEVar8;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x28,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      pWVar14 = *(WorldNetwork **)&(unaff_EDI->_1).interfaces_count;
      uVar12 = 0;
      if (pWVar14 != (WorldNetwork *)0x0) {
        pMVar21 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar14,pMVar16);
        uVar12 = 0;
        if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar21,eventCode,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?(pOVar18,TypeInfo__System__Int32);
      eventCode = *pMVar47;
      pOVar18 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar63 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x81,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar63,TypeInfo__MV__Common__AchievementType);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)*puVar19;
      pOVar63 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&pMStack_15);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar26 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar18,pOVar63,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar68 = (Dictionary_2_System_Type_Pool_ *)
                func_?(pOVar18,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pTVar24 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      unaff_EDI = (MVAvatar__Class *)0x0;
      uVar11 = uStack_10;
      if (pDVar68 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar68,pTVar24,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        puVar19 = (undefined4 *)func_?(pPVar25,TypeInfo__System__Int32);
        pMStack_32 = (MVPlayer *)*puVar19;
        bStack_40 = 0;
        pTVar24 = (Type *)func_?(TypeInfo__System__Byte,&bStack_40);
        pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar68,pTVar24,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        puVar19 = (undefined4 *)func_?(pPVar25,TypeInfo__System__Int32);
        pMStack_54 = (MVAvatar__Class *)*puVar19;
        uVar12 = 0;
        pMVar5 = (this->fields).networkGame;
        unaff_EDI = (MVAvatar__Class *)0x0;
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        pMVar69 = (pMVar5->fields)._PlayerController_k__BackingField;
        pMStack_15 = (MVWorldObjectClientManagerNetwork *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (pEVar8,0xfe,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar8,0x8d,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)0x0;
        uVar11 = uStack_10;
        if (pMVar69 != (MVLocalObjectController *)0x0) {
          pbVar70 = (byte *)func_?();
          bStack_39 = *pbVar70;
          piVar13 = (int32_t *)func_?();
          MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                    (pMVar69,*piVar13,(int32_t)pMStack_32,(int32_t)pMStack_54,(uint)bStack_39,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    puStack_4 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffff64;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    pMVar16 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    uVar12 = 0;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)pMVar5);
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar5,pMVar16);
        uVar12 = 0;
        if (pMVar56 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI = (MVNetworkGame *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar56,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          unaff_EDI = TypeInfo__MVAvatar;
          if ((unaff_ESI == (MVNetworkGame *)0x0) || (iVar71 = func_?(), iVar71 == 0))
          goto code_?;
          iVar71 = func_?();
          uVar11 = uStack_10;
          if (iVar71 != 0) {
            uVar12 = func_?(unaff_ESI,TypeInfo__MVAvatar);
            func_?(0x56,uVar12);
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)
                  func_?(pOVar18,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pTVar24 = (Type *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      uVar11 = uStack_10;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)unaff_ESI,pTVar24,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pfVar67 = (float *)func_?(pPVar25,TypeInfo__System__Int32);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)*pfVar67;
      pMVar16 = (MethodInfo *)&bStack_39;
      bStack_39 = 0;
      pTVar24 = (Type *)func_?(TypeInfo__System__Byte);
      pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)unaff_ESI,pTVar24,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      piVar13 = (int32_t *)func_?(pPVar25,TypeInfo__System__Int32);
      auStack_7._12_4_ = *piVar13;
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar5,pMVar16);
        uVar12 = 0;
        if (pMVar56 != (MVWorldObjectClientManager *)0x0) {
          pMVar72 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar56,(int32_t)pMStack_15,(MethodInfo *)0x0);
          this_21 = (MVSentryGun *)func_?(pMVar72,TypeInfo__MVWorldObjectSpawnerVehicle);
          uStack_10 = CONCAT44(this_21,(undefined4)uStack_10);
          uVar12 = 0;
          if (this_21 != (MVSentryGun *)0x0) {
            pMStack_32 = (MVPlayer *)
                         MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                                   (this_21,(MethodInfo *)0x0);
            bStack_40 = 3;
            pTVar24 = (Type *)func_?(TypeInfo__System__Byte,&bStack_40);
            pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)unaff_ESI,pTVar24,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            method_01 = TypeInfo__System__Int32;
            piVar13 = (int32_t *)func_?(pPVar25);
            pDStack_34 = (Dictionary_2_System_Object_System_Object_ *)*piVar13;
            pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (pEVar8,0xfe,(MethodInfo *)0x0);
            p_Var60 = (_union_155 *)func_?(pOVar18,TypeInfo__System__Int32);
            _Stack_38 = *p_Var60;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (pEVar8,0x3a,(MethodInfo *)0x0);
            puVar19 = (undefined4 *)func_?();
            pMStack_54 = (MVAvatar__Class *)*puVar19;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (pEVar8,0x5c,(MethodInfo *)0x0);
            pfVar67 = (float *)func_?();
            pMStack_15 = (MVWorldObjectClientManagerNetwork *)*pfVar67;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (pEVar8,0x23,(MethodInfo *)0x0);
            puVar19 = (undefined4 *)func_?();
            uStack_35 = CONCAT44(*puVar19,(Il2CppType **)uStack_35);
            pMVar5 = (this->fields).networkGame;
            uVar12 = 0;
            unaff_ESI = (MVNetworkGame *)this;
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (pWVar14 = (pMVar5->fields).worldNetwork, unaff_ESI = (MVNetworkGame *)this,
               pWVar14 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar14,(int32_t)_Stack_38,0,1,(int32_t)pMStack_32,(int32_t)pDStack_34,
                         (int32_t)pMStack_54,(int32_t)pMStack_15,in_stack_73);
              pMVar5 = (this->fields).networkGame;
              uVar12 = 0;
              unaff_ESI = (MVNetworkGame *)this;
              if (pMVar5 != (MVNetworkGame *)0x0) {
                pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                    (pMVar5,(MethodInfo *)method_01);
                uVar12 = 0;
                unaff_ESI = (MVNetworkGame *)this;
                if (pMVar56 != (MVWorldObjectClientManager *)0x0) {
                  _Stack_38.genericMethod =
                       (Il2CppGenericMethod *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar56,(int32_t)pDStack_34,(MethodInfo *)0x0);
                  if (TypeInfo__MVNetworkGame__EventHandling->static_fields->__f__am_cache0 ==
                      (MVWorldObjectClient_CallBackDelegate *)0x0) {
                    this_22 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_22,(Object *)0x0,
                               MethodInfo__MVNetworkGame__EventHandling___HandleEvent_m__0_MVWorldObjectClient_
                               ,(MethodInfo *)0x0);
                    TypeInfo__MVNetworkGame__EventHandling->static_fields->__f__am_cache0 =
                         (MVWorldObjectClient_CallBackDelegate *)this_22;
                  }
                  unaff_ESI = (MVNetworkGame *)this;
                  uVar11 = uStack_10;
                  if ((MVWorldObject *)_Stack_38.genericMethod != (MVWorldObject *)0x0) {
                    func_?(0x2a,_Stack_38.genericMethod,
                                    TypeInfo__MVNetworkGame__EventHandling->static_fields->
                                    __f__am_cache0);
                    pMVar5 = (this->fields).networkGame;
                    uVar12 = 0;
                    unaff_ESI = (MVNetworkGame *)this;
                    if (pMVar5 == (MVNetworkGame *)0x0) break;
                    pMVar69 = (pMVar5->fields)._PlayerController_k__BackingField;
                    _Stack_38.genericMethod =
                         (Il2CppGenericMethod *)
                         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(pEVar8,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar8,0x8d,(MethodInfo *)0x0);
                    unaff_ESI = (MVNetworkGame *)0x0;
                    uVar11 = uStack_10;
                    if (pMVar69 != (MVLocalObjectController *)0x0) {
                      pbVar70 = (byte *)func_?();
                      uStack_37 = *pbVar70;
                      piVar13 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar69,*piVar13,(int32_t)pDStack_34,auStack_7._12_4_,
                                 (uint)(byte)uStack_37,(MethodInfo *)0x0);
                      func_?(0x51);
                      goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_Reward:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      uVar12 = *puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x91,(MethodInfo *)0x0);
      puVar6 = (undefined1 *)func_?(pOVar18,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar6,(undefined3)eventCode);
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x90,(MethodInfo *)0x0);
      p_Var39 = (_union_154 *)func_?(pOVar18,TypeInfo__MV__Common__RewardType);
      _Var7 = (_union_154)p_Var39->rgctx_data;
      uStack_10 = CONCAT44(uVar12,(undefined4)uStack_10);
      pOVar18 = (Object *)func_?(TypeInfo__System__Int32,(int)&uStack_10 + 4);
      uStack_37 = eventCode._3_1_;
      eventCode = func_?();
      uStack_35._4_4_ = (_union_154)(_union_154)_Var7.rgctx_data;
      pOVar63 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar26 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,pOVar18,
                           (Object *)eventCode,pOVar63,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar26,(MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar18,TypeInfo__System__Byte);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pWVar14 = (pMVar5->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
        this_23 = (RuntimeEventManagerNetwork *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pWVar14,(MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)func_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)unaff_ESI,(Byte__Array *)eventCode,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        uVar12 = 0;
        unaff_EDI = (MVAvatar__Class *)0x0;
        if (this_23 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_23,runtimeEvent,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (((pMVar5 != (MVNetworkGame *)0x0) &&
        (pWVar14 = (pMVar5->fields).worldNetwork, puStack_4 = &stack0xffffff64,
        pWVar14 != (WorldNetwork *)0x0)) &&
       (puStack_4 = &stack0xffffff64,
       this_24 = (RuntimeEventManager *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pWVar14,(MethodInfo *)0x0), this_24 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_24,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x59,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      pMStack_54 = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0x9f,(MethodInfo *)0x0);
      puVar6 = (undefined1 *)func_?(pOVar18,TypeInfo__System__Byte);
      pMStack_15 = (MVWorldObjectClientManagerNetwork *)CONCAT31(pMStack_15._1_3_,*puVar6);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xa0,(MethodInfo *)0x0);
      piVar13 = (int32_t *)func_?();
      pDStack_34 = (Dictionary_2_System_Object_System_Object_ *)*piVar13;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xa1,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?();
      pMStack_32 = (MVPlayer *)*puVar19;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xa2,(MethodInfo *)0x0);
      puVar6 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar6);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xa3,(MethodInfo *)0x0);
      pcVar74 = (char *)func_?();
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (*pcVar74 == '\0') {
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pGVar44 = (pMVar5->fields).gameStatCounterManager,
           pGVar44 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar44,(GameStatCounterType__Enum)pMStack_15,(int32_t)unaff_EDI,
                     (MVTeam__Enum)pMStack_54,(int32_t)pDStack_34,(int32_t)pMStack_32,
                     (bool)eventCode,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else if ((pMVar5 != (MVNetworkGame *)0x0) &&
              (pGVar44 = (pMVar5->fields).gameStatCounterManager,
              pGVar44 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar44,(GameStatCounterType__Enum)pMStack_15,(MVTeam__Enum)pMStack_54,
                   (int32_t)unaff_EDI,(int32_t)pDStack_34,(int32_t)pMStack_32,(bool)eventCode,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar53 = (Byte__Array *)func_?(pOVar18,TypeInfo__System__Byte);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pGVar44 = (pMVar5->fields).gameStatCounterManager,
         pGVar44 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar44,pBVar53,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar47 = (MVEventCodes__Enum *)func_?(pOVar18,TypeInfo__System__Int32);
      eventCode = *pMVar47;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xa5,(MethodInfo *)0x0);
      pBVar53 = (Byte__Array *)func_?(pOVar18,TypeInfo__System__Byte);
      unaff_EDI = (MVAvatar__Class *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar53,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)func_?(TypeInfo__MV__WorldObject__MvAvatarMetaData);
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (this_06 = (pMVar5->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_06 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_06,eventCode,(MvAvatarMetaData *)unaff_ESI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)&UNK_?;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0xa9,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
      pMVar28 = (MVPlayerContainer *)(unaff_EDI->vtable).set_Position.methodPtr;
      uVar12 = 0;
      if (pMVar28 != (MVPlayerContainer *)0x0) {
        pMVar75 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar28,eventCode,pMVar16);
        uVar12 = 0;
        if (pMVar75 != (MVPlayer *)0x0) {
          MVPlayer::MVPlayer_set_Level(pMVar75,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar76 = (bool *)func_?(pOVar18,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar76);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar77 = (pMVar5->fields)._GameCoinManager_k__BackingField,
         pMVar77 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar77,*pbVar76,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      unaff_EDI = (MVAvatar__Class *)*puVar19;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,200,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)
                  func_?(pOVar18,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      uVar11 = uStack_10;
      if ((this->fields).networkGame == (MVNetworkGame *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
          (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      uVar12 = 0;
      this_07 = (Action_2_Int32_Object_ *)
                TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
      if (this_07 != (Action_2_Int32_Object_ *)0x0) {
        System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                  (this_07,(int32_t)unaff_EDI,(Object *)unaff_ESI,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x5d,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,1,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,1,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetItemCategories(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)this;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar5,photonEvent,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      unaff_ESI = (MVNetworkGame *)this;
      unaff_EDI = (MVAvatar__Class *)pEVar8;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar5,pEVar8,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
      pMVar16 = (MethodInfo *)0x0;
      pBVar53 = (Byte__Array *)func_?();
      unaff_ESI = (MVNetworkGame *)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar53,pMVar16);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,0x85,(MethodInfo *)0x0);
      puVar6 = (undefined1 *)func_?();
      uStack_10._0_5_ = CONCAT14(*puVar6,(undefined4)uStack_10);
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,100,(MethodInfo *)0x0);
      pbVar76 = (bool *)func_?(pOVar18);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar76);
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                  (pMVar5,(BytePacker *)unaff_ESI,(QueryType__Enum)uStack_10._4_4_,*pbVar76,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetActorReady:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        pMVar5 = (MVNetworkGame *)&UNK_?;
        method_02 = TypeInfo__MVGameControllerBase;
        func_?();
      }
      pMVar78 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar12 = 0;
      if (pMVar78 != (MVNetworkGame *)0x0) {
        pMVar29 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar78,(MethodInfo *)0x0);
        uVar12 = 0;
        if (pMVar29 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (MVNetworkGame *)
                      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar29,
                                 (MethodInfo *)pMVar5);
          puVar19 = (undefined4 *)func_?();
          if ((MVNetworkGame *)*puVar19 == unaff_ESI) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            MVGameControllerBase::MVGameControllerBase_set_JoinState
                      (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
            MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
            pMVar5 = (this->fields).networkGame;
            uVar12 = 0;
            unaff_ESI = (MVNetworkGame *)this;
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (pMVar77 = (pMVar5->fields)._GameCoinManager_k__BackingField,
               unaff_ESI = (MVNetworkGame *)this, pMVar77 != (MVGameCoinManager *)0x0)) {
              MVGameCoinManager::MVGameCoinManager_Reset(pMVar77,pMVar5,(MethodInfo *)method_02);
              pMVar5 = (this->fields).networkGame;
              unaff_ESI = (MVNetworkGame *)this;
              uVar11 = uStack_10;
              if (pMVar5 != (MVNetworkGame *)0x0) {
                pMVar79 = (pMVar5->fields).operationRequests;
                unaff_ESI = (MVNetworkGame *)0x0;
                if (pMVar79 != (MVNetworkGame_OperationRequests *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  eventCode = func_?(
                                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                             );
                  System.Core.dll::System::Collections::Generic::
                  HashSet`1[AvatarModifierPackage+AvatarModifier]::
                  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)eventCode,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                            );
                  unaff_ESI = (MVNetworkGame *)(pMVar79->fields).peer;
                  if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
                    func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                  }
                  pSVar80 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                  uVar11 = uStack_10;
                  if (unaff_ESI != (MVNetworkGame *)0x0) {
                    uVar81._0_1_ = (pSVar80->SendReliable).Encrypt;
                    uVar81._1_1_ = (pSVar80->SendReliable).Channel;
                    uVar81._2_2_ = *(undefined2 *)&(pSVar80->SendReliable).field_0x6;
                    (**(code **)&unaff_ESI->klass[1]._0.byval_arg.attrs)
                              (unaff_ESI,0x66,eventCode,(pSVar80->SendReliable).DeliveryMode,uVar81,
                               unaff_ESI->klass[1]._0.this_arg.data.dummy);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
          else {
code_?:
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            uVar12 = 0;
            if (pMVar5 != (MVNetworkGame *)0x0) {
              pMVar28 = (pMVar5->fields).playerContainer;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (pEVar8,0xfe,(MethodInfo *)0x0);
              unaff_ESI = (MVNetworkGame *)0x0;
              uVar11 = uStack_10;
              if (pMVar28 != (MVPlayerContainer *)0x0) {
                piVar13 = (int32_t *)func_?();
                MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                          (pMVar28,*piVar13,(MethodInfo *)0x0);
                goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x33,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)(this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (pEVar8,7,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI != (MVAvatar__Class *)0x0) {
        pcVar74 = (char *)func_?();
        bVar30 = *pcVar74 == '\0';
        pMVar16 = (MethodInfo *)0x0;
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                  ((MVNetworkGame *)unaff_EDI,pDVar17,bVar30,pMVar16);
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x83,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData(unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  (unaff_ESI,pDVar17,pMVar16);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xa4,(MethodInfo *)0x0);
      pBVar53 = (Byte__Array *)func_?(pOVar18,TypeInfo__System__Byte);
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_EDI = (MVAvatar__Class *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI,pBVar53,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)func_?(TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap)
      ;
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_ESI,(BytePacker *)unaff_EDI,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        *(MVNetworkGame **)(eventCode + 0x9c) = unaff_ESI;
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetActiveAvatar:
    uVar12 = 0;
    unaff_ESI = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        pUVar82 = (UIPushOption__Enum *)func_?();
        obj = *pUVar82;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_08 = (Action_1_UIPushOption_ *)(unaff_ESI->fields).OnActiveAvatar;
        if (this_08 != (Action_1_UIPushOption_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_08,obj,MethodInfo__System__Action<int>__Invoke_int_);
        }
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    puStack_4 = &stack0xffffff64;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffff64, (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffff64;
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar79 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    unaff_ESI = (MVNetworkGame *)0x0;
    unaff_EDI = unaff_EDI;
    uVar11 = uStack_10;
    if (pMVar79 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar83 = (pMVar79->fields).peer;
      unaff_EDI = (MVAvatar__Class *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)unaff_EDI,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar80 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      unaff_ESI = (MVNetworkGame *)0x0;
      uVar11 = uStack_10;
      if (pPVar83 != (PhotonPeer *)0x0) {
        uVar12._0_1_ = (pSVar80->SendReliable).Encrypt;
        uVar12._1_1_ = (pSVar80->SendReliable).Channel;
        uVar12._2_2_ = *(undefined2 *)&(pSVar80->SendReliable).field_0x6;
        (*(code *)(pPVar83->klass->vtable).SendOperation.method)
                  (pPVar83,0x3c,unaff_EDI,(pSVar80->SendReliable).DeliveryMode,uVar12,
                   pPVar83->klass[1]._0.image);
        goto code_?;
      }
    }
    goto code_?;
  case MVEventCodes__Enum_JoinNotification:
    puStack_4 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffff64;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI = (MVNetworkGame *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI = (MVAvatar__Class *)
                func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
    uVar12 = 0;
    if (photonEvent != (EventData *)0x0) {
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar19 = (undefined4 *)func_?(pOVar18,TypeInfo__System__Int32);
      uStack_10 = CONCAT44(*puVar19,(undefined4)uStack_10);
      value_00 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,(int)&uStack_10 + 4);
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)unaff_ESI,(String *)unaff_EDI,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar16 = (MethodInfo *)0x0;
        gameMsgType = MVGameMsgType__Enum_UserJoined;
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar5 = (this->fields).networkGame;
    unaff_EDI = unaff_EDI;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar84 = (pMVar5->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (MVNetworkGame *)0x0;
      unaff_EDI = unaff_EDI;
      puStack_4 = &stack0xffffff64;
      if ((pMVar84 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (unaff_ESI = (MVNetworkGame *)(pMVar84->fields).logicEventQueue, unaff_EDI = unaff_EDI,
         puStack_4 = &stack0xffffff64, unaff_ESI != (MVNetworkGame *)0x0)) {
        puStack_4 = &stack0xffffff64;
        if (cRam_? == '\0') {
          puStack_4 = &stack0xffffff64;
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        unaff_EDI = (MVAvatar__Class *)photonEvent;
        uVar12 = 0;
        if (photonEvent == (EventData *)0x0) break;
        pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x23,(MethodInfo *)0x0);
        uVar27 = CONCAT44(TypeInfo__System__Int32,pOVar18);
        uVar11 = uStack_10;
        if (pOVar18 != (Object *)0x0) {
          if ((pOVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar47 = (MVEventCodes__Enum *)func_?();
          this_10 = (Dictionary_2_System_Int32_System_Object_ *)
                    (unaff_ESI->fields).ReceivedItemFromQuery;
          eventCode = *pMVar47;
          uVar11 = uStack_10;
          if (this_10 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
            bVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                               (this_10,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            if (bVar30 == 0) {
              uStack_10 = CONCAT44((unaff_ESI->fields).ReceivedItemFromQuery,(undefined4)uStack_10);
              pQVar85 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                        func_?(
                                       TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                       );
              uStack_35 = CONCAT44(pQVar85,(Il2CppType **)uStack_35);
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package___ctor
                        (pQVar85,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              uVar11 = uStack_10;
              if (uStack_10._4_4_ == (XPLevelLimits__Class *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)uStack_10._4_4_,eventCode,
                         (Object *)uStack_35._4_4_,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
            }
            this_11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(unaff_ESI->fields).ReceivedItemFromQuery;
            uVar11 = uStack_10;
            if ((this_11 !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
               (pQVar85 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (this_11,eventCode,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), uVar11 = uStack_10,
               pQVar85 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0)) {
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Enqueue
                        (pQVar85,(SmoothPhysicsMovement_Package *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        );
              goto code_?;
            }
          }
        }
      }
    }
code_?:
    uStack_10 = uVar11;
    uVar12 = 0;
    break;
  case MVEventCodes__Enum_LogicFrame:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)0x0;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar84 = (pMVar5->fields).logicObjectManagerClientWrapper;
      unaff_ESI = (MVNetworkGame *)0x0;
      puStack_4 = &stack0xffffff64;
      if (pMVar84 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        puStack_4 = &stack0xffffff64;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar84,(MethodInfo *)0x0);
        this_09 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)(pMVar84->fields).updateEvaluatorStep;
        unaff_ESI = (MVNetworkGame *)0x0;
        if (this_09 !=
            (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)0x0) {
          pOVar18 = System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                    ::Single,System::Object]::
                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                              (this_09,(MethodInfo *)0x0);
          MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                    ((MVNetworkGame_UpdateEvaluator *)this_09,(int32_t)(pOVar18 + 0x7d),
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    puStack_4 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffff64;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar78 = (this->fields).networkGame;
    uVar12 = 0;
    if ((pMVar78 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (MVNetworkGame *)(pMVar78->fields).logicObjectManagerClientWrapper,
       photonEvent != (EventData *)0x0)) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x23,(MethodInfo *)pMVar5);
      unaff_EDI = unaff_EDI;
      uVar11 = uStack_10;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      piVar13 = (int32_t *)func_?();
      this_12 = (MVNetworkGame_UpdateEvaluator *)(unaff_ESI->fields).connState;
      uVar12 = 0;
      if (this_12 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                  (this_12,*piVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)0x0;
    puStack_4 = &stack0xffffff64;
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (unaff_ESI = (MVNetworkGame *)(pMVar5->fields).logicObjectManagerClientWrapper,
       puStack_4 = &stack0xffffff64, photonEvent != (EventData *)0x0)) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x23,(MethodInfo *)0x0);
      unaff_EDI = unaff_EDI;
      uVar11 = uStack_10;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        puVar19 = (undefined4 *)func_?();
        unaff_EDI = (MVAvatar__Class *)*puVar19;
        pEVar45 = (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery;
        while (uVar11 = uStack_10, pEVar45 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0
              ) {
          this_13 = (pEVar45->fields)._.prev;
          uVar12 = 0;
          if (this_13 == (MulticastDelegate *)0x0) goto code_?;
          pIVar41 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                              ((KogamaSettingNumericBase_1_System_Single_ *)this_13,
                               (MethodInfo *)0x0);
          if ((int)unaff_EDI <= (int)pIVar41) goto code_?;
          MVNetworkGame+LogicObjectManagerClientWrapper::
          MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                    ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,(MethodInfo *)0x0);
          pEVar45 = (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)&UNK_?;
      unaff_ESI = (MVNetworkGame *)func_?(pOVar18,TypeInfo__System__Int32);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      unaff_EDI = (MVAvatar__Class *)this;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar5,pMVar16);
        uVar12 = 0;
        unaff_EDI = (MVAvatar__Class *)this;
        if (unaff_ESI != (MVNetworkGame *)0x0) {
          iVar38 = func_?(0);
          uVar12 = 0;
          unaff_EDI = (MVAvatar__Class *)this;
          if (eventCode != MVEventCodes__Enum_NoCodeSet) {
            eventCode = (MVEventCodes__Enum)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  ((MVWorldObjectClientManager *)eventCode,iVar38,
                                   (MethodInfo *)pMVar5);
            pMVar5 = (this->fields).networkGame;
            uVar12 = 0;
            unaff_EDI = (MVAvatar__Class *)this;
            if (pMVar5 != (MVNetworkGame *)0x0) {
              pMVar56 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                  (pMVar5,(MethodInfo *)0x0);
              iVar38 = func_?();
              uVar12 = 0;
              unaff_EDI = (MVAvatar__Class *)0x0;
              if (pMVar56 != (MVWorldObjectClientManager *)0x0) {
                unaff_EDI = (MVAvatar__Class *)
                            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                      (pMVar56,iVar38,in_stack_43);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,
                           (MethodInfo *)0x0);
                if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
                uVar12 = 0;
                if (unaff_EDI != (MVAvatar__Class *)0x0) {
                  unaff_ESI = (MVNetworkGame *)
                              mscorlib.dll::System::Collections::ObjectModel::
                              Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *
                                         )unaff_EDI,(MethodInfo *)0x0);
                  pMVar5 = (MVNetworkGame *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)eventCode,(MethodInfo *)0x0);
                  if (unaff_ESI != pMVar5) goto code_?;
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)StringLiteral_attachedObject_GroupId____vehicl,
                             (MethodInfo *)0x0);
                  iVar71 = func_?();
                  uVar12 = 0;
                  if (iVar71 != 0) {
                    bVar30 = 0x19;
                    pMVar48 = unaff_EDI;
                    this_25 = (MVAvatarLocal *)
                              func_?(unaff_EDI,TypeInfo__MVAvatarLocal,1,0);
                    MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_25,bVar30,(MethodInfo *)pMVar48);
                    pMVar5 = (this->fields).networkGame;
                    uVar12 = 0;
                    if ((pMVar5 != (MVNetworkGame *)0x0) &&
                       (pMVar69 = (pMVar5->fields)._PlayerController_k__BackingField,
                       pMVar69 != (MVLocalObjectController *)0x0)) {
                      MVLocalObjectController::
                      MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                                (pMVar69,1,(MethodInfo *)0x0);
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
  case MVEventCodes__Enum_XPReward:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (puStack_4 = &stack0xffffff64,
       unaff_EDI = (MVAvatar__Class *)
                   MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
       unaff_ESI = (MVNetworkGame *)photonEvent, photonEvent != (EventData *)0x0)) {
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xdc,(MethodInfo *)0x0);
      uStack_35 = CONCAT44(pOVar18,(Il2CppType **)uStack_35);
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)unaff_ESI,0xdb,(MethodInfo *)0x0);
      uStack_10 = CONCAT44(pOVar18,(undefined4)uStack_10);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)unaff_ESI,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)unaff_ESI,0xd1,(MethodInfo *)0x0);
      uVar11 = uStack_10;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
      puVar19 = (undefined4 *)func_?();
      unaff_ESI = (MVNetworkGame *)*puVar19;
      pMVar47 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar47;
      puVar6 = (undefined1 *)func_?();
      uStack_10._0_5_ = CONCAT14(*puVar6,(undefined4)uStack_10);
      puVar19 = (undefined4 *)func_?();
      uStack_35 = CONCAT44(*puVar19,(Il2CppType **)uStack_35);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__LevelingManager);
      }
      bVar30 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
      if (bVar30 == 0) goto code_?;
      uVar12 = 0;
      if ((String *)unaff_EDI->static_fields != (String *)0x0) {
        XPProgress::XPProgress_Update
                  ((XPProgress *)unaff_EDI->static_fields,(int32_t)uStack_35._4_4_,
                   (XPRewardType__Enum)uStack_10._4_4_,eventCode,(int32_t)unaff_ESI,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      pbVar76 = (bool *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_set_GetProfileMetaDataOk
                (*pbVar76,(MethodInfo *)0x0);
      bVar30 = FirstTimeEventManager::FirstTimeEventManager_get_GetProfileMetaDataOk
                         ((MethodInfo *)0x0);
      if (bVar30 == 0) goto code_?;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (pEVar8,0xcf,(MethodInfo *)0x0);
      uStack_10 = CONCAT44(pOVar18,(undefined4)uStack_10);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      pMVar50 = (MethodInfo *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          ((String *)pMVar50,pMVar16);
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      unaff_ESI = (MVNetworkGame *)0x0;
      uVar11 = uStack_10;
      if (pXVar49 != (XPLevelLimits *)0x0) {
        pFVar86 = (FirstTimeState *)(pXVar49->fields)._NextXP_k__BackingField;
        uStack_10._4_4_ = (XPLevelLimits__Class *)pFVar86;
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__FirstTimeEventManager);
        }
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)uStack_10._4_4_,(MethodInfo *)0x0);
        uStack_10._4_4_ =
             (XPLevelLimits__Class *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (pEVar8,0xf5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar26 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar26,pMVar50);
        value_01 = pXVar49[1].klass;
        uStack_10 = CONCAT44(value_01,(undefined4)uStack_10);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
          value_01 = uStack_10._4_4_;
        }
        MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier
                  ((float)value_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_26 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0xc4,(MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)0x0;
        uVar11 = uStack_10;
        if (this_26 != (GoldRewardManager *)0x0) {
          pbVar76 = (bool *)func_?(pOVar18,TypeInfo__System__Boolean);
          GoldRewardManager::GoldRewardManager_Initialize(this_26,*pbVar76,(MethodInfo *)0x0);
          pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (pEVar8,0xc4,(MethodInfo *)0x0);
          puVar6 = (undefined1 *)func_?(pOVar18,TypeInfo__System__Boolean);
          eventCode = CONCAT13(*puVar6,(undefined3)eventCode);
          pOVar18 = (Object *)
                    func_?(TypeInfo__System__Boolean,(byte *)((int)&eventCode + 3));
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar26 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral__bool_photonEvent__byte_MVParame,pOVar18,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar26,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_ServerError:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = (MethodInfo *)0x0;
      pSVar26 = (String *)func_?();
      pSVar26 = mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral_Server_error__,pSVar26,pMVar16);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar26,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pDVar68 = (Dictionary_2_System_Type_Pool_ *)
                func_?(pOVar18,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      uVar11 = uStack_10;
      if (pDVar68 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar68,(Type *)StringLiteral_V,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        puVar6 = (undefined1 *)func_?(pPVar25,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar6);
        pMVar5 = (this->fields).networkGame;
        pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (pEVar8,0xfe,(MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)0x0;
        uVar11 = uStack_10;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          piVar13 = (int32_t *)func_?(pOVar18,TypeInfo__System__Int32);
          iVar38 = *piVar13;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          this_14 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (this_14 != (Action_2_Int32_Boolean_ *)0x0) {
            System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
                      (this_14,iVar38,(bool)eventCode,
                       MethodInfo__System__Action<int,_bool>__Invoke_int__bool_);
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pOVar18 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar26 = (String *)func_?(pOVar18,TypeInfo__System__String);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar30 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
      if (bVar30 != 0) goto code_?;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar26,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      unaff_ESI = (MVNetworkGame *)0x0;
      unaff_EDI = unaff_EDI;
      uVar11 = uStack_10;
      if (pXVar49 != (XPLevelLimits *)0x0) {
        value = (PlayerPlanetData *)(pXVar49->fields)._PrevXP_k__BackingField;
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        GamePassesManager::GamePassesManager_set_PlayerPlanetData(value,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)(pXVar49->fields)._NextXP_k__BackingField;
        goto code_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      unaff_EDI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar28 = (pMVar5->fields).playerContainer, pMVar28 != (MVPlayerContainer *)0x0)) {
        unaff_EDI = (MVAvatar__Class *)
                    MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar28,(MethodInfo *)0x0);
        uStack_10 = CONCAT44(unaff_EDI,(undefined4)uStack_10);
        uVar11 = uStack_10;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (unaff_EDI->_0).properties = (PropertyInfo *)unaff_ESI;
          uVar11 = uStack_10;
          if (unaff_ESI != (MVNetworkGame *)0x0) {
            pEVar45 = (unaff_ESI->fields).ReceivedItemFromQuery;
            eventCode = CONCAT31(eventCode._1_3_,
                                 *(undefined1 *)&(unaff_ESI->fields).gameDataQueryManager);
            this_27 = (PlayerPlanetDataRemote *)
                      func_?(
                                     TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote
                                     );
            MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
            PlayerPlanetDataRemote__ctor_1(this_27,(int32_t)pEVar45,eventCode,(MethodInfo *)0x0);
            *(PlayerPlanetDataRemote **)((int)uStack_10._4_4_ + 0xc) = this_27;
            goto code_?;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_ESI,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar5->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar8,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (MVAvatar__Class *)eventCode;
        uVar11 = uStack_10;
        if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
        piVar13 = (int32_t *)func_?();
        pMVar75 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)unaff_EDI,*piVar13,(MethodInfo *)0x0);
        uVar12 = 0;
        if (pMVar75 != (MVPlayer *)0x0) {
          LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                    ((LockCursorManager3DMode *)pMVar75,(Action_1_Boolean_ *)unaff_ESI,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
        func_?();
      }
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pXVar49,(MethodInfo *)0x0);
      if (((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) {
        uVar87 = (TypeInfo__UnityEngine__Debug->_1).cctor_started;
joined_?:
        if (uVar87 == 0) {
code_?:
          func_?();
        }
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pXVar49,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      unaff_EDI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = (MVNetworkGame *)
                  MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar26,(MethodInfo *)unaff_ESI);
      uVar11 = uStack_10;
      if (pXVar49 == (XPLevelLimits *)0x0) goto code_?;
      uVar12 = 0;
      pMVar5 = (this->fields).networkGame;
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pLVar88 = (pMVar5->fields).levelRewardsManager, pLVar88 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar88,(Dictionary_2_System_Int32_System_Int32_ *)
                           (pXVar49->fields)._PrevXP_k__BackingField,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      unaff_EDI = (MVAvatar__Class *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = (MVNetworkGame *)
                  MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar26,(MethodInfo *)unaff_ESI);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      if (((pMVar5 != (MVNetworkGame *)0x0) &&
          (pLVar88 = (pMVar5->fields).levelRewardsManager, pXVar49 != (XPLevelLimits *)0x0)) &&
         (pLVar88 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar88,(pXVar49->fields)._PrevXP_k__BackingField,
                   (pXVar49->fields)._NextXP_k__BackingField,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar26 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                ((ProjectEarningsReport *)pXVar49,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
        func_?();
      }
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pXVar49,(MethodInfo *)0x0);
      if (((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) {
        uVar87 = (TypeInfo__UnityEngine__Debug->_1).cctor_started;
        goto joined_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar26 = (String *)func_?();
      pXVar49 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      SubscriberRewardDataManager::SubscriberRewardDataManager_set_VatValues
                ((KogamaVatValues *)pXVar49,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      piVar13 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar13,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar5,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    uVar12 = 0;
    pMVar5 = (this->fields).networkGame;
    unaff_ESI = (MVNetworkGame *)this;
    puStack_4 = &stack0xffffff64;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      puStack_4 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar5,photonEvent,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      unaff_ESI = (MVNetworkGame *)this;
      unaff_EDI = (MVAvatar__Class *)pEVar8;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar5,pEVar8,(MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)this;
        uVar11 = uStack_10;
        if ((this->fields).networkGame != (MVNetworkGame *)0x0) goto code_?;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    uVar12 = 0;
    unaff_ESI = (MVNetworkGame *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      pVVar89 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          ((Vector3 *)(auStack_7 + 0x14),(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar89->x;
      uStack_10._4_4_ = (XPLevelLimits__Class *)pVVar89->y;
      eventCode = (MVEventCodes__Enum)pVVar89->z;
      pQVar90 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff74,(pEVar8->fields).Parameters,
                           (MethodInfo *)0x0);
      auStack_7._16_4_ = pQVar90->x;
      auStack_7._20_4_ = pQVar90->y;
      uStack_35._0_4_ = (Il2CppType **)pQVar90->z;
      uStack_35._4_4_ = (_union_154)pQVar90->w;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar12 = 0;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        unaff_EDI = (MVAvatar__Class *)(pMVar5->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar8,0xfe,(MethodInfo *)0x0);
        uVar11 = uStack_10;
        if (unaff_EDI != (MVAvatar__Class *)0x0) {
          piVar13 = (int32_t *)func_?();
          this_28 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                    MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI,*piVar13,(MethodInfo *)0x0);
          uVar12 = 0;
          if (this_28 == (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) break;
          this_29 = (SpawnRolesManager *)
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              (this_28,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (pEVar8,0xbf,(MethodInfo *)0x0);
          unaff_EDI = (MVAvatar__Class *)0x0;
          uVar11 = uStack_10;
          if (this_29 != (SpawnRolesManager *)0x0) {
            piVar13 = (int32_t *)func_?();
            position.z = (float)eventCode;
            position.x = (float)(undefined4)uStack_10;
            position.y = (float)uStack_10._4_4_;
            rotation.y = (float)auStack_7._20_4_;
            rotation.x = (float)auStack_7._16_4_;
            rotation.z = (float)(Il2CppType **)uStack_35;
            rotation.w = (float)uStack_35._4_4_;
            SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                      (this_29,*piVar13,position,rotation,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    uVar12 = 0;
    unaff_EDI = (MVAvatar__Class *)pEVar8;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = (MVNetworkGame *)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                            (pSVar26,(MethodInfo *)unaff_ESI);
      this_30 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      uStack_10 = CONCAT44(this_30,(undefined4)uStack_10);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_30,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar12 = 0;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        unaff_ESI = (MVNetworkGame *)(pMVar5->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (pEVar8,0xfe,(MethodInfo *)0x0);
        uVar11 = uStack_10;
        if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
        piVar13 = (int32_t *)func_?();
        pMVar75 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            ((MVPlayerContainer *)unaff_ESI,*piVar13,(MethodInfo *)0x0);
        uVar12 = 0;
        if (pMVar75 != (MVPlayer *)0x0) {
          MVPlayer::MVPlayer_SetupSpawnRoleManager
                    (pMVar75,(ISpawnRoleChangeHandler *)uStack_10._4_4_,
                     (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    uVar12 = 0;
    puStack_4 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_4 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar16 = 
      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
      ;
      pSVar26 = (String *)func_?();
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar26,pMVar16);
      pMVar5 = (this->fields).networkGame;
      uVar12 = 0;
      unaff_EDI = (MVAvatar__Class *)this;
      if ((unaff_ESI != (MVNetworkGame *)0x0) &&
         (unaff_EDI = (MVAvatar__Class *)this, pMVar5 != (MVNetworkGame *)0x0)) {
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  (pMVar5,(int32_t)(unaff_ESI->fields).ReceivedAccessoryData,in_stack_43);
        pMVar5 = (this->fields).networkGame;
        uVar12 = 0;
        unaff_EDI = (MVAvatar__Class *)this;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar5,(int32_t)(unaff_ESI->fields).ReceivedItemFromQuery,in_stack_55);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar56 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          uVar12 = 0;
          unaff_EDI = (MVAvatar__Class *)this;
          if (pMVar56 != (MVWorldObjectClientManager *)0x0) {
            pMVar72 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar56,(int32_t)(unaff_ESI->fields).itemBusinessLogic,
                                 (MethodInfo *)0x0);
            this_31 = (MVAvatarSpawnRoleCreator *)
                      func_?(pMVar72,TypeInfo__MVAvatarSpawnRoleCreator);
            uVar12 = 0;
            unaff_EDI = (MVAvatar__Class *)this;
            if (this_31 != (MVAvatarSpawnRoleCreator *)0x0) {
              MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                        (this_31,(SpawnRoleBodySwitchData *)unaff_ESI,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(uVar12);
  pSVar51 = extraout_ECX;
code_?:
  pMVar48 = (MVAvatar__Class *)func_?(unaff_ESI,pSVar51);
  pSVar51 = extraout_ECX_00;
code_?:
  uVar11 = func_?(pMVar48,pSVar51);
  puVar91 = (uint *)((int)&(unaff_EBX->_0).image + (int)&(unaff_EDI->_0).byval_arg.data);
  *puVar91 = *puVar91 & (uint)unaff_EBX;
  puVar92 = &unaff_EBX[0xf7184]._1.initializationExceptionGCHandle;
  bVar93 = (byte)uVar11;
  bVar94 = CARRY1((byte)*puVar92,bVar93);
  *(byte *)puVar92 = (char)*puVar92 + bVar93;
  iVar71 = (int)(pMVar48->_0).gc_desc;
  pbVar70 = (byte *)((int)((ulonglong)uVar11 >> 0x20) + 0x11101f5d);
  bVar95 = (byte)((ulonglong)uVar11 >> 0x20);
  bVar96 = *pbVar70 + bVar95;
  bVar97 = CARRY1(*pbVar70,bVar95) || CARRY1(bVar96,bVar94);
  *pbVar70 = bVar96 + bVar94;
  bVar95 = (byte)((ulonglong)uVar11 >> 8);
  bVar98 = (byte)((uint)unaff_EBX >> 8);
  bVar96 = bVar95 + bVar98;
  bVar94 = CARRY1(bVar95,bVar98) || CARRY1(bVar96,bVar97);
  sVar99 = (short)((ulonglong)uVar11 >> 0x10);
  bVar96 = bVar96 + bVar97;
  bVar95 = bVar96 + bVar98;
  bVar97 = CARRY1(bVar96,bVar98) || CARRY1(bVar95,bVar94);
  bVar95 = bVar95 + bVar94;
  bVar100 = (byte)((uint)extraout_ECX_01 >> 8);
  bVar96 = *(char *)&(unaff_EDI->_0).image + bVar100;
  bVar94 = CARRY1(*(byte *)&(unaff_EDI->_0).image,bVar100) || CARRY1(bVar96,bVar97);
  *(byte *)&(unaff_EDI->_0).image = bVar96 + bVar97;
  _Var23 = *(_union_86 *)&(pMVar48->_0).this_arg.attrs;
  pbVar70 = (byte *)(iVar71 + 0x49101f5e);
  bVar100 = (char)((ulonglong)uVar11 >> 0x18) >> 7;
  bVar96 = *pbVar70 + bVar100;
  bVar97 = CARRY1(*pbVar70,bVar100) || CARRY1(bVar96,bVar94);
  *pbVar70 = bVar96 + bVar94;
  uVar101 = in(sVar99 >> 0xf);
  *(undefined1 *)&(unaff_EDI->_0).image = uVar101;
  bVar96 = bVar95 + bVar98;
  bVar94 = CARRY1(bVar95,bVar98) || CARRY1(bVar96,bVar97);
  bVar96 = bVar96 + bVar97;
  bVar97 = CARRY1(bRam_?,bVar96);
  bVar95 = bRam_? + bVar96;
  bRam_? = bVar95 + bVar94;
  (pMVar48->_0).declaringType = (Il2CppClass *)CONCAT22(sVar99,CONCAT11(bVar96,bVar93));
  (pMVar48->_0).castClass = (Il2CppClass *)extraout_ECX_01;
  (pMVar48->_0).element_class = (Il2CppClass *)((int)sVar99 >> 0xf);
  *(MVGameControllerBase__Class **)&(pMVar48->_0).this_arg.attrs = unaff_EBX;
  (pMVar48->_0).this_arg.data.dummy = &(pMVar48->_0).parent;
  *(int *)&(pMVar48->_0).byval_arg.attrs = iVar71;
  (pMVar48->_0).byval_arg.data = _Var23;
  (pMVar48->_0).namespaze = (undefined1 *)((int)&(unaff_EDI->_0).image + 1);
  bVar94 = CARRY1(bVar98,bVar96) || CARRY1(bVar98 + bVar96,bVar97 || CARRY1(bVar95,bVar94));
  pOVar18 = (Object *)(pMVar48->_0).byval_arg.data.typeHandle;
  puVar6 = *(undefined1 **)&(pMVar48->_0).byval_arg.attrs;
  pvVar102 = (void *)(pMVar48->_0).this_arg.data.__klassIndex;
  uVar81 = (pMVar48->_0).element_class;
  iVar103 = (int)(pMVar48->_0).castClass;
  uVar12 = (pMVar48->_0).declaringType;
  iVar71 = (int)(pMVar48->_0).parent;
  pbVar70 = (byte *)(iVar103 + 0x1e101f62);
  bVar96 = *pbVar70 + (byte)iVar103;
  bVar97 = CARRY1(*pbVar70,(byte)iVar103) || CARRY1(bVar96,bVar94);
  *pbVar70 = bVar96 + bVar94;
  sVar99 = ((ushort)uVar81 & 3) - (*(ushort *)&pOVar18->klass & 3);
  *(ushort *)&pOVar18->klass = *(short *)&pOVar18->klass + (ushort)(0 < sVar99) * sVar99;
  pbVar70 = (byte *)(iVar71 + 0x9101f63);
  bVar98 = (byte)((uint)uVar12 >> 8);
  bVar94 = CARRY1(*pbVar70,bVar98) || CARRY1(*pbVar70 + bVar98,bVar97);
  *pbVar70 = *pbVar70 + bVar98 + bVar97;
  pbVar70 = (byte *)(iVar103 + 100);
  bVar97 = CARRY1(*pbVar70,bVar98) || CARRY1(*pbVar70 + bVar98,bVar94);
  *pbVar70 = *pbVar70 + bVar98 + bVar94;
  bVar100 = (byte)uVar12;
  bVar96 = (byte)uVar81 + bVar100;
  bVar94 = CARRY1((byte)uVar81,bVar100) || CARRY1(bVar96,bVar97);
  pbVar104 = (byte *)CONCAT31((int3)((uint)uVar81 >> 8),bVar96 + bVar97);
  bVar95 = (byte)((uint)iVar71 >> 8);
  bVar105 = (byte)((uint)uVar81 >> 8);
  bVar96 = bVar95 + bVar105;
  bVar97 = CARRY1(bVar95,bVar105) || CARRY1(bVar96,bVar94);
  sVar99 = (short)((uint)iVar71 >> 0x10);
  bVar93 = (byte)iVar71;
  bVar96 = bVar96 + bVar94;
  bVar94 = CARRY1(bRam_?,bVar100) || CARRY1(bRam_? + bVar100,bVar97);
  bRam_? = bRam_? + bVar100 + bVar97;
  bVar97 = CARRY1(bVar98,bVar96) || CARRY1(bVar98 + bVar96,bVar94);
  uVar106 = (undefined2)((uint)uVar12 >> 0x10);
  bVar98 = bVar98 + bVar96 + bVar94;
  uVar107 = CONCAT22(uVar106,CONCAT11(bVar98,bVar100));
  pbVar70 = (byte *)(uVar107 + 0x66);
  bVar108 = (byte)((uint)((int)sVar99 >> 0xf) >> 8);
  bVar95 = *pbVar70 + bVar108;
  bVar94 = CARRY1(*pbVar70,bVar108) || CARRY1(bVar95,bVar97);
  *pbVar70 = bVar95 + bVar97;
  bVar97 = CARRY1(bVar96,bVar105) || CARRY1(bVar96 + bVar105,bVar94);
  cVar23 = bVar96 + bVar105 + bVar94;
  pbVar109 = (byte *)((int)sVar99 >> 0xf);
  bVar94 = CARRY1(*pbVar104,bVar93) || CARRY1(*pbVar104 + bVar93,bVar97);
  *pbVar104 = *pbVar104 + bVar93 + bVar97;
  sVar110 = (short)&(pMVar48->_0).implementedInterfaces;
  segment(in_SS,sVar110);
  iVar111 = CONCAT22((short)((uint)&(pMVar48->_0).implementedInterfaces >> 0x10),sVar110 + 2);
  pbVar70 = (byte *)((int)pvVar102 + 0x73101f67);
  bVar95 = *pbVar70;
  bVar96 = *pbVar70;
  *pbVar70 = bVar96 + bVar100 + bVar94;
  *(undefined4 *)(iVar111 + -4) = 0x68fb101f;
  pcVar74 = (char *)(CONCAT22(sVar99,CONCAT11(cVar23,bVar93)) + -0x59efe095);
  *pcVar74 = *pcVar74 + bVar100 + (CARRY1(bVar95,bVar100) || CARRY1(bVar96 + bVar100,bVar94));
  lVar112 = (longlong)(int)pOVar18->klass * 0x10;
  pbVar113 = (byte *)lVar112;
  bVar93 = bVar93 + cVar23 * 'k';
  iVar103 = CONCAT22(sVar99,(ushort)bVar93);
  bVar96 = *(byte *)(iVar103 + 0x6c);
  bVar94 = CARRY1(bVar96,(int)pbVar113 != lVar112);
  *(byte *)(iVar103 + 0x6c) = bVar96 + ((int)pbVar113 != lVar112);
  bVar96 = (byte)((uint)pbVar109 >> 8);
  bVar97 = CARRY1(bRam_?,bVar96) || CARRY1(bRam_? + bVar96,bVar94);
  bRam_? = bRam_? + bVar96 + bVar94;
  uVar114 = SUB42(pbVar109,0);
  out(*puVar6,uVar114);
  pbVar70 = (byte *)(uVar107 + 0x92101f6e);
  bVar115 = (byte)((ulonglong)lVar112 >> 8);
  bVar94 = CARRY1(*pbVar70,bVar115) || CARRY1(*pbVar70 + bVar115,bVar97);
  *pbVar70 = *pbVar70 + bVar115 + bVar97;
  out(*(undefined4 *)(puVar6 + 1),uVar114);
  pbVar70 = (byte *)(iVar103 + -0x31efe091);
  bVar97 = CARRY1(*pbVar70,bVar96) || CARRY1(*pbVar70 + bVar96,bVar94);
  *pbVar70 = *pbVar70 + bVar96 + bVar94;
  pbVar104 = puVar6 + 9;
  out(*(undefined4 *)(puVar6 + 5),uVar114);
  pbVar70 = (byte *)(uVar107 + 0x70);
  bVar108 = (byte)pbVar109;
  bVar94 = CARRY1(*pbVar70,bVar108) || CARRY1(*pbVar70 + bVar108,bVar97);
  *pbVar70 = *pbVar70 + bVar108 + bVar97;
  puVar116 = (undefined1 *)(iVar111 + 0x18);
  puVar117 = (undefined1 *)(iVar111 + 0x18);
  pbVar70 = pbVar109 + -0x37efe08f;
  bVar96 = *pbVar70;
  bVar95 = *pbVar70 + bVar98;
  bVar97 = CARRY1(*pbVar70,bVar98) || CARRY1(bVar95,bVar94);
  *pbVar70 = bVar95 + bVar94;
  bVar105 = (byte)lVar112;
  if (SCARRY1(bVar96,bVar98) == SCARRY1(bVar95,bVar94)) {
    puVar117 = (undefined1 *)(iVar111 + 0x1c);
code_?:
    bVar94 = CARRY1(*pbVar109,bVar97);
    *pbVar109 = *pbVar109 + bVar97;
    if ((POPCOUNT(*pbVar109) & 1U) != 0) goto code_?;
    pbVar70 = pbVar113 + 0x7b;
    bVar95 = (byte)((uint)pbVar109 >> 8);
    bVar96 = *pbVar70 + bVar95;
    bVar118 = CARRY1(*pbVar70,bVar95) || CARRY1(bVar96,bVar94);
    *pbVar70 = bVar96 + bVar94;
    puVar116 = puVar117 + 4;
    pbVar70 = puVar117 + (int)pOVar18 * 2 + 4;
    bVar97 = CARRY1(*pbVar70,bVar115) || CARRY1(*pbVar70 + bVar115,bVar118);
    *pbVar70 = *pbVar70 + bVar115 + bVar118;
code_?:
    bVar93 = (byte)pbVar109;
    bVar96 = *pbVar104;
    bVar95 = *pbVar104 + bVar93;
    bVar94 = CARRY1(*pbVar104,bVar93) || CARRY1(bVar95,bVar97);
    *pbVar104 = bVar95 + bVar97;
    if ((SCARRY1(bVar96,bVar93) != SCARRY1(bVar95,bVar97)) != (char)*pbVar104 < '\0') {
code_?:
      pbVar70 = pbVar113 + 0x7d;
      bVar95 = (byte)(uVar107 >> 8);
      bVar96 = *pbVar70 + bVar95;
      bVar97 = CARRY1(*pbVar70,bVar95) || CARRY1(bVar96,bVar94);
      *pbVar70 = bVar96 + bVar94;
code_?:
      pbVar70 = (byte *)(uVar107 + 0x7e);
      bVar96 = (byte)uVar107;
      bVar94 = CARRY1(*pbVar70,bVar96) || CARRY1(*pbVar70 + bVar96,bVar97);
      *pbVar70 = *pbVar70 + bVar96 + bVar97;
      pbVar70 = puVar6 + (int)pOVar18 * 2 + 0x7ecf1028;
      bVar97 = CARRY1(*pbVar70,bVar96) || CARRY1(*pbVar70 + bVar96,bVar94);
      *pbVar70 = *pbVar70 + bVar96 + bVar94;
      goto code_?;
    }
    bVar97 = CARRY1(*pbVar113,bVar105) || CARRY1(*pbVar113 + bVar105,bVar94);
    *pbVar113 = *pbVar113 + bVar105 + bVar94;
    bVar96 = *(char *)&pOVar18->klass - 0x10;
    bVar118 = *(byte *)&pOVar18->klass < 0x10 || bVar96 < bVar97;
    *(byte *)&pOVar18->klass = bVar96 - bVar97;
    pOVar18 = *(Object **)(puVar116 + 8);
    pbVar104 = *(byte **)(puVar116 + 0xc);
    pbVar113 = *(byte **)(puVar116 + 0x18);
    pbVar109 = *(byte **)(puVar116 + 0x1c);
    uVar107 = *(uint *)(puVar116 + 0x20);
    iVar103 = *(int *)(puVar116 + 0x24);
    bVar96 = *(byte *)&pOVar18->klass;
    bVar95 = *(char *)&pOVar18->klass - 0x10;
    *(byte *)&pOVar18->klass = bVar95 - bVar118;
    pbVar70 = pbVar109 + -0x7ce7efe1;
    bVar93 = (byte)uVar107 & 7;
    *pbVar70 = *pbVar70 << bVar93 | *pbVar70 >> 8 - bVar93;
    bVar94 = (uVar107 & 0x1f) == 0;
    bVar97 = (bool)(bVar94 * (bVar96 < 0x10 || bVar95 < bVar118) | !bVar94 * ((*pbVar70 & 1) != 0));
code_?:
    pbVar70 = pbVar104 + -0x7d;
    bVar96 = *pbVar70 + (byte)pbVar113;
    bVar94 = CARRY1(*pbVar70,(byte)pbVar113) || CARRY1(bVar96,bVar97);
    *pbVar70 = bVar96 + bVar97;
  }
  else {
    pbVar70 = pbVar109 + (int)pbVar104 * 2 + 0x1f;
    bVar94 = CARRY1(*pbVar70,bVar108) || CARRY1(*pbVar70 + bVar108,bVar97);
    *pbVar70 = *pbVar70 + bVar108 + bVar97;
    bVar97 = CARRY1(bRam_?,bVar105) || CARRY1(bRam_? + bVar105,bVar94);
    bRam_? = bRam_? + bVar105 + bVar94;
    if (bRam_? == 0) goto code_?;
    bVar94 = CARRY1(bVar93,bVar115) || CARRY1(bVar93 + bVar115,bVar97);
    cVar23 = bVar93 + bVar115 + bVar97;
    iVar103 = CONCAT31((int3)((uint)iVar103 >> 8),cVar23);
    if (cVar23 == '\0') goto code_?;
    bVar96 = bVar108 + bVar100;
    bVar97 = CARRY1(bVar108,bVar100) || CARRY1(bVar96,bVar94);
    bVar95 = bVar96 + bVar94;
    pbVar109 = (byte *)CONCAT31((int3)(char)((uint)iVar71 >> 0x18) >> 0xf,bVar95);
    if ((!CARRY1(bVar108,bVar100) && !CARRY1(bVar96,bVar94)) && bVar95 != 0) goto code_?;
    bVar94 = CARRY1(bRam_?,bVar100) || CARRY1(bRam_? + bVar100,bVar97);
    bRam_? = bRam_? + bVar100 + bVar97;
    if ((char)bRam_? < '\0') {
      bVar97 = CARRY1(bVar98,bVar95) || CARRY1(bVar98 + bVar95,bVar94);
      cVar23 = bVar98 + bVar95 + bVar94;
      uVar107 = CONCAT22(uVar106,CONCAT11(cVar23,bVar100));
      if (cVar23 < '\0') goto code_?;
    }
    else {
      bVar96 = bVar115 + bVar100;
      bVar97 = CARRY1(bVar115,bVar100) || CARRY1(bVar96,bVar94);
      cVar23 = bVar96 + bVar94;
      pbVar113 = (byte *)CONCAT22((short)((ulonglong)lVar112 >> 0x10),CONCAT11(cVar23,bVar105));
      if (cVar23 == '\0' || (SCARRY1(bVar115,bVar100) != SCARRY1(bVar96,bVar94)) != cVar23 < '\0')
      goto code_?;
    }
code_?:
    bVar93 = (byte)pbVar109;
    bVar96 = *pbVar109;
    bVar95 = *pbVar109 + bVar93;
    bVar94 = CARRY1(*pbVar109,bVar93) || CARRY1(bVar95,bVar97);
    *pbVar109 = bVar95 + bVar97;
    if (*pbVar109 == 0 || (SCARRY1(bVar96,bVar93) != SCARRY1(bVar95,bVar97)) != (char)*pbVar109 < '\0'
       ) {
code_?:
      pbVar70 = (byte *)(iVar103 + 0x7f);
      bVar96 = *pbVar70 + (byte)uVar107;
      bVar97 = CARRY1(*pbVar70,(byte)uVar107) || CARRY1(bVar96,bVar94);
      *pbVar70 = bVar96 + bVar94;
      bVar95 = (byte)(uVar107 >> 8);
      bVar100 = (byte)((uint)pbVar113 >> 8);
      bVar96 = bVar100 + bVar95;
      bVar94 = CARRY1(bVar100,bVar95) || CARRY1(bVar96,bVar97);
      bVar93 = (byte)pbVar113;
      cVar23 = bVar96 + bVar97;
      pbVar113 = (byte *)CONCAT22((short)((uint)pbVar113 >> 0x10),CONCAT11(cVar23,bVar93));
      if (cVar23 != '\0' && (SCARRY1(bVar100,bVar95) != SCARRY1(bVar96,bVar97)) == cVar23 < '\0')
      goto code_?;
      bVar95 = (byte)iVar103;
      bVar96 = bVar95 + bVar93;
      bVar100 = bVar96 + bVar94;
      iVar103 = CONCAT31((int3)((uint)iVar103 >> 8),bVar100);
      puVar6 = (undefined1 *)(uint)(CARRY1(bVar95,bVar93) || CARRY1(bVar96,bVar94));
      ppIVar119 = &pOVar18->klass[-0x24aa04].rgctx_data;
      bVar97 = pOVar18->klass < (Object__Class *)0x1f821b10 || ppIVar119 < puVar6;
      pOVar18->klass = (Object__Class *)((int)ppIVar119 - (int)puVar6);
      bVar96 = *(byte *)(uVar107 - 0x7e);
      bVar94 = CARRY1(bVar96,bVar97);
      *(byte *)(uVar107 - 0x7e) = bVar96 + bVar97;
      bVar96 = (byte)pbVar109;
      bVar97 = CARRY1(bVar96,bVar96) || CARRY1(bVar96 * '\x02',bVar94);
      pbVar109 = (byte *)(uint)(byte)(bVar96 * '\x02' + bVar94);
      bVar96 = *(char *)&pOVar18->klass - 0x10;
      bVar118 = *(byte *)&pOVar18->klass < 0x10 || bVar96 < bVar97;
      *(byte *)&pOVar18->klass = bVar96 - bVar97;
      pbVar70 = pbVar113 + -0x7ca1efe1;
      bVar94 = *pbVar70 < bVar100 || (byte)(*pbVar70 - bVar100) < bVar118;
      *pbVar70 = (*pbVar70 - bVar100) - bVar118;
    }
  }
  bVar96 = (byte)pbVar109;
  puVar6 = (undefined1 *)(uint)(CARRY1(bVar96,bVar96) || CARRY1(bVar96 * '\x02',bVar94));
  pVVar120 = &pOVar18->klass[-1].vtable.GetHashCode;
  bVar94 = pOVar18->klass < (Object__Class *)0x10 || pVVar120 < puVar6;
  pOVar18->klass = (Object__Class *)((int)pVVar120 - (int)puVar6);
  iVar103 = CONCAT31((int3)((uint)iVar103 >> 8),0x6f);
code_?:
  bVar95 = (byte)((uint)iVar103 >> 8);
  bVar108 = (byte)((uint)pbVar113 >> 8);
  bVar96 = bVar95 + bVar108;
  bVar97 = CARRY1(bVar95,bVar108) || CARRY1(bVar96,bVar94);
  bVar93 = (byte)iVar103;
  bVar96 = bVar96 + bVar94;
  ppMVar121 = &pOVar18[-0x10].monitor;
  bVar94 = CARRY1(*(byte *)ppMVar121,bVar93) || CARRY1(*(char *)ppMVar121 + bVar93,bVar97);
  *(byte *)ppMVar121 = *(char *)ppMVar121 + bVar93 + bVar97;
  bVar95 = bVar96 + bVar108;
  bVar97 = CARRY1(bVar96,bVar108) || CARRY1(bVar95,bVar94);
  bVar95 = bVar95 + bVar94;
  bVar96 = bVar95 + bVar108;
  bVar94 = CARRY1(bVar95,bVar108) || CARRY1(bVar96,bVar97);
  bVar96 = bVar96 + bVar97;
  bVar95 = bVar96 + bVar108;
  bVar100 = bVar95 + bVar94;
  iVar71 = (int)(short)((uint)iVar103 >> 0x10) >> 0xf;
  cRam_? = cRam_? + bVar93 + (CARRY1(bVar96,bVar108) || CARRY1(bVar95,bVar94));
  pbVar70 = (byte *)((int)&pOVar18[-0x10].monitor + 2);
  bVar96 = *pbVar70;
  *pbVar70 = *pbVar70 + bVar100;
  bVar98 = (byte)iVar71;
  bVar95 = *(char *)&pOVar18->klass + bVar98;
  bVar94 = CARRY1(*(byte *)&pOVar18->klass,bVar98) || CARRY1(bVar95,CARRY1(bVar96,bVar100));
  *(byte *)&pOVar18->klass = bVar95 + CARRY1(bVar96,bVar100);
  LOCK();
  uVar101 = *(undefined1 *)&pOVar18->klass;
  *(char *)&pOVar18->klass = (char)pbVar113;
  UNLOCK();
  pbVar70 = (byte *)((int)&pOVar18[-0x10].monitor + 2);
  bVar97 = CARRY1(*pbVar70,bVar100) || CARRY1(*pbVar70 + bVar100,bVar94);
  *pbVar70 = *pbVar70 + bVar100 + bVar94;
  pbVar70 = (byte *)((int)&pOVar18[0x24203f0].monitor + 3);
  bVar94 = CARRY1(*pbVar70,bVar93) || CARRY1(*pbVar70 + bVar93,bVar97);
  *pbVar70 = *pbVar70 + bVar93 + bVar97;
  *(undefined1 *)&pOVar18->klass = uVar101;
  pOVar63 = pOVar18 + 0xa0203f1;
  bVar96 = *(char *)&pOVar63->klass + bVar98;
  bVar97 = CARRY1(*(byte *)&pOVar63->klass,bVar98) || CARRY1(bVar96,bVar94);
  *(byte *)&pOVar63->klass = bVar96 + bVar94;
  pbVar109 = (byte *)CONCAT31((int3)((uint)pbVar113 >> 8),*(undefined1 *)&pOVar18->klass);
  pbVar70 = (byte *)((int)&pOVar18[-0xf].klass + 3);
  bVar95 = (byte)((uint)iVar71 >> 8);
  bVar96 = *pbVar70 + bVar95;
  bVar94 = CARRY1(*pbVar70,bVar95) || CARRY1(bVar96,bVar97);
  *pbVar70 = bVar96 + bVar97;
  bVar96 = *pbVar109;
  bVar95 = *pbVar109;
  *pbVar109 = bVar95 + bVar93 + bVar94;
  pbVar104[0x57101f8e] =
       pbVar104[0x57101f8e] + (char)uVar107 + bVar108 +
       (CARRY1(bVar96,bVar93) || CARRY1(bVar95 + bVar93,bVar94));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_?:
  *unaff_FS_OFFSET = uStack_3;
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
  puStack_4 = &stack0xffffffd4;
  puVar5 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  if ((this->fields).cacheEvents == 0) {
    puStack_4 = &stack0xffffffd4;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_4 = &stack0xffffffd4, (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_4 = &stack0xffffffd4;
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    unaff_ESI = photonEvent;
    if (MVar6 != MVJoinState__Enum_Playing) {
      if (photonEvent == (EventData *)0x0) goto code_?;
      this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
      if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
        func_?();
      }
      JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI((MVEventCodes__Enum)this,(MethodInfo *)0x0);
    }
    if (photonEvent != (EventData *)0x0) {
      this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
      uStack_1 = 0;
      MVNetworkGame_EventHandling_HandleEvent
                (this_01,(MVEventCodes__Enum)this,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).cachedEvents;
    puStack_4 = &stack0xffffffd4;
    if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
      puStack_4 = &stack0xffffffd4;
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                (this_00,(SmoothPhysicsMovement_Package *)photonEvent,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  apEStack_7[0] = unaff_ESI->klass;
  func_?(apEStack_7,&UNK_?);
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
  if (pMVar1 == (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
            (pMVar1->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar3 == 0) goto code_?;
    pDVar4 = (pMVar1->fields).eventCallbacks;
    if (pDVar4 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                   *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              MVEventCodes,System::Object]::
              Dictionary_2_MV_Common_MVEventCodes_System_Object__ContainsKey
                        ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar4,eventCode,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                        );
      if (bVar3 == 0) {
        pDVar4 = (pMVar1->fields).eventCallbacks;
        this_01 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
        if (pDVar4 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System::
        Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Add
                  ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar4,eventCode,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  );
      }
      pDVar4 = (pMVar1->fields).eventCallbacks;
      if (pDVar4 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 MVEventCodes,System::Object]::
                 Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                           ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar4,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
        if (pOVar5 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar5[1].klass;
          do {
            pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
            if (pDVar6 != (Delegate *)0x0) {
              pDVar7 = (Delegate *)0x0;
              if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar6->klass ==
                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
                pDVar7 = pDVar6;
              }
              if (pDVar7 == (Delegate *)0x0) goto code_?;
            }
            pOVar8 = (Object__Class *)func_?(pOVar5 + 1);
            bVar9 = pOVar8 == a;
            a = pOVar8;
            if (bVar9) {
              return;
            }
          } while( true );
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Event_not_handled_by_dynamic_eve,(MethodInfo *)0x0);
  func_?(this_02);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar2 = (pMVar1->fields).eventCallbacks;
    if (pDVar2 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                   *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               MVEventCodes,System::Object]::
               Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                         ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar2,eventCode,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                         );
      if (pOVar3 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        source = pOVar3[1].klass;
        do {
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
          pDVar5 = (Delegate *)0x0;
          if (pDVar4 != (Delegate *)0x0) {
            if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar4->klass ==
                TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
              pDVar5 = pDVar4;
            }
            pAVar6 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
            if (pDVar5 == (Delegate *)0x0) goto code_?;
          }
          pOVar7 = (Object__Class *)func_?(pOVar3 + 1,pDVar5,source);
          bVar8 = pOVar7 != source;
          source = pOVar7;
        } while (bVar8);
        if (pOVar3[1].klass == (Object__Class *)0x0) {
          pDVar2 = (pMVar1->fields).eventCallbacks;
          if (pDVar2 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System::
          Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Remove
                    ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar2,eventCode,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pDVar4 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pDVar4,pAVar6);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedEvents;
  (this->fields).cacheEvents = 0;
  while (this_00 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                       );
    if ((int)pIVar1 < 1) {
      return;
    }
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).cachedEvents;
    if (this_01 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    photonEvent = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                  Queue_1_SmoothPhysicsMovement_Package__Dequeue
                            (this_01,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                            );
    MVNetworkGame_EventHandling_OnEvent(this,(EventData *)photonEvent,(MethodInfo *)0x0);
    this_00 = (this->fields).cachedEvents;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <HandleEvent>m__0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__HandleEvent_m__0
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  if (wo != (MVWorldObjectClient *)0x0) {
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              (wo,InteractionFlags__Enum_CanRespawn,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVNetworkGame+EventHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor
               (MVNetworkGame_EventHandling *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = pHVar1;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (pHVar1 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)pHVar1,
               MVOperationCodes__Enum_SetGamePassTierToSeenOperation,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    (this_00->fields).state = (int32_t)pHVar1;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_retaddr);
    (this->fields).dynamicEventCallbackManager =
         (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)this_00;
    method_00 = TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>;
    this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
              );
    (this->fields).cachedEvents = (Queue_1_ExitGames_Client_Photon_EventData_ *)this_01;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
    (this->fields).networkGame = networkGame;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

