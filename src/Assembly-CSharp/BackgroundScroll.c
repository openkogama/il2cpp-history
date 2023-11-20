
/* Void Awake() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll_Awake
               (BackgroundScroll *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (RawImage *)0x0) {
    uVar1 = (this_00->fields).m_UVRect.m_XMin;
    uVar2 = (this_00->fields).m_UVRect.m_YMin;
    value.m_YMin = (float)uVar2;
    value.m_XMin = (float)uVar1;
    value.m_Width = (this->fields).Scale.x;
    value.m_Height = (this->fields).Scale.y;
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    fVar6 = (this->fields).Direction.x;
    fVar7 = (this->fields).Direction.y;
    fVar8 = (this->fields).Speed;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 * fVar8;
    pRVar1 = (this->fields).image;
    if (pRVar1 != (RawImage *)0x0) {
      value.m_YMin = fVar3 + fVar7 * fVar9;
      value.m_XMin = fVar2 + fVar6 * fVar9;
      value.m_Width = fVar4;
      value.m_Height = fVar5;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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

