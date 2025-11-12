
/* Void Set(EffectStyleObject) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_Set(Styles_EffectStyleDef *this,EffectStyleObject *effectStyleObject,MethodInfo *method)

{
  if ((effectStyleObject != (EffectStyleObject *)0x0) && (pSVar1 = (Shadow *)(effectStyleObject->fields).shadow, pSVar1 != (Shadow *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pSVar1,(this->fields).shadow,(MethodInfo *)0x0);
    CStack_2.r = (this->fields).shadowEffectColor.r;
    CStack_2.g = (this->fields).shadowEffectColor.g;
    CStack_2.b = (this->fields).shadowEffectColor.b;
    CStack_2.a = (this->fields).shadowEffectColor.a;
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor(pSVar1,&CStack_2,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance(pSVar1,(this->fields).shadowEffectDistance,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha(pSVar1,(this->fields).shadowUseGraphicAlpha,(MethodInfo *)0x0);
    pSVar1 = (Shadow *)(effectStyleObject->fields).outline;
    if (pSVar1 != (Shadow *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pSVar1,(this->fields).outline,(MethodInfo *)0x0);
      CStack_2.r = (this->fields).outlineEffectColor.r;
      CStack_2.g = (this->fields).outlineEffectColor.g;
      CStack_2.b = (this->fields).outlineEffectColor.b;
      CStack_2.a = (this->fields).outlineEffectColor.a;
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor(pSVar1,&CStack_2,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance(pSVar1,(this->fields).outlineEffectDistance,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_useGraphicAlpha(pSVar1,(this->fields).outlineUseGraphicAlpha,(MethodInfo *)0x0);
      this_00 = (effectStyleObject->fields).gradient;
      if (this_00 != (GradientEffect *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,(this->fields).gradient,(MethodInfo *)0x0);
        fVar3 = (this->fields).gradientTop.g;
        fVar4 = (this->fields).gradientTop.b;
        fVar5 = (this->fields).gradientTop.a;
        (this_00->fields).top.r = (this->fields).gradientTop.r;
        (this_00->fields).top.g = fVar3;
        (this_00->fields).top.b = fVar4;
        (this_00->fields).top.a = fVar5;
        fVar3 = (this->fields).gradientBottom.g;
        fVar4 = (this->fields).gradientBottom.b;
        fVar5 = (this->fields).gradientBottom.a;
        (this_00->fields).bottom.r = (this->fields).gradientBottom.r;
        (this_00->fields).bottom.g = fVar3;
        (this_00->fields).bottom.b = fVar4;
        (this_00->fields).bottom.a = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetGradient(GradientEffect) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetGradient(Styles_EffectStyleDef *this,GradientEffect *gradient,MethodInfo *method)

{
  if (gradient != (GradientEffect *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)gradient,(this->fields).gradient,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetOutline(Outline) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetOutline(Styles_EffectStyleDef *this,Outline *outline,MethodInfo *method)

{
  if (outline == (Outline *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)outline,(this->fields).outline,(MethodInfo *)0x0);
  CStack_2.r = (this->fields).outlineEffectColor.r;
  CStack_2.g = (this->fields).outlineEffectColor.g;
  CStack_2.b = (this->fields).outlineEffectColor.b;
  CStack_2.a = (this->fields).outlineEffectColor.a;
  UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor((Shadow *)outline,&CStack_2,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance((Shadow *)outline,(this->fields).outlineEffectDistance,(MethodInfo *)0x0);
  bVar3 = (this->fields).outlineUseGraphicAlpha;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,bVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (outline->fields)._.m_UseGraphicAlpha = bVar3;
  pGVar4 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic((BaseMeshEffect *)outline,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar4 != (Graphic *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar4->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pGVar4 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic((BaseMeshEffect *)outline,(MethodInfo *)0x0);
      if (pGVar4 == (Graphic *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(pGVar4->klass->vtable).SetVerticesDirty.methodPtr)(pGVar4,(pGVar4->klass->vtable).SetVerticesDirty.method);
    }
  }
  return;
}


/* Void SetShadow(Shadow) */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef_SetShadow(Styles_EffectStyleDef *this,Shadow *shadow,MethodInfo *method)

{
  if (shadow == (Shadow *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)shadow,(this->fields).shadow,(MethodInfo *)0x0);
  CStack_2.r = (this->fields).shadowEffectColor.r;
  CStack_2.g = (this->fields).shadowEffectColor.g;
  CStack_2.b = (this->fields).shadowEffectColor.b;
  CStack_2.a = (this->fields).shadowEffectColor.a;
  UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor(shadow,&CStack_2,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectDistance(shadow,(this->fields).shadowEffectDistance,(MethodInfo *)0x0);
  bVar3 = (this->fields).shadowUseGraphicAlpha;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,bVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (shadow->fields).m_UseGraphicAlpha = bVar3;
  pGVar4 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic((BaseMeshEffect *)shadow,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar4 != (Graphic *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar4->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pGVar4 = UnityEngine.UI.dll::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect_get_graphic((BaseMeshEffect *)shadow,(MethodInfo *)0x0);
      if (pGVar4 == (Graphic *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(pGVar4->klass->vtable).SetVerticesDirty.methodPtr)(pGVar4,(pGVar4->klass->vtable).SetVerticesDirty.method);
    }
  }
  return;
}


/* Styles+EffectStyleDef() */

void Assembly-CSharp.dll::Styles+EffectStyleDef::Styles_EffectStyleDef__ctor(Styles_EffectStyleDef *this,MethodInfo *method)

{
  (this->fields).shadowEffectColor.r = 0.0;
  (this->fields).shadowEffectColor.g = 0.0;
  (this->fields).shadowEffectColor.b = 0.0;
  (this->fields).shadowEffectColor.a = 1.0;
  (this->fields).shadowEffectDistance.x = 1.0;
  (this->fields).outlineEffectColor.r = 0.0;
  (this->fields).outlineEffectColor.g = 0.0;
  (this->fields).outlineEffectColor.b = 0.0;
  (this->fields).outlineEffectColor.a = 1.0;
  (this->fields).shadowEffectDistance.y = -1.0;
  (this->fields).gradientTop.r = 1.0;
  (this->fields).gradientTop.g = 1.0;
  (this->fields).gradientTop.b = 1.0;
  (this->fields).gradientTop.a = 1.0;
  (this->fields).shadowUseGraphicAlpha = 1;
  (this->fields).outlineEffectDistance.x = 1.0;
  (this->fields).outlineEffectDistance.y = -1.0;
  (this->fields).outlineUseGraphicAlpha = 1;
  (this->fields).gradientBottom.r = 0.5;
  (this->fields).gradientBottom.g = 0.5;
  (this->fields).gradientBottom.b = 0.5;
  (this->fields).gradientBottom.a = 1.0;
  return;
}

