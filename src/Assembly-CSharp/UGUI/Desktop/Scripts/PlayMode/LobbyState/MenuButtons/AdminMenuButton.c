
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::AdminMenuButton
     ::AdminMenuButton_OnPointerDown
               (AdminMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
      uVar2 = func_?(&puStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((eventData->fields)._button_k__BackingField == 0) {
      pMStack_1 = (this->klass->vtable).__unknown.method;
      pAStack_5 = this;
      (*(this->klass->vtable).__unknown.methodPtr)();
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

