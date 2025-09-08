
/* Void LobbyState() */

void Assembly-CSharp.dll::EnterLobbyState::EnterLobbyState_LobbyState
               (EnterLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pIStack_2 = TypeInfo__IPlayModeUI;
    pIStack_3 = pIVar1;
    func_?(8);
    return;
  }
  uVar4 = func_?(&pIStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

