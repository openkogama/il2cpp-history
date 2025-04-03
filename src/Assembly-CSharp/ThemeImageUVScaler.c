
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
  func_?();
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
                       ((Rect *)&stack0xffffffcc,(RectTransform *)this_00,(MethodInfo *)0x0);
    pRVar4 = (this->fields).image;
    fVar5 = pRVar3->m_Width;
    fVar6 = pRVar3->m_Height;
    fVar7 = fVar6;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar8 = 0.0;
    fVar9 = 0.0;
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      return;
    }
    if (((((this->fields).prevRect.m_XMin == (float)pRVar4) &&
         ((this->fields).prevRect.m_YMin == fVar9)) && ((this->fields).prevRect.m_Width == fVar5))
       && ((this->fields).prevRect.m_Height == fVar6)) {
      return;
    }
    (this->fields).prevRect.m_XMin = (float)pRVar4;
    (this->fields).prevRect.m_YMin = fVar9;
    (this->fields).prevRect.m_Width = fVar8;
    (this->fields).prevRect.m_Height = fVar7;
    pRVar4 = (this->fields).image;
    if (pRVar4 != (RawImage *)0x0) {
      auVar11 = ZEXT412(0x3f800000) << 0x40;
      value.m_Height = fVar6 / fVar5;
      value.m_XMin = (float)auVar11._0_4_;
      value.m_YMin = (float)auVar11._4_4_;
      value.m_Width = (float)auVar11._8_4_;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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

