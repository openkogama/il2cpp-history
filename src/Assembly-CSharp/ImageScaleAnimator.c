
/* Void Start() */

void Assembly-CSharp.dll::ImageScaleAnimator::ImageScaleAnimator_Start
               (ImageScaleAnimator *this,MethodInfo *method)

{
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  auStack_2._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (String *)0x0;
  auStack_2._12_4_ = 0.0;
  pRVar3 = (this->fields).scaleTarget;
  if (pRVar3 != (RectTransform *)0x0) {
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&puStack_5,pRVar3,(MethodInfo *)0x0);
    SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar4->m_XMin;
    SStack_1.monitor = (MonitorData *)pRVar4->m_YMin;
    SStack_1.fields.value = pRVar4->m_Width;
    SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar4->m_Height;
    pSStack_6 = (String *)
                SubscribableVariableBase`1[System::Single]::
                SubscribableVariableBase_1_System_Single__get_Value(&SStack_1,(MethodInfo *)0x0);
    pRVar3 = (this->fields).scaleTarget;
    if (pRVar3 != (RectTransform *)0x0) {
      pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&puStack_5,pRVar3,(MethodInfo *)0x0);
      auStack_2._0_4_ = pRVar4->m_XMin;
      auStack_2._4_4_ = pRVar4->m_YMin;
      auStack_2._8_4_ = pRVar4->m_Width;
      auStack_2._12_4_ = pRVar4->m_Height;
      auStack_2._12_4_ =
           UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
           CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                     ((CrossPlatformInputManager_VirtualAxis *)auStack_2,(MethodInfo *)0x0);
      auStack_2._4_4_ = afStack_7;
      afStack_7[0] = 0.0;
      afStack_7[1] = 0.0;
      SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
      auStack_2._8_4_ = pSStack_6;
      auStack_2._0_4_ = &UNK_?;
      func_?();
      (this->fields).startSize.x = afStack_7[0];
      (this->fields).startSize.y = afStack_7[1];
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImageScaleAnimator::ImageScaleAnimator_Update
               (ImageScaleAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scaleCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                    ((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(this->fields).scaleSpeed * fVar1,(MethodInfo *)0x0);
    this_01 = (this->fields).scaleTarget;
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    fVar1 = (this->fields).startSize.y;
    func_?(&VStack_3,(this->fields).startSize.x * fVar2);
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    VVar4.y = 0.0;
    VVar4.x = fVar1 * fVar2;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                      (VVar4,VStack_3,(MethodInfo *)0x0);
    if (this_01 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_01,VVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

