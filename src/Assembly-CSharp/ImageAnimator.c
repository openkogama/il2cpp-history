
/* Single GetCurrentAlpha() */

float Assembly-CSharp.dll::ImageAnimator::ImageAnimator_GetCurrentAlpha
                (ImageAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).curve;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(this->fields).time * (this->fields).speed,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void SetColor(Color, Color) */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_SetColor
               (ImageAnimator *this,Color start,Color end,MethodInfo *method)

{
  (this->fields).startColor.r = start.r;
  (this->fields).startColor.g = start.g;
  (this->fields).startColor.b = start.b;
  (this->fields).startColor.a = start.a;
  (this->fields).endColor.r = end.r;
  (this->fields).endColor.g = end.g;
  (this->fields).endColor.b = end.b;
  (this->fields).endColor.a = end.a;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_Update
               (ImageAnimator *this,MethodInfo *method)

{
  fVar1 = (this->fields).time;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  this_00 = (this->fields).curve;
  pIVar3 = (this->fields).image;
  fVar1 = (this->fields).startColor.r;
  fVar4 = (this->fields).startColor.g;
  fVar5 = (this->fields).startColor.b;
  fVar6 = (this->fields).startColor.a;
  (this->fields).time = fVar2;
  fVar7 = (this->fields).endColor.r;
  fVar8 = (this->fields).endColor.g;
  fVar9 = (this->fields).endColor.b;
  fVar10 = (this->fields).endColor.a;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar2 * (this->fields).speed,(MethodInfo *)0x0);
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    else if (_UNK_? < fVar2) {
      fVar2 = _UNK_?;
    }
    fVar5 = (fVar9 - fVar5) * fVar2 + fVar5;
    fVar6 = (fVar10 - fVar6) * fVar2 + fVar6;
    if (pIVar3 != (Image *)0x0) {
      (*(code *)(pIVar3->klass->vtable).set_color.method)
                (pIVar3,(fVar7 - fVar1) * fVar2 + fVar1,(fVar8 - fVar4) * fVar2 + fVar4,fVar5,
                 fVar6,(pIVar3->klass->vtable).get_raycastTarget.methodPtr);
      return;
    }
  }
  func_?(fVar5,fVar6,fVar7,fVar8);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

