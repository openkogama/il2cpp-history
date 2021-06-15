
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionButton::SpawnRoleSelectionButton_OnPointerDown
               (SpawnRoleSelectionButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pHVar2 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
      this_00 = (this->fields).spawnRoleMenu;
      if (this_00 == (SpawnRoleMenu *)0x0) goto code_?;
      SpawnRoleMenu::SpawnRoleMenu_OnSelectButtonPressed(this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionButton::SpawnRoleSelectionButton_OnPointerEnter
               (SpawnRoleSelectionButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMouseOver = 1;
  return;
}

