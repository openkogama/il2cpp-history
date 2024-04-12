
/* Boolean SetPage(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SetPage(TabState *this,int32_t page,MethodInfo *method)

{
  iVar1 = TabState_get_MaxPages(this,(MethodInfo *)0x0);
  if (page < 1) {
    (this->fields).currentPage = 1;
    return 1;
  }
  if (iVar1 < page) {
    (this->fields).currentPage = iVar1;
    return 1;
  }
  (this->fields).currentPage = page;
  return 1;
}


/* Boolean SlotIndexIsInRange(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SlotIndexIsInRange
               (TabState *this,int32_t slotIndex,MethodInfo *method)

{
  pIVar1 = TabState_get_SlotRange(this,(MethodInfo *)0x0);
  if (pIVar1 == (Int32__Array *)0x0) {
    func_?();
  }
  else if (pIVar1->max_length != 0) {
    if (slotIndex < pIVar1->vector[0]) {
      return 0;
    }
    if (1 < pIVar1->max_length) {
      return slotIndex < pIVar1->vector[1];
    }
  }
  func_?();
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
      iVar1 = TabState_get_MaxPages(this,(MethodInfo *)0x0);
      (this->fields).currentPage = iVar1;
      return 1;
    }
  }
  else if (pageDir == 1) {
    iVar2 = (this->fields).currentPage;
    iVar1 = TabState_get_MaxPages(this,(MethodInfo *)0x0);
    if (iVar2 == iVar1) {
      (this->fields).currentPage = 1;
      return 1;
    }
  }
  piVar3 = &(this->fields).currentPage;
  *piVar3 = *piVar3 + pageDir;
  return 1;
}


/* TabState(Int32, String, Int32) */

void Assembly-CSharp.dll::TabState::TabState__ctor
               (TabState *this,int32_t tabId,String *name,int32_t slotsPrPage,MethodInfo *method)

{
  (this->fields).currentPage = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._TabID_k__BackingField = tabId;
  (this->fields).slotsPrPage = slotsPrPage;
  (this->fields).name = name;
  func_?(&(this->fields).name,name);
  return;
}


/* Int32 get_MaxPages() */

int32_t Assembly-CSharp.dll::TabState::TabState_get_MaxPages(TabState *this,MethodInfo *method)

{
  iVar1 = (this->fields).highestSlotIndex;
  iVar2 = (this->fields).slotsPrPage;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar3 = (float10)func_?((double)((float)iVar1 / (float)iVar2));
  iVar4 = 1;
  if (1 < (int)fVar3) {
    iVar4 = (int)fVar3;
  }
  return iVar4;
}


/* Int32[] get_SlotRange() */

Int32__Array *
Assembly-CSharp.dll::TabState::TabState_get_SlotRange(TabState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  ppIStack_1 = (Int32__Array__Class **)0x2;
  pIStack_2 = TypeInfo__System__Int32;
  pIVar3 = (Int32__Array *)func_?();
  if (pIVar3 != (Int32__Array *)0x0) {
    if (pIVar3->max_length != 0) {
      pIVar3->vector[0] = ((this->fields).currentPage + -1) * (this->fields).slotsPrPage;
      if (1 < pIVar3->max_length) {
        pIVar3->vector[1] = (this->fields).slotsPrPage * (this->fields).currentPage;
        return pIVar3;
      }
    }
    ppIStack_1 = (Int32__Array__Class **)0x0;
    pIStack_2 = (Int32__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    pIVar3 = (Int32__Array *)(*pcVar4)();
    return pIVar3;
  }
  ppIStack_1 = (Int32__Array__Class **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  pIVar3 = (Int32__Array *)(*pcVar4)();
  return pIVar3;
}

