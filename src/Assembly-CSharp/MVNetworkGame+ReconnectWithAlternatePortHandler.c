
/* Int32 GetAlternatePort(String) */

int32_t Assembly-CSharp.dll::MVNetworkGame+ReconnectWithAlternatePortHandler::
        MVNetworkGame_ReconnectWithAlternatePortHandler_GetAlternatePort
                  (String *serverIP,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_wss___);
    func_?(&StringLiteral_ws___);
    cRam_? = '\x01';
  }
  if (serverIP != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_Contains
                      (serverIP,StringLiteral_wss___,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_Contains
                        (serverIP,StringLiteral_ws___,(MethodInfo *)0x0);
      iVar2 = 0x4a92;
      if (bVar1 == 0) {
        iVar2 = 27000;
      }
      return iVar2;
    }
    return 0x4a93;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Boolean IsHandling(StatusCode) */

bool Assembly-CSharp.dll::MVNetworkGame+ReconnectWithAlternatePortHandler::
     MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
               (MVNetworkGame_ReconnectWithAlternatePortHandler *this,StatusCode__Enum statusCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    func_?(&StringLiteral_Ignored_status_code__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Retrying_to_connect_with_alterna);
    cRam_? = '\x01';
  }
  if (statusCode == StatusCode__Enum_Connect) {
    return 0;
  }
  if (statusCode != StatusCode__Enum_Disconnect) {
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if (((pMVar1->fields).connState == 2) && ((this->fields).triedAlternatePort == 0)) {
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0)
      ;
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ignored_status_code__,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return 1;
    }
  }
  pMVar1 = (this->fields).networkGame;
  if (pMVar1 != (MVNetworkGame *)0x0) {
    if ((pMVar1->fields).connState != 2) {
      return 0;
    }
    if ((this->fields).triedAlternatePort != 0) {
      return 0;
    }
    (this->fields).triedAlternatePort = 1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Retrying_to_connect_with_alterna,(pGVar3->fields).serverIP,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if ((pGVar3 != (GameSessionData *)0x0) &&
         (pSVar2 = (pGVar3->fields).serverIP, pSVar2 != (String *)0x0)) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar2,0x3a,(MethodInfo *)0x0)
        ;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if ((pGVar3 != (GameSessionData *)0x0) &&
           (pSVar2 = (pGVar3->fields).serverIP, pSVar2 != (String *)0x0)) {
          pSVar2 = mscorlib.dll::System::String::String_Remove_1
                             (pSVar2,startIndex,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar3 != (GameSessionData *)0x0) {
            pSVar4 = (pGVar3->fields).serverIP;
            if (cRam_? == '\0') {
              func_?(&StringLiteral_wss___);
              func_?(&StringLiteral_ws___);
              cRam_? = '\x01';
            }
            if (pSVar4 != (String *)0x0) {
              bVar5 = mscorlib.dll::System::String::String_Contains
                                (pSVar4,StringLiteral_wss___,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                mscorlib.dll::System::String::String_Contains
                          (pSVar4,StringLiteral_ws___,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVGameControllerBase);
                cRam_? = '\x01';
              }
              pGVar3 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::String::String_Concat_4
                                 (pSVar2,::StringLiteral__,pSVar4,(MethodInfo *)0x0);
              if (pGVar3 != (GameSessionData *)0x0) {
                (pGVar3->fields).serverIP = pSVar2;
                func_?(&pGVar3->fields,pSVar2);
                pMVar1 = (this->fields).networkGame;
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  MVNetworkGame::MVNetworkGame_Join(pMVar1,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}

