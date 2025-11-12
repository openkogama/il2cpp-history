
/* EditorToolbar(EditorToolbarTab[], Int32, Color) */

void Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar__ctor(EditorToolbar *this,EditorToolbarTab__Array *tabs,int32_t numTabsPerRow,Color *activeTabColor,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._activeTabColor.r = 0.0;
  (this->fields)._activeTabColor.g = 1.0;
  (this->fields)._activeTabColor.b = 0.0;
  (this->fields)._activeTabColor.a = 1.0;
  (this->fields)._numTabsPerRow = 3;
  (this->fields)._tabs = tabs;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._tabs >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fVar6 = activeTabColor->r;
  fVar7 = activeTabColor->g;
  fVar8 = activeTabColor->b;
  fVar9 = activeTabColor->a;
  (this->fields)._numTabsPerRow = numTabsPerRow;
  (this->fields)._activeTabColor.r = fVar6;
  (this->fields)._activeTabColor.g = fVar7;
  (this->fields)._activeTabColor.b = fVar8;
  (this->fields)._activeTabColor.a = fVar9;
  return;
}


/* EditorToolbarTab get_ActiveTab() */

EditorToolbarTab * Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_get_ActiveTab(EditorToolbar *this,MethodInfo *method)

{
  pEVar1 = (this->fields)._tabs;
  if (pEVar1 == (EditorToolbarTab__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pEVar3 = (EditorToolbarTab *)(*pcVar2)();
    return pEVar3;
  }
  uVar4 = (this->fields)._activeTabIndex;
  if (uVar4 < (uint)pEVar1->max_length) {
    return pEVar1->vector[(int)uVar4];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pEVar3 = (EditorToolbarTab *)(*pcVar2)();
  return pEVar3;
}


/* Void set_NumTabsPerRow(Int32) */

void Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_set_NumTabsPerRow(EditorToolbar *this,int32_t value,MethodInfo *method)

{
  iVar1 = 1;
  if (0 < value) {
    iVar1 = value;
  }
  (this->fields)._numTabsPerRow = iVar1;
  return;
}

