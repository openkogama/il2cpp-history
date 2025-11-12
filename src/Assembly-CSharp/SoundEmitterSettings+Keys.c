
/* SoundEmitterSettings+Keys() */

void Assembly-CSharp.dll::SoundEmitterSettings+Keys::SoundEmitterSettings_Keys__ctor
               (SoundEmitterSettings_Keys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String,3);
  if (pSVar1 == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(pSVar1,0,StringLiteral_volume);
  FUN_?(pSVar1,1,StringLiteral_pitch);
  FUN_?(pSVar1,2,StringLiteral_range);
  bVar3 = iRam_? != 0;
  (this->fields).keys = pSVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

