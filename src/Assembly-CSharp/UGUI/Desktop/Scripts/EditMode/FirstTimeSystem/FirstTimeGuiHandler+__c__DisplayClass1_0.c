
/* Void <HighlightInCategoryAtSlot>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass1_0::
     FirstTimeGuiHandler_c_DisplayClass1_0__HighlightInCategoryAtSlot_b__0
               (FirstTimeGuiHandler_c_DisplayClass1_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    ppIStack_1 = (IPlayerInventory__Class **)(this->fields).itemSlot;
    puStack_2 = (undefined *)(this->fields).itemCategory;
    uStack_3 = 1;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IHighLightClientShopItem;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IHighLightClientShopItem *)0x0) {
    ppIStack_1 = (IHighLightClientShopItem__Class **)(this->fields).itemSlot;
    puStack_2 = (undefined *)(this->fields).itemCategory;
    uStack_3 = 1;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHighLightClientShopItem,x);
    return;
  }
  ppIStack_1 = (IHighLightClientShopItem__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

