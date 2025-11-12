
/* Void <CreateStartGoldRewardPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopLobbyStateController+<>c__DisplayClass24_0::
     DesktopLobbyStateController_c_DisplayClass24_0__CreateStartGoldRewardPopup_b__0
               (DesktopLobbyStateController_c_DisplayClass24_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).startGoldRewardPopup != (GameObject *)0x0) && (x != (IUIStack *)0x0)) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

