
/* ShadowEffect() */

void Assembly-CSharp.dll::Gamestrap::ShadowEffect::ShadowEffect_1__ctor
               (ShadowEffect_1 *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.m_EffectColor.r = _UNK_?;
  (this->fields)._.m_EffectColor.g = fVar3;
  (this->fields)._.m_EffectColor.b = fVar2;
  (this->fields)._.m_EffectColor.a = fVar1;
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

