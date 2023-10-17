
/* Void <DoShowing>b__5_0(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__DoShowing_b__5_0
               (FirstTimeActivatableClientShopInventoryGotoCategory_c *this,InventoryController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (x != (InventoryController *)0x0) {
    InventoryController::InventoryController_SelectTab(x,3,0,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <DoShowing>b__5_1(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__DoShowing_b__5_1
               (FirstTimeActivatableClientShopInventoryGotoCategory_c *this,InventoryController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (x != (InventoryController *)0x0) {
    InventoryController::InventoryController_TabSelected(x,3,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FirstTimeActivatableClientShopInventoryGotoCategory+<>c() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory+<>c::
     FirstTimeActivatableClientShopInventoryGotoCategory_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   );
    cRam_? = '\x01';
  }
  value = (FirstTimeActivatableClientShopInventoryGotoCategory_c *)
          func_?(
                         TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                         );
  if (value != (FirstTimeActivatableClientShopInventoryGotoCategory_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
    ->static_fields->__9 = value;
    func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                    ->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

