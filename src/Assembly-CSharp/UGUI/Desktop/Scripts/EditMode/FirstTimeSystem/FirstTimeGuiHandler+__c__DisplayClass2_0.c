
/* Void <OpenPage>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass2_0::FirstTimeGuiHandler_c_DisplayClass2_0__OpenPage_b__0
               (FirstTimeGuiHandler_c_DisplayClass2_0 *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(3,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OpenPage>b__1(IOpenClientShopPage, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeGuiHandler+<>c__DisplayClass2_0::FirstTimeGuiHandler_c_DisplayClass2_0__OpenPage_b__1
               (FirstTimeGuiHandler_c_DisplayClass2_0 *this,IOpenClientShopPage *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IOpenClientShopPage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IOpenClientShopPage *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopPage,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

