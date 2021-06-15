
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
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  CStack_2.r = 0.0;
  (this->fields).shadowEffectColor.r = pCVar1->r;
  (this->fields).shadowEffectColor.g = fVar3;
  (this->fields).shadowEffectColor.b = fVar4;
  (this->fields).shadowEffectColor.a = fVar5;
  uStack_6._0_4_ = (InvokerMethod)0x0;
  uStack_6._4_4_ = (char *)0x0;
  func_?(&uStack_6,0x3f800000,0xbf800000);
  (this->fields).shadowEffectDistance.x = (float)(InvokerMethod)uStack_6;
  (this->fields).shadowEffectDistance.y = (float)uStack_6._4_4_;
  (this->fields).shadowUseGraphicAlpha = 1;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  CStack_2.b = 0.0;
  method_00 = (MethodInfo *)&uStack_7;
  (this->fields).outlineEffectColor.r = pCVar1->r;
  (this->fields).outlineEffectColor.g = fVar3;
  (this->fields).outlineEffectColor.b = fVar4;
  (this->fields).outlineEffectColor.a = fVar5;
  CStack_2.g = -1.0;
  CStack_2.r = 1.0;
  uStack_7._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_7._4_4_ = (Il2CppMethodPointer)0x0;
  func_?();
  (this->fields).outlineEffectDistance.x = (float)(Il2CppMethodPointer)uStack_7;
  (this->fields).outlineEffectDistance.y = (float)uStack_7._4_4_;
  (this->fields).outlineUseGraphicAlpha = 1;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).gradientTop.r = pCVar1->r;
  (this->fields).gradientTop.g = fVar3;
  (this->fields).gradientTop.b = fVar4;
  (this->fields).gradientTop.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields).gradientBottom.r = pCVar1->r;
  (this->fields).gradientBottom.g = fVar3;
  (this->fields).gradientBottom.b = fVar4;
  (this->fields).gradientBottom.a = fVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  return;
}

