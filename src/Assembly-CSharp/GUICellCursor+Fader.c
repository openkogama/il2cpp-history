
/* Boolean Update(Single ByRef) */

bool Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader_Update
               (GUICellCursor_Fader *this,float *fadeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields).end <= fVar1) {
    *fadeVal = (this->fields).endValue;
    return 0;
  }
  fVar2 = (this->fields).startMulDurationInv;
  b = (this->fields).endValue;
  fVar3 = (this->fields).durationInv;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (0.0,b,fVar3 * fVar1 - fVar2,(MethodInfo *)0x0);
  *fadeVal = fVar1;
  return 1;
}


/* GUICellCursor+Fader(Single, Single, Single) */

void Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader__ctor
               (GUICellCursor_Fader *this,float duration,float startValue,float endValue,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).start = fVar1;
  (this->fields).end = fVar1 + duration;
  fVar2 = _UNK_? / duration;
  (this->fields).startMulDurationInv = fVar1 / duration;
  (this->fields).durationInv = fVar2;
  (this->fields).startValue = startValue;
  (this->fields).endValue = endValue;
  return;
}

