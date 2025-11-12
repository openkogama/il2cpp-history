
/* PickupItemCustomGun+CustomGunConfiguration() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+CustomGunConfiguration::
     PickupItemCustomGun_CustomGunConfiguration__ctor
               (PickupItemCustomGun_CustomGunConfiguration *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.name = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields)._.cubeModelId = -1;
  return;
}

