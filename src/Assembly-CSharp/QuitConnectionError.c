
/* Void OnQuit() */

void Assembly-CSharp.dll::QuitConnectionError::QuitConnectionError_OnQuit
               (QuitConnectionError *this,MethodInfo *method)

{
  if ((this->fields).gotoDisconnectPage != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__BrowserComm);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    url = (pGVar1->fields).disconnectedURL;
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__BrowserComm);
      cRam_? = '\x01';
    }
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm);
    }
    if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_OpenURL
                (url,(MethodInfo *)0x0);
    }
  }
  return;
}


/* QuitConnectionError() */

void Assembly-CSharp.dll::QuitConnectionError::QuitConnectionError__ctor
               (QuitConnectionError *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Not_going_to_disconnect_page_as_);
    func_?(&StringLiteral_Game_is_null);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Game_is_null,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pMVar1->fields).connState != 1) {
    (this->fields).gotoDisconnectPage = 1;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Not_going_to_disconnect_page_as_,(MethodInfo *)0x0);
  return;
}

