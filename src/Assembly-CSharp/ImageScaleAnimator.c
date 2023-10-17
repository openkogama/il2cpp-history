
/* Void Start() */

void Assembly-CSharp.dll::ImageScaleAnimator::ImageScaleAnimator_Start
               (ImageScaleAnimator *this,MethodInfo *method)

{
  DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = 0.0;
  pRVar2 = (this->fields).scaleTarget;
  if (pRVar2 != (RectTransform *)0x0) {
    pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&puStack_4,pRVar2,(MethodInfo *)0x0);
    DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar3->m_XMin;
    DStack_1._index = (int32_t)pRVar3->m_YMin;
    DStack_1._version = (int32_t)pRVar3->m_Width;
    DStack_1._currentValue = pRVar3->m_Height;
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&DStack_1,(MethodInfo *)0x0);
    pRVar2 = (this->fields).scaleTarget;
    if (pRVar2 != (RectTransform *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&puStack_4,pRVar2,(MethodInfo *)0x0);
      DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pRVar3->m_XMin;
      DStack_1._index = (int32_t)pRVar3->m_YMin;
      DStack_1._version = (int32_t)pRVar3->m_Width;
      DStack_1._currentValue = pRVar3->m_Height;
      fVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              Int32Enum,System::Single]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                        (&DStack_1,(MethodInfo *)0x0);
      (this->fields).startSize.x = fVar5;
      (this->fields).startSize.y = fVar6;
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(this->fields).scaleSpeed * fVar1,(MethodInfo *)0x0);
    fVar1 = (this->fields).startSize.x;
    this_01 = (this->fields).scaleTarget;
    if (this_01 != (RectTransform *)0x0) {
      value.y = fVar2 * (this->fields).startSize.y + (this->fields).startSize.y;
      value.x = fVar1 + fVar2 * fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

