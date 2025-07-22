
/* Boolean <RemoveModifierPackage>b__0(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages+<>c__DisplayClass25_0::
     AvatarModifierPackages_c_DisplayClass25_0__RemoveModifierPackage_b__0
               (AvatarModifierPackages_c_DisplayClass25_0 *this,AvatarModifierPackage x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
  bVar1 = AvatarModifierPackage::AvatarModifierPackage_IsEqualTo
                    (&(this->fields).modifierPackage,x,(MethodInfo *)0x0);
  return bVar1;
}

