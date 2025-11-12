
/* Void <HighlightInCategoryAtSlot>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass1_0::
     FirstTimeGuiHandler_c_DisplayClass1_0__HighlightInCategoryAtSlot_b__0
               (FirstTimeGuiHandler_c_DisplayClass1_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <HighlightInCategoryAtSlot>b__1(IHighLightClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass1_0::
     FirstTimeGuiHandler_c_DisplayClass1_0__HighlightInCategoryAtSlot_b__1
               (FirstTimeGuiHandler_c_DisplayClass1_0 *this,IHighLightClientShopItem *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHighLightClientShopItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IHighLightClientShopItem *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHighLightClientShopItem,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

