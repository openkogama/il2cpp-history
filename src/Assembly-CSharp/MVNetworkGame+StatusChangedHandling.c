
/* Void HandleDisconnectMetric(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_HandleDisconnectMetric
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (returnCode != StatusCode__Enum_Connect)) {
    if (returnCode == StatusCode__Enum_Disconnect) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk((MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
    }
    (this->fields).registeredFatalStatusCodeInStatHat = 1;
    piVar2 = (int *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&returnCode);
    if (piVar2 == (int *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar4 = (String *)(**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    pSVar5 = (StatusCode__Enum *)func_?(piVar2);
    returnCode = *pSVar5;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_StatusCode_,pSVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
    arg1 = (Object *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode);
    pSVar4 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Client_disconnected_,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar4,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&returnCode);
  pMVar2 = (MVNetworkGame_StatusChangedHandling *)0x0;
  if (piVar1 == (int *)0x0) goto code_?;
  unaff_EDI = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  pSVar3 = (StatusCode__Enum *)func_?(piVar1);
  returnCode = *pSVar3;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_PeerStatusCallback___,unaff_EDI,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar4,(MethodInfo *)0x0);
  this_00 = (this->fields).reconnectWithAlternatePortHandler;
  pMVar2 = this;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar5 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,returnCode,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    return;
  }
  SVar6 = returnCode;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (SVar6 != StatusCode__Enum_Connect)) {
    if (SVar6 == StatusCode__Enum_Disconnect) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar5 = MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk((MethodInfo *)0x0);
      if (bVar5 != 0) goto code_?;
    }
    (this->fields).registeredFatalStatusCodeInStatHat = 1;
    piVar1 = (int *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff8
                                   );
    unaff_EDI = (String *)0x0;
    if (piVar1 == (int *)0x0) goto code_?;
    unaff_BX = in_stack_7;
    pSVar4 = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    func_?(piVar1);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_StatusCode_,pSVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
    pOVar8 = (Object *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode);
    unaff_EDI = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Client_disconnected_,pOVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)unaff_EDI,(MethodInfo *)0x0);
  }
code_?:
  switch(returnCode) {
  case StatusCode__Enum_SecurityExceptionOnConnect:
  case StatusCode__Enum_ExceptionOnConnect:
  case StatusCode__Enum_Exception:
  case StatusCode__Enum_SendError:
code_?:
    pOVar8 = (Object *)
             func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff4);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    unaff_EDI = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Disconnected_because__,pOVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)unaff_EDI,(MethodInfo *)0x0);
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar9,(MethodInfo *)0x0);
      if (pIVar10 == (IKogamaSetting *)0x1) {
        return;
      }
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)pMVar9,0,(MethodInfo *)0x0);
        if (TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->__f__am_cache0 ==
            (UnityAction *)0x0) {
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__MVNetworkGame__StatusChangedHandling___OnStatusChanged_m__0__,
                     (MethodInfo *)0x0);
          TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->__f__am_cache0 =
               (UnityAction *)this_02;
        }
        coroutine = WaitForFrames::WaitForFrames_Frames
                              (5,TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->
                                 __f__am_cache0,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case StatusCode__Enum_Connect:
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    DebugLogHandler::DebugLogHandler_1_set_DidConnectToGameServer(1,(MethodInfo *)0x0);
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      pSVar11 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                          ((AvatarUIHandlerRemote *)pMVar9,(MethodInfo *)0x0);
      pMVar9 = (this->fields).networkGame;
      if ((pMVar9 != (MVNetworkGame *)0x0) && (pSVar11 != (ShieldBar *)0x0)) {
        *(uint8_t *)&pSVar11[1].fields.shieldPivot =
             (pMVar9->fields).photonLoggingConfig.defaultDebugLevel;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case StatusCode__Enum_Disconnect:
    pMVar9 = (this->fields).networkGame;
    if (pMVar9 != (MVNetworkGame *)0x0) {
      pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar9,(MethodInfo *)0x0);
      if (pIVar10 == (IKogamaSetting *)0x0) {
        return;
      }
      pMVar9 = (this->fields).networkGame;
      if (pMVar9 != (MVNetworkGame *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)pMVar9,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Expecting_that_this_disconnect_i,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  default:
    switch(returnCode) {
    case StatusCode__Enum_ExceptionOnReceive:
    case StatusCode__Enum_TimeoutDisconnect:
    case StatusCode__Enum_DisconnectByServerTimeout:
    case StatusCode__Enum_DisconnectByServerUserLimit:
    case StatusCode__Enum_DisconnectByServerLogic:
    case StatusCode__Enum_DisconnectByServerReasonUnknown:
      goto code_?;
    default:
      pOVar8 = (Object *)
               func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff4);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Unhandled_PeerStatusCallback__re,pOVar8,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  uVar12 = func_?(0);
  pcVar13 = (char *)((ulonglong)uVar12 >> 0x20);
  in_AF = 9 < ((byte)uVar12 & 0xf) | in_AF;
  uVar14 = CONCAT31((int3)((ulonglong)uVar12 >> 8),(byte)uVar12 + in_AF * -6) & 0xffffff0f;
  cVar15 = (char)uVar14;
  cVar16 = (char)((ulonglong)uVar12 >> 8) - in_AF;
  pcVar17 = (char *)CONCAT22((short)(uVar14 >> 0x10),CONCAT11(cVar16,cVar15));
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  bVar18 = (byte)((ushort)unaff_BX >> 8);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar18;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *(char *)&pMVar2->klass = *(char *)&pMVar2->klass + (char)unaff_BX;
  *(byte *)&pMVar2->klass = *(byte *)&pMVar2->klass | bVar18;
  *(char *)(extraout_ECX + 0x3f103e08) = *(char *)(extraout_ECX + 0x3f103e08) + bVar18;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *pcVar13 = *pcVar13 + cVar16;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *pcVar13 = *pcVar13 + cVar16;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *pcVar13 = *pcVar13 + cVar16;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar18;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar18;
  pMVar2->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar2->klass | (uint)unaff_EDI);
  *pcVar17 = *pcVar17 + cVar15;
  *pcVar17 = *pcVar17 + cVar15;
  *pcVar17 = *pcVar17 + cVar15;
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void <OnStatusChanged>m__0() */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling__OnStatusChanged_m__0(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
  QuitConnectionError::QuitConnectionError__ctor(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_ApplicationQuit
            ((QuitBaseCallback *)this,(MethodInfo *)0x0);
  return;
}


/* MVNetworkGame+StatusChangedHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling__ctor
               (MVNetworkGame_StatusChangedHandling *this,MVNetworkGame *networkGame,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).networkGame = networkGame;
  method_00 = TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).state = (int32_t)networkGame;
  (this->fields).reconnectWithAlternatePortHandler =
       (MVNetworkGame_ReconnectWithAlternatePortHandler *)this_00;
  return;
}

