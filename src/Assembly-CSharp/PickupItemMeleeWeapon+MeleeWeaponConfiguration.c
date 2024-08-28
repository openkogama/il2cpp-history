
/* PickupItemMeleeWeapon+MeleeWeaponConfiguration() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon+MeleeWeaponConfiguration::
     PickupItemMeleeWeapon_MeleeWeaponConfiguration__ctor
               (PickupItemMeleeWeapon_MeleeWeaponConfiguration *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&this->fields;
  (((PickupItemMeleeWeapon_MeleeWeaponConfiguration__Fields *)method_00)->_).name =
       ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  (this->fields)._.cubeModelId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

