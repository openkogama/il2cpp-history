
/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GamePassesDetailHoldTrigger::GamePassesDetailHoldTrigger_OnPointerEnter
               (GamePassesDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pGVar1 = (this->fields).gamePassesShopDetails;
  if (pGVar1 == (GamePassesShopDetails *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pGVar1->fields).currentFocusedTier = (this->fields).tierToShowDetailsFor;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  (pGVar1->fields).interpolationStartTime = fVar4;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GamePassesDetailHoldTrigger::GamePassesDetailHoldTrigger_OnPointerExit
               (GamePassesDetailHoldTrigger *this,PointerEventData *eventData,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  pGVar2 = (this->fields).gamePassesShopDetails;
  if (pGVar2 == (GamePassesShopDetails *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (pGVar2->fields).currentFocusedTier = 0;
  pcVar3 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcVar1)();
  (pGVar2->fields).interpolationStartTime = fVar5;
  return;
}

