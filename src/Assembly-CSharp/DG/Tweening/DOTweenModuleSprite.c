
/* Tweener DOBlendableColor(SpriteRenderer, Color, Single) */

Tweener * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite::
          DOTweenModuleSprite_DOBlendableColor
                    (SpriteRenderer *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__Core__Extensions__Blendable<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0___DOBlendableColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0___DOBlendableColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0);
  if (lVar1 == 0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(SpriteRenderer **)(lVar1 + 0x20) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x20U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  obj = *(Object **)(lVar1 + 0x20);
  fVar9 = endValue->r;
  fVar10 = endValue->g;
  fVar11 = endValue->b;
  fVar12 = endValue->a;
  if (obj == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_13 = 0;
  uStack_14 = 0;
  pOVar15 = obj[1].klass;
  if (pOVar15 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    pTVar3 = (Tweener *)(*pcVar2)();
    return pTVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pOVar15,&uStack_13);
  fStack_17 = fVar9 - (float)uStack_13;
  fStack_18 = fVar10 - uStack_13._4_4_;
  uStack_19 = (undefined *)CONCAT44(fVar12 - uStack_14._4_4_,fVar11 - (float)uStack_14);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar16 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar16,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0___DOBlendableColor_b__0__
               );
  uVar20 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar20,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass3_0___DOBlendableColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = (Tweener *)FUN_?(uVar16,uVar20,&fStack_17,duration);
  if (pTVar3 == (Tweener *)0x0) goto code_?;
  (pTVar3->fields)._.isBlendable = 1;
  pOVar21 = *(Object_1 **)(lVar1 + 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Component,pOVar21,
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 == (Tweener *)0x0) {
    return (Tweener *)0x0;
  }
  if ((pTVar3->fields)._._active_k__BackingField == 0) {
    return pTVar3;
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->debugMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->useSafeMode == 0) goto code_?;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__DG__Tweening__DOTween->static_fields->_fooDebugStoreTargetId == 0)
  goto code_?;
  this = (Object_1 *)0x0;
  if (pOVar21 != (Object_1 *)0x0) {
    bVar22 = (TypeInfo__UnityEngine__Component->_1).naturalAligment;
    if (((((Object__Class *)pOVar21->klass)->_1).naturalAligment < bVar22) ||
       (bVar4 = true,
       (((Object__Class *)pOVar21->klass)->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
       (Il2CppClass *)TypeInfo__UnityEngine__Component)) {
      bVar4 = false;
    }
    if (bVar4) {
      this = pOVar21;
    }
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Object_1 *)0x0) {
code_?:
    if (pOVar21 == (Object_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pTVar3 = (Tweener *)(*pcVar2)();
      return pTVar3;
    }
    pSVar23 = (String *)
              (*(((Object__Class *)pOVar21->klass)->vtable).ToString.methodPtr)
                        (pOVar21,(((Object__Class *)pOVar21->klass)->vtable).ToString.method);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields).m_CachedPtr == (void *)0x0) goto code_?;
    pSVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                        (this,(MethodInfo *)0x0);
  }
  (pTVar3->fields)._.debugTargetId = pSVar23;
  func_?(&(pTVar3->fields)._.debugTargetId);
