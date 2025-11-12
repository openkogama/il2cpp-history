
/* Void <OnHealthChange>g__DetachLocalAvatar|0(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVVehicleBase+LocalObjectsBase+<>c__DisplayClass15_0::
     MVVehicleBase_LocalObjectsBase_c_DisplayClass15_0__OnHealthChange_g__DetachLocalAvatar_0
               (MVVehicleBase_LocalObjectsBase_c_DisplayClass15_0 *this,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    if (((bVar1 <= (wo->klass->_1).naturalAligment) &&
        ((MVAvatarLocal__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
         TypeInfo__MVAvatarLocal)) &&
       (bVar2 = iRam_? != 0, (this->fields).localAvatar = (MVAvatarLocal *)wo, bVar2))
    {
      uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  return;
}

