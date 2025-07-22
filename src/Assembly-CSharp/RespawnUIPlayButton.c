
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::RespawnUIPlayButton::RespawnUIPlayButton_OnPointerDown
               (RespawnUIPlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if ((eventData->fields)._button_k__BackingField == 0) {
      this_00 = (this->fields).respawnUIController;
      if (this_00 == (DeathUIController *)0x0) goto code_?;
      DeathUIController::DeathUIController_OnPressPlay(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

