
/* Void HandleDisconnectMetric(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_HandleDisconnectMetric
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StatusCode_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Client_disconnected_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (returnCode != StatusCode__Enum_Connect)) {
    if (returnCode == StatusCode__Enum_Disconnect) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0) {
        return;
      }
    }
    (this->fields).registeredFatalStatusCodeInStatHat = 1;
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_StatusCode_,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Client_disconnected_,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
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
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expecting_that_this_disconnect_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_PeerStatusCallback__re);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Disconnected_because__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PeerStatusCallback___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  SStack_2 = returnCode;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_PeerStatusCallback___,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  this_00 = (this->fields).reconnectWithAlternatePortHandler;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar4 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,returnCode,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StatusCode_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Client_disconnected_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).registeredFatalStatusCodeInStatHat == 0) {
    if (returnCode == StatusCode__Enum_Connect) goto code_?;
    if (returnCode != StatusCode__Enum_Disconnect) {
code_?:
      (this->fields).registeredFatalStatusCodeInStatHat = 1;
      EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      SStack_2 = returnCode;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_StatusCode_,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
      EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
      EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
      SStack_2 = returnCode;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Client_disconnected_,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField == 0)
    goto code_?;
code_?:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      if ((pMVar5->fields).connState == 0) {
        return;
      }
      (pMVar5->fields).connState = 1;
      pSVar3 = StringLiteral_Expecting_that_this_disconnect_i;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar3 = StringLiteral_Expecting_that_this_disconnect_i;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  switch(returnCode) {
  case StatusCode__Enum_SecurityExceptionOnConnect:
  case StatusCode__Enum_ExceptionOnConnect:
  case StatusCode__Enum_Exception:
  case StatusCode__Enum_SendError:
  case StatusCode__Enum_ExceptionOnReceive:
  case StatusCode__Enum_TimeoutDisconnect:
  case StatusCode__Enum_DisconnectByServerTimeout:
  case StatusCode__Enum_DisconnectByServerUserLimit:
  case StatusCode__Enum_DisconnectByServerLogic:
  case StatusCode__Enum_DisconnectByServerReasonUnknown:
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Disconnected_because__,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      if ((pMVar5->fields).connState == 1) {
        return;
      }
      (pMVar5->fields).connState = 0;
      if (*(int *)&(TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0;
      if (this_02 == (UnityAction *)0x0) {
        if (*(int *)&(TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9;
        this_02 = (UnityAction *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)object,
                   MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__,
                   (MethodInfo *)0x0);
        TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0 = this_02;
        func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->
                             __9__5_0);
      }
      pIVar7 = WaitForFrames::WaitForFrames_WithCallback(5,this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = TypeInfo__Coroutines->static_fields->instance;
      if (obj == (Coroutines *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pIVar7 == (IEnumerator *)0x0) {
        uVar8 = func_?(&TypeInfo__System__NullReferenceException);
        this_03 = (NullReferenceException *)func_?(uVar8);
        pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_03,pSVar3,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_03,uVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        uVar8 = func_?(&TypeInfo__System__ArgumentException);
        this_04 = (InvalidEnumArgumentException *)func_?(uVar8);
        pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_04,pSVar3,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_04,uVar8);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Coroutines *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar9 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar9,pIVar7);
      return;
    }
    goto code_?;
  case StatusCode__Enum_Connect:
code_?:
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DebugLogHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 1;
    pMVar5 = (this->fields).networkGame;
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pPVar10 = (pMVar5->fields)._Peer_k__BackingField, pPVar10 != (PhotonPeer *)0x0)) {
      (pPVar10->fields).DebugOut = (pMVar5->fields).photonLoggingConfig.defaultDebugLevel;
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = (pMVar11->fields).networkGame;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          (pMVar5->fields).connState = 3;
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          pMVar12 = 
          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pPVar10 = (pMVar11->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                      (pPVar10,CONCAT71((int7)((ulonglong)pMVar12 >> 8),0xf8),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar10->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
    goto code_?;
  case StatusCode__Enum_Disconnect:
    goto code_?;
  default:
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Unhandled_PeerStatusCallback__re,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    goto code_?;
  }
}


/* MVNetworkGame+StatusChangedHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling__ctor
               (MVNetworkGame_StatusChangedHandling *this,MVNetworkGame *networkGame,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).networkGame = networkGame;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).networkGame >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (MVNetworkGame_ReconnectWithAlternatePortHandler *)
           FUN_?(TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
  iVar7 = iRam_?;
  (pMVar6->fields).networkGame = networkGame;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(pMVar6->fields).networkGame >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).reconnectWithAlternatePortHandler = pMVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

