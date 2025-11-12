
/* Void <OpenTab>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass0_0::FirstTimeGuiHandler_c_DisplayClass0_0__OpenTab_b__0
               (FirstTimeGuiHandler_c_DisplayClass0_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(2,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x,1,
                  (this->fields).itemCategory);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OpenTab>b__1(IOpenClientShopTab, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass0_0::FirstTimeGuiHandler_c_DisplayClass0_0__OpenTab_b__1
               (FirstTimeGuiHandler_c_DisplayClass0_0 *this,IOpenClientShopTab *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IOpenClientShopTab);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IOpenClientShopTab *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopTab,x,1,
                  (this->fields).itemCategory);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

