
/* Void <OnHealthChange>g__DetachLocalAvatar|0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase+<>c__DisplayClass15_0::
     MVVehicleBase_LocalObjectsBase_c_DisplayClass15_0__OnHealthChange_g__DetachLocalAvatar_0
               (MVVehicleBase_LocalObjectsBase_c_DisplayClass15_0 *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  if (((wo != (MVWorldObjectClient *)0x0) &&
      ((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <= (wo->klass->_1).typeHierarchyDepth)) &&
     ((MVAvatarLocal__Class *)
      (wo->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] ==
      TypeInfo__MVAvatarLocal)) {
    (this->fields).localAvatar = (MVAvatarLocal *)wo;
    func_?(&this->fields,wo);
  }
  return;
}

