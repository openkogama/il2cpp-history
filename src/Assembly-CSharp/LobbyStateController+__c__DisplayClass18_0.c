
/* Void <CreateStartGoldRewardPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyStateController+<>c__DisplayClass18_0::
     LobbyStateController_c_DisplayClass18_0__CreateStartGoldRewardPopup_b__0
               (LobbyStateController_c_DisplayClass18_0 *this,IUIStack *x,BaseEventData *y,
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

