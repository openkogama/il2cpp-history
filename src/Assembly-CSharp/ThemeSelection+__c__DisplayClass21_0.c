
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
      ppSVar4 = &(pTVar3->fields).currentDescription;
      *ppSVar4 = StringLiteral____Hover_over_a_theme_to_know_mo;
      func_?(ppSVar4,pSVar2);
      pTVar5 = (pTVar3->fields).themeDescription;
      pSVar2 = TM::TM__(*ppSVar4,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)
                  (pTVar5,pSVar2,(pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if ((pTVar1->fields).themeInUse == 0) {
          pGVar6 = (pTVar1->fields).nameLabel;
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,0,(MethodInfo *)0x0);
          pRVar7 = (pTVar1->fields).background;
          if (pRVar7 == (RawImage *)0x0) goto code_?;
          (*(code *)(pRVar7->klass->vtable).set_color.method)
                    (pRVar7,(pTVar1->fields).normalColor.r,(pTVar1->fields).normalColor.g,
                     (pTVar1->fields).normalColor.b,(pTVar1->fields).normalColor.a,
                     (pRVar7->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar3 = (this->fields).__4__this;
        entry = (this->fields).copy;
        if ((pTVar3 != (ThemeSelection *)0x0) &&
           (this_00 = (pTVar3->fields).themeRepo, this_00 != (ThemeRepository *)0x0)) {
          pTVar8 = ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                              (this_00,(this->fields).identifier,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          x = (pTVar3->fields).previewTheme;
          ppTVar9 = &(pTVar3->fields).previewTheme;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            if (*ppTVar9 == (Theme *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)*ppTVar9,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar6,(MethodInfo *)0x0);
          }
          *ppTVar9 = pTVar8;
          func_?(ppTVar9,pTVar8);
          this_01 = (pTVar3->fields).menuController;
          if (this_01 != (ThemeMenuController *)0x0) {
            ThemeMenuController::ThemeMenuController_OpenSettingsForPreview
                      (this_01,*ppTVar9,entry,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

