
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GameEarningDetailHoldTrigger::GameEarningDetailHoldTrigger_OnPointerEnter
               (GameEarningDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).earningsMenu;
  if (this_00 != (GameEarningsMenu *)0x0) {
    (this_00->fields).currentFocusedEarning = (this->fields).earningToShowDetailsFor;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_00->fields).interpolationStartTime = fVar1;
    GameEarningsMenu::GameEarningsMenu_UpdateDisplayedText(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GameEarningDetailHoldTrigger::GameEarningDetailHoldTrigger_OnPointerExit
               (GameEarningDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).earningsMenu;
  if (this_00 != (GameEarningsMenu *)0x0) {
    (this_00->fields).currentFocusedEarning = -1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_00->fields).interpolationStartTime = fVar1;
    GameEarningsMenu::GameEarningsMenu_UpdateDisplayedText(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

