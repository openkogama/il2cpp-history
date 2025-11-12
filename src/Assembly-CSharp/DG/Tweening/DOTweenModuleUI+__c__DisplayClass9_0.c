
/* Vector2 <DOPreferredSize>b__0() */

Vector2 Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass9_0::
        DOTweenModuleUI_c_DisplayClass9_0__DOPreferredSize_b__0
                  (DOTweenModuleUI_c_DisplayClass9_0 *this,MethodInfo *method)

{
  pLVar1 = (this->fields).target;
  if (pLVar1 != (LayoutElement *)0x0) {
    fVar2 = (float)(*(pLVar1->klass->vtable).get_preferredWidth_1.methodPtr)
                             (pLVar1,(pLVar1->klass->vtable).get_preferredWidth_1.method);
    pLVar1 = (this->fields).target;
    if (pLVar1 != (LayoutElement *)0x0) {
      fVar3 = (float)(*(pLVar1->klass->vtable).get_preferredHeight_1.methodPtr)
                               (pLVar1,(pLVar1->klass->vtable).get_preferredHeight_1.method);
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


/* Void <DOPreferredSize>b__1(Vector2) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass9_0::
     DOTweenModuleUI_c_DisplayClass9_0__DOPreferredSize_b__1
               (DOTweenModuleUI_c_DisplayClass9_0 *this,Vector2 x,MethodInfo *method)

{
  pLVar1 = (this->fields).target;
  if (pLVar1 != (LayoutElement *)0x0) {
    fStackX_8 = x.x;
    (*(pLVar1->klass->vtable).set_preferredWidth.methodPtr)
              (pLVar1,fStackX_8,(pLVar1->klass->vtable).set_preferredWidth.method);
    pLVar1 = (this->fields).target;
    if (pLVar1 != (LayoutElement *)0x0) {
      fStackX_c = x.y;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pLVar1->klass->vtable).set_preferredHeight.methodPtr)
                (pLVar1,fStackX_c,(pLVar1->klass->vtable).set_preferredHeight.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

