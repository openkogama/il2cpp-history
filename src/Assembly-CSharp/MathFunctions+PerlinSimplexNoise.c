
/* MathFunctions+PerlinSimplexNoise() */

void Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (Int32__Array__Array *)func_?(TypeInfo__System__Int32,0xc);
  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  if (pIVar2 == (Int32__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = 1;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = 1;
    if (pIVar1 == (Int32__Array__Array *)0x0) goto code_?;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length == 0) goto code_?;
    pIVar1->vector[0] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = -1;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = 1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 2) goto code_?;
    pIVar1->vector[1] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = 1;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 3) goto code_?;
    pIVar1->vector[2] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = -1;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 4) goto code_?;
    pIVar1->vector[3] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = 1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = 1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 5) goto code_?;
    pIVar1->vector[4] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = -1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = 1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 6) goto code_?;
    pIVar1->vector[5] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = 1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 7) goto code_?;
    pIVar1->vector[6] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = -1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 8) goto code_?;
    pIVar1->vector[7] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = 1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = 1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 9) goto code_?;
    pIVar1->vector[8] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = -1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = 1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 10) goto code_?;
    pIVar1->vector[9] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = 1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pIVar1->max_length < 0xb) goto code_?;
    pIVar1->vector[10] = pIVar2;
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
    if (pIVar2 == (Int32__Array *)0x0) goto code_?;
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = -1;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = -1;
    iVar4 = func_?(pIVar2,(pIVar1->klass->_0).element_class);
    if (iVar4 != 0) {
      if (pIVar1->max_length < 0xc) goto code_?;
      pIVar1->vector[0xb] = pIVar2;
      TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3 = pIVar1;
      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x100);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                ((Array *)pIVar2,__field_C660A6C2191F7639613A25F2A723ED819CE3C613_Field,
                 (MethodInfo *)0x0);
      TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p = pIVar2;
      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x200);
      uVar5 = 0;
      iVar4 = 0x10;
      TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm = pIVar2;
      while( true ) {
        pIVar2 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p;
        if (pIVar2 == (Int32__Array *)0x0) break;
        uVar6 = uVar5 & 0xff;
        if (pIVar2->max_length <= uVar6) goto code_?;
        pIVar7 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
        if (pIVar7 == (Int32__Array *)0x0) break;
        if (pIVar7->max_length <= uVar5) goto code_?;
        uVar5 = uVar5 + 1;
        *(int32_t *)((int)pIVar7->vector + iVar4 + -0x10) = pIVar2->vector[uVar6];
        iVar4 = iVar4 + 4;
        if (0x80f < iVar4) {
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single dot(Int32[], Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot
                (Int32__Array *g,float x,float y,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    func_?(0);
  }
  else if (g->max_length != 0) {
    if (1 < g->max_length) {
      return (float)g->vector[1] * y + (float)g->vector[0] * x;
    }
    goto code_?;
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Single dot(Int32[], Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_1
                (Int32__Array *g,float x,float y,float z,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    uVar2 = g->max_length;
    if (uVar2 == 0) goto code_?;
    if (1 < uVar2) {
      if (2 < uVar2) {
        return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single dot(Int32[], Single, Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_2
                (Int32__Array *g,float x,float y,float z,float w,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    uVar2 = g->max_length;
    if (uVar2 == 0) goto code_?;
    if (uVar2 < 2) goto code_?;
    if (2 < uVar2) {
      if (3 < uVar2) {
        return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z +
               (float)g->vector[3] * w;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Int32 fastfloor(Single) */

int32_t Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
        MathFunctions_PerlinSimplexNoise_fastfloor(float x,MethodInfo *method)

{
  iVar1 = (int)x + -1;
  if (_UNK_? < x) {
    iVar1 = (int)x;
  }
  return iVar1;
}


/* Single noise(Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise
                (float xin,float yin,float zin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (xin + yin + zin) * _UNK_?;
  if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  uVar2 = (uint)(fVar1 + xin);
  uVar3 = uVar2 - 1;
  if (0.0 < fVar1 + xin) {
    uVar3 = uVar2;
  }
  uVar4 = (uint)(fVar1 + yin);
  uVar2 = uVar4 - 1;
  if (0.0 < fVar1 + yin) {
    uVar2 = uVar4;
  }
  uVar5 = (uint)(fVar1 + zin);
  uVar4 = uVar5 - 1;
  if (0.0 < fVar1 + zin) {
    uVar4 = uVar5;
  }
  fVar1 = (float)(int)(uVar4 + uVar2 + uVar3) * _UNK_?;
  fVar6 = xin - ((float)(int)uVar3 - fVar1);
  fVar7 = yin - ((float)(int)uVar2 - fVar1);
  fVar1 = zin - ((float)(int)uVar4 - fVar1);
  if (fVar7 <= fVar6) {
    if (fVar1 <= fVar7) {
      iStack_8 = 1;
      iVar9 = 0;
      iStack_10 = 1;
      iVar11 = 0;
    }
    else if (fVar1 <= fVar6) {
      iStack_8 = 1;
      iVar9 = 0;
      iStack_10 = 0;
      iVar11 = 1;
    }
    else {
      iVar9 = 1;
      iStack_8 = 0;
      iStack_10 = 0;
      iVar11 = 1;
    }
    iStack_12 = 1;
code_?:
    iVar13 = 0;
    iStack_14 = 0;
  }
  else {
    iStack_8 = 0;
    if (fVar7 < fVar1) {
      iVar9 = 1;
      iStack_12 = 0;
      iStack_10 = 1;
      iVar11 = 1;
      goto code_?;
    }
    iVar13 = 1;
    iVar9 = 0;
    iStack_14 = 1;
    iStack_10 = 1;
    if (fVar6 < fVar1) {
      iStack_12 = 0;
      iVar11 = 1;
    }
    else {
      iStack_12 = 1;
      iVar11 = 0;
    }
  }
  uVar3 = uVar3 & 0xff;
  uVar2 = uVar2 & 0xff;
  x = (fVar6 - (float)iStack_8) + _UNK_?;
  y = (fVar7 - (float)iVar13) + _UNK_?;
  z = (fVar1 - (float)iVar9) + _UNK_?;
  x_00 = (fVar6 - (float)iStack_12) + _UNK_?;
  uVar4 = uVar4 & 0xff;
  y_00 = (fVar7 - (float)iStack_10) + _UNK_?;
  z_00 = (fVar1 - (float)iVar11) + _UNK_?;
  x_01 = (fVar6 - _UNK_?) + _UNK_?;
  y_01 = (fVar7 - _UNK_?) + _UNK_?;
  z_01 = (fVar1 - _UNK_?) + _UNK_?;
  if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar15 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar15 == (Int32__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0,0);
    func_?(uVar16);
code_?:
    uVar16 = 0;
    uVar17 = func_?(0,0);
    func_?(uVar17);
code_?:
    uVar16 = func_?(0,uVar16);
    func_?(uVar16);
code_?:
    uVar16 = func_?(0);
    func_?(uVar16);
  }
  else {
    uVar5 = pIVar15->max_length;
    if (uVar5 <= uVar4) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar18 = pIVar15->vector[uVar4] + uVar2;
    if (uVar5 <= uVar18) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar18 = pIVar15->vector[uVar18] + uVar3;
    if (uVar5 <= uVar18) goto code_?;
    uVar18 = pIVar15->vector[uVar18] % 0xc;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 <= uVar4 + iVar9) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar19 = pIVar15->vector[uVar4 + iVar9] + uVar2 + iStack_14;
    if (uVar5 <= uVar19) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar19 = pIVar15->vector[uVar19] + uVar3 + iStack_8;
    if (uVar5 <= uVar19) goto code_?;
    uVar19 = pIVar15->vector[uVar19] % 0xc;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 <= iVar11 + uVar4) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar20 = pIVar15->vector[iVar11 + uVar4] + uVar2 + iStack_10;
    if (uVar5 <= uVar20) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    uVar20 = pIVar15->vector[uVar20] + uVar3 + iStack_12;
    if (uVar5 <= uVar20) goto code_?;
    uVar20 = pIVar15->vector[uVar20] % 0xc;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 <= uVar4 + 1) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 <= pIVar15->vector[uVar4 + 1] + uVar2 + 1) goto code_?;
    if (pIVar15 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 <= pIVar15->vector[uVar2 + pIVar15->vector[uVar4 + 1] + 1] + uVar3 + 1)
    goto code_?;
    fVar21 = ((_UNK_? - fVar6 * fVar6) - fVar7 * fVar7) - fVar1 * fVar1;
    uVar3 = pIVar15->vector[uVar3 + pIVar15->vector[uVar2 + pIVar15->vector[uVar4 + 1] + 1] + 1] % 0xc;
    if (0.0 <= fVar21) {
      if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000
           ) != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar22 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar22 == (Int32__Array__Array *)0x0) goto code_?;
      uVar16 = 0;
      if (uVar18 < pIVar22->max_length) {
        fVar1 = MathFunctions_PerlinSimplexNoise_dot_1
                           (pIVar22->vector[uVar18],fVar6,fVar7,fVar1,(MethodInfo *)0x0);
        xin = fVar1 * fVar21 * fVar21 * fVar21 * fVar21;
        goto code_?;
      }
      goto code_?;
    }
    xin = 0.0;
code_?:
    fVar1 = ((_UNK_? - x * x) - y * y) - z * z;
    if (0.0 <= fVar1) {
      if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000
           ) != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar22 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar22 == (Int32__Array__Array *)0x0) goto code_?;
      if (uVar19 < pIVar22->max_length) {
        fVar6 = MathFunctions_PerlinSimplexNoise_dot_1
                           (pIVar22->vector[uVar19],x,y,z,(MethodInfo *)0x0);
        fVar6 = fVar6 * fVar1 * fVar1 * fVar1 * fVar1;
        goto code_?;
      }
      goto code_?;
    }
    fVar6 = 0.0;
code_?:
    fVar1 = ((_UNK_? - x_00 * x_00) - y_00 * y_00) - z_00 * z_00;
    if (fVar1 < 0.0) {
      yin = 0.0;
code_?:
      fVar1 = 0.0;
      fVar7 = ((_UNK_? - x_01 * x_01) - y_01 * y_01) - z_01 * z_01;
      if (fVar7 < 0.0) {
code_?:
        return (fVar6 + xin + yin + fVar1) * _UNK_?;
      }
      if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000
           ) != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar22 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar22 != (Int32__Array__Array *)0x0) {
        if (uVar3 < pIVar22->max_length) {
          fVar1 = MathFunctions_PerlinSimplexNoise_dot_1
                             (pIVar22->vector[uVar3],x_01,y_01,z_01,(MethodInfo *)0x0);
          fVar1 = fVar1 * fVar7 * fVar7 * fVar7 * fVar7;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar22 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar22 == (Int32__Array__Array *)0x0) goto code_?;
    if (uVar20 < pIVar22->max_length) {
      fVar7 = MathFunctions_PerlinSimplexNoise_dot_1
                         (pIVar22->vector[uVar20],x_00,y_00,z_00,(MethodInfo *)0x0);
      yin = fVar7 * fVar1 * fVar1 * fVar1 * fVar1;
      goto code_?;
    }
  }
  uVar16 = func_?(0);
  func_?(uVar16);
code_?:
  uVar16 = func_?(0);
  func_?(uVar16);
  pcVar23 = (code *)swi(3);
  fVar24 = (float10)(*pcVar23)();
  return (float)fVar24;
}


/* Single noise(Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
      MathFunctions_PerlinSimplexNoise_noise_1(float xin,float yin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  dVar1 = _UNK_?;
  func_?();
  fVar2 = (float)((dVar1 - _UNK_?) * _UNK_?) * (xin + yin);
  if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  fVar3 = fVar2 + xin;
  uVar4 = (uint)fVar3;
  fVar2 = fVar2 + yin;
  uVar5 = uVar4 - 1;
  if (0.0 < fVar3) {
    uVar5 = uVar4;
  }
  uVar6 = (uint)fVar2;
  uVar4 = uVar6 - 1;
  if (0.0 < fVar2) {
    uVar4 = uVar6;
  }
  fVar3 = (float)((_UNK_? - dVar1) / _UNK_?);
  fVar2 = (float)(int)(uVar4 + uVar5) * fVar3;
  fVar7 = xin - ((float)(int)uVar5 - fVar2);
  fVar8 = yin - ((float)(int)uVar4 - fVar2);
  uVar5 = uVar5 & 0xff;
  uVar4 = uVar4 & 0xff;
  fVar9 = (fVar7 - (float)(fVar8 < fVar7)) + fVar3;
  fVar10 = (fVar8 - (float)(fVar7 <= fVar8)) + fVar3;
  fVar2 = (fVar7 - _UNK_?) + fVar3 + fVar3;
  fVar3 = (fVar8 - _UNK_?) + fVar3 + fVar3;
  if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar11 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar11 == (Int32__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
code_?:
    uVar12 = func_?(0,0);
    func_?(uVar12);
  }
  else {
    uVar6 = pIVar11->max_length;
    if (uVar6 <= uVar4) goto code_?;
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    uVar13 = pIVar11->vector[uVar4] + uVar5;
    if (uVar6 <= uVar13) goto code_?;
    uVar13 = pIVar11->vector[uVar13] % 0xc;
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    uVar14 = uVar4 + (fVar7 <= fVar8);
    if (uVar6 <= uVar14) goto code_?;
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    uVar14 = pIVar11->vector[uVar14] + (uint)(fVar8 < fVar7) + uVar5;
    if (uVar6 <= uVar14) goto code_?;
    uVar14 = pIVar11->vector[uVar14] % 0xc;
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    if (uVar6 <= uVar4 + 1) goto code_?;
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    if (uVar6 <= pIVar11->vector[uVar4 + 1] + uVar5 + 1) goto code_?;
    fVar15 = (_UNK_? - fVar7 * fVar7) - fVar8 * fVar8;
    uVar5 = pIVar11->vector[uVar5 + pIVar11->vector[uVar4 + 1] + 1] % 0xc;
    if (0.0 <= fVar15) {
      if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000
           ) != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar16 == (Int32__Array__Array *)0x0) goto code_?;
      if (pIVar16->max_length <= uVar13) goto code_?;
      pIVar11 = pIVar16->vector[uVar13];
      if (pIVar11 == (Int32__Array *)0x0) goto code_?;
      if (pIVar11->max_length == 0) goto code_?;
      if (1 < pIVar11->max_length) {
        fStack_17 = ((float)pIVar11->vector[1] * fVar8 + (float)pIVar11->vector[0] * fVar7) *
                    fVar15 * fVar15 * fVar15 * fVar15;
        goto code_?;
      }
      goto code_?;
    }
    fStack_17 = 0.0;
code_?:
    fVar7 = (_UNK_? - fVar9 * fVar9) - fVar10 * fVar10;
    if (0.0 <= fVar7) {
      if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000
           ) != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar16 == (Int32__Array__Array *)0x0) goto code_?;
      if (pIVar16->max_length <= uVar14) goto code_?;
      pIVar11 = pIVar16->vector[uVar14];
      if (pIVar11 == (Int32__Array *)0x0) goto code_?;
      if (pIVar11->max_length == 0) goto code_?;
      if (1 < pIVar11->max_length) {
        fVar9 = ((float)pIVar11->vector[1] * fVar10 + (float)pIVar11->vector[0] * fVar9) *
                 fVar7 * fVar7 * fVar7 * fVar7;
        goto code_?;
      }
      goto code_?;
    }
    fVar9 = 0.0;
code_?:
    fVar10 = (_UNK_? - fVar2 * fVar2) - fVar3 * fVar3;
    fVar7 = 0.0;
    if (fVar10 < 0.0) {
code_?:
      return ((fVar9 + fStack_17 + fVar7) * _UNK_? + _UNK_?) * _UNK_?;
    }
    if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar16 == (Int32__Array__Array *)0x0) goto code_?;
    if (pIVar16->max_length <= uVar5) goto code_?;
    pIVar11 = pIVar16->vector[uVar5];
    if (pIVar11 == (Int32__Array *)0x0) goto code_?;
    if (pIVar11->max_length != 0) {
      if (1 < pIVar11->max_length) {
        fVar7 = ((float)pIVar11->vector[1] * fVar3 + (float)pIVar11->vector[0] * fVar2) *
                 fVar10 * fVar10 * fVar10 * fVar10;
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar12 = func_?(0,0);
  func_?(uVar12);
code_?:
  uVar12 = func_?(0,0);
  func_?(uVar12);
  pcVar18 = (code *)swi(3);
  fVar19 = (float10)(*pcVar18)();
  return (float)fVar19;
}

