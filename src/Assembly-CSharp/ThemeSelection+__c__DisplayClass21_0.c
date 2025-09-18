
/* Void <CreateThemeButtons>b__2() */

void Assembly-CSharp.dll::ThemeSelection+<>c__DisplayClass21_0::
     ThemeSelection_c_DisplayClass21_0__CreateThemeButtons_b__2
               (ThemeSelection_c_DisplayClass21_0 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).b;
  if (pTVar1 != (ThemeSelectionButton *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
      cRam_? = '\x01';
    }
    pTVar2 = (pTVar1->fields).selectionMenu;
    if (pTVar2 != (ThemeSelection *)0x0) {
      ThemeSelection::ThemeSelection_set_ThemeDescription
                (pTVar2,StringLiteral____Hover_over_a_theme_to_know_mo,(MethodInfo *)0x0);
      if ((pTVar1->fields).themeInUse == 0) {
        this_00 = (pTVar1->fields).nameLabel;
        if (this_00 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        pRVar3 = (pTVar1->fields).background;
        if (pRVar3 == (RawImage *)0x0) goto code_?;
        (*(code *)(pRVar3->klass->vtable).set_color.method)
                  (pRVar3,(pTVar1->fields).normalColor.r,(pTVar1->fields).normalColor.g);
      }
      pTVar2 = (this->fields).__4__this;
      if (pTVar2 != (ThemeSelection *)0x0) {
        ThemeSelection::ThemeSelection_LoadTheme
                  (pTVar2,(this->fields).identifier,(this->fields).copy,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

