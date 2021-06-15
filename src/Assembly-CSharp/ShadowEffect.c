
/* ShadowEffect() */

void Assembly-CSharp.dll::ShadowEffect::ShadowEffect_1__ctor
               (ShadowEffect_1 *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0,0,0,0x3f000000,0);
  (this->fields)._.m_EffectColor.r = fStack_1;
  (this->fields)._.m_EffectColor.g = fStack_2;
  (this->fields)._.m_EffectColor.b = fStack_3;
  (this->fields)._.m_EffectColor.a = fStack_4;
  uStack_5 = 0;
  func_?(&uStack_5,0x3f800000,0xbf800000,0);
  (this->fields)._.m_EffectDistance.x = (float)uStack_5;
  (this->fields)._.m_EffectDistance.y = uStack_5._4_4_;
  (this->fields)._.m_UseGraphicAlpha = 1;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

