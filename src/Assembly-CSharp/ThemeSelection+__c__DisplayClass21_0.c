
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
    pSVar2 = StringLiteral____Hover_over_a_theme_to_know_mo;
    pTVar3 = (pTVar1->fields).selectionMenu;
    if (pTVar3 != (ThemeSelection *)0x0) {
      (pTVar3->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
      func_?(&(pTVar3->fields).currentDescription,pSVar2);
      pTVar4 = (pTVar3->fields).themeDescription;
      pSVar2 = TM::TM__((pTVar3->fields).currentDescription,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)
                  (pTVar4,pSVar2,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if ((pTVar1->fields).themeInUse == 0) {
          this_00 = (pTVar1->fields).nameLabel;
          if (this_00 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          pRVar5 = (pTVar1->fields).background;
          if (pRVar5 == (RawImage *)0x0) goto code_?;
          (*(code *)(pRVar5->klass->vtable).set_color.method)
                    (pRVar5,(pTVar1->fields).normalColor.r,(pTVar1->fields).normalColor.g,
                     (pTVar1->fields).normalColor.b,(pTVar1->fields).normalColor.a,
                     (pRVar5->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar3 = (this->fields).__4__this;
        if (pTVar3 != (ThemeSelection *)0x0) {
          ThemeSelection::ThemeSelection_LoadTheme
                    (pTVar3,(this->fields).identifier,(this->fields).copy,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

