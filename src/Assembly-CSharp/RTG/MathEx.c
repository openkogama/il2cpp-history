
/* Boolean AlmostEqual(Single, Single, Single) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_AlmostEqual(float v1,float v2,float epsilon,MethodInfo *method)

{
  return ABS(v1 - v2) < epsilon;
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
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)((float)auVar1._0_8_ + 1.0));
  return (int)fVar2;
}


/* Single SafeAcos(Single) */

float Assembly-CSharp.dll::RTG::MathEx::MathEx_SafeAcos(float cosine,MethodInfo *method)

{
  fVar1 = 1.0;
  if (cosine <= 1.0) {
    fVar1 = cosine;
  }
  fVar2 = -1.0;
  if (-1.0 <= fVar1) {
    fVar2 = fVar1;
  }
  dVar3 = (double)fVar2;
  func_?();
  return (float)dVar3;
}


/* Boolean SolveQuadratic(Single, Single, Single, Single ByRef, Single ByRef) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_SolveQuadratic(float a,float b,float c,float *t1,float *t2,MethodInfo *method)

{
  fVar1 = b * b - a * 4.0 * c;
  *t2 = 0.0;
  *t1 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = a + a;
    if (fVar2 != 0.0) {
      if (fVar1 != 0.0) {
        dVar3 = (double)fVar1;
        if (dVar3 < 0.0) {
          func_?();
        }
        else {
          dVar3 = SQRT(dVar3);
        }
        *t1 = (-b + (float)dVar3) / fVar2;
        fVar2 = (-b - (float)dVar3) / fVar2;
        *t2 = fVar2;
        fVar1 = *t1;
        if (fVar2 < fVar1) {
          *t1 = fVar2;
          *t2 = fVar1;
        }
        return 1;
      }
      fVar2 = -b / fVar2;
      *t2 = fVar2;
      *t1 = fVar2;
      return 1;
    }
  }
  return 0;
}

