
/* MathFunctions+PerlinSimplexNoise() */

void Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise__cctor
               (MethodInfo *method)

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
    if ((*(int *)(lVar2 + 0x18) == 0) ||
       (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 2)) goto code_?;
    *(undefined4 *)(lVar2 + 0x24) = 1;
    if (pIVar1 != (Int32__Array__Array *)0x0) {
      FUN_?(pIVar1,0,lVar2);
      lVar2 = FUN_?(TypeInfo__System__Int32,3);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x18) == 0) ||
           (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 2)) {
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
          if ((*(int *)(lVar2 + 0x18) == 0) ||
             (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 2))
          goto code_?;
          *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
          FUN_?(pIVar1,2,lVar2);
          lVar2 = FUN_?(TypeInfo__System__Int32,3);
          if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x18) == 0) ||
               (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 2))
            goto code_?;
            *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
            FUN_?(pIVar1,3,lVar2);
            lVar2 = FUN_?(TypeInfo__System__Int32,3);
            if (lVar2 != 0) {
              if ((*(int *)(lVar2 + 0x18) == 0) ||
                 (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 3))
              goto code_?;
              *(undefined4 *)(lVar2 + 0x28) = 1;
              FUN_?(pIVar1,4,lVar2);
              lVar2 = FUN_?(TypeInfo__System__Int32,3);
              if (lVar2 != 0) {
                if ((*(int *)(lVar2 + 0x18) == 0) ||
                   (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3))
                goto code_?;
                *(undefined4 *)(lVar2 + 0x28) = 1;
                FUN_?(pIVar1,5,lVar2);
                lVar2 = FUN_?(TypeInfo__System__Int32,3);
                if (lVar2 != 0) {
                  if ((*(int *)(lVar2 + 0x18) == 0) ||
                     (*(undefined4 *)(lVar2 + 0x20) = 1, *(uint *)(lVar2 + 0x18) < 3))
                  goto code_?;
                  *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                  FUN_?(pIVar1,6,lVar2);
                  lVar2 = FUN_?(TypeInfo__System__Int32,3);
                  if (lVar2 != 0) {
                    if ((*(int *)(lVar2 + 0x18) == 0) ||
                       (*(undefined4 *)(lVar2 + 0x20) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3))
                    goto code_?;
                    *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                    FUN_?(pIVar1,7,lVar2);
                    lVar2 = FUN_?(TypeInfo__System__Int32,3);
                    if (lVar2 != 0) {
                      if ((*(uint *)(lVar2 + 0x18) < 2) ||
                         (*(undefined4 *)(lVar2 + 0x24) = 1, *(uint *)(lVar2 + 0x18) < 3))
                      goto code_?;
                      *(undefined4 *)(lVar2 + 0x28) = 1;
                      FUN_?(pIVar1,8,lVar2);
                      lVar2 = FUN_?(TypeInfo__System__Int32,3);
                      if (lVar2 != 0) {
                        if ((*(uint *)(lVar2 + 0x18) < 2) ||
                           (*(undefined4 *)(lVar2 + 0x24) = 0xffffffff, *(uint *)(lVar2 + 0x18) < 3)
                           ) goto code_?;
                        *(undefined4 *)(lVar2 + 0x28) = 1;
                        FUN_?(pIVar1,9,lVar2);
                        lVar2 = FUN_?(TypeInfo__System__Int32,3);
                        if (lVar2 != 0) {
                          if ((*(uint *)(lVar2 + 0x18) < 2) ||
                             (*(undefined4 *)(lVar2 + 0x24) = 1, *(uint *)(lVar2 + 0x18) < 3))
                          goto code_?;
                          *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                          FUN_?(pIVar1,10,lVar2);
                          lVar2 = FUN_?(TypeInfo__System__Int32,3);
                          if (lVar2 != 0) {
                            if ((*(uint *)(lVar2 + 0x18) < 2) ||
                               (*(undefined4 *)(lVar2 + 0x24) = 0xffffffff,
                               *(uint *)(lVar2 + 0x18) < 3)) goto code_?;
                            *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                            FUN_?(pIVar1,0xb);
                            bVar4 = iRam_? != 0;
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3 =
                                 pIVar1;
                            if (bVar4) {
                              uVar5 = (uint)((ulonglong)
                                             TypeInfo__MathFunctions__PerlinSimplexNoise->
                                             static_fields >> 0xc);
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
                            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                            RuntimeHelpers_InitializeArray_1
                                      ((Array *)pIVar8,
                                       _EA3CF748EF2EED46C8D386654894EFB4A0ACA29E79789C2D3A4A27B57352CECD_Field
                                       ,(MethodInfo *)0x0);
                            bVar4 = iRam_? != 0;
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p = pIVar8;
                            if (bVar4) {
                              uVar5 = (uint)((ulonglong)
                                             &TypeInfo__MathFunctions__PerlinSimplexNoise->
                                              static_fields->p >> 0xc);
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
                            TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm =
                                 pIVar8;
                            if (iRam_? != 0) {
                              uVar5 = (uint)((ulonglong)
                                             &TypeInfo__MathFunctions__PerlinSimplexNoise->
                                              static_fields->perm >> 0xc);
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
                              pIVar8 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->
                                       perm;
                              pIVar9 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->p
                              ;
                              if (pIVar9 == (Int32__Array *)0x0) break;
                              if ((uint)pIVar9->max_length <= (uint)(uVar6 & 0xff))
                              goto code_?;
                              if (pIVar8 == (Int32__Array *)0x0) break;
                              if ((uint)pIVar8->max_length <= uVar5) goto code_?;
                              uVar5 = uVar5 + 1;
                              *(int32_t *)((longlong)pIVar8->vector + lVar2 + -0x20) =
                                   pIVar9->vector[uVar6 & 0xff];
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

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot
                (Int32__Array *g,float x,float y,MethodInfo *method)

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

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_1
                (Int32__Array *g,float x,float y,float z,MethodInfo *method)

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

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_dot_2
                (Int32__Array *g,float x,float y,float z,float w,MethodInfo *method)

{
  if (g == (Int32__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (((((int)g->max_length != 0) && (1 < (uint)g->max_length)) && (2 < (uint)g->max_length)) &&
     (3 < (uint)g->max_length)) {
    return (float)g->vector[1] * y + (float)g->vector[0] * x + (float)g->vector[2] * z +
           (float)g->vector[3] * w;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Int32 fastfloor(Single) */

int32_t Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
        MathFunctions_PerlinSimplexNoise_fastfloor(float x,MethodInfo *method)

{
  iVar1 = (int)x + -1;
  if (0.0 < x) {
    iVar1 = (int)x;
  }
  return iVar1;
}


/* Single noise(Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise
                (float xin,float yin,float zin,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (xin + yin + zin) * _UNK_?;
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  uVar3 = (uint)(fVar2 + xin);
  fVar4 = 0.0;
  if (fVar2 + xin <= 0.0) {
    uVar3 = uVar3 - 1;
  }
  uVar5 = (uint)(fVar2 + yin);
  if (fVar2 + yin <= 0.0) {
    uVar5 = uVar5 - 1;
  }
  uVar6 = (uint)(fVar2 + zin);
  if (fVar2 + zin <= 0.0) {
    uVar6 = uVar6 - 1;
  }
  fVar2 = (float)(int)(uVar6 + uVar5 + uVar3) * _UNK_?;
  fVar7 = xin - ((float)(int)uVar3 - fVar2);
  fVar8 = yin - ((float)(int)uVar5 - fVar2);
  fVar2 = zin - ((float)(int)uVar6 - fVar2);
  iVar9 = 0;
  iVar10 = 0;
  if (fVar8 <= fVar7) {
    iVar11 = 0;
    if (fVar2 <= fVar8) {
      iVar12 = 1;
    }
    else {
      iVar12 = 0;
      if (fVar7 < fVar2) {
        iVar13 = 1;
        iVar14 = 0;
        iVar10 = 1;
        iVar15 = 1;
        goto code_?;
      }
      iVar10 = 1;
      iVar12 = 0;
    }
    iVar13 = 0;
    iVar14 = 1;
    iVar15 = 1;
  }
  else {
    iVar14 = 0;
    if (fVar8 < fVar2) {
      iVar13 = 1;
      iVar15 = 0;
      iVar10 = 1;
      iVar12 = 1;
      iVar11 = iVar9;
    }
    else {
      iVar13 = 0;
      iVar11 = 1;
      if (fVar7 < fVar2) {
        iVar15 = 0;
        iVar10 = 1;
        iVar12 = 1;
      }
      else {
        iVar15 = 1;
        iVar12 = 1;
        iVar14 = iVar9;
        iVar10 = iVar9;
        iVar13 = 0;
      }
    }
  }
code_?:
  uVar16 = (ulonglong)(byte)uVar6;
  fVar17 = (fVar7 - (float)iVar14) + _UNK_?;
  fVar18 = (fVar8 - (float)iVar11) + _UNK_?;
  fVar19 = (fVar2 - (float)iVar13) + _UNK_?;
  fVar20 = (fVar7 - (float)iVar15) + fVar1;
  fVar21 = (fVar8 - (float)iVar12) + fVar1;
  fVar1 = (fVar2 - (float)iVar10) + fVar1;
  fVar22 = (fVar7 - _UNK_?) + _UNK_?;
  fVar23 = (fVar8 - _UNK_?) + _UNK_?;
  fVar24 = (fVar2 - _UNK_?) + _UNK_?;
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    uVar16 = (ulonglong)(uVar6 & 0xff);
  }
  fVar25 = _UNK_?;
  pIVar26 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (pIVar26 == (Int32__Array *)0x0) goto code_?;
  uVar6 = (uint)uVar16;
  if ((uint)pIVar26->max_length <= uVar6) goto code_?;
  uVar27 = pIVar26->vector[uVar16] + (uVar5 & 0xff);
  if ((uint)pIVar26->max_length <= uVar27) goto code_?;
  uVar27 = pIVar26->vector[(int)uVar27] + (uVar3 & 0xff);
  if ((uint)pIVar26->max_length <= uVar27) goto code_?;
  uVar27 = pIVar26->vector[(int)uVar27] % 0xc;
  pIVar26 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((uint)pIVar26->max_length <= uVar6 + iVar13) goto code_?;
  uVar28 = pIVar26->vector[uVar6 + iVar13] + (uVar5 & 0xff) + iVar11;
  if (((uint)pIVar26->max_length <= uVar28) ||
     (uVar28 = pIVar26->vector[(int)uVar28] + (uVar3 & 0xff) + iVar14,
     (uint)pIVar26->max_length <= uVar28)) goto code_?;
  uVar28 = pIVar26->vector[(int)uVar28] % 0xc;
  pIVar26 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if ((uint)pIVar26->max_length <= uVar6 + iVar10) goto code_?;
  uVar29 = pIVar26->vector[uVar6 + iVar10] + (uVar5 & 0xff) + iVar12;
  if ((uint)pIVar26->max_length <= uVar29) goto code_?;
  uVar29 = pIVar26->vector[(int)uVar29] + (uVar3 & 0xff) + iVar15;
  if ((uint)pIVar26->max_length <= uVar29) goto code_?;
  uVar29 = pIVar26->vector[(int)uVar29] % 0xc;
  pIVar26 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->perm;
  if (((uint)pIVar26->max_length <= uVar6 + 1) ||
     (iVar10 = pIVar26->vector[uVar16 + 1] + (uVar5 & 0xff), (uint)pIVar26->max_length <= iVar10 + 1U))
  goto code_?;
  iVar10 = pIVar26->vector[(longlong)iVar10 + 1] + (uVar3 & 0xff);
  if ((uint)pIVar26->max_length <= iVar10 + 1U) goto code_?;
  uVar3 = pIVar26->vector[(longlong)iVar10 + 1] % 0xc;
  fVar30 = ((_UNK_? - fVar7 * fVar7) - fVar8 * fVar8) - fVar2 * fVar2;
  if (fVar30 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar31 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar31 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar31->max_length <= uVar27) goto code_?;
    pIVar26 = pIVar31->vector[(int)uVar27];
    if (pIVar26 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar26->max_length == 0) || ((uint)pIVar26->max_length < 2)) ||
       ((uint)pIVar26->max_length < 3)) goto code_?;
    fVar2 = ((float)pIVar26->vector[1] * fVar8 + (float)pIVar26->vector[0] * fVar7 +
             (float)pIVar26->vector[2] * fVar2) * fVar30 * fVar30 * fVar30 * fVar30;
  }
  fVar7 = ((fVar25 - fVar17 * fVar17) - fVar18 * fVar18) - fVar19 * fVar19;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar31 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar31 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar31->max_length <= uVar28) goto code_?;
    pIVar26 = pIVar31->vector[(int)uVar28];
    if (pIVar26 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar26->max_length == 0) || ((uint)pIVar26->max_length < 2)) ||
       ((uint)pIVar26->max_length < 3)) goto code_?;
    fVar7 = ((float)pIVar26->vector[1] * fVar18 + (float)pIVar26->vector[0] * fVar17 +
             (float)pIVar26->vector[2] * fVar19) * fVar7 * fVar7 * fVar7 * fVar7;
  }
  fVar8 = ((fVar25 - fVar20 * fVar20) - fVar21 * fVar21) - fVar1 * fVar1;
  if (fVar8 < 0.0) {
    fVar1 = 0.0;
  }
  else {
    if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    pIVar31 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
    if (pIVar31 == (Int32__Array__Array *)0x0) goto code_?;
    if ((uint)pIVar31->max_length <= uVar29) goto code_?;
    pIVar26 = pIVar31->vector[(int)uVar29];
    if (pIVar26 == (Int32__Array *)0x0) goto code_?;
    if ((((int)pIVar26->max_length == 0) || ((uint)pIVar26->max_length < 2)) ||
       ((uint)pIVar26->max_length < 3)) goto code_?;
    fVar1 = ((float)pIVar26->vector[1] * fVar21 + (float)pIVar26->vector[0] * fVar20 +
             (float)pIVar26->vector[2] * fVar1) * fVar8 * fVar8 * fVar8 * fVar8;
  }
  fVar8 = ((fVar25 - fVar22 * fVar22) - fVar23 * fVar23) - fVar24 * fVar24;
  if (fVar8 < 0.0) {
code_?:
    return (fVar7 + fVar2 + fVar1 + fVar4) * _UNK_?;
  }
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pIVar31 = TypeInfo__MathFunctions__PerlinSimplexNoise->static_fields->grad3;
  if (pIVar31 != (Int32__Array__Array *)0x0) {
    if (uVar3 < (uint)pIVar31->max_length) {
      pIVar26 = pIVar31->vector[(int)uVar3];
      if (pIVar26 == (Int32__Array *)0x0) goto code_?;
      if ((((int)pIVar26->max_length != 0) && (1 < (uint)pIVar26->max_length)) &&
         (2 < (uint)pIVar26->max_length)) {
        fVar4 = ((float)pIVar26->vector[1] * fVar23 + (float)pIVar26->vector[0] * fVar22 +
                 (float)pIVar26->vector[2] * fVar24) * fVar8 * fVar8 * fVar8 * fVar8;
        goto code_?;
      }
    }
code_?:
    FUN_?();
    pcVar32 = (code *)swi(3);
    fVar1 = (float)(*pcVar32)();
    return fVar1;
  }
code_?:
  FUN_?();
  pcVar32 = (code *)swi(3);
  fVar1 = (float)(*pcVar32)();
  return fVar1;
}


/* Single noise(Single, Single) */

float Assembly-CSharp.dll::MathFunctions+PerlinSimplexNoise::
      MathFunctions_PerlinSimplexNoise_noise_1(float xin,float yin,MethodInfo *method)

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
  dVar1 = _UNK_?;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _UNK_?;
  if (_UNK_? < 0.0) {
    dVar3 = (double)FUN_?();
  }
  else {
    auVar4 = sqrtpd(ZEXT816(0),auVar2);
    dVar3 = auVar4._0_8_;
  }
  fVar5 = (float)((dVar3 - _UNK_?) * _UNK_?) * (xin + yin);
  if (*(int *)&(TypeInfo__MathFunctions__PerlinSimplexNoise->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
  }
  pMVar6 = TypeInfo__MathFunctions__PerlinSimplexNoise;
  fVar7 = fVar5 + xin;
  uVar8 = (uint)fVar7;
  fVar9 = 0.0;
  fVar5 = fVar5 + yin;
  uVar10 = (uint)fVar5;
  if (fVar7 <= 0.0) {
    uVar8 = uVar8 - 1;
  }
  if (fVar5 <= 0.0) {
    uVar10 = uVar10 - 1;
  }
  if (dVar1 < 0.0) {
    dVar3 = (double)FUN_?();
  }
  else {
    auVar2 = sqrtpd(ZEXT816(0),auVar2);
    dVar3 = auVar2._0_8_;
  }
  fVar11 = (float)((dVar1 - dVar3) / _UNK_?);
  fVar5 = (float)(int)(uVar10 + uVar8) * fVar11;
  fVar7 = xin - ((float)(int)uVar8 - fVar5);
  fVar12 = yin - ((float)(int)uVar10 - fVar5);
  fVar13 = (fVar7 - (float)(fVar12 < fVar7)) + fVar11;
  fVar14 = (fVar12 - (float)(fVar7 <= fVar12)) + fVar11;
  fVar5 = fVar11 + fVar11 + (fVar7 - _UNK_?);
  fVar11 = fVar11 + fVar11 + (fVar12 - _UNK_?);
  if (*(int *)&(pMVar6->_1).field_0x1c == 0) {
    FUN_?(pMVar6);
    pMVar6 = TypeInfo__MathFunctions__PerlinSimplexNoise;
  }
  fVar15 = _UNK_?;
  pIVar16 = pMVar6->static_fields->perm;
  if (pIVar16 == (Int32__Array *)0x0) goto DAT_?;
  if ((uint)pIVar16->max_length <= (uVar10 & 0xff)) goto code_?;
  uVar17 = pIVar16->vector[(byte)uVar10] + (uVar8 & 0xff);
  if ((uint)pIVar16->max_length <= uVar17) goto code_?;
  uVar18 = pIVar16->vector[(int)uVar17] % 0xc;
  pIVar16 = pMVar6->static_fields->perm;
  uVar17 = (uint)(fVar7 <= fVar12) + (uVar10 & 0xff);
  if (((uint)pIVar16->max_length <= uVar17) ||
     (uVar17 = pIVar16->vector[uVar17] + (uint)(fVar12 < fVar7) + (uVar8 & 0xff),
     (uint)pIVar16->max_length <= uVar17)) goto code_?;
  uVar17 = pIVar16->vector[(int)uVar17] % 0xc;
  pIVar16 = pMVar6->static_fields->perm;
  if (((uint)pIVar16->max_length <= (uVar10 & 0xff) + 1) ||
     (iVar19 = pIVar16->vector[(ulonglong)(byte)uVar10 + 1] + (uVar8 & 0xff),
     (uint)pIVar16->max_length <= iVar19 + 1U)) goto code_?;
  fVar20 = (_UNK_? - fVar7 * fVar7) - fVar12 * fVar12;
  uVar8 = pIVar16->vector[(longlong)iVar19 + 1] % 0xc;
  if (fVar20 < 0.0) {
    fVar7 = 0.0;
  }
  else {
    if (*(int *)&(pMVar6->_1).field_0x1c == 0) {
      FUN_?(pMVar6);
      pMVar6 = TypeInfo__MathFunctions__PerlinSimplexNoise;
    }
    pIVar21 = pMVar6->static_fields->grad3;
    if (pIVar21 == (Int32__Array__Array *)0x0) goto DAT_?;
    if ((uint)pIVar21->max_length <= uVar18) goto code_?;
    pIVar16 = pIVar21->vector[(int)uVar18];
    if (pIVar16 == (Int32__Array *)0x0) goto DAT_?;
    if (((int)pIVar16->max_length == 0) || ((uint)pIVar16->max_length < 2)) goto code_?;
    fVar7 = ((float)pIVar16->vector[1] * fVar12 + (float)pIVar16->vector[0] * fVar7) *
             fVar20 * fVar20 * fVar20 * fVar20;
  }
  fVar12 = (fVar15 - fVar13 * fVar13) - fVar14 * fVar14;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    if (*(int *)&(pMVar6->_1).field_0x1c == 0) {
      FUN_?(pMVar6);
      pMVar6 = TypeInfo__MathFunctions__PerlinSimplexNoise;
    }
    pIVar21 = pMVar6->static_fields->grad3;
    if (pIVar21 == (Int32__Array__Array *)0x0) goto DAT_?;
    if ((uint)pIVar21->max_length <= uVar17) goto code_?;
    pIVar16 = pIVar21->vector[(int)uVar17];
    if (pIVar16 == (Int32__Array *)0x0) goto DAT_?;
    if (((int)pIVar16->max_length == 0) || ((uint)pIVar16->max_length < 2)) goto code_?;
    fVar12 = ((float)pIVar16->vector[1] * fVar14 + (float)pIVar16->vector[0] * fVar13) *
             fVar12 * fVar12 * fVar12 * fVar12;
  }
  fVar13 = (fVar15 - fVar5 * fVar5) - fVar11 * fVar11;
  if (fVar13 < 0.0) {
code_?:
    return ((fVar12 + fVar7 + fVar9) * _UNK_? + _UNK_?) * fVar15;
  }
  if (*(int *)&(pMVar6->_1).field_0x1c == 0) {
    FUN_?(pMVar6);
    pMVar6 = TypeInfo__MathFunctions__PerlinSimplexNoise;
  }
  pIVar21 = pMVar6->static_fields->grad3;
  if (pIVar21 != (Int32__Array__Array *)0x0) {
    if (uVar8 < (uint)pIVar21->max_length) {
      pIVar16 = pIVar21->vector[(int)uVar8];
      if (pIVar16 == (Int32__Array *)0x0) goto DAT_?;
      if (((int)pIVar16->max_length != 0) && (1 < (uint)pIVar16->max_length)) {
        fVar9 = ((float)pIVar16->vector[1] * fVar11 + (float)pIVar16->vector[0] * fVar5) *
                 fVar13 * fVar13 * fVar13 * fVar13;
        goto code_?;
      }
    }
code_?:
    FUN_?();
    pcVar22 = (code *)swi(3);
    fVar5 = (float)(*pcVar22)();
    return fVar5;
  }
DAT_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  fVar5 = (float)(*pcVar22)();
  return fVar5;
}

