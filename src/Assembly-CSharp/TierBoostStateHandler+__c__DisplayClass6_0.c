
/* Void <ShowSpawnRoleSelectionMenu>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierBoostStateHandler+<>c__DisplayClass6_0::
     TierBoostStateHandler_c_DisplayClass6_0__ShowSpawnRoleSelectionMenu_b__0
               (TierBoostStateHandler_c_DisplayClass6_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleSelectionMenu;
  if (this_00 != (SpawnRoleMenu *)0x0) {
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

