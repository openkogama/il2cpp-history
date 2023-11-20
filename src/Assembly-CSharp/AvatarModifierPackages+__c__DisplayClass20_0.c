
/* Boolean <AddModifierPackage>b__0(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages+<>c__DisplayClass20_0::
     AvatarModifierPackages_c_DisplayClass20_0__AddModifierPackage_b__0
               (AvatarModifierPackages_c_DisplayClass20_0 *this,AvatarModifierPackage x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
  if (x.avatarModifierPackageType != (this->fields).modifierPackage.avatarModifierPackageType) {
    return 0;
  }
  return x.id == (this->fields).modifierPackage.id;
}

