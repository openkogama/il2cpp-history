
/* EditorToolbar(EditorToolbarTab[], Int32, Color) */

void Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar__ctor
               (EditorToolbar *this,EditorToolbarTab__Array *tabs,int32_t numTabsPerRow,
               Color activeTabColor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._activeTabColor.r = _UNK_?;
  (this->fields)._activeTabColor.g = fVar3;
  (this->fields)._activeTabColor.b = fVar2;
  (this->fields)._activeTabColor.a = fVar1;
  (this->fields)._numTabsPerRow = 3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._tabs = tabs;
  func_?(&(this->fields)._tabs,tabs);
  (this->fields)._numTabsPerRow = numTabsPerRow;
  (this->fields)._activeTabColor.r = activeTabColor.r;
  (this->fields)._activeTabColor.g = activeTabColor.g;
  (this->fields)._activeTabColor.b = activeTabColor.b;
  (this->fields)._activeTabColor.a = activeTabColor.a;
  return;
}


/* EditorToolbarTab get_ActiveTab() */

EditorToolbarTab *
Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_get_ActiveTab
          (EditorToolbar *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pEVar2 = (this->fields)._tabs;
  if (pEVar2 == (EditorToolbarTab__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pEVar6 = (EditorToolbarTab *)(*pcVar5)();
    return pEVar6;
  }
  uVar7 = (this->fields)._activeTabIndex;
  if (uVar7 < pEVar2->max_length) {
    return pEVar2->vector[uVar7];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_8 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pEVar6 = (EditorToolbarTab *)(*pcVar5)();
  return pEVar6;
}


/* Int32 get_NumTabs() */

int32_t Assembly-CSharp.dll::RTG::EditorToolbar::EditorToolbar_get_NumTabs
                  (EditorToolbar *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pEVar2 = (this->fields)._tabs;
  if (pEVar2 != (EditorToolbarTab__Array *)0x0) {
    return pEVar2->max_length;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
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

