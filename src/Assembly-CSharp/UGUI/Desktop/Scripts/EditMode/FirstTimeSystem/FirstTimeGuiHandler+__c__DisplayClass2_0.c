
/* Void <OpenPage>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass2_0::FirstTimeGuiHandler_c_DisplayClass2_0__OpenPage_b__0
               (FirstTimeGuiHandler_c_DisplayClass2_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    ppIStack_1 = (IPlayerInventory__Class **)(this->fields).slotsSlotCountPerPage;
    puStack_2 = (undefined *)(this->fields).itemCategory;
    uStack_3 = 1;
    func_?(3,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OpenPage>b__1(IOpenClientShopPage, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass2_0::FirstTimeGuiHandler_c_DisplayClass2_0__OpenPage_b__1
               (FirstTimeGuiHandler_c_DisplayClass2_0 *this,IOpenClientShopPage *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IOpenClientShopPage;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IOpenClientShopPage *)0x0) {
    ppIStack_1 = (IOpenClientShopPage__Class **)(this->fields).slotsSlotCountPerPage;
    puStack_2 = (undefined *)(this->fields).itemCategory;
    uStack_3 = 1;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopPage,x);
    return;
  }
  ppIStack_1 = (IOpenClientShopPage__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

