
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
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = (float)FUN_?();
  fVar1 = fVar1 + _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = (double)func_?((double)fVar1);
  return (int)dVar2;
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
  if (((byte)uRam_? & 3) == 3) {
    uVar3 = (uint)fVar2 >> 0x17 & 0xff;
    fVar1 = 0.0;
    if (0x7f800000 < (uint)ABS(fVar2)) {
      return (float)((uint)fVar2 | 0x400000);
    }
    if (uVar3 < 0x65) {
      func_?(0x20);
      return _UNK_?;
    }
    if (uVar3 < 0x7f) {
      fVar4 = fVar2;
      if ((int)fVar2 < 0) {
        fVar4 = (float)((uint)fVar2 ^ _UNK_?);
      }
      if (uVar3 < 0x7e) {
        fVar5 = fVar4 * fVar4;
      }
      else {
        fVar5 = (_UNK_? - fVar4) * _UNK_?;
        fVar4 = SQRT(fVar5);
        fVar1 = fVar4;
      }
      fVar6 = ((fVar5 * (fVar5 * (-(fVar5 * _UNK_?) + _UNK_?) - _UNK_?) +
               _UNK_?) * fVar5) / (-(fVar5 * _UNK_?) + _UNK_?);
      if (uVar3 >= 0x7e) {
        if ((int)fVar2 < 0) {
          dVar7 = ((double)(fVar4 * fVar6) - _UNK_?) + (double)fVar1;
          return (float)(_UNK_? - (dVar7 + dVar7));
        }
        fVar2 = (float)((uint)fVar1 & 0xffff0000);
        fVar1 = (-(fVar2 * fVar2) + fVar5) / (fVar2 + fVar1);
        return fVar6 * (fVar4 + fVar4) + fVar1 + fVar1 + fVar2 + fVar2;
      }
      return (float)(_UNK_? - ((double)fVar2 - (_UNK_? - (double)(fVar6 * fVar2))));
    }
    if (fVar2 == _UNK_?) {
      return 0.0;
    }
    if (fVar2 == _UNK_?) {
      func_?(0x20);
      return _UNK_?;
    }
    fVar1 = (float)FUN_?(&UNK_?,0xd,0xffc00000,1,8,0x21,fVar2,0,1);
    return fVar1;
  }
  fVar1 = 0.0;
  uVar3 = (uint)fVar2 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(fVar2)) {
    return (float)((uint)fVar2 | 0x400000);
  }
  if (uVar3 < 0x65) {
    func_?(0x20);
    return _UNK_?;
  }
  if (uVar3 < 0x7f) {
    fVar4 = fVar2;
    if ((int)fVar2 < 0) {
      fVar4 = (float)((uint)fVar2 ^ _UNK_?);
    }
    if (uVar3 < 0x7e) {
      fVar5 = fVar4 * fVar4;
    }
    else {
      fVar5 = (_UNK_? - fVar4) * _UNK_?;
      fVar4 = SQRT(fVar5);
      fVar1 = fVar4;
    }
    fVar6 = ((((_UNK_? - fVar5 * _UNK_?) * fVar5 - _UNK_?) * fVar5 +
             _UNK_?) * fVar5) / (_UNK_? - fVar5 * _UNK_?);
    if (uVar3 >= 0x7e) {
      if ((int)fVar2 < 0) {
        dVar7 = ((double)(fVar4 * fVar6) - _UNK_?) + (double)fVar1;
        return (float)(_UNK_? - (dVar7 + dVar7));
      }
      fVar2 = (float)((uint)fVar1 & 0xffff0000);
      fVar1 = (fVar5 - fVar2 * fVar2) / (fVar2 + fVar1);
      return (fVar4 + fVar4) * fVar6 + fVar1 + fVar1 + fVar2 + fVar2;
    }
    return (float)(_UNK_? - ((double)fVar2 - (_UNK_? - (double)(fVar6 * fVar2))));
  }
  if (fVar2 == _UNK_?) {
    return 0.0;
  }
  if (fVar2 == _UNK_?) {
    func_?(0x20);
    return _UNK_?;
  }
  fVar1 = (float)FUN_?(&UNK_?,0xd,0xffc00000,1,8,0x21,fVar2,0,1);
  return fVar1;
}


/* Boolean SolveQuadratic(Single, Single, Single, Single ByRef, Single ByRef) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_SolveQuadratic
               (float a,float b,float c,float *t1,float *t2,MethodInfo *method)

{
  bVar1 = 0;
  fVar2 = a * _UNK_?;
  *t2 = 0.0;
  *t1 = 0.0;
  fVar2 = b * b - fVar2 * c;
  if ((0.0 <= fVar2) && (fVar3 = a + a, fVar3 != 0.0)) {
    fVar4 = (float)((uint)b ^ _UNK_?);
    if (fVar2 == 0.0) {
      fVar4 = fVar4 / fVar3;
      *t2 = fVar4;
      *t1 = fVar4;
    }
    else {
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_?(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      fVar5 = ((float)((uint)b ^ _UNK_?) - fVar2) / fVar3;
      *t1 = (fVar2 + fVar4) / fVar3;
      *t2 = fVar5;
      fVar2 = *t1;
      if (fVar5 < fVar2) {
        *t1 = fVar5;
        *t2 = fVar2;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

