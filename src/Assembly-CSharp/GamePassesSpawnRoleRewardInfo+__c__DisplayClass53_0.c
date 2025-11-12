
/* Void <OnPlayerPlanetDataUpdated>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo+<>c__DisplayClass53_0::
     GamePassesSpawnRoleRewardInfo_c_DisplayClass53_0__OnPlayerPlanetDataUpdated_b__2
               (GamePassesSpawnRoleRewardInfo_c_DisplayClass53_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleUnlockPopup;
  if (this_00 != (SpawnRoleUnlockedPopupController *)0x0) {
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

