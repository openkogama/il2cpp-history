
/* Void <GoToMenu>b__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyFlowMenu+<>c__DisplayClass24_2::
     LobbyFlowMenu_c_DisplayClass24_2__GoToMenu_b__3
               (LobbyFlowMenu_c_DisplayClass24_2 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).winConMenu;
  if (this_00 != (WinningConditionBriefing *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

