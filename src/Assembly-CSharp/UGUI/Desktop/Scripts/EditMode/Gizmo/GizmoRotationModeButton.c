
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
  ppBVar2 = &(this->fields).button;
  *ppBVar2 = pBVar1;
  func_?(ppBVar2,pBVar1);
  pGVar3 = (GradientEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                      );
  ppGVar4 = &(this->fields).gradient;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  pTVar5 = (this->fields).text;
  if (pTVar5 != (Text *)0x0) {
    pfVar6 = (float *)(*(code *)(pTVar5->klass->vtable).get_color.method)
                                 (auStack_7,pTVar5,(pTVar5->klass->vtable).set_color.methodPtr);
    fVar8 = pfVar6[1];
    fVar9 = pfVar6[2];
    fVar10 = pfVar6[3];
    pBVar1 = *ppBVar2;
    (this->fields).originalTextColor.r = *pfVar6;
    (this->fields).originalTextColor.g = fVar8;
    (this->fields).originalTextColor.b = fVar9;
    (this->fields).originalTextColor.a = fVar10;
    if (pBVar1 != (Button *)0x0) {
      fStack_11 = (pBVar1->fields)._.m_Colors.m_NormalColor.r;
      fStack_12 = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
      fStack_13 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
      fStack_14 = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
      fStack_15 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
      fStack_16 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
      fStack_17 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
      fStack_18 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
      fStack_19 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
      fStack_20 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
      fStack_21 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
      fStack_22 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
      fStack_23 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
      fStack_24 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
      fStack_25 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
      fStack_26 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
      fStack_27 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
      fStack_28 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
      fStack_29 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
      fStack_30 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
      uStack_31._0_4_ = (pBVar1->fields)._.m_Colors.m_ColorMultiplier;
      uStack_31._4_4_ = (pBVar1->fields)._.m_Colors.m_FadeDuration;
      if ((TypeInfo__UnityEngine__UI__ColorBlock->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__UI__ColorBlock);
      }
      pBVar1 = *ppBVar2;
      if (pBVar1 != (Button *)0x0) {
        fVar8 = (pBVar1->fields)._.m_Colors.m_NormalColor.g;
        fVar9 = (pBVar1->fields)._.m_Colors.m_NormalColor.b;
        fVar10 = (pBVar1->fields)._.m_Colors.m_NormalColor.a;
        fVar32 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.r;
        fVar33 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.g;
        fVar34 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.b;
        fVar35 = (pBVar1->fields)._.m_Colors.m_HighlightedColor.a;
        fVar36 = (pBVar1->fields)._.m_Colors.m_DisabledColor.r;
        fVar37 = (pBVar1->fields)._.m_Colors.m_DisabledColor.g;
        fVar38 = (pBVar1->fields)._.m_Colors.m_DisabledColor.b;
        fVar39 = (pBVar1->fields)._.m_Colors.m_DisabledColor.a;
        fVar40 = (pBVar1->fields)._.m_Colors.m_PressedColor.r;
        fVar41 = (pBVar1->fields)._.m_Colors.m_PressedColor.g;
        fVar42 = (pBVar1->fields)._.m_Colors.m_PressedColor.b;
        fVar43 = (pBVar1->fields)._.m_Colors.m_PressedColor.a;
        fVar44 = (pBVar1->fields)._.m_Colors.m_SelectedColor.r;
        fVar45 = (pBVar1->fields)._.m_Colors.m_SelectedColor.g;
        fVar46 = (pBVar1->fields)._.m_Colors.m_SelectedColor.b;
        fVar47 = (pBVar1->fields)._.m_Colors.m_SelectedColor.a;
        uVar48 = (pBVar1->fields)._.m_Colors.m_FadeDuration;
        (this->fields).originalColorBlock.m_NormalColor.r =
             (pBVar1->fields)._.m_Colors.m_NormalColor.r;
        (this->fields).originalColorBlock.m_NormalColor.g = fVar8;
        (this->fields).originalColorBlock.m_NormalColor.b = fVar9;
        (this->fields).originalColorBlock.m_NormalColor.a = fVar10;
        fVar49 = _UNK_?;
        fVar50 = _UNK_?;
        fVar51 = _UNK_?;
        fVar52 = _UNK_?;
        (this->fields).originalColorBlock.m_HighlightedColor.r = fVar32;
        (this->fields).originalColorBlock.m_HighlightedColor.g = fVar33;
        (this->fields).originalColorBlock.m_HighlightedColor.b = fVar34;
        (this->fields).originalColorBlock.m_HighlightedColor.a = fVar35;
        (this->fields).originalColorBlock.m_PressedColor.r = fVar40;
        (this->fields).originalColorBlock.m_PressedColor.g = fVar41;
        (this->fields).originalColorBlock.m_PressedColor.b = fVar42;
        (this->fields).originalColorBlock.m_PressedColor.a = fVar43;
        (this->fields).originalColorBlock.m_SelectedColor.r = fVar44;
        (this->fields).originalColorBlock.m_SelectedColor.g = fVar45;
        (this->fields).originalColorBlock.m_SelectedColor.b = fVar46;
        (this->fields).originalColorBlock.m_SelectedColor.a = fVar47;
        (this->fields).originalColorBlock.m_DisabledColor.r = fVar36;
        (this->fields).originalColorBlock.m_DisabledColor.g = fVar37;
        (this->fields).originalColorBlock.m_DisabledColor.b = fVar38;
        (this->fields).originalColorBlock.m_DisabledColor.a = fVar39;
        (this->fields).originalColorBlock.m_ColorMultiplier = (float)(undefined4)uStack_31;
        fVar38 = _UNK_?;
        fVar37 = _UNK_?;
        fVar36 = _UNK_?;
        fVar35 = _UNK_?;
        (this->fields).originalColorBlock.m_FadeDuration = (float)uVar48;
        fVar8 = (this->fields).originalColorBlock.m_DisabledColor.r;
        fVar9 = (this->fields).originalColorBlock.m_DisabledColor.g;
        fVar10 = (this->fields).originalColorBlock.m_DisabledColor.b;
        fVar32 = (this->fields).originalColorBlock.m_DisabledColor.a;
        fVar33 = (this->fields).originalColorBlock.m_ColorMultiplier;
        fVar34 = (this->fields).originalColorBlock.m_FadeDuration;
        (this->fields).selectedColorBlock.m_NormalColor.r = _UNK_?;
        (this->fields).selectedColorBlock.m_NormalColor.g = fVar36;
        (this->fields).selectedColorBlock.m_NormalColor.b = fVar37;
        (this->fields).selectedColorBlock.m_NormalColor.a = fVar38;
        (this->fields).selectedColorBlock.m_HighlightedColor.r = fVar52;
        (this->fields).selectedColorBlock.m_HighlightedColor.g = fVar51;
        (this->fields).selectedColorBlock.m_HighlightedColor.b = fVar50;
        (this->fields).selectedColorBlock.m_HighlightedColor.a = fVar49;
        (this->fields).selectedColorBlock.m_PressedColor.r = fVar35;
        (this->fields).selectedColorBlock.m_PressedColor.g = fVar36;
        (this->fields).selectedColorBlock.m_PressedColor.b = fVar37;
        (this->fields).selectedColorBlock.m_PressedColor.a = fVar38;
        (this->fields).selectedColorBlock.m_SelectedColor.r = fVar35;
        (this->fields).selectedColorBlock.m_SelectedColor.g = fVar36;
        (this->fields).selectedColorBlock.m_SelectedColor.b = fVar37;
        (this->fields).selectedColorBlock.m_SelectedColor.a = fVar38;
        (this->fields).selectedColorBlock.m_DisabledColor.r = fVar8;
        (this->fields).selectedColorBlock.m_DisabledColor.g = fVar9;
        (this->fields).selectedColorBlock.m_DisabledColor.b = fVar10;
        (this->fields).selectedColorBlock.m_DisabledColor.a = fVar32;
        (this->fields).selectedColorBlock.m_ColorMultiplier = fVar33;
        (this->fields).selectedColorBlock.m_FadeDuration = fVar34;
        return;
      }
    }
  }
  func_?();
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
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

