
/* Void <>m__0() */

void Assembly-CSharp.dll::ThemeSelection+<CreateThemeButtons>c__AnonStorey1::
     ThemeSelection_CreateThemeButtons_c_AnonStorey1___m__0
               (ThemeSelection_CreateThemeButtons_c_AnonStorey1 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).__f__ref_0;
  if ((pTVar1 != (ThemeSelection_CreateThemeButtons_c_AnonStorey0 *)0x0) &&
     (pTVar2 = (pTVar1->fields).b, pTVar2 != (ThemeSelectionButton *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pSVar3 = StringLiteral____Hover_over_a_theme_to_know_mo;
    pTVar4 = (pTVar2->fields).selectionMenu;
    if (pTVar4 != (ThemeSelection *)0x0) {
      pTVar5 = (pTVar4->fields).themeDescription;
      (pTVar4->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
      pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,pSVar3,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if ((pTVar2->fields).themeInUse == 0) {
          this_00 = (pTVar2->fields).nameLabel;
          if (this_00 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          pRVar6 = (pTVar2->fields).background;
          if (pRVar6 == (RawImage *)0x0) goto code_?;
          (*(code *)(pRVar6->klass->vtable).set_color.method)
                    (pRVar6,(pTVar2->fields).normalColor.r,(pTVar2->fields).normalColor.g,
                     (pTVar2->fields).normalColor.b,(pTVar2->fields).normalColor.a,
                     (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar1 = (this->fields).__f__ref_0;
        if ((pTVar1 != (ThemeSelection_CreateThemeButtons_c_AnonStorey0 *)0x0) &&
           (pTVar4 = (pTVar1->fields)._this, pTVar4 != (ThemeSelection *)0x0)) {
          ThemeSelection::ThemeSelection_LoadTheme
                    (pTVar4,(this->fields).identifier,(this->fields).copy,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

