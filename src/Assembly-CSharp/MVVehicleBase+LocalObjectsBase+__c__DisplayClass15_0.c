
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
  if (wo != (MVWorldObjectClient *)0x0) {
    if (((wo->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
       ((MVAvatarLocal__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarLocal)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    pMVar2 = (MVAvatarLocal *)0x0;
    if (bVar1) {
      pMVar2 = (MVAvatarLocal *)wo;
    }
    if (pMVar2 != (MVAvatarLocal *)0x0) {
      (this->fields).localAvatar = pMVar2;
      func_?(&this->fields,pMVar2);
    }
  }
  return;
}

