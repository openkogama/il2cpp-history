
/* RuntimeBuildData() */

void Assembly-CSharp.dll::BuildSystem::RuntimeBuildData::RuntimeBuildData__ctor
               (RuntimeBuildData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BuildSystem__RuntimeBuildData__BuildMetadata);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BuildSystem__RuntimeBuildData__VersionInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RuntimeBuildData_VersionInfo *)
           FUN_?(TypeInfo__BuildSystem__RuntimeBuildData__VersionInfo);
  bVar2 = iRam_? != 0;
  (this->fields)._Version_k__BackingField = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pRVar7 = (RuntimeBuildData_BuildMetadata *)
           FUN_?(TypeInfo__BuildSystem__RuntimeBuildData__BuildMetadata);
  bVar2 = iRam_? != 0;
  (this->fields)._Metadata_k__BackingField = pRVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._Metadata_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

