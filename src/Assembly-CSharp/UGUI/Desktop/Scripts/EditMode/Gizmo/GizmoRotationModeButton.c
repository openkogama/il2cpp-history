
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_Awake(GizmoRotationModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__ColorBlock);
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    func_?(&
                    Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                   );
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  (this->fields).button = pBVar1;
  func_?(&(this->fields).button,pBVar1);
  pGVar2 = (GradientEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                      );
  (this->fields).gradient = pGVar2;
  func_?(&(this->fields).gradient,pGVar2);
  pTVar3 = (this->fields).text;
  if (pTVar3 != (Text *)0x0) {
    pfVar4 = (float *)(*(code *)(pTVar3->klass->vtable).get_color.method)
                                 (auStack_5,pTVar3,(pTVar3->klass->vtable).set_color.methodPtr);
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
    pBVar1 = (this->fields).button;
    (this->fields).originalTextColor.r = *pfVar4;
    (this->fields).originalTextColor.g = fVar6;
    (this->fields).originalTextColor.b = fVar7;
    (this->fields).originalTextColor.a = fVar8;
    if (pBVar1 != (Button *)0x0) {
      fStack_9 = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
      fStack_10 = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
      fStack_11 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
      fStack_12 = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
      fStack_13 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
      fStack_14 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
      fStack_15 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
      fStack_16 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
      fStack_17 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
      fStack_18 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
      fStack_19 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
      fStack_20 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
      fStack_21 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
      fStack_22 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
      fStack_23 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
      fStack_24 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
      fStack_25 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
      fStack_26 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
      fStack_27 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
      fStack_28 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
      uStack_29._0_4_ = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
      uStack_29._4_4_ = (pBVar1->fields)._.m_Colors.m_FadeDuration;
      if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__UI__ColorBlock);
      }
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        fVar6 = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
        fVar7 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
        fVar8 = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
        fVar30 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
        fVar31 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
        fVar32 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
        fVar33 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
        fVar34 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
        fVar35 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
        fVar36 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
        fVar37 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
        fVar38 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
        fVar39 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
        fVar40 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
        fVar41 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
        fVar42 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
        fVar43 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
        fVar44 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
        fVar45 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
        uVar46 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
        (this->fields).originalColorBlock.m_NormalColor.r =
             (pBVar1->fields)._.m_Colors.m_NormalColor.r;
        (this->fields).originalColorBlock.m_NormalColor.g = fVar6;
        (this->fields).originalColorBlock.m_NormalColor.b = fVar7;
        (this->fields).originalColorBlock.m_NormalColor.a = fVar8;
        (this->fields).originalColorBlock.m_HighlightedColor.r = fVar30;
        (this->fields).originalColorBlock.m_HighlightedColor.g = fVar31;
        (this->fields).originalColorBlock.m_HighlightedColor.b = fVar32;
        (this->fields).originalColorBlock.m_HighlightedColor.a = fVar33;
        (this->fields).originalColorBlock.m_PressedColor.r = fVar34;
        (this->fields).originalColorBlock.m_PressedColor.g = fVar35;
        (this->fields).originalColorBlock.m_PressedColor.b = fVar36;
        (this->fields).originalColorBlock.m_PressedColor.a = fVar37;
        (this->fields).originalColorBlock.m_SelectedColor.r = fVar38;
        (this->fields).originalColorBlock.m_SelectedColor.g = fVar39;
        (this->fields).originalColorBlock.m_SelectedColor.b = fVar40;
        (this->fields).originalColorBlock.m_SelectedColor.a = fVar41;
        (this->fields).originalColorBlock.m_DisabledColor.r = fVar42;
        (this->fields).originalColorBlock.m_DisabledColor.g = fVar43;
        (this->fields).originalColorBlock.m_DisabledColor.b = fVar44;
        (this->fields).originalColorBlock.m_DisabledColor.a = fVar45;
        (this->fields).originalColorBlock.m_ColorMultiplier = (float)(undefined4)uStack_29;
        fVar36 = _UNK_?;
        fVar35 = _UNK_?;
        fVar34 = _UNK_?;
        fVar33 = _UNK_?;
        (this->fields).originalColorBlock.m_FadeDuration = (float)uVar46;
        fVar6 = (this->fields).originalColorBlock.m_DisabledColor.r;
        fVar7 = (this->fields).originalColorBlock.m_DisabledColor.g;
        fVar8 = (this->fields).originalColorBlock.m_DisabledColor.b;
        fVar30 = (this->fields).originalColorBlock.m_DisabledColor.a;
        fVar31 = (this->fields).originalColorBlock.m_ColorMultiplier;
        fVar32 = (this->fields).originalColorBlock.m_FadeDuration;
        (this->fields).selectedColorBlock.m_NormalColor.r = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.g = fVar34;
        (this->fields).selectedColorBlock.m_NormalColor.b = fVar35;
        (this->fields).selectedColorBlock.m_NormalColor.a = fVar36;
        (this->fields).selectedColorBlock.m_HighlightedColor.r = fVar33;
        (this->fields).selectedColorBlock.m_HighlightedColor.g = fVar34;
        (this->fields).selectedColorBlock.m_HighlightedColor.b = fVar35;
        (this->fields).selectedColorBlock.m_HighlightedColor.a = fVar36;
        (this->fields).selectedColorBlock.m_PressedColor.r = fVar33;
        (this->fields).selectedColorBlock.m_PressedColor.g = fVar34;
        (this->fields).selectedColorBlock.m_PressedColor.b = fVar35;
        (this->fields).selectedColorBlock.m_PressedColor.a = fVar36;
        (this->fields).selectedColorBlock.m_SelectedColor.r = fVar33;
        (this->fields).selectedColorBlock.m_SelectedColor.g = fVar34;
        (this->fields).selectedColorBlock.m_SelectedColor.b = fVar35;
        (this->fields).selectedColorBlock.m_SelectedColor.a = fVar36;
        (this->fields).selectedColorBlock.m_DisabledColor.r = fVar6;
        (this->fields).selectedColorBlock.m_DisabledColor.g = fVar7;
        (this->fields).selectedColorBlock.m_DisabledColor.b = fVar8;
        (this->fields).selectedColorBlock.m_DisabledColor.a = fVar30;
        (this->fields).selectedColorBlock.m_ColorMultiplier = fVar31;
        (this->fields).selectedColorBlock.m_FadeDuration = fVar32;
        return;
      }
    }
  }
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* Void Highlight() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_Highlight(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,(this->fields).selectedTextColor.r,(this->fields).selectedTextColor.g,
                 (this->fields).selectedTextColor.b,(this->fields).selectedTextColor.a);
      this_01 = (this->fields).button;
      if (this_01 != (Button *)0x0) {
        uVar2 = (this->fields).selectedColorBlock.m_FadeDuration;
        uVar3 = (this->fields).selectedColorBlock.m_NormalColor.r;
        uVar4 = (this->fields).selectedColorBlock.m_NormalColor.g;
        uVar5 = (this->fields).selectedColorBlock.m_NormalColor.b;
        uVar6 = (this->fields).selectedColorBlock.m_NormalColor.a;
        value.m_NormalColor.a = (float)uVar6;
        value.m_NormalColor.b = (float)uVar5;
        value.m_NormalColor.g = (float)uVar4;
        value.m_NormalColor.r = (float)uVar3;
        uVar7 = (this->fields).selectedColorBlock.m_HighlightedColor.r;
        uVar8 = (this->fields).selectedColorBlock.m_HighlightedColor.g;
        uVar9 = (this->fields).selectedColorBlock.m_HighlightedColor.b;
        uVar10 = (this->fields).selectedColorBlock.m_HighlightedColor.a;
        value.m_HighlightedColor.a = (float)uVar10;
        value.m_HighlightedColor.b = (float)uVar9;
        value.m_HighlightedColor.g = (float)uVar8;
        value.m_HighlightedColor.r = (float)uVar7;
        uVar11 = (this->fields).selectedColorBlock.m_PressedColor.r;
        uVar12 = (this->fields).selectedColorBlock.m_PressedColor.g;
        uVar13 = (this->fields).selectedColorBlock.m_PressedColor.b;
        uVar14 = (this->fields).selectedColorBlock.m_PressedColor.a;
        value.m_PressedColor.a = (float)uVar14;
        value.m_PressedColor.b = (float)uVar13;
        value.m_PressedColor.g = (float)uVar12;
        value.m_PressedColor.r = (float)uVar11;
        uVar15 = (this->fields).selectedColorBlock.m_SelectedColor.r;
        uVar16 = (this->fields).selectedColorBlock.m_SelectedColor.g;
        uVar17 = (this->fields).selectedColorBlock.m_SelectedColor.b;
        uVar18 = (this->fields).selectedColorBlock.m_SelectedColor.a;
        value.m_SelectedColor.a = (float)uVar18;
        value.m_SelectedColor.b = (float)uVar17;
        value.m_SelectedColor.g = (float)uVar16;
        value.m_SelectedColor.r = (float)uVar15;
        uVar19 = (this->fields).selectedColorBlock.m_DisabledColor.r;
        uVar20 = (this->fields).selectedColorBlock.m_DisabledColor.g;
        uVar21 = (this->fields).selectedColorBlock.m_DisabledColor.b;
        uVar22 = (this->fields).selectedColorBlock.m_DisabledColor.a;
        value.m_DisabledColor.a = (float)uVar22;
        value.m_DisabledColor.b = (float)uVar21;
        value.m_DisabledColor.g = (float)uVar20;
        value.m_DisabledColor.r = (float)uVar19;
        uVar23 = (this->fields).selectedColorBlock.m_ColorMultiplier;
        value.m_ColorMultiplier = (float)uVar23;
        value.m_FadeDuration = (float)uVar2;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void ResetColors() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton_ResetColors(GizmoRotationModeButton *this,MethodInfo *method)

{
  this_00 = (this->fields).gradient;
  if (this_00 != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_color.method)
                (pTVar1,(this->fields).originalTextColor.r,(this->fields).originalTextColor.g,
                 (this->fields).originalTextColor.b,(this->fields).originalTextColor.a);
      this_01 = (this->fields).button;
      if (this_01 != (Button *)0x0) {
        uVar2 = (this->fields).originalColorBlock.m_FadeDuration;
        uVar3 = (this->fields).originalColorBlock.m_NormalColor.r;
        uVar4 = (this->fields).originalColorBlock.m_NormalColor.g;
        uVar5 = (this->fields).originalColorBlock.m_NormalColor.b;
        uVar6 = (this->fields).originalColorBlock.m_NormalColor.a;
        value.m_NormalColor.a = (float)uVar6;
        value.m_NormalColor.b = (float)uVar5;
        value.m_NormalColor.g = (float)uVar4;
        value.m_NormalColor.r = (float)uVar3;
        uVar7 = (this->fields).originalColorBlock.m_HighlightedColor.r;
        uVar8 = (this->fields).originalColorBlock.m_HighlightedColor.g;
        uVar9 = (this->fields).originalColorBlock.m_HighlightedColor.b;
        uVar10 = (this->fields).originalColorBlock.m_HighlightedColor.a;
        value.m_HighlightedColor.a = (float)uVar10;
        value.m_HighlightedColor.b = (float)uVar9;
        value.m_HighlightedColor.g = (float)uVar8;
        value.m_HighlightedColor.r = (float)uVar7;
        uVar11 = (this->fields).originalColorBlock.m_PressedColor.r;
        uVar12 = (this->fields).originalColorBlock.m_PressedColor.g;
        uVar13 = (this->fields).originalColorBlock.m_PressedColor.b;
        uVar14 = (this->fields).originalColorBlock.m_PressedColor.a;
        value.m_PressedColor.a = (float)uVar14;
        value.m_PressedColor.b = (float)uVar13;
        value.m_PressedColor.g = (float)uVar12;
        value.m_PressedColor.r = (float)uVar11;
        uVar15 = (this->fields).originalColorBlock.m_SelectedColor.r;
        uVar16 = (this->fields).originalColorBlock.m_SelectedColor.g;
        uVar17 = (this->fields).originalColorBlock.m_SelectedColor.b;
        uVar18 = (this->fields).originalColorBlock.m_SelectedColor.a;
        value.m_SelectedColor.a = (float)uVar18;
        value.m_SelectedColor.b = (float)uVar17;
        value.m_SelectedColor.g = (float)uVar16;
        value.m_SelectedColor.r = (float)uVar15;
        uVar19 = (this->fields).originalColorBlock.m_DisabledColor.r;
        uVar20 = (this->fields).originalColorBlock.m_DisabledColor.g;
        uVar21 = (this->fields).originalColorBlock.m_DisabledColor.b;
        uVar22 = (this->fields).originalColorBlock.m_DisabledColor.a;
        value.m_DisabledColor.a = (float)uVar22;
        value.m_DisabledColor.b = (float)uVar21;
        value.m_DisabledColor.g = (float)uVar20;
        value.m_DisabledColor.r = (float)uVar19;
        uVar23 = (this->fields).originalColorBlock.m_ColorMultiplier;
        value.m_ColorMultiplier = (float)uVar23;
        value.m_FadeDuration = (float)uVar2;
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
                  ((Selectable *)this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* GizmoRotationModeButton() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
     GizmoRotationModeButton__ctor(GizmoRotationModeButton *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).selectedTextColor.r = _UNK_?;
  (this->fields).selectedTextColor.g = fVar3;
  (this->fields).selectedTextColor.b = fVar2;
  (this->fields).selectedTextColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

