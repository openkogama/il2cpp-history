
/* Void Reset() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Reset
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (RawImage *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__RawImage_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::RawImage>__
                     );
  (this->fields).image = pRVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Update
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  uVar2 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pTVar1);
  if (pTVar1 != (Transform *)0x0) {
    this_00 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      this_00 = pTVar1;
    }
    if (this_00 == (Transform *)0x0) goto code_?;
    pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffd4,(RectTransform *)this_00,(MethodInfo *)0x0);
    pRVar4 = (this->fields).image;
    pSVar5 = (SystemTimer__Class *)pRVar3->m_XMin;
    pMVar6 = (MonitorData *)pRVar3->m_YMin;
    fVar7 = pRVar3->m_Width;
    pSVar8 = (SystemTimer__Class *)pRVar3->m_Height;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      return;
    }
    pMVar10 = (MonitorData *)0x0;
    rhs.m_YMin = (float)pMVar6;
    rhs.m_XMin = (float)pSVar5;
    rhs.m_Width = fVar7;
    rhs.m_Height = (float)pSVar8;
    pSVar5 = pSVar8;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_op_Inequality
                      ((this->fields).prevRect,rhs,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      return;
    }
    (this->fields).prevRect.m_XMin = (float)pSVar5;
    (this->fields).prevRect.m_YMin = (float)pMVar10;
    (this->fields).prevRect.m_Width = fVar7;
    (this->fields).prevRect.m_Height = (float)pSVar8;
    func_?();
    func_?();
    fVar11 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                      ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffe4,(MethodInfo *)0x0);
    fVar12 = SubscribableVariableBase`1[System::Single]::
             SubscribableVariableBase_1_System_Single__get_Value
                       ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe4,
                        (MethodInfo *)0x0);
    UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
    CrossPlatformInputManager_VirtualAxis_Update
              ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffe4,fVar11 / fVar12,
               (MethodInfo *)0x0);
    ThemeTimers::SystemTimer::SystemTimer_set_Time
              ((SystemTimer *)&stack0xffffffe4,1.0,(MethodInfo *)0x0);
    pRVar4 = (this->fields).image;
    if (pRVar4 != (RawImage *)0x0) {
      value.m_YMin = (float)pMVar10;
      value.m_XMin = (float)pSVar5;
      value.m_Width = fVar7;
      value.m_Height = (float)pSVar8;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_get_RectTransform
          (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pTVar2 = (Transform *)0x0;
  if (pTVar1 != (Transform *)0x0) {
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 == (Transform *)0x0) {
      func_?(pTVar1);
      pcVar3 = (code *)swi(3);
      pRVar4 = (RectTransform *)(*pcVar3)();
      return pRVar4;
    }
  }
  return (RectTransform *)pTVar2;
}

