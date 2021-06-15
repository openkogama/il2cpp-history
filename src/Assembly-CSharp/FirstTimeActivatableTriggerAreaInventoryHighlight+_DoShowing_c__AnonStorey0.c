
/* Void <>m__0(IOpenClientShopTab, BaseEventData) */

void Assembly-CSharp.dll::
     FirstTimeActivatableTriggerAreaInventoryHighlight+<DoShowing>c__AnonStorey0::
     FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing_c_AnonStorey0___m__0
               (FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing_c_AnonStorey0 *this,
               IOpenClientShopTab *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._this;
  if ((pFVar1 != (FirstTimeActivatableTriggerAreaInventoryHighlight *)0x0) &&
     (x != (IOpenClientShopTab *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopTab,x,1,
                    (pFVar1->fields).itemCategory);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1(IHighLightClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::
     FirstTimeActivatableTriggerAreaInventoryHighlight+<DoShowing>c__AnonStorey0::
     FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing_c_AnonStorey0___m__1
               (FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing_c_AnonStorey0 *this,
               IHighLightClientShopItem *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._this;
  if ((pFVar1 != (FirstTimeActivatableTriggerAreaInventoryHighlight *)0x0) &&
     (x != (IHighLightClientShopItem *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHighLightClientShopItem,x,1,
                    (pFVar1->fields).itemCategory,(this->fields).itemSlot);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

