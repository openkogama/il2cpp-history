
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
          pGVar5 = (pTVar1->fields).nameLabel;
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
          pRVar6 = (pTVar1->fields).background;
          if (pRVar6 == (RawImage *)0x0) goto code_?;
          (*(code *)(pRVar6->klass->vtable).set_color.method)
                    (pRVar6,(pTVar1->fields).normalColor.r,(pTVar1->fields).normalColor.g,
                     (pTVar1->fields).normalColor.b,(pTVar1->fields).normalColor.a,
                     (pRVar6->klass->vtable).get_raycastTarget.methodPtr);
        }
        pTVar3 = (this->fields).__4__this;
        entry = (this->fields).copy;
        if ((pTVar3 != (ThemeSelection *)0x0) &&
           (this_00 = (pTVar3->fields).themeRepo, this_00 != (ThemeRepository *)0x0)) {
          pTVar7 = ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                             (this_00,(this->fields).identifier,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          pTVar8 = (pTVar3->fields).previewTheme;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pTVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pTVar8 = (pTVar3->fields).previewTheme;
            if (pTVar8 == (Theme *)0x0) goto code_?;
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar8,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar5,(MethodInfo *)0x0);
          }
          (pTVar3->fields).previewTheme = pTVar7;
          func_?(&(pTVar3->fields).previewTheme,pTVar7);
          this_01 = (pTVar3->fields).menuController;
          if (this_01 != (ThemeMenuController *)0x0) {
            ThemeMenuController::ThemeMenuController_OpenSettingsForPreview
                      (this_01,(pTVar3->fields).previewTheme,entry,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

