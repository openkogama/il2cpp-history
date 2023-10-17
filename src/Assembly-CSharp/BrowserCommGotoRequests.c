
/* Void GotoDisconnected() */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoDisconnected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoEliteUpgrade(Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoEliteUpgrade
               (bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).eliteUpgradeURL;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoIdle() */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoIdle
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).idleURL;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoLogin(Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoLogin
               (bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).loginURL;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoMainpage(Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoMainpage
               (bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    url = (pMVar1->fields)._KogamaMainpageURL_k__BackingField;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoPlayerProfile(Int32, Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPlayerProfile
               (int32_t profileId,bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = (pGVar1->fields).playerProfileURL;
    str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&profileId,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,str1,::StringLiteral__,(MethodInfo *)0x0);
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      _modalPopup = (BrowserComm__Class **)TypeInfo__BrowserComm;
      _newTab = (String *)&UNK_?;
      func_?();
    }
    if (cRam_? == '\0') {
      _modalPopup = &TypeInfo__BrowserComm;
      _newTab = (String *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      _modalPopup = (BrowserComm__Class **)TypeInfo__BrowserComm;
      _newTab = (String *)&UNK_?;
      func_?();
    }
    if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest != 0) {
      _modalPopup = (BrowserComm__Class **)0x0;
      profileId = (int32_t)&UNK_?;
      _newTab = pSVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Application::Application_OpenURL
                (pSVar2,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GotoPurchaseGold(Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoPurchaseGold
               (bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).purchaseGoldURL;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoSignout() */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignout
               (MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_ApplicationQuit
            ((QuitBaseCallback *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void GotoSignup(Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup
               (bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).signupURL;
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
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GotoURL(String, Boolean, Boolean) */

void Assembly-CSharp.dll::BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
               (String *URL,bool newTab,bool modalPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
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
    UnityEngine.CoreModule.dll::UnityEngine::Application::Application_OpenURL(URL,(MethodInfo *)0x0)
    ;
  }
  return;
}

