
/* Vector2 <DONormalizedPos>b__0() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass30_0::
        DOTweenModuleUI_c_DisplayClass30_0__DONormalizedPos_b__0
                  (DOTweenModuleUI_c_DisplayClass30_0 *this,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (ScrollRect *)0x0) {
    fVar2 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
            ScrollRect_get_horizontalNormalizedPosition(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).target;
    if (pSVar1 != (ScrollRect *)0x0) {
      fVar3 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::
              ScrollRect_get_verticalNormalizedPosition(pSVar1,(MethodInfo *)0x0);
      VVar4.y = fVar3;
      VVar4.x = fVar2;
      return VVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
}


/* Void <DONormalizedPos>b__1(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass30_0::
     DOTweenModuleUI_c_DisplayClass30_0__DONormalizedPos_b__1
               (DOTweenModuleUI_c_DisplayClass30_0 *this,Vector2 x,MethodInfo *method)

{
  pSVar1 = (this->fields).target;
  if (pSVar1 != (ScrollRect *)0x0) {
    fStackX_8 = x.x;
    (*(pSVar1->klass->vtable).SetNormalizedPosition.methodPtr)
              (pSVar1,fStackX_8,0,(pSVar1->klass->vtable).SetNormalizedPosition.method);
    pSVar1 = (this->fields).target;
    if (pSVar1 != (ScrollRect *)0x0) {
      fStackX_c = x.y;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable).SetNormalizedPosition.methodPtr)
                (pSVar1,fStackX_c,1,(pSVar1->klass->vtable).SetNormalizedPosition.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

