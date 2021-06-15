
/* Int32 GetAlternatePort(String) */

int32_t Assembly-CSharp.dll::MVNetworkGame+ReconnectWithAlternatePortHandler::
        MVNetworkGame_ReconnectWithAlternatePortHandler_GetAlternatePort
                  (String *serverIP,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SVar1 = statusCode;
  if (statusCode == StatusCode__Enum_Connect) {
    return 0;
  }
  if (statusCode != StatusCode__Enum_Disconnect) {
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar2,(MethodInfo *)0x0);
    if ((pIVar3 == (IKogamaSetting *)0x2) && ((this->fields).triedAlternatePort == 0)) {
      statusCode = SVar1;
      pOVar4 = (Object *)
               func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&statusCode);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Ignored_status_code__,pOVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar5,(MethodInfo *)0x0);
      return 1;
    }
  }
  pMVar2 = (this->fields).networkGame;
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar2,(MethodInfo *)0x0);
    if (pIVar3 != (IKogamaSetting *)0x2) {
      return 0;
    }
    if ((this->fields).triedAlternatePort != 0) {
      return 0;
    }
    (this->fields).triedAlternatePort = 1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar6 != (GameSessionData *)0x0) {
      pSVar5 = (pGVar6->fields).serverIP;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Retrying_to_connect_with_alterna,pSVar5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar5,(MethodInfo *)0x0);
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if ((pGVar6 != (GameSessionData *)0x0) &&
         (pSVar5 = (pGVar6->fields).serverIP, pSVar5 != (String *)0x0)) {
        startIndex = mscorlib.dll::System::String::String_LastIndexOf(pSVar5,0x3a,(MethodInfo *)0x0)
        ;
        pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if ((pGVar6 != (GameSessionData *)0x0) &&
           (pSVar5 = (pGVar6->fields).serverIP, pSVar5 != (String *)0x0)) {
          pSVar5 = mscorlib.dll::System::String::String_Remove(pSVar5,startIndex,(MethodInfo *)0x0);
          pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0)
          ;
          if (pGVar6 != (GameSessionData *)0x0) {
            this_00 = (pGVar6->fields).serverIP;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (this_00 != (String *)0x0) {
              bVar7 = mscorlib.dll::System::String::String_Contains
                                (this_00,StringLiteral_wss___,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                mscorlib.dll::System::String::String_Contains
                          (this_00,StringLiteral_ws___,(MethodInfo *)0x0);
                pSVar5 = this_00;
              }
              statusCode = 0;
              method = unaff_EBX;
              pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                 ((MethodInfo *)0x0);
              statusCode = (StatusCode__Enum)&statusCode;
              pOVar4 = (Object *)func_?();
              pSVar5 = mscorlib.dll::System::String::String_Concat_1
                                 ((Object *)pSVar5,(Object *)::StringLiteral__,pOVar4,
                                  (MethodInfo *)0x0);
              if (pGVar6 != (GameSessionData *)0x0) {
                (pGVar6->fields).serverIP = pSVar5;
                pMVar2 = (this->fields).networkGame;
                if (pMVar2 != (MVNetworkGame *)0x0) {
                  MVNetworkGame::MVNetworkGame_Join(pMVar2,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

