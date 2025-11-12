
/* Boolean SetPage(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SetPage(TabState *this,int32_t page,MethodInfo *method)

{
  iVar1 = FUN_?((float)(this->fields).highestSlotIndex / (float)(this->fields).slotsPrPage);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  if (0 < page) {
    if (iVar2 < page) {
      (this->fields).currentPage = iVar2;
      return 1;
    }
    (this->fields).currentPage = page;
    return 1;
  }
  (this->fields).currentPage = 1;
  return 1;
}


/* Boolean SlotIndexIsInRange(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SlotIndexIsInRange
               (TabState *this,int32_t slotIndex,MethodInfo *method)

{
  pIVar1 = TabState_get_SlotRange(this,(MethodInfo *)0x0);
  if (pIVar1 == (Int32__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((int)pIVar1->max_length != 0) {
    if (slotIndex < pIVar1->vector[0]) {
      return 0;
    }
    if (1 < (uint)pIVar1->max_length) {
      return slotIndex < pIVar1->vector[1];
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean UpdatePage(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_UpdatePage
               (TabState *this,int32_t pageDir,MethodInfo *method)

{
  if (pageDir == -1) {
    if ((this->fields).currentPage == 1) {
      iVar1 = FUN_?((float)(this->fields).highestSlotIndex /
                            (float)(this->fields).slotsPrPage);
      iVar2 = 1;
      if (1 < iVar1) {
        iVar2 = iVar1;
      }
code_?:
      (this->fields).currentPage = iVar2;
      return 1;
    }
  }
  else if (pageDir == 1) {
    iVar1 = (this->fields).currentPage;
    iVar2 = FUN_?((float)(this->fields).highestSlotIndex / (float)(this->fields).slotsPrPage
                         );
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = 1;
    if (iVar1 == iVar3) goto code_?;
  }
  piVar4 = &(this->fields).currentPage;
  *piVar4 = *piVar4 + pageDir;
  return 1;
}


/* TabState(Int32, String, Int32) */

void Assembly-CSharp.dll::TabState::TabState__ctor
               (TabState *this,int32_t tabId,String *name,int32_t slotsPrPage,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).currentPage = 1;
  (this->fields)._TabID_k__BackingField = tabId;
  (this->fields).slotsPrPage = slotsPrPage;
  (this->fields).name = name;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
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


/* Int32 get_MaxPages() */

int32_t Assembly-CSharp.dll::TabState::TabState_get_MaxPages(TabState *this,MethodInfo *method)

{
  iVar1 = FUN_?((float)(this->fields).highestSlotIndex / (float)(this->fields).slotsPrPage);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* Int32[] get_SlotRange() */

Int32__Array *
Assembly-CSharp.dll::TabState::TabState_get_SlotRange(TabState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,2);
  if (pIVar1 != (Int32__Array *)0x0) {
    if ((int)pIVar1->max_length != 0) {
      pIVar1->vector[0] = ((this->fields).currentPage + -1) * (this->fields).slotsPrPage;
      if (1 < (uint)pIVar1->max_length) {
        pIVar1->vector[1] = (this->fields).currentPage * (this->fields).slotsPrPage;
        return pIVar1;
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar1 = (Int32__Array *)(*pcVar2)();
    return pIVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar2)();
  return pIVar1;
}

