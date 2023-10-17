
/* Boolean Update(Single ByRef) */

bool Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader_Update
               (GUICellCursor_Fader *this,float *fadeVal,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields).end <= fVar1) {
    *fadeVal = (this->fields).endValue;
    return 0;
  }
  fVar2 = (this->fields).startValue;
  fVar1 = fVar1 * (this->fields).durationInv - (this->fields).startMulDurationInv;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  *fadeVal = ((this->fields).endValue - fVar2) * fVar1 + fVar2;
  return 1;
}


/* GUICellCursor+Fader(Single, Single, Single) */

void Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader__ctor
               (GUICellCursor_Fader *this,float duration,float startValue,float endValue,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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

