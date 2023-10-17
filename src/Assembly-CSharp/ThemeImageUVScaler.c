
/* Void Reset() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Reset
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__RawImage_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::RawImage>__
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (RawImage *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__RawImage_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::RawImage>__
                     );
  (this->fields).image = pRVar1;
  func_?(&(this->fields).image,pRVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ThemeImageUVScaler::ThemeImageUVScaler_Update
               (ThemeImageUVScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
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
    pSVar5 = (SubscribableVariableBase_1_System_Single___Class *)pRVar3->m_XMin;
    pMVar6 = (MonitorData *)pRVar3->m_YMin;
    fVar7 = pRVar3->m_Width;
    pSVar8 = (SubscribableVariableBase_1_System_Single___Class *)pRVar3->m_Height;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
    ParticleSystem_Burst_set_time((ParticleSystem_Burst *)&stack0xffffffe4,0.0,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::FloatTween::FloatTween_set_startValue
              ((FloatTween *)&stack0xffffffe4,0.0,(MethodInfo *)0x0);
    fVar11 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
            Int32Enum,System::Single]::
            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                        *)&stack0xffffffe4,(MethodInfo *)0x0);
    fVar12 = SubscribableVariableBase`1[System::Single]::
             SubscribableVariableBase_1_System_Single__get_Value
                       ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe4,
                        (MethodInfo *)0x0);
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::HableCurve::
    HableCurve_set_inverseWhitePoint
              ((HableCurve *)&stack0xffffffe4,fVar11 / fVar12,(MethodInfo *)0x0);
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::HableCurve::
    HableCurve_set_whitePoint((HableCurve *)&stack0xffffffe4,1.0,(MethodInfo *)0x0);
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
  uVar2 = func_?();
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
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
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

