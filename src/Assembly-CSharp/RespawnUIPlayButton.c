
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::RespawnUIPlayButton::RespawnUIPlayButton_OnPointerDown
               (RespawnUIPlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
      this_00 = (this->fields).respawnUIController;
      if (this_00 == (DeathUIController *)0x0) goto code_?;
      DeathUIController::DeathUIController_OnPressPlay(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