code_?:
  bVar4 = iRam_? != 0;
  (pTVar3->fields)._.target = (Object *)pOVar21;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar3->fields)._.target >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOColor(SpriteRenderer, Color, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite::DOTweenModuleSprite_DOColor
          (SpriteRenderer *target,Color *endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0___DOColor_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0___DOColor_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(SpriteRenderer **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(uVar9,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0___DOColor_b__0__
               );
  uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(uVar10,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass0_0___DOColor_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_11 = endValue->r;
  fStack_12 = endValue->g;
  fStack_13 = endValue->b;
  fStack_14 = endValue->a;
  pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
            *)FUN_?(uVar9,uVar10,&fStack_11,duration);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions]
   DOFade(SpriteRenderer, Single, Single) */

TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite::DOTweenModuleSprite_DOFade
          (SpriteRenderer *target,float endValue,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0___DOFade_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0___DOFade_b__1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Color_UnityEngine_Color_DG_Tweening_Plugins_Options_ColorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(SpriteRenderer **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0___DOFade_b__0__)
  ;
  setter = (DOSetter_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
  FUN_?(setter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModuleSprite____c__DisplayClass1_0___DOFade_b__1_UnityEngine__Color_
               );
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_ToAlpha
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__System__Object_
            );
  return pTVar3;
}


/* Sequence DOGradientColor(SpriteRenderer, Gradient, Single) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite::DOTweenModuleSprite_DOGradientColor
          (SpriteRenderer *target,Gradient *gradient,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  if ((gradient != (Gradient *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                         (gradient,(MethodInfo *)0x0), pGVar2 != (GradientColorKey__Array *)0x0)) {
    iVar3 = (int)pGVar2->max_length;
    uVar4 = 0;
    if (0 < iVar3) {
      lVar5 = 0;
      pGVar6 = pGVar2->vector;
      do {
        if ((uint)pGVar2->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          pSVar1 = (Sequence *)(*pcVar7)();
          return pSVar1;
        }
        fStack_8 = pGVar6->time;
        uVar9._0_4_ = (pGVar6->color).r;
        uVar9._4_4_ = (pGVar6->color).g;
        uVar10._0_4_ = (pGVar6->color).b;
        uVar10._4_4_ = (pGVar6->color).a;
        if ((uVar4 != 0) ||
           (CStack_11._0_8_ = uVar9, CStack_11._8_8_ = uVar10, 0.0 < pGVar6->time)) {
          if (uVar4 == iVar3 - 1U) {
            if (pSVar1 == (Sequence *)0x0) goto code_?;
            if ((pSVar1->fields)._._active_k__BackingField == 0) {
              iVar12 = FUN_?();
              if (0 < iVar12) {
                DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogInvalidTween
                          ((Tween *)pSVar1,(MethodInfo *)0x0);
              }
              fVar13 = duration - 0.0;
            }
            else {
              fVar13 = duration - (pSVar1->fields)._.duration;
            }
          }
          else {
            if (uVar4 == 0) {
              fVar13 = pGVar6->time;
            }
            else {
              CStack_11._0_8_ = uVar9;
              CStack_11._8_8_ = uVar10;
              if ((uint)pGVar2->max_length <= uVar4 - 1) goto code_?;
              fVar13 = pGVar6->time - *(float *)((longlong)(pGVar6 + -1) + 0x10);
            }
            fVar13 = fVar13 * duration;
          }
          CStack_11._0_8_ = uVar9;
          CStack_11._8_8_ = uVar10;
          pTVar14 = DOTweenModuleSprite_DOColor(target,&CStack_11,fVar13,(MethodInfo *)0x0);
          t = (Tween *)func_?(pTVar14);
          bVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                  TweenSettingsExtensions_ValidateAddToSequence(pSVar1,t,0,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            if (pSVar1 == (Sequence *)0x0) goto code_?;
            DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
                      (pSVar1,t,(pSVar1->fields)._.duration,(MethodInfo *)0x0);
          }
        }
        else {
          if (target == (SpriteRenderer *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            pSVar1 = (Sequence *)(*pcVar7)();
            return pSVar1;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar16 = (target->fields)._._._.m_CachedPtr;
          if (pvVar16 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)target,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            pSVar1 = (Sequence *)(*pcVar7)();
            return pSVar1;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar7 = (code *)swi(3);
            pSVar1 = (Sequence *)(*pcVar7)();
            return pSVar1;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar16);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 1;
        pGVar6 = pGVar6 + 1;
      } while (lVar5 < iVar3);
    }
    DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
              ((Object *)pSVar1,(Object *)target,
               DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
              );
    return pSVar1;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (Sequence *)(*pcVar7)();
  return pSVar1;
}

