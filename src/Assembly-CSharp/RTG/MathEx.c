
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
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = (float)FUN_?();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = (double)func_?((double)(fVar1 + 1.0));
  return (int)dVar2;
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
  if (((byte)uRam_? & 3) == 3) {
    uVar3 = (uint)fVar2 >> 0x17 & 0xff;
    fVar1 = 0.0;
    if (0x7f800000 < (uint)ABS(fVar2)) {
      return (float)((uint)fVar2 | 0x400000);
    }
    if (uVar3 < 0x65) {
      func_?(0x20);
      return 1.5707964;
    }
    if (uVar3 < 0x7f) {
      fVar4 = fVar2;
      if ((int)fVar2 < 0) {
        fVar4 = -fVar2;
      }
      if (uVar3 < 0x7e) {
        fVar5 = fVar4 * fVar4;
      }
      else {
        fVar5 = (1.0 - fVar4) * 0.5;
        fVar4 = SQRT(fVar5);
        fVar1 = fVar4;
      }
      fVar6 = ((fVar5 * (fVar5 * (-(fVar5 * 0.0039613745) + -0.013381929) - 0.05652987) + 0.1841616) * fVar5) / (-(fVar5 * 0.8364113) + 1.1049696);
      if (uVar3 >= 0x7e) {
        if ((int)fVar2 < 0) {
          fVar1 = (fVar4 * fVar6 - 6.123234e-17) + fVar1;
          return 3.1415927 - (fVar1 + fVar1);
        }
        fVar2 = (float)((uint)fVar1 & 0xffff0000);
        fVar1 = (-(fVar2 * fVar2) + fVar5) / (fVar2 + fVar1);
        return fVar6 * (fVar4 + fVar4) + fVar1 + fVar1 + fVar2 + fVar2;
      }
      return 1.5707964 - (fVar2 - (6.123234e-17 - fVar6 * fVar2));
    }
    if (fVar2 == 1.0) {
      return 0.0;
    }
    if (fVar2 == -1.0) {
      func_?(0x20);
      return 3.1415927;
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
    return 1.5707964;
  }
  if (uVar3 < 0x7f) {
    fVar4 = fVar2;
    if ((int)fVar2 < 0) {
      fVar4 = -fVar2;
    }
    if (uVar3 < 0x7e) {
      fVar5 = fVar4 * fVar4;
    }
    else {
      fVar5 = (1.0 - fVar4) * 0.5;
      fVar4 = SQRT(fVar5);
      fVar1 = fVar4;
    }
    fVar6 = ((((-0.013381929 - fVar5 * 0.0039613745) * fVar5 - 0.05652987) * fVar5 + 0.1841616) * fVar5) / (1.1049696 - fVar5 * 0.8364113);
    if (uVar3 >= 0x7e) {
      if ((int)fVar2 < 0) {
        fVar1 = (fVar4 * fVar6 - 6.123234e-17) + fVar1;
        return 3.1415927 - (fVar1 + fVar1);
      }
      fVar2 = (float)((uint)fVar1 & 0xffff0000);
      fVar1 = (fVar5 - fVar2 * fVar2) / (fVar2 + fVar1);
      return (fVar4 + fVar4) * fVar6 + fVar1 + fVar1 + fVar2 + fVar2;
    }
    return 1.5707964 - (fVar2 - (6.123234e-17 - fVar6 * fVar2));
  }
  if (fVar2 == 1.0) {
    return 0.0;
  }
  if (fVar2 == -1.0) {
    func_?(0x20);
    return 3.1415927;
  }
  fVar1 = (float)FUN_?(&UNK_?,0xd,0xffc00000,1,8,0x21,fVar2,0,1);
  return fVar1;
}


/* Boolean SolveQuadratic(Single, Single, Single, Single ByRef, Single ByRef) */

bool Assembly-CSharp.dll::RTG::MathEx::MathEx_SolveQuadratic(float a,float b,float c,float *t1,float *t2,MethodInfo *method)

{
  bVar1 = 0;
  *t2 = 0.0;
  *t1 = 0.0;
  fVar2 = b * b - a * 4.0 * c;
  if ((0.0 <= fVar2) && (fVar3 = a + a, fVar3 != 0.0)) {
    if (fVar2 == 0.0) {
      fVar3 = -b / fVar3;
      *t2 = fVar3;
      *t1 = fVar3;
    }
    else {
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_?(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      fVar4 = (-b - fVar2) / fVar3;
      *t1 = (fVar2 + -b) / fVar3;
      *t2 = fVar4;
      fVar2 = *t1;
      if (fVar4 < fVar2) {
        *t1 = fVar4;
        *t2 = fVar2;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

