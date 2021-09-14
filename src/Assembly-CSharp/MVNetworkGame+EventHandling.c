
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
  bVar1 = false;
  puVar2 = &stack0xfffffffc;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff64;
  pMVar7 = unaff_ESI;
  pMVar8 = unaff_EBX;
  puVar9 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar9 = puStack_6;
  }
  puStack_6 = puVar9;
  auStack_10._0_8_ = 0;
  pIStack_11 = (Int32__Class *)0x0;
  auStack_10._8_4_ = (MVWorldObjectClientManagerNetwork *)0x0;
  func_?();
  MVar12 = eventCode & MVEventCodes__Enum_Join;
  uStack_13 = CONCAT44(&stack0xffffff64,(undefined4)uStack_13);
  pMVar14 = unaff_EDI;
  pMVar15 = (MVAvatar__Class *)photonEvent;
  uVar16 = uStack_13;
  switch(MVar12) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x16,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      piVar17 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                ((MVNetworkGame *)pMVar15,*piVar17,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (((pMVar18 != (MVNetworkGame *)0x0) &&
        (pWVar19 = (pMVar18->fields).worldNetwork, pMVar15 = unaff_ESI, puStack_6 = &stack0xffffff64
        , pWVar19 != (WorldNetwork *)0x0)) &&
       (puStack_6 = &stack0xffffff64,
       pMVar14 = (MVAvatar__Class *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)0x0),
       pMVar15 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13, photonEvent != (EventData *)0x0
       )) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x12,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        pMVar20 = (MethodInfo *)0x0;
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                  ((MVWorldObjectClientManagerNetwork *)pMVar14,*piVar17,pDVar21,pMVar20);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x12,(MethodInfo *)0x0);
      pDVar23 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      pMVar15 = (MVAvatar__Class *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (((pMVar18 != (MVNetworkGame *)0x0) &&
          (pWVar19 = (pMVar18->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
         (pMVar24 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)pDVar23),
         uVar16 = uStack_13, pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                  (pMVar24,(int32_t)pMVar14,(Dictionary_2_System_Object_System_Object_ *)pMVar15,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x13,(MethodInfo *)0x0);
      pDVar23 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      pMVar15 = (MVAvatar__Class *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (((pMVar18 != (MVNetworkGame *)0x0) &&
          (pWVar19 = (pMVar18->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
         (pMVar24 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)pDVar23),
         uVar16 = uStack_13, pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                  (pMVar24,(int32_t)pMVar14,(Dictionary_2_System_Object_System_Object_ *)pMVar15,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  default:
    if (MVar12 == MVEventCodes__Enum_PropertiesChanged) {
      pMVar15 = unaff_ESI;
      puStack_6 = &stack0xffffff64;
      if (photonEvent != (EventData *)0x0) {
        puStack_6 = &stack0xffffff64;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfb,(MethodInfo *)0x0);
        pMVar14 = (MVAvatar__Class *)func_?();
        pMVar15 = unaff_ESI;
        uVar16 = uStack_13;
        if ((pMVar14 != (MVAvatar__Class *)0x0) &&
           (pDVar25 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Keys
                                ((Dictionary_2_WinningConditionType_System_Object_ *)pMVar14,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ), pMVar15 = unaff_ESI, uVar16 = uStack_13,
           pDVar25 !=
           (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)) {
          iVar26 = func_?();
          pIStack_11 = *(Int32__Class **)(iVar26 + 8);
          uStack_3 = 0;
          while (cVar27 = func_?(), cVar27 != '\0') {
            func_?();
            pTVar28 = (Type *)func_?();
            arg2_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)pMVar14,pTVar28,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar29 = mscorlib.dll::System::String::String_Concat_1
                                ((Object *)pTVar28,(Object *)::StringLiteral___,(Object *)arg2_00,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar29,(MethodInfo *)0x0);
          }
          *(undefined4 *)uStack_13._4_4_ = 0xab4;
          uStack_3 = 0xffffffff;
          func_?();
          goto code_?;
        }
      }
      break;
    }
    if (MVar12 == MVEventCodes__Enum_Leave) {
      pMVar15 = unaff_ESI;
      puStack_6 = &stack0xffffff64;
      if ((photonEvent != (EventData *)0x0) &&
         (puStack_6 = &stack0xffffff64,
         pMVar7 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xfe,(MethodInfo *)0x0), pMVar15 = unaff_ESI,
         uVar16 = uStack_13, pMVar7 != (MVAvatar__Class *)0x0)) {
        pMVar15 = unaff_ESI;
        if ((((MVNetworkGame__Class *)(pMVar7->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar20 = (MethodInfo *)&UNK_?;
        puVar22 = (undefined4 *)func_?();
        pMVar15 = (MVAvatar__Class *)*puVar22;
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)this;
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if (((pMVar18 != (MVNetworkGame *)0x0) &&
            (pMVar30 = (pMVar18->fields).playerContainer, pMVar14 = (MVAvatar__Class *)this,
            pMVar30 != (MVPlayerContainer *)0x0)) &&
           (pMVar31 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (pMVar30,(MethodInfo *)0x0), pMVar14 = (MVAvatar__Class *)this,
           pMVar8 = pMVar7, uVar16 = uStack_13, pMVar31 != (MVLocalPlayer *)0x0)) {
          pMVar8 = (MVAvatar__Class *)
                    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar31,pMVar20);
          if (pMVar15 == pMVar8) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
            goto code_?;
          }
          pMVar18 = (this->fields).networkGame;
          pMVar14 = (MVAvatar__Class *)this;
          pMVar8 = pMVar7;
          uVar16 = uStack_13;
          if ((pMVar18 != (MVNetworkGame *)0x0) &&
             (pMVar30 = (pMVar18->fields).playerContainer, pMVar14 = (MVAvatar__Class *)this,
             pMVar30 != (MVPlayerContainer *)0x0)) {
            pMVar8 = pMVar15;
            bVar32 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                               (pMVar30,(int32_t)pMVar15,in_stack_33);
            if (bVar32 == 0) {
code_?:
              pMVar18 = (this->fields).networkGame;
              pMVar14 = (MVAvatar__Class *)this;
              uVar16 = uStack_13;
              if ((pMVar18 != (MVNetworkGame *)0x0) &&
                 (pMVar30 = (pMVar18->fields).playerContainer, pMVar14 = (MVAvatar__Class *)this,
                 pMVar30 != (MVPlayerContainer *)0x0)) {
                MVPlayerContainer::MVPlayerContainer_Remove
                          (pMVar30,(int32_t)pMVar15,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pMVar18 = (this->fields).networkGame;
              pMVar14 = (MVAvatar__Class *)this;
              uVar16 = uStack_13;
              if ((pMVar18 != (MVNetworkGame *)0x0) &&
                 (pMVar30 = (pMVar18->fields).playerContainer, pMVar14 = (MVAvatar__Class *)this,
                 pMVar30 != (MVPlayerContainer *)0x0)) {
                pMStack_34 = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (pMVar30,(int32_t)pMVar15,
                                        (MethodInfo *)in_stack_35.methodMetadataHandle);
                in_stack_35 =
                     (_union_154)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ;
                pDStack_36 = (Dictionary_2_System_Object_System_Object_ *)func_?();
                System.Core.dll::System::Collections::Generic::
                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                          ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDStack_36,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                uVar37 = func_?();
                uStack_38 = CONCAT44(uVar37,(Il2CppType **)uStack_38);
                uStack_13 = CONCAT44(pMVar15,(undefined4)uStack_13);
                pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
                pTVar39 = (Theme *)func_?();
                pMVar14 = (MVAvatar__Class *)this;
                uVar16 = uStack_13;
                if (pDStack_36 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  pDVar21 = pDStack_36;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                  Dictionary_2_System_String_Theme__set_Item
                            ((Dictionary_2_System_String_Theme_ *)pDStack_36,
                             (String *)uStack_38._4_4_,pTVar39,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  bStack_40 = 3;
                  uVar37 = func_?();
                  uStack_38 = CONCAT44(uVar37,(Il2CppType **)uStack_38);
                  pMVar14 = (MVAvatar__Class *)this;
                  uVar16 = uStack_13;
                  if ((pMStack_34 != (MVPlayer *)0x0) &&
                     (iVar41 = GamePointGainEffect::GamePointGainEffect_get_ID
                                         ((GamePointGainEffect *)pMStack_34,(MethodInfo *)0x0),
                     pMVar14 = (MVAvatar__Class *)this, uVar16 = uStack_13, iVar41 != 0)) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                    Dictionary_2_System_String_Theme__set_Item
                              ((Dictionary_2_System_String_Theme_ *)pDStack_36,
                               (String *)uStack_38._4_4_,*(Theme **)(iVar41 + 0xc),
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    pMVar20 = (MethodInfo *)&bStack_42;
                    bStack_42 = 6;
                    auStack_10._12_4_ = func_?();
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    pMVar14 = (MVAvatar__Class *)this;
                    uVar16 = uStack_13;
                    if (pMVar18 != (MVNetworkGame *)0x0) {
                      uStack_38 = CONCAT44((pMVar18->fields)._Friends_k__BackingField,
                                           (Il2CppType **)uStack_38);
                      pOVar43 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                          ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                           pMStack_34,(MethodInfo *)0x0);
                      pMVar14 = (MVAvatar__Class *)this;
                      uVar16 = uStack_13;
                      if (uStack_38._4_4_ != (Il2CppRGCTXData *)0x0) {
                        bStack_44 = FriendList::FriendList_IsFriend
                                              ((FriendList *)uStack_38._4_4_,(int32_t)pOVar43,
                                               pMVar20);
                        pTVar39 = (Theme *)func_?();
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        String,Theme]::Dictionary_2_System_String_Theme__set_Item
                                  ((Dictionary_2_System_String_Theme_ *)pDStack_36,
                                   (String *)auStack_10._12_4_,pTVar39,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                  );
                        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                  (MVGameMsgType__Enum_UserLeft,pDStack_36,(MethodInfo *)0x0);
                        pMVar18 = (this->fields).networkGame;
                        pMVar14 = (MVAvatar__Class *)this;
                        uVar16 = uStack_13;
                        if (pMVar18 != (MVNetworkGame *)0x0) {
                          uStack_38 = CONCAT44((pMVar18->fields).gameStatCounterManager,
                                               (Il2CppType **)uStack_38);
                          pIVar45 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                    KogamaSettingsCore::KogamaSettingTypes::
                                    KogamaSettingNumericBase`1[System::Single]::
                                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                              ((KogamaSettingNumericBase_1_System_Single_ *)
                                               pMStack_34,in_stack_46);
                          pMVar14 = (MVAvatar__Class *)this;
                          uVar16 = uStack_13;
                          if (uStack_38._4_4_ != (Il2CppRGCTXData *)0x0) {
                            MVWorldObject.dll::GameStatCounterManager::
                            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                      ((GameStatCounterManager *)uStack_38._4_4_,(int32_t)pMVar15,
                                       (MVTeam__Enum)pIVar45,in_stack_47);
                            pMVar18 = (this->fields).networkGame;
                            pMVar14 = (MVAvatar__Class *)this;
                            uVar16 = uStack_13;
                            if ((pMVar18 != (MVNetworkGame *)0x0) &&
                               (pGVar48 = (pMVar18->fields).gameStatCounterManager,
                               pMVar14 = (MVAvatar__Class *)this,
                               pGVar48 != (GameStatCounterManager *)0x0)) {
                              MVWorldObject.dll::GameStatCounterManager::
                              GameStatCounterManager_RemoveStatsFromActor
                                        (pGVar48,(int32_t)pMVar15,(MethodInfo *)pDVar21);
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
      break;
    }
    if (MVar12 != MVEventCodes__Enum_Join) {
      pMVar15 = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
      pMVar14 = (MVAvatar__Class *)this;
      puStack_6 = &stack0xffffff64;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        puStack_6 = &stack0xffffff64;
        if (cRam_? == '\0') {
          puStack_6 = &stack0xffffff64;
          func_?();
          cRam_? = '\x01';
        }
        pEVar49 = ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedAvatarBodiesFromQuery;
        pMVar14 = (MVAvatar__Class *)this;
        uVar16 = uStack_13;
        if (pEVar49 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
          bVar32 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                   NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                             ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pEVar49,eventCode,
                              MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                             );
          if (bVar32 == 0) {
            uStack_50 = (undefined1)eventCode;
            pOVar43 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar29 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_Unknown_event__,pOVar43,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar29,(MethodInfo *)0x0);
            goto code_?;
          }
          pMVar15 = (MVAvatar__Class *)(this->fields).dynamicEventCallbackManager;
          pMVar14 = (MVAvatar__Class *)this;
          uVar16 = uStack_13;
          if (pMVar15 != (MVAvatar__Class *)0x0) {
            if (cRam_? == '\0') {
              pMVar8 = _UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            this_12 = (Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)
                      ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedItemFromQuery;
            pMVar14 = (MVAvatar__Class *)this;
            uVar16 = uStack_13;
            if (this_12 != (Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)0x0) {
              pOVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                        MVEventCodes,System::Object]::
                        Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                                  (this_12,eventCode,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                                  );
              pMVar15 = (MVAvatar__Class *)0x0;
              pMVar14 = (MVAvatar__Class *)this;
              uVar16 = uStack_13;
              if (pOVar43 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pOVar43[1].klass == (Object__Class *)0x0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
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
                              *)pOVar43[1].klass,
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
      break;
    }
    puStack_6 = &stack0xffffff64;
    if ((photonEvent == (EventData *)0x0) ||
       (pMVar20 = (MethodInfo *)photonEvent, puStack_6 = &stack0xffffff64,
       pMVar7 = (MVAvatar__Class *)
                 Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0xb,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar7 == (MVAvatar__Class *)0x0)) break;
    if ((((MVNetworkGame__Class *)(pMVar7->_0).image)->_0).element_class !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar17 = (int32_t *)func_?();
    auStack_10._12_4_ = *piVar17;
    pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xfe,(MethodInfo *)0x0);
    pMVar8 = pMVar7;
    uVar16 = uStack_13;
    if (pOVar43 == (Object *)0x0) break;
    if ((pOVar43->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar51 = (int *)func_?();
    pSVar29 = (String *)*piVar51;
    pMVar8 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x9a,(MethodInfo *)0x0);
    unaff_EDI = (MVAvatar__Class *)0x0;
    if (pMVar8 != (MVAvatar__Class *)0x0) {
      if ((String__Class *)(pMVar8->_0).image == TypeInfo__System__String) {
        unaff_EDI = pMVar8;
      }
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      if (unaff_EDI == (MVAvatar__Class *)0x0) goto code_?;
    }
    pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xbc,(MethodInfo *)0x0);
    pMVar14 = unaff_EDI;
    pMVar8 = pMVar7;
    uVar16 = uStack_13;
    if (pOVar43 == (Object *)0x0) break;
    if ((pOVar43->klass->_0).element_class != (TypeInfo__MV__Common__BuildTarget->_0).element_class)
    goto code_?;
    puVar9 = (undefined1 *)func_?();
    uStack_38._0_5_ = CONCAT14(*puVar9,(Il2CppType **)uStack_38);
    pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x59,(MethodInfo *)0x0);
    pMVar8 = pMVar7;
    uVar16 = uStack_13;
    if (pOVar43 == (Object *)0x0) break;
    if ((pOVar43->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    p_Var61 = (_union_155 *)func_?();
    _Stack_38 = *p_Var61;
    pMVar15 = (MVAvatar__Class *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xe0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar8 = (MVAvatar__Class *)0x0;
    if (pMVar15 == (MVAvatar__Class *)0x0) {
code_?:
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          ((String *)pMVar8,
                           MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                          );
      uStack_13 = CONCAT44(pXVar52,(undefined4)uStack_13);
      pMVar18 = (this->fields).networkGame;
      pMVar8 = pMVar7;
      uVar16 = uStack_13;
      if (((pMVar18 != (MVNetworkGame *)0x0) &&
          (pMVar53 = (MethodInfo *)(pMVar18->fields).playerContainer, pMVar53 != (MethodInfo *)0x0))
         && (pMVar31 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 ((MVPlayerContainer *)pMVar53,pMVar20), pMVar8 = pMVar7,
            uVar16 = uStack_13, pMVar31 != (MVLocalPlayer *)0x0)) {
        pSVar54 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar31,(MethodInfo *)0x0);
        if (pSVar29 == pSVar54) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Received_join_event_for_localPla,(MethodInfo *)0x0);
          goto code_?;
        }
        pMVar15 = (MVAvatar__Class *)func_?();
        MVPlayer::MVPlayer__ctor
                  ((MVPlayer *)pMVar15,(int32_t)pSVar29,auStack_10._12_4_,(String *)unaff_EDI,
                   (BuildTarget__Enum)uStack_38._4_4_,(UserProfileData *)uStack_13._4_4_,0,
                   (MethodInfo *)0x0);
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if (pMVar15 != (MVAvatar__Class *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
          ObjectPool_1_System_Object__set_countAll
                    ((ObjectPool_1_System_Object_ *)pMVar15,(int32_t)_Stack_38,pMVar53);
          pMVar18 = (this->fields).networkGame;
          pMVar8 = pMVar7;
          uVar16 = uStack_13;
          if ((pMVar18 != (MVNetworkGame *)0x0) &&
             (pMVar30 = (pMVar18->fields).playerContainer, pMVar30 != (MVPlayerContainer *)0x0)) {
            MVPlayerContainer::MVPlayerContainer_Add(pMVar30,(MVPlayer *)pMVar15,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      break;
    }
    if ((String__Class *)(pMVar15->_0).image == TypeInfo__System__String) {
      pMVar8 = pMVar15;
    }
    if (pMVar8 != (MVAvatar__Class *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_UnregisterPrototype:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x2f,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      pWVar19 = *(WorldNetwork **)((int)&pMVar15->_1 + 0x4c);
      uVar16 = uStack_13;
      if ((pWVar19 != (WorldNetwork *)0x0) &&
         (pMVar55 = (MVWorldInventory *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar19,
                               (MethodInfo *)photonEvent), uVar16 = uStack_13,
         pMVar55 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_RemovePrototype
                  (pMVar55,(int32_t)pMVar14,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (((pMVar18 != (MVNetworkGame *)0x0) &&
        (pWVar19 = (pMVar18->fields).worldNetwork, pMVar15 = unaff_ESI, puStack_6 = &stack0xffffff64
        , pWVar19 != (WorldNetwork *)0x0)) &&
       (puStack_6 = &stack0xffffff64,
       pMVar14 = (MVAvatar__Class *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar19,
                            (MethodInfo *)0x0), pMVar15 = (MVAvatar__Class *)photonEvent,
       uVar16 = uStack_13, photonEvent != (EventData *)0x0)) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x31,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        pMVar20 = (MethodInfo *)0x0;
        pBVar56 = (Byte__Array *)func_?();
        MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
                  ((MVWorldInventory *)pMVar14,*piVar17,pBVar56,pMVar20);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pMStack_34 = (MVPlayer *)*puVar22;
        in_stack_35 = (_union_154)TypeInfo__System__Int32;
        puVar22 = (undefined4 *)func_?();
        pMStack_57 = (MVAvatar__Class *)*puVar22;
        pMVar8 = (MVAvatar__Class *)&UNK_?;
        puVar22 = (undefined4 *)func_?();
        pEVar49 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar22;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar15 = (MVAvatar__Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1
                  ((Link_1 *)pMVar15,(MethodInfo *)0x0);
        uVar16 = uStack_13;
        if (pMVar15 != (MVAvatar__Class *)0x0) {
          ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedAvatarBodiesFromQuery =
               pEVar49;
          ((Il2CppType *)((int)&pMVar15->_0 + 0x10))->data = (_union_86)pMStack_57;
          ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_34;
          pWVar19 = *(WorldNetwork **)((int)&pMVar14->_1 + 0x4c);
          if (pWVar19 != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddLink_1
                      (pWVar19,(Link_1 *)pMVar15,
                       (MethodInfo *)
                       CONCAT22(in_stack_58,CONCAT11(in_stack_59,in_stack_60)));
            pIVar61 = *(Il2CppClass **)((int)&pMVar14->_0 + 0x2c);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar14 = (MVAvatar__Class *)0x0;
            uVar16 = uStack_13;
            if (pIVar61 != (Il2CppClass *)0x0) {
              _Stack_18 = (_union_154)
                          LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                                    ((LogicObjectManagerClient *)pIVar61,(Link_1 *)pMVar15,
                                     (IWorldObjectManager *)pMVar62,(MethodInfo *)0x0);
              pOVar43 = (Object *)func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              pXVar52 = (XPLevelLimits *)
                        mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_reset_count_,pOVar43,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) == 0)
                 || ((TypeInfo__UnityEngine__Debug->_1).cctor_started != 0)) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x3a,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      if (cRam_? == '\0') {
        in_stack_60 = (undefined1)_UNK_?;
        in_stack_59 = (undefined1)((uint)_UNK_? >> 8);
        in_stack_58 = (undefined2)((uint)_UNK_? >> 0x10);
        func_?();
        cRam_? = '\x01';
      }
      pWVar19 = *(WorldNetwork **)((int)&pMVar15->_1 + 0x4c);
      uVar16 = uStack_13;
      if (pWVar19 != (WorldNetwork *)0x0) {
        pMVar14 = (MVAvatar__Class *)
                  WorldNetwork::WorldNetwork_RemoveLink
                            (pWVar19,(int32_t)pMVar14,
                             (MethodInfo *)
                             CONCAT22(in_stack_58,
                                      CONCAT11(in_stack_59,in_stack_60)));
        if (pMVar14 == (MVAvatar__Class *)0x0) goto code_?;
        pIVar61 = *(Il2CppClass **)((int)&pMVar15->_0 + 0x2c);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pMVar15 = (MVAvatar__Class *)0x0;
        uVar16 = uStack_13;
        if (pIVar61 != (Il2CppClass *)0x0) {
          LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                    ((LogicObjectManagerClient *)pIVar61,(Link_1 *)pMVar14,
                     (IWorldObjectManager *)pMVar62,(MethodInfo *)0x0);
          pOVar43 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar29 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_reset_count_,pOVar43,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar29,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x28,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
      puVar22 = (undefined4 *)func_?();
      pMVar15 = (MVAvatar__Class *)*puVar22;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar63 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      uVar16 = uStack_13;
      if ((pIVar63 != (IEditModeUI *)0x0) &&
         (this_13 = (PlayerInventoryRepository *)func_?(), uVar16 = uStack_13,
         this_13 != (PlayerInventoryRepository *)0x0)) {
        PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
                  (this_13,(int32_t)pMVar15,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar41 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x35,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pFVar64 = (pMVar18->fields)._Friends_k__BackingField, pFVar64 != (FriendList *)0x0)) {
        FriendList::FriendList_AddFriend
                  (pFVar64,(int32_t)pMVar14,iVar41,*piVar17,FriendStatus__Enum_Pending,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x34,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar41 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x36,(MethodInfo *)0x0);
      pFVar65 = (FriendStatus__Enum *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pFVar64 = (pMVar18->fields)._Friends_k__BackingField, pFVar64 != (FriendList *)0x0)) {
        FriendList::FriendList_UpdateFriend
                  (pFVar64,(int32_t)pMVar14,iVar41,*pFVar65,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar18,*piVar17,(int32_t)pMVar14,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar18,*piVar17,(int32_t)pMVar14,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar18,(int32_t)pMVar14,*piVar17,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar15 = unaff_ESI;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar18,*piVar17,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (pMVar15 != (MVAvatar__Class *)0x0) {
      puStack_6 = &stack0xffffff64;
      if (cRam_? == '\0') {
        puStack_6 = &stack0xffffff64;
        func_?();
        cRam_? = '\x01';
      }
      pWVar19 = *(WorldNetwork **)((int)&pMVar15->_1 + 0x4c);
      uVar16 = uStack_13;
      if (pWVar19 != (WorldNetwork *)0x0) {
        unaff_EDI = (MVAvatar__Class *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)0x0);
        pMVar14 = (MVAvatar__Class *)0x0;
        uVar16 = uStack_13;
        if (photonEvent != (EventData *)0x0) {
          pMVar15 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x16,(MethodInfo *)pMVar7);
          pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x14,(MethodInfo *)0x0);
          pMVar14 = unaff_EDI;
          uVar16 = uStack_13;
          if ((unaff_EDI != (MVAvatar__Class *)0x0) && (pOVar43 != (Object *)0x0)) {
            if ((pOVar43->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              in_stack_35.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
              piVar17 = (int32_t *)func_?();
              uVar16 = uStack_13;
              if (pMVar15 == (MVAvatar__Class *)0x0) break;
              if ((((MVNetworkGame__Class *)(pMVar15->_0).image)->_0).element_class ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar66 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                          ((MVWorldObjectClientManagerNetwork *)unaff_EDI,*piVar66,*piVar17,
                           (MethodInfo *)0x0);
                goto code_?;
              }
              func_?();
            }
code_?:
            func_?();
            pMVar7 = pMVar8;
code_?:
            func_?();
            pMVar14 = unaff_EDI;
            pMVar8 = pMVar7;
            uVar16 = uStack_13;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar7 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)photonEvent;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x2f,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pMVar15 = (MVAvatar__Class *)*puVar22;
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        pWVar19 = *(WorldNetwork **)((int)&pMVar14->_1 + 0x4c);
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if ((pWVar19 != (WorldNetwork *)0x0) &&
           (pMVar55 = (MVWorldInventory *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pWVar19,
                                 pMVar20), pMVar8 = pMVar7, uVar16 = uStack_13,
           pMVar55 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
                    (pMVar55,iVar41,(int32_t)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if ((pMVar18 != (MVNetworkGame *)0x0) &&
       (pMVar14 = (MVAvatar__Class *)(pMVar18->fields)._NetworkGameStateListener_k__BackingField,
       pMVar15 = (MVAvatar__Class *)photonEvent, pMStack_57 = pMVar14, puStack_6 = &stack0xffffff64
       , photonEvent != (EventData *)0x0)) {
      puStack_6 = &stack0xffffff64;
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x41,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x43,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x42,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar67 = *piVar17;
        pMVar68 = (MVGameStateType__Enum *)func_?();
        MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                  ((MVNetworkGameStateListener *)pMStack_57,*pMVar68,iVar67,iVar41,0,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x16,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      piVar17 = (int32_t *)func_?();
      iVar41 = *piVar17;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                (iVar41,(IWorldObjectManager *)pMVar62,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      pMVar8 = (MVAvatar__Class *)0x0;
      pMVar15 = unaff_ESI;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pMVar31 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0),
         pMVar15 = unaff_ESI, pMVar14 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13,
         pMVar31 != (MVLocalPlayer *)0x0)) {
        pMVar15 = (MVAvatar__Class *)
                  ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar31,(MethodInfo *)0x0);
        pMVar8 = (MVAvatar__Class *)&UNK_?;
        puVar22 = (undefined4 *)func_?();
        if ((MVAvatar__Class *)*puVar22 == pMVar15) goto code_?;
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if ((pMVar18 != (MVNetworkGame *)0x0) &&
           (pWVar19 = (pMVar18->fields).worldNetwork, pMVar14 = (MVAvatar__Class *)photonEvent,
           pWVar19 != (WorldNetwork *)0x0)) {
          pMVar24 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)0x0);
          _Stack_18 = (_union_154)pMVar24;
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x16,(MethodInfo *)0x0);
          pMVar14 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x46,(MethodInfo *)0x0);
          pMVar15 = (MVAvatar__Class *)0x0;
          uVar16 = uStack_13;
          if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
            piVar17 = (int32_t *)func_?();
            pMVar20 = (MethodInfo *)0x0;
            pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                      ((MVWorldObjectClientManagerNetwork *)_Stack_18,*piVar17,pDVar21,pMVar20);
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    pMStack_57 = pMVar14;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        piVar17 = (int32_t *)func_?();
        iVar67 = *piVar17;
        pPVar69 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)pMStack_57,*pPVar69,iVar67,iVar41,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4a,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4b,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4c,(MethodInfo *)0x0);
      func_?();
      p_Var39 = (_union_154 *)func_?();
      _Stack_18 = *p_Var39;
      func_?();
      pMVar20 = (MethodInfo *)auStack_10;
      in_stack_35 = _Stack_18;
      func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4e,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4f,(MethodInfo *)0x0);
      pfVar70 = (float *)func_?();
      fVar71 = *pfVar70;
      auStack_10._0_4_ = TypeInfo__System__Single;
      puVar22 = (undefined4 *)func_?();
      _Stack_18 = (_union_154)*puVar22;
      puVar22 = (undefined4 *)func_?();
      auStack_10._0_8_ = (ulonglong)(uint)auStack_10._4_4_ << 0x20;
      uVar16 = CONCAT44(_Stack_18,*puVar22);
      func_?();
      pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      uStack_38 = auStack_10._0_8_;
      _Stack_18 = (_union_154)auStack_10._8_4_;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        uStack_13 = uVar16;
        puVar22 = (undefined4 *)func_?();
        pMVar15 = (MVAvatar__Class *)*puVar22;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pWVar19 = *(WorldNetwork **)((int)&pMVar14->_1 + 0x4c);
        uVar16 = uStack_13;
        if (((pWVar19 != (WorldNetwork *)0x0) &&
            (pMVar62 = (MVWorldObjectClientManager *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)0x0),
            uVar16 = uStack_13, pMVar62 != (MVWorldObjectClientManager *)0x0)) &&
           (this_14 = (DayNightCycle *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar62,(int32_t)pMVar15,(MethodInfo *)0x0), uVar16 = uStack_13,
           this_14 != (DayNightCycle *)0x0)) {
          pMVar8 = (MVAvatar__Class *)&UNK_?;
          this_15 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_14,pMVar20);
          uVar16 = uStack_13;
          if (this_15 != (CelestialParam *)0x0) {
            in_stack_35 =
                 (_union_154)
                 MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__;
            this_16 = (MVPickupOwner *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                ((GameObject *)this_15,
                                 MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                                );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar32 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                               ((Object_1 *)this_16,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar32 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
              goto code_?;
            }
            pMVar15 = (MVAvatar__Class *)0x0;
            uVar16 = uStack_13;
            if (this_16 != (MVPickupOwner *)0x0) {
              lookOrigin.z._0_1_ = _Stack_18._0_1_;
              lookOrigin.x = (float)(Il2CppType **)uStack_38;
              lookOrigin.y = (float)uStack_38._4_4_;
              lookOrigin.z._1_1_ = _Stack_18._1_1_;
              lookOrigin.z._2_2_ = _Stack_18._2_2_;
              lookDirection.z = fVar71;
              lookDirection.x = (float)(undefined4)uStack_13;
              lookDirection.y = (float)uStack_13._4_4_;
              MVPickupOwner::MVPickupOwner_SetLineOfFire
                        (this_16,lookOrigin,lookDirection,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    puStack_6 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_6 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_6 = &stack0xffffff64;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
  case MVEventCodes__Enum_UpdatePrototypeScale:
code_?:
    *unaff_FS_OFFSET = uStack_5;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x57,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x58,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar72 = (MVGameMsgType__Enum *)func_?();
      pMVar15 = (MVAvatar__Class *)func_?();
      gameMsgType = *pMVar72;
code_?:
      MVGameControllerBase::MVGameControllerBase_PostGameMsg
                (gameMsgType,(Dictionary_2_System_Object_System_Object_ *)pMVar15,pMVar20);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar15 = (MVAvatar__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      in_stack_35.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x59,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
        func_?();
      }
      piVar17 = (int32_t *)func_?();
      mscorlib.dll::System::Enum::Enum_ToObject_2((Type *)pMVar15,*piVar17,(MethodInfo *)0x0);
      pMVar14 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar73 = (MVTeam__Enum *)func_?();
        team = *pMVar73;
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent(pMVar18,*piVar17,team,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      _Stack_18.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pMStack_34 = (MVPlayer *)*puVar22;
        in_stack_35 = (_union_154)TypeInfo__System__Int32;
        puVar22 = (undefined4 *)func_?();
        pMStack_57 = (MVAvatar__Class *)*puVar22;
        pMVar8 = (MVAvatar__Class *)&UNK_?;
        puVar22 = (undefined4 *)func_?();
        pEVar49 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar22;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar15 = (MVAvatar__Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1
                  ((ObjectLink *)pMVar15,(MethodInfo *)0x0);
        uVar16 = uStack_13;
        if (pMVar15 != (MVAvatar__Class *)0x0) {
          ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedAvatarBodiesFromQuery =
               pEVar49;
          ((Il2CppType *)((int)&pMVar15->_0 + 0x10))->data = (_union_86)pMStack_57;
          ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedItemFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)pMStack_34;
          pWVar19 = *(WorldNetwork **)((int)&pMVar14->_1 + 0x4c);
          if (pWVar19 != (WorldNetwork *)0x0) {
            WorldNetwork::WorldNetwork_AddObjectLink_1
                      (pWVar19,(ObjectLink *)pMVar15,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x3a,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Remove_objectLink_,(MethodInfo *)0x0);
      pWVar19 = *(WorldNetwork **)((int)&pMVar15->_1 + 0x4c);
      uVar16 = uStack_13;
      if (pWVar19 != (WorldNetwork *)0x0) {
        WorldNetwork::WorldNetwork_RemoveObjectLink(pWVar19,(int32_t)pMVar14,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      if (cRam_? == '\0') {
        puStack_6 = &stack0xffffff64;
        func_?();
        cRam_? = '\x01';
      }
      pMVar15 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if ((photonEvent != (EventData *)0x0) &&
         (method_00 = (Int32__Array__Class *)photonEvent,
         pMVar7 = (MVAvatar__Class *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0x16,(MethodInfo *)0x0), uVar16 = uStack_13,
         pMVar7 != (MVAvatar__Class *)0x0)) {
        if ((((MVNetworkGame__Class *)(pMVar7->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        puVar22 = (undefined4 *)func_?();
        _Stack_18 = (_union_154)*puVar22;
        unaff_EDI = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x48,(MethodInfo *)0x0);
        pMStack_57 = (MVAvatar__Class *)TypeInfo__System__Int32;
        if (unaff_EDI == (MVAvatar__Class *)0x0) {
          pMVar15 = (MVAvatar__Class *)0x0;
        }
        else {
          method_00 = TypeInfo__System__Int32;
          pMVar15 = (MVAvatar__Class *)func_?();
          if (pMVar15 == (MVAvatar__Class *)0x0) goto code_?;
        }
        pWVar19 = (pMVar18->fields).worldNetwork;
        pMVar14 = unaff_EDI;
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if ((pWVar19 != (WorldNetwork *)0x0) &&
           (pMVar24 = (MVWorldObjectClientManagerNetwork *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)pWVar19,(MethodInfo *)method_00),
           pMVar8 = pMVar7, uVar16 = uStack_13,
           pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                    (pMVar24,(int32_t)_Stack_18,(Int32__Array *)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (pMVar15 != (MVAvatar__Class *)0x0) {
      puStack_6 = &stack0xffffff64;
      if (cRam_? == '\0') {
        puStack_6 = &stack0xffffff64;
        func_?();
        cRam_? = '\x01';
      }
      uVar16 = uStack_13;
      if ((photonEvent != (EventData *)0x0) &&
         (pMVar7 = (MVAvatar__Class *)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,99,(MethodInfo *)0x0), uVar16 = uStack_13,
         pMVar7 != (MVAvatar__Class *)0x0)) {
        if ((((MVNetworkGame__Class *)(pMVar7->_0).image)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar17 = (int32_t *)func_?();
        pIVar61 = *(Il2CppClass **)((int)&pMVar15->_0 + 0x20);
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if (pIVar61 != (Il2CppClass *)0x0) {
          MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                    ((MVNetworkGame_GameDataQueryManager *)pIVar61,*piVar17,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (pMVar15 != (MVAvatar__Class *)0x0) {
      puStack_6 = &stack0xffffff64;
      if (cRam_? == '\0') {
        puStack_6 = &stack0xffffff64;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = *(UIStack **)((int)&pMVar15->_1 + 0x48);
      pMVar14 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (this_00 != (UIStack *)0x0) {
        bVar32 = UIStack::UIStack_get_StackReady(this_00,(MethodInfo *)0x0);
        if (bVar32 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
code_?:
          this_02 = *(Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                      **)((int)&pMVar15->_1 + 0x54);
          if (this_02 !=
              (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
          {
            mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
            String,System::Object]]::
            Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                      (this_02,(Dictionary_2_System_String_System_Object_ *)pMVar14,
                       MethodInfo__System__Action<IWinningCondition>__Invoke_IWinningCondition_);
          }
          goto code_?;
        }
        this_01 = *(WinningConditionManager **)((int)&pMVar15->_1 + 0x48);
        uVar16 = uStack_13;
        if (this_01 != (WinningConditionManager *)0x0) {
          this_17 = MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_GetForfilledWinningConditions
                              (this_01,(MethodInfo *)pMVar7);
          pMVar14 = (MVAvatar__Class *)0x0;
          uVar16 = uStack_13;
          if (this_17 != (List_1_IWinningCondition_ *)0x0) {
            pOVar43 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_17
                                 ,
                                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                                );
            if (pOVar43 == (Object *)0x0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            pOVar43 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_17
                                 ,
                                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                                );
            if (1 < (int)pOVar43) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0)
              ;
              goto code_?;
            }
            pMVar14 = (MVAvatar__Class *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_17,0,
                                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                                );
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar7 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)photonEvent;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pMVar15 = (MVAvatar__Class *)*puVar22;
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        pWVar19 = *(WorldNetwork **)((int)&pMVar14->_1 + 0x4c);
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if ((pWVar19 != (WorldNetwork *)0x0) &&
           (pMVar24 = (MVWorldObjectClientManagerNetwork *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar19,pMVar20),
           pMVar8 = pMVar7, uVar16 = uStack_13,
           pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
                    (pMVar24,iVar41,(int32_t)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb,(MethodInfo *)0x0);
      func_?();
      pOVar43 = (Object *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x81,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      _Stack_18 = (_union_154)*puVar22;
      pOVar74 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar29 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar43,pOVar74,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar29,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar75 = (Dictionary_2_System_Type_Pool_ *)func_?();
      pTVar28 = (Type *)func_?();
      pMVar14 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pDVar75 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  (pDVar75,pTVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_34 = (MVPlayer *)*puVar22;
        bStack_44 = 0;
        pTVar28 = (Type *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  (pDVar75,pTVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        pMStack_57 = (MVAvatar__Class *)*puVar22;
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)0x0;
        uVar16 = uStack_13;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar76 = (pMVar18->fields)._PlayerController_k__BackingField;
          _Stack_18.methodMetadataHandle =
               (Il2CppMetadataMethodDefinitionHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xfe,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0x8d,(MethodInfo *)0x0);
          pMVar14 = (MVAvatar__Class *)0x0;
          uVar16 = uStack_13;
          if (pMVar76 != (MVLocalObjectController *)0x0) {
            pbVar77 = (byte *)func_?();
            bStack_42 = *pbVar77;
            piVar17 = (int32_t *)func_?();
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar76,*piVar17,(int32_t)pMStack_34,(int32_t)pMStack_57,(uint)bStack_42,
                       (MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    puStack_6 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_6 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_6 = &stack0xffffff64;
      func_?();
    }
    pMVar20 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    pMVar15 = unaff_ESI;
    uVar16 = uStack_13;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)pMVar7);
      puVar22 = (undefined4 *)func_?();
      pMVar15 = (MVAvatar__Class *)*puVar22;
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pMVar62 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar18,pMVar20),
         uVar16 = uStack_13, pMVar62 != (MVWorldObjectClientManager *)0x0)) {
        pMVar15 = (MVAvatar__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar62,(int32_t)pMVar15,(MethodInfo *)0x0);
        pMVar14 = TypeInfo__MVAvatar;
        if ((pMVar15 == (MVAvatar__Class *)0x0) || (iVar26 = func_?(), iVar26 == 0))
        goto code_?;
        pMVar8 = pMVar14;
        iVar26 = func_?();
        uVar16 = uStack_13;
        if (iVar26 != 0) {
          func_?();
          func_?();
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)func_?();
      pTVar28 = (Type *)func_?();
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)pMVar15,pTVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        puVar22 = (undefined4 *)func_?();
        _Stack_18 = (_union_154)*puVar22;
        pMVar20 = (MethodInfo *)&bStack_42;
        bStack_42 = 0;
        pTVar28 = (Type *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)pMVar15,pTVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        piVar17 = (int32_t *)func_?();
        auStack_10._12_4_ = *piVar17;
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if ((pMVar18 != (MVNetworkGame *)0x0) &&
           (pMVar62 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar18,pMVar20),
           pMVar14 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13,
           pMVar62 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar62,(int32_t)_Stack_18,(MethodInfo *)0x0);
          this_18 = (MVSentryGun *)func_?();
          uStack_13 = CONCAT44(this_18,(undefined4)uStack_13);
          pMVar14 = (MVAvatar__Class *)photonEvent;
          uVar16 = uStack_13;
          if (this_18 != (MVSentryGun *)0x0) {
            pMStack_34 = (MVPlayer *)
                         MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                                   (this_18,(MethodInfo *)0x0);
            bStack_44 = 3;
            pTVar28 = (Type *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      ((Dictionary_2_System_Type_Pool_ *)pMVar15,pTVar28,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            method_01 = TypeInfo__System__Int32;
            piVar17 = (int32_t *)func_?();
            pDStack_36 = (Dictionary_2_System_Object_System_Object_ *)*piVar17;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            p_Var61 = (_union_155 *)func_?();
            _Stack_38 = *p_Var61;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x3a,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?();
            pMStack_57 = (MVAvatar__Class *)*puVar22;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x5c,(MethodInfo *)0x0);
            puVar22 = (undefined4 *)func_?();
            _Stack_18 = (_union_154)*puVar22;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x23,(MethodInfo *)0x0);
            in_stack_35 = (_union_154)TypeInfo__System__Int32;
            puVar22 = (undefined4 *)func_?();
            uStack_38 = CONCAT44(*puVar22,(Il2CppType **)uStack_38);
            pMVar18 = (this->fields).networkGame;
            pMVar15 = (MVAvatar__Class *)this;
            pMVar14 = (MVAvatar__Class *)photonEvent;
            uVar16 = uStack_13;
            if ((pMVar18 != (MVNetworkGame *)0x0) &&
               (pWVar19 = (pMVar18->fields).worldNetwork, pMVar15 = (MVAvatar__Class *)this,
               pMVar14 = (MVAvatar__Class *)photonEvent, pWVar19 != (WorldNetwork *)0x0)) {
              WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                        (pWVar19,(int32_t)_Stack_38,0,1,(int32_t)pMStack_34,(int32_t)pDStack_36,
                         (int32_t)pMStack_57,(int32_t)_Stack_18,in_stack_78);
              pMVar18 = (this->fields).networkGame;
              pMVar15 = (MVAvatar__Class *)this;
              pMVar14 = (MVAvatar__Class *)photonEvent;
              uVar16 = uStack_13;
              if ((pMVar18 != (MVNetworkGame *)0x0) &&
                 (pMVar62 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                      (pMVar18,(MethodInfo *)method_01),
                 pMVar15 = (MVAvatar__Class *)this, pMVar14 = (MVAvatar__Class *)photonEvent,
                 uVar16 = uStack_13, pMVar62 != (MVWorldObjectClientManager *)0x0)) {
                _Stack_38.genericMethod =
                     (Il2CppGenericMethod *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar62,(int32_t)pDStack_36,(MethodInfo *)0x0);
                if (TypeInfo__MVNetworkGame__EventHandling->static_fields->__f__am_cache0 ==
                    (MVWorldObjectClient_CallBackDelegate *)0x0) {
                  pMVar8 = (MVAvatar__Class *)TypeInfo__MVWorldObjectClient__CallBackDelegate;
                  this_19 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_19,(Object *)0x0,
                             MethodInfo__MVNetworkGame__EventHandling___HandleEvent_m__0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__MVNetworkGame__EventHandling->static_fields->__f__am_cache0 =
                       (MVWorldObjectClient_CallBackDelegate *)this_19;
                }
                pMVar15 = (MVAvatar__Class *)this;
                pMVar14 = (MVAvatar__Class *)photonEvent;
                uVar16 = uStack_13;
                if ((MVWorldObject *)_Stack_38.genericMethod != (MVWorldObject *)0x0) {
                  func_?();
                  pMVar18 = (this->fields).networkGame;
                  pMVar15 = (MVAvatar__Class *)this;
                  pMVar14 = (MVAvatar__Class *)photonEvent;
                  uVar16 = uStack_13;
                  if (pMVar18 != (MVNetworkGame *)0x0) {
                    pMVar76 = (pMVar18->fields)._PlayerController_k__BackingField;
                    _Stack_38.genericMethod =
                         (Il2CppGenericMethod *)
                         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(photonEvent,0xfe,(MethodInfo *)0x0);
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x8d,(MethodInfo *)0x0);
                    pMVar15 = (MVAvatar__Class *)0x0;
                    pMVar14 = (MVAvatar__Class *)photonEvent;
                    uVar16 = uStack_13;
                    if (pMVar76 != (MVLocalObjectController *)0x0) {
                      pbVar77 = (byte *)func_?();
                      bStack_40 = *pbVar77;
                      piVar17 = (int32_t *)func_?();
                      MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                                (pMVar76,*piVar17,(int32_t)pDStack_36,auStack_10._12_4_,
                                 (uint)bStack_40,(MethodInfo *)0x0);
                      func_?();
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
  case MVEventCodes__Enum_Reward:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x8f,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      uVar37 = *puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x91,(MethodInfo *)0x0);
      puVar9 = (undefined1 *)func_?();
      uVar79 = *puVar9;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x90,(MethodInfo *)0x0);
      p_Var39 = (_union_154 *)func_?();
      _Var8 = (_union_154)p_Var39->rgctx_data;
      uStack_13 = CONCAT44(uVar37,(undefined4)uStack_13);
      pOVar43 = (Object *)func_?();
      bStack_40 = uVar79;
      pOVar74 = (Object *)func_?();
      uStack_38._4_4_ = (_union_154)(_union_154)_Var8.rgctx_data;
      arg2 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar29 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,pOVar43,pOVar74,arg2,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar29,(MethodInfo *)0x0);
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
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pBVar56 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar15 = unaff_ESI;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pWVar19 = (pMVar18->fields).worldNetwork, pMVar15 = unaff_ESI,
         pWVar19 != (WorldNetwork *)0x0)) {
        this_20 = (RuntimeEventManagerNetwork *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pWVar19,(MethodInfo *)0x0);
        pMVar15 = (MVAvatar__Class *)func_?();
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)pMVar15,pBVar56,(MethodInfo *)0x0);
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create((BytePacker *)pMVar15,(MethodInfo *)0x0);
        pMVar14 = (MVAvatar__Class *)0x0;
        uVar16 = uStack_13;
        if (this_20 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                    (this_20,runtimeEvent,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (((pMVar18 != (MVNetworkGame *)0x0) &&
        (pWVar19 = (pMVar18->fields).worldNetwork, pMVar15 = unaff_ESI, puStack_6 = &stack0xffffff64
        , pWVar19 != (WorldNetwork *)0x0)) &&
       (puStack_6 = &stack0xffffff64,
       this_21 = (RuntimeEventManager *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pWVar19,(MethodInfo *)0x0), pMVar15 = unaff_ESI, uVar16 = uStack_13,
       this_21 != (RuntimeEventManager *)0x0)) {
      RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_21,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x59,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_57 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9f,(MethodInfo *)0x0);
      puVar9 = (undefined1 *)func_?();
      _Stack_18._0_1_ = *puVar9;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa0,(MethodInfo *)0x0);
      pIStack_11 = TypeInfo__System__Int32;
      piVar17 = (int32_t *)func_?();
      pDStack_36 = (Dictionary_2_System_Object_System_Object_ *)*piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa1,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMStack_34 = (MVPlayer *)*puVar22;
      in_stack_35.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xa2,(MethodInfo *)0x0);
      pbVar80 = (bool *)func_?();
      bVar32 = *pbVar80;
      pMVar8 = (MVAvatar__Class *)&UNK_?;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa3,(MethodInfo *)0x0);
      pcVar81 = (char *)func_?();
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (*pcVar81 == '\0') {
        if ((pMVar18 != (MVNetworkGame *)0x0) &&
           (pGVar48 = (pMVar18->fields).gameStatCounterManager,
           pGVar48 != (GameStatCounterManager *)0x0)) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                    (pGVar48,(GameStatCounterType__Enum)_Stack_18,(int32_t)pMVar14,
                     (MVTeam__Enum)pMStack_57,(int32_t)pDStack_36,(int32_t)pMStack_34,bVar32,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
      else if ((pMVar18 != (MVNetworkGame *)0x0) &&
              (pGVar48 = (pMVar18->fields).gameStatCounterManager,
              pGVar48 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                  (pGVar48,(GameStatCounterType__Enum)_Stack_18,(MVTeam__Enum)pMStack_57,
                   (int32_t)pMVar14,(int32_t)pDStack_36,(int32_t)pMStack_34,bVar32,(MethodInfo *)0x0
                  );
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar56 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar15 = unaff_ESI;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pGVar48 = (pMVar18->fields).gameStatCounterManager, pMVar15 = unaff_ESI,
         pGVar48 != (GameStatCounterManager *)0x0)) {
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                  (pGVar48,pBVar56,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      piVar17 = (int32_t *)func_?();
      iVar41 = *piVar17;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa5,(MethodInfo *)0x0);
      pBVar56 = (Byte__Array *)func_?();
      pMVar14 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar14,pBVar56,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)pMVar15,(BytePacker *)pMVar14,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pMVar15,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (this_03 = (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_03 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                  (this_03,iVar41,(MvAvatarMetaData *)pMVar15,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar7 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)&UNK_?;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa9,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pMVar15 = (MVAvatar__Class *)*puVar22;
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
        pMVar30 = (MVPlayerContainer *)
                  ((VirtualInvokeData *)((int)&pMVar14->vtable + 0x28))->methodPtr;
        pMVar8 = pMVar7;
        uVar16 = uStack_13;
        if ((pMVar30 != (MVPlayerContainer *)0x0) &&
           (pMVar82 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar30,iVar41,pMVar20),
           pMVar8 = pMVar7, uVar16 = uStack_13, pMVar82 != (MVPlayer *)0x0)) {
          MVPlayer::MVPlayer_set_Level(pMVar82,(int32_t)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar80 = (bool *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar15 = unaff_ESI;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pMVar83 = (pMVar18->fields)._GameCoinManager_k__BackingField, pMVar15 = unaff_ESI,
         pMVar83 != (MVGameCoinManager *)0x0)) {
        MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged(pMVar83,*pbVar80,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,199,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,200,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)func_?();
      uVar16 = uStack_13;
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
            (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) goto code_?;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_04 = (Action_2_Int32_Object_ *)
                  TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
        uVar16 = uStack_13;
        if (this_04 != (Action_2_Int32_Object_ *)0x0) {
          System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                    (this_04,(int32_t)pMVar14,(Object *)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x5d,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,1,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,1,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetItemCategories
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = (MVAvatar__Class *)this;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      pMVar15 = (MVAvatar__Class *)this;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)func_?();
      pMVar20 = (MethodInfo *)0x0;
      pBVar56 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar15,pBVar56,pMVar20);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x85,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)TypeInfo__MV__Common__QueryType;
      puVar9 = (undefined1 *)func_?();
      uStack_13._0_5_ = CONCAT14(*puVar9,(undefined4)uStack_13);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,100,(MethodInfo *)0x0);
      pbVar80 = (bool *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                  (pMVar18,(BytePacker *)pMVar15,(QueryType__Enum)uStack_13._4_4_,*pbVar80,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetActorReady:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        pMVar7 = (MVAvatar__Class *)&UNK_?;
        pMVar8 = (MVAvatar__Class *)TypeInfo__MVGameControllerBase;
        func_?();
      }
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar15 = unaff_ESI;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pMVar31 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0),
         pMVar15 = unaff_ESI, pMVar14 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13,
         pMVar31 != (MVLocalPlayer *)0x0)) {
        pMVar15 = (MVAvatar__Class *)
                  ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar31,
                             (MethodInfo *)pMVar7);
        puVar22 = (undefined4 *)func_?();
        if ((MVAvatar__Class *)*puVar22 == pMVar15) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
          MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
          pMVar18 = (this->fields).networkGame;
          pMVar15 = (MVAvatar__Class *)this;
          pMVar14 = (MVAvatar__Class *)photonEvent;
          uVar16 = uStack_13;
          if ((pMVar18 != (MVNetworkGame *)0x0) &&
             (pMVar83 = (pMVar18->fields)._GameCoinManager_k__BackingField,
             pMVar15 = (MVAvatar__Class *)this, pMVar14 = (MVAvatar__Class *)photonEvent,
             pMVar83 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_Reset(pMVar83,pMVar18,(MethodInfo *)pMVar8);
            pMVar18 = (this->fields).networkGame;
            pMVar15 = (MVAvatar__Class *)this;
            pMVar14 = (MVAvatar__Class *)photonEvent;
            uVar16 = uStack_13;
            if (pMVar18 != (MVNetworkGame *)0x0) {
              pMVar84 = (pMVar18->fields).operationRequests;
              pMVar15 = (MVAvatar__Class *)0x0;
              pMVar14 = (MVAvatar__Class *)photonEvent;
              if (pMVar84 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                this_22 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
                System.Core.dll::System::Collections::Generic::
                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                          (this_22,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                pMVar15 = (MVAvatar__Class *)(pMVar84->fields).peer;
                if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar14 = (MVAvatar__Class *)photonEvent;
                uVar16 = uStack_13;
                if (pMVar15 != (MVAvatar__Class *)0x0) {
                  (**(code **)&((MVNetworkGame__Class *)(pMVar15->_0).image)[1]._0.byval_arg.attrs)
                            ();
                  goto code_?;
                }
              }
            }
          }
        }
        else {
code_?:
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          pMVar14 = (MVAvatar__Class *)photonEvent;
          uVar16 = uStack_13;
          if (pMVar18 != (MVNetworkGame *)0x0) {
            pMVar30 = (pMVar18->fields).playerContainer;
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xfe,(MethodInfo *)0x0);
            pMVar15 = (MVAvatar__Class *)0x0;
            pMVar14 = (MVAvatar__Class *)photonEvent;
            uVar16 = uStack_13;
            if (pMVar30 != (MVPlayerContainer *)0x0) {
              piVar17 = (int32_t *)func_?();
              MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                        (pMVar30,*piVar17,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x33,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    pMVar14 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,7,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        pcVar81 = (char *)func_?();
        bVar32 = *pcVar81 == '\0';
        pMVar20 = (MethodInfo *)0x0;
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar14,pDVar21,bVar32,pMVar20);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x83,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pMVar8 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                  ((MVNetworkGame *)pMVar15,pDVar21,(MethodInfo *)pMVar8);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xa4,(MethodInfo *)0x0);
      pBVar56 = (Byte__Array *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar14 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)pMVar14,pBVar56,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)pMVar15,(BytePacker *)pMVar14,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        (pMVar18->fields)._AvatarMetaDataWoMap_k__BackingField = (MvAvatarMetaDataWoMap *)pMVar15;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetActiveAvatar:
    pMVar15 = (MVAvatar__Class *)(this->fields).networkGame;
    puStack_6 = &stack0xffffff64;
    if ((photonEvent != (EventData *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x16,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pUVar85 = (UIPushOption__Enum *)func_?();
      obj = *pUVar85;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_05 = (Action_1_UIPushOption_ *)(pMVar15->vtable).Equals.methodPtr;
      if (this_05 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_05,obj,MethodInfo__System__Action<int>__Invoke_int_);
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    puStack_6 = &stack0xffffff64;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_6 = &stack0xffffff64, (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_6 = &stack0xffffff64;
      func_?();
    }
    pMVar84 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar15 = (MVAvatar__Class *)0x0;
    uVar16 = uStack_13;
    if (pMVar84 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar86 = (pMVar84->fields).peer;
      pMVar14 = (MVAvatar__Class *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pMVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar15 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pPVar86 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar86->klass->vtable).SendOperation.method)();
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    puStack_6 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_6 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_6 = &stack0xffffff64;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    pMVar15 = (MVAvatar__Class *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pMVar15,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pMVar14 = (MVAvatar__Class *)func_?();
    uVar16 = uStack_13;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xfe,(MethodInfo *)0x0);
      puVar22 = (undefined4 *)func_?();
      uStack_13 = CONCAT44(*puVar22,(undefined4)uStack_13);
      value_00 = (CrossPlatformInputManager_VirtualButton *)func_?();
      uVar16 = uStack_13;
      if (pMVar15 != (MVAvatar__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)pMVar15,(String *)pMVar14,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar20 = (MethodInfo *)0x0;
        gameMsgType = MVGameMsgType__Enum_UserJoined;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar87 = (pMVar18->fields).logicObjectManagerClientWrapper;
      pMVar15 = (MVAvatar__Class *)0x0;
      puStack_6 = &stack0xffffff64;
      if ((pMVar87 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
         (pMVar15 = (MVAvatar__Class *)(pMVar87->fields).logicEventQueue,
         puStack_6 = &stack0xffffff64, pMVar15 != (MVAvatar__Class *)0x0)) {
        puStack_6 = &stack0xffffff64;
        if (cRam_? == '\0') {
          puStack_6 = &stack0xffffff64;
          func_?();
          cRam_? = '\x01';
        }
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if ((photonEvent != (EventData *)0x0) &&
           (pMVar7 = (MVAvatar__Class *)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0),
           pMVar14 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13,
           pMVar7 != (MVAvatar__Class *)0x0)) {
          unaff_EDI = (MVAvatar__Class *)photonEvent;
          if ((((MVNetworkGame__Class *)(pMVar7->_0).image)->_0).element_class !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar17 = (int32_t *)func_?();
          this_07 = (Dictionary_2_System_Int32_System_Object_ *)
                    ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedItemFromQuery;
          iVar41 = *piVar17;
          pMVar14 = (MVAvatar__Class *)photonEvent;
          pMVar8 = pMVar7;
          uVar16 = uStack_13;
          if (this_07 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
            bVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                               (this_07,iVar41,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                               );
            pMVar8 = pMVar7;
            if (bVar32 == 0) {
              uStack_13 = CONCAT44(((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->
                                   ReceivedItemFromQuery,(undefined4)uStack_13);
              pQVar88 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
              uStack_38 = CONCAT44(pQVar88,(Il2CppType **)uStack_38);
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package___ctor
                        (pQVar88,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                        );
              pMVar14 = (MVAvatar__Class *)photonEvent;
              pMVar8 = pMVar7;
              uVar16 = uStack_13;
              if (uStack_13._4_4_ == (MVAvatar__Class *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)uStack_13._4_4_,iVar41,
                         (Object *)uStack_38._4_4_,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                        );
              pMVar8 = pMVar7;
            }
            this_08 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedItemFromQuery;
            pMVar14 = (MVAvatar__Class *)photonEvent;
            uVar16 = uStack_13;
            if ((this_08 !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
               (pQVar88 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (this_08,iVar41,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                    ), pMVar14 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13,
               pQVar88 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0)) {
              System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Enqueue
                        (pQVar88,(SmoothPhysicsMovement_Package *)photonEvent,
                         MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        );
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = (MVAvatar__Class *)0x0;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      pMVar87 = (pMVar18->fields).logicObjectManagerClientWrapper;
      pMVar15 = (MVAvatar__Class *)0x0;
      puStack_6 = &stack0xffffff64;
      if (pMVar87 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        puStack_6 = &stack0xffffff64;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar87,(MethodInfo *)0x0);
        this_06 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)(pMVar87->fields).updateEvaluatorStep;
        pMVar15 = (MVAvatar__Class *)0x0;
        uVar16 = uStack_13;
        if (this_06 !=
            (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)0x0) {
          pOVar43 = System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                    ::Single,System::Object]::
                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                              (this_06,(MethodInfo *)0x0);
          MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                    ((MVNetworkGame_UpdateEvaluator *)this_06,(int32_t)(pOVar43 + 0x7d),
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    puStack_6 = &stack0xffffff64;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_6 = &stack0xffffff64, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      puStack_6 = &stack0xffffff64;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    uVar16 = uStack_13;
    if (((pMVar18 != (MVNetworkGame *)0x0) &&
        (pMVar15 = (MVAvatar__Class *)(pMVar18->fields).logicObjectManagerClientWrapper,
        photonEvent != (EventData *)0x0)) &&
       (Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)pMVar7), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)&UNK_?;
      piVar17 = (int32_t *)func_?();
      this_09 = *(MVNetworkGame_UpdateEvaluator **)
                 &((Il2CppType *)((int)&pMVar15->_0 + 0x10))->attrs;
      uVar16 = uStack_13;
      if (this_09 != (MVNetworkGame_UpdateEvaluator *)0x0) {
        MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
                  (this_09,*piVar17,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = (MVAvatar__Class *)0x0;
    puStack_6 = &stack0xffffff64;
    if (((pMVar18 != (MVNetworkGame *)0x0) &&
        (pMVar15 = (MVAvatar__Class *)(pMVar18->fields).logicObjectManagerClientWrapper,
        puStack_6 = &stack0xffffff64, photonEvent != (EventData *)0x0)) &&
       (puStack_6 = &stack0xffffff64,
       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                 (photonEvent,0x23,(MethodInfo *)0x0), uVar16 = uStack_13,
       pMVar15 != (MVAvatar__Class *)0x0)) {
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
      puVar22 = (undefined4 *)func_?();
      pMVar14 = (MVAvatar__Class *)*puVar22;
      pEVar49 = ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedAvatarBodiesFromQuery;
      while ((uVar16 = uStack_13, pEVar49 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0
             && (this_10 = (pEVar49->fields)._.prev, this_10 != (MulticastDelegate *)0x0))) {
        pIVar45 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                  KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                  KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                            ((KogamaSettingNumericBase_1_System_Single_ *)this_10,(MethodInfo *)0x0)
        ;
        if ((int)pMVar14 <= (int)pIVar45) goto code_?;
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                  ((MVNetworkGame_LogicObjectManagerClientWrapper *)pMVar15,(MethodInfo *)0x0);
        pEVar49 = ((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->ReceivedAvatarBodiesFromQuery;
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x48,(MethodInfo *)0x0);
      pMVar20 = (MethodInfo *)&UNK_?;
      pMVar15 = (MVAvatar__Class *)func_?();
      pMVar18 = (this->fields).networkGame;
      pMVar14 = (MVAvatar__Class *)this;
      uVar16 = uStack_13;
      if (((pMVar18 != (MVNetworkGame *)0x0) &&
          (pMVar62 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar18,pMVar20),
          pMVar14 = (MVAvatar__Class *)this, uVar16 = uStack_13, pMVar15 != (MVAvatar__Class *)0x0))
         && (iVar41 = func_?(), pMVar14 = (MVAvatar__Class *)this, uVar16 = uStack_13,
            pMVar62 != (MVWorldObjectClientManager *)0x0)) {
        this_23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar62,iVar41,(MethodInfo *)pMVar18);
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)this;
        uVar16 = uStack_13;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          pMVar62 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar18,(MethodInfo *)0x0);
          iVar41 = func_?();
          pMVar14 = (MVAvatar__Class *)0x0;
          uVar16 = uStack_13;
          if (pMVar62 != (MVWorldObjectClientManager *)0x0) {
            pMVar14 = (MVAvatar__Class *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar62,iVar41,in_stack_47);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (this_23 == (MVWorldObject *)0x0) goto code_?;
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            uVar16 = uStack_13;
            if (pMVar14 != (MVAvatar__Class *)0x0) {
              pMVar15 = (MVAvatar__Class *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pMVar14,(MethodInfo *)0x0);
              pMVar8 = (MVAvatar__Class *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items
                                  ((Collection_1_VoxelHit_ *)this_23,(MethodInfo *)0x0);
              if (pMVar15 != pMVar8) goto code_?;
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              pMVar8 = pMVar14;
              iVar26 = func_?();
              uVar16 = uStack_13;
              if (iVar26 != 0) {
                bVar32 = 0x29;
                pMVar7 = pMVar14;
                this_24 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle(this_24,bVar32,(MethodInfo *)pMVar7);
                pMVar18 = (this->fields).networkGame;
                uVar16 = uStack_13;
                if ((pMVar18 != (MVNetworkGame *)0x0) &&
                   (pMVar76 = (pMVar18->fields)._PlayerController_k__BackingField,
                   pMVar76 != (MVLocalObjectController *)0x0)) {
                  MVLocalObjectController::
                  MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                            (pMVar76,1,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_XPReward:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if ((pMVar18 != (MVNetworkGame *)0x0) &&
       (puStack_6 = &stack0xffffff64,
       pMVar14 = (MVAvatar__Class *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0),
       pMVar15 = (MVAvatar__Class *)photonEvent, uVar16 = uStack_13, photonEvent != (EventData *)0x0
       )) {
      pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xdc,(MethodInfo *)0x0);
      uStack_38 = CONCAT44(pOVar43,(Il2CppType **)uStack_38);
      pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xdb,(MethodInfo *)0x0);
      uStack_13 = CONCAT44(pOVar43,(undefined4)uStack_13);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x55,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd1,(MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar14 != (MVAvatar__Class *)0x0) {
        puVar22 = (undefined4 *)func_?();
        pIStack_11 = TypeInfo__System__Int32;
        pMVar15 = (MVAvatar__Class *)*puVar22;
        piVar17 = (int32_t *)func_?();
        iVar41 = *piVar17;
        puVar9 = (undefined1 *)func_?();
        uStack_13._0_5_ = CONCAT14(*puVar9,(undefined4)uStack_13);
        in_stack_35 = uStack_38._4_4_;
        puVar22 = (undefined4 *)func_?();
        uStack_38 = CONCAT44(*puVar22,(Il2CppType **)uStack_38);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
          func_?();
        }
        bVar32 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
        if (bVar32 == 0) goto code_?;
        uVar16 = uStack_13;
        if ((String *)pMVar14->static_fields != (String *)0x0) {
          XPProgress::XPProgress_Update
                    ((XPProgress *)pMVar14->static_fields,(int32_t)((ulonglong)uStack_38 >> 0x20),
                     (XPRewardType__Enum)uStack_13._4_4_,iVar41,(int32_t)pMVar15,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xd0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      pbVar80 = (bool *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_set_GetProfileMetaDataOk
                (*pbVar80,(MethodInfo *)0x0);
      bVar32 = FirstTimeEventManager::FirstTimeEventManager_get_GetProfileMetaDataOk
                         ((MethodInfo *)0x0);
      if (bVar32 == 0) goto code_?;
      pMVar8 = (MVAvatar__Class *)&UNK_?;
      pOVar43 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xcf,(MethodInfo *)0x0);
      uStack_13 = CONCAT44(pOVar43,(undefined4)uStack_13);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      in_stack_35.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
      pMVar53 = (MethodInfo *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          ((String *)pMVar53,pMVar20);
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      pMVar15 = (MVAvatar__Class *)0x0;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pXVar52 != (XPLevelLimits *)0x0) {
        pFVar89 = (FirstTimeState *)(pXVar52->fields)._NextXP_k__BackingField;
        uStack_13._4_4_ = (MVAvatar__Class *)pFVar89;
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)uStack_13._4_4_,(MethodInfo *)0x0);
        uStack_13._4_4_ =
             (MVAvatar__Class *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar8 = uStack_13._4_4_;
        pSVar29 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar29,pMVar53);
        value_01 = pXVar52[1].klass;
        uStack_13 = CONCAT44(value_01,(undefined4)uStack_13);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
          value_01 = (XPLevelLimits__Class *)uStack_13._4_4_;
        }
        MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier
                  ((float)value_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_25 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xc4,(MethodInfo *)0x0);
        pMVar15 = (MVAvatar__Class *)0x0;
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if (this_25 != (GoldRewardManager *)0x0) {
          pbVar80 = (bool *)func_?();
          GoldRewardManager::GoldRewardManager_Initialize(this_25,*pbVar80,(MethodInfo *)0x0);
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    (photonEvent,0xc4,(MethodInfo *)0x0);
          func_?();
          pOVar43 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar29 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral__bool_photonEvent__byte_MVParame,pOVar43,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar29,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = (MethodInfo *)0x0;
      pSVar29 = (String *)func_?();
      pSVar29 = mscorlib.dll::System::String::String_Concat_2
                          (StringLiteral_Server_error__,pSVar29,pMVar20);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_Warning,pSVar29,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pDVar75 = (Dictionary_2_System_Type_Pool_ *)func_?();
      pMVar15 = unaff_ESI;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pDVar75 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  (pDVar75,(Type *)StringLiteral_V,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pbVar80 = (bool *)func_?();
        bVar32 = *pbVar80;
        pMVar18 = (this->fields).networkGame;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        pMVar15 = (MVAvatar__Class *)0x0;
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          piVar17 = (int32_t *)func_?();
          iVar41 = *piVar17;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_11 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                    OnSayChatIndicatorVisibilityChange;
          if (this_11 != (Action_2_Int32_Boolean_ *)0x0) {
            System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
                      (this_11,iVar41,bVar32,
                       MethodInfo__System__Action<int,_bool>__Invoke_int__bool_);
          }
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar29 = (String *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar32 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar29,(MethodInfo *)0x0);
      if (bVar32 != 0) goto code_?;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar29,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      pMVar15 = (MVAvatar__Class *)0x0;
      uVar16 = uStack_13;
      if (pXVar52 != (XPLevelLimits *)0x0) {
        value = (PlayerPlanetData *)(pXVar52->fields)._PrevXP_k__BackingField;
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        GamePassesManager::GamePassesManager_set_PlayerPlanetData(value,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator =
             (PlayerTierStateCalculator *)(pXVar52->fields)._NextXP_k__BackingField;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar14 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pMVar15 = (MVAvatar__Class *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pMVar15,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)pMVar15,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (pMVar30 = (pMVar18->fields).playerContainer, pMVar30 != (MVPlayerContainer *)0x0)) {
        pMVar14 = (MVAvatar__Class *)
                  MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar30,(MethodInfo *)0x0);
        uStack_13 = CONCAT44(pMVar14,(undefined4)uStack_13);
        uVar16 = uStack_13;
        if (pMVar14 != (MVAvatar__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          *(MVAvatar__Class **)((int)&pMVar14->_0 + 0x48) = pMVar15;
          uVar16 = uStack_13;
          if (pMVar15 != (MVAvatar__Class *)0x0) {
            iVar41 = (int32_t)((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->
                              ReceivedItemFromQuery;
            eventCode = CONCAT31(eventCode._1_3_,*(undefined1 *)((int)&pMVar15->_0 + 0x20));
            this_26 = (PlayerPlanetDataRemote *)func_?();
            MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
            PlayerPlanetDataRemote__ctor_1(this_26,iVar41,eventCode,(MethodInfo *)0x0);
            *(PlayerPlanetDataRemote **)((int)uStack_13._4_4_ + 0xc) = this_26;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pMVar15 = (MVAvatar__Class *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pMVar15,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar14 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        uVar16 = uStack_13;
        if (pMVar14 != (MVAvatar__Class *)0x0) {
          pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
          piVar17 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar14,*piVar17,(MethodInfo *)0x0);
          uVar16 = uStack_13;
          if (pMVar82 != (MVPlayer *)0x0) {
            LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                      ((LockCursorManager3DMode *)pMVar82,(Action_1_Boolean_ *)pMVar15,
                       (MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
        func_?();
      }
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pXVar52,(MethodInfo *)0x0);
      if (((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) {
        uVar90 = (TypeInfo__UnityEngine__Debug->_1).cctor_started;
joined_?:
        if (uVar90 == 0) {
code_?:
          func_?();
        }
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pXVar52,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar14 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar15 = (MVAvatar__Class *)
                MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar29,(MethodInfo *)pMVar15);
      uVar16 = uStack_13;
      if (((pXVar52 != (XPLevelLimits *)0x0) &&
          (pMVar18 = (this->fields).networkGame, pMVar18 != (MVNetworkGame *)0x0)) &&
         (pLVar91 = (pMVar18->fields).levelRewardsManager, pLVar91 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                  (pLVar91,(Dictionary_2_System_Int32_System_Int32_ *)
                           (pXVar52->fields)._PrevXP_k__BackingField,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pMVar14 = (MVAvatar__Class *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar15 = (MVAvatar__Class *)
                MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar29,(MethodInfo *)pMVar15);
      pMVar18 = (this->fields).networkGame;
      uVar16 = uStack_13;
      if (((pMVar18 != (MVNetworkGame *)0x0) &&
          (pLVar91 = (pMVar18->fields).levelRewardsManager, pXVar52 != (XPLevelLimits *)0x0)) &&
         (pLVar91 != (LevelRewardsManager *)0x0)) {
        LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                  (pLVar91,(pXVar52->fields)._PrevXP_k__BackingField,
                   (pXVar52->fields)._NextXP_k__BackingField,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
      ;
      pSVar29 = (String *)func_?();
      message = (PlayerTierStateCalculator *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
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
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
      ;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      GamePassesProjectEarningsManager::GamePassesProjectEarningsManager_UpdateProjectEarningReport
                ((ProjectEarningsReport *)pXVar52,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
      ;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
        func_?();
      }
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pXVar52,(MethodInfo *)0x0);
      if (((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) {
        uVar90 = (TypeInfo__UnityEngine__Debug->_1).cctor_started;
        goto joined_?;
      }
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
      ;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      SubscriberRewardDataManager::SubscriberRewardDataManager_set_VatValues
                ((KogamaVatValues *)pXVar52,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      piVar17 = (int32_t *)func_?();
      SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                (*piVar17,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar18 = (this->fields).networkGame;
    pMVar15 = (MVAvatar__Class *)this;
    puStack_6 = &stack0xffffff64;
    if (pMVar18 != (MVNetworkGame *)0x0) {
      puStack_6 = &stack0xffffff64;
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar18,photonEvent,(MethodInfo *)0x0);
      pMVar18 = (this->fields).networkGame;
      pMVar8 = (MVAvatar__Class *)0x0;
      pMVar15 = (MVAvatar__Class *)this;
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if ((pMVar18 != (MVNetworkGame *)0x0) &&
         (MVNetworkGame::MVNetworkGame_PlayModeSetup(pMVar18,photonEvent,(MethodInfo *)0x0),
         pMVar15 = (MVAvatar__Class *)this, pMVar14 = (MVAvatar__Class *)photonEvent,
         uVar16 = uStack_13, (this->fields).networkGame != (MVNetworkGame *)0x0))
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      pVVar92 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          ((Vector3 *)(auStack_10 + 0x14),(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      uStack_13._0_4_ = pVVar92->x;
      uStack_13._4_4_ = (MVAvatar__Class *)pVVar92->y;
      fVar71 = pVVar92->z;
      pQVar93 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff74,(photonEvent->fields).Parameters,
                           (MethodInfo *)0x0);
      auStack_10._16_4_ = pQVar93->x;
      auStack_10._20_4_ = pQVar93->y;
      uStack_38._0_4_ = (Il2CppType **)pQVar93->z;
      uStack_38._4_4_ = (_union_154)pQVar93->w;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar14 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        uVar16 = uStack_13;
        if (pMVar14 != (MVAvatar__Class *)0x0) {
          pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
          piVar17 = (int32_t *)func_?();
          this_27 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                    MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)pMVar14,*piVar17,(MethodInfo *)0x0);
          uVar16 = uStack_13;
          if (this_27 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
            this_28 = (SpawnRolesManager *)
                      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                      TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                                (this_27,(MethodInfo *)0x0);
            Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0xbf,(MethodInfo *)0x0);
            pMVar14 = (MVAvatar__Class *)0x0;
            uVar16 = uStack_13;
            if (this_28 != (SpawnRolesManager *)0x0) {
              piVar17 = (int32_t *)func_?();
              position.z = fVar71;
              position.x = (float)(undefined4)uStack_13;
              position.y = (float)uStack_13._4_4_;
              rotation.y = (float)auStack_10._20_4_;
              rotation.x = (float)auStack_10._16_4_;
              rotation.z = (float)(Il2CppType **)uStack_38;
              rotation.w = (float)uStack_38._4_4_;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_28,*piVar17,position,rotation,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    pMVar15 = unaff_ESI;
    pMVar14 = (MVAvatar__Class *)photonEvent;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar15 = (MVAvatar__Class *)
                MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pXVar52 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                          (pSVar29,(MethodInfo *)pMVar15);
      this_29 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      uStack_13 = CONCAT44(this_29,(undefined4)uStack_13);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_29,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar14 = (MVAvatar__Class *)photonEvent;
      uVar16 = uStack_13;
      if (pMVar18 != (MVNetworkGame *)0x0) {
        pMVar15 = (MVAvatar__Class *)(pMVar18->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0xfe,(MethodInfo *)0x0);
        pMVar14 = (MVAvatar__Class *)photonEvent;
        uVar16 = uStack_13;
        if (pMVar15 != (MVAvatar__Class *)0x0) {
          pMVar8 = (MVAvatar__Class *)TypeInfo__System__Int32;
          piVar17 = (int32_t *)func_?();
          pMVar82 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)pMVar15,*piVar17,(MethodInfo *)0x0);
          pMVar14 = (MVAvatar__Class *)photonEvent;
          uVar16 = uStack_13;
          if (pMVar82 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar82,(ISpawnRoleChangeHandler *)uStack_13._4_4_,
                       (SpawnRolesRuntimeData *)pXVar52,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    pMVar15 = unaff_ESI;
    puStack_6 = &stack0xffffff64;
    if (photonEvent != (EventData *)0x0) {
      puStack_6 = &stack0xffffff64;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = 
      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
      ;
      pMVar8 = (MVAvatar__Class *)TypeInfo__System__String;
      pSVar29 = (String *)func_?();
      pMVar15 = (MVAvatar__Class *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar29,pMVar20);
      pMVar18 = (this->fields).networkGame;
      pMVar14 = (MVAvatar__Class *)this;
      uVar16 = uStack_13;
      if ((pMVar15 != (MVAvatar__Class *)0x0) &&
         (pMVar14 = (MVAvatar__Class *)this, pMVar18 != (MVNetworkGame *)0x0)) {
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                  (pMVar18,(int32_t)(((Il2CppType *)((int)&pMVar15->_0 + 0x10))->data).__klassIndex,
                   in_stack_47);
        pMVar18 = (this->fields).networkGame;
        pMVar14 = (MVAvatar__Class *)this;
        uVar16 = uStack_13;
        if (pMVar18 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar18,(int32_t)((MVNetworkGame__Fields *)((int)&pMVar15->_0 + 8))->
                                      ReceivedItemFromQuery,
                     (MethodInfo *)
                     CONCAT22(in_stack_58,CONCAT11(in_stack_59,in_stack_60)));
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pMVar14 = (MVAvatar__Class *)this;
          uVar16 = uStack_13;
          if (pMVar62 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar62,(int32_t)(((Il2CppType *)((int)&pMVar15->_0 + 0x18))->data).
                                        __klassIndex,(MethodInfo *)0x0);
            this_30 = (MVAvatarSpawnRoleCreator *)func_?();
            pMVar14 = (MVAvatar__Class *)this;
            uVar16 = uStack_13;
            if (this_30 != (MVAvatarSpawnRoleCreator *)0x0) {
              MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                        (this_30,(SpawnRoleBodySwitchData *)pMVar15,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  uStack_13 = uVar16;
  func_?();
  unaff_EDI = pMVar14;
  pMVar7 = pMVar8;
code_?:
  func_?();
  pMVar8 = extraout_ECX;
  photonEvent = (EventData *)pMVar15;
code_?:
  uVar94 = func_?();
  puVar95 = (uint *)((int)&unaff_EDI->_0 + (int)&unaff_EBX->_0 + 0x10);
  *puVar95 = *puVar95 ^ (uint)unaff_EBX;
  bVar96 = (byte)uVar94;
  if (*puVar95 != 0) {
    *(char *)(extraout_ECX_00 + 0xc101f66) = *(char *)(extraout_ECX_00 + 0xc101f66) + bVar96;
    bVar96 = (byte)in_CS;
    bVar97 = (byte)((ushort)in_CS >> 8);
    uVar16 = func_?();
    bVar1 = (bVar97 & 4) != 0;
    segment(in_SS,(short)&stack0xffffff54);
    *(char *)((int)(unaff_EBX + 0x2fcca) + 0x360U) =
         *(char *)((int)(unaff_EBX + 0x2fcca) + 0x360U) + (char)uVar16 + ((bVar96 & 1) != 0);
    lVar98 = (longlong)(int)(unaff_EDI->_0).image * 0x1f6b9810;
    *(char *)((int)photonEvent + 0xe5101da8U + 0x1c3U) =
         *(char *)((int)photonEvent + 0xe5101da8U + 0x1c3U) + (char)((ulonglong)uVar16 >> 0x28) +
         ((int)lVar98 != lVar98);
    lVar98 = (longlong)(int)(unaff_EDI->_0).image * 0x10;
    pbVar99 = (byte *)lVar98;
    bVar100 = (int)pbVar99 != lVar98;
    pbVar77 = extraout_ECX_02;
    pMVar7 = unaff_EDI;
    bVar101 = bVar100;
    goto code_?;
  }
  uVar37 = (int)(unaff_EBX + 0x977ee) + 0x204;
  bVar97 = *(byte *)uVar37;
  bVar102 = (byte)extraout_EDX;
  *(byte *)uVar37 = *(char *)uVar37 + bVar102;
  pbVar77 = (byte *)(extraout_EDX + 0x21101f5d);
  bVar103 = (byte)((ushort)uVar94 >> 8);
  bVar101 = CARRY1(*pbVar77,bVar103) || CARRY1(*pbVar77 + bVar103,CARRY1(bVar97,bVar102));
  *pbVar77 = *pbVar77 + bVar103 + CARRY1(bVar97,bVar102);
  pbVar77 = (byte *)(extraout_EDX + (int)unaff_EBX * 4);
  bVar104 = (byte)extraout_ECX_00;
  bVar100 = CARRY1(*pbVar77,bVar104) || CARRY1(*pbVar77 + bVar104,bVar101);
  *pbVar77 = *pbVar77 + bVar104 + bVar101;
  pbVar77 = (byte *)(extraout_EDX + (int)unaff_EBX * 4);
  bVar101 = CARRY1(*pbVar77,bVar104) || CARRY1(*pbVar77 + bVar104,bVar100);
  *pbVar77 = *pbVar77 + bVar104 + bVar100;
  bVar105 = (byte)((uint)unaff_EBX >> 8);
  bVar97 = *(char *)&(unaff_EDI->_0).image + bVar105;
  bVar100 = CARRY1(*(byte *)&(unaff_EDI->_0).image,bVar105) || CARRY1(bVar97,bVar101);
  *(byte *)&(unaff_EDI->_0).image = bVar97 + bVar101;
  uVar37 = (int)(pMVar8 + 0x180cfe) + 0x2c6;
  bVar101 = CARRY1(*(byte *)uVar37,bVar103) || CARRY1(*(char *)uVar37 + bVar103,bVar100);
  *(byte *)uVar37 = *(char *)uVar37 + bVar103 + bVar100;
  uVar79 = in((ushort)extraout_EDX);
  *(undefined1 *)&(unaff_EDI->_0).image = uVar79;
  pbVar77 = (byte *)(extraout_EDX + (int)unaff_EBX * 4);
  bVar100 = CARRY1(*pbVar77,bVar104) || CARRY1(*pbVar77 + bVar104,bVar101);
  *pbVar77 = *pbVar77 + bVar104 + bVar101;
  puVar2 = &stack0xffffff7c;
  bVar103 = (byte)((uint)extraout_EDX >> 8);
  bVar101 = CARRY1(bRam_?,bVar103);
  bVar97 = bRam_? + bVar103;
  bRam_? = bVar97 + bVar100;
  bVar101 = CARRY1(bVar105,bVar103) || CARRY1(bVar105 + bVar103,bVar101 || CARRY1(bVar97,bVar100));
  pbVar77 = (byte *)(extraout_ECX_00 + 0x2e101f62);
  bVar97 = *pbVar77 + in_stack_35._1_1_;
  bVar100 = CARRY1(*pbVar77,in_stack_35._1_1_) || CARRY1(bVar97,bVar101);
  *pbVar77 = bVar97 + bVar101;
  sVar106 = ((ushort)extraout_EDX & 3) - (*(ushort *)&(pMVar7->_0).image & 3);
  *(ushort *)&(pMVar7->_0).image = *(short *)&(pMVar7->_0).image + (ushort)(0 < sVar106) * sVar106;
  pbVar77 = (byte *)((int)in_stack_35.rgctx_data + 0x19101f63);
  bVar101 = CARRY1(*pbVar77,bVar103) || CARRY1(*pbVar77 + bVar103,bVar100);
  *pbVar77 = *pbVar77 + bVar103 + bVar100;
  pbVar77 = (byte *)(extraout_ECX_00 + 100);
  bVar100 = CARRY1(*pbVar77,bVar103) || CARRY1(*pbVar77 + bVar103,bVar101);
  *pbVar77 = *pbVar77 + bVar103 + bVar101;
  bVar101 = CARRY1(bVar102,bVar102) || CARRY1(bVar102 * '\x02',bVar100);
  bVar104 = bVar102 * '\x02' + bVar100;
  pbVar99 = (byte *)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar104);
  pbVar77 = (byte *)(extraout_ECX_00 + (int)pbVar99 * 4);
  bVar97 = *pbVar77;
  bVar103 = *pbVar77;
  *pbVar77 = bVar103 + bVar96 + bVar101;
  cRam_? = cRam_? + bVar104 + (CARRY1(bVar97,bVar96) || CARRY1(bVar103 + bVar96,bVar101));
  pIStack_11 = (Int32__Class *)CONCAT22(pIStack_11._2_2_,in_CS);
  uVar107 = func_?();
  puVar9 = &((Il2CppType *)((int)&pMVar8->_0 + 0x18))->field_0x7;
  *(uint *)puVar9 = *(uint *)puVar9 & 0x1f9a0c10;
  bVar96 = *pbVar99;
  bVar97 = (byte)((ulonglong)uVar107 >> 0x20);
  *pbVar99 = *pbVar99 + bVar97;
  segment(in_SS,(short)&pIStack_11);
  *(undefined4 *)(CONCAT22((short)((uint)&pIStack_11 >> 0x10),(short)&pIStack_11 + 2) + -4) =
       0x690b101f;
  pcVar81 = (char *)((int)uVar107 + -0x49efe095);
  *pcVar81 = *pcVar81 + bVar104 +
             (CARRY1(in_stack_108,bVar104) ||
             CARRY1(in_stack_108 + bVar104,CARRY1(bVar96,bVar97)));
  lVar98 = (longlong)(int)(pMVar7->_0).image * 0x10;
  pbVar99 = (byte *)lVar98;
  iVar26 = in(0x6b);
  uVar16 = CONCAT44((int)((ulonglong)uVar107 >> 0x20),iVar26);
  pbVar77 = (byte *)(iVar26 + 0x6c);
  bVar97 = (byte)((ulonglong)uVar107 >> 0x28);
  bVar96 = *pbVar77 + bVar97;
  bVar100 = CARRY1(*pbVar77,bVar97) || CARRY1(bVar96,(int)pbVar99 != lVar98);
  *pbVar77 = bVar96 + ((int)pbVar99 != lVar98);
  pbVar109 = extraout_ECX_01;
  photonEvent = (EventData *)pMVar8;
  do {
    pbVar110 = (byte *)uVar16;
    pbVar77 = puVar2 + 0x6d;
    bVar103 = (byte)uVar16;
    bVar101 = CARRY1(*pbVar77,bVar103) || CARRY1(*pbVar77 + bVar103,bVar100);
    *pbVar77 = *pbVar77 + bVar103 + bVar100;
    bVar105 = (byte)((uint)pbVar109 >> 8);
    bVar100 = CARRY1(*pbVar99,bVar105) || CARRY1(*pbVar99 + bVar105,bVar101);
    *pbVar99 = *pbVar99 + bVar105 + bVar101;
    puVar111 = (undefined *)((int)photonEvent + (uint)bVar1 * -2 + 1);
    uVar94 = (undefined2)((ulonglong)uVar16 >> 0x20);
    out(*(undefined1 *)&(((MVAvatar__Class *)photonEvent)->_0).image,uVar94);
    bVar96 = (byte)pbVar109;
    bVar101 = CARRY1(bVar96,bVar96) || CARRY1(bVar96 * '\x02',bVar100);
    bVar102 = bVar96 * '\x02' + bVar100;
    pbVar77 = (byte *)CONCAT31((int3)((uint)pbVar109 >> 8),bVar102);
    puVar22 = (undefined4 *)(puVar111 + (uint)bVar1 * -2 + 1);
    out(*puVar111,uVar94);
    pbVar112 = (byte *)((int)((ulonglong)uVar16 >> 0x20) + -0x3fefe091);
    bVar104 = (byte)((ulonglong)uVar16 >> 8);
    bVar100 = CARRY1(*pbVar112,bVar104) || CARRY1(*pbVar112 + bVar104,bVar101);
    *pbVar112 = *pbVar112 + bVar104 + bVar101;
    out(*puVar22,uVar94);
    bVar97 = (byte)((ulonglong)uVar16 >> 0x28);
    bVar113 = (byte)pbVar99;
    bVar96 = bVar97 + bVar113;
    bVar101 = CARRY1(bVar97,bVar113) || CARRY1(bVar96,bVar100);
    bVar114 = (byte)((ulonglong)uVar16 >> 0x20);
    uVar94 = CONCAT11(bVar96 + bVar100,bVar114);
    pbVar115 = (byte *)CONCAT22((short)((ulonglong)uVar16 >> 0x30),uVar94);
    photonEvent = (EventData *)(puVar22 + (uint)bVar1 * -2 + 1 + (uint)bVar1 * -2 + 1);
    out(puVar22[(uint)bVar1 * -2 + 1],uVar94);
    pbVar112 = pbVar77 + 0x70;
    bVar100 = CARRY1(*pbVar112,bVar104) || CARRY1(*pbVar112 + bVar104,bVar101);
    *pbVar112 = *pbVar112 + bVar104 + bVar101;
    pbVar112 = pbVar115 + -0x27efe08f;
    bVar116 = (byte)((uint)pbVar99 >> 8);
    bVar96 = *pbVar112;
    bVar97 = *pbVar112 + bVar116;
    bVar101 = CARRY1(*pbVar112,bVar116) || CARRY1(bVar97,bVar100);
    *pbVar112 = bVar97 + bVar100;
    if (SCARRY1(bVar96,bVar116) != SCARRY1(bVar97,bVar100)) {
      pbVar112 = pbVar115 + (int)photonEvent * 2 + 0x1f;
      bVar100 = CARRY1(*pbVar112,bVar104) || CARRY1(*pbVar112 + bVar104,bVar101);
      *pbVar112 = *pbVar112 + bVar104 + bVar101;
      bVar101 = CARRY1(bRam_?,bVar105) || CARRY1(bRam_? + bVar105,bVar100);
      bRam_? = bRam_? + bVar105 + bVar100;
      if (bRam_? == 0) goto code_?;
      bVar100 = CARRY1(*pbVar110,bVar102) || CARRY1(*pbVar110 + bVar102,bVar101);
      *pbVar110 = *pbVar110 + bVar102 + bVar101;
      if (*pbVar110 != 0) goto code_?;
      bVar96 = bVar114 + bVar113;
      bVar101 = CARRY1(bVar114,bVar113) || CARRY1(bVar96,bVar100);
      pbVar115 = (byte *)CONCAT31((int3)((uint)pbVar115 >> 8),bVar96 + bVar100);
      if ((!CARRY1(bVar114,bVar113) && !CARRY1(bVar96,bVar100)) && (byte)(bVar96 + bVar100) != '\0')
      goto code_?;
      bVar100 = CARRY1(bRam_?,bVar113) || CARRY1(bRam_? + bVar113,bVar101);
      bRam_? = bRam_? + bVar113 + bVar101;
      if ((char)bRam_? < '\0') {
        bVar101 = CARRY1(bVar105,bVar104) || CARRY1(bVar105 + bVar104,bVar100);
        cVar27 = bVar105 + bVar104 + bVar100;
        pbVar77 = (byte *)CONCAT22((short)((uint)pbVar109 >> 0x10),CONCAT11(cVar27,bVar102));
        if (cVar27 < '\0') goto code_?;
      }
      else {
        bVar96 = bVar116 + bVar113;
        bVar101 = CARRY1(bVar116,bVar113) || CARRY1(bVar96,bVar100);
        cVar27 = bVar96 + bVar100;
        pbVar99 = (byte *)CONCAT22((short)((uint)pbVar99 >> 0x10),CONCAT11(cVar27,bVar113));
        if (cVar27 == '\0' || (SCARRY1(bVar116,bVar113) != SCARRY1(bVar96,bVar100)) != cVar27 < '\0') {
          uVar37 = (int)photonEvent + 0xfffffc4cU + 0x337;
          bVar117 = CARRY1(*(byte *)uVar37,bVar105) || CARRY1(*(char *)uVar37 + bVar105,bVar101);
          *(byte *)uVar37 = *(char *)uVar37 + bVar105 + bVar101;
          goto code_?;
        }
      }
code_?:
      bVar96 = *pbVar115;
      bVar97 = *pbVar115 + bVar104;
      bVar117 = CARRY1(*pbVar115,bVar104) || CARRY1(bVar97,bVar101);
      *pbVar115 = bVar97 + bVar101;
      if (*pbVar115 != 0 &&
          (SCARRY1(bVar96,bVar104) != SCARRY1(bVar97,bVar101)) == (char)*pbVar115 < '\0')
      goto code_?;
code_?:
      uVar16 = CONCAT44(pbVar115,pbVar110);
      pbVar110 = pbVar110 + 0x7f;
      bVar96 = *pbVar110 + (byte)pbVar99;
      bVar100 = CARRY1(*pbVar110,(byte)pbVar99) || CARRY1(bVar96,bVar117);
      *pbVar110 = bVar96 + bVar117;
      break;
    }
code_?:
    uVar16 = CONCAT44(pbVar115,pbVar110);
    bVar97 = (byte)((uint)pbVar115 >> 8);
    bVar96 = *pbVar115 + bVar97;
    bVar117 = CARRY1(*pbVar115,bVar97) || CARRY1(bVar96,bVar101);
    *pbVar115 = bVar96 + bVar101;
    if ((POPCOUNT(*pbVar115) & 1U) != 0) goto code_?;
    pbVar109 = pbVar99 + 0x4c101f7b;
    bVar96 = *pbVar109;
    bVar97 = *pbVar109 + bVar103;
    bVar101 = CARRY1(*pbVar109,bVar103) || CARRY1(bVar97,bVar117);
    *pbVar109 = bVar97 + bVar117;
    if ((SCARRY1(bVar96,bVar103) != SCARRY1(bVar97,bVar117)) != (char)*pbVar109 < '\0')
    goto code_?;
code_?:
    uVar16 = CONCAT44(pbVar115,pbVar110);
    cVar27 = *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image;
    bVar96 = *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image + bVar104;
    bVar100 = CARRY1(*(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image,bVar104) ||
             CARRY1(bVar96,bVar101);
    *(byte *)&(((MVAvatar__Class *)photonEvent)->_0).image = bVar96 + bVar101;
    if ((SCARRY1(cVar27,bVar104) != SCARRY1(bVar96,bVar101)) !=
        *(char *)&(((MVAvatar__Class *)photonEvent)->_0).image < '\0') {
code_?:
      pbVar109 = pbVar99 + 0x7d;
      bVar101 = CARRY1(*pbVar109,bVar116) || CARRY1(*pbVar109 + bVar116,bVar100);
      *pbVar109 = *pbVar109 + bVar116 + bVar100;
code_?:
      pbVar109 = pbVar77 + 0x7e;
      bVar1 = CARRY1(*pbVar109,bVar113) || CARRY1(*pbVar109 + bVar113,bVar101);
      *pbVar109 = *pbVar109 + bVar113 + bVar101;
      pbVar80 = (bool *)((int)photonEvent + 0x7edf0dacU + 0x273U + (int)pMVar7 * 2);
      bVar101 = CARRY1(*pbVar80,bVar113) || CARRY1(*pbVar80 + bVar113,bVar1);
      *pbVar80 = *pbVar80 + bVar113 + bVar1;
      goto code_?;
    }
    bVar97 = (byte)((uint)pbVar77 >> 8);
    bVar96 = *pbVar99 + bVar97;
    bVar117 = CARRY1(*pbVar99,bVar97) || CARRY1(bVar96,bVar100);
    *pbVar99 = bVar96 + bVar100;
    cVar27 = *(char *)&(pMVar7->_0).image;
    bVar96 = *(char *)&(pMVar7->_0).image - 0x10;
    bVar100 = *(byte *)&(pMVar7->_0).image < 0x10 || bVar96 < bVar117;
    *(byte *)&(pMVar7->_0).image = bVar96 - bVar117;
    bVar101 = false;
    if (SBORROW1(cVar27,'\x10') != SBORROW1(bVar96,bVar117)) goto code_?;
code_?:
    pbVar109 = pbVar77;
  } while (!bVar101);
  iVar26 = (int)((ulonglong)uVar16 >> 0x20);
  uVar118 = (ushort)uVar16;
  bVar97 = (byte)((uint)pbVar99 >> 8);
  bVar96 = bVar97 * '\x02';
  bVar101 = CARRY1(bVar97,bVar97) || CARRY1(bVar96,bVar100);
  cVar27 = bVar96 + bVar100;
  pbVar99 = (byte *)CONCAT22((short)((uint)pbVar99 >> 0x10),CONCAT11(cVar27,(char)pbVar99));
  if (cVar27 == '\0' || (SCARRY1(bVar97,bVar97) != SCARRY1(bVar96,bVar100)) != cVar27 < '\0') {
code_?:
    pbVar115 = (byte *)((ulonglong)uVar16 >> 0x20);
    bVar97 = (byte)((uint)pbVar77 >> 8);
    bVar96 = (byte)uVar16 + bVar97;
    pbVar110 = (byte *)CONCAT31((int3)((ulonglong)uVar16 >> 8),bVar96 + bVar101);
    puVar9 = (undefined1 *)(uint)(CARRY1((byte)uVar16,bVar97) || CARRY1(bVar96,bVar101));
    ppIVar119 = &((MVNetworkGame__Class *)(pMVar7->_0).image)[-0x200234]._0.element_class;
    bVar1 = (MVNetworkGame__Class *)(pMVar7->_0).image < (MVNetworkGame__Class *)0x1f822b10 ||
             ppIVar119 < puVar9;
    (pMVar7->_0).image = (Il2CppImage *)((int)ppIVar119 - (int)puVar9);
    pbVar109 = pbVar77 + -0x7e;
    bVar97 = (byte)((ulonglong)uVar16 >> 0x28);
    bVar96 = *pbVar109 + bVar97;
    bVar100 = CARRY1(*pbVar109,bVar97) || CARRY1(bVar96,bVar1);
    *pbVar109 = bVar96 + bVar1;
code_?:
    bVar97 = (byte)((uint)pbVar110 >> 8);
    bVar103 = (byte)pbVar115;
    bVar96 = bVar103 + bVar97;
    pbVar115 = (byte *)CONCAT31((int3)((uint)pbVar115 >> 8),bVar96 + bVar100);
    *(char *)&(pMVar7->_0).image =
         (*(char *)&(pMVar7->_0).image + -0x10) - (CARRY1(bVar103,bVar97) || CARRY1(bVar96,bVar100));
    pbVar109 = pbVar99 + -0x7c91efe1;
    bVar117 = *pbVar109 < (byte)pbVar110;
    *pbVar109 = *pbVar109 - (byte)pbVar110;
code_?:
    bVar97 = (byte)((uint)pbVar110 >> 8);
    bVar96 = (byte)pbVar115 + bVar97;
    iVar26 = CONCAT31((int3)((uint)pbVar115 >> 8),bVar96 + bVar117);
    (pMVar7->_0).image =
         (Il2CppImage *)
         ((int)(pMVar7->_0).image +
         (-0x10 - (uint)(CARRY1((byte)pbVar115,bVar97) || CARRY1(bVar96,bVar117))));
    ((Il2CppType *)((int)&pMVar7->_0 + 0x18))->field_0x7 = 0;
    bVar1 = false;
    uVar118 = (ushort)pbVar110 | 0x9a;
  }
  else {
    pbVar109 = (byte *)(iVar26 + (int)pbVar99 * 4);
    bVar96 = *pbVar109 + (byte)pbVar77;
    bVar1 = CARRY1(*pbVar109,(byte)pbVar77) || CARRY1(bVar96,bVar101);
    *pbVar109 = bVar96 + bVar101;
  }
  uVar37 = (int)(pMVar7 + 0xffffffff) + 0x338;
  bVar104 = (byte)iVar26;
  bVar101 = CARRY1(*(byte *)uVar37,bVar104) || CARRY1(*(char *)uVar37 + bVar104,bVar1);
  *(byte *)uVar37 = *(char *)uVar37 + bVar104 + bVar1;
  pbVar109 = (byte *)(iVar26 + (int)pbVar99 * 4);
  bVar103 = (byte)pbVar77;
  bVar1 = CARRY1(*pbVar109,bVar103) || CARRY1(*pbVar109 + bVar103,bVar101);
  *pbVar109 = *pbVar109 + bVar103 + bVar101;
  pbVar109 = (byte *)(iVar26 + (int)pbVar99 * 4);
  bVar101 = CARRY1(*pbVar109,bVar103) || CARRY1(*pbVar109 + bVar103,bVar1);
  *pbVar109 = *pbVar109 + bVar103 + bVar1;
  pbVar109 = (byte *)(iVar26 + (int)pbVar99 * 4);
  bVar96 = *pbVar109;
  bVar97 = *pbVar109;
  *pbVar109 = bVar97 + bVar103 + bVar101;
  cRam_? = cRam_? + bVar104 + (CARRY1(bVar96,bVar103) || CARRY1(bVar97 + bVar103,bVar101));
  bVar96 = *pbVar77;
  *pbVar77 = *pbVar77 + bVar103;
  LOCK();
  uVar79 = *(undefined1 *)&(pMVar7->_0).image;
  *(char *)&(pMVar7->_0).image = (char)pbVar99;
  UNLOCK();
  uVar37 = (int)(pMVar7 + 0xffffffff) + 0x33a;
  bVar102 = (byte)((uint)iVar26 >> 8);
  bVar1 = CARRY1(*(byte *)uVar37,bVar102) || CARRY1(*(char *)uVar37 + bVar102,CARRY1(bVar96,bVar103));
  *(byte *)uVar37 = *(char *)uVar37 + bVar102 + CARRY1(bVar96,bVar103);
  bVar97 = (byte)(uVar118 >> 8);
  bVar96 = *(char *)&(pMVar7->_0).image + bVar97;
  bVar101 = CARRY1(*(byte *)&(pMVar7->_0).image,bVar97) || CARRY1(bVar96,bVar1);
  *(byte *)&(pMVar7->_0).image = bVar96 + bVar1;
  LOCK();
  uVar120 = *(undefined1 *)&(pMVar7->_0).image;
  *(undefined1 *)&(pMVar7->_0).image = uVar79;
  UNLOCK();
  uVar37 = (int)(pMVar7 + 0xffffffff) + 0x33a;
  bVar1 = CARRY1(*(byte *)uVar37,bVar102) || CARRY1(*(char *)uVar37 + bVar102,bVar101);
  *(byte *)uVar37 = *(char *)uVar37 + bVar102 + bVar101;
  uVar37 = (int)(pMVar7 + 0x932cd) + 99;
  bVar101 = CARRY1(*(byte *)uVar37,bVar104) || CARRY1(*(char *)uVar37 + bVar104,bVar1);
  *(byte *)uVar37 = *(char *)uVar37 + bVar104 + bVar1;
  *(undefined1 *)&(pMVar7->_0).image = uVar120;
  uVar37 = (int)(pMVar7 + 0x19f0e9) + 0xb4;
  bVar1 = CARRY1(*(byte *)uVar37,bVar97) || CARRY1(*(char *)uVar37 + bVar97,bVar101);
  *(byte *)uVar37 = *(char *)uVar37 + bVar97 + bVar101;
  cVar27 = *(char *)&(pMVar7->_0).image;
  uVar37 = (int)(pMVar7 + 0x525d6) + 0x313;
  bVar96 = *(byte *)uVar37;
  bVar97 = *(char *)uVar37 + (byte)uVar118;
  *(byte *)uVar37 = bVar97 + bVar1;
  *(char *)((int)photonEvent + 0x67101d5cU + 0x232U) =
       *(char *)((int)photonEvent + 0x67101d5cU + 0x232U) + cVar27 +
       (CARRY1(bVar96,(byte)uVar118) || CARRY1(bVar97,bVar1));
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

