
/* Color <DOFade>b__0() */

Color * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass11_0::
        DOTweenModuleUI_c_DisplayClass11_0__DOFade_b__0
                  (Color *__return_storage_ptr__,DOTweenModuleUI_c_DisplayClass11_0 *this,
                  MethodInfo *method)

{
  pOVar1 = (this->fields).target;
  if (pOVar1 != (Outline *)0x0) {
    fVar2 = (pOVar1->fields)._.m_EffectColor.g;
    fVar3 = (pOVar1->fields)._.m_EffectColor.b;
    fVar4 = (pOVar1->fields)._.m_EffectColor.a;
    __return_storage_ptr__->r = (pOVar1->fields)._.m_EffectColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Void <DOFade>b__1(Color) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass11_0::
     DOTweenModuleUI_c_DisplayClass11_0__DOFade_b__1
               (DOTweenModuleUI_c_DisplayClass11_0 *this,Color *x,MethodInfo *method)

{
  this_00 = (Shadow *)(this->fields).target;
  if (this_00 != (Shadow *)0x0) {
    CStack_1.r = x->r;
    CStack_1.g = x->g;
    CStack_1.b = x->b;
    CStack_1.a = x->a;
    UnityEngine.UI.dll::UnityEngine::UI::Shadow::Shadow_set_effectColor
              (this_00,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

