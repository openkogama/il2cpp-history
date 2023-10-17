
/* Void Awake() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll_Awake
               (BackgroundScroll *this,MethodInfo *method)

{
  pRVar1 = (this->fields).image;
  if (pRVar1 != (RawImage *)0x0) {
    fVar2 = (pRVar1->fields).m_UVRect.m_XMin;
    fVar3 = (pRVar1->fields).m_UVRect.m_YMin;
    fVar4 = (pRVar1->fields).m_UVRect.m_Width;
    fVar5 = (pRVar1->fields).m_UVRect.m_Height;
    UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_set_size
              ((Rect *)&stack0xffffffe4,(this->fields).Scale,(MethodInfo *)0x0);
    pRVar1 = (this->fields).image;
    if (pRVar1 != (RawImage *)0x0) {
      value.m_YMin = fVar3;
      value.m_XMin = fVar2;
      value.m_Width = fVar4;
      value.m_Height = fVar5;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll_Update
               (BackgroundScroll *this,MethodInfo *method)

{
  pRVar1 = (this->fields).image;
  if (pRVar1 != (RawImage *)0x0) {
    fVar2 = (pRVar1->fields).m_UVRect.m_XMin;
    fVar3 = (pRVar1->fields).m_UVRect.m_YMin;
    fVar4 = (pRVar1->fields).m_UVRect.m_Width;
    fVar5 = (pRVar1->fields).m_UVRect.m_Height;
    VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_min
                      ((Rect *)&stack0xffffffdc,(MethodInfo *)0x0);
    fVar7 = (this->fields).Direction.x;
    fVar8 = (this->fields).Direction.y;
    fVar9 = (this->fields).Speed;
    fVar10 = VVar6.x;
    fVar11 = VVar6.y;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 * fVar9;
    mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
              ((ValueTuple_2_Single_Single_ *)&stack0xffffffdc,fVar10 + fVar7 * fVar12,
               fVar11 + fVar8 * fVar12,(MethodInfo *)0x0);
    pRVar1 = (this->fields).image;
    if (pRVar1 != (RawImage *)0x0) {
      value.m_YMin = fVar3;
      value.m_XMin = fVar2;
      value.m_Width = fVar4;
      value.m_Height = fVar5;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* BackgroundScroll() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll__ctor
               (BackgroundScroll *this,MethodInfo *method)

{
  (this->fields).Speed = 1.0;
  (this->fields).Direction.x = 1.0;
  (this->fields).Direction.y = 0.2;
  (this->fields).Scale.x = 1.0;
  (this->fields).Scale.y = 0.4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

