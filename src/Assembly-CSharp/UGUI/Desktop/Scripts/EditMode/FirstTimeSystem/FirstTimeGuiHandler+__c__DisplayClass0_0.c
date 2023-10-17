
/* Void <OpenTab>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass0_0::FirstTimeGuiHandler_c_DisplayClass0_0__OpenTab_b__0
               (FirstTimeGuiHandler_c_DisplayClass0_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    ppIStack_1 = (IPlayerInventory__Class **)(this->fields).itemCategory;
    puStack_2 = (undefined *)0x1;
    pIStack_3 = x;
    func_?(2,TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OpenTab>b__1(IOpenClientShopTab, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass0_0::FirstTimeGuiHandler_c_DisplayClass0_0__OpenTab_b__1
               (FirstTimeGuiHandler_c_DisplayClass0_0 *this,IOpenClientShopTab *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IOpenClientShopTab;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IOpenClientShopTab *)0x0) {
    ppIStack_1 = (IOpenClientShopTab__Class **)(this->fields).itemCategory;
    puStack_2 = (undefined *)0x1;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopTab);
    return;
  }
  ppIStack_1 = (IOpenClientShopTab__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

