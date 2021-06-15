
/* Void <>m__0(AvatarAccessory) */

void Assembly-CSharp.dll::BodyAccessoriesController+<RefreshAccessories>c__AnonStorey0::
     BodyAccessoriesController_RefreshAccessories_c_AnonStorey0___m__0
               (BodyAccessoriesController_RefreshAccessories_c_AnonStorey0 *this,
               AvatarAccessory *accessory,MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if (this_00 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_LoadedAccessoryCallback
              (this_00,accessory,(this->fields).slot,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

