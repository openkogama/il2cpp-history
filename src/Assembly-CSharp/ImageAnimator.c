
/* Single GetCurrentAlpha() */

float Assembly-CSharp.dll::ImageAnimator::ImageAnimator_GetCurrentAlpha
                (ImageAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).curve;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(this->fields).speed * (this->fields).time,(MethodInfo *)0x0);
    return fVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_OnDisable
               (ImageAnimator *this,MethodInfo *method)

{
  (this->fields).time = 0.0;
  return;
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
  fVar1 = (this->fields).startColor.b;
  fVar4 = (this->fields).startColor.a;
  (this->fields).time = fVar2;
  b = (this->fields).endColor;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar2 * (this->fields).speed,(MethodInfo *)0x0);
    a.g = 0.0;
    a.r = fVar2;
    a.b = fVar1;
    a.a = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
              ((Color *)&stack0xffffffdc,a,b,fVar2,(MethodInfo *)0x0);
    if (pIVar3 != (Image *)0x0) {
      pIVar5 = pIVar3->klass;
      pIStack6 = (pIVar5->vtable).get_raycastTarget.methodPtr;
      (*(code *)(pIVar5->vtable).set_color.method)();
      return;
    }
  }
  pIStack6 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

