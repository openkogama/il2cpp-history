
/* HackingToolDetector+HackingToolReport(ApplicationDesc) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).kind = 0;
  (this->fields).app = app;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).app >> 0xc);
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
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_1
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,String *exactFind,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).kind = 1;
  (this->fields).app = app;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).app >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).exactFind = exactFind;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).exactFind >> 0xc);
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
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_2
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).kind = 2;
  (this->fields).app = app;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).app >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).foundKey = foundKey;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).foundKey >> 0xc);
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
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_3
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,String *exactFind,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).kind = 3;
  (this->fields).app = app;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).app >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).foundKey = foundKey;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).foundKey >> 0xc);
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
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).exactFind = exactFind;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).exactFind >> 0xc);
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
  return;
}

