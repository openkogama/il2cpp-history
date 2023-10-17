
/* Void Set(EffectStyleObject) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_Set
               (Styles_EffectStyleDef *this,EffectStyleObject *effectStyleObject,MethodInfo *method)

{
  if ((effectStyleObject != (EffectStyleObject *)0x0) &&
     (pSVar1 = (Shadow *)(effectStyleObject->fields).shadow, pSVar1 != (Shadow *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pSVar1,(this->fields).shadow,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              (pSVar1,(this->fields).shadowEffectColor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
              (pSVar1,(this->fields).shadowEffectDistance,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
              (pSVar1,(this->fields).shadowUseGraphicAlpha,(MethodInfo *)0x0);
    pSVar1 = (Shadow *)(effectStyleObject->fields).outline;
    if (pSVar1 != (Shadow *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pSVar1,(this->fields).outline,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
                (pSVar1,(this->fields).outlineEffectColor,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
                (pSVar1,(this->fields).outlineEffectDistance,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
                (pSVar1,(this->fields).outlineUseGraphicAlpha,(MethodInfo *)0x0);
      this_00 = (effectStyleObject->fields).gradient;
      if (this_00 != (GradientEffect *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,(this->fields).gradient,(MethodInfo *)0x0);
        fVar2 = (this->fields).gradientTop.g;
        fVar3 = (this->fields).gradientTop.b;
        fVar4 = (this->fields).gradientTop.a;
        (this_00->fields).top.r = (this->fields).gradientTop.r;
        (this_00->fields).top.g = fVar2;
        (this_00->fields).top.b = fVar3;
        (this_00->fields).top.a = fVar4;
        fVar2 = (this->fields).gradientBottom.g;
        fVar3 = (this->fields).gradientBottom.b;
        fVar4 = (this->fields).gradientBottom.a;
        (this_00->fields).bottom.r = (this->fields).gradientBottom.r;
        (this_00->fields).bottom.g = fVar2;
        (this_00->fields).bottom.b = fVar3;
        (this_00->fields).bottom.a = fVar4;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetGradient(GradientEffect) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetGradient
               (Styles_EffectStyleDef *this,GradientEffect *gradient,MethodInfo *method)

{
  if (gradient != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)gradient,(this->fields).gradient,(MethodInfo *)0x0);
    fVar1 = (this->fields).gradientTop.g;
    fVar2 = (this->fields).gradientTop.b;
    fVar3 = (this->fields).gradientTop.a;
    (gradient->fields).top.r = (this->fields).gradientTop.r;
    (gradient->fields).top.g = fVar1;
    (gradient->fields).top.b = fVar2;
    (gradient->fields).top.a = fVar3;
    fVar1 = (this->fields).gradientBottom.g;
    fVar2 = (this->fields).gradientBottom.b;
    fVar3 = (this->fields).gradientBottom.a;
    (gradient->fields).bottom.r = (this->fields).gradientBottom.r;
    (gradient->fields).bottom.g = fVar1;
    (gradient->fields).bottom.b = fVar2;
    (gradient->fields).bottom.a = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetOutline(Outline) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetOutline
               (Styles_EffectStyleDef *this,Outline *outline,MethodInfo *method)

{
  if (outline != (Outline *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)outline,(this->fields).outline,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              ((Shadow *)outline,(this->fields).outlineEffectColor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
              ((Shadow *)outline,
               (Vector2)((ulonglong)(uint)(this->fields).outlineEffectDistance.y << 0x20),
               (MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
              ((Shadow *)outline,(this->fields).outlineUseGraphicAlpha,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetShadow(Shadow) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetShadow
               (Styles_EffectStyleDef *this,Shadow *shadow,MethodInfo *method)

{
  if (shadow != (Shadow *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)shadow,(this->fields).shadow,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              (shadow,(this->fields).shadowEffectColor,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance
              (shadow,(Vector2)((ulonglong)(uint)(this->fields).shadowEffectDistance.y << 0x20),
               (MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha
              (shadow,(this->fields).shadowUseGraphicAlpha,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Styles+EffectStyleDef() */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef__ctor
               (Styles_EffectStyleDef *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).shadowEffectColor.r = _UNK_?;
  (this->fields).shadowEffectColor.g = fVar3;
  (this->fields).shadowEffectColor.b = fVar2;
  (this->fields).shadowEffectColor.a = fVar1;
  (this->fields).shadowEffectDistance.x = 1.0;
  fVar4 = _UNK_?;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).shadowEffectDistance.y = -1.0;
  (this->fields).shadowUseGraphicAlpha = 1;
  (this->fields).outlineEffectColor.r = fVar3;
  (this->fields).outlineEffectColor.g = fVar2;
  (this->fields).outlineEffectColor.b = fVar1;
  (this->fields).outlineEffectColor.a = fVar4;
  (this->fields).outlineEffectDistance.x = 1.0;
  fVar4 = _UNK_?;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).outlineEffectDistance.y = -1.0;
  (this->fields).outlineUseGraphicAlpha = 1;
  (this->fields).gradientTop.r = fVar3;
  (this->fields).gradientTop.g = fVar2;
  (this->fields).gradientTop.b = fVar1;
  (this->fields).gradientTop.a = fVar4;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).gradientBottom.r = _UNK_?;
  (this->fields).gradientBottom.g = fVar3;
  (this->fields).gradientBottom.b = fVar2;
  (this->fields).gradientBottom.a = fVar1;
  return;
}

