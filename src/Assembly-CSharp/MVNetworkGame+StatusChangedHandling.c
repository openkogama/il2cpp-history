
/* Void HandleDisconnectMetric(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_HandleDisconnectMetric
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    func_?(&StringLiteral_StatusCode_);
    func_?(&StringLiteral_Client_disconnected_);
    cRam_? = '\x01';
  }
  if (((this->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (returnCode != StatusCode__Enum_Connect)) {
    if (returnCode == StatusCode__Enum_Disconnect) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0) {
        return;
      }
    }
    (this->fields).registeredFatalStatusCodeInStatHat = 1;
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_StatusCode_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)0xffffffff,(MethodInfo *)returnCode);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Client_disconnected_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnStatusChanged(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_OnStatusChanged
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    func_?(&MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__
                   );
    func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Expecting_that_this_disconnect_i);
    func_?(&StringLiteral_Unhandled_PeerStatusCallback__re);
    func_?(&StringLiteral_Disconnected_because__);
    func_?(&StringLiteral_PeerStatusCallback___);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_PeerStatusCallback___,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  this_00 = (this->fields).reconnectWithAlternatePortHandler;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar2 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,returnCode,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).registeredFatalStatusCodeInStatHat == 0) {
    if (returnCode != StatusCode__Enum_Connect) {
      if (returnCode == StatusCode__Enum_Disconnect) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0)
        goto code_?;
      }
      (this->fields).registeredFatalStatusCodeInStatHat = 1;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)returnCode,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_StatusCode_,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
      pSStack_3 = TypeInfo__ExitGames__Client__Photon__StatusCode;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_3,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Client_disconnected_,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
code_?:
    if (0x16 < returnCode - StatusCode__Enum_SecurityExceptionOnConnect) goto code_?;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&UNK_?)[returnCode]) {
  case 0:
    pSStack_3 = TypeInfo__ExitGames__Client__Photon__StatusCode;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_3,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Disconnected_because__,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar4 = (this->fields).networkGame;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      if ((pMVar4->fields).connState == 1) {
        return;
      }
      (pMVar4->fields).connState = 0;
      if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      this_02 = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0;
      if (this_02 == (UnityAction *)0x0) {
        if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        object = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9;
        this_02 = (UnityAction *)func_?();
        this = (MVNetworkGame_StatusChangedHandling *)0x0;
        if (this_02 == (UnityAction *)0x0) break;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)object,
                   MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__,
                   (MethodInfo *)0x0);
        TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0 = this_02;
        func_?();
      }
      coroutine = WaitForFrames::WaitForFrames_Frames(5,this_02,(MethodInfo *)0x0);
      Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 1;
    pMVar4 = (this->fields).networkGame;
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pPVar5 = (pMVar4->fields)._Peer_k__BackingField, pPVar5 != (PhotonPeer *)0x0)) {
      (pPVar5->fields).DebugOut = (pMVar4->fields).photonLoggingConfig.defaultDebugLevel;
      this = (MVNetworkGame_StatusChangedHandling *)
             MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((MVNetworkGame_OperationRequests *)this != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar4 = (((MVNetworkGame_OperationRequests *)this)->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          (pMVar4->fields).connState = 3;
          this_01 = (ParameterOverride_1_System_Object_ *)func_?();
          if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            pPVar5 = (((MVNetworkGame_OperationRequests *)this)->fields).peer;
            if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            this = (MVNetworkGame_StatusChangedHandling *)0x0;
            if (pPVar5 != (PhotonPeer *)0x0) {
              (*(pPVar5->klass->vtable).SendOperation.methodPtr)();
              return;
            }
          }
        }
      }
    }
    break;
  case 2:
    pMVar4 = (this->fields).networkGame;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      if ((pMVar4->fields).connState == 0) {
        return;
      }
      (pMVar4->fields).connState = 1;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Expecting_that_this_disconnect_i,(MethodInfo *)0x0);
      return;
    }
    break;
  case 3:
code_?:
    pSStack_3 = TypeInfo__ExitGames__Client__Photon__StatusCode;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_3,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Unhandled_PeerStatusCallback__re,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
code_?:
  pcVar6 = (char *)func_?();
  puVar7 = (uint *)(pcVar6 + 0x52);
  uVar8 = *puVar7;
  *puVar7 = *puVar7 + 0x10;
  ((MVNetworkGame_OperationRequests *)this)->klass =
       (MVNetworkGame_OperationRequests__Class *)
       ((int)&(((MVNetworkGame_OperationRequests *)this)->klass->_0).image + 1);
  bVar9 = (byte)((uint)unaff_EBX >> 8);
  bVar10 = CARRY1(bRam_?,bVar9);
  bVar9 = bRam_? + bVar9;
  bRam_? = bVar9 + (0xffffffef < uVar8);
  cVar11 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar11 + (bVar10 || CARRY1(bVar9,0xffffffef < uVar8));
  *(char *)(extraout_ECX + 1) = *(char *)(extraout_ECX + 1) + cVar11;
  piVar12 = (int *)(CONCAT31((int3)((uint)pcVar6 >> 8),cVar11 + *pcVar6) + *unaff_EBX);
  pcVar6 = (char *)((int)piVar12 + *unaff_EBX + *unaff_EBX + *unaff_EBX + *unaff_EBX + *piVar12);
  cVar11 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar11;
  *pcVar6 = *pcVar6 + cVar11;
  *pcVar6 = *pcVar6 + cVar11;
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVNetworkGame+StatusChangedHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling__ctor
               (MVNetworkGame_StatusChangedHandling *this,MVNetworkGame *networkGame,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  value = (MVNetworkGame_ReconnectWithAlternatePortHandler *)
          func_?(TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
  if (value != (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBX);
    (value->fields).networkGame = networkGame;
    func_?(&(value->fields).networkGame,networkGame);
    (this->fields).reconnectWithAlternatePortHandler = value;
    func_?(&this->fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

