
/* Mesh CreatePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreatePyramid(Vector3 *baseCenter,float baseWidth,float baseDepth,float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = ABS(baseWidth);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = ABS(baseDepth);
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar3 = ABS(height);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar1 = fVar1 * 0.5;
  fVar2 = fVar2 * 0.5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->upVector).x;
  uVar6 = (pVVar4->upVector).y;
  uStack_7._0_4_ = baseCenter->x;
  uStack_7._4_4_ = baseCenter->y;
  fVar8 = (float)uVar5 * fVar3 + (float)(undefined4)uStack_7;
  fVar9 = (float)uVar6 * fVar3 + (float)uStack_7._4_4_;
  fVar3 = (pVVar4->upVector).z * fVar3 + baseCenter->z;
  pAVar10 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x10);
  cVar11 = cRam_?;
  if (pAVar10 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar10[1].monitor != 0) {
    pAVar10[2].klass = (Array__Class *)CONCAT44(fVar9,fVar8);
    *(float *)&pAVar10[2].monitor = fVar3;
    if (cVar11 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar11 = '\x01';
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12 = (pVVar4->rightVector).x;
    uVar13 = (pVVar4->rightVector).y;
    uStack_7._0_4_ = baseCenter->x;
    uStack_7._4_4_ = baseCenter->y;
    fVar14 = (pVVar4->rightVector).z;
    fVar15 = (float)uVar12 * fVar1 + (float)(undefined4)uStack_7;
    fVar16 = (float)uVar13 * fVar1 + (float)uStack_7._4_4_;
    fVar17 = baseCenter->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      cVar11 = cRam_?;
    }
    cVar18 = cRam_?;
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_7._0_4_ = (pVVar4->forwardVector).x;
    uStack_7._4_4_ = (pVVar4->forwardVector).y;
    fVar19 = (pVVar4->forwardVector).z;
    if (1 < *(uint *)&pAVar10[1].monitor) {
      *(ulonglong *)((longlong)&pAVar10[2].monitor + 4) = CONCAT44(fVar16 - (float)uStack_7._4_4_ * fVar2,fVar15 - (float)(undefined4)uStack_7 * fVar2);
      *(float *)((longlong)&pAVar10[3].klass + 4) = (fVar14 * fVar1 + fVar17) - fVar19 * fVar2;
      if (cVar11 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar11 = '\x01';
        cRam_? = '\x01';
        cVar18 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar20 = (pVVar4->rightVector).x;
      uVar21 = (pVVar4->rightVector).y;
      uStack_7._0_4_ = baseCenter->x;
      uStack_7._4_4_ = baseCenter->y;
      fVar14 = baseCenter->z;
      fVar15 = (float)(undefined4)uStack_7 - (float)uVar20 * fVar1;
      fVar17 = (pVVar4->rightVector).z;
      fVar16 = (float)uStack_7._4_4_ - (float)uVar21 * fVar1;
      if (cVar18 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar18 = '\x01';
        cRam_? = '\x01';
        cVar11 = cRam_?;
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_7._0_4_ = (pVVar4->forwardVector).x;
      uStack_7._4_4_ = (pVVar4->forwardVector).y;
      fVar19 = (pVVar4->forwardVector).z;
      if (2 < *(uint *)&pAVar10[1].monitor) {
        pAVar10[3].monitor = (MonitorData *)CONCAT44(fVar16 - (float)uStack_7._4_4_ * fVar2,fVar15 - (float)(undefined4)uStack_7 * fVar2);
        *(float *)&pAVar10[4].klass = (fVar14 - fVar17 * fVar1) - fVar19 * fVar2;
        if (3 < *(uint *)&pAVar10[1].monitor) {
          *(ulonglong *)((longlong)&pAVar10[4].klass + 4) = CONCAT44(fVar9,fVar8);
          *(float *)((longlong)&pAVar10[4].monitor + 4) = fVar3;
          if (cVar11 == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cVar11 = '\x01';
            cRam_? = '\x01';
            cVar18 = cRam_?;
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar22 = (pVVar4->rightVector).x;
          uVar23 = (pVVar4->rightVector).y;
          uStack_7._0_4_ = baseCenter->x;
          uStack_7._4_4_ = baseCenter->y;
          fVar14 = (pVVar4->rightVector).z;
          fVar15 = (float)uVar22 * fVar1 + (float)(undefined4)uStack_7;
          fVar16 = (float)uVar23 * fVar1 + (float)uStack_7._4_4_;
          fVar17 = baseCenter->z;
          if (cVar18 == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cVar18 = '\x01';
            cRam_? = '\x01';
            cVar11 = cRam_?;
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_7._0_4_ = (pVVar4->forwardVector).x;
          uStack_7._4_4_ = (pVVar4->forwardVector).y;
          fVar19 = (pVVar4->forwardVector).z;
          if (4 < *(uint *)&pAVar10[1].monitor) {
            pAVar10[5].klass = (Array__Class *)CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar16,(float)(undefined4)uStack_7 * fVar2 + fVar15);
            *(float *)&pAVar10[5].monitor = fVar19 * fVar2 + fVar14 * fVar1 + fVar17;
            if (cVar11 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar11 = '\x01';
              cRam_? = '\x01';
              cVar18 = cRam_?;
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar24 = (pVVar4->rightVector).x;
            uVar25 = (pVVar4->rightVector).y;
            uStack_7._0_4_ = baseCenter->x;
            uStack_7._4_4_ = baseCenter->y;
            fVar14 = (pVVar4->rightVector).z;
            fVar15 = (float)uVar24 * fVar1 + (float)(undefined4)uStack_7;
            fVar16 = (float)uVar25 * fVar1 + (float)uStack_7._4_4_;
            fVar17 = baseCenter->z;
            if (cVar18 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar18 = '\x01';
              cRam_? = '\x01';
              cVar11 = cRam_?;
            }
            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_7._0_4_ = (pVVar4->forwardVector).x;
            uStack_7._4_4_ = (pVVar4->forwardVector).y;
            fVar19 = (pVVar4->forwardVector).z;
            if (5 < *(uint *)&pAVar10[1].monitor) {
              *(ulonglong *)((longlong)&pAVar10[5].monitor + 4) = CONCAT44(fVar16 - (float)uStack_7._4_4_ * fVar2,fVar15 - (float)(undefined4)uStack_7 * fVar2);
              *(float *)((longlong)&pAVar10[6].klass + 4) = (fVar14 * fVar1 + fVar17) - fVar19 * fVar2;
              if (6 < *(uint *)&pAVar10[1].monitor) {
                pAVar10[6].monitor = (MonitorData *)CONCAT44(fVar9,fVar8);
                *(float *)&pAVar10[7].klass = fVar3;
                if (cVar11 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cVar11 = '\x01';
                  cRam_? = '\x01';
                  cVar18 = cRam_?;
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar26 = (pVVar4->rightVector).x;
                uVar27 = (pVVar4->rightVector).y;
                uStack_7._0_4_ = baseCenter->x;
                uStack_7._4_4_ = baseCenter->y;
                fVar14 = baseCenter->z;
                fVar15 = (float)(undefined4)uStack_7 - (float)uVar26 * fVar1;
                fVar17 = (pVVar4->rightVector).z;
                fVar16 = (float)uStack_7._4_4_ - (float)uVar27 * fVar1;
                if (cVar18 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cVar18 = '\x01';
                  cRam_? = '\x01';
                  cVar11 = cRam_?;
                }
                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_7._0_4_ = (pVVar4->forwardVector).x;
                uStack_7._4_4_ = (pVVar4->forwardVector).y;
                fVar19 = (pVVar4->forwardVector).z;
                if (7 < *(uint *)&pAVar10[1].monitor) {
                  *(ulonglong *)((longlong)&pAVar10[7].klass + 4) = CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar16,(float)(undefined4)uStack_7 * fVar2 + fVar15);
                  *(float *)((longlong)&pAVar10[7].monitor + 4) = fVar19 * fVar2 + (fVar14 - fVar17 * fVar1);
                  if (cVar11 == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cVar11 = '\x01';
                    cRam_? = '\x01';
                    cVar18 = cRam_?;
                  }
                  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar28 = (pVVar4->rightVector).x;
                  uVar29 = (pVVar4->rightVector).y;
                  uStack_7._0_4_ = baseCenter->x;
                  uStack_7._4_4_ = baseCenter->y;
                  fVar14 = (pVVar4->rightVector).z;
                  fVar15 = (float)uVar28 * fVar1 + (float)(undefined4)uStack_7;
                  fVar16 = (float)uVar29 * fVar1 + (float)uStack_7._4_4_;
                  fVar17 = baseCenter->z;
                  if (cVar18 == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cVar18 = '\x01';
                    cRam_? = '\x01';
                    cVar11 = cRam_?;
                  }
                  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uStack_7._0_4_ = (pVVar4->forwardVector).x;
                  uStack_7._4_4_ = (pVVar4->forwardVector).y;
                  fVar19 = (pVVar4->forwardVector).z;
                  if (8 < *(uint *)&pAVar10[1].monitor) {
                    pAVar10[8].klass = (Array__Class *)CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar16,(float)(undefined4)uStack_7 * fVar2 + fVar15);
                    *(float *)&pAVar10[8].monitor = fVar19 * fVar2 + fVar14 * fVar1 + fVar17;
                    if (9 < *(uint *)&pAVar10[1].monitor) {
                      *(ulonglong *)((longlong)&pAVar10[8].monitor + 4) = CONCAT44(fVar9,fVar8);
                      *(float *)((longlong)&pAVar10[9].klass + 4) = fVar3;
                      if (cVar11 == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cVar11 = '\x01';
                        cRam_? = '\x01';
                        cVar18 = cRam_?;
                      }
                      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uVar30 = (pVVar4->rightVector).x;
                      uVar31 = (pVVar4->rightVector).y;
                      uStack_7._0_4_ = baseCenter->x;
                      uStack_7._4_4_ = baseCenter->y;
                      fVar3 = baseCenter->z;
                      fVar14 = (float)(undefined4)uStack_7 - (float)uVar30 * fVar1;
                      fVar9 = (pVVar4->rightVector).z;
                      fVar8 = (float)uStack_7._4_4_ - (float)uVar31 * fVar1;
                      if (cVar18 == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cVar18 = '\x01';
                        cRam_? = '\x01';
                        cVar11 = cRam_?;
                      }
                      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uStack_7._0_4_ = (pVVar4->forwardVector).x;
                      uStack_7._4_4_ = (pVVar4->forwardVector).y;
                      fVar17 = (pVVar4->forwardVector).z;
                      if (10 < *(uint *)&pAVar10[1].monitor) {
                        pAVar10[9].monitor = (MonitorData *)CONCAT44(fVar8 - (float)uStack_7._4_4_ * fVar2,fVar14 - (float)(undefined4)uStack_7 * fVar2);
                        *(float *)&pAVar10[10].klass = (fVar3 - fVar9 * fVar1) - fVar17 * fVar2;
                        if (cVar11 == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cVar11 = '\x01';
                          cRam_? = '\x01';
                          cVar18 = cRam_?;
                        }
                        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar32 = (pVVar4->rightVector).x;
                        uVar33 = (pVVar4->rightVector).y;
                        uStack_7._0_4_ = baseCenter->x;
                        uStack_7._4_4_ = baseCenter->y;
                        fVar3 = baseCenter->z;
                        fVar14 = (float)(undefined4)uStack_7 - (float)uVar32 * fVar1;
                        fVar9 = (pVVar4->rightVector).z;
                        fVar8 = (float)uStack_7._4_4_ - (float)uVar33 * fVar1;
                        if (cVar18 == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cVar18 = '\x01';
                          cRam_? = '\x01';
                          cVar11 = cRam_?;
                        }
                        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uStack_7._0_4_ = (pVVar4->forwardVector).x;
                        uStack_7._4_4_ = (pVVar4->forwardVector).y;
                        fVar17 = (pVVar4->forwardVector).z;
                        if (0xb < *(uint *)&pAVar10[1].monitor) {
                          *(ulonglong *)((longlong)&pAVar10[10].klass + 4) = CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar8,(float)(undefined4)uStack_7 * fVar2 + fVar14);
                          *(float *)((longlong)&pAVar10[10].monitor + 4) = fVar17 * fVar2 + (fVar3 - fVar9 * fVar1);
                          if (cVar11 == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cVar11 = '\x01';
                            cRam_? = '\x01';
                            cVar18 = cRam_?;
                          }
                          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uVar34 = (pVVar4->rightVector).x;
                          uVar35 = (pVVar4->rightVector).y;
                          uStack_7._0_4_ = baseCenter->x;
                          uStack_7._4_4_ = baseCenter->y;
                          fVar3 = baseCenter->z;
                          fVar14 = (float)(undefined4)uStack_7 - (float)uVar34 * fVar1;
                          fVar9 = (pVVar4->rightVector).z;
                          fVar8 = (float)uStack_7._4_4_ - (float)uVar35 * fVar1;
                          if (cVar18 == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cVar18 = '\x01';
                            cRam_? = '\x01';
                            cVar11 = cRam_?;
                          }
                          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uStack_7._0_4_ = (pVVar4->forwardVector).x;
                          uStack_7._4_4_ = (pVVar4->forwardVector).y;
                          fVar17 = (pVVar4->forwardVector).z;
                          if (0xc < *(uint *)&pAVar10[1].monitor) {
                            pAVar10[0xb].klass = (Array__Class *)CONCAT44(fVar8 - (float)uStack_7._4_4_ * fVar2,fVar14 - (float)(undefined4)uStack_7 * fVar2);
                            *(float *)&pAVar10[0xb].monitor = (fVar3 - fVar9 * fVar1) - fVar17 * fVar2;
                            if (cVar11 == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cVar11 = '\x01';
                              cRam_? = '\x01';
                              cVar18 = cRam_?;
                            }
                            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar36 = (pVVar4->rightVector).x;
                            uVar37 = (pVVar4->rightVector).y;
                            uStack_7._0_4_ = baseCenter->x;
                            uStack_7._4_4_ = baseCenter->y;
                            fVar3 = (pVVar4->rightVector).z;
                            fVar14 = (float)uVar36 * fVar1 + (float)(undefined4)uStack_7;
                            fVar8 = (float)uVar37 * fVar1 + (float)uStack_7._4_4_;
                            fVar9 = baseCenter->z;
                            if (cVar18 == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cVar18 = '\x01';
                              cRam_? = '\x01';
                              cVar11 = cRam_?;
                            }
                            pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uStack_7._0_4_ = (pVVar4->forwardVector).x;
                            uStack_7._4_4_ = (pVVar4->forwardVector).y;
                            fVar17 = (pVVar4->forwardVector).z;
                            if (0xd < *(uint *)&pAVar10[1].monitor) {
                              *(ulonglong *)((longlong)&pAVar10[0xb].monitor + 4) = CONCAT44(fVar8 - (float)uStack_7._4_4_ * fVar2,fVar14 - (float)(undefined4)uStack_7 * fVar2);
                              *(float *)((longlong)&pAVar10[0xc].klass + 4) = (fVar3 * fVar1 + fVar9) - fVar17 * fVar2;
                              if (cVar11 == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cVar11 = '\x01';
                                cRam_? = '\x01';
                                cVar18 = cRam_?;
                              }
                              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar38 = (pVVar4->rightVector).x;
                              uVar39 = (pVVar4->rightVector).y;
                              uStack_7._0_4_ = baseCenter->x;
                              uStack_7._4_4_ = baseCenter->y;
                              fVar3 = (pVVar4->rightVector).z;
                              fVar14 = (float)uVar38 * fVar1 + (float)(undefined4)uStack_7;
                              fVar8 = (float)uVar39 * fVar1 + (float)uStack_7._4_4_;
                              fVar9 = baseCenter->z;
                              if (cVar18 == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cVar18 = '\x01';
                                cRam_? = '\x01';
                                cVar11 = cRam_?;
                              }
                              pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uStack_7._0_4_ = (pVVar4->forwardVector).x;
                              uStack_7._4_4_ = (pVVar4->forwardVector).y;
                              fVar17 = (pVVar4->forwardVector).z;
                              if (0xe < *(uint *)&pAVar10[1].monitor) {
                                pAVar10[0xc].monitor = (MonitorData *)CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar8,(float)(undefined4)uStack_7 * fVar2 + fVar14);
                                *(float *)&pAVar10[0xd].klass = fVar17 * fVar2 + fVar3 * fVar1 + fVar9;
                                if (cVar11 == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                  cVar18 = cRam_?;
                                }
                                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uVar40 = (pVVar4->rightVector).x;
                                uVar41 = (pVVar4->rightVector).y;
                                uStack_7._0_4_ = baseCenter->x;
                                uStack_7._4_4_ = baseCenter->y;
                                fVar14 = (float)(undefined4)uStack_7 - (float)uVar40 * fVar1;
                                fVar3 = (pVVar4->rightVector).z;
                                fVar9 = baseCenter->z;
                                fVar8 = (float)uStack_7._4_4_ - (float)uVar41 * fVar1;
                                if (cVar18 == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uStack_7._0_4_ = (pVVar4->forwardVector).x;
                                uStack_7._4_4_ = (pVVar4->forwardVector).y;
                                fVar17 = (pVVar4->forwardVector).z;
                                if (0xf < *(uint *)&pAVar10[1].monitor) {
                                  *(ulonglong *)((longlong)&pAVar10[0xd].klass + 4) = CONCAT44((float)uStack_7._4_4_ * fVar2 + fVar8,(float)(undefined4)uStack_7 * fVar2 + fVar14);
                                  *(float *)((longlong)&pAVar10[0xd].monitor + 4) = fVar17 * fVar2 + (fVar9 - fVar3 * fVar1);
                                  indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x12);
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,_E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field,(MethodInfo *)0x0);
                                  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,*(undefined4 *)&pAVar10[1].monitor);
                                  lVar42 = 0;
                                  uVar43 = 2;
                                  if (indices == (Int32__Array *)0x0) goto code_?;
                                  do {
                                    if ((((uint)indices->max_length <= uVar43 - 2) || ((uint)indices->max_length <= uVar43 - 1)) || ((uint)indices->max_length <= uVar43)) goto code_?;
                                    uVar44 = *(uint *)((longlong)indices->vector + lVar42 + 4);
                                    lVar45 = (longlong)(int)uVar44;
                                    uVar46 = *(uint *)((longlong)indices->vector + lVar42 + 8);
                                    lVar47 = (longlong)(int)uVar46;
                                    if (*(uint *)&pAVar10[1].monitor <= uVar44) goto code_?;
                                    uVar48 = *(uint *)((longlong)indices->vector + lVar42);
                                    lVar49 = (longlong)(int)uVar48;
                                    if (*(uint *)&pAVar10[1].monitor <= uVar48) goto code_?;
                                    uVar50 = *(undefined8 *)((longlong)&pAVar10[2].klass + lVar49 * 0xc);
                                    fVar3 = (float)*(undefined8 *)((longlong)&pAVar10[2].klass + lVar45 * 0xc) - (float)uVar50;
                                    fVar2 = *(float *)((longlong)&pAVar10[2].monitor + lVar45 * 0xc) - *(float *)((longlong)&pAVar10[2].monitor + lVar49 * 0xc);
                                    fVar1 = (float)((ulonglong)*(undefined8 *)((longlong)&pAVar10[2].klass + lVar45 * 0xc) >> 0x20) - (float)((ulonglong)uVar50 >> 0x20);
                                    if ((*(uint *)&pAVar10[1].monitor <= uVar46) || (*(uint *)&pAVar10[1].monitor <= uVar48)) goto code_?;
                                    uVar50 = *(undefined8 *)((longlong)&pAVar10[2].klass + lVar49 * 0xc);
                                    fVar14 = (float)*(undefined8 *)((longlong)&pAVar10[2].klass + lVar47 * 0xc) - (float)uVar50;
                                    fVar9 = *(float *)((longlong)&pAVar10[2].monitor + lVar47 * 0xc) - *(float *)((longlong)&pAVar10[2].monitor + lVar49 * 0xc);
                                    fVar8 = *(float *)((longlong)&pAVar10[2].klass + lVar47 * 0xc + 4) - (float)((ulonglong)uVar50 >> 0x20);
                                    fVar17 = fVar1 * fVar9 - fVar2 * fVar8;
                                    fVar1 = fVar3 * fVar8 - fVar1 * fVar14;
                                    fVar3 = fVar2 * fVar14 - fVar3 * fVar9;
                                    uStack_7 = CONCAT44(fVar3,fVar17);
                                    fStack_51 = fVar1;
                                    fVar2 = (float)FUN_?(&uStack_7);
                                    if (1e-05 < fVar2) {
                                      fVar1 = fVar1 / fVar2;
                                      uStack_52 = CONCAT44(fVar3 / fVar2,fVar17 / fVar2);
                                    }
                                    else {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      uStack_52._0_4_ = (pVVar4->zeroVector).x;
                                      uStack_52._4_4_ = (pVVar4->zeroVector).y;
                                      fVar1 = (pVVar4->zeroVector).z;
                                    }
                                    if (this == (Array *)0x0) goto code_?;
                                    if (*(uint *)&this[1].monitor <= uVar48) goto code_?;
                                    *(undefined8 *)((longlong)&this[2].klass + lVar49 * 0xc) = uStack_52;
                                    *(float *)((longlong)&this[2].monitor + lVar49 * 0xc) = fVar1;
                                    if (*(uint *)&this[1].monitor <= uVar44) goto code_?;
                                    *(undefined8 *)((longlong)&this[2].klass + lVar45 * 0xc) = uStack_52;
                                    *(float *)((longlong)&this[2].monitor + lVar45 * 0xc) = fVar1;
                                    if (*(uint *)&this[1].monitor <= uVar46) goto code_?;
                                    uVar43 = uVar43 + 3;
                                    lVar42 = lVar42 + 0xc;
                                    *(undefined8 *)((longlong)&this[2].klass + (longlong)(int)uVar46 * 0xc) = uStack_52;
                                    *(float *)((longlong)&this[2].monitor + (longlong)(int)uVar46 * 0xc) = fVar1;
                                  } while ((int)uVar43 < 0xe);
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  cVar11 = cRam_?;
                                  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  iVar53 = *(int *)&this[1].monitor;
                                  uVar54 = (pVVar4->upVector).x;
                                  fVar1 = (pVVar4->upVector).z;
                                  if (iVar53 - 4U < *(uint *)&this[1].monitor) {
                                    *(ulonglong *)((longlong)&this[-1].klass + (longlong)iVar53 * 0xc) = CONCAT44((pVVar4->upVector).y,uVar54) ^ 0x8000000080000000;
                                    *(float *)((longlong)&this[-1].monitor + (longlong)iVar53 * 0xc) = -fVar1;
                                    if (cVar11 == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                      LOCK();
                                      UNLOCK();
                                      cVar11 = '\x01';
                                      cRam_? = '\x01';
                                    }
                                    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    iVar53 = *(int *)&this[1].monitor;
                                    uVar55 = (pVVar4->upVector).x;
                                    fVar1 = (pVVar4->upVector).z;
                                    if (iVar53 - 3U < *(uint *)&this[1].monitor) {
                                      *(ulonglong *)((longlong)&this[-1].monitor + (longlong)iVar53 * 0xc + 4) = CONCAT44((pVVar4->upVector).y,uVar55) ^ 0x8000000080000000;
                                      *(float *)((longlong)&this->klass + (longlong)iVar53 * 0xc + 4) = -fVar1;
                                      if (cVar11 == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cVar11 = '\x01';
                                        cRam_? = '\x01';
                                      }
                                      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      iVar53 = *(int *)&this[1].monitor;
                                      uVar56 = (pVVar4->upVector).x;
                                      fVar1 = (pVVar4->upVector).z;
                                      if (iVar53 - 2U < *(uint *)&this[1].monitor) {
                                        *(ulonglong *)((longlong)&this->monitor + (longlong)iVar53 * 0xc) = CONCAT44((pVVar4->upVector).y,uVar56) ^ 0x8000000080000000;
                                        *(float *)((longlong)&this[1].klass + (longlong)iVar53 * 0xc) = -fVar1;
                                        if (cVar11 == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        iVar53 = *(int *)&this[1].monitor;
                                        uVar57 = (pVVar4->upVector).x;
                                        fVar1 = (pVVar4->upVector).z;
                                        if (iVar53 - 1U < *(uint *)&this[1].monitor) {
                                          *(ulonglong *)((longlong)&this[1].klass + (longlong)iVar53 * 0xc + 4) = CONCAT44((pVVar4->upVector).y,uVar57) ^ 0x8000000080000000;
                                          *(float *)((longlong)&this[1].monitor + (longlong)iVar53 * 0xc + 4) = -fVar1;
                                          pMVar58 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Object);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          pcVar59 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) && (pcVar59 = (code *)FUN_?(&UNK_?), pcVar59 == (code *)0x0)) {
                                            uVar50 = func_?(&UNK_?);
                                            FUN_?(uVar50,0);
                                            pcVar59 = (code *)swi(3);
                                            pMVar58 = (Mesh *)(*pcVar59)();
                                            return pMVar58;
                                          }
                                          pcRam_? = pcVar59;
                                          (*pcRam_?)(pMVar58);
                                          if (pMVar58 == (Mesh *)0x0) {
code_?:
                                            FUN_?();
                                            pcVar59 = (code *)swi(3);
                                            pMVar58 = (Mesh *)(*pcVar59)();
                                            return pMVar58;
                                          }
                                          if (cRam_? == '\0') {
                                            FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          iVar60 = mscorlib.dll::System::Array::Array_get_Length(pAVar10,(MethodInfo *)0x0);
                                          uVar61 = 0;
                                          valuesArrayLength = 0;
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar58,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar10,iVar60,0,iVar60,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                          iVar53 = *(int *)&pAVar10[1].monitor;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Color);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pAVar10 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
                                          if (0 < iVar53) {
                                            pAVar62 = pAVar10 + 2;
                                            uVar63 = uVar61;
                                            if (pAVar10 == (Array *)0x0) goto code_?;
                                            do {
                                              if (*(uint *)&pAVar10[1].monitor <= (uint)uVar61) goto code_?;
                                              fVar1 = color->g;
                                              fVar2 = color->b;
                                              fVar3 = color->a;
                                              uVar61 = (ulonglong)((uint)uVar61 + 1);
                                              uVar63 = uVar63 + 1;
                                              *(float *)&pAVar62->klass = color->r;
                                              *(float *)((longlong)&pAVar62->klass + 4) = fVar1;
                                              *(float *)&pAVar62->monitor = fVar2;
                                              *(float *)((longlong)&pAVar62->monitor + 4) = fVar3;
                                              pAVar62 = pAVar62 + 1;
                                            } while ((longlong)uVar63 < (longlong)iVar53);
                                          }
                                          if (cRam_? == '\0') {
                                            FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (pAVar10 != (Array *)0x0) {
                                            valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar10,(MethodInfo *)0x0);
                                          }
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar58,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar10,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          iVar60 = mscorlib.dll::System::Array::Array_get_Length(this,(MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar58,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,this,iVar60,0,iVar60,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar58,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar58,0,(MethodInfo *)0x0);
                                          return pMVar58;
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
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar59 = (code *)swi(3);
  pMVar58 = (Mesh *)(*pcVar59)();
  return pMVar58;
}


/* Mesh CreateWirePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreateWirePyramid(Vector3 *baseCenter,float baseWidth,float baseDepth,float height,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&_17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = ABS(baseWidth);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = ABS(baseDepth);
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar3 = ABS(height);
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar1 = fVar1 * 0.5;
  fVar2 = fVar2 * 0.5;
  pAVar4 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->rightVector).x;
  uVar7 = baseCenter->x;
  fVar8 = (pVVar5->rightVector).y;
  fVar9 = baseCenter->y;
  fVar10 = baseCenter->z;
  fVar11 = (pVVar5->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar12 = cRam_?;
  cVar13 = cRam_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar14 = (pVVar5->forwardVector).x;
  fVar15 = (pVVar5->forwardVector).z;
  if (pAVar4 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar4[1].monitor != 0) {
    pAVar4[2].klass = (Array__Class *)CONCAT44((fVar9 - fVar8 * fVar1) - (pVVar5->forwardVector).y * fVar2,((float)uVar7 - (float)uVar6 * fVar1) - (float)uVar14 * fVar2);
    *(float *)&pAVar4[2].monitor = (fVar10 - fVar11 * fVar1) - fVar15 * fVar2;
    if (cVar12 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar12 = '\x01';
      cRam_? = '\x01';
      cVar13 = cRam_?;
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar16 = baseCenter->x;
    uVar17 = baseCenter->y;
    uVar18 = (pVVar5->rightVector).x;
    fVar8 = (pVVar5->rightVector).y;
    fVar9 = (pVVar5->rightVector).z;
    fVar10 = baseCenter->z;
    if (cVar13 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar13 = '\x01';
      cRam_? = '\x01';
      cVar12 = cRam_?;
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar5->forwardVector).x;
    fVar11 = (pVVar5->forwardVector).z;
    if (1 < *(uint *)&pAVar4[1].monitor) {
      *(ulonglong *)((longlong)&pAVar4[2].monitor + 4) = CONCAT44((fVar8 * fVar1 + (float)uVar17) - (pVVar5->forwardVector).y * fVar2,((float)uVar18 * fVar1 + (float)uVar16) - (float)uVar19 * fVar2);
      *(float *)((longlong)&pAVar4[3].klass + 4) = (fVar9 * fVar1 + fVar10) - fVar11 * fVar2;
      if (cVar12 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar12 = '\x01';
        cRam_? = '\x01';
        cVar13 = cRam_?;
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar20 = baseCenter->x;
      uVar21 = baseCenter->y;
      uVar22 = (pVVar5->rightVector).x;
      fVar8 = (pVVar5->rightVector).y;
      fVar9 = (pVVar5->rightVector).z;
      fVar10 = baseCenter->z;
      if (cVar13 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar13 = '\x01';
        cRam_? = '\x01';
        cVar12 = cRam_?;
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar23 = (pVVar5->forwardVector).x;
      fVar11 = (pVVar5->forwardVector).z;
      if (2 < *(uint *)&pAVar4[1].monitor) {
        pAVar4[3].monitor = (MonitorData *)CONCAT44((pVVar5->forwardVector).y * fVar2 + fVar8 * fVar1 + (float)uVar21,(float)uVar23 * fVar2 + (float)uVar22 * fVar1 + (float)uVar20);
        *(float *)&pAVar4[4].klass = fVar11 * fVar2 + fVar9 * fVar1 + fVar10;
        if (cVar12 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar13 = cRam_?;
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar24 = (pVVar5->rightVector).x;
        uVar25 = baseCenter->x;
        fVar8 = (pVVar5->rightVector).y;
        fVar9 = baseCenter->y;
        fVar10 = (pVVar5->rightVector).z;
        fVar11 = baseCenter->z;
        if (cVar13 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar26 = (pVVar5->forwardVector).x;
        fVar15 = (pVVar5->forwardVector).z;
        if (3 < *(uint *)&pAVar4[1].monitor) {
          bVar27 = cRam_? == '\0';
          *(ulonglong *)((longlong)&pAVar4[4].klass + 4) = CONCAT44((pVVar5->forwardVector).y * fVar2 + (fVar9 - fVar8 * fVar1),(float)uVar26 * fVar2 + ((float)uVar25 - (float)uVar24 * fVar1));
          *(float *)((longlong)&pAVar4[4].monitor + 4) = fVar15 * fVar2 + (fVar11 - fVar10 * fVar1);
          if (bVar27) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar28 = (pVVar5->upVector).x;
          uVar29 = (pVVar5->upVector).y;
          uVar30 = baseCenter->x;
          uVar31 = baseCenter->y;
          fVar1 = (pVVar5->upVector).z;
          fVar2 = baseCenter->z;
          if (4 < *(uint *)&pAVar4[1].monitor) {
            pAVar4[5].klass = (Array__Class *)CONCAT44(fVar3 * (float)uVar29 + (float)uVar31,fVar3 * (float)uVar28 + (float)uVar30);
            *(float *)&pAVar4[5].monitor = fVar3 * fVar1 + fVar2;
            indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x10);
            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)indices,__17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field,(MethodInfo *)0x0);
            pMVar32 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar32,(MethodInfo *)0x0);
            if (pMVar32 == (Mesh *)0x0) {
code_?:
              FUN_?();
              pcVar33 = (code *)swi(3);
              pMVar32 = (Mesh *)(*pcVar33)();
              return pMVar32;
            }
            if (cRam_? == '\0') {
              FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            valuesArrayLength = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
            uVar34 = 0;
            valuesArrayLength_00 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar32,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,pAVar4,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            iVar35 = *(int *)&pAVar4[1].monitor;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Color);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar4 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
            if (0 < iVar35) {
              pAVar36 = pAVar4 + 2;
              uVar37 = uVar34;
              if (pAVar4 == (Array *)0x0) goto code_?;
              do {
                if (*(uint *)&pAVar4[1].monitor <= (uint)uVar34) goto code_?;
                fVar1 = color->g;
                fVar2 = color->b;
                fVar3 = color->a;
                uVar34 = (ulonglong)((uint)uVar34 + 1);
                uVar37 = uVar37 + 1;
                *(float *)&pAVar36->klass = color->r;
                *(float *)((longlong)&pAVar36->klass + 4) = fVar1;
                *(float *)&pAVar36->monitor = fVar2;
                *(float *)((longlong)&pAVar36->monitor + 4) = fVar3;
                pAVar36 = pAVar36 + 1;
              } while ((longlong)uVar37 < (longlong)iVar35);
            }
            if (cRam_? == '\0') {
              FUN_?(&void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pAVar4 != (Array *)0x0) {
              valuesArrayLength_00 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel(pMVar32,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,pAVar4,valuesArrayLength_00,0,valuesArrayLength_00,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices(pMVar32,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData(pMVar32,0,(MethodInfo *)0x0);
            return pMVar32;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar33 = (code *)swi(3);
  pMVar32 = (Mesh *)(*pcVar33)();
  return pMVar32;
}

