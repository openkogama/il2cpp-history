
/* Void Awake() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll_Awake
               (BackgroundScroll *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  pRVar5 = (this->fields).image;
  if (pRVar5 != (RawImage *)0x0) {
    pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_get_uvRect
                       (&RStack_7,pRVar5,(MethodInfo *)0x0);
    RStack_7.m_Width = (this->fields).Scale.x;
    fStack_1 = pRVar6->m_XMin;
    fStack_2 = pRVar6->m_YMin;
    fStack_3 = pRVar6->m_Width;
    fStack_4 = pRVar6->m_Height;
    RStack_7.m_Height = (this->fields).Scale.y;
    func_?(&fStack_1,RStack_7.m_Width,RStack_7.m_Height,0);
    pRVar5 = (this->fields).image;
    if (pRVar5 != (RawImage *)0x0) {
      value.m_YMin = fStack_2;
      value.m_XMin = fStack_1;
      value.m_Width = fStack_3;
      value.m_Height = fStack_4;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar5,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll_Update
               (BackgroundScroll *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).image;
  if (pRVar1 != (RawImage *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_get_uvRect
                       (&RStack_3,pRVar1,(MethodInfo *)0x0);
    fVar4 = pRVar2->m_YMin;
    fVar5 = pRVar2->m_Width;
    fVar6 = pRVar2->m_Height;
    VVar7 = (Vector2)func_?(&stack0xffffffd8,0);
    RStack_3.m_Width = (this->fields).Direction.x;
    RStack_3.m_Height = (this->fields).Direction.y;
    fStack_8 = (this->fields).Speed;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    VVar10.y = RStack_3.m_Height;
    VVar10.x = RStack_3.m_Width;
    VVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                      (VVar10,fVar9 * fStack_8,(MethodInfo *)0x0);
    VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                      (VVar7,VVar10,(MethodInfo *)0x0);
    uVar11 = 0;
    func_?(&stack0xffffffd8,VVar7.x,VVar7.y);
    pRVar1 = (this->fields).image;
    if (pRVar1 != (RawImage *)0x0) {
      value.m_YMin = fVar4;
      value.m_XMin = (float)uVar11;
      value.m_Width = fVar5;
      value.m_Height = fVar6;
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_uvRect
                (pRVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* BackgroundScroll() */

void Assembly-CSharp.dll::BackgroundScroll::BackgroundScroll__ctor
               (BackgroundScroll *this,MethodInfo *method)

{
  uStack_1 = 0;
  (this->fields).Speed = 1.0;
  func_?(&uStack_1,0x3f800000,0x3e4ccccd,0);
  (this->fields).Direction.x = (float)uStack_1;
  (this->fields).Direction.y = uStack_1._4_4_;
  uStack_2 = 0;
  func_?(&uStack_2,0x3f800000,0x3ecccccd,0);
  (this->fields).Scale.x = (float)uStack_2;
  (this->fields).Scale.y = uStack_2._4_4_;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

