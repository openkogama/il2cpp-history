
/* Void OnQuit() */

void Assembly-CSharp.dll::QuitConnectionError::QuitConnectionError_OnQuit
               (QuitConnectionError *this,MethodInfo *method)

{
  if ((this->fields).gotoDisconnectPage != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PortalUI_k__BackingField == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar3 = (pGVar1->fields).disconnectedURL;
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm);
      }
      if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apuStackX_8[0] = (uint16_t *)0x0;
      puStack_4 = (uint16_t *)0x0;
      uStack_5 = 0;
      uStack_6 = 0;
      ppuStack_7 = apuStackX_8;
      if (pSVar3 != (String *)0x0) {
        if ((pSVar3->fields)._stringLength == 0) {
          puStack_4 = (uint16_t *)0x1;
          uStack_5 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar8 = (pSVar3->fields)._stringLength;
          apuStackX_8[0] = &(pSVar3->fields)._firstChar;
          if (iVar8 == 0) {
            apuStackX_8[0] = (uint16_t *)0x0;
          }
          uStack_5 = CONCAT44(uStack_5._4_4_,iVar8);
          puStack_4 = apuStackX_8[0];
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&puStack_4);
      return;
    }
  }
  return;
}


/* QuitConnectionError() */

void Assembly-CSharp.dll::QuitConnectionError::QuitConnectionError__ctor
               (QuitConnectionError *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_going_to_disconnect_page_as_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
    pSVar3 = StringLiteral_Game_is_null;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar3 = StringLiteral_Game_is_null;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar4 = (pMVar1->fields).game, pMVar4 == (MVNetworkGame *)0x0)) goto code_?;
    if ((pMVar4->fields).connState != 1) {
      (this->fields).gotoDisconnectPage = 1;
      return;
    }
    pSVar3 = StringLiteral_Not_going_to_disconnect_page_as_;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar3 = StringLiteral_Not_going_to_disconnect_page_as_;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar5 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,2,pSVar3);
  return;
}

