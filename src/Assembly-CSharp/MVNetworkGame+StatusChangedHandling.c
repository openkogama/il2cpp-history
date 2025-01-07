
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
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
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar6 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar4 = (pMVar6->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          (pMVar4->fields).connState = 3;
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pPVar5 = (pMVar6->fields).peer;
          if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          if (pPVar5 != (PhotonPeer *)0x0) {
            (*(code *)(pPVar5->klass->vtable).SendOperation.method)();
            return;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
code_?:
  bVar7 = 0;
  uVar8 = func_?();
  pbVar9 = (byte *)((ulonglong)uVar8 >> 0x20);
  bVar10 = (byte)uVar8 + 0x66;
  bVar11 = 0x99 < (byte)uVar8 || CARRY1(bVar10,bVar7);
  uVar12 = (undefined3)((ulonglong)uVar8 >> 8);
  cVar13 = bVar10 + bVar7;
  pcVar14 = (char *)CONCAT31(uVar12,cVar13);
  bVar7 = (byte)((ulonglong)uVar8 >> 8);
  bVar10 = *pbVar9 + bVar7;
  bVar15 = CARRY1(*pbVar9,bVar7) || CARRY1(bVar10,bVar11);
  *pbVar9 = bVar10 + bVar11;
  pbVar9 = pbVar9 + 0x17;
  bVar10 = *pbVar9;
  bVar16 = (byte)((uint)extraout_ECX >> 8);
  bVar7 = *pbVar9 + bVar16;
  *pbVar9 = bVar7 + bVar15;
  *pcVar14 = *pcVar14 + cVar13 + (CARRY1(bVar10,bVar16) || CARRY1(bVar7,bVar15));
  *extraout_ECX = *extraout_ECX + cVar13;
  piVar17 = (int *)(CONCAT31(uVar12,cVar13 + *pcVar14) + *unaff_EBX);
  pcVar14 = (char *)((int)piVar17 + *unaff_EBX + *unaff_EBX + *unaff_EBX + *unaff_EBX + *piVar17);
  cVar13 = (char)pcVar14;
  *pcVar14 = *pcVar14 + cVar13;
  *pcVar14 = *pcVar14 + cVar13;
  *pcVar14 = *pcVar14 + cVar13;
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  method_00 = TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler;
  value = (MVNetworkGame_ReconnectWithAlternatePortHandler *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).networkGame = networkGame;
  func_?(&(value->fields).networkGame,networkGame);
  (this->fields).reconnectWithAlternatePortHandler = value;
  func_?(&this->fields,value);
  return;
}

