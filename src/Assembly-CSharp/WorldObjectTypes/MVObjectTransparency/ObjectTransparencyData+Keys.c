
/* ObjectTransparencyData+Keys() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::ObjectTransparencyData+Keys::
     ObjectTransparencyData_Keys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_alpha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showOutline);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->static_fields->
  ShowOutline = StringLiteral_showOutline;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->static_fields->
  Alpha = StringLiteral_alpha;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                    static_fields->Alpha >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

