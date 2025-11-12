
/* Void <DOBlendableColor>b__1(Color) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite+<>c__DisplayClass3_0::
     DOTweenModuleSprite_c_DisplayClass3_0__DOBlendableColor_b__1
               (DOTweenModuleSprite_c_DisplayClass3_0 *this,Color *x,MethodInfo *method)

{
  fVar1 = (this->fields).to.r;
  fVar2 = (this->fields).to.g;
  fVar3 = (this->fields).to.b;
  fVar4 = (this->fields).to.a;
  fVar5 = x->r;
  fVar6 = x->g;
  fVar7 = x->b;
  fVar8 = x->a;
  fVar9 = x->g;
  fVar10 = x->b;
  fVar11 = x->a;
  obj = (this->fields).target;
  (this->fields).to.r = x->r;
  (this->fields).to.g = fVar9;
  (this->fields).to.b = fVar10;
  (this->fields).to.a = fVar11;
  if (obj == (SpriteRenderer *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(pvVar13);
  fStack_15 = (fVar5 - fVar1) + 0.0;
  fStack_16 = (fVar6 - fVar2) + 0.0;
  fStack_17 = (fVar7 - fVar3) + 0.0;
  fStack_18 = (fVar8 - fVar4) + 0.0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(pvVar13,&fStack_15);
  return;
}

