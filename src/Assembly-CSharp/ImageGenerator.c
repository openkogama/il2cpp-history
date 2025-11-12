
/* IEnumerator CreateTextureFromData(MVWorldObjectClient, Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::ImageGenerator::ImageGenerator_CreateTextureFromData
          (MVWorldObjectClient *wo,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ImageGenerator___CreateTextureFromData_d__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ImageGenerator___CreateTextureFromData_d__0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)wo;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].monitor = (MonitorData *)callback;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}

