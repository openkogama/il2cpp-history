
/* MathFunctions+PerlinSimplexNoise() */

void Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    LOCK();
    UNLOCK();
    FUN_?(&EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Int32__Array__Array *)FUN_?(TypeInfo__System__Int32,0xc);
  lVar2 = FUN_?(TypeInfo__System__Int32,3);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 2)) goto code_?;
    *(undefined4 *)(lVar2 + 0x24) = 1;
    if (pIVar1 != (Int32__Array__Array *)0x0) {
      FUN_?(pIVar1,0,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Int32,3);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 2)) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(lVar2 + 0x24) = 1;
        FUN_?(pIVar1,1,lVar2);
        lVar2 = FUN_?(TypeInfo__System__Int32,3);
        if (lVar2 != 0) {
          if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 2)) goto code_?;
          *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
          FUN_?(pIVar1,2,lVar2);
          lVar2 = FUN_?(TypeInfo__System__Int32,3);
          if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 2)) goto code_?;
            *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
            FUN_?(pIVar1,3,lVar2);
            lVar2 = FUN_?(TypeInfo__System__Int32,3);
            if (lVar2 != 0) {
              if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
              *(undefined4 *)(lVar2 + 0x28) = 1;
              FUN_?(pIVar1,4,lVar2);
              lVar2 = FUN_?(TypeInfo__System__Int32,3);
              if (lVar2 != 0) {
                if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                *(undefined4 *)(lVar2 + 0x28) = 1;
                FUN_?(pIVar1,5,lVar2);
                lVar2 = FUN_?(TypeInfo__System__Int32,3);
                if (lVar2 != 0) {
                  if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                  *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                  FUN_?(pIVar1,6,lVar2);
                  lVar2 = FUN_?(TypeInfo__System__Int32,3);
                  if (lVar2 != 0) {
                    if ((*(int *)(lVar2 + 0x18) == 0) || (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                    *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                    FUN_?(pIVar1,7,lVar2);
                    lVar2 = FUN_?(TypeInfo__System__Int32,3);
                    if (lVar2 != 0) {
                      if ((*(uint *)(lVar2 + 0x18) < 2) || (*(undefined4 *)(lVar2 + 0x24) = 1, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                      *(undefined4 *)(lVar2 + 0x28) = 1;
                      FUN_?(pIVar1,8,lVar2);
                      lVar2 = FUN_?(TypeInfo__System__Int32,3);
                      if (lVar2 != 0) {
                        if ((*(uint *)(lVar2 + 0x18) < 2) || (*(undefined4 *)(lVar2 + 0x24) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                        *(undefined4 *)(lVar2 + 0x28) = 1;
                        FUN_?(pIVar1,9,lVar2);
                        lVar2 = FUN_?(TypeInfo__System__Int32,3);
                        if (lVar2 != 0) {
                          if ((*(uint *)(lVar2 + 0x18) < 2) || (*(undefined4 *)(lVar2 + 0x24) = 1, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                          *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                          FUN_?(pIVar1,10,lVar2);
                          lVar2 = FUN_?(TypeInfo__System__Int32,3);
                          if (lVar2 != 0) {
                            if ((*(uint *)(lVar2 + 0x18) < 2) || (*(undefined4 *)(lVar2 + 0x24) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                            *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                            FUN_?(pIVar1,0xb);
                            bVar4 = iRam_? != 0;
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3 = pIVar1;
                            if (bVar4) {
                              uVar5 = (uint)((ulonglong)TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields >> 0xc);
                              lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                LOCK();
                                bVar4 = uVar6 == *puVar7;
                                if (bVar4) {
                                  *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar4);
                            }
                            pIVar8 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x100);
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)pIVar8,_EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field,(MethodInfo *)0x0);
                            bVar4 = iRam_? != 0;
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p = pIVar8;
                            if (bVar4) {
                              uVar5 = (uint)((ulonglong)&TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p >> 0xc);
                              lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                LOCK();
                                bVar4 = uVar6 == *puVar7;
                                if (bVar4) {
                                  *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar4);
                            }
                            pIVar8 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x200);
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm = pIVar8;
                            if (iRam_? != 0) {
                              uVar5 = (uint)((ulonglong)&TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm >> 0xc);
                              lVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
                                puVar7 = (ulonglong *)(lVar2 + 0xADDR);
                                LOCK();
                                bVar4 = uVar6 == *puVar7;
                                if (bVar4) {
                                  *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar4);
                            }
                            uVar5 = 0;
                            lVar2 = 0x20;
                            while( true ) {
                              uVar6 = (ulonglong)uVar5;
                              pIVar8 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
                              pIVar9 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p;
                              if (pIVar9 == (Int32__Array *)0x0) break;
                              if ((uint)pIVar9->max_length <= (uint)(uVar6 & 0xff)) goto code_?;
                              if (pIVar8 == (Int32__Array *)0x0) break;
                              if ((uint)pIVar8->max_length <= uVar5) goto code_?;
                              uVar5 = uVar5 + 1;
                              *(int32_t *)((longlong)pIVar8->vector + lVar2 + -0x20) = pIVar9->vector[uVar6 & 0xff];
                              lVar2 = lVar2 + 4;
                              if (0x1ff < (int)uVar5) {
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single dot(Int32[], Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot(Int32__Array *g,float x,float y,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (((int)g->max_length != 0) && (1 < (uint)g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Single dot(Int32[], Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_1(Int32__Array *g,float x,float y,float z,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if ((((int)g->max_length != 0) && (1 < (uint)g->max_length)) && (2 < (uint)g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Single dot(Int32[], Single, Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_2(Int32__Array *g,float x,float y,float z,float w,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (((((int)g->max_length != 0) && (1 < (uint)g->max_length)) && (2 < (uint)g->max_length)) && (3 < (uint)g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z + (float)g->vector[3] * w;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
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
    FUN_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (xin + yin + zin) * 0.33333334;
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  uVar2 = (uint)(fVar1 + xin);
  fVar3 = 0.0;
  if (fVar1 + xin <= 0.0) {
    uVar2 = uVar2 - 1;
  }
  uVar4 = (uint)(fVar1 + yin);
  if (fVar1 + yin <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  uVar5 = (uint)(fVar1 + zin);
  if (fVar1 + zin <= 0.0) {
    uVar5 = uVar5 - 1;
  }
  fVar1 = (float)(int)(uVar5 + uVar4 + uVar2) * 0.16666667;
  fVar6 = xin - ((float)(int)uVar2 - fVar1);
  fVar7 = yin - ((float)(int)uVar4 - fVar1);
  fVar1 = zin - ((float)(int)uVar5 - fVar1);
  iVar8 = 0;
  iVar9 = 0;
  if (fVar7 <= fVar6) {
    iVar10 = 0;
    if (fVar1 <= fVar7) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
      if (fVar6 < fVar1) {
        iVar12 = 1;
        iVar13 = 0;
        iVar9 = 1;
        iVar14 = 1;
        goto code_?;
      }
      iVar9 = 1;
      iVar11 = 0;
    }
    iVar12 = 0;
    iVar13 = 1;
    iVar14 = 1;
  }
  else {
    iVar13 = 0;
    if (fVar7 < fVar1) {
      iVar12 = 1;
      iVar14 = 0;
      iVar9 = 1;
      iVar11 = 1;
      iVar10 = iVar8;
    }
    else {
      iVar12 = 0;
      iVar10 = 1;
      if (fVar6 < fVar1) {
        iVar14 = 0;
        iVar9 = 1;
        iVar11 = 1;
      }
      else {
        iVar14 = 1;
        iVar11 = 1;
        iVar13 = iVar8;
        iVar9 = iVar8;
        iVar12 = 0;
      }
    }
  }
code_?:
  uVar15 = (ulonglong)(byte)uVar5;
  fVar16 = (fVar6 - (float)iVar13) + 0.16666667;
  fVar17 = (fVar7 - (float)iVar10) + 0.16666667;
  fVar18 = (fVar1 - (float)iVar12) + 0.16666667;
  fVar19 = (fVar6 - (float)iVar14) + 0.33333334;
  fVar20 = (fVar7 - (float)iVar11) + 0.33333334;
  fVar21 = (fVar1 - (float)iVar9) + 0.33333334;
  fVar22 = (fVar6 - 1.0) + 0.5;
  fVar23 = (fVar7 - 1.0) + 0.5;
  fVar24 = (fVar1 - 1.0) + 0.5;
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    uVar15 = (ulonglong)(uVar5 & 0xff);
  }
  pIVar25 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar25 == (Int32__Array *)0x0) goto code_?;
  uVar5 = (uint)uVar15;
  if ((uint)pIVar25->max_length <= uVar5) goto code_?;
  uVar26 = pIVar25->vector[uVar15] + (uVar4 & 0xff);
  if ((uint)pIVar25->max_length <= uVar26) goto code_?;
  uVar26 = pIVar25->vector[(int)uVar26] + (uVar2 & 0xff);
  if ((uint)pIVar25->max_length <= uVar26) goto code_?;
  uVar26 = pIVar25->vector[(int)uVar26] % 0xc;
  pIVar25 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((uint)pIVar25->max_length <= uVar5 + iVar12) goto code_?;
  uVar27 = pIVar25->vector[uVar5 + iVar12] + (uVar4 & 0xff) + iVar10;
  if (((uint)pIVar25->max_length <= uVar27) || (uVar27 = pIVar25->vector[(int)uVar27] + (uVar2 & 0xff) + iVar13, (uint)pIVar25->max_length <= uVar27)) goto code_?;
  uVar27 = pIVar25->vector[(int)uVar27] % 0xc;
  pIVar25 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((uint)pIVar25->max_length <= uVar5 + iVar9) goto code_?;
  uVar28 = pIVar25->vector[uVar5 + iVar9] + (uVar4 & 0xff) + iVar11;
  if ((uint)pIVar25->max_length <= uVar28) goto code_?;
  uVar28 = pIVar25->vector[(int)uVar28] + (uVar2 & 0xff) + iVar14;
  if ((uint)pIVar25->max_length <= uVar28) goto code_?;
  uVar28 = pIVar25->vector[(int)uVar28] % 0xc;
  pIVar25 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((uint)pIVar25->max_length <= uVar5 + 1) || (iVar9 = pIVar25->vector[uVar15 + 1] + (uVar4 & 0xff), (uint)pIVar25->max_length <= iVar9 + 1U)) goto code_?;
  iVar9 = pIVar25->vector[(longlong)iVar9 + 1] + (uVar2 & 0xff);
  if ((uint)pIVar25->max_length <= iVar9 + 1U) goto code_?;
  uVar2 = pIVar25->vector[(longlong)iVar9 + 1] % 0xc;
  fVar29 = ((0.6 - fVar6 * fVar6) - fVar7 * fVar7) - fVar1 * fVar1;
  if (fVar29 < 0.0) {
    fVar1 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar30 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar30->max_length <= uVar26) goto code_?;
    pIVar25 = pIVar30->vector[(int)uVar26];
    if (pIVar25 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar25->max_length == 0) || ((uint)pIVar25->max_length < 2)) || ((uint)pIVar25->max_length < 3)) goto code_?;
    fVar1 = ((float)pIVar25->vector[1] * fVar7 + (float)pIVar25->vector[0] * fVar6 + (float)pIVar25->vector[2] * fVar1) * fVar29 * fVar29 * fVar29 * fVar29;
  }
  fVar6 = ((0.6 - fVar16 * fVar16) - fVar17 * fVar17) - fVar18 * fVar18;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar30 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar30->max_length <= uVar27) goto code_?;
    pIVar25 = pIVar30->vector[(int)uVar27];
    if (pIVar25 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar25->max_length == 0) || ((uint)pIVar25->max_length < 2)) || ((uint)pIVar25->max_length < 3)) goto code_?;
    fVar6 = ((float)pIVar25->vector[1] * fVar17 + (float)pIVar25->vector[0] * fVar16 + (float)pIVar25->vector[2] * fVar18) * fVar6 * fVar6 * fVar6 * fVar6;
  }
  fVar7 = ((0.6 - fVar19 * fVar19) - fVar20 * fVar20) - fVar21 * fVar21;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar30 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar30->max_length <= uVar28) goto code_?;
    pIVar25 = pIVar30->vector[(int)uVar28];
    if (pIVar25 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar25->max_length == 0) || ((uint)pIVar25->max_length < 2)) || ((uint)pIVar25->max_length < 3)) goto code_?;
    fVar7 = ((float)pIVar25->vector[1] * fVar20 + (float)pIVar25->vector[0] * fVar19 + (float)pIVar25->vector[2] * fVar21) * fVar7 * fVar7 * fVar7 * fVar7;
  }
  fVar19 = ((0.6 - fVar22 * fVar22) - fVar23 * fVar23) - fVar24 * fVar24;
  if (fVar19 < 0.0) {
code_?:
    return (fVar6 + fVar1 + fVar7 + fVar3) * 32.0;
  }
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar30 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
  if (pIVar30 != (Int32__Array__Array *)0x0) {
    if (uVar2 < (uint)pIVar30->max_length) {
      pIVar25 = pIVar30->vector[(int)uVar2];
      if (pIVar25 == (Int32__Array *)0x0) goto code_?;
      if ((((int)pIVar25->max_length != 0) && (1 < (uint)pIVar25->max_length)) && (2 < (uint)pIVar25->max_length)) {
        fVar3 = ((float)pIVar25->vector[1] * fVar23 + (float)pIVar25->vector[0] * fVar22 + (float)pIVar25->vector[2] * fVar24) * fVar19 * fVar19 * fVar19 * fVar19;
        goto code_?;
      }
    }
code_?:
    FUN_?();
    pcVar31 = (code *)swi(3);
    fVar1 = (float)(*pcVar31)();
    return fVar1;
  }
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  fVar1 = (float)(*pcVar31)();
  return fVar1;
}


/* Single noise(Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1(float xin,float yin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  auVar1 = sqrtpd(ZEXT816(0),ZEXT816(0x4008000000000000));
  fVar2 = (float)((auVar1._0_8_ - 1.0) * 0.5) * (xin + yin);
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  fVar3 = fVar2 + xin;
  uVar4 = (uint)fVar3;
  fVar5 = 0.0;
  fVar2 = fVar2 + yin;
  uVar6 = (uint)fVar2;
  if (fVar3 <= 0.0) {
    uVar4 = uVar4 - 1;
  }
  if (fVar2 <= 0.0) {
    uVar6 = uVar6 - 1;
  }
  auVar1 = sqrtpd(ZEXT816(0),ZEXT816(0x4008000000000000));
  fVar7 = (float)((3.0 - auVar1._0_8_) / 6.0);
  fVar2 = (float)(int)(uVar6 + uVar4) * fVar7;
  fVar3 = xin - ((float)(int)uVar4 - fVar2);
  fVar8 = yin - ((float)(int)uVar6 - fVar2);
  fVar9 = (fVar3 - (float)(fVar8 < fVar3)) + fVar7;
  fVar10 = (fVar8 - (float)(fVar3 <= fVar8)) + fVar7;
  fVar2 = fVar7 + fVar7 + (fVar3 - 1.0);
  fVar7 = fVar7 + fVar7 + (fVar8 - 1.0);
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar11 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar11 == (Int32__Array *)0x0) goto DAT_?;
  if ((uint)pIVar11->max_length <= (uVar6 & 0xff)) goto code_?;
  uVar12 = pIVar11->vector[(byte)uVar6] + (uVar4 & 0xff);
  if ((uint)pIVar11->max_length <= uVar12) goto code_?;
  uVar13 = pIVar11->vector[(int)uVar12] % 0xc;
  pIVar11 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  uVar12 = (uint)(fVar3 <= fVar8) + (uVar6 & 0xff);
  if (((uint)pIVar11->max_length <= uVar12) || (uVar12 = pIVar11->vector[uVar12] + (uint)(fVar8 < fVar3) + (uVar4 & 0xff), (uint)pIVar11->max_length <= uVar12)) goto code_?;
  uVar12 = pIVar11->vector[(int)uVar12] % 0xc;
  pIVar11 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((uint)pIVar11->max_length <= (uVar6 & 0xff) + 1) || (iVar14 = pIVar11->vector[(ulonglong)(byte)uVar6 + 1] + (uVar4 & 0xff), (uint)pIVar11->max_length <= iVar14 + 1U)) goto code_?;
  fVar15 = (0.5 - fVar3 * fVar3) - fVar8 * fVar8;
  uVar4 = pIVar11->vector[(longlong)iVar14 + 1] % 0xc;
  if (fVar15 < 0.0) {
    fVar3 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar16 == (Int32__Array__Array *)0x0) goto DAT_?;
    if ((uint)pIVar16->max_length <= uVar13) goto code_?;
    pIVar11 = pIVar16->vector[(int)uVar13];
    if (pIVar11 == (Int32__Array *)0x0) goto DAT_?;
    if (((int)pIVar11->max_length == 0) || ((uint)pIVar11->max_length < 2)) goto code_?;
    fVar3 = ((float)pIVar11->vector[1] * fVar8 + (float)pIVar11->vector[0] * fVar3) * fVar15 * fVar15 * fVar15 * fVar15;
  }
  fVar8 = (0.5 - fVar9 * fVar9) - fVar10 * fVar10;
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar16 == (Int32__Array__Array *)0x0) goto DAT_?;
    if ((uint)pIVar16->max_length <= uVar12) goto code_?;
    pIVar11 = pIVar16->vector[(int)uVar12];
    if (pIVar11 == (Int32__Array *)0x0) goto DAT_?;
    if (((int)pIVar11->max_length == 0) || ((uint)pIVar11->max_length < 2)) goto code_?;
    fVar8 = ((float)pIVar11->vector[1] * fVar10 + (float)pIVar11->vector[0] * fVar9) * fVar8 * fVar8 * fVar8 * fVar8;
  }
  fVar9 = (0.5 - fVar2 * fVar2) - fVar7 * fVar7;
  if (fVar9 < 0.0) {
code_?:
    return ((fVar8 + fVar3 + fVar5) * 70.0 + 1.0) * 0.5;
  }
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar16 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
  if (pIVar16 == (Int32__Array__Array *)0x0) {
DAT_?:
    FUN_?();
    pcVar17 = (code *)swi(3);
    fVar2 = (float)(*pcVar17)();
    return fVar2;
  }
  if (uVar4 < (uint)pIVar16->max_length) {
    pIVar11 = pIVar16->vector[(int)uVar4];
    if (pIVar11 == (Int32__Array *)0x0) goto DAT_?;
    if (((int)pIVar11->max_length != 0) && (1 < (uint)pIVar11->max_length)) {
      fVar5 = ((float)pIVar11->vector[1] * fVar7 + (float)pIVar11->vector[0] * fVar2) * fVar9 * fVar9 * fVar9 * fVar9;
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  fVar2 = (float)(*pcVar17)();
  return fVar2;
}

