
/* Int32 GetAlternatePort(String) */

int32_t Assembly-CSharp.dll::MVNetworkGame+ReconnectWithAlternatePortHandler::
        MVNetworkGame_ReconnectWithAlternatePortHandler_GetAlternatePort
                  (String *serverIP,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_wss___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ws___);
    LOCK();
    UNLOCK();
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
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ignored_status_code__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Retrying_to_connect_with_alterna);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (statusCode == StatusCode__Enum_Connect) {
    return 0;
  }
  if (statusCode != StatusCode__Enum_Disconnect) {
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if (((pMVar1->fields).connState == 2) && ((this->fields).triedAlternatePort == 0)) {
      EStack_2.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
      EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
      SStack_3 = statusCode;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Ignored_status_code__,pSVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
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
    lVar5 = FUN_?();
    if (lVar5 != 0) {
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Retrying_to_connect_with_alterna,*(String **)(lVar5 + 0x10),
                          (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      lVar5 = FUN_?();
      if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)) {
        startIndex = mscorlib.dll::System::SpanHelpers::SpanHelpers_LastIndexOf
                               ((uint16_t *)(lVar5 + 0x14),0x3a,*(int32_t *)(lVar5 + 0x10),
                                (MethodInfo *)0x0);
        lVar5 = FUN_?();
        if ((lVar5 != 0) && (*(String **)(lVar5 + 0x10) != (String *)0x0)) {
          pSVar4 = mscorlib.dll::System::String::String_Remove_1
                             (*(String **)(lVar5 + 0x10),startIndex,(MethodInfo *)0x0);
          lVar5 = FUN_?();
          if (lVar5 != 0) {
            pSVar6 = *(String **)(lVar5 + 0x10);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_wss___);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_ws___);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pSVar6 != (String *)0x0) {
              bVar7 = mscorlib.dll::System::String::String_Contains
                                (pSVar6,StringLiteral_wss___,(MethodInfo *)0x0);
              if (bVar7 == 0) {
                bVar7 = mscorlib.dll::System::String::String_Contains
                                  (pSVar6,StringLiteral_ws___,(MethodInfo *)0x0);
                aIStackX_10[0].m_value = 0x4a92;
                if (bVar7 == 0) {
                  aIStackX_10[0].m_value = 27000;
                }
              }
              else {
                aIStackX_10[0].m_value = 0x4a93;
              }
              lVar5 = FUN_?();
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar4 = mscorlib.dll::System::String::String_Concat_5
                                 (pSVar4,::StringLiteral__,pSVar6,(MethodInfo *)0x0);
              if (lVar5 != 0) {
                *(String **)(lVar5 + 0x10) = pSVar4;
                func_?(lVar5 + 0x10);
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

