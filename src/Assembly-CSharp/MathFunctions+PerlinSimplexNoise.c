
/* MathFunctions+PerlinSimplexNoise() */

void Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    func_?(&EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field);
    cRam_? = '\x01';
  }
  pIVar1 = (Int32__Array__Array *)func_?(TypeInfo__System__Int32,0xc);
  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  if (pIVar2 != (Int32__Array *)0x0) {
    if ((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 2)) goto code_?;
    pIVar2->vector[1] = 1;
    if (pIVar1 != (Int32__Array__Array *)0x0) {
      if (pIVar1->max_length == 0) goto code_?;
      pIVar1->vector[0] = pIVar2;
      func_?(pIVar1->vector,pIVar2);
      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
      if (pIVar2 != (Int32__Array *)0x0) {
        if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 2)) || (pIVar2->vector[1] = 1, pIVar1->max_length < 2)) goto code_?;
        pIVar1->vector[1] = pIVar2;
        func_?(pIVar1->vector + 1,pIVar2);
        pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
        if (pIVar2 != (Int32__Array *)0x0) {
          if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 2)) || (pIVar2->vector[1] = -1, pIVar1->max_length < 3)) goto code_?;
          pIVar1->vector[2] = pIVar2;
          func_?(pIVar1->vector + 2,pIVar2);
          pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
          if (pIVar2 != (Int32__Array *)0x0) {
            if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 2)) || (pIVar2->vector[1] = -1, pIVar1->max_length < 4)) goto code_?;
            pIVar1->vector[3] = pIVar2;
            func_?(pIVar1->vector + 3,pIVar2);
            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
            if (pIVar2 != (Int32__Array *)0x0) {
              if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = 1, pIVar1->max_length < 5)) goto code_?;
              pIVar1->vector[4] = pIVar2;
              func_?(pIVar1->vector + 4,pIVar2);
              pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
              if (pIVar2 != (Int32__Array *)0x0) {
                if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = 1, pIVar1->max_length < 6)) goto code_?;
                pIVar1->vector[5] = pIVar2;
                func_?(pIVar1->vector + 5,pIVar2);
                pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                if (pIVar2 != (Int32__Array *)0x0) {
                  if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = -1, pIVar1->max_length < 7)) goto code_?;
                  pIVar1->vector[6] = pIVar2;
                  func_?(pIVar1->vector + 6,pIVar2);
                  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                  if (pIVar2 != (Int32__Array *)0x0) {
                    if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = -1, pIVar1->max_length < 8)) goto code_?;
                    pIVar1->vector[7] = pIVar2;
                    func_?(pIVar1->vector + 7,pIVar2);
                    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                    if (pIVar2 != (Int32__Array *)0x0) {
                      if (((pIVar2->max_length < 2) || (pIVar2->vector[1] = 1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = 1, pIVar1->max_length < 9)) goto code_?;
                      pIVar1->vector[8] = pIVar2;
                      func_?(pIVar1->vector + 8,pIVar2);
                      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                      if (pIVar2 != (Int32__Array *)0x0) {
                        if (((pIVar2->max_length < 2) || (pIVar2->vector[1] = -1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = 1, pIVar1->max_length < 10)) goto code_?;
                        pIVar1->vector[9] = pIVar2;
                        func_?(pIVar1->vector + 9,pIVar2);
                        pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                        if (pIVar2 != (Int32__Array *)0x0) {
                          if (((pIVar2->max_length < 2) || (pIVar2->vector[1] = 1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = -1, pIVar1->max_length < 0xb)) goto code_?;
                          pIVar1->vector[10] = pIVar2;
                          func_?(pIVar1->vector + 10,pIVar2);
                          pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                          if (pIVar2 != (Int32__Array *)0x0) {
                            if (((pIVar2->max_length < 2) || (pIVar2->vector[1] = -1, pIVar2->max_length < 3)) || (pIVar2->vector[2] = -1, pIVar1->max_length < 0xc)) goto code_?;
                            pIVar1->vector[0xb] = pIVar2;
                            func_?(pIVar1->vector + 0xb,pIVar2);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3 = pIVar1;
                            func_?(TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields,pIVar1);
                            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x100);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)pIVar2,_EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field,(MethodInfo *)0x0);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p = pIVar2;
                            func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p,pIVar2);
                            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x200);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm = pIVar2;
                            func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm,pIVar2);
                            uVar3 = 0;
                            iVar4 = 0x10;
                            while( true ) {
                              pIVar2 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
                              pIVar5 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p;
                              if (pIVar5 == (Int32__Array *)0x0) break;
                              uVar6 = uVar3 & 0xff;
                              if (pIVar5->max_length <= uVar6) goto code_?;
                              if (pIVar2 == (Int32__Array *)0x0) break;
                              if (pIVar2->max_length <= uVar3) goto code_?;
                              uVar3 = uVar3 + 1;
                              *(int32_t *)((int)pIVar2->vector + iVar4 + -0x10) = pIVar5->vector[uVar6];
                              iVar4 = iVar4 + 4;
                              if (0x80f < iVar4) {
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single dot(Int32[], Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot(Int32__Array *g,float x,float y,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (g == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  if ((g->max_length != 0) && (1 < g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single dot(Int32[], Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_1(Int32__Array *g,float x,float y,float z,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (g == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  if (((g->max_length != 0) && (1 < g->max_length)) && (2 < g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single dot(Int32[], Single, Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_2(Int32__Array *g,float x,float y,float z,float w,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (g == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  if ((((g->max_length != 0) && (1 < g->max_length)) && (2 < g->max_length)) && (3 < g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z + (float)g->vector[3] * w;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_6 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Int32 fastfloor(Single) */

int32_t Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_fastfloor(float x,MethodInfo *method)

{
  iVar1 = (int)x + -1;
  if (0.0 < x) {
    iVar1 = (int)x;
  }
  return iVar1;
}


/* Single noise(Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise(float xin,float yin,float zin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  fVar1 = (xin + yin + zin) * 0.33333334;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  uVar2 = (uint)(fVar1 + xin);
  uVar3 = (uint)(fVar1 + yin);
  if (fVar1 + yin <= 0.0) {
    uVar3 = uVar3 - 1;
  }
  uVar4 = (uint)(fVar1 + zin);
  if (fVar1 + zin <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  if (fVar1 + xin <= 0.0) {
    uVar2 = uVar2 - 1;
  }
  fVar1 = (float)(int)(uVar2 + uVar4 + uVar3) * 0.16666667;
  fVar5 = xin - ((float)(int)uVar2 - fVar1);
  fVar6 = yin - ((float)(int)uVar3 - fVar1);
  fVar1 = zin - ((float)(int)uVar4 - fVar1);
  if (fVar6 <= fVar5) {
    iVar7 = 0;
    if (fVar1 <= fVar6) {
      iVar8 = 1;
code_?:
      iStack_9 = 0;
      iVar10 = 1;
      iVar11 = 0;
    }
    else {
      if (fVar1 <= fVar5) {
        iVar8 = 1;
        iVar11 = 0;
        iVar12 = 1;
        iStack_9 = 0;
        iVar10 = 0;
        iStack_13 = 1;
        goto code_?;
      }
      iVar11 = 1;
      iVar8 = 0;
      iStack_9 = 1;
      iVar10 = 0;
    }
    iVar12 = 1;
    iStack_13 = iVar11;
  }
  else {
    iVar8 = 0;
    if (fVar6 < fVar1) {
      iVar11 = 1;
      iVar7 = 0;
      iVar10 = 1;
      iStack_9 = 1;
      iVar12 = 0;
      iStack_13 = 1;
    }
    else {
      iVar11 = 0;
      iVar10 = 1;
      iStack_9 = 0;
      iVar7 = iVar10;
      if (fVar1 <= fVar5) goto code_?;
      iVar12 = 0;
      iStack_13 = 1;
    }
  }
code_?:
  fVar14 = (fVar5 - (float)iVar8) + 0.16666667;
  fVar15 = (fVar6 - (float)iVar7) + 0.16666667;
  fVar16 = (fVar1 - (float)iVar11) + 0.16666667;
  uVar2 = uVar2 & 0xff;
  uVar3 = uVar3 & 0xff;
  fVar17 = (fVar5 - (float)iVar12) + 0.33333334;
  uVar4 = uVar4 & 0xff;
  fVar18 = (fVar6 - (float)iVar10) + 0.33333334;
  fVar19 = (fVar1 - (float)iStack_13) + 0.33333334;
  fVar20 = (fVar5 - 1.0) + 0.5;
  fVar21 = (fVar6 - 1.0) + 0.5;
  fVar22 = (fVar1 - 1.0) + 0.5;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar23 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar24 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar25 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar25 == (Int32__Array *)0x0) goto code_?;
  if (((pIVar25->max_length <= uVar4) || (uVar26 = pIVar25->vector[uVar4] + uVar3, pIVar24->max_length <= uVar26)) || (uVar26 = pIVar24->vector[uVar26] + uVar2, pIVar23->max_length <= uVar26)) goto code_?;
  uVar26 = pIVar23->vector[uVar26] % 0xc;
  pIVar23 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar24 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((pIVar24->max_length <= iStack_9 + uVar4) || (uVar27 = pIVar24->vector[iStack_9 + uVar4] + uVar3 + iVar7, pIVar24->max_length <= uVar27)) || (uVar27 = pIVar24->vector[uVar27] + uVar2 + iVar8, pIVar23->max_length <= uVar27)) goto code_?;
  uVar27 = pIVar23->vector[uVar27] % 0xc;
  pIVar23 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar24 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((pIVar24->max_length <= iStack_13 + uVar4) || (uVar28 = pIVar24->vector[iStack_13 + uVar4] + uVar3 + iVar10, pIVar24->max_length <= uVar28)) || (uVar28 = pIVar24->vector[uVar28] + uVar2 + iVar12, pIVar23->max_length <= uVar28)) goto code_?;
  uVar28 = pIVar23->vector[uVar28] % 0xc;
  pIVar23 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar24 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((pIVar24->max_length <= uVar4 + 1) || (pIVar24->max_length <= uVar3 + 1 + pIVar24->vector[uVar4 + 1])) || (pIVar23->max_length <= uVar2 + 1 + pIVar24->vector[pIVar24->vector[uVar4 + 1] + uVar3 + 1])) goto code_?;
  fVar29 = ((0.6 - fVar5 * fVar5) - fVar6 * fVar6) - fVar1 * fVar1;
  uVar3 = pIVar23->vector[pIVar24->vector[pIVar24->vector[uVar4 + 1] + uVar3 + 1] + uVar2 + 1] % 0xc;
  if (fVar29 < 0.0) {
    zin = 0.0;
code_?:
    fVar1 = ((0.6 - fVar14 * fVar14) - fVar15 * fVar15) - fVar16 * fVar16;
    if (fVar1 < 0.0) {
      yin = 0.0;
code_?:
      fVar1 = ((0.6 - fVar17 * fVar17) - fVar18 * fVar18) - fVar19 * fVar19;
      if (fVar1 < 0.0) {
        xin = 0.0;
code_?:
        fVar6 = 0.0;
        fVar1 = ((0.6 - fVar20 * fVar20) - fVar21 * fVar21) - fVar22 * fVar22;
        if (fVar1 < 0.0) {
code_?:
          return (yin + zin + xin + fVar6) * 32.0;
        }
        if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
        }
        pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
        if (pIVar30 != (Int32__Array__Array *)0x0) {
          if (pIVar30->max_length <= uVar3) goto code_?;
          pIVar23 = pIVar30->vector[uVar3];
          if (pIVar23 != (Int32__Array *)0x0) {
            if (((pIVar23->max_length != 0) && (1 < pIVar23->max_length)) && (2 < pIVar23->max_length)) {
              fVar6 = ((float)pIVar23->vector[1] * fVar21 + (float)pIVar23->vector[0] * fVar20 + (float)pIVar23->vector[2] * fVar22) * fVar1 * fVar1 * fVar1 * fVar1;
              goto code_?;
            }
            goto code_?;
          }
        }
      }
      else {
        if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
        }
        pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
        if (pIVar30 != (Int32__Array__Array *)0x0) {
          if (pIVar30->max_length <= uVar28) goto code_?;
          pIVar23 = pIVar30->vector[uVar28];
          if (pIVar23 != (Int32__Array *)0x0) {
            if (((pIVar23->max_length == 0) || (pIVar23->max_length < 2)) || (pIVar23->max_length < 3)) goto code_?;
            xin = ((float)pIVar23->vector[1] * fVar18 + (float)pIVar23->vector[0] * fVar17 + (float)pIVar23->vector[2] * fVar19) * fVar1 * fVar1 * fVar1 * fVar1;
            goto code_?;
          }
        }
      }
    }
    else {
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar30 != (Int32__Array__Array *)0x0) {
        if (pIVar30->max_length <= uVar27) goto code_?;
        pIVar23 = pIVar30->vector[uVar27];
        if (pIVar23 != (Int32__Array *)0x0) {
          if (((pIVar23->max_length == 0) || (pIVar23->max_length < 2)) || (pIVar23->max_length < 3)) goto code_?;
          yin = ((float)pIVar23->vector[1] * fVar15 + (float)pIVar23->vector[0] * fVar14 + (float)pIVar23->vector[2] * fVar16) * fVar1 * fVar1 * fVar1 * fVar1;
          goto code_?;
        }
      }
    }
  }
  else {
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar30 != (Int32__Array__Array *)0x0) {
      if (pIVar30->max_length <= uVar26) goto code_?;
      pIVar23 = pIVar30->vector[uVar26];
      if (pIVar23 != (Int32__Array *)0x0) {
        if (((pIVar23->max_length == 0) || (pIVar23->max_length < 2)) || (pIVar23->max_length < 3)) goto code_?;
        zin = ((float)pIVar23->vector[1] * fVar6 + (float)pIVar23->vector[0] * fVar5 + (float)pIVar23->vector[2] * fVar1) * fVar29 * fVar29 * fVar29 * fVar29;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  fVar32 = (float10)(*pcVar31)();
  return (float)fVar32;
}


/* Single noise(Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1(float xin,float yin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar1 = (xin + yin) * 0.36602542;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  fVar2 = fVar1 + xin;
  uVar3 = (uint)fVar2;
  fVar1 = fVar1 + yin;
  uVar4 = (uint)fVar1;
  if (fVar1 <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  if (fVar2 <= 0.0) {
    uVar3 = uVar3 - 1;
  }
  fVar1 = (float)(int)(uVar3 + uVar4) * 0.21132487;
  fVar5 = xin - ((float)(int)uVar3 - fVar1);
  fVar6 = yin - ((float)(int)uVar4 - fVar1);
  uVar3 = uVar3 & 0xff;
  uVar4 = uVar4 & 0xff;
  uVar7 = (uint)(fVar5 <= fVar6);
  fVar1 = (fVar5 - (float)(fVar6 < fVar5)) + 0.21132487;
  fVar2 = (fVar6 - (float)uVar7) + 0.21132487;
  fVar8 = (fVar5 - 1.0) + 0.42264974;
  fVar9 = (fVar6 - 1.0) + 0.42264974;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar10 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar10 == (Int32__Array *)0x0) goto code_?;
  if ((pIVar10->max_length <= uVar4) || (uVar11 = pIVar10->vector[uVar4] + uVar3, pIVar10->max_length <= uVar11)) goto code_?;
  uVar11 = pIVar10->vector[uVar11] % 0xc;
  pIVar10 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((pIVar10->max_length <= uVar7 + uVar4) || (uVar7 = pIVar10->vector[uVar7 + uVar4] + (uint)(fVar6 < fVar5) + uVar3, pIVar10->max_length <= uVar7)) goto code_?;
  uVar7 = pIVar10->vector[uVar7] % 0xc;
  pIVar10 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  pIVar12 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((pIVar12->max_length <= uVar4 + 1) || (iVar13 = pIVar12->vector[uVar4 + 1], pIVar10->max_length <= uVar3 + 1 + iVar13)) goto code_?;
  fVar14 = (0.5 - fVar5 * fVar5) - fVar6 * fVar6;
  uVar3 = pIVar10->vector[iVar13 + uVar3 + 1] % 0xc;
  if (fVar14 < 0.0) {
    fStack_15 = 0.0;
code_?:
    fVar5 = (0.5 - fVar1 * fVar1) - fVar2 * fVar2;
    if (fVar5 < 0.0) {
      fVar1 = 0.0;
code_?:
      fVar2 = (0.5 - fVar8 * fVar8) - fVar9 * fVar9;
      fVar5 = 0.0;
      if (fVar2 < 0.0) {
code_?:
        return ((fVar1 + fStack_15 + fVar5) * 70.0 + 1.0) * 0.5;
      }
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar16 != (Int32__Array__Array *)0x0) {
        if (pIVar16->max_length <= uVar3) goto code_?;
        pIVar10 = pIVar16->vector[uVar3];
        if (pIVar10 != (Int32__Array *)0x0) {
          if ((pIVar10->max_length != 0) && (1 < pIVar10->max_length)) {
            fVar5 = ((float)pIVar10->vector[1] * fVar9 + (float)pIVar10->vector[0] * fVar8) * fVar2 * fVar2 * fVar2 * fVar2;
            goto code_?;
          }
          goto code_?;
        }
      }
    }
    else {
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar16 != (Int32__Array__Array *)0x0) {
        if (pIVar16->max_length <= uVar7) goto code_?;
        pIVar10 = pIVar16->vector[uVar7];
        if (pIVar10 != (Int32__Array *)0x0) {
          if ((pIVar10->max_length == 0) || (pIVar10->max_length < 2)) goto code_?;
          fVar1 = ((float)pIVar10->vector[1] * fVar2 + (float)pIVar10->vector[0] * fVar1) * fVar5 * fVar5 * fVar5 * fVar5;
          goto code_?;
        }
      }
    }
  }
  else {
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar16 != (Int32__Array__Array *)0x0) {
      if (pIVar16->max_length <= uVar11) goto code_?;
      pIVar10 = pIVar16->vector[uVar11];
      if (pIVar10 != (Int32__Array *)0x0) {
        if ((pIVar10->max_length == 0) || (pIVar10->max_length < 2)) goto code_?;
        fStack_15 = ((float)pIVar10->vector[1] * fVar6 + (float)pIVar10->vector[0] * fVar5) * fVar14 * fVar14 * fVar14 * fVar14;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  fVar18 = (float10)(*pcVar17)();
  return (float)fVar18;
}

