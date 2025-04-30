
/* MathFunctions+PerlinSimplexNoise() */

void Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise__cctor
               (MethodInfo *method)

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
    if ((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 2))
    goto code_?;
    pIVar2->vector[1] = 1;
    if (pIVar1 != (Int32__Array__Array *)0x0) {
      if (pIVar1->max_length == 0) goto code_?;
      pIVar1->vector[0] = pIVar2;
      func_?(pIVar1->vector,pIVar2);
      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
      if (pIVar2 != (Int32__Array *)0x0) {
        if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 2)) ||
           (pIVar2->vector[1] = 1, pIVar1->max_length < 2)) goto code_?;
        pIVar1->vector[1] = pIVar2;
        func_?(pIVar1->vector + 1,pIVar2);
        pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
        if (pIVar2 != (Int32__Array *)0x0) {
          if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 2)) ||
             (pIVar2->vector[1] = -1, pIVar1->max_length < 3)) goto code_?;
          pIVar1->vector[2] = pIVar2;
          func_?(pIVar1->vector + 2,pIVar2);
          pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
          if (pIVar2 != (Int32__Array *)0x0) {
            if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 2)) ||
               (pIVar2->vector[1] = -1, pIVar1->max_length < 4)) goto code_?;
            pIVar1->vector[3] = pIVar2;
            func_?(pIVar1->vector + 3,pIVar2);
            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
            if (pIVar2 != (Int32__Array *)0x0) {
              if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 3)) ||
                 (pIVar2->vector[2] = 1, pIVar1->max_length < 5)) goto code_?;
              pIVar1->vector[4] = pIVar2;
              func_?(pIVar1->vector + 4,pIVar2);
              pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
              if (pIVar2 != (Int32__Array *)0x0) {
                if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = -1, pIVar2->max_length < 3))
                   || (pIVar2->vector[2] = 1, pIVar1->max_length < 6)) goto code_?;
                pIVar1->vector[5] = pIVar2;
                func_?(pIVar1->vector + 5,pIVar2);
                pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                if (pIVar2 != (Int32__Array *)0x0) {
                  if (((pIVar2->max_length == 0) || (pIVar2->vector[0] = 1, pIVar2->max_length < 3))
                     || (pIVar2->vector[2] = -1, pIVar1->max_length < 7)) goto code_?;
                  pIVar1->vector[6] = pIVar2;
                  func_?(pIVar1->vector + 6,pIVar2);
                  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                  if (pIVar2 != (Int32__Array *)0x0) {
                    if (((pIVar2->max_length == 0) ||
                        (pIVar2->vector[0] = -1, pIVar2->max_length < 3)) ||
                       (pIVar2->vector[2] = -1, pIVar1->max_length < 8)) goto code_?;
                    pIVar1->vector[7] = pIVar2;
                    func_?(pIVar1->vector + 7,pIVar2);
                    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                    if (pIVar2 != (Int32__Array *)0x0) {
                      if (((pIVar2->max_length < 2) ||
                          (pIVar2->vector[1] = 1, pIVar2->max_length < 3)) ||
                         (pIVar2->vector[2] = 1, pIVar1->max_length < 9)) goto code_?;
                      pIVar1->vector[8] = pIVar2;
                      func_?(pIVar1->vector + 8,pIVar2);
                      pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                      if (pIVar2 != (Int32__Array *)0x0) {
                        if (((pIVar2->max_length < 2) ||
                            (pIVar2->vector[1] = -1, pIVar2->max_length < 3)) ||
                           (pIVar2->vector[2] = 1, pIVar1->max_length < 10)) goto code_?;
                        pIVar1->vector[9] = pIVar2;
                        func_?(pIVar1->vector + 9,pIVar2);
                        pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                        if (pIVar2 != (Int32__Array *)0x0) {
                          if (((pIVar2->max_length < 2) ||
                              (pIVar2->vector[1] = 1, pIVar2->max_length < 3)) ||
                             (pIVar2->vector[2] = -1, pIVar1->max_length < 0xb))
                          goto code_?;
                          pIVar1->vector[10] = pIVar2;
                          func_?(pIVar1->vector + 10,pIVar2);
                          pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
                          if (pIVar2 != (Int32__Array *)0x0) {
                            if (((pIVar2->max_length < 2) ||
                                (pIVar2->vector[1] = -1, pIVar2->max_length < 3)) ||
                               (pIVar2->vector[2] = -1, pIVar1->max_length < 0xc))
                            goto code_?;
                            pIVar1->vector[0xb] = pIVar2;
                            func_?(pIVar1->vector + 0xb,pIVar2);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3 =
                                 pIVar1;
                            func_?(TypeInfo__MathFunctions__PerlinSimplexNoise->
                                            static_fields,pIVar1);
                            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x100);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                            RuntimeHelpers_InitializeArray_1
                                      ((Array *)pIVar2,
                                       _EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field
                                       ,(MethodInfo *)0x0);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p = pIVar2;
                            func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise->
                                             static_fields->p,pIVar2);
                            pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x200);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm =
                                 pIVar2;
                            func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise->
                                             static_fields->perm,pIVar2);
                            uVar3 = 0;
                            iVar4 = 0x10;
                            while( true ) {
                              pIVar2 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->
                                       perm;
                              pIVar5 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p
                              ;
                              if (pIVar5 == (Int32__Array *)0x0) break;
                              uVar6 = uVar3 & 0xff;
                              if (pIVar5->max_length <= uVar6) goto code_?;
                              if (pIVar2 == (Int32__Array *)0x0) break;
                              if (pIVar2->max_length <= uVar3) goto code_?;
                              uVar3 = uVar3 + 1;
                              *(int32_t *)((int)pIVar2->vector + iVar4 + -0x10) =
                                   pIVar5->vector[uVar6];
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

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot
                (Int32__Array *g,float x,float y,MethodInfo *method)

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

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_1
                (Int32__Array *g,float x,float y,float z,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (g == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  uVar6 = g->max_length;
  if (((uVar6 != 0) && (1 < uVar6)) && (2 < uVar6)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single dot(Int32[], Single, Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_2
                (Int32__Array *g,float x,float y,float z,float w,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (g == (Int32__Array *)0x0) {
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    fVar5 = (float10)(*pcVar4)();
    return (float)fVar5;
  }
  uVar6 = g->max_length;
  if ((((uVar6 != 0) && (1 < uVar6)) && (2 < uVar6)) && (3 < uVar6)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z +
           (float)g->vector[3] * w;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Int32 fastfloor(Single) */

int32_t Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
        MathFunctions_PerlinSimplexNoise_fastfloor(float x,MethodInfo *method)

{
  iVar1 = (int32_t)x;
  if (x <= _UNK_?) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}


/* Single noise(Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise
                (float xin,float yin,float zin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  fVar1 = (xin + yin + zin) * _UNK_?;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  uVar2 = (uint)(fVar1 + xin);
  if (fVar1 + xin <= 0.0) {
    uVar2 = uVar2 - 1;
  }
  uVar3 = (uint)(fVar1 + yin);
  if (fVar1 + yin <= 0.0) {
    uVar3 = uVar3 - 1;
  }
  uVar4 = (uint)(fVar1 + zin);
  if (fVar1 + zin <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  fVar1 = (float)(int)(uVar2 + uVar4 + uVar3) * _UNK_?;
  fVar5 = xin - ((float)(int)uVar2 - fVar1);
  fVar6 = yin - ((float)(int)uVar3 - fVar1);
  fVar1 = zin - ((float)(int)uVar4 - fVar1);
  if (fVar6 <= fVar5) {
    iVar7 = 0;
    if (fVar1 <= fVar6) {
      iStack_8 = 1;
      iStack_9 = 0;
      iStack_10 = 1;
    }
    else {
      if (fVar1 <= fVar5) {
        iStack_8 = 1;
        iStack_9 = 0;
        iVar11 = 1;
        iStack_10 = 0;
        iStack_12 = 1;
        goto code_?;
      }
      iStack_9 = 1;
      iStack_8 = 0;
      iStack_10 = 0;
    }
    iVar11 = 1;
code_?:
    iVar7 = 0;
    iStack_12 = iStack_9;
  }
  else {
    iStack_8 = 0;
    if (fVar6 < fVar1) {
      iStack_9 = 1;
      iVar11 = 0;
      iStack_10 = 1;
      goto code_?;
    }
    iVar7 = 1;
    iStack_9 = 0;
    iStack_10 = 1;
    if (fVar1 <= fVar5) {
      iVar11 = 1;
      iStack_12 = iStack_9;
    }
    else {
      iVar11 = 0;
      iStack_12 = 1;
    }
  }
code_?:
  fVar13 = (fVar5 - (float)iStack_8) + _UNK_?;
  uVar2 = uVar2 & 0xff;
  fVar14 = (fVar6 - (float)iVar7) + _UNK_?;
  uVar3 = uVar3 & 0xff;
  fVar15 = (fVar1 - (float)iStack_9) + _UNK_?;
  uVar4 = uVar4 & 0xff;
  fVar16 = (fVar5 - (float)iVar11) + _UNK_?;
  fVar17 = (fVar6 - (float)iStack_10) + _UNK_?;
  fVar18 = (fVar1 - (float)iStack_12) + _UNK_?;
  fVar19 = (fVar5 - _UNK_?) + _UNK_?;
  fVar20 = (fVar6 - _UNK_?) + _UNK_?;
  fVar21 = (fVar1 - _UNK_?) + _UNK_?;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar22 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar22 == (Int32__Array *)0x0) goto code_?;
  if (((pIVar22->max_length <= uVar4) ||
      (uVar23 = pIVar22->vector[uVar4] + uVar3, pIVar22->max_length <= uVar23)) ||
     (uVar23 = pIVar22->vector[uVar23] + uVar2, pIVar22->max_length <= uVar23)) goto code_?;
  uVar23 = pIVar22->vector[uVar23] % 0xc;
  if (((pIVar22->max_length <= iStack_9 + uVar4) ||
      (uVar24 = pIVar22->vector[iStack_9 + uVar4] + uVar3 + iVar7, pIVar22->max_length <= uVar24)) ||
     (uVar24 = pIVar22->vector[uVar24] + uVar2 + iStack_8, pIVar22->max_length <= uVar24))
  goto code_?;
  uVar24 = pIVar22->vector[uVar24] % 0xc;
  if (((pIVar22->max_length <= iStack_12 + uVar4) ||
      (uVar25 = pIVar22->vector[iStack_12 + uVar4] + uVar3 + iStack_10, pIVar22->max_length <= uVar25))
     || (uVar25 = pIVar22->vector[uVar25] + uVar2 + iVar11, pIVar22->max_length <= uVar25))
  goto code_?;
  uVar25 = pIVar22->vector[uVar25] % 0xc;
  if (((pIVar22->max_length <= uVar4 + 1) ||
      (pIVar22->max_length <= uVar3 + 1 + pIVar22->vector[uVar4 + 1])) ||
     (pIVar22->max_length <= pIVar22->vector[pIVar22->vector[uVar4 + 1] + uVar3 + 1] + uVar2 + 1))
  goto code_?;
  fVar26 = ((_UNK_? - fVar5 * fVar5) - fVar6 * fVar6) - fVar1 * fVar1;
  uVar2 = pIVar22->vector[uVar2 + pIVar22->vector[pIVar22->vector[uVar4 + 1] + uVar3 + 1] + 1] % 0xc;
  if (fVar26 < 0.0) {
    xin = 0.0;
code_?:
    fVar1 = ((_UNK_? - fVar13 * fVar13) - fVar14 * fVar14) - fVar15 * fVar15;
    if (fVar1 < 0.0) {
      zin = 0.0;
code_?:
      fVar1 = ((_UNK_? - fVar16 * fVar16) - fVar17 * fVar17) - fVar18 * fVar18;
      if (fVar1 < 0.0) {
        yin = 0.0;
code_?:
        fVar5 = 0.0;
        fVar1 = ((_UNK_? - fVar19 * fVar19) - fVar20 * fVar20) - fVar21 * fVar21;
        if (fVar1 < 0.0) {
code_?:
          return (zin + xin + yin + fVar5) * _UNK_?;
        }
        if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
        }
        pIVar27 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
        if (pIVar27 != (Int32__Array__Array *)0x0) {
          if (pIVar27->max_length <= uVar2) goto code_?;
          pIVar22 = pIVar27->vector[uVar2];
          if (pIVar22 != (Int32__Array *)0x0) {
            uVar2 = pIVar22->max_length;
            if (((uVar2 != 0) && (1 < uVar2)) && (2 < uVar2)) {
              fVar5 = ((float)pIVar22->vector[1] * fVar20 + (float)pIVar22->vector[0] * fVar19 +
                       (float)pIVar22->vector[2] * fVar21) * fVar1 * fVar1 * fVar1 * fVar1;
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
        pIVar27 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
        if (pIVar27 != (Int32__Array__Array *)0x0) {
          if (pIVar27->max_length <= uVar25) goto code_?;
          pIVar22 = pIVar27->vector[uVar25];
          if (pIVar22 != (Int32__Array *)0x0) {
            uVar3 = pIVar22->max_length;
            if (((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) goto code_?;
            yin = ((float)pIVar22->vector[1] * fVar17 + (float)pIVar22->vector[0] * fVar16 +
                  (float)pIVar22->vector[2] * fVar18) * fVar1 * fVar1 * fVar1 * fVar1;
            goto code_?;
          }
        }
      }
    }
    else {
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar27 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar27 != (Int32__Array__Array *)0x0) {
        if (pIVar27->max_length <= uVar24) goto code_?;
        pIVar22 = pIVar27->vector[uVar24];
        if (pIVar22 != (Int32__Array *)0x0) {
          uVar3 = pIVar22->max_length;
          if (((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) goto code_?;
          zin = ((float)pIVar22->vector[1] * fVar14 + (float)pIVar22->vector[0] * fVar13 +
                (float)pIVar22->vector[2] * fVar15) * fVar1 * fVar1 * fVar1 * fVar1;
          goto code_?;
        }
      }
    }
  }
  else {
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar27 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar27 != (Int32__Array__Array *)0x0) {
      if (pIVar27->max_length <= uVar23) goto code_?;
      pIVar22 = pIVar27->vector[uVar23];
      if (pIVar22 != (Int32__Array *)0x0) {
        uVar3 = pIVar22->max_length;
        if (((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) goto code_?;
        xin = ((float)pIVar22->vector[1] * fVar6 + (float)pIVar22->vector[0] * fVar5 +
              (float)pIVar22->vector[2] * fVar1) * fVar26 * fVar26 * fVar26 * fVar26;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  fVar29 = (float10)(*pcVar28)();
  return (float)fVar29;
}


/* Single noise(Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
      MathFunctions_PerlinSimplexNoise_noise_1(float xin,float yin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (_UNK_? < 0.0) {
    dVar1 = _UNK_?;
    func_?();
  }
  else {
    dVar1 = SQRT(_UNK_?);
  }
  fVar2 = (float)((dVar1 - _UNK_?) * _UNK_?) * (xin + yin);
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  fVar3 = fVar2 + xin;
  uVar4 = (uint)fVar3;
  fVar2 = fVar2 + yin;
  if (fVar3 <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  uVar5 = (uint)fVar2;
  if (fVar2 <= 0.0) {
    uVar5 = uVar5 - 1;
  }
  fVar3 = (float)((_UNK_? - dVar1) / _UNK_?);
  fVar2 = (float)(int)(uVar4 + uVar5) * fVar3;
  fVar6 = xin - ((float)(int)uVar4 - fVar2);
  fVar7 = yin - ((float)(int)uVar5 - fVar2);
  uVar4 = uVar4 & 0xff;
  uVar5 = uVar5 & 0xff;
  fVar8 = (fVar6 - (float)(fVar7 < fVar6)) + fVar3;
  fVar9 = (fVar7 - (float)(fVar6 <= fVar7)) + fVar3;
  fVar2 = (fVar6 - _UNK_?) + fVar3 + fVar3;
  fVar3 = (fVar7 - _UNK_?) + fVar3 + fVar3;
  if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar10 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar10 == (Int32__Array *)0x0) goto code_?;
  if ((pIVar10->max_length <= uVar5) ||
     (uVar11 = pIVar10->vector[uVar5] + uVar4, pIVar10->max_length <= uVar11)) goto code_?;
  uVar12 = pIVar10->vector[uVar11] % 0xc;
  uVar11 = (fVar6 <= fVar7) + uVar5;
  if ((pIVar10->max_length <= uVar11) ||
     (uVar11 = pIVar10->vector[uVar11] + (uint)(fVar7 < fVar6) + uVar4, pIVar10->max_length <= uVar11))
  goto code_?;
  uVar11 = pIVar10->vector[uVar11] % 0xc;
  if ((pIVar10->max_length <= uVar5 + 1) ||
     (pIVar10->max_length <= pIVar10->vector[uVar5 + 1] + uVar4 + 1)) goto code_?;
  fVar13 = (_UNK_? - fVar6 * fVar6) - fVar7 * fVar7;
  uVar4 = pIVar10->vector[uVar4 + pIVar10->vector[uVar5 + 1] + 1] % 0xc;
  if (fVar13 < 0.0) {
    fStack_14 = 0.0;
code_?:
    fVar6 = (_UNK_? - fVar8 * fVar8) - fVar9 * fVar9;
    if (fVar6 < 0.0) {
      fVar8 = 0.0;
code_?:
      fVar9 = (_UNK_? - fVar2 * fVar2) - fVar3 * fVar3;
      fVar6 = 0.0;
      if (fVar9 < 0.0) {
code_?:
        return ((fVar8 + fStack_14 + fVar6) * _UNK_? + _UNK_?) * _UNK_?;
      }
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
      }
      pIVar15 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar15 != (Int32__Array__Array *)0x0) {
        if (pIVar15->max_length <= uVar4) goto code_?;
        pIVar10 = pIVar15->vector[uVar4];
        if (pIVar10 != (Int32__Array *)0x0) {
          if ((pIVar10->max_length != 0) && (1 < pIVar10->max_length)) {
            fVar6 = ((float)pIVar10->vector[1] * fVar3 + (float)pIVar10->vector[0] * fVar2) *
                     fVar9 * fVar9 * fVar9 * fVar9;
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
      pIVar15 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
      if (pIVar15 != (Int32__Array__Array *)0x0) {
        if (pIVar15->max_length <= uVar11) goto code_?;
        pIVar10 = pIVar15->vector[uVar11];
        if (pIVar10 != (Int32__Array *)0x0) {
          if ((pIVar10->max_length == 0) || (pIVar10->max_length < 2)) goto code_?;
          fVar8 = ((float)pIVar10->vector[1] * fVar9 + (float)pIVar10->vector[0] * fVar8) *
                   fVar6 * fVar6 * fVar6 * fVar6;
          goto code_?;
        }
      }
    }
  }
  else {
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar15 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar15 != (Int32__Array__Array *)0x0) {
      if (pIVar15->max_length <= uVar12) goto code_?;
      pIVar10 = pIVar15->vector[uVar12];
      if (pIVar10 != (Int32__Array *)0x0) {
        if ((pIVar10->max_length == 0) || (pIVar10->max_length < 2)) goto code_?;
        fStack_14 = ((float)pIVar10->vector[1] * fVar7 + (float)pIVar10->vector[0] * fVar6) *
                    fVar13 * fVar13 * fVar13 * fVar13;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  fVar17 = (float10)(*pcVar16)();
  return (float)fVar17;
}

