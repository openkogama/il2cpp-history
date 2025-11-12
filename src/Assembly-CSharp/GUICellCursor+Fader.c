
/* Boolean Update(Single ByRef) */

bool Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader_Update
               (GUICellCursor_Fader *this,float *fadeVal,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 < (this->fields).end) {
    fVar5 = (this->fields).startValue;
    fVar4 = fVar4 * (this->fields).durationInv - (this->fields).startMulDurationInv;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    *fadeVal = ((this->fields).endValue - fVar5) * fVar4 + fVar5;
    return 1;
  }
  *fadeVal = (this->fields).endValue;
  return 0;
}


/* GUICellCursor+Fader(Single, Single, Single) */

void Assembly-CSharp.dll::GUICellCursor+Fader::GUICellCursor_Fader__ctor
               (GUICellCursor_Fader *this,float duration,float startValue,float endValue,
               MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = _UNK_? / duration;
  (this->fields).start = fVar3;
  (this->fields).startValue = startValue;
  (this->fields).endValue = endValue;
  (this->fields).durationInv = fVar4;
  (this->fields).end = fVar3 + duration;
  (this->fields).startMulDurationInv = fVar3 / duration;
  return;
}

