
/* PickupItemMeleeWeapon+MeleeWeaponConfiguration() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon+MeleeWeaponConfiguration::
     PickupItemMeleeWeapon_MeleeWeaponConfiguration__ctor
               (PickupItemMeleeWeapon_MeleeWeaponConfiguration *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields)._.name = ::StringLiteral__;
  method_00 = (MethodInfo *)&this->fields;
  func_?(method_00,::StringLiteral__);
  (this->fields)._.cubeModelId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

