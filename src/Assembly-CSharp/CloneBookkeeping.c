
/* CloneBookkeeping() */

void Assembly-CSharp.dll::CloneBookkeeping::CloneBookkeeping__ctor
               (CloneBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).cloneIdIncrement = -1;
  (this->fields).cloneLinkIdIncrement = -1;
  (this->fields).cloneObjectLinkIdIncrement = -1;
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).linkIds = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).linkIds >> 0xc);
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
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).objectLinkIds = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectLinkIds >> 0xc);
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
  pDVar7 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar7,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).worldObjectIdsMaps = pDVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldObjectIdsMaps >> 0xc);
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

