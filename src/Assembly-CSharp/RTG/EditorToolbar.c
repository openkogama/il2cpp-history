
/* EditorToolbar(EditorToolbarTab[], Int32, Color) */

void Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar__ctor
               (EditorToolbar *this,EditorToolbarTab__Array *tabs,int32_t numTabsPerRow,
               Color *activeTabColor,MethodInfo *method)

{
  uVar1 = _UNK_?;
  bVar2 = iRam_? != 0;
  uVar3 = _UNK_?;
  (this->fields)._activeTabColor.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._activeTabColor.g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (this->fields)._activeTabColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields)._activeTabColor.a = (float)uVar3;
  (this->fields)._numTabsPerRow = 3;
  (this->fields)._tabs = tabs;
  if (bVar2) {
    uVar5 = (uint)((ulonglong)&(this->fields)._tabs >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar7 == *puVar8;
      if (bVar2) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  fVar9 = activeTabColor->r;
  fVar10 = activeTabColor->g;
  fVar11 = activeTabColor->b;
  fVar12 = activeTabColor->a;
  (this->fields)._numTabsPerRow = numTabsPerRow;
  (this->fields)._activeTabColor.r = fVar9;
  (this->fields)._activeTabColor.g = fVar10;
  (this->fields)._activeTabColor.b = fVar11;
  (this->fields)._activeTabColor.a = fVar12;
  return;
}


/* EditorToolbarTab get_ActiveTab() */

EditorToolbarTab *
Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_get_ActiveTab
          (EditorToolbar *this,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_set_NumTabsPerRow
               (EditorToolbar *this,int32_t value,MethodInfo *method)

{
  iVar1 = 1;
  if (0 < value) {
    iVar1 = value;
  }
  (this->fields)._numTabsPerRow = iVar1;
  return;
}

