
/* Boolean AlmostEqual(Single, Single, Single) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_AlmostEqual
               (float v1,float v2,float epsilon,MethodInfo *method)

{
  return (float)((uint)(v1 - v2) & _UNK_?) < epsilon;
}


/* Int32 GetNumDigits(Int32) */

int32_t Assembly-CSharp.dll::RTG::MathEx::MathEx_GetNumDigits(int32_t number,MethodInfo *method)

{
  if (number == 0) {
    return 1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  auVar1._0_8_ = (double)((number ^ number >> 0x1f) - (number >> 0x1f));
  auVar1._8_8_ = 0;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar2 = (float)auVar1._0_8_ + _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar3 = (float10)func_?((double)fVar2);
  return (int)fVar3;
}


/* Single SafeAcos(Single) */

float Assembly-CSharp.dll::RTG::MathEx::MathEx_SafeAcos(float cosine,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (cosine <= _UNK_?) {
    fVar1 = cosine;
  }
  fVar2 = _UNK_?;
  if (_UNK_? <= fVar1) {
    fVar2 = fVar1;
  }
  dVar3 = (double)fVar2;
  func_?();
  return (float)dVar3;
}


/* Boolean SolveQuadratic(Single, Single, Single, Single ByRef, Single ByRef) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_SolveQuadratic
               (float a,float b,float c,float *t1,float *t2,MethodInfo *method)

{
  fVar1 = b * b - a * _UNK_? * c;
  *t2 = 0.0;
  *t1 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = a + a;
    if (fVar2 != 0.0) {
      fVar3 = (float)((uint)b ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if (fVar1 != 0.0) {
        dVar4 = (double)fVar1;
        if (dVar4 < 0.0) {
          func_?();
        }
        else {
          dVar4 = SQRT(dVar4);
        }
        *t1 = (fVar3 + (float)dVar4) / fVar2;
        fVar2 = ((float)((uint)b ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
                (float)dVar4) / fVar2;
        *t2 = fVar2;
        fVar1 = *t1;
        if (fVar2 < fVar1) {
          *t1 = fVar2;
          *t2 = fVar1;
        }
        return 1;
      }
      fVar3 = fVar3 / fVar2;
      *t2 = fVar3;
      *t1 = fVar3;
      return 1;
    }
  }
  return 0;
}

