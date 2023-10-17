
/* ShadowEffect() */

void Assembly-CSharp.dll::Gamestrap::ShadowEffect::ShadowEffect_1__ctor(ShadowEffect_1 *this,MethodInfo *method)

{
  (this->fields)._.m_EffectColor.r = 0.0;
  (this->fields)._.m_EffectColor.g = 0.0;
  (this->fields)._.m_EffectColor.b = 0.0;
  (this->fields)._.m_EffectColor.a = 0.5;
  (this->fields)._.m_EffectDistance.x = 1.0;
  (this->fields)._.m_EffectDistance.y = -1.0;
  (this->fields)._.m_UseGraphicAlpha = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

