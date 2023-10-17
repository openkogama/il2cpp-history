
/* Void <RefreshAccessories>b__0(AvatarAccessory) */

void Assembly-CSharp.dll::BodyAccessoriesController+<>c__DisplayClass25_0::
     BodyAccessoriesController_c_DisplayClass25_0__RefreshAccessories_b__0
               (BodyAccessoriesController_c_DisplayClass25_0 *this,AvatarAccessory *accessory,
               MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_LoadedAccessoryCallback
              (this_00,accessory,(this->fields).slot,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

