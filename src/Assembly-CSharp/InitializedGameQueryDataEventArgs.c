
/* InitializedGameQueryDataEventArgs(MVWorldObjectClient, Int32) */

void Assembly-CSharp.dll::InitializedGameQueryDataEventArgs::InitializedGameQueryDataEventArgs__ctor
               (InitializedGameQueryDataEventArgs *this,MVWorldObjectClient *rootWO,
               int32_t instigatorActorNumber,MethodInfo *method)

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
  (this->fields).RootWO = rootWO;
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
  (this->fields).InstigatorActorNumber = instigatorActorNumber;
  return;
}

