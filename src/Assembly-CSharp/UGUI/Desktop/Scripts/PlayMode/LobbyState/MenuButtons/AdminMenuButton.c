
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::AdminMenuButton
     ::AdminMenuButton_OnPointerDown
               (AdminMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((eventData->fields)._button_k__BackingField == 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method);
      return;
    }
  }
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::AdminMenuButton
     ::AdminMenuButton_OnPointerEnter
               (AdminMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMouseOver = 1;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::AdminMenuButton
     ::AdminMenuButton_OnPointerExit
               (AdminMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMouseOver = 0;
  return;
}

