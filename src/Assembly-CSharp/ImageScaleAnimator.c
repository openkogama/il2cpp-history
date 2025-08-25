
/* Void Start() */

void Assembly-CSharp.dll::ImageScaleAnimator::ImageScaleAnimator_Start
               (ImageScaleAnimator *this,MethodInfo *method)

{
  pRVar1 = (this->fields).scaleTarget;
  if (pRVar1 != (RectTransform *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       (&RStack_3,pRVar1,(MethodInfo *)0x0);
    RStack_3.m_XMin = pRVar2->m_Width;
    pRVar1 = (this->fields).scaleTarget;
    RStack_3.m_YMin = RStack_3.m_XMin;
    RStack_3.m_Width = RStack_3.m_XMin;
    RStack_3.m_Height = RStack_3.m_XMin;
    if (pRVar1 != (RectTransform *)0x0) {
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffdc,pRVar1,(MethodInfo *)0x0);
      fVar4 = pRVar2->m_Height;
      (this->fields).startSize.x = RStack_3.m_XMin;
      (this->fields).startSize.y = fVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImageScaleAnimator::ImageScaleAnimator_Update
               (ImageScaleAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).scaleCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                    ((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar1 * (this->fields).scaleSpeed,(MethodInfo *)0x0);
    this_01 = (this->fields).scaleTarget;
    if (this_01 != (RectTransform *)0x0) {
      value.y = fVar1 * (this->fields).startSize.y + (this->fields).startSize.y;
      value.x = fVar1 * (this->fields).startSize.x + (this->fields).startSize.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

