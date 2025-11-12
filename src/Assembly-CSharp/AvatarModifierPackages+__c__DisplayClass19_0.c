
/* Boolean <HasModifier>b__0(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages+<>c__DisplayClass19_0::
     AvatarModifierPackages_c_DisplayClass19_0__HasModifier_b__0
               (AvatarModifierPackages_c_DisplayClass19_0 *this,AvatarModifierPackage *p,
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
  return p->avatarModifierPackageType == (this->fields).type;
}

