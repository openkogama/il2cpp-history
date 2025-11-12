
/* Boolean <AddModifierPackage>b__0(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages+<>c__DisplayClass20_0::
     AvatarModifierPackages_c_DisplayClass20_0__AddModifierPackage_b__0
               (AvatarModifierPackages_c_DisplayClass20_0 *this,AvatarModifierPackage *x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = x->avatarModifierPackageType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (uVar1 != (this->fields).modifierPackage.avatarModifierPackageType) {
    return 0;
  }
  return x->id == (this->fields).modifierPackage.id;
}

