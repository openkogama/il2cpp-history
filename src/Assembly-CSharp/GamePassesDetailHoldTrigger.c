
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GamePassesDetailHoldTrigger::GamePassesDetailHoldTrigger_OnPointerEnter
               (GamePassesDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pGVar1 = (this->fields).gamePassesShopDetails;
  if (pGVar1 != (GamePassesShopDetails *)0x0) {
    (pGVar1->fields).currentFocusedTier = (this->fields).tierToShowDetailsFor;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (pGVar1->fields).interpolationStartTime = fVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GamePassesDetailHoldTrigger::GamePassesDetailHoldTrigger_OnPointerExit
               (GamePassesDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pGVar1 = (this->fields).gamePassesShopDetails;
  if (pGVar1 != (GamePassesShopDetails *)0x0) {
    (pGVar1->fields).currentFocusedTier = 0;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (pGVar1->fields).interpolationStartTime = fVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

