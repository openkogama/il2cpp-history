
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::SpawnRoleSelectionButton::SpawnRoleSelectionButton_OnPointerDown
               (SpawnRoleSelectionButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
code_?:
      uVar1 = func_?(&puStack_2);
      func_?(uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((eventData->fields)._button_k__BackingField == 0) {
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

