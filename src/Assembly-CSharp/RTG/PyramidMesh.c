
/* Mesh CreatePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreatePyramid
                 (Vector3 *baseCenter,float baseWidth,float baseDepth,float height,Color *color,
                 MethodInfo *method)

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
  uVar1 = (uint)_UNK_?;
  fVar2 = (float)((uint)baseWidth & uVar1);
  if ((float)((uint)baseWidth & uVar1) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = (float)((uint)baseDepth & uVar1);
  if ((float)((uint)baseDepth & uVar1) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar4 = (float)((uint)height & uVar1);
  if ((float)((uint)height & uVar1) <= _UNK_?) {
    fVar4 = _UNK_?;
  }
  fVar2 = fVar2 * _UNK_?;
  fVar3 = fVar3 * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->upVector).x;
  uVar7 = (pVVar5->upVector).y;
  uStack_8._0_4_ = baseCenter->x;
  uStack_8._4_4_ = baseCenter->y;
  fVar9 = (float)uVar6 * fVar4 + (float)(undefined4)uStack_8;
  fVar10 = (float)uVar7 * fVar4 + (float)uStack_8._4_4_;
  fVar4 = (pVVar5->upVector).z * fVar4 + baseCenter->z;
  pAVar11 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x10);
  cVar12 = cRam_?;
  if (pAVar11 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar11[1].monitor != 0) {
    pAVar11[2].klass = (Array__Class *)CONCAT44(fVar10,fVar9);
    *(float *)&pAVar11[2].monitor = fVar4;
    if (cVar12 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar12 = '\x01';
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar5->rightVector).x;
    uVar14 = (pVVar5->rightVector).y;
    uStack_8._0_4_ = baseCenter->x;
    uStack_8._4_4_ = baseCenter->y;
    fVar15 = (pVVar5->rightVector).z;
    fVar16 = (float)uVar13 * fVar2 + (float)(undefined4)uStack_8;
    fVar17 = (float)uVar14 * fVar2 + (float)uStack_8._4_4_;
    fVar18 = baseCenter->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      cVar12 = cRam_?;
    }
    cVar19 = cRam_?;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar5->forwardVector).x;
    uStack_8._4_4_ = (pVVar5->forwardVector).y;
    fVar20 = (pVVar5->forwardVector).z;
    if (1 < *(uint *)&pAVar11[1].monitor) {
      *(ulonglong *)((longlong)&pAVar11[2].monitor + 4) =
           CONCAT44(fVar17 - (float)uStack_8._4_4_ * fVar3,
                    fVar16 - (float)(undefined4)uStack_8 * fVar3);
      *(float *)((longlong)&pAVar11[3].klass + 4) = (fVar15 * fVar2 + fVar18) - fVar20 * fVar3;
      if (cVar12 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar12 = '\x01';
        cRam_? = '\x01';
        cVar19 = cRam_?;
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar21 = (pVVar5->rightVector).x;
      uVar22 = (pVVar5->rightVector).y;
      uStack_8._0_4_ = baseCenter->x;
      uStack_8._4_4_ = baseCenter->y;
      fVar15 = baseCenter->z;
      fVar16 = (float)(undefined4)uStack_8 - (float)uVar21 * fVar2;
      fVar18 = (pVVar5->rightVector).z;
      fVar17 = (float)uStack_8._4_4_ - (float)uVar22 * fVar2;
      if (cVar19 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar19 = '\x01';
        cRam_? = '\x01';
        cVar12 = cRam_?;
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_8._0_4_ = (pVVar5->forwardVector).x;
      uStack_8._4_4_ = (pVVar5->forwardVector).y;
      fVar20 = (pVVar5->forwardVector).z;
      if (2 < *(uint *)&pAVar11[1].monitor) {
        pAVar11[3].monitor =
             (MonitorData *)
             CONCAT44(fVar17 - (float)uStack_8._4_4_ * fVar3,
                      fVar16 - (float)(undefined4)uStack_8 * fVar3);
        *(float *)&pAVar11[4].klass = (fVar15 - fVar18 * fVar2) - fVar20 * fVar3;
        if (3 < *(uint *)&pAVar11[1].monitor) {
          *(ulonglong *)((longlong)&pAVar11[4].klass + 4) = CONCAT44(fVar10,fVar9);
          *(float *)((longlong)&pAVar11[4].monitor + 4) = fVar4;
          if (cVar12 == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cVar12 = '\x01';
            cRam_? = '\x01';
            cVar19 = cRam_?;
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar23 = (pVVar5->rightVector).x;
          uVar24 = (pVVar5->rightVector).y;
          uStack_8._0_4_ = baseCenter->x;
          uStack_8._4_4_ = baseCenter->y;
          fVar15 = (pVVar5->rightVector).z;
          fVar16 = (float)uVar23 * fVar2 + (float)(undefined4)uStack_8;
          fVar17 = (float)uVar24 * fVar2 + (float)uStack_8._4_4_;
          fVar18 = baseCenter->z;
          if (cVar19 == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cVar19 = '\x01';
            cRam_? = '\x01';
            cVar12 = cRam_?;
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_8._0_4_ = (pVVar5->forwardVector).x;
          uStack_8._4_4_ = (pVVar5->forwardVector).y;
          fVar20 = (pVVar5->forwardVector).z;
          if (4 < *(uint *)&pAVar11[1].monitor) {
            pAVar11[5].klass =
                 (Array__Class *)
                 CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar17,
                          (float)(undefined4)uStack_8 * fVar3 + fVar16);
            *(float *)&pAVar11[5].monitor = fVar20 * fVar3 + fVar15 * fVar2 + fVar18;
            if (cVar12 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar12 = '\x01';
              cRam_? = '\x01';
              cVar19 = cRam_?;
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar25 = (pVVar5->rightVector).x;
            uVar26 = (pVVar5->rightVector).y;
            uStack_8._0_4_ = baseCenter->x;
            uStack_8._4_4_ = baseCenter->y;
            fVar15 = (pVVar5->rightVector).z;
            fVar16 = (float)uVar25 * fVar2 + (float)(undefined4)uStack_8;
            fVar17 = (float)uVar26 * fVar2 + (float)uStack_8._4_4_;
            fVar18 = baseCenter->z;
            if (cVar19 == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cVar19 = '\x01';
              cRam_? = '\x01';
              cVar12 = cRam_?;
            }
            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_8._0_4_ = (pVVar5->forwardVector).x;
            uStack_8._4_4_ = (pVVar5->forwardVector).y;
            fVar20 = (pVVar5->forwardVector).z;
            if (5 < *(uint *)&pAVar11[1].monitor) {
              *(ulonglong *)((longlong)&pAVar11[5].monitor + 4) =
                   CONCAT44(fVar17 - (float)uStack_8._4_4_ * fVar3,
                            fVar16 - (float)(undefined4)uStack_8 * fVar3);
              *(float *)((longlong)&pAVar11[6].klass + 4) =
                   (fVar15 * fVar2 + fVar18) - fVar20 * fVar3;
              if (6 < *(uint *)&pAVar11[1].monitor) {
                pAVar11[6].monitor = (MonitorData *)CONCAT44(fVar10,fVar9);
                *(float *)&pAVar11[7].klass = fVar4;
                if (cVar12 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cVar12 = '\x01';
                  cRam_? = '\x01';
                  cVar19 = cRam_?;
                }
                pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar27 = (pVVar5->rightVector).x;
                uVar28 = (pVVar5->rightVector).y;
                uStack_8._0_4_ = baseCenter->x;
                uStack_8._4_4_ = baseCenter->y;
                fVar15 = baseCenter->z;
                fVar16 = (float)(undefined4)uStack_8 - (float)uVar27 * fVar2;
                fVar18 = (pVVar5->rightVector).z;
                fVar17 = (float)uStack_8._4_4_ - (float)uVar28 * fVar2;
                if (cVar19 == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cVar19 = '\x01';
                  cRam_? = '\x01';
                  cVar12 = cRam_?;
                }
                pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_8._0_4_ = (pVVar5->forwardVector).x;
                uStack_8._4_4_ = (pVVar5->forwardVector).y;
                fVar20 = (pVVar5->forwardVector).z;
                if (7 < *(uint *)&pAVar11[1].monitor) {
                  *(ulonglong *)((longlong)&pAVar11[7].klass + 4) =
                       CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar17,
                                (float)(undefined4)uStack_8 * fVar3 + fVar16);
                  *(float *)((longlong)&pAVar11[7].monitor + 4) =
                       fVar20 * fVar3 + (fVar15 - fVar18 * fVar2);
                  if (cVar12 == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cVar12 = '\x01';
                    cRam_? = '\x01';
                    cVar19 = cRam_?;
                  }
                  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar29 = (pVVar5->rightVector).x;
                  uVar30 = (pVVar5->rightVector).y;
                  uStack_8._0_4_ = baseCenter->x;
                  uStack_8._4_4_ = baseCenter->y;
                  fVar15 = (pVVar5->rightVector).z;
                  fVar16 = (float)uVar29 * fVar2 + (float)(undefined4)uStack_8;
                  fVar17 = (float)uVar30 * fVar2 + (float)uStack_8._4_4_;
                  fVar18 = baseCenter->z;
                  if (cVar19 == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cVar19 = '\x01';
                    cRam_? = '\x01';
                    cVar12 = cRam_?;
                  }
                  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uStack_8._0_4_ = (pVVar5->forwardVector).x;
                  uStack_8._4_4_ = (pVVar5->forwardVector).y;
                  fVar20 = (pVVar5->forwardVector).z;
                  if (8 < *(uint *)&pAVar11[1].monitor) {
                    pAVar11[8].klass =
                         (Array__Class *)
                         CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar17,
                                  (float)(undefined4)uStack_8 * fVar3 + fVar16);
                    *(float *)&pAVar11[8].monitor = fVar20 * fVar3 + fVar15 * fVar2 + fVar18;
                    if (9 < *(uint *)&pAVar11[1].monitor) {
                      *(ulonglong *)((longlong)&pAVar11[8].monitor + 4) = CONCAT44(fVar10,fVar9);
                      *(float *)((longlong)&pAVar11[9].klass + 4) = fVar4;
                      if (cVar12 == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cVar12 = '\x01';
                        cRam_? = '\x01';
                        cVar19 = cRam_?;
                      }
                      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uVar31 = (pVVar5->rightVector).x;
                      uVar32 = (pVVar5->rightVector).y;
                      uStack_8._0_4_ = baseCenter->x;
                      uStack_8._4_4_ = baseCenter->y;
                      fVar4 = baseCenter->z;
                      fVar15 = (float)(undefined4)uStack_8 - (float)uVar31 * fVar2;
                      fVar10 = (pVVar5->rightVector).z;
                      fVar9 = (float)uStack_8._4_4_ - (float)uVar32 * fVar2;
                      if (cVar19 == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cVar19 = '\x01';
                        cRam_? = '\x01';
                        cVar12 = cRam_?;
                      }
                      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uStack_8._0_4_ = (pVVar5->forwardVector).x;
                      uStack_8._4_4_ = (pVVar5->forwardVector).y;
                      fVar18 = (pVVar5->forwardVector).z;
                      if (10 < *(uint *)&pAVar11[1].monitor) {
                        pAVar11[9].monitor =
                             (MonitorData *)
                             CONCAT44(fVar9 - (float)uStack_8._4_4_ * fVar3,
                                      fVar15 - (float)(undefined4)uStack_8 * fVar3);
                        *(float *)&pAVar11[10].klass = (fVar4 - fVar10 * fVar2) - fVar18 * fVar3;
                        if (cVar12 == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cVar12 = '\x01';
                          cRam_? = '\x01';
                          cVar19 = cRam_?;
                        }
                        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar33 = (pVVar5->rightVector).x;
                        uVar34 = (pVVar5->rightVector).y;
                        uStack_8._0_4_ = baseCenter->x;
                        uStack_8._4_4_ = baseCenter->y;
                        fVar4 = baseCenter->z;
                        fVar15 = (float)(undefined4)uStack_8 - (float)uVar33 * fVar2;
                        fVar10 = (pVVar5->rightVector).z;
                        fVar9 = (float)uStack_8._4_4_ - (float)uVar34 * fVar2;
                        if (cVar19 == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cVar19 = '\x01';
                          cRam_? = '\x01';
                          cVar12 = cRam_?;
                        }
                        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uStack_8._0_4_ = (pVVar5->forwardVector).x;
                        uStack_8._4_4_ = (pVVar5->forwardVector).y;
                        fVar18 = (pVVar5->forwardVector).z;
                        if (0xb < *(uint *)&pAVar11[1].monitor) {
                          *(ulonglong *)((longlong)&pAVar11[10].klass + 4) =
                               CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar9,
                                        (float)(undefined4)uStack_8 * fVar3 + fVar15);
                          *(float *)((longlong)&pAVar11[10].monitor + 4) =
                               fVar18 * fVar3 + (fVar4 - fVar10 * fVar2);
                          if (cVar12 == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cVar12 = '\x01';
                            cRam_? = '\x01';
                            cVar19 = cRam_?;
                          }
                          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uVar35 = (pVVar5->rightVector).x;
                          uVar36 = (pVVar5->rightVector).y;
                          uStack_8._0_4_ = baseCenter->x;
                          uStack_8._4_4_ = baseCenter->y;
                          fVar4 = baseCenter->z;
                          fVar15 = (float)(undefined4)uStack_8 - (float)uVar35 * fVar2;
                          fVar10 = (pVVar5->rightVector).z;
                          fVar9 = (float)uStack_8._4_4_ - (float)uVar36 * fVar2;
                          if (cVar19 == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cVar19 = '\x01';
                            cRam_? = '\x01';
                            cVar12 = cRam_?;
                          }
                          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uStack_8._0_4_ = (pVVar5->forwardVector).x;
                          uStack_8._4_4_ = (pVVar5->forwardVector).y;
                          fVar18 = (pVVar5->forwardVector).z;
                          if (0xc < *(uint *)&pAVar11[1].monitor) {
                            pAVar11[0xb].klass =
                                 (Array__Class *)
                                 CONCAT44(fVar9 - (float)uStack_8._4_4_ * fVar3,
                                          fVar15 - (float)(undefined4)uStack_8 * fVar3);
                            *(float *)&pAVar11[0xb].monitor =
                                 (fVar4 - fVar10 * fVar2) - fVar18 * fVar3;
                            if (cVar12 == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cVar12 = '\x01';
                              cRam_? = '\x01';
                              cVar19 = cRam_?;
                            }
                            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar37 = (pVVar5->rightVector).x;
                            uVar38 = (pVVar5->rightVector).y;
                            uStack_8._0_4_ = baseCenter->x;
                            uStack_8._4_4_ = baseCenter->y;
                            fVar4 = (pVVar5->rightVector).z;
                            fVar15 = (float)uVar37 * fVar2 + (float)(undefined4)uStack_8;
                            fVar9 = (float)uVar38 * fVar2 + (float)uStack_8._4_4_;
                            fVar10 = baseCenter->z;
                            if (cVar19 == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cVar19 = '\x01';
                              cRam_? = '\x01';
                              cVar12 = cRam_?;
                            }
                            pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uStack_8._0_4_ = (pVVar5->forwardVector).x;
                            uStack_8._4_4_ = (pVVar5->forwardVector).y;
                            fVar18 = (pVVar5->forwardVector).z;
                            if (0xd < *(uint *)&pAVar11[1].monitor) {
                              *(ulonglong *)((longlong)&pAVar11[0xb].monitor + 4) =
                                   CONCAT44(fVar9 - (float)uStack_8._4_4_ * fVar3,
                                            fVar15 - (float)(undefined4)uStack_8 * fVar3);
                              *(float *)((longlong)&pAVar11[0xc].klass + 4) =
                                   (fVar4 * fVar2 + fVar10) - fVar18 * fVar3;
                              if (cVar12 == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cVar12 = '\x01';
                                cRam_? = '\x01';
                                cVar19 = cRam_?;
                              }
                              pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar39 = (pVVar5->rightVector).x;
                              uVar40 = (pVVar5->rightVector).y;
                              uStack_8._0_4_ = baseCenter->x;
                              uStack_8._4_4_ = baseCenter->y;
                              fVar4 = (pVVar5->rightVector).z;
                              fVar15 = (float)uVar39 * fVar2 + (float)(undefined4)uStack_8;
                              fVar9 = (float)uVar40 * fVar2 + (float)uStack_8._4_4_;
                              fVar10 = baseCenter->z;
                              if (cVar19 == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cVar19 = '\x01';
                                cRam_? = '\x01';
                                cVar12 = cRam_?;
                              }
                              pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uStack_8._0_4_ = (pVVar5->forwardVector).x;
                              uStack_8._4_4_ = (pVVar5->forwardVector).y;
                              fVar18 = (pVVar5->forwardVector).z;
                              if (0xe < *(uint *)&pAVar11[1].monitor) {
                                pAVar11[0xc].monitor =
                                     (MonitorData *)
                                     CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar9,
                                              (float)(undefined4)uStack_8 * fVar3 + fVar15);
                                *(float *)&pAVar11[0xd].klass =
                                     fVar18 * fVar3 + fVar4 * fVar2 + fVar10;
                                if (cVar12 == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                  cVar19 = cRam_?;
                                }
                                pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uVar41 = (pVVar5->rightVector).x;
                                uVar42 = (pVVar5->rightVector).y;
                                uStack_8._0_4_ = baseCenter->x;
                                uStack_8._4_4_ = baseCenter->y;
                                fVar15 = (float)(undefined4)uStack_8 - (float)uVar41 * fVar2;
                                fVar4 = (pVVar5->rightVector).z;
                                fVar10 = baseCenter->z;
                                fVar9 = (float)uStack_8._4_4_ - (float)uVar42 * fVar2;
                                if (cVar19 == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uStack_8._0_4_ = (pVVar5->forwardVector).x;
                                uStack_8._4_4_ = (pVVar5->forwardVector).y;
                                fVar18 = (pVVar5->forwardVector).z;
                                if (0xf < *(uint *)&pAVar11[1].monitor) {
                                  *(ulonglong *)((longlong)&pAVar11[0xd].klass + 4) =
                                       CONCAT44((float)uStack_8._4_4_ * fVar3 + fVar9,
                                                (float)(undefined4)uStack_8 * fVar3 + fVar15);
                                  *(float *)((longlong)&pAVar11[0xd].monitor + 4) =
                                       fVar18 * fVar3 + (fVar10 - fVar4 * fVar2);
                                  indices = (Int32__Array *)
                                            FUN_?(TypeInfo__System__Int32,0x12);
                                  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                                  RuntimeHelpers_InitializeArray_1
                                            ((Array *)indices,
                                             _E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field
                                             ,(MethodInfo *)0x0);
                                  this = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,
                                                                *(undefined4 *)&pAVar11[1].monitor);
                                  fVar2 = _UNK_?;
                                  lVar43 = 0;
                                  uVar1 = 2;
                                  if (indices == (Int32__Array *)0x0) goto code_?;
                                  do {
                                    if ((((uint)indices->max_length <= uVar1 - 2) ||
                                        ((uint)indices->max_length <= uVar1 - 1)) ||
                                       ((uint)indices->max_length <= uVar1))
                                    goto code_?;
                                    uVar44 = *(uint *)((longlong)indices->vector + lVar43 + 4);
                                    lVar45 = (longlong)(int)uVar44;
                                    uVar46 = *(uint *)((longlong)indices->vector + lVar43 + 8);
                                    lVar47 = (longlong)(int)uVar46;
                                    if (*(uint *)&pAVar11[1].monitor <= uVar44)
                                    goto code_?;
                                    uVar48 = *(uint *)((longlong)indices->vector + lVar43);
                                    lVar49 = (longlong)(int)uVar48;
                                    if (*(uint *)&pAVar11[1].monitor <= uVar48)
                                    goto code_?;
                                    uVar50 = *(undefined8 *)
                                              ((longlong)&pAVar11[2].klass + lVar49 * 0xc);
                                    fVar10 = (float)*(undefined8 *)
                                                     ((longlong)&pAVar11[2].klass + lVar45 * 0xc) -
                                             (float)uVar50;
                                    fVar4 = *(float *)((longlong)&pAVar11[2].monitor + lVar45 * 0xc
                                                       ) -
                                             *(float *)((longlong)&pAVar11[2].monitor + lVar49 * 0xc
                                                       );
                                    fVar3 = (float)((ulonglong)
                                                     *(undefined8 *)
                                                      ((longlong)&pAVar11[2].klass + lVar45 * 0xc)
                                                    >> 0x20) - (float)((ulonglong)uVar50 >> 0x20);
                                    if ((*(uint *)&pAVar11[1].monitor <= uVar46) ||
                                       (*(uint *)&pAVar11[1].monitor <= uVar48))
                                    goto code_?;
                                    uVar50 = *(undefined8 *)
                                              ((longlong)&pAVar11[2].klass + lVar49 * 0xc);
                                    fVar18 = (float)*(undefined8 *)
                                                     ((longlong)&pAVar11[2].klass + lVar47 * 0xc) -
                                             (float)uVar50;
                                    fVar9 = *(float *)((longlong)&pAVar11[2].monitor + lVar47 * 0xc
                                                       ) -
                                             *(float *)((longlong)&pAVar11[2].monitor + lVar49 * 0xc
                                                       );
                                    fVar15 = *(float *)((longlong)&pAVar11[2].klass +
                                                       lVar47 * 0xc + 4) -
                                             (float)((ulonglong)uVar50 >> 0x20);
                                    fVar17 = fVar3 * fVar9 - fVar4 * fVar15;
                                    fVar3 = fVar10 * fVar15 - fVar3 * fVar18;
                                    fVar10 = fVar4 * fVar18 - fVar10 * fVar9;
                                    uStack_8 = CONCAT44(fVar10,fVar17);
                                    fStack_51 = fVar3;
                                    fVar4 = (float)FUN_?(&uStack_8);
                                    if (fVar2 < fVar4) {
                                      fVar3 = fVar3 / fVar4;
                                      uStack_52 = CONCAT44(fVar10 / fVar4,fVar17 / fVar4);
                                    }
                                    else {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      uStack_52._0_4_ = (pVVar5->zeroVector).x;
                                      uStack_52._4_4_ = (pVVar5->zeroVector).y;
                                      fVar3 = (pVVar5->zeroVector).z;
                                    }
                                    if (this == (Array *)0x0) goto code_?;
                                    if (*(uint *)&this[1].monitor <= uVar48)
                                    goto code_?;
                                    *(undefined8 *)((longlong)&this[2].klass + lVar49 * 0xc) =
                                         uStack_52;
                                    *(float *)((longlong)&this[2].monitor + lVar49 * 0xc) = fVar3;
                                    if (*(uint *)&this[1].monitor <= uVar44)
                                    goto code_?;
                                    *(undefined8 *)((longlong)&this[2].klass + lVar45 * 0xc) =
                                         uStack_52;
                                    *(float *)((longlong)&this[2].monitor + lVar45 * 0xc) = fVar3;
                                    if (*(uint *)&this[1].monitor <= uVar46)
                                    goto code_?;
                                    uVar1 = uVar1 + 3;
                                    lVar43 = lVar43 + 0xc;
                                    *(undefined8 *)
                                     ((longlong)&this[2].klass + (longlong)(int)uVar46 * 0xc) =
                                         uStack_52;
                                    *(float *)((longlong)&this[2].monitor +
                                              (longlong)(int)uVar46 * 0xc) = fVar3;
                                  } while ((int)uVar1 < 0xe);
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  cVar12 = cRam_?;
                                  uVar1 = _UNK_?;
                                  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  iVar53 = *(int *)&this[1].monitor;
                                  uVar54 = (pVVar5->upVector).x;
                                  uVar44 = (uint)(pVVar5->upVector).z ^ _UNK_?;
                                  if (iVar53 - 4U < *(uint *)&this[1].monitor) {
                                    *(ulonglong *)
                                     ((longlong)&this[-1].klass + (longlong)iVar53 * 0xc) =
                                         CONCAT44((uint)(pVVar5->upVector).y ^ _UNK_?,
                                                  uVar54 ^ _UNK_?);
                                    *(uint *)((longlong)&this[-1].monitor + (longlong)iVar53 * 0xc)
                                         = uVar44;
                                    if (cVar12 == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                                      LOCK();
                                      UNLOCK();
                                      cVar12 = '\x01';
                                      cRam_? = '\x01';
                                    }
                                    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    iVar53 = *(int *)&this[1].monitor;
                                    uVar55 = (pVVar5->upVector).x;
                                    fVar2 = (pVVar5->upVector).z;
                                    if (iVar53 - 3U < *(uint *)&this[1].monitor) {
                                      *(ulonglong *)
                                       ((longlong)&this[-1].monitor + (longlong)iVar53 * 0xc + 4) =
                                           CONCAT44((uint)(pVVar5->upVector).y ^ uVar1,
                                                    uVar55 ^ uVar1);
                                      *(uint *)((longlong)&this->klass + (longlong)iVar53 * 0xc + 4)
                                           = (uint)fVar2 ^ uVar1;
                                      if (cVar12 == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cVar12 = '\x01';
                                        cRam_? = '\x01';
                                      }
                                      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      iVar53 = *(int *)&this[1].monitor;
                                      uVar56 = (pVVar5->upVector).x;
                                      fVar2 = (pVVar5->upVector).z;
                                      if (iVar53 - 2U < *(uint *)&this[1].monitor) {
                                        *(ulonglong *)
                                         ((longlong)&this->monitor + (longlong)iVar53 * 0xc) =
                                             CONCAT44((uint)(pVVar5->upVector).y ^ uVar1,
                                                      uVar56 ^ uVar1);
                                        *(uint *)((longlong)&this[1].klass + (longlong)iVar53 * 0xc)
                                             = (uint)fVar2 ^ uVar1;
                                        if (cVar12 == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        iVar53 = *(int *)&this[1].monitor;
                                        uVar57 = (pVVar5->upVector).x;
                                        fVar2 = (pVVar5->upVector).z;
                                        if (iVar53 - 1U < *(uint *)&this[1].monitor) {
                                          *(ulonglong *)
                                           ((longlong)&this[1].klass + (longlong)iVar53 * 0xc + 4) =
                                               CONCAT44((uint)(pVVar5->upVector).y ^ uVar1,
                                                        uVar57 ^ uVar1);
                                          *(uint *)((longlong)&this[1].monitor +
                                                   (longlong)iVar53 * 0xc + 4) =
                                               (uint)fVar2 ^ uVar1;
                                          pMVar58 = (Mesh *)FUN_?(
                                                  TypeInfo__UnityEngine__Mesh);
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Object);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                       field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          pcVar59 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) &&
                                             (pcVar59 = (code *)FUN_?(&UNK_?),
                                             pcVar59 == (code *)0x0)) {
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
                                            FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          iVar60 = mscorlib.dll::System::Array::Array_get_Length
                                                             (pAVar11,(MethodInfo *)0x0);
                                          uVar61 = 0;
                                          valuesArrayLength = 0;
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_SetSizedArrayForChannel
                                                    (pMVar58,VertexAttribute__Enum_Position,
                                                     VertexAttributeFormat__Enum_Float32,3,pAVar11,
                                                     iVar60,0,iVar60,MeshUpdateFlags__Enum_Default,
                                                     (MethodInfo *)0x0);
                                          iVar53 = *(int *)&pAVar11[1].monitor;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__UnityEngine__Color);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pAVar11 = (Array *)FUN_?(
                                                  TypeInfo__UnityEngine__Color);
                                          if (0 < iVar53) {
                                            pAVar62 = pAVar11 + 2;
                                            uVar63 = uVar61;
                                            if (pAVar11 == (Array *)0x0) goto code_?;
                                            do {
                                              if (*(uint *)&pAVar11[1].monitor <= (uint)uVar61)
                                              goto code_?;
                                              fVar2 = color->g;
                                              fVar3 = color->b;
                                              fVar4 = color->a;
                                              uVar61 = (ulonglong)((uint)uVar61 + 1);
                                              uVar63 = uVar63 + 1;
                                              *(float *)&pAVar62->klass = color->r;
                                              *(float *)((longlong)&pAVar62->klass + 4) = fVar2;
                                              *(float *)&pAVar62->monitor = fVar3;
                                              *(float *)((longlong)&pAVar62->monitor + 4) = fVar4;
                                              pAVar62 = pAVar62 + 1;
                                            } while ((longlong)uVar63 < (longlong)iVar53);
                                          }
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (pAVar11 != (Array *)0x0) {
                                            valuesArrayLength =
                                                 mscorlib.dll::System::Array::Array_get_Length
                                                           (pAVar11,(MethodInfo *)0x0);
                                          }
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_SetSizedArrayForChannel
                                                    (pMVar58,VertexAttribute__Enum_Color,
                                                     VertexAttributeFormat__Enum_Float32,4,pAVar11,
                                                     valuesArrayLength,0,valuesArrayLength,
                                                     MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0
                                                    );
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          iVar60 = mscorlib.dll::System::Array::Array_get_Length
                                                             (this,(MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_SetSizedArrayForChannel
                                                    (pMVar58,VertexAttribute__Enum_Normal,
                                                     VertexAttributeFormat__Enum_Float32,3,this,
                                                     iVar60,0,iVar60,MeshUpdateFlags__Enum_Default,
                                                     (MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_SetIndices(pMVar58,indices,
                                                          MeshTopology__Enum_Triangles,0,
                                                          (MethodInfo *)0x0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_UploadMeshData(pMVar58,0,(MethodInfo *)0x0);
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

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreateWirePyramid
                 (Vector3 *baseCenter,float baseWidth,float baseDepth,float height,Color *color,
                 MethodInfo *method)

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
  uVar1 = (uint)_UNK_?;
  fVar2 = (float)((uint)baseWidth & uVar1);
  if ((float)((uint)baseWidth & uVar1) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = (float)((uint)baseDepth & uVar1);
  if ((float)((uint)baseDepth & uVar1) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar4 = (float)((uint)height & uVar1);
  if ((float)((uint)height & uVar1) <= _UNK_?) {
    fVar4 = _UNK_?;
  }
  fVar2 = fVar2 * _UNK_?;
  fVar3 = fVar3 * _UNK_?;
  pAVar5 = (Array *)FUN_?(TypeInfo__UnityEngine__Vector3,5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->rightVector).x;
  uVar8 = baseCenter->x;
  fVar9 = (pVVar6->rightVector).y;
  fVar10 = baseCenter->y;
  fVar11 = baseCenter->z;
  fVar12 = (pVVar6->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar13 = cRam_?;
  cVar14 = cRam_?;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15 = (pVVar6->forwardVector).x;
  fVar16 = (pVVar6->forwardVector).z;
  if (pAVar5 == (Array *)0x0) goto code_?;
  if (*(int *)&pAVar5[1].monitor != 0) {
    pAVar5[2].klass =
         (Array__Class *)
         CONCAT44((fVar10 - fVar9 * fVar2) - (pVVar6->forwardVector).y * fVar3,
                  ((float)uVar8 - (float)uVar7 * fVar2) - (float)uVar15 * fVar3);
    *(float *)&pAVar5[2].monitor = (fVar11 - fVar12 * fVar2) - fVar16 * fVar3;
    if (cVar13 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar13 = '\x01';
      cRam_? = '\x01';
      cVar14 = cRam_?;
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = baseCenter->x;
    uVar18 = baseCenter->y;
    uVar19 = (pVVar6->rightVector).x;
    fVar9 = (pVVar6->rightVector).y;
    fVar10 = (pVVar6->rightVector).z;
    fVar11 = baseCenter->z;
    if (cVar14 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar14 = '\x01';
      cRam_? = '\x01';
      cVar13 = cRam_?;
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20 = (pVVar6->forwardVector).x;
    fVar12 = (pVVar6->forwardVector).z;
    if (1 < *(uint *)&pAVar5[1].monitor) {
      *(ulonglong *)((longlong)&pAVar5[2].monitor + 4) =
           CONCAT44((fVar9 * fVar2 + (float)uVar18) - (pVVar6->forwardVector).y * fVar3,
                    ((float)uVar19 * fVar2 + (float)uVar17) - (float)uVar20 * fVar3);
      *(float *)((longlong)&pAVar5[3].klass + 4) = (fVar10 * fVar2 + fVar11) - fVar12 * fVar3;
      if (cVar13 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar13 = '\x01';
        cRam_? = '\x01';
        cVar14 = cRam_?;
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar21 = baseCenter->x;
      uVar22 = baseCenter->y;
      uVar23 = (pVVar6->rightVector).x;
      fVar9 = (pVVar6->rightVector).y;
      fVar10 = (pVVar6->rightVector).z;
      fVar11 = baseCenter->z;
      if (cVar14 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar14 = '\x01';
        cRam_? = '\x01';
        cVar13 = cRam_?;
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar24 = (pVVar6->forwardVector).x;
      fVar12 = (pVVar6->forwardVector).z;
      if (2 < *(uint *)&pAVar5[1].monitor) {
        pAVar5[3].monitor =
             (MonitorData *)
             CONCAT44((pVVar6->forwardVector).y * fVar3 + fVar9 * fVar2 + (float)uVar22,
                      (float)uVar24 * fVar3 + (float)uVar23 * fVar2 + (float)uVar21);
        *(float *)&pAVar5[4].klass = fVar12 * fVar3 + fVar10 * fVar2 + fVar11;
        if (cVar13 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar14 = cRam_?;
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar25 = (pVVar6->rightVector).x;
        uVar26 = baseCenter->x;
        fVar9 = (pVVar6->rightVector).y;
        fVar10 = baseCenter->y;
        fVar11 = (pVVar6->rightVector).z;
        fVar12 = baseCenter->z;
        if (cVar14 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar27 = (pVVar6->forwardVector).x;
        fVar16 = (pVVar6->forwardVector).z;
        if (3 < *(uint *)&pAVar5[1].monitor) {
          bVar28 = cRam_? == '\0';
          *(ulonglong *)((longlong)&pAVar5[4].klass + 4) =
               CONCAT44((pVVar6->forwardVector).y * fVar3 + (fVar10 - fVar9 * fVar2),
                        (float)uVar27 * fVar3 + ((float)uVar26 - (float)uVar25 * fVar2));
          *(float *)((longlong)&pAVar5[4].monitor + 4) = fVar16 * fVar3 + (fVar12 - fVar11 * fVar2);
          if (bVar28) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar29 = (pVVar6->upVector).x;
          uVar30 = (pVVar6->upVector).y;
          uVar31 = baseCenter->x;
          uVar32 = baseCenter->y;
          fVar2 = (pVVar6->upVector).z;
          fVar3 = baseCenter->z;
          if (4 < *(uint *)&pAVar5[1].monitor) {
            pAVar5[5].klass =
                 (Array__Class *)
                 CONCAT44(fVar4 * (float)uVar30 + (float)uVar32,
                          fVar4 * (float)uVar29 + (float)uVar31);
            *(float *)&pAVar5[5].monitor = fVar4 * fVar2 + fVar3;
            indices = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x10);
            mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
            RuntimeHelpers_InitializeArray_1
                      ((Array *)indices,
                       __17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field,
                       (MethodInfo *)0x0);
            pMVar33 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar33,(MethodInfo *)0x0);
            if (pMVar33 == (Mesh *)0x0) {
code_?:
              FUN_?();
              pcVar34 = (code *)swi(3);
              pMVar33 = (Mesh *)(*pcVar34)();
              return pMVar33;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            valuesArrayLength =
                 mscorlib.dll::System::Array::Array_get_Length(pAVar5,(MethodInfo *)0x0);
            uVar35 = 0;
            valuesArrayLength_00 = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar33,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                       pAVar5,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                       (MethodInfo *)0x0);
            iVar36 = *(int *)&pAVar5[1].monitor;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Color);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar5 = (Array *)FUN_?(TypeInfo__UnityEngine__Color);
            if (0 < iVar36) {
              pAVar37 = pAVar5 + 2;
              uVar38 = uVar35;
              if (pAVar5 == (Array *)0x0) goto code_?;
              do {
                if (*(uint *)&pAVar5[1].monitor <= (uint)uVar35) goto code_?;
                fVar2 = color->g;
                fVar3 = color->b;
                fVar4 = color->a;
                uVar35 = (ulonglong)((uint)uVar35 + 1);
                uVar38 = uVar38 + 1;
                *(float *)&pAVar37->klass = color->r;
                *(float *)((longlong)&pAVar37->klass + 4) = fVar2;
                *(float *)&pAVar37->monitor = fVar3;
                *(float *)((longlong)&pAVar37->monitor + 4) = fVar4;
                pAVar37 = pAVar37 + 1;
              } while ((longlong)uVar38 < (longlong)iVar36);
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pAVar5 != (Array *)0x0) {
              valuesArrayLength_00 =
                   mscorlib.dll::System::Array::Array_get_Length(pAVar5,(MethodInfo *)0x0);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                      (pMVar33,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,
                       pAVar5,valuesArrayLength_00,0,valuesArrayLength_00,
                       MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                      (pMVar33,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                      (pMVar33,0,(MethodInfo *)0x0);
            return pMVar33;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar34 = (code *)swi(3);
  pMVar33 = (Mesh *)(*pcVar34)();
  return pMVar33;
}

