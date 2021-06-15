
/* Boolean SetPage(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SetPage(TabState *this,int32_t page,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = TabState_get_MaxPages(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                    (page,1,iVar1,(MethodInfo *)0x0);
  (this->fields).currentPage = iVar1;
  return 1;
}


/* Boolean SlotIndexIsInRange(Int32) */

bool Assembly-CSharp.dll::TabState::TabState_SlotIndexIsInRange
               (TabState *this,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__System__Int32,2);
  if (iVar1 == 0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(int32_t *)(iVar1 + 0x10) = ((this->fields).currentPage + -1) * (this->fields).slotsPrPage;
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    iVar3 = (this->fields).slotsPrPage * (this->fields).currentPage;
    *(int *)(iVar1 + 0x14) = iVar3;
    if (*(uint *)(iVar1 + 0xc) != 0) {
      if (slotIndex < *(int *)(iVar1 + 0x10)) {
        return 0;
      }
      if (1 < *(uint *)(iVar1 + 0xc)) {
        if (iVar3 <= slotIndex) {
          return 0;
        }
        return 1;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
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


/* TabState(String, Int32) */

void Assembly-CSharp.dll::TabState::TabState__ctor
               (TabState *this,String *name,int32_t slotsPrPage,MethodInfo *method)

{
  (this->fields).currentPage = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).slotsPrPage = slotsPrPage;
  (this->fields).name = name;
  return;
}


/* Int32 get_MaxPages() */

int32_t Assembly-CSharp.dll::TabState::TabState_get_MaxPages(TabState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).highestSlotIndex;
  iVar2 = (this->fields).slotsPrPage;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                    ((float)iVar1 / (float)iVar2,(MethodInfo *)0x0);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2(iVar3,1,(MethodInfo *)0x0);
  return iVar3;
}


/* Int32[] get_SlotRange() */

Int32__Array *
Assembly-CSharp.dll::TabState::TabState_get_SlotRange(TabState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (Int32__Array *)func_?(TypeInfo__System__Int32,2);
  if (pIVar1 == (Int32__Array *)0x0) {
    func_?(0);
  }
  else if (pIVar1->max_length != 0) {
    pIVar1->vector[0] = ((this->fields).currentPage + -1) * (this->fields).slotsPrPage;
    if (1 < pIVar1->max_length) {
      pIVar1->vector[1] = (this->fields).slotsPrPage * (this->fields).currentPage;
      return pIVar1;
    }
    goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar1 = (Int32__Array *)(*pcVar3)();
  return pIVar1;
}

