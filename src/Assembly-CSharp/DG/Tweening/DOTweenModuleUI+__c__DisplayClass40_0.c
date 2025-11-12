
/* Void <DOBlendableColor>b__1(Color) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass40_0::
     DOTweenModuleUI_c_DisplayClass40_0__DOBlendableColor_b__1
               (DOTweenModuleUI_c_DisplayClass40_0 *this,Color *x,MethodInfo *method)

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
  pTVar12 = (this->fields).target;
  (this->fields).to.r = x->r;
  (this->fields).to.g = fVar9;
  (this->fields).to.b = fVar10;
  (this->fields).to.a = fVar11;
  if (pTVar12 != (Text *)0x0) {
    pfVar13 = (float *)(*(pTVar12->klass->vtable).get_color.methodPtr)
                                 (&fStack_14,pTVar12,(pTVar12->klass->vtable).get_color.method);
    fStack_14 = *pfVar13 + (fVar5 - fVar1);
    fStack_15 = pfVar13[1] + (fVar6 - fVar2);
    fStack_16 = pfVar13[2] + (fVar7 - fVar3);
    fStack_17 = pfVar13[3] + (fVar8 - fVar4);
    (*(pTVar12->klass->vtable).set_color.methodPtr)
              (pTVar12,&fStack_14,(pTVar12->klass->vtable).set_color.method);
    return;
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

