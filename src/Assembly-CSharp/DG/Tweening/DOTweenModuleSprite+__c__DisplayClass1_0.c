
/* Color <DOFade>b__0() */

Color * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite+<>c__DisplayClass1_0::
        DOTweenModuleSprite_c_DisplayClass1_0__DOFade_b__0
                  (Color *__return_storage_ptr__,DOTweenModuleSprite_c_DisplayClass1_0 *this,
                  MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (SpriteRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (Color *)(*pcVar1)();
    return pCVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pCVar2 = (Color *)(*pcVar1)();
    return pCVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pCVar2 = (Color *)(*pcVar1)();
    return pCVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->r = (float)(undefined4)uStack_3;
  __return_storage_ptr__->g = (float)uStack_3._4_4_;
  __return_storage_ptr__->b = (float)(undefined4)uStack_4;
  __return_storage_ptr__->a = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void <DOFade>b__1(Color) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleSprite+<>c__DisplayClass1_0::
     DOTweenModuleSprite_c_DisplayClass1_0__DOFade_b__1
               (DOTweenModuleSprite_c_DisplayClass1_0 *this,Color *x,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (SpriteRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fStack_2 = x->r;
  fStack_3 = x->g;
  fStack_4 = x->b;
  fStack_5 = x->a;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,&fStack_2);
  return;
}

