
/* TakeDamageEventArgs(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::TakeDamageEventArgs::TakeDamageEventArgs__ctor
               (TakeDamageEventArgs *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = iRam_? != 0;
  (this->fields).damage = amount;
  (this->fields).damageSource = damageDealer;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).damageSource >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).damageType = (uint8_t)damageType;
  return;
}

