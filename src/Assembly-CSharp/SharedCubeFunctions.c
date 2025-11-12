
/* Void AddCubeLine(Mesh, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
               (Mesh *mesh,Vector3 *p0,Vector3 *p1,float diagonalWidth,MethodInfo *method)

{
  PStack_1._arg2 = (Object *)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  PStack_1._args = (Object__Array *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = p1->x;
  uVar3 = p1->y;
  uStackY_138._0_4_ = p0->x;
  uStackY_138._4_4_ = p0->y;
  fVar4 = diagonalWidth * _UNK_?;
  fVar5 = (float)uVar2 - (float)uStackY_138;
  fVar6 = p1->z - p0->z;
  fVar7 = (float)uVar3 - uStackY_138._4_4_;
  uStackY_118 = CONCAT44(fVar7,fVar5);
  fStackY_110 = fVar6;
  fVar8 = (float)FUN_?(&uStackY_118);
  if (_UNK_? < fVar8) {
    fVar6 = fVar6 / fVar8;
    uStackY_118 = CONCAT44(fVar7 / fVar8,fVar5 / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStackY_118._0_4_ = (pVVar9->zeroVector).x;
    uStackY_118._4_4_ = (pVVar9->zeroVector).y;
    fVar6 = (pVVar9->zeroVector).z;
  }
  fVar8 = (float)uStackY_118;
  fVar7 = uStackY_118._4_4_;
  uVar10 = p0->x;
  uVar11 = p0->y;
  fStackY_108 = (float)uVar10 - (float)uStackY_118 * fVar4;
  uVar12 = CONCAT44(uVar11,(float)uVar11 - uStackY_118._4_4_ * fVar4);
  fStackY_104 = p0->z - fVar6 * fVar4;
  uVar13 = p1->x;
  uVar14 = p1->y;
  fStackY_100 = (float)uStackY_118 * fVar4 + (float)uVar13;
  fStackY_fc = uStackY_118._4_4_ * fVar4 + (float)uVar14;
  fStackY_f8 = fVar6 * fVar4 + p1->z;
  uStackY_e8 = uStackY_118 & 0xffffffff;
  uStackY_138 = uStackY_118;
  fStackY_130 = fVar6;
  uStackY_118 = uVar12;
  fStackY_e0 = fVar6;
  fVar15 = (float)FUN_?(&uStackY_138,&uStackY_e8);
  fVar5 = (float)((uint)fVar15 ^ _UNK_?);
  if (fVar7 < 0.0) {
    fVar5 = fVar15;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStackY_138._0_4_ = (pVVar9->forwardVector).x;
  uStackY_138._4_4_ = (pVVar9->forwardVector).y;
  fVar7 = (pVVar9->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12._0_4_ = (pVVar9->upVector).x;
  uVar12._4_4_ = (pVVar9->upVector).y;
  fVar15 = (float)uStackY_138 * fVar6;
  fVar16 = uStackY_138._4_4_ * fVar6;
  fVar17 = uStackY_138._4_4_ * 0.0;
  fVar18 = uStackY_138._4_4_ * fVar8;
  fVar19 = (float)uStackY_138 * fVar8;
  fVar20 = (float)uStackY_138 * 0.0;
  uStackY_138 = uVar12;
  fVar8 = (float)func_?((fVar7 * fVar8 - fVar15) * (float)uVar12._4_4_ +
                                      (fVar16 - fVar7 * 0.0) * (float)(undefined4)uVar12 +
                                      (fVar20 - fVar18) * (pVVar9->upVector).z,
                                      fVar19 + fVar17 + fVar7 * fVar6);
  fVar6 = _UNK_?;
  fVar8 = fVar8 * _UNK_?;
  fStackY_130 = 0.0;
  uStackY_138 = (ulonglong)(uint)(fVar5 * _UNK_?);
  uStackY_c8 = 0;
  uStackY_c0 = 0;
  pcVar21 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pcRam_? = pcVar21;
  (*pcRam_?)(&uStackY_138,&uStackY_c8);
  uStackY_e8 = (ulonglong)(uint)(fVar8 * fVar6) << 0x20;
  fStackY_e0 = 0.0;
  uStackY_d8 = 0;
  uStackY_d0 = 0;
  pcVar21 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pcRam_? = pcVar21;
  (*pcRam_?)(&uStackY_e8,&uStackY_d8);
  fVar8 = ((float)uStackY_d8 * uStackY_c0._4_4_ + uStackY_d0._4_4_ * (float)uStackY_c8 +
           uStackY_d8._4_4_ * (float)uStackY_c0) - (float)uStackY_d0 * uStackY_c8._4_4_;
  fVar5 = (uStackY_d8._4_4_ * uStackY_c0._4_4_ + uStackY_d0._4_4_ * uStackY_c8._4_4_ +
           (float)uStackY_d0 * (float)uStackY_c8) - (float)uStackY_d8 * (float)uStackY_c0;
  fVar6 = ((float)uStackY_d0 * uStackY_c0._4_4_ + uStackY_d0._4_4_ * (float)uStackY_c0 +
           (float)uStackY_d8 * uStackY_c8._4_4_) - uStackY_d8._4_4_ * (float)uStackY_c8;
  fVar7 = ((uStackY_d0._4_4_ * uStackY_c0._4_4_ - (float)uStackY_d8 * (float)uStackY_c8) -
           uStackY_d8._4_4_ * uStackY_c8._4_4_) - (float)uStackY_d0 * (float)uStackY_c0;
  lVar22 = FUN_?(TypeInfo__UnityEngine__Vector3,4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar23 = fVar6 + fVar6;
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar17 = fVar5 + fVar5;
  uStackY_138._0_4_ = (pVVar9->downVector).x;
  uStackY_138._4_4_ = (pVVar9->downVector).y;
  fVar20 = fVar8 * (fVar8 + fVar8);
  fVar24 = fVar7 * (fVar8 + fVar8);
  fVar19 = (_UNK_? - (fVar6 * fVar23 + fVar5 * fVar17)) * (float)uStackY_138;
  fVar18 = (fVar8 * fVar17 - fVar7 * fVar23) * uStackY_138._4_4_;
  fVar25 = (fVar7 * fVar23 + fVar8 * fVar17) * (float)uStackY_138;
  fVar15 = (pVVar9->downVector).z;
  fVar16 = (_UNK_? - (fVar6 * fVar23 + fVar20)) * uStackY_138._4_4_;
  fVar26 = (fVar24 + fVar5 * fVar23) * uStackY_138._4_4_;
  fVar20 = _UNK_? - (fVar5 * fVar17 + fVar20);
  fVar27 = (fVar8 * fVar23 - fVar7 * fVar17) * (float)uStackY_138;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar28 = cRam_?;
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar29 = fVar6 + fVar6;
  fVar30 = fVar5 + fVar5;
  uStackY_138._0_4_ = (pVVar9->leftVector).x;
  uStackY_138._4_4_ = (pVVar9->leftVector).y;
  fVar31 = fVar8 * (fVar8 + fVar8);
  fStackY_128 = fVar8 * fVar29;
  fVar32 = fVar7 * (fVar8 + fVar8);
  fVar33 = (pVVar9->leftVector).z;
  fVar34 = _UNK_? - (fVar5 * fVar30 + fVar31);
  if (lVar22 == 0) {
DAT_?:
    FUN_?();
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  if (*(int *)(lVar22 + 0x18) != 0) {
    *(ulonglong *)(lVar22 + 0x20) =
         CONCAT44(((_UNK_? - (fVar6 * fVar29 + fVar31)) * uStackY_138._4_4_ +
                   (fVar7 * fVar29 + fVar8 * fVar30) * (float)uStackY_138 +
                   (fVar5 * fVar29 - fVar32) * fVar33 +
                  fVar16 + fVar25 + (fVar5 * fVar23 - fVar24) * fVar15) * fVar4,
                  ((_UNK_? - (fVar6 * fVar29 + fVar5 * fVar30)) * (float)uStackY_138 +
                   (fVar8 * fVar30 - fVar7 * fVar29) * uStackY_138._4_4_ +
                   (fVar7 * fVar30 + fStackY_128) * fVar33 +
                  fVar19 + fVar18 + (fVar7 * fVar17 + fVar8 * fVar23) * fVar15) * fVar4);
    *(float *)(lVar22 + 0x28) =
         ((fStackY_128 - fVar7 * fVar30) * (float)uStackY_138 +
          (fVar32 + fVar5 * fVar29) * uStackY_138._4_4_ + fVar34 * fVar33 +
         fVar27 + fVar26 + fVar20 * fVar15) * fVar4;
    if (cVar28 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar17 = fVar5 + fVar5;
    fVar23 = fVar6 + fVar6;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStackY_138._0_4_ = (pVVar9->downVector).x;
    uStackY_138._4_4_ = (pVVar9->downVector).y;
    fVar20 = fVar8 * (fVar8 + fVar8);
    fVar24 = fVar7 * (fVar8 + fVar8);
    fVar19 = (_UNK_? - (fVar6 * fVar23 + fVar5 * fVar17)) * (float)uStackY_138;
    fVar18 = (fVar8 * fVar17 - fVar7 * fVar23) * uStackY_138._4_4_;
    fVar25 = (fVar7 * fVar23 + fVar8 * fVar17) * (float)uStackY_138;
    fVar15 = (pVVar9->downVector).z;
    fVar16 = (_UNK_? - (fVar6 * fVar23 + fVar20)) * uStackY_138._4_4_;
    fVar26 = (fVar24 + fVar5 * fVar23) * uStackY_138._4_4_;
    fVar20 = _UNK_? - (fVar5 * fVar17 + fVar20);
    fVar27 = (fVar8 * fVar23 - fVar7 * fVar17) * (float)uStackY_138;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar35 = cRam_?;
    cVar28 = cRam_?;
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar29 = fVar6 + fVar6;
    fVar30 = fVar5 + fVar5;
    uStackY_138._0_4_ = (pVVar9->rightVector).x;
    uStackY_138._4_4_ = (pVVar9->rightVector).y;
    fVar31 = fVar8 * (fVar8 + fVar8);
    fStackY_128 = fVar8 * fVar29;
    fVar32 = fVar7 * (fVar8 + fVar8);
    fVar33 = (pVVar9->rightVector).z;
    fVar34 = _UNK_? - (fVar5 * fVar30 + fVar31);
    if (1 < *(uint *)(lVar22 + 0x18)) {
      *(ulonglong *)(lVar22 + 0x2c) =
           CONCAT44(((_UNK_? - (fVar6 * fVar29 + fVar31)) * uStackY_138._4_4_ +
                     (fVar7 * fVar29 + fVar8 * fVar30) * (float)uStackY_138 +
                     (fVar5 * fVar29 - fVar32) * fVar33 +
                    fVar16 + fVar25 + (fVar5 * fVar23 - fVar24) * fVar15) * fVar4,
                    ((_UNK_? - (fVar6 * fVar29 + fVar5 * fVar30)) * (float)uStackY_138 +
                     (fVar8 * fVar30 - fVar7 * fVar29) * uStackY_138._4_4_ +
                     (fVar7 * fVar30 + fStackY_128) * fVar33 +
                    fVar19 + fVar18 + (fVar7 * fVar17 + fVar8 * fVar23) * fVar15) * fVar4);
      *(float *)(lVar22 + 0x34) =
           ((fStackY_128 - fVar7 * fVar30) * (float)uStackY_138 +
            (fVar32 + fVar5 * fVar29) * uStackY_138._4_4_ + fVar34 * fVar33 +
           fVar27 + fVar26 + fVar20 * fVar15) * fVar4;
      if (cVar28 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cVar28 = '\x01';
        cRam_? = '\x01';
        cVar35 = cRam_?;
      }
      fVar17 = fVar5 + fVar5;
      fVar23 = fVar6 + fVar6;
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStackY_138._0_4_ = (pVVar9->upVector).x;
      uStackY_138._4_4_ = (pVVar9->upVector).y;
      fVar20 = fVar8 * (fVar8 + fVar8);
      fVar24 = fVar7 * (fVar8 + fVar8);
      fVar19 = (_UNK_? - (fVar6 * fVar23 + fVar5 * fVar17)) * (float)uStackY_138;
      fVar18 = (fVar8 * fVar17 - fVar7 * fVar23) * uStackY_138._4_4_;
      fVar25 = (fVar7 * fVar23 + fVar8 * fVar17) * (float)uStackY_138;
      fVar15 = (pVVar9->upVector).z;
      fVar16 = (_UNK_? - (fVar6 * fVar23 + fVar20)) * uStackY_138._4_4_;
      fVar26 = (fVar24 + fVar5 * fVar23) * uStackY_138._4_4_;
      fVar20 = _UNK_? - (fVar5 * fVar17 + fVar20);
      fVar27 = (fVar8 * fVar23 - fVar7 * fVar17) * (float)uStackY_138;
      if (cVar35 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        cVar28 = cRam_?;
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar29 = fVar6 + fVar6;
      fVar30 = fVar5 + fVar5;
      uStackY_138._0_4_ = (pVVar9->rightVector).x;
      uStackY_138._4_4_ = (pVVar9->rightVector).y;
      fVar31 = fVar8 * (fVar8 + fVar8);
      fStackY_128 = fVar8 * fVar29;
      fVar32 = fVar7 * (fVar8 + fVar8);
      fVar33 = (pVVar9->rightVector).z;
      fVar34 = _UNK_? - (fVar5 * fVar30 + fVar31);
      if (2 < *(uint *)(lVar22 + 0x18)) {
        *(ulonglong *)(lVar22 + 0x38) =
             CONCAT44(((_UNK_? - (fVar6 * fVar29 + fVar31)) * uStackY_138._4_4_ +
                       (fVar7 * fVar29 + fVar8 * fVar30) * (float)uStackY_138 +
                       (fVar5 * fVar29 - fVar32) * fVar33 +
                      fVar16 + fVar25 + (fVar5 * fVar23 - fVar24) * fVar15) * fVar4,
                      ((_UNK_? - (fVar6 * fVar29 + fVar5 * fVar30)) * (float)uStackY_138 +
                       (fVar8 * fVar30 - fVar7 * fVar29) * uStackY_138._4_4_ +
                       (fVar7 * fVar30 + fStackY_128) * fVar33 +
                      fVar19 + fVar18 + (fVar7 * fVar17 + fVar8 * fVar23) * fVar15) * fVar4);
        *(float *)(lVar22 + 0x40) =
             ((fStackY_128 - fVar7 * fVar30) * (float)uStackY_138 +
              (fVar32 + fVar5 * fVar29) * uStackY_138._4_4_ + fVar34 * fVar33 +
             fVar27 + fVar26 + fVar20 * fVar15) * fVar4;
        if (cVar28 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar18 = _UNK_?;
        fVar17 = fVar5 + fVar5;
        fVar25 = fVar6 + fVar6;
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStackY_138._0_4_ = (pVVar9->upVector).x;
        uStackY_138._4_4_ = (pVVar9->upVector).y;
        fVar23 = fVar8 * (fVar8 + fVar8);
        fVar20 = fVar7 * (fVar8 + fVar8);
        fVar19 = (_UNK_? - (fVar6 * fVar25 + fVar5 * fVar17)) * (float)uStackY_138;
        fVar16 = (fVar8 * fVar17 - fVar7 * fVar25) * uStackY_138._4_4_;
        fVar15 = (pVVar9->upVector).z;
        fVar27 = (fVar20 + fVar5 * fVar25) * uStackY_138._4_4_;
        fStackY_128 = (_UNK_? - (fVar6 * fVar25 + fVar23)) * uStackY_138._4_4_ +
                      (fVar7 * fVar25 + fVar8 * fVar17) * (float)uStackY_138 +
                      (fVar5 * fVar25 - fVar20) * fVar15;
        fVar20 = _UNK_? - (fVar5 * fVar17 + fVar23);
        fVar23 = (fVar8 * fVar25 - fVar7 * fVar17) * (float)uStackY_138;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar33 = fVar6 + fVar6;
        fVar26 = fVar5 + fVar5;
        uStackY_138._0_4_ = (pVVar9->leftVector).x;
        uStackY_138._4_4_ = (pVVar9->leftVector).y;
        fVar30 = fVar8 * (fVar8 + fVar8);
        fVar34 = fVar7 * (fVar8 + fVar8);
        fVar24 = (pVVar9->leftVector).z;
        if (3 < *(uint *)(lVar22 + 0x18)) {
          *(ulonglong *)(lVar22 + 0x44) =
               CONCAT44(((fVar18 - (fVar6 * fVar33 + fVar30)) * uStackY_138._4_4_ +
                         (fVar7 * fVar33 + fVar8 * fVar26) * (float)uStackY_138 +
                         (fVar5 * fVar33 - fVar34) * fVar24 + fStackY_128) * fVar4,
                        ((fVar18 - (fVar6 * fVar33 + fVar5 * fVar26)) * (float)uStackY_138 +
                         (fVar8 * fVar26 - fVar7 * fVar33) * uStackY_138._4_4_ +
                         (fVar7 * fVar26 + fVar8 * fVar33) * fVar24 +
                        fVar19 + fVar16 + (fVar7 * fVar17 + fVar8 * fVar25) * fVar15) * fVar4);
          *(float *)(lVar22 + 0x4c) =
               ((fVar8 * fVar33 - fVar7 * fVar26) * (float)uStackY_138 +
                (fVar34 + fVar5 * fVar33) * uStackY_138._4_4_ +
                (fVar18 - (fVar5 * fVar26 + fVar30)) * fVar24 + fVar23 + fVar27 + fVar20 * fVar15)
               * fVar4;
          pVVar36 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
          uVar37 = 0;
          pVVar38 = pVVar36->vector;
          uVar39 = uVar37;
          uVar40 = uVar37;
          do {
            uVar41 = (uint)uVar39;
            if (*(uint *)(lVar22 + 0x18) <= uVar41) goto DAT_?;
            uVar12 = *(undefined8 *)((lVar22 - (longlong)pVVar36) + (longlong)pVVar38);
            fVar6 = *(float *)((lVar22 - (longlong)pVVar36) + 8 + (longlong)pVVar38);
            if (pVVar36 == (Vector3__Array *)0x0) goto DAT_?;
            if ((uint)pVVar36->max_length <= uVar41) goto DAT_?;
            uVar39 = (ulonglong)(uVar41 + 1);
            uVar40 = uVar40 + 1;
            pVVar38->x = fStackY_108 + (float)uVar12;
            pVVar38->y = (float)uStackY_118 + (float)((ulonglong)uVar12 >> 0x20);
            pVVar38->z = fStackY_104 + fVar6;
            pVVar38 = pVVar38 + 1;
          } while ((longlong)uVar40 < 4);
          pVVar38 = pVVar36->vector + 4;
          puVar42 = (undefined8 *)(lVar22 + 0x44);
          do {
            iVar43 = (int)uVar37;
            if (*(uint *)(lVar22 + 0x18) <= 3U - iVar43) goto DAT_?;
            uVar12 = *puVar42;
            fVar6 = *(float *)(puVar42 + 1);
            if ((uint)pVVar36->max_length <= iVar43 + 4U) goto DAT_?;
            uVar37 = (ulonglong)(iVar43 + 1U);
            puVar42 = (undefined8 *)((longlong)puVar42 + -0xc);
            pVVar38->x = fStackY_100 + (float)uVar12;
            pVVar38->y = fStackY_fc + (float)((ulonglong)uVar12 >> 0x20);
            pVVar38->z = fStackY_f8 + fVar6;
            pVVar38 = pVVar38 + 1;
          } while ((int)(iVar43 + 1U) < 4);
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                          ,pVVar36,0,0);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                         );
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
            LOCK();
            UNLOCK();
            puStackY_a0 = &UNK_?;
            FUN_?(&TypeInfo__SharedCubeFunctions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          PStack_1._arg0 = PStack_1._arg2;
          PStack_1._arg1 = (Object *)PStack_1._args;
          if (mesh != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              puStackY_a0 = &UNK_?;
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar44 = (mesh->fields)._.m_CachedPtr;
            if (pvVar44 == (void *)0x0) {
              puStackY_a0 = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
            pcVar21 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              puStackY_a0 = &UNK_?;
              pcVar21 = (code *)FUN_?(&UNK_?);
              if (pcVar21 == (code *)0x0) {
                puStackY_a0 = &UNK_?;
                uVar12 = func_?(&UNK_?);
                puStackY_a0 = &UNK_?;
                FUN_?(uVar12,0);
                pcVar21 = (code *)swi(3);
                (*pcVar21)();
                return;
              }
            }
            pcRam_? = pcVar21;
            puStackY_a0 = &UNK_?;
            iVar43 = (*pcRam_?)(pvVar44);
            if (iVar43 == 0) {
              puStackY_a0 = &UNK_?;
              this = (List_1_System_Int32_ *)
                     FUN_?(TypeInfo__System__Collections__Generic__List<int>);
              puStackY_a0 = &UNK_?;
              FUN_?(this);
            }
            else {
              puStackY_a0 = &UNK_?;
              pIVar45 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                                  (mesh,(MethodInfo *)0x0);
              puStackY_a0 = &UNK_?;
              this = (List_1_System_Int32_ *)
                     FUN_?(TypeInfo__System__Collections__Generic__List<int>);
              puStackY_a0 = &UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32___ctor_1
                        (this,(IEnumerable_1_System_Int32_ *)pIVar45,
                         MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                        );
            }
            puStackY_a0 = &UNK_?;
            collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv
                                   (mesh,(MethodInfo *)0x0);
            puStackY_a0 = &UNK_?;
            this_00 = (List_1_UnityEngine_Vector2_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                   );
            puStackY_a0 = &UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2___ctor_1
                      (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                      );
            puStackY_a0 = &UNK_?;
            collection_00 =
                 UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                           (mesh,(MethodInfo *)0x0);
            puStackY_a0 = &UNK_?;
            this_01 = (List_1_UnityEngine_Vector3_ *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                   );
            puStackY_a0 = &UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
            List_1_UnityEngine_Vector3___ctor_1
                      (this_01,(IEnumerable_1_UnityEngine_Vector3_ *)collection_00,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                      );
            if (this_01 != (List_1_UnityEngine_Vector3_ *)0x0) {
              iVar43 = (this_01->fields)._size;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                puStackY_a0 = &UNK_?;
                FUN_?();
              }
              puStackY_a0 = &UNK_?;
              pVVar36 = SharedCubeFunctions_GetVertices_1(pVVar36,(MethodInfo *)0x0);
              puStackY_a0 = &UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
              List_1_UnityEngine_Vector3__InsertRange
                        (this_01,(this_01->fields)._size,
                         (IEnumerable_1_UnityEngine_Vector3_ *)pVVar36,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                         ->klass->rgctx_data[0x12].method);
              fVar6 = _UNK_?;
              iVar46 = 0;
              valuesArrayLength_00 = 0;
              iVar43 = iVar43 + 2;
              while (this != (List_1_System_Int32_ *)0x0) {
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43 + -2,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43 + 1,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43 + -1,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                puStackY_a0 = &UNK_?;
                FUN_?(this,iVar43 + -2,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                if (this_00 == (List_1_UnityEngine_Vector2_ *)0x0) break;
                puStackY_a0 = &UNK_?;
                FUN_?(this_00,0,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
                puStackY_a0 = &UNK_?;
                FUN_?(this_00,fVar6,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
                puStackY_a0 = &UNK_?;
                FUN_?(this_00,CONCAT44(fVar6,fVar6),
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                             );
                puStackY_a0 = &UNK_?;
                FUN_?(this_00);
                iVar46 = iVar46 + 1;
                iVar43 = iVar43 + 4;
                if (5 < iVar46) {
                  puStackY_a0 = &UNK_?;
                  pAVar47 = (Array *)FUN_?(this_01);
                  if (cRam_? == '\0') {
                    puStackY_a0 = &UNK_?;
                    FUN_?(&
                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  valuesArrayLength = valuesArrayLength_00;
                  if (pAVar47 != (Array *)0x0) {
                    puStackY_a0 = &UNK_?;
                    valuesArrayLength =
                         mscorlib.dll::System::Array::Array_get_Length(pAVar47,(MethodInfo *)0x0);
                  }
                  puStackY_a0 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                            (mesh,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32
                             ,3,pAVar47,valuesArrayLength,0,valuesArrayLength,
                             MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                  puStackY_a0 = &UNK_?;
                  pAVar47 = (Array *)FUN_?(this_00);
                  if (cRam_? == '\0') {
                    puStackY_a0 = &UNK_?;
                    FUN_?(&
                                  void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pAVar47 != (Array *)0x0) {
                    puStackY_a0 = &UNK_?;
                    valuesArrayLength_00 =
                         mscorlib.dll::System::Array::Array_get_Length(pAVar47,(MethodInfo *)0x0);
                  }
                  puStackY_a0 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                            (mesh,VertexAttribute__Enum_TexCoord0,
                             VertexAttributeFormat__Enum_Float32,2,pAVar47,valuesArrayLength_00,0,
                             valuesArrayLength_00,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                  puStackY_a0 = &UNK_?;
                  pIVar45 = (Int32__Array *)
                            FUN_?(this,
                                          MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                         );
                  puStackY_a0 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                            (mesh,pIVar45,(MethodInfo *)0x0);
                  puStackY_a0 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                            (mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Debug);
                    LOCK();
                    UNLOCK();
                    FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateB);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (mesh == (Mesh *)0x0) {
                    FUN_?();
                    pcVar21 = (code *)swi(3);
                    (*pcVar21)();
                    return;
                  }
                  pvVar44 = (mesh->fields)._.m_CachedPtr;
                  if (pvVar44 != (void *)0x0) {
                    pcVar21 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
                      uVar12 = func_?(&UNK_?);
                      FUN_?(uVar12,0);
                      pcVar21 = (code *)swi(3);
                      (*pcVar21)();
                      return;
                    }
                    pcRam_? = pcVar21;
                    cVar28 = (*pcRam_?)(pvVar44);
                    if (cVar28 == '\0') {
                      arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                       ((Object_1 *)mesh,(MethodInfo *)0x0);
                      pSVar48 = StringLiteral_Not_allowed_to_call_RecalculateB;
                      PStack_1._arg0 = (Object *)0x0;
                      PStack_1._arg1 = (Object *)0x0;
                      PStack_1._arg2 = (Object *)0x0;
                      PStack_1._args = (Object__Array *)0x0;
                      mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                                (&PStack_1,(Object *)arg0,(MethodInfo *)0x0);
                      pSVar48 = mscorlib.dll::System::String::String_FormatHelper
                                          ((IFormatProvider *)0x0,pSVar48,
                                           (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0
                                          );
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                ((Object *)pSVar48,(MethodInfo *)0x0);
                      return;
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar44 = (mesh->fields)._.m_CachedPtr;
                    if (pvVar44 != (void *)0x0) {
                      pcVar21 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0))
                      {
                        uVar12 = func_?(&UNK_?);
                        FUN_?(uVar12,0);
                        pcVar21 = (code *)swi(3);
                        (*pcVar21)();
                        return;
                      }
                      pcRam_? = pcVar21;
                      (*pcRam_?)(pvVar44,0);
                      return;
                    }
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
              }
            }
          }
          puStackY_a0 = &UNK_?;
          FUN_?();
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void AddCubeMesh(Mesh, Vector3[], Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
               (Mesh *mesh,Vector3__Array *corners,bool insideOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mesh != (Mesh *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (mesh->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)(pvVar1);
    if (iVar4 == 0) {
      this = (List_1_System_Int32_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      FUN_?(this);
    }
    else {
      pIVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                         (mesh,(MethodInfo *)0x0);
      this = (List_1_System_Int32_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                (this,(IEnumerable_1_System_Int32_ *)pIVar5,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
    }
    collection = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv(mesh,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_Vector2_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2___ctor_1
              (this_00,(IEnumerable_1_UnityEngine_Vector2_ *)collection,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
              );
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (mesh,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Vector3_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3___ctor_1
              (this_01,(IEnumerable_1_UnityEngine_Vector3_ *)pVVar6,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    if (this_01 != (List_1_UnityEngine_Vector3_ *)0x0) {
      iVar4 = (this_01->fields)._size;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar6 = SharedCubeFunctions_GetVertices_1(corners,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__InsertRange
                (this_01,(this_01->fields)._size,(IEnumerable_1_UnityEngine_Vector3_ *)pVVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 ->klass->rgctx_data[0x12].method);
      uVar7 = _UNK_?;
      iVar8 = 0;
      valuesArrayLength_00 = 0;
      iVar4 = iVar4 + 2;
      do {
        if (insideOut == 0) {
          if (this == (List_1_System_Int32_ *)0x0) break;
          FUN_?(this,iVar4 + -2,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4 + 1,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                       );
          FUN_?(this,iVar4,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4 + -1,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          iVar9 = iVar4 + -2;
        }
        else {
          if (this == (List_1_System_Int32_ *)0x0) break;
          FUN_?(this,iVar4,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4 + 1,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                       );
          FUN_?(this,iVar4 + -2,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4 + -2,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          FUN_?(this,iVar4 + -1,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          iVar9 = iVar4;
        }
        FUN_?(this,iVar9,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        if (this_00 == (List_1_UnityEngine_Vector2_ *)0x0) break;
        FUN_?(this_00,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(this_00,uVar7,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(this_00,CONCAT44(uVar7,uVar7),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        FUN_?(this_00);
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 4;
        if (5 < iVar8) {
          pAVar10 = (Array *)FUN_?(this_01);
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          valuesArrayLength = valuesArrayLength_00;
          if (pAVar10 != (Array *)0x0) {
            valuesArrayLength =
                 mscorlib.dll::System::Array::Array_get_Length(pAVar10,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (mesh,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                     pAVar10,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
                     (MethodInfo *)0x0);
          pAVar10 = (Array *)FUN_?(this_00);
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pAVar10 != (Array *)0x0) {
            valuesArrayLength_00 =
                 mscorlib.dll::System::Array::Array_get_Length(pAVar10,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (mesh,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,
                     pAVar10,valuesArrayLength_00,0,valuesArrayLength_00,
                     MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          pIVar5 = (Int32__Array *)
                   FUN_?(this,MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                );
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                    (mesh,pIVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                    (mesh,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateB);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (mesh == (Mesh *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = (mesh->fields)._.m_CachedPtr;
          if (pvVar1 != (void *)0x0) {
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            cVar11 = (*pcRam_?)(pvVar1);
            if (cVar11 == '\0') {
              arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                               ((Object_1 *)mesh,(MethodInfo *)0x0);
              pSVar12 = StringLiteral_Not_allowed_to_call_RecalculateB;
              PStack_13._arg0 = (Object *)0x0;
              PStack_13._arg1 = (Object *)0x0;
              PStack_13._arg2 = (Object *)0x0;
              PStack_13._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                        (&PStack_13,(Object *)arg0,(MethodInfo *)0x0);
              pSVar12 = mscorlib.dll::System::String::String_FormatHelper
                                  ((IFormatProvider *)0x0,pSVar12,
                                   (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pSVar12,(MethodInfo *)0x0);
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar1 = (mesh->fields)._.m_CachedPtr;
            if (pvVar1 != (void *)0x0) {
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar3 = func_?(&UNK_?);
                FUN_?(uVar3,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar1,0);
              return;
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddCubeMeshCubeLines(Mesh, Vector3[], Single) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
               (Mesh *mesh,Vector3__Array *corners,float diagonalWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pVVar2 = corners->vector;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (corners == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    uVar6 = (uint)uVar3;
    if ((uint)corners->max_length <= uVar6) goto DAT_?;
    uVar7._0_4_ = pVVar2->x;
    uVar7._4_4_ = pVVar2->y;
    fVar8 = pVVar2->z;
    uVar9 = uVar6 + 1 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if ((uint)corners->max_length <= uVar9) goto DAT_?;
    uVar10._0_4_ = corners->vector[(int)uVar9].x;
    uVar10._4_4_ = corners->vector[(int)uVar9].y;
    fVar11 = corners->vector[(int)uVar9].z;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_12._0_8_ = uVar10;
    VStack_12.z = fVar11;
    aVStack_13[0]._0_8_ = uVar7;
    aVStack_13[0].z = fVar8;
    SharedCubeFunctions_AddCubeLine(mesh,aVStack_13,&VStack_12,diagonalWidth,(MethodInfo *)0x0);
    uVar4 = uVar4 + 1;
    pVVar2 = pVVar2 + 1;
    uVar3 = (ulonglong)(uVar6 + 1);
  } while ((longlong)uVar4 < 4);
  uVar6 = 4;
  pVVar2 = corners->vector + 4;
  lVar14 = 4;
  do {
    if ((uint)corners->max_length <= uVar6) goto DAT_?;
    uVar15._0_4_ = pVVar2->x;
    uVar15._4_4_ = pVVar2->y;
    fVar8 = pVVar2->z;
    uVar9 = uVar6 + 1 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if ((uint)corners->max_length <= uVar9 + 4) goto DAT_?;
    uVar16._0_4_ = corners->vector[(longlong)(int)uVar9 + 4].x;
    uVar16._4_4_ = corners->vector[(longlong)(int)uVar9 + 4].y;
    fVar11 = corners->vector[(longlong)(int)uVar9 + 4].z;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_12._0_8_ = uVar15;
    VStack_12.z = fVar8;
    aVStack_13[0]._0_8_ = uVar16;
    aVStack_13[0].z = fVar11;
    SharedCubeFunctions_AddCubeLine(mesh,&VStack_12,aVStack_13,diagonalWidth,(MethodInfo *)0x0);
    uVar6 = uVar6 + 1;
    lVar14 = lVar14 + 1;
    pVVar2 = pVVar2 + 1;
  } while (lVar14 < 8);
  pVVar2 = corners->vector;
  pVVar17 = corners->vector + 7;
  uVar3 = uVar1;
  while (uVar6 = (uint)uVar1, uVar6 < (uint)corners->max_length) {
    uVar18._0_4_ = pVVar2->x;
    uVar18._4_4_ = pVVar2->y;
    fVar8 = pVVar2->z;
    if ((uint)corners->max_length <= 7 - uVar6) break;
    uVar19._0_4_ = pVVar17->x;
    uVar19._4_4_ = pVVar17->y;
    fVar11 = pVVar17->z;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_12._0_8_ = uVar18;
    VStack_12.z = fVar8;
    aVStack_13[0]._0_8_ = uVar19;
    aVStack_13[0].z = fVar11;
    SharedCubeFunctions_AddCubeLine(mesh,&VStack_12,aVStack_13,diagonalWidth,(MethodInfo *)0x0);
    uVar1 = (ulonglong)(uVar6 + 1);
    uVar3 = uVar3 + 1;
    pVVar2 = pVVar2 + 1;
    pVVar17 = pVVar17 + -1;
    if (3 < (longlong)uVar3) {
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Dictionary`2[MV.WorldObject.IntVector,Cube] CreateFromBytePackage(BytePacker) */

Dictionary_2_MV_WorldObject_IntVector_Cube_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CreateFromBytePackage
          (BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__Dictionary__
            );
  if (bp == (BytePacker *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pDVar2 = (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)(*pcVar1)();
    return pDVar2;
  }
  iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0)
  ;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      iVar6 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      iVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt16
                        (bp,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      byteFlags = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadByte
                            (bp,(MethodInfo *)0x0);
      this_00 = (CubeBase *)FUN_?(TypeInfo__Cube);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar8 = 0;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_1
                (this_00,bp,byteFlags,(MethodInfo *)0x0);
      if (this == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) goto code_?;
      IStackX_18.x = iVar5;
      IStackX_18.y = iVar6;
      IStackX_18.z = iVar7;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__TryInsert
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,&IStackX_18,
                 (Object *)this_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_Cube>__set_Item_MV__WorldObject__IntVector__Cube_
                 ->klass->rgctx_data[0x22].method);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return (Dictionary_2_MV_WorldObject_IntVector_Cube_ *)this;
}


/* IntVector CubePosToChunk(IntVector, Int32) */

IntVector *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_CubePosToChunk
          (IntVector *__return_storage_ptr__,IntVector *cubePos,int32_t chunkSize,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MV__WorldObject__IntVector;
  sVar2 = cubePos->x;
  iVar3 = cubePos->y;
  iVar4 = cubePos->z;
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  iVar5 = chunkSize / 2;
  if (*(int *)&(pIVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = sVar2;
  __return_storage_ptr__->y = iVar3;
  __return_storage_ptr__->z = iVar4;
  iVar3 = FUN_?(((float)(int)sVar2 + (float)iVar5) / (float)chunkSize);
  __return_storage_ptr__->x = iVar3;
  iVar3 = FUN_?(((float)(int)__return_storage_ptr__->y + (float)iVar5) / (float)chunkSize);
  __return_storage_ptr__->y = iVar3;
  iVar3 = FUN_?(((float)(int)__return_storage_ptr__->z + (float)iVar5) / (float)chunkSize);
  __return_storage_ptr__->z = iVar3;
  return __return_storage_ptr__;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(Transform) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,Transform *transform,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->hasValue = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  pTVar1 = (Transform *)0x0;
  lStackX_20 = 0;
  if (transform == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pNVar3 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar2)();
    return pNVar3;
  }
  pTVar4 = (Transform *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)transform,
                       UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                      );
  __return_storage_ptr__->hasValue = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar5 = false;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar4 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar5 = (((Renderer__Fields *)&pTVar4->fields)->_)._.m_CachedPtr != (void *)0x0;
  }
  if (bVar5) {
    if (pTVar4 == (Transform *)0x0) goto code_?;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                       ((Renderer *)pTVar4,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      ppIStack_8 = (IEnumerator **)0x0;
      plStack_9 = (longlong *)0x0;
      pvVar10 = (((Renderer__Fields *)&pTVar4->fields)->_)._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
        pTVar11 = pTVar4;
code_?:
        FUN_?(pTVar11);
code_?:
        FUN_?();
        goto code_?;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar2 = (code *)swi(3);
        pNVar3 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar2)();
        return pNVar3;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar10);
      (__return_storage_ptr__->value).m_Center.x = (float)(undefined4)uStack_7;
      (__return_storage_ptr__->value).m_Center.y = (float)uStack_7._4_4_;
      *(IEnumerator ***)&(__return_storage_ptr__->value).m_Center.z = ppIStack_8;
      *(longlong **)&(__return_storage_ptr__->value).m_Extents.y = plStack_9;
      __return_storage_ptr__->hasValue = 1;
    }
  }
  pIStackX_10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                          (transform,(MethodInfo *)0x0);
  fVar13 = _UNK_?;
  uStack_7 = 0;
  ppIStack_8 = &pIStackX_10;
  plStack_9 = &lStackX_20;
  while (pIStackX_10 != (IEnumerator *)0x0) {
    cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    pIVar15 = pIStackX_10;
    if (cVar14 == '\0') {
      lStackX_20 = FUN_?(pIStackX_10,TypeInfo__System__IDisposable);
      if (lStackX_20 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
      }
      return __return_storage_ptr__;
    }
    if (pIStackX_10 == (IEnumerator *)0x0) goto code_?;
    pIVar16 = pIStackX_10->klass;
    uVar17 = 0;
    uVar18._0_1_ = (pIVar16->_1).rank;
    uVar18._1_1_ = (pIVar16->_1).minimumAlignment;
    pIVar19 = TypeInfo__System__Collections__IEnumerator;
    if (uVar18 != 0) {
      do {
        if (pIVar16->interfaceOffsets[uVar17].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar20 = &(pIVar16->vtable).MoveNext + (pIVar16->interfaceOffsets[uVar17].offset + 1);
          goto code_?;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar18);
    }
    pVVar20 = (VirtualInvokeData *)
              FUN_?(pIStackX_10,TypeInfo__System__Collections__IEnumerator);
code_?:
    pTVar11 = (Transform *)(*pVVar20->methodPtr)(pIVar15,pVVar20->method);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar4 = pTVar1;
    if (pTVar11 != (Transform *)0x0) {
      bVar21 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar11->klass->_1).naturalAligment < bVar21) ||
         (pTVar4 = pTVar11,
         (pTVar11->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
         (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
    }
    method_00 = (MethodInfo *)0x0;
    pNVar3 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                        (aNStack_22,pTVar4,(MethodInfo *)0x0);
    fVar23 = (pNVar3->value).m_Center.x;
    fVar24 = (pNVar3->value).m_Center.y;
    fVar25 = (pNVar3->value).m_Center.z;
    uVar12._0_4_ = (pNVar3->value).m_Extents.x;
    uVar12._4_4_ = (pNVar3->value).m_Extents.y;
    fVar26 = (pNVar3->value).m_Extents.z;
    uStack_27 = uVar12;
    if (__return_storage_ptr__->hasValue == 0) {
      *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pNVar3;
      (__return_storage_ptr__->value).m_Center.x = fVar23;
      (__return_storage_ptr__->value).m_Center.y = fVar24;
      (__return_storage_ptr__->value).m_Center.z = fVar25;
      (__return_storage_ptr__->value).m_Extents.x = (float)(undefined4)uVar12;
      (__return_storage_ptr__->value).m_Extents.y = (float)uVar12._4_4_;
      (__return_storage_ptr__->value).m_Extents.z = fVar26;
    }
    else {
      cVar14 = (char)*(undefined4 *)pNVar3;
      if (cVar14 != '\0') {
        if (__return_storage_ptr__->hasValue == 0) goto code_?;
        uVar28 = (__return_storage_ptr__->value).m_Extents.y;
        uVar29 = (__return_storage_ptr__->value).m_Extents.z;
        fVar30 = (__return_storage_ptr__->value).m_Center.z - (float)uVar29;
        fVar31 = (__return_storage_ptr__->value).m_Center.y - (float)uVar28;
        fVar32 = (__return_storage_ptr__->value).m_Center.x -
                 (__return_storage_ptr__->value).m_Extents.x;
        fVar33 = (0.0 - fVar32) * fVar13;
        fVar34 = (0.0 - fVar31) * fVar13;
        fVar35 = (0.0 - fVar30) * fVar13;
        uVar36 = (__return_storage_ptr__->value).m_Extents.y;
        uVar37 = (__return_storage_ptr__->value).m_Extents.z;
        fVar35 = (fVar30 + fVar35) - fVar35;
        fVar34 = (fVar34 + fVar31) - fVar34;
        fVar33 = (fVar33 + fVar32) - fVar33;
        fVar30 = (((__return_storage_ptr__->value).m_Extents.x +
                  (__return_storage_ptr__->value).m_Center.x) - fVar33) * fVar13;
        fVar32 = (((float)uVar36 + (__return_storage_ptr__->value).m_Center.y) - fVar34) * fVar13;
        fVar31 = (((float)uVar37 + (__return_storage_ptr__->value).m_Center.z) - fVar35) * fVar13;
        VStack_38.z = (__return_storage_ptr__->value).m_Center.z - (float)uVar37;
        VStack_39.x = fVar23 - (float)(undefined4)uVar12;
        VStack_39.z = fVar25 - fVar26;
        VStack_39.y = fVar24 - (float)uVar12._4_4_;
        VStack_38.y = (__return_storage_ptr__->value).m_Center.y - (float)uVar36;
        VStack_38.x = (__return_storage_ptr__->value).m_Center.x -
                       (__return_storage_ptr__->value).m_Extents.x;
        VStack_40.x = 0.0;
        VStack_40.y = 0.0;
        VStack_40.z = 0.0;
        pTVar4 = pTVar1;
        while (iVar41 = (int)pTVar4, iVar41 < 3) {
          fVar42 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_38,iVar41,method_00);
          fVar43 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_39,iVar41,method_00);
          if (fVar42 < fVar43) {
            fVar42 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_38,iVar41,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_40,iVar41,fVar42,(MethodInfo *)pIVar19);
            pTVar4 = (Transform *)(ulonglong)(iVar41 + 1);
          }
          else {
            fVar42 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_39,iVar41,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_40,iVar41,fVar42,(MethodInfo *)pIVar19);
            pTVar4 = (Transform *)(ulonglong)(iVar41 + 1);
          }
        }
        fVar33 = ((fVar30 + fVar33 + fVar30) - VStack_40.x) * fVar13;
        fVar30 = ((fVar32 + fVar34 + fVar32) - VStack_40.y) * fVar13;
        fVar34 = ((fVar31 + fVar35 + fVar31) - VStack_40.z) * fVar13;
        fVar32 = fVar33 + VStack_40.x;
        fVar35 = fVar30 + VStack_40.y;
        fVar31 = fVar34 + VStack_40.z;
        if (__return_storage_ptr__->hasValue == 0) goto code_?;
        uVar44 = (__return_storage_ptr__->value).m_Extents.y;
        if (cVar14 == '\0') goto code_?;
        VStack_45.z = fVar25 + fVar26;
        VStack_45.y = (float)uVar12._4_4_ + fVar24;
        VStack_45.x = (float)(undefined4)uVar12 + fVar23;
        VStack_46.y = (float)uVar44 + (__return_storage_ptr__->value).m_Center.y;
        VStack_46.x = (__return_storage_ptr__->value).m_Extents.x +
                       (__return_storage_ptr__->value).m_Center.x;
        VStack_47.x = 0.0;
        VStack_47.y = 0.0;
        VStack_47.z = 0.0;
        pTVar4 = pTVar1;
        VStack_46.z = (__return_storage_ptr__->value).m_Extents.z +
                       (__return_storage_ptr__->value).m_Center.z;
        while (iVar41 = (int)pTVar4, iVar41 < 3) {
          fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_46,iVar41,method_00);
          fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_45,iVar41,method_00);
          if (fVar23 < fVar26) {
            fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_46,iVar41,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_47,iVar41,fVar26,(MethodInfo *)pIVar19);
            pTVar4 = (Transform *)(ulonglong)(iVar41 + 1);
          }
          else {
            fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (&VStack_45,iVar41,method_00);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_47,iVar41,fVar26,(MethodInfo *)pIVar19);
            pTVar4 = (Transform *)(ulonglong)(iVar41 + 1);
          }
        }
        fVar32 = fVar32 - fVar33;
        fVar35 = fVar35 - fVar30;
        fVar31 = fVar31 - fVar34;
        fVar24 = (VStack_47.x - fVar32) * fVar13;
        fVar23 = (VStack_47.y - fVar35) * fVar13;
        fVar26 = (VStack_47.z - fVar31) * fVar13;
        aNStack_22[0].value.m_Center.x = fVar24 + fVar32;
        aNStack_22[0].value.m_Center.y = fVar23 + fVar35;
        aNStack_22[0].value.m_Center.z = fVar26 + fVar31;
        aNStack_22[0].hasValue = 1;
        aNStack_22[0]._1_3_ = 0;
        *(undefined4 *)__return_storage_ptr__ = 1;
        (__return_storage_ptr__->value).m_Center.x = aNStack_22[0].value.m_Center.x;
        (__return_storage_ptr__->value).m_Center.y = aNStack_22[0].value.m_Center.y;
        (__return_storage_ptr__->value).m_Center.z = aNStack_22[0].value.m_Center.z;
        (__return_storage_ptr__->value).m_Extents.x = fVar24;
        (__return_storage_ptr__->value).m_Extents.y = fVar23;
        (__return_storage_ptr__->value).m_Extents.z = fVar26;
      }
    }
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pNVar3 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar2)();
  return pNVar3;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[MVWorldObjectClient]) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_1
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,List_1_MVWorldObjectClient_ *wos,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  transforms = (List_1_UnityEngine_Transform_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  if (wos == (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)auStack_2 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    auStack_2._8_8_ = (ulonglong)(uint)(wos->fields)._version << 0x20;
    VStack_6.x = 0.0;
    VStack_6.y = 0.0;
    LStack_7._index = auStack_2._8_4_;
    LStack_7._version = auStack_2._12_4_;
    LStack_7._current = (Object *)0x0;
    auStack_2[0] = 0;
    auStack_2._1_3_ = 0;
    auStack_2._4_4_ = 0.0;
    auStack_2._8_8_ = &LStack_7;
    LStack_7._list = (List_1_System_Object_ *)wos;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         (&LStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                         );
      pMVar9 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
      ;
      if (bVar8 == 0) {
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pNVar10 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                            ((Nullable_1_UnityEngine_Bounds_ *)auStack_2,transforms,
                             (MethodInfo *)0x0);
        uVar11 = *(undefined3 *)&pNVar10->field_0x1;
        fVar12 = (pNVar10->value).m_Center.x;
        fVar13 = (pNVar10->value).m_Center.y;
        fVar14 = (pNVar10->value).m_Center.z;
        __return_storage_ptr__->hasValue = pNVar10->hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar11;
        (__return_storage_ptr__->value).m_Center.x = fVar12;
        (__return_storage_ptr__->value).m_Center.y = fVar13;
        (__return_storage_ptr__->value).m_Center.z = fVar14;
        fVar12 = (pNVar10->value).m_Extents.y;
        (__return_storage_ptr__->value).m_Extents.x = (pNVar10->value).m_Extents.x;
        (__return_storage_ptr__->value).m_Extents.y = fVar12;
        (__return_storage_ptr__->value).m_Extents.z = (pNVar10->value).m_Extents.z;
        return __return_storage_ptr__;
      }
      if (LStack_7._current == (Object *)0x0) break;
      item = (Object *)LStack_7._current[0xd].monitor;
      if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      piVar15 = &(transforms->fields)._version;
      *piVar15 = *piVar15 + 1;
      pTVar16 = (transforms->fields)._items;
      uVar1 = (transforms->fields)._size;
      if (pTVar16 == (Transform__Array *)0x0) goto code_?;
      if (uVar1 < (uint)pTVar16->max_length) {
        (transforms->fields)._size = uVar1 + 1;
        FUN_?(pTVar16,(longlong)(int)uVar1);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)transforms,item,pMVar9->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pNVar10 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar17)();
  return pNVar10;
}


/* Nullable`1[UnityEngine.Bounds] GetAxisAlignedBoundsRecursively(List`1[UnityEngine.Transform]) */

Nullable_1_UnityEngine_Bounds_ *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
          (Nullable_1_UnityEngine_Bounds_ *__return_storage_ptr__,
          List_1_UnityEngine_Transform_ *transforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__Nullable_UnityEngine__Bounds_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->hasValue = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  (__return_storage_ptr__->value).m_Center.x = 0.0;
  (__return_storage_ptr__->value).m_Center.y = 0.0;
  (__return_storage_ptr__->value).m_Center.z = 0.0;
  (__return_storage_ptr__->value).m_Extents.x = 0.0;
  (__return_storage_ptr__->value).m_Extents.y = 0.0;
  (__return_storage_ptr__->value).m_Extents.z = 0.0;
  if (transforms == (List_1_UnityEngine_Transform_ *)0x0) {
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
  }
  else {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
      uVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      in_R9 = (MethodInfo *)0xADDR;
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    fVar7 = _UNK_?;
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                  ((ulonglong)(uint)(transforms->fields)._version << 0x20);
    uStack_9 = 0;
    aLStack_10[0]._8_8_ = pLStack_8;
    aLStack_10[0]._current = (Object *)0x0;
    uStack_2 = 0;
    pLStack_8 = aLStack_10;
    aLStack_10[0]._list = (List_1_System_Object_ *)transforms;
    while( true ) {
      do {
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (aLStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                             );
          transform = aLStack_10[0]._current;
          if (bVar11 == 0) {
            return __return_storage_ptr__;
          }
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          method_00 = (MethodInfo *)0x0;
          pNVar12 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                              (&NStack_13,(Transform *)transform,(MethodInfo *)0x0);
          fVar14 = (pNVar12->value).m_Center.x;
          fVar15 = (pNVar12->value).m_Center.y;
          fVar16 = (pNVar12->value).m_Center.z;
          uVar17._0_4_ = (pNVar12->value).m_Extents.x;
          uVar17._4_4_ = (pNVar12->value).m_Extents.y;
          fVar18 = (pNVar12->value).m_Extents.z;
          uStack_19 = uVar17;
          if (__return_storage_ptr__->hasValue != 0) break;
          *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pNVar12;
          (__return_storage_ptr__->value).m_Center.x = fVar14;
          (__return_storage_ptr__->value).m_Center.y = fVar15;
          (__return_storage_ptr__->value).m_Center.z = fVar16;
          (__return_storage_ptr__->value).m_Extents.x = (float)(undefined4)uVar17;
          (__return_storage_ptr__->value).m_Extents.y = (float)uVar17._4_4_;
          (__return_storage_ptr__->value).m_Extents.z = fVar18;
        }
        cVar20 = (char)*(undefined4 *)pNVar12;
      } while (cVar20 == '\0');
      if (__return_storage_ptr__->hasValue == 0) break;
      uVar21 = (__return_storage_ptr__->value).m_Extents.y;
      uVar22 = (__return_storage_ptr__->value).m_Extents.z;
      fVar23 = (__return_storage_ptr__->value).m_Center.z - (float)uVar22;
      fVar24 = (__return_storage_ptr__->value).m_Center.y - (float)uVar21;
      fVar25 = (__return_storage_ptr__->value).m_Center.x -
               (__return_storage_ptr__->value).m_Extents.x;
      fVar26 = (0.0 - fVar25) * fVar7;
      fVar27 = (0.0 - fVar24) * fVar7;
      fVar28 = (0.0 - fVar23) * fVar7;
      uVar29 = (__return_storage_ptr__->value).m_Extents.y;
      uVar30 = (__return_storage_ptr__->value).m_Extents.z;
      fVar28 = (fVar28 + fVar23) - fVar28;
      fVar27 = (fVar27 + fVar24) - fVar27;
      fVar26 = (fVar26 + fVar25) - fVar26;
      fVar23 = (((__return_storage_ptr__->value).m_Extents.x +
                (__return_storage_ptr__->value).m_Center.x) - fVar26) * fVar7;
      fVar25 = (((__return_storage_ptr__->value).m_Center.y + (float)uVar29) - fVar27) * fVar7;
      fVar24 = (((float)uVar30 + (__return_storage_ptr__->value).m_Center.z) - fVar28) * fVar7;
      uVar31 = (__return_storage_ptr__->value).m_Extents.y;
      uVar32 = (__return_storage_ptr__->value).m_Extents.z;
      VStack_33.z = (__return_storage_ptr__->value).m_Center.z - (float)uVar32;
      VStack_34.x = fVar14 - (float)(undefined4)uVar17;
      VStack_34.z = fVar16 - fVar18;
      VStack_34.y = fVar15 - (float)uVar17._4_4_;
      VStack_33.y = (__return_storage_ptr__->value).m_Center.y - (float)uVar31;
      VStack_33.x = (__return_storage_ptr__->value).m_Center.x -
                     (__return_storage_ptr__->value).m_Extents.x;
      VStack_35.x = 0.0;
      VStack_35.y = 0.0;
      VStack_35.z = 0.0;
      iVar36 = 0;
      while (iVar36 < 3) {
        fVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_33,iVar36,method_00);
        fVar38 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_34,iVar36,method_00);
        if (fVar37 < fVar38) {
          fVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_33,iVar36,method_00);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_35,iVar36,fVar37,in_R9);
          iVar36 = iVar36 + 1;
        }
        else {
          fVar37 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_34,iVar36,method_00);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_35,iVar36,fVar37,in_R9);
          iVar36 = iVar36 + 1;
        }
      }
      fVar26 = ((fVar26 + fVar23 + fVar23) - VStack_35.x) * fVar7;
      fVar23 = ((fVar27 + fVar25 + fVar25) - VStack_35.y) * fVar7;
      fVar27 = ((fVar28 + fVar24 + fVar24) - VStack_35.z) * fVar7;
      fVar25 = fVar26 + VStack_35.x;
      fVar28 = fVar23 + VStack_35.y;
      fVar24 = fVar27 + VStack_35.z;
      if (__return_storage_ptr__->hasValue == 0) goto code_?;
      uVar39 = (__return_storage_ptr__->value).m_Extents.y;
      uVar40 = (__return_storage_ptr__->value).m_Extents.z;
      if (cVar20 == '\0') goto code_?;
      VStack_41.z = fVar18 + fVar16;
      VStack_41.y = (float)uVar17._4_4_ + fVar15;
      VStack_41.x = (float)(undefined4)uVar17 + fVar14;
      VStack_42.y = (__return_storage_ptr__->value).m_Center.y + (float)uVar39;
      VStack_42.x = (__return_storage_ptr__->value).m_Extents.x +
                     (__return_storage_ptr__->value).m_Center.x;
      VStack_43.x = 0.0;
      VStack_43.y = 0.0;
      VStack_43.z = 0.0;
      iVar36 = 0;
      VStack_42.z = (float)uVar40 + (__return_storage_ptr__->value).m_Center.z;
      while (iVar36 < 3) {
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_42,iVar36,method_00);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_41,iVar36,method_00);
        if (fVar14 < fVar18) {
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_42,iVar36,method_00);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_43,iVar36,fVar18,in_R9);
          iVar36 = iVar36 + 1;
        }
        else {
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_41,iVar36,method_00);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&VStack_43,iVar36,fVar18,in_R9);
          iVar36 = iVar36 + 1;
        }
      }
      fVar25 = fVar25 - fVar26;
      fVar28 = fVar28 - fVar23;
      fVar24 = fVar24 - fVar27;
      fVar15 = (VStack_43.x - fVar25) * fVar7;
      fVar14 = (VStack_43.y - fVar28) * fVar7;
      fVar18 = (VStack_43.z - fVar24) * fVar7;
      NStack_13.value.m_Center.x = fVar15 + fVar25;
      NStack_13.value.m_Center.y = fVar14 + fVar28;
      NStack_13.value.m_Center.z = fVar18 + fVar24;
      NStack_13.hasValue = 1;
      NStack_13._1_3_ = 0;
      *(undefined4 *)__return_storage_ptr__ = 1;
      (__return_storage_ptr__->value).m_Center.x = NStack_13.value.m_Center.x;
      (__return_storage_ptr__->value).m_Center.y = NStack_13.value.m_Center.y;
      (__return_storage_ptr__->value).m_Center.z = NStack_13.value.m_Center.z;
      (__return_storage_ptr__->value).m_Extents.x = fVar15;
      (__return_storage_ptr__->value).m_Extents.y = fVar14;
      (__return_storage_ptr__->value).m_Extents.z = fVar18;
    }
  }
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
  FUN_?();
  pcVar44 = (code *)swi(3);
  pNVar12 = (Nullable_1_UnityEngine_Bounds_ *)(*pcVar44)();
  return pNVar12;
}


/* Vector3 GetClosestGridPoint(Vector3, Quaternion, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,Vector3 *worldPosition,Quaternion *rotation,
                    float gridSize,Vector3 *scale,MethodInfo *method)

{
  fVar1 = rotation->x;
  fVar2 = rotation->y;
  fVar3 = rotation->z;
  fVar4 = rotation->w;
  fVar5 = fVar2 + fVar2;
  fVar6 = fVar1 * (fVar1 + fVar1);
  uStack_7._0_4_ = scale->x;
  uStack_7._4_4_ = scale->y;
  fVar8 = fVar3 + fVar3;
  fVar9 = fVar4 * (fVar1 + fVar1);
  fVar10 = scale->z;
  fVar11 = ((_UNK_? - (fVar3 * fVar8 + fVar2 * fVar5)) * (float)(undefined4)uStack_7 +
           (fVar1 * fVar5 - fVar4 * fVar8) * (float)uStack_7._4_4_ +
          (fVar4 * fVar5 + fVar1 * fVar8) * fVar10) * _UNK_?;
  fVar3 = ((_UNK_? - (fVar3 * fVar8 + fVar6)) * (float)uStack_7._4_4_ +
            (fVar4 * fVar8 + fVar1 * fVar5) * (float)(undefined4)uStack_7 +
           (fVar2 * fVar8 - fVar9) * fVar10) * _UNK_?;
  fVar10 = ((fVar1 * fVar8 - fVar4 * fVar5) * (float)(undefined4)uStack_7 +
            (fVar9 + fVar2 * fVar8) * (float)uStack_7._4_4_ +
           (_UNK_? - (fVar2 * fVar5 + fVar6)) * fVar10) * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar12->oneVector).x;
  uVar14 = (pVVar12->oneVector).y;
  fStack_15 = (pVVar12->oneVector).z * gridSize;
  uStack_7 = CONCAT44(fVar3,fVar11);
  uStack_16 = CONCAT44((float)uVar14 * gridSize,(float)uVar13 * gridSize);
  uStack_17._0_4_ = rotation->x;
  uStack_17._4_4_ = rotation->y;
  uStack_18._0_4_ = rotation->z;
  uStack_18._4_4_ = rotation->w;
  uStack_19 = 0;
  uStack_20 = 0;
  uStack_21 = 0;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  pcVar27 = pcRam_?;
  fStack_28 = fVar10;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar27 = (code *)FUN_?(&UNK_?), pcVar27 == (code *)0x0)) {
    uVar29 = func_?(&UNK_?);
    FUN_?(uVar29,0);
    pcVar27 = (code *)swi(3);
    pVVar30 = (Vector3 *)(*pcVar27)();
    return pVVar30;
  }
  pcRam_? = pcVar27;
  (*pcRam_?)(&uStack_7,&uStack_17,&uStack_16,&uStack_19);
  fVar10 = (float)uStack_19;
  fVar1 = uStack_19._4_4_;
  fVar2 = (float)uStack_20;
  fVar3 = uStack_20._4_4_;
  fVar4 = (float)uStack_21;
  fVar8 = (float)uStack_23;
  fVar11 = (float)uStack_25;
  uStack_31 = uStack_19;
  uStack_32 = uStack_20;
  fStack_33 = (float)uStack_21;
  uStack_34 = uStack_21._4_4_;
  uStack_35 = (float)uStack_22;
  uStack_36 = uStack_22._4_4_;
  fStack_37 = (float)uStack_23;
  uStack_38 = uStack_23._4_4_;
  uStack_39 = (float)uStack_24;
  uStack_40 = uStack_24._4_4_;
  fStack_41 = (float)uStack_25;
  uStack_42 = uStack_25._4_4_;
  uStack_43 = (float)uStack_26;
  uStack_44 = uStack_26._4_4_;
  uStack_45 = 0;
  uStack_46 = 0;
  uStack_47 = 0;
  uStack_48 = 0;
  uStack_49 = 0;
  uStack_50 = 0;
  uStack_51 = 0;
  uStack_52 = 0;
  pcVar27 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar27 = (code *)FUN_?(&UNK_?), pcVar27 == (code *)0x0)) {
    uVar29 = func_?(&UNK_?);
    FUN_?(uVar29,0);
    pcVar27 = (code *)swi(3);
    pVVar30 = (Vector3 *)(*pcVar27)();
    return pVVar30;
  }
  pcRam_? = pcVar27;
  (*pcRam_?)(&uStack_31,&uStack_45);
  fVar5 = worldPosition->z;
  uStack_7._0_4_ = worldPosition->x;
  uStack_7._4_4_ = worldPosition->y;
  fVar9 = _UNK_? /
           (uStack_48._4_4_ * (float)uStack_7._4_4_ +
            uStack_46._4_4_ * (float)(undefined4)uStack_7 + fVar5 * uStack_50._4_4_ +
           uStack_52._4_4_);
  fVar6 = (float)uStack_47 * (float)uStack_7._4_4_ +
           (float)uStack_45 * (float)(undefined4)uStack_7 + fVar5 * (float)uStack_49 +
           (float)uStack_51;
  fVar53 = uStack_47._4_4_ * (float)uStack_7._4_4_ +
           uStack_45._4_4_ * (float)(undefined4)uStack_7 + fVar5 * uStack_49._4_4_ +
           uStack_51._4_4_;
  fVar5 = (float)uStack_48 * (float)uStack_7._4_4_ +
           (float)uStack_46 * (float)(undefined4)uStack_7 + fVar5 * (float)uStack_50 +
           (float)uStack_52;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    fVar10 = (float)uStack_19;
    fVar4 = (float)uStack_21;
    fVar8 = (float)uStack_23;
    fVar11 = (float)uStack_25;
    fVar1 = uStack_19._4_4_;
    fVar2 = (float)uStack_20;
    fVar3 = uStack_20._4_4_;
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar54 = (double)FUN_?(SUB84((double)(fVar6 * fVar9),0),0);
  fVar6 = (float)dVar54;
  dVar54 = (double)FUN_?(SUB84((double)(fVar53 * fVar9),0),0);
  fVar53 = (float)dVar54;
  dVar54 = (double)FUN_?(SUB84((double)(fVar5 * fVar9),0),0);
  fVar5 = (float)dVar54;
  fVar3 = _UNK_? /
           (fVar53 * uStack_22._4_4_ + fVar6 * fVar3 + fVar5 * uStack_24._4_4_ +
           uStack_26._4_4_);
  __return_storage_ptr__->x = fVar3 * (fVar53 * fVar4 + fVar6 * fVar10 + fVar5 * fVar8 + fVar11);
  __return_storage_ptr__->y =
       fVar3 * (fVar53 * uStack_21._4_4_ + fVar6 * fVar1 + fVar5 * uStack_23._4_4_ +
                uStack_25._4_4_);
  __return_storage_ptr__->z =
       fVar3 * (fVar53 * (float)uStack_22 + fVar6 * fVar2 + fVar5 * (float)uStack_24 +
                (float)uStack_26);
  return __return_storage_ptr__;
}


/* Vector3[] GetCorners() */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      pVVar1->vector[0].x = _UNK_?;
      pVVar1->vector[0].y = fVar3;
      pVVar1->vector[0].z = fVar2;
      if (1 < (uint)pVVar1->max_length) {
        pVVar1->vector[1].x = fVar3;
        pVVar1->vector[1].y = fVar3;
        pVVar1->vector[1].z = fVar2;
        if (2 < (uint)pVVar1->max_length) {
          pVVar1->vector[2].x = fVar3;
          pVVar1->vector[2].y = fVar3;
          pVVar1->vector[2].z = fVar3;
          if (3 < (uint)pVVar1->max_length) {
            pVVar1->vector[3].x = fVar2;
            pVVar1->vector[3].y = fVar3;
            pVVar1->vector[3].z = fVar3;
            if (4 < (uint)pVVar1->max_length) {
              pVVar1->vector[4].x = fVar2;
              pVVar1->vector[4].y = fVar2;
              pVVar1->vector[4].z = fVar3;
              if (5 < (uint)pVVar1->max_length) {
                pVVar1->vector[5].x = fVar3;
                pVVar1->vector[5].y = fVar2;
                pVVar1->vector[5].z = fVar3;
                if (6 < (uint)pVVar1->max_length) {
                  pVVar1->vector[6].x = fVar3;
                  pVVar1->vector[6].y = fVar2;
                  pVVar1->vector[6].z = fVar2;
                  if (7 < (uint)pVVar1->max_length) {
                    pVVar1->vector[7].x = fVar2;
                    pVVar1->vector[7].y = fVar2;
                    pVVar1->vector[7].z = fVar2;
                    return pVVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar1 = (Vector3__Array *)(*pcVar4)();
    return pVVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar4)();
  return pVVar1;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_1
          (Bounds *bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (bounds->m_Extents).x;
  uVar2 = (bounds->m_Extents).y;
  uVar3 = (bounds->m_Center).x;
  uVar4 = (bounds->m_Center).y;
  fVar5 = (bounds->m_Center).z;
  fVar6 = (bounds->m_Extents).z;
  aVStack_7[0].x = (bounds->m_Center).x;
  aVStack_7[0].y = (bounds->m_Center).y;
  fVar8 = (bounds->m_Extents).z;
  fVar9 = (float)uVar1 + aVStack_7[0].x;
  fVar10 = (bounds->m_Center).z;
  fVar11 = (float)uVar2 + aVStack_7[0].y;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_12.y = fVar11;
  VStack_12.x = fVar9;
  aVStack_7[0].y = (float)uVar4 - (float)uVar2;
  aVStack_7[0].x = (float)uVar3 - (float)uVar1;
  VStack_12.z = fVar8 + fVar10;
  aVStack_7[0].z = fVar5 - fVar6;
  pVVar13 = SharedCubeFunctions_GetCorners_2(aVStack_7,&VStack_12,(MethodInfo *)0x0);
  return pVVar13;
}


/* Vector3[] GetCorners(Vector3, Vector3) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
          (Vector3 *min,Vector3 *max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  fVar2 = max->y;
  fVar3 = min->z;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      pVVar1->vector[0].x = min->x;
      pVVar1->vector[0].y = fVar2;
      pVVar1->vector[0].z = fVar3;
      if (1 < (uint)pVVar1->max_length) {
        pVVar1->vector[1].x = max->x;
        pVVar1->vector[1].y = fVar2;
        pVVar1->vector[1].z = fVar3;
        fVar3 = max->z;
        if (2 < (uint)pVVar1->max_length) {
          pVVar1->vector[2].x = max->x;
          pVVar1->vector[2].y = fVar2;
          pVVar1->vector[2].z = fVar3;
          if (3 < (uint)pVVar1->max_length) {
            fVar4 = min->y;
            pVVar1->vector[3].x = min->x;
            pVVar1->vector[3].y = fVar2;
            pVVar1->vector[3].z = fVar3;
            if (4 < (uint)pVVar1->max_length) {
              pVVar1->vector[4].x = min->x;
              pVVar1->vector[4].y = fVar4;
              pVVar1->vector[4].z = fVar3;
              if (5 < (uint)pVVar1->max_length) {
                pVVar1->vector[5].x = max->x;
                pVVar1->vector[5].y = fVar4;
                pVVar1->vector[5].z = fVar3;
                fVar2 = min->z;
                if (6 < (uint)pVVar1->max_length) {
                  pVVar1->vector[6].x = max->x;
                  pVVar1->vector[6].y = fVar4;
                  pVVar1->vector[6].z = fVar2;
                  if (7 < (uint)pVVar1->max_length) {
                    pVVar1->vector[7].x = min->x;
                    pVVar1->vector[7].y = fVar4;
                    pVVar1->vector[7].z = fVar2;
                    return pVVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar1 = (Vector3__Array *)(*pcVar5)();
    return pVVar1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar5)();
  return pVVar1;
}


/* Vector3[] GetTriangleVertices(Int32, GameObject) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetTriangleVertices
          (int32_t triangleIndex,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  if (gameObject != (GameObject *)0x0) {
    this = (MeshFilter *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                     );
    if (this != (MeshFilter *)0x0) {
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                         (this,(MethodInfo *)0x0);
      if (pMVar2 != (Mesh *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                           (pMVar2,(MethodInfo *)0x0);
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this,(MethodInfo *)0x0);
        if (pMVar2 != (Mesh *)0x0) {
          pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                             (pMVar2,(MethodInfo *)0x0);
          if (pIVar4 != (Int32__Array *)0x0) {
            if ((uint)pIVar4->max_length <= (uint)(triangleIndex * 3)) {
code_?:
              FUN_?();
              pcVar5 = (code *)swi(3);
              pVVar1 = (Vector3__Array *)(*pcVar5)();
              return pVVar1;
            }
            if (pVVar3 != (Vector3__Array *)0x0) {
              uVar6 = pIVar4->vector[triangleIndex * 3];
              if ((uint)pVVar3->max_length <= uVar6) goto code_?;
              if (pVVar1 != (Vector3__Array *)0x0) {
                if ((int)pVVar1->max_length == 0) goto code_?;
                fVar7 = pVVar3->vector[(int)uVar6].y;
                pVVar1->vector[0].x = pVVar3->vector[(int)uVar6].x;
                pVVar1->vector[0].y = fVar7;
                pVVar1->vector[0].z = pVVar3->vector[(int)uVar6].z;
                pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                         MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                if (pMVar2 != (Mesh *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                     (pMVar2,(MethodInfo *)0x0);
                  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                           MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                  if (pMVar2 != (Mesh *)0x0) {
                    pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                                       (pMVar2,(MethodInfo *)0x0);
                    if (pIVar4 != (Int32__Array *)0x0) {
                      if ((uint)pIVar4->max_length <= triangleIndex * 3 + 1U)
                      goto code_?;
                      if (pVVar3 != (Vector3__Array *)0x0) {
                        uVar6 = pIVar4->vector[(longlong)(triangleIndex * 3) + 1];
                        if (((uint)pVVar3->max_length <= uVar6) || ((uint)pVVar1->max_length < 2))
                        goto code_?;
                        fVar7 = pVVar3->vector[(int)uVar6].y;
                        pVVar1->vector[1].x = pVVar3->vector[(int)uVar6].x;
                        pVVar1->vector[1].y = fVar7;
                        pVVar1->vector[1].z = pVVar3->vector[(int)uVar6].z;
                        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                 MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                        if (pMVar2 != (Mesh *)0x0) {
                          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                             (pMVar2,(MethodInfo *)0x0);
                          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                   MeshFilter_get_sharedMesh(this,(MethodInfo *)0x0);
                          if (pMVar2 != (Mesh *)0x0) {
                            pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                     Mesh_get_triangles(pMVar2,(MethodInfo *)0x0);
                            if (pIVar4 != (Int32__Array *)0x0) {
                              if (triangleIndex * 3 + 2U < (uint)pIVar4->max_length) {
                                if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
                                uVar6 = pIVar4->vector[(longlong)(triangleIndex * 3) + 2];
                                if ((uVar6 < (uint)pVVar3->max_length) &&
                                   (2 < (uint)pVVar1->max_length)) {
                                  fVar7 = pVVar3->vector[(int)uVar6].y;
                                  pVVar1->vector[2].x = pVVar3->vector[(int)uVar6].x;
                                  pVVar1->vector[2].y = fVar7;
                                  pVVar1->vector[2].z = pVVar3->vector[(int)uVar6].z;
                                  return pVVar1;
                                }
                              }
                              goto code_?;
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
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar5)();
  return pVVar1;
}


/* Vector3[] GetVertices() */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,8)
  ;
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  if (collection == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3__Array *)(*pcVar3)();
    return pVVar4;
  }
  if (*(int *)&collection[1].monitor != 0) {
    collection[2].klass =
         (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44(_UNK_?,_UNK_?);
    *(undefined4 *)&collection[2].monitor = uVar1;
    if (1 < *(uint *)&collection[1].monitor) {
      *(ulonglong *)((longlong)&collection[2].monitor + 4) = CONCAT44(uVar2,uVar2);
      *(undefined4 *)((longlong)&collection[3].klass + 4) = uVar1;
      if (2 < *(uint *)&collection[1].monitor) {
        collection[3].monitor = (MonitorData *)CONCAT44(uVar2,uVar2);
        *(undefined4 *)&collection[4].klass = uVar2;
        if (3 < *(uint *)&collection[1].monitor) {
          *(ulonglong *)((longlong)&collection[4].klass + 4) = CONCAT44(uVar2,uVar1);
          *(undefined4 *)((longlong)&collection[4].monitor + 4) = uVar2;
          if (4 < *(uint *)&collection[1].monitor) {
            collection[5].klass = (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44(uVar1,uVar1)
            ;
            *(undefined4 *)&collection[5].monitor = uVar2;
            if (5 < *(uint *)&collection[1].monitor) {
              *(ulonglong *)((longlong)&collection[5].monitor + 4) = CONCAT44(uVar1,uVar2);
              *(undefined4 *)((longlong)&collection[6].klass + 4) = uVar2;
              if (6 < *(uint *)&collection[1].monitor) {
                collection[6].monitor = (MonitorData *)CONCAT44(uVar1,uVar2);
                *(undefined4 *)&collection[7].klass = uVar1;
                if (7 < *(uint *)&collection[1].monitor) {
                  *(ulonglong *)((longlong)&collection[7].klass + 4) = CONCAT44(uVar1,uVar1);
                  *(undefined4 *)((longlong)&collection[7].monitor + 4) = uVar1;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                  ,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                         FUN_?(
                                      TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                      );
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                  List_1_UnityEngine_Vector3___ctor_1
                            ((List_1_UnityEngine_Vector3_ *)this,collection,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                            );
                  pMVar5 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  ;
                  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
                    if ((uint)(this->fields)._size < 8) {
code_?:
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar3 = (code *)swi(3);
                      pVVar4 = (Vector3__Array *)(*pcVar3)();
                      return pVVar4;
                    }
                    pPVar6 = (this->fields)._items;
                    if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      if ((uint)pPVar6->max_length < 8) goto code_?;
                      iVar7 = pPVar6->vector[7].Quadrant;
                      iVar8 = pPVar6->vector[7].FirstAxisSign;
                      iVar9 = pPVar6->vector[7].SecondAxisSign;
                      piVar10 = &(this->fields)._version;
                      *piVar10 = *piVar10 + 1;
                      if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar11 = (this->fields)._size;
                        if (uVar11 < (uint)pPVar6->max_length) {
                          (this->fields)._size = uVar11 + 1;
                          if ((uint)pPVar6->max_length <= uVar11) goto code_?;
                          pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                          pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                          pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                          &stack0xffffffffffffffe8,
                                     pMVar5->klass->rgctx_data[0xe].method);
                        }
                        pMVar5 = 
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                        ;
                        if ((uint)(this->fields)._size < 7) goto code_?;
                        pPVar6 = (this->fields)._items;
                        if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                          if ((uint)pPVar6->max_length < 7) goto code_?;
                          iVar7 = pPVar6->vector[6].Quadrant;
                          iVar8 = pPVar6->vector[6].FirstAxisSign;
                          iVar9 = pPVar6->vector[6].SecondAxisSign;
                          piVar10 = &(this->fields)._version;
                          *piVar10 = *piVar10 + 1;
                          if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar11 = (this->fields)._size;
                            if (uVar11 < (uint)pPVar6->max_length) {
                              (this->fields)._size = uVar11 + 1;
                              if ((uint)pPVar6->max_length <= uVar11) goto code_?;
                              pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                              pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                              pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                              &stack0xffffffffffffffe8,
                                         pMVar5->klass->rgctx_data[0xe].method);
                            }
                            pMVar5 = 
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                            ;
                            if ((uint)(this->fields)._size < 2) goto code_?;
                            pPVar6 = (this->fields)._items;
                            if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                              if ((uint)pPVar6->max_length < 2) goto code_?;
                              iVar7 = pPVar6->vector[1].Quadrant;
                              iVar8 = pPVar6->vector[1].FirstAxisSign;
                              iVar9 = pPVar6->vector[1].SecondAxisSign;
                              piVar10 = &(this->fields)._version;
                              *piVar10 = *piVar10 + 1;
                              if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                uVar11 = (this->fields)._size;
                                if (uVar11 < (uint)pPVar6->max_length) {
                                  (this->fields)._size = uVar11 + 1;
                                  if ((uint)pPVar6->max_length <= uVar11) goto code_?;
                                  pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                  pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                                  pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                  PlaneIdHelper+PlaneQuadrantInfo]::
                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                  &stack0xffffffffffffffe8,
                                             pMVar5->klass->rgctx_data[0xe].method);
                                }
                                pMVar5 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                ;
                                if ((this->fields)._size == 0) goto code_?;
                                pPVar6 = (this->fields)._items;
                                if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                  if ((int)pPVar6->max_length == 0) goto code_?;
                                  iVar7 = pPVar6->vector[0].Quadrant;
                                  iVar8 = pPVar6->vector[0].FirstAxisSign;
                                  iVar9 = pPVar6->vector[0].SecondAxisSign;
                                  piVar10 = &(this->fields)._version;
                                  *piVar10 = *piVar10 + 1;
                                  if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar11 = (this->fields)._size;
                                    if (uVar11 < (uint)pPVar6->max_length) {
                                      (this->fields)._size = uVar11 + 1;
                                      if ((uint)pPVar6->max_length <= uVar11)
                                      goto code_?;
                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                      pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                                      pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                      &stack0xffffffffffffffe8,
                                                 pMVar5->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar5 = 
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                    ;
                                    if ((uint)(this->fields)._size < 6) goto code_?;
                                    pPVar6 = (this->fields)._items;
                                    if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                      if ((uint)pPVar6->max_length < 6) goto code_?;
                                      iVar7 = pPVar6->vector[5].Quadrant;
                                      iVar8 = pPVar6->vector[5].FirstAxisSign;
                                      iVar9 = pPVar6->vector[5].SecondAxisSign;
                                      piVar10 = &(this->fields)._version;
                                      *piVar10 = *piVar10 + 1;
                                      if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar11 = (this->fields)._size;
                                        if (uVar11 < (uint)pPVar6->max_length) {
                                          (this->fields)._size = uVar11 + 1;
                                          if ((uint)pPVar6->max_length <= uVar11)
                                          goto code_?;
                                          pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                          pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                                          pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                          PlaneIdHelper+PlaneQuadrantInfo]::
                                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                          &stack0xffffffffffffffe8,
                                                     pMVar5->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar5 = 
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                        ;
                                        if ((uint)(this->fields)._size < 5)
                                        goto code_?;
                                        pPVar6 = (this->fields)._items;
                                        if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                        {
                                          if ((uint)pPVar6->max_length < 5)
                                          goto code_?;
                                          iVar7 = pPVar6->vector[4].Quadrant;
                                          iVar8 = pPVar6->vector[4].FirstAxisSign;
                                          iVar9 = pPVar6->vector[4].SecondAxisSign;
                                          piVar10 = &(this->fields)._version;
                                          *piVar10 = *piVar10 + 1;
                                          if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                        0x0) {
                                            uVar11 = (this->fields)._size;
                                            if (uVar11 < (uint)pPVar6->max_length) {
                                              (this->fields)._size = uVar11 + 1;
                                              if ((uint)pPVar6->max_length <= uVar11)
                                              goto code_?;
                                              pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                              pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                                              pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::List`1[RTG
                                              ::PlaneIdHelper+PlaneQuadrantInfo]::
                                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                              &stack0xffffffffffffffe8,
                                                         pMVar5->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar5 = 
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                            ;
                                            if ((uint)(this->fields)._size < 4)
                                            goto code_?;
                                            pPVar6 = (this->fields)._items;
                                            if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                          0x0) {
                                              if ((uint)pPVar6->max_length < 4)
                                              goto code_?;
                                              iVar7 = pPVar6->vector[3].Quadrant;
                                              iVar8 = pPVar6->vector[3].FirstAxisSign;
                                              iVar9 = pPVar6->vector[3].SecondAxisSign;
                                              piVar10 = &(this->fields)._version;
                                              *piVar10 = *piVar10 + 1;
                                              if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array
                                                             *)0x0) {
                                                uVar11 = (this->fields)._size;
                                                if (uVar11 < (uint)pPVar6->max_length) {
                                                  (this->fields)._size = uVar11 + 1;
                                                  if ((uint)pPVar6->max_length <= uVar11)
                                                  goto code_?;
                                                  pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                  pPVar6->vector[(int)uVar11].FirstAxisSign = iVar8;
                                                  pPVar6->vector[(int)uVar11].SecondAxisSign = iVar9;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                }
                                                pMVar5 = 
                                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                ;
                                                if ((uint)(this->fields)._size < 3)
                                                goto code_?;
                                                pPVar6 = (this->fields)._items;
                                                if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                  if ((uint)pPVar6->max_length < 3)
                                                  goto code_?;
                                                  iVar7 = pPVar6->vector[2].Quadrant;
                                                  iVar8 = pPVar6->vector[2].FirstAxisSign;
                                                  iVar9 = pPVar6->vector[2].SecondAxisSign;
                                                  piVar10 = &(this->fields)._version;
                                                  *piVar10 = *piVar10 + 1;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 5)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 5)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[4].Quadrant;
                                                    iVar8 = pPVar6->vector[4].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[4].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 8)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 8)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[7].Quadrant;
                                                    iVar8 = pPVar6->vector[7].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[7].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((this->fields)._size == 0)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((int)pPVar6->max_length == 0)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[0].Quadrant;
                                                    iVar8 = pPVar6->vector[0].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[0].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 4)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 4)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[3].Quadrant;
                                                    iVar8 = pPVar6->vector[3].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[3].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 7)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 7)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[6].Quadrant;
                                                    iVar8 = pPVar6->vector[6].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[6].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 6)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 6)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[5].Quadrant;
                                                    iVar8 = pPVar6->vector[5].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[5].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 3)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 3)
                                                    goto code_?;
                                                    iVar7 = pPVar6->vector[2].Quadrant;
                                                    iVar8 = pPVar6->vector[2].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[2].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 2)
                                                  goto code_?;
                                                  pPVar6 = (this->fields)._items;
                                                  if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar6->max_length < 2) {
code_?:
                                                      FUN_?();
                                                      pcVar3 = (code *)swi(3);
                                                      pVVar4 = (Vector3__Array *)(*pcVar3)();
                                                      return pVVar4;
                                                    }
                                                    iVar7 = pPVar6->vector[1].Quadrant;
                                                    iVar8 = pPVar6->vector[1].FirstAxisSign;
                                                    iVar9 = pPVar6->vector[1].SecondAxisSign;
                                                    piVar10 = &(this->fields)._version;
                                                    *piVar10 = *piVar10 + 1;
                                                    if (pPVar6 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar11 = (this->fields)._size;
                                                    if (uVar11 < (uint)pPVar6->max_length) {
                                                      (this->fields)._size = uVar11 + 1;
                                                      if ((uint)pPVar6->max_length <= uVar11)
                                                      goto code_?;
                                                      pPVar6->vector[(int)uVar11].Quadrant = iVar7;
                                                      pPVar6->vector[(int)uVar11].FirstAxisSign =
                                                           iVar8;
                                                      pPVar6->vector[(int)uVar11].SecondAxisSign =
                                                           iVar9;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar5->klass->rgctx_data[0xe].method)
                                                  ;
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ;
                                                  if ((this->fields)._size != 0) {
                                                    pvVar12 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[3].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) ==
                                                      0) {
                                                    pvVar12 = (void *)FUN_?(pvVar12);
                                                  }
                                                  pVVar4 = (Vector3__Array *)FUN_?(pvVar12)
                                                  ;
                                                  mscorlib.dll::System::Array::Array_Copy_3
                                                            ((Array *)(this->fields)._items,0,
                                                             (Array *)pVVar4,0,(this->fields)._size
                                                             ,(MethodInfo *)0x0);
                                                  return pVVar4;
                                                  }
                                                  pvVar12 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[2].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) ==
                                                      0) {
                                                    pvVar12 = (void *)FUN_?(pvVar12);
                                                  }
                                                  if (*(int *)((longlong)pvVar12 + 0xe4) == 0) {
                                                    FUN_?(pvVar12);
                                                  }
                                                  pIVar13 = pMVar5->klass->rgctx_data[2].klass;
                                                  if ((pIVar13->field_0x135 & 1) == 0) {
                                                    pIVar13 = (Il2CppClass *)FUN_?(pIVar13);
                                                  }
                                                  return *(Vector3__Array **)pIVar13->static_fields;
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
                  pVVar4 = (Vector3__Array *)(*pcVar3)();
                  return pVVar4;
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
  pVVar4 = (Vector3__Array *)(*pcVar3)();
  return pVVar4;
}


/* Vector3[] GetVertices(Vector3[]) */

Vector3__Array *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
  List_1_UnityEngine_Vector3___ctor_1
            ((List_1_UnityEngine_Vector3_ *)this,(IEnumerable_1_UnityEngine_Vector3_ *)corners,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
            );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    if ((uint)(this->fields)._size < 8) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3__Array *)(*pcVar2)();
      return pVVar3;
    }
    pPVar4 = (this->fields)._items;
    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      if ((uint)pPVar4->max_length < 8) goto code_?;
      iVar5 = pPVar4->vector[7].Quadrant;
      iVar6 = pPVar4->vector[7].FirstAxisSign;
      iVar7 = pPVar4->vector[7].SecondAxisSign;
      piVar8 = &(this->fields)._version;
      *piVar8 = *piVar8 + 1;
      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar9 = (this->fields)._size;
        if (uVar9 < (uint)pPVar4->max_length) {
          (this->fields)._size = uVar9 + 1;
          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                     pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if ((uint)(this->fields)._size < 7) goto code_?;
        pPVar4 = (this->fields)._items;
        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
          if ((uint)pPVar4->max_length < 7) goto code_?;
          iVar5 = pPVar4->vector[6].Quadrant;
          iVar6 = pPVar4->vector[6].FirstAxisSign;
          iVar7 = pPVar4->vector[6].SecondAxisSign;
          piVar8 = &(this->fields)._version;
          *piVar8 = *piVar8 + 1;
          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar9 = (this->fields)._size;
            if (uVar9 < (uint)pPVar4->max_length) {
              (this->fields)._size = uVar9 + 1;
              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                         pMVar1->klass->rgctx_data[0xe].method);
            }
            pMVar1 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            if ((uint)(this->fields)._size < 2) goto code_?;
            pPVar4 = (this->fields)._items;
            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
              if ((uint)pPVar4->max_length < 2) goto code_?;
              iVar5 = pPVar4->vector[1].Quadrant;
              iVar6 = pPVar4->vector[1].FirstAxisSign;
              iVar7 = pPVar4->vector[1].SecondAxisSign;
              piVar8 = &(this->fields)._version;
              *piVar8 = *piVar8 + 1;
              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar9 = (this->fields)._size;
                if (uVar9 < (uint)pPVar4->max_length) {
                  (this->fields)._size = uVar9 + 1;
                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                             pMVar1->klass->rgctx_data[0xe].method);
                }
                pMVar1 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                ;
                if ((this->fields)._size == 0) goto code_?;
                pPVar4 = (this->fields)._items;
                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                  if ((int)pPVar4->max_length == 0) goto code_?;
                  iVar5 = pPVar4->vector[0].Quadrant;
                  iVar6 = pPVar4->vector[0].FirstAxisSign;
                  iVar7 = pPVar4->vector[0].SecondAxisSign;
                  piVar8 = &(this->fields)._version;
                  *piVar8 = *piVar8 + 1;
                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                    uVar9 = (this->fields)._size;
                    if (uVar9 < (uint)pPVar4->max_length) {
                      (this->fields)._size = uVar9 + 1;
                      if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                      PlaneIdHelper+PlaneQuadrantInfo]::
                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&stack0xffffffffffffffe8,
                                 pMVar1->klass->rgctx_data[0xe].method);
                    }
                    pMVar1 = 
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                    ;
                    if ((uint)(this->fields)._size < 6) goto code_?;
                    pPVar4 = (this->fields)._items;
                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      if ((uint)pPVar4->max_length < 6) goto code_?;
                      iVar5 = pPVar4->vector[5].Quadrant;
                      iVar6 = pPVar4->vector[5].FirstAxisSign;
                      iVar7 = pPVar4->vector[5].SecondAxisSign;
                      piVar8 = &(this->fields)._version;
                      *piVar8 = *piVar8 + 1;
                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar9 = (this->fields)._size;
                        if (uVar9 < (uint)pPVar4->max_length) {
                          (this->fields)._size = uVar9 + 1;
                          if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                          &stack0xffffffffffffffe8,
                                     pMVar1->klass->rgctx_data[0xe].method);
                        }
                        pMVar1 = 
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                        ;
                        if ((uint)(this->fields)._size < 5) goto code_?;
                        pPVar4 = (this->fields)._items;
                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                          if ((uint)pPVar4->max_length < 5) goto code_?;
                          iVar5 = pPVar4->vector[4].Quadrant;
                          iVar6 = pPVar4->vector[4].FirstAxisSign;
                          iVar7 = pPVar4->vector[4].SecondAxisSign;
                          piVar8 = &(this->fields)._version;
                          *piVar8 = *piVar8 + 1;
                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar9 = (this->fields)._size;
                            if (uVar9 < (uint)pPVar4->max_length) {
                              (this->fields)._size = uVar9 + 1;
                              if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                              &stack0xffffffffffffffe8,
                                         pMVar1->klass->rgctx_data[0xe].method);
                            }
                            pMVar1 = 
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                            ;
                            if ((uint)(this->fields)._size < 4) goto code_?;
                            pPVar4 = (this->fields)._items;
                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                              if ((uint)pPVar4->max_length < 4) goto code_?;
                              iVar5 = pPVar4->vector[3].Quadrant;
                              iVar6 = pPVar4->vector[3].FirstAxisSign;
                              iVar7 = pPVar4->vector[3].SecondAxisSign;
                              piVar8 = &(this->fields)._version;
                              *piVar8 = *piVar8 + 1;
                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                uVar9 = (this->fields)._size;
                                if (uVar9 < (uint)pPVar4->max_length) {
                                  (this->fields)._size = uVar9 + 1;
                                  if ((uint)pPVar4->max_length <= uVar9) goto code_?;
                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                  PlaneIdHelper+PlaneQuadrantInfo]::
                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                  &stack0xffffffffffffffe8,
                                             pMVar1->klass->rgctx_data[0xe].method);
                                }
                                pMVar1 = 
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                ;
                                if ((uint)(this->fields)._size < 3) goto code_?;
                                pPVar4 = (this->fields)._items;
                                if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                  if ((uint)pPVar4->max_length < 3) goto code_?;
                                  iVar5 = pPVar4->vector[2].Quadrant;
                                  iVar6 = pPVar4->vector[2].FirstAxisSign;
                                  iVar7 = pPVar4->vector[2].SecondAxisSign;
                                  piVar8 = &(this->fields)._version;
                                  *piVar8 = *piVar8 + 1;
                                  if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar9 = (this->fields)._size;
                                    if (uVar9 < (uint)pPVar4->max_length) {
                                      (this->fields)._size = uVar9 + 1;
                                      if ((uint)pPVar4->max_length <= uVar9)
                                      goto code_?;
                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                      pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                      pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                      &stack0xffffffffffffffe8,
                                                 pMVar1->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar1 = 
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                    ;
                                    if ((uint)(this->fields)._size < 5) goto code_?;
                                    pPVar4 = (this->fields)._items;
                                    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                      if ((uint)pPVar4->max_length < 5) goto code_?;
                                      iVar5 = pPVar4->vector[4].Quadrant;
                                      iVar6 = pPVar4->vector[4].FirstAxisSign;
                                      iVar7 = pPVar4->vector[4].SecondAxisSign;
                                      piVar8 = &(this->fields)._version;
                                      *piVar8 = *piVar8 + 1;
                                      if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar9 = (this->fields)._size;
                                        if (uVar9 < (uint)pPVar4->max_length) {
                                          (this->fields)._size = uVar9 + 1;
                                          if ((uint)pPVar4->max_length <= uVar9)
                                          goto code_?;
                                          pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                          pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                          pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                          PlaneIdHelper+PlaneQuadrantInfo]::
                                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                    (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                          &stack0xffffffffffffffe8,
                                                     pMVar1->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar1 = 
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                        ;
                                        if ((uint)(this->fields)._size < 8)
                                        goto code_?;
                                        pPVar4 = (this->fields)._items;
                                        if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                        {
                                          if ((uint)pPVar4->max_length < 8)
                                          goto code_?;
                                          iVar5 = pPVar4->vector[7].Quadrant;
                                          iVar6 = pPVar4->vector[7].FirstAxisSign;
                                          iVar7 = pPVar4->vector[7].SecondAxisSign;
                                          piVar8 = &(this->fields)._version;
                                          *piVar8 = *piVar8 + 1;
                                          if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                        0x0) {
                                            uVar9 = (this->fields)._size;
                                            if (uVar9 < (uint)pPVar4->max_length) {
                                              (this->fields)._size = uVar9 + 1;
                                              if ((uint)pPVar4->max_length <= uVar9)
                                              goto code_?;
                                              pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                              pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                              pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::List`1[RTG
                                              ::PlaneIdHelper+PlaneQuadrantInfo]::
                                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                        (this,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                              &stack0xffffffffffffffe8,
                                                         pMVar1->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar1 = 
                                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                            ;
                                            if ((this->fields)._size == 0)
                                            goto code_?;
                                            pPVar4 = (this->fields)._items;
                                            if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)
                                                          0x0) {
                                              if ((int)pPVar4->max_length == 0)
                                              goto code_?;
                                              iVar5 = pPVar4->vector[0].Quadrant;
                                              iVar6 = pPVar4->vector[0].FirstAxisSign;
                                              iVar7 = pPVar4->vector[0].SecondAxisSign;
                                              piVar8 = &(this->fields)._version;
                                              *piVar8 = *piVar8 + 1;
                                              if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array
                                                             *)0x0) {
                                                uVar9 = (this->fields)._size;
                                                if (uVar9 < (uint)pPVar4->max_length) {
                                                  (this->fields)._size = uVar9 + 1;
                                                  if ((uint)pPVar4->max_length <= uVar9)
                                                  goto code_?;
                                                  pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                  pPVar4->vector[(int)uVar9].FirstAxisSign = iVar6;
                                                  pPVar4->vector[(int)uVar9].SecondAxisSign = iVar7;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                }
                                                pMVar1 = 
                                                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                ;
                                                if ((uint)(this->fields)._size < 4)
                                                goto code_?;
                                                pPVar4 = (this->fields)._items;
                                                if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                  if ((uint)pPVar4->max_length < 4)
                                                  goto code_?;
                                                  iVar5 = pPVar4->vector[3].Quadrant;
                                                  iVar6 = pPVar4->vector[3].FirstAxisSign;
                                                  iVar7 = pPVar4->vector[3].SecondAxisSign;
                                                  piVar8 = &(this->fields)._version;
                                                  *piVar8 = *piVar8 + 1;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 7)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 7)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[6].Quadrant;
                                                    iVar6 = pPVar4->vector[6].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[6].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 6)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 6)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[5].Quadrant;
                                                    iVar6 = pPVar4->vector[5].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[5].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 3)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 3)
                                                    goto code_?;
                                                    iVar5 = pPVar4->vector[2].Quadrant;
                                                    iVar6 = pPVar4->vector[2].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[2].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                                  ;
                                                  if ((uint)(this->fields)._size < 2)
                                                  goto code_?;
                                                  pPVar4 = (this->fields)._items;
                                                  if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    if ((uint)pPVar4->max_length < 2) {
code_?:
                                                      FUN_?();
                                                      pcVar2 = (code *)swi(3);
                                                      pVVar3 = (Vector3__Array *)(*pcVar2)();
                                                      return pVVar3;
                                                    }
                                                    iVar5 = pPVar4->vector[1].Quadrant;
                                                    iVar6 = pPVar4->vector[1].FirstAxisSign;
                                                    iVar7 = pPVar4->vector[1].SecondAxisSign;
                                                    piVar8 = &(this->fields)._version;
                                                    *piVar8 = *piVar8 + 1;
                                                    if (pPVar4 != (
                                                  PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                                    uVar9 = (this->fields)._size;
                                                    if (uVar9 < (uint)pPVar4->max_length) {
                                                      (this->fields)._size = uVar9 + 1;
                                                      if ((uint)pPVar4->max_length <= uVar9)
                                                      goto code_?;
                                                      pPVar4->vector[(int)uVar9].Quadrant = iVar5;
                                                      pPVar4->vector[(int)uVar9].FirstAxisSign =
                                                           iVar6;
                                                      pPVar4->vector[(int)uVar9].SecondAxisSign =
                                                           iVar7;
                                                    }
                                                    else {
                                                      mscorlib.dll::System::Collections::Generic::
                                                      List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
                                                                                                            
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                            (this,(PlaneIdHelper_PlaneQuadrantInfo *
                                                                  )&stack0xffffffffffffffe8,
                                                             pMVar1->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar1 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ;
                                                  if ((this->fields)._size != 0) {
                                                    pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[3].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  pVVar3 = (Vector3__Array *)FUN_?(pvVar10);
                                                  mscorlib.dll::System::Array::Array_Copy_3
                                                            ((Array *)(this->fields)._items,0,
                                                             (Array *)pVVar3,0,(this->fields)._size
                                                             ,(MethodInfo *)0x0);
                                                  return pVVar3;
                                                  }
                                                  pvVar10 = 
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                                  ->klass->rgctx_data[2].rgctxDataDummy;
                                                  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0
                                                     ) {
                                                    pvVar10 = (void *)FUN_?(pvVar10);
                                                  }
                                                  if (*(int *)((longlong)pvVar10 + 0xe4) == 0) {
                                                    FUN_?(pvVar10);
                                                  }
                                                  pIVar11 = pMVar1->klass->rgctx_data[2].klass;
                                                  if ((pIVar11->field_0x135 & 1) == 0) {
                                                    pIVar11 = (Il2CppClass *)FUN_?(pIVar11);
                                                  }
                                                  return *(Vector3__Array **)pIVar11->static_fields;
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
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar2)();
  return pVVar3;
}


/* Void GetVertices(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetVertices_2
               (CubePickingInfo *info,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    if ((info->fields).pickedEdge == 0) {
      return;
    }
    cube = (info->fields).cube;
    uVar1._0_2_ = (info->fields).iLocalPos.x;
    uVar1._2_2_ = (info->fields).iLocalPos.y;
    iVar2 = (info->fields).iLocalPos.z;
    face = (info->fields).pickedFace;
    edge = (info->fields).pickedEdge;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar3 = 0;
    IStackX_8._0_4_ = uVar1;
    IStackX_8.z = iVar2;
    pVVar4 = Cube::Cube_GetEdgeVerticesWorld
                        (gameObject,cube,face,edge,&IStackX_8,(MethodInfo *)0x0);
    pVVar5 = Cube::Cube_GetEdge((info->fields).cube,(info->fields).pickedFace,
                                 (info->fields).pickedEdge,(MethodInfo *)0x0);
    if (pVVar5 != (Vector3__Array *)0x0) {
      if (((int)pVVar5->max_length != 0) && (1 < (uint)pVVar5->max_length)) {
        uVar6 = pVVar5->vector[1].x;
        uVar7 = pVVar5->vector[1].y;
        uVar8 = pVVar5->vector[0].x;
        fStack_9 = (float)uVar8 - (float)uVar6;
        fStack_10 = pVVar5->vector[0].y - (float)uVar7;
        fStack_11 = pVVar5->vector[0].z - pVVar5->vector[1].z;
        fVar12 = (float)FUN_?(&fStack_9);
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar13 = SharedCubeFunctions_ScaleFactor(gameObject,(MethodInfo *)0x0);
        fVar13 = fVar13 * _UNK_?;
        if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
        pVVar14 = pVVar4->vector;
        while( true ) {
          if ((int)pVVar4->max_length <= (int)uVar3) {
            return;
          }
          if ((uint)pVVar4->max_length <= uVar3) break;
          uVar15 = (info->fields).point.x;
          uVar16 = (info->fields).point.y;
          uVar17 = pVVar14->x;
          fVar18 = pVVar14->z - (info->fields).point.z;
          fVar19 = pVVar14->y - (float)uVar16;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          dVar20 = (double)(fVar19 * fVar19 +
                            ((float)uVar17 - (float)uVar15) * ((float)uVar17 - (float)uVar15) +
                           fVar18 * fVar18);
          if (dVar20 < 0.0) {
            dVar20 = (double)FUN_?();
          }
          else {
            auVar21._8_8_ = 0;
            auVar21._0_8_ = dVar20;
            auVar21 = sqrtpd(ZEXT816(0),auVar21);
            dVar20 = auVar21._0_8_;
          }
          if ((float)dVar20 < fVar13 * fVar12) {
            if (uVar3 != 0) {
              if (uVar3 == 1) {
                (info->fields).pickedEdgeIndex1 = 1;
              }
              goto code_?;
            }
            uVar3 = 1;
            (info->fields).pickedEdgeIndex0 = 1;
            pVVar14 = pVVar14 + 1;
          }
          else {
code_?:
            uVar3 = uVar3 + 1;
            pVVar14 = pVVar14 + 1;
          }
        }
      }
      FUN_?();
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Vector3 GetWorldCenter(List`1[UnityEngine.Transform]) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                    (Vector3 *__return_storage_ptr__,List_1_UnityEngine_Transform_ *transforms,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pNVar1 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively_2
                     (&NStack_2,transforms,(MethodInfo *)0x0);
  fVar3 = (pNVar1->value).m_Center.y;
  uVar4 = *(undefined1 *)&(pNVar1->value).m_Center.z;
  uVar5 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 1);
  uVar6 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 2);
  uVar7 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 3);
  if (pNVar1->hasValue == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar8->zeroVector).y;
    fVar3 = (pVVar8->zeroVector).z;
    __return_storage_ptr__->x = (pVVar8->zeroVector).x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (pNVar1->value).m_Center.x;
  __return_storage_ptr__->y = fVar3;
  *(undefined1 *)&__return_storage_ptr__->z = uVar4;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 1) = uVar5;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 2) = uVar6;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 3) = uVar7;
  return __return_storage_ptr__;
}


/* Vector3 GetWorldCenter(Transform) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                    (Vector3 *__return_storage_ptr__,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pNVar1 = SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                     (&NStack_2,transform,(MethodInfo *)0x0);
  fVar3 = (pNVar1->value).m_Center.y;
  uVar4 = *(undefined1 *)&(pNVar1->value).m_Center.z;
  uVar5 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 1);
  uVar6 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 2);
  uVar7 = *(undefined1 *)((longlong)&(pNVar1->value).m_Center.z + 3);
  if (pNVar1->hasValue == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar8->zeroVector).y;
    fVar3 = (pVVar8->zeroVector).z;
    __return_storage_ptr__->x = (pVVar8->zeroVector).x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (pNVar1->value).m_Center.x;
  __return_storage_ptr__->y = fVar3;
  *(undefined1 *)&__return_storage_ptr__->z = uVar4;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 1) = uVar5;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 2) = uVar6;
  *(undefined1 *)((longlong)&__return_storage_ptr__->z + 3) = uVar7;
  return __return_storage_ptr__;
}


/* Vector3 LocalToWorld(GameObject, IntVector) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,IntVector *iVector,
                    MethodInfo *method)

{
  if (gameObject != (GameObject *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (gameObject,(MethodInfo *)0x0);
    fStack_1 = (float)(int)iVector->z;
    if (obj != (Transform *)0x0) {
      uStack_2 = CONCAT44((float)(int)iVector->y,(float)(int)iVector->x);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      fStack_4 = 0.0;
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar6)();
        return pVVar7;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar6)();
        return pVVar7;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&uStack_2,&uStack_3);
      __return_storage_ptr__->x = (float)(undefined4)uStack_3;
      __return_storage_ptr__->y = (float)uStack_3._4_4_;
      __return_storage_ptr__->z = fStack_4;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* CubeOutOfBoundState MoveEdge(MVCubeModelBase, CubePickingInfo, Vector3, Single ByRef, Single
   ByRef, Single, Boolean ByRef, Boolean, Boolean, EditCubeChange ByRef) */

CubeOutOfBoundState__Enum
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_MoveEdge
          (MVCubeModelBase *cmb,CubePickingInfo *info,Vector3 *mousePositionDelta,float *delta,
          float *deltaAccum,float mouseSensitivity,bool *edgeMoved,bool edgeIndex0,bool edgeIndex1,
          EditCubeChange__Enum *editCubeChange,MethodInfo *method)

{
  pVStackX_18 = mousePositionDelta;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((info != (CubePickingInfo *)0x0) && (cmb != (MVCubeModelBase *)0x0)) &&
     (this = (cmb->fields).prototypeCubeModel, this != (RuntimePrototypeCubeModel *)0x0)) {
    IStackX_8.x = (info->fields).iLocalPos.x;
    IStackX_8.y = (info->fields).iLocalPos.y;
    IStackX_8.z = (info->fields).iLocalPos.z;
    pCVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                        (this,&IStackX_8,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pCVar1 == (Cube *)0x0) {
      return CubeOutOfBoundState__Enum_WithinBounds;
    }
    gameObject = (cmb->fields)._.gameObject;
    FVar2 = (info->fields).pickedFace;
    IStackX_8.x = 3;
    IStackX_8.y = 0;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = SharedCubeFunctions_ScaleFactor_1(gameObject,FVar2,(MethodInfo *)0x0);
    puVar4 = (undefined8 *)
              (*(cmb->klass->vtable).get_Scale.methodPtr)
                        (&VStack_5,cmb,(cmb->klass->vtable).get_Scale.method);
    uVar6 = *puVar4;
    VStack_5.z = *(float *)(puVar4 + 1);
    puVar4 = (undefined8 *)
              (*(cmb->klass->vtable).get_Scale.methodPtr)
                        (&VStack_5,cmb,(cmb->klass->vtable).get_Scale.method);
    uVar7 = *puVar4;
    VStack_5.z = *(float *)(puVar4 + 1);
    lVar8 = (*(cmb->klass->vtable).get_Scale.methodPtr)(&VStack_9);
    fVar3 = fVar3 * _UNK_?;
    pTVar10 = (cmb->fields)._.transform;
    fVar11 = ((float)((ulonglong)uVar7 >> 0x20) + (float)uVar6 + *(float *)(lVar8 + 8)) /
             _UNK_?;
    VStack_5._0_8_ = uVar6;
    if (pTVar10 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MStack_12.m00 = 0.0;
      MStack_12.m10 = 0.0;
      MStack_12.m20 = 0.0;
      MStack_12.m30 = 0.0;
      MStack_12.m01 = 0.0;
      MStack_12.m11 = 0.0;
      MStack_12.m21 = 0.0;
      MStack_12.m31 = 0.0;
      MStack_12.m02 = 0.0;
      MStack_12.m12 = 0.0;
      MStack_12.m22 = 0.0;
      MStack_12.m32 = 0.0;
      MStack_12.m03 = 0.0;
      MStack_12.m13 = 0.0;
      MStack_12.m23 = 0.0;
      MStack_12.m33 = 0.0;
      pvVar13 = (pTVar10->fields)._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        CVar15 = (*pcVar14)();
        return CVar15;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar14 = (code *)swi(3);
        CVar15 = (*pcVar14)();
        return CVar15;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(pvVar13,&MStack_12);
      FVar2 = (info->fields).pickedFace;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar16 = Cube::Cube_GetFaceAxis(&VStack_9,FVar2,(MethodInfo *)0x0);
      uVar17 = pVVar16->x;
      uVar18 = pVVar16->y;
      fVar19 = pVVar16->z;
      fVar20 = (float)uVar18 * MStack_12.m01 + (float)uVar17 * MStack_12.m00 +
               fVar19 * MStack_12.m02 + MStack_12.m03 * 0.0;
      fVar21 = (float)uVar18 * MStack_12.m11 + (float)uVar17 * MStack_12.m10 +
               fVar19 * MStack_12.m12 + MStack_12.m13 * 0.0;
      fVar22 = (float)uVar18 * MStack_12.m21 + (float)uVar17 * MStack_12.m20 +
               fVar19 * MStack_12.m22 + MStack_12.m23 * 0.0;
      fVar19 = *deltaAccum;
      VStack_5.x = (info->fields).point.x;
      VStack_5.y = (info->fields).point.y;
      fVar23 = fVar19 * fVar20 + VStack_5.x;
      fVar24 = fVar19 * fVar21 + VStack_5.y;
      fVar19 = fVar19 * fVar22 + (info->fields).point.z;
      fStackX_10 = fVar24 + fVar21;
      fStack_25 = fVar19 + fVar22;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = _UNK_?;
      uVar6 = _UNK_?;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar26 = _UNK_?;
      uVar27 = _UNK_?;
      VStack_28.y = fVar24;
      VStack_28.x = fVar23;
      fStack_29 = fStack_25;
      _UNK_? = (float)uVar6;
      _UNK_? = SUB84(uVar6,4);
      aVStack_30[0].x = _UNK_?;
      aVStack_30[0].y = _UNK_?;
      _UNK_? = (float)uVar7;
      _UNK_? = SUB84(uVar7,4);
      aVStack_30[0].z = _UNK_?;
      aVStack_30[0].w = _UNK_?;
      uStack_31 = CONCAT44(fStackX_10,fVar23 + fVar20);
      _UNK_? = uVar27;
      _UNK_? = uVar26;
      VStack_28.z = fVar19;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar14 = (code *)swi(3);
        CVar15 = (*pcVar14)();
        return CVar15;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(&VStack_28,&uStack_31,aVStack_30,0,1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_5.x = (pVVar32->upVector).x;
      VStack_5.y = (pVVar32->upVector).y;
      fVar33 = (pVVar32->upVector).z + fVar19;
      fVar34 = VStack_5.y + fVar24;
      uVar6._0_4_ = VStack_5.x + fVar23;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_35.x = _UNK_?;
      VStack_35.y = _UNK_?;
      VStack_35.z = _UNK_?;
      VStack_35.w = _UNK_?;
      VStack_5.y = fVar24;
      VStack_5.x = fVar23;
      uVar6._4_4_ = fVar34;
      VStack_5.z = fVar19;
      VStack_9._0_8_ = uVar6;
      VStack_9.z = fVar33;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar14 = (code *)swi(3);
        CVar15 = (*pcVar14)();
        return CVar15;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(&VStack_5,&VStack_9,&VStack_35,0,1);
      pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      uVar7._0_4_ = fVar23 + fVar20;
      if (pCVar36 != (Camera *)0x0) {
        uVar7._4_4_ = fVar24 + fVar21;
        VStack_5._0_8_ = uVar7;
        VStack_5.z = fVar19 + fVar22;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_28.x = 0.0;
        VStack_28.y = 0.0;
        VStack_28.z = 0.0;
        pvVar13 = (pCVar36->fields)._._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar36,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          CVar15 = (*pcVar14)();
          return CVar15;
        }
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar14 = (code *)swi(3);
          CVar15 = (*pcVar14)();
          return CVar15;
        }
        pcRam_? = pcVar14;
        (*pcRam_?)(pvVar13,&VStack_5,2,&VStack_28);
        pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar36 != (Camera *)0x0) {
          VStack_5.z = fVar19;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_31 = 0;
          fStack_29 = 0.0;
          pvVar13 = (pCVar36->fields)._._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar36,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            CVar15 = (*pcVar14)();
            return CVar15;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar14 = (code *)swi(3);
            CVar15 = (*pcVar14)();
            return CVar15;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13,&VStack_5,2,&uStack_31);
          fVar34 = VStack_28.x - (float)uStack_31;
          fVar33 = VStack_28.y - uStack_31._4_4_;
          fVar19 = VStack_28.z - fStack_29;
          uVar27._4_4_ = fVar33;
          uVar27._0_4_ = fVar34;
          VStack_28._0_8_ = uVar27;
          VStack_28.z = fVar19;
          fVar24 = (float)FUN_?(&VStack_28);
          fVar23 = _UNK_?;
          if (0.0 < fVar24) {
            VStack_5._0_8_ = uVar27;
            VStack_5.z = fVar19;
            fVar24 = (float)FUN_?(&VStack_5);
            if (fVar23 < fVar24) {
              fVar19 = fVar19 / fVar24;
              uStack_31 = CONCAT44(fVar33 / fVar24,fVar34 / fVar24);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_31._0_4_ = (pVVar32->zeroVector).x;
              uStack_31._4_4_ = (pVVar32->zeroVector).y;
              fVar19 = (pVVar32->zeroVector).z;
            }
            VStack_5.x = pVStackX_18->x;
            VStack_5.y = pVStackX_18->y;
            fVar33 = (float)uStack_31 * VStack_5.x;
            fVar37 = uStack_31._4_4_ * VStack_5.y;
            fVar24 = pVStackX_18->z;
            fVar34 = (float)FUN_?(&VStack_28);
            *delta = ((fVar37 + fVar33 + fVar19 * fVar24) / fVar34) * _UNK_? + *delta;
          }
          if (fVar3 / fVar11 <= (float)((uint)*delta & _UNK_?)) {
            fVar11 = (float)FUN_?();
            fVar3 = *delta;
            *delta = fVar3 - fVar11;
            *deltaAccum = (fVar3 - fVar11) + *deltaAccum;
            fVar3 = *delta;
            pTVar10 = (cmb->fields)._.transform;
            if ((info->fields).pickedEdge == 0) {
              if (pTVar10 == (Transform *)0x0) goto code_?;
              pMVar38 = (MethodInfo *)0x0;
              pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix(&MStack_12,pTVar10,(MethodInfo *)0x0);
              VStack_35.x = pMVar39->m03;
              VStack_35.y = pMVar39->m13;
              VStack_35.z = pMVar39->m23;
              VStack_35.w = pMVar39->m33;
              fVar11 = pMVar39->m00;
              fVar19 = pMVar39->m10;
              fVar24 = pMVar39->m20;
              fVar34 = pMVar39->m30;
              fVar33 = pMVar39->m01;
              fVar37 = pMVar39->m11;
              fVar40 = pMVar39->m21;
              fVar41 = pMVar39->m31;
              fVar42 = pMVar39->m02;
              fVar43 = pMVar39->m12;
              fVar44 = pMVar39->m22;
              fVar45 = pMVar39->m32;
              VStack_5.y = fVar21;
              VStack_5.x = fVar20;
              VStack_5.z = fVar22;
              fVar46 = (float)FUN_?(&VStack_5);
              if (fVar23 < fVar46) {
                fVar22 = fVar22 / fVar46;
                uStack_31 = CONCAT44(fVar21 / fVar46,fVar20 / fVar46);
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_31._0_4_ = (pVVar32->zeroVector).x;
                uStack_31._4_4_ = (pVVar32->zeroVector).y;
                fVar22 = (pVVar32->zeroVector).z;
              }
              VStack_5.z = fVar40 * uStack_31._4_4_ + fVar24 * (float)uStack_31 + fVar44 * fVar22
                             + VStack_35.z * 0.0;
              VStack_5.w = fVar41 * uStack_31._4_4_ + fVar34 * (float)uStack_31 + fVar45 * fVar22
                             + VStack_35.w * 0.0;
              VStack_5.y = fVar37 * uStack_31._4_4_ + fVar19 * (float)uStack_31 +
                             fVar43 * fVar22 + VStack_35.y * 0.0;
              VStack_5.x = fVar33 * uStack_31._4_4_ + fVar11 * (float)uStack_31 + fVar42 * fVar22
                             + VStack_35.x * 0.0;
              pVVar47 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_get_normalized
                                  (&VStack_35,&VStack_5,pMVar38);
              uVar48._0_4_ = pVVar47->x;
              uVar48._4_4_ = pVVar47->y;
              fVar11 = pVVar47->z;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_5._0_8_ = uVar48;
              VStack_5.z = fVar11;
              Cube::Cube_MoveFace(info,fVar3,(Vector3 *)&VStack_5,
                                  (CubeOutOfBoundState__Enum *)&IStackX_8,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_FaceMoved;
            }
            else if (edgeIndex0 == 0 && edgeIndex1 == 0) {
              if (pTVar10 == (Transform *)0x0) goto code_?;
              pMVar38 = (MethodInfo *)0x0;
              pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix(&MStack_12,pTVar10,(MethodInfo *)0x0);
              VStack_35.x = pMVar39->m03;
              VStack_35.y = pMVar39->m13;
              VStack_35.z = pMVar39->m23;
              VStack_35.w = pMVar39->m33;
              fVar11 = pMVar39->m00;
              fVar19 = pMVar39->m10;
              fVar24 = pMVar39->m20;
              fVar34 = pMVar39->m30;
              fVar33 = pMVar39->m01;
              fVar37 = pMVar39->m11;
              fVar40 = pMVar39->m21;
              fVar41 = pMVar39->m31;
              fVar42 = pMVar39->m02;
              fVar43 = pMVar39->m12;
              fVar44 = pMVar39->m22;
              fVar45 = pMVar39->m32;
              VStack_5.y = fVar21;
              VStack_5.x = fVar20;
              VStack_5.z = fVar22;
              fVar46 = (float)FUN_?(&VStack_5);
              if (fVar23 < fVar46) {
                fVar22 = fVar22 / fVar46;
                uStack_31 = CONCAT44(fVar21 / fVar46,fVar20 / fVar46);
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_31._0_4_ = (pVVar32->zeroVector).x;
                uStack_31._4_4_ = (pVVar32->zeroVector).y;
                fVar22 = (pVVar32->zeroVector).z;
              }
              VStack_5.z = fVar40 * uStack_31._4_4_ + fVar24 * (float)uStack_31 + fVar44 * fVar22
                             + VStack_35.z * 0.0;
              VStack_5.w = fVar41 * uStack_31._4_4_ + fVar34 * (float)uStack_31 + fVar45 * fVar22
                             + VStack_35.w * 0.0;
              VStack_5.y = fVar37 * uStack_31._4_4_ + fVar19 * (float)uStack_31 +
                             fVar43 * fVar22 + VStack_35.y * 0.0;
              VStack_5.x = fVar33 * uStack_31._4_4_ + fVar11 * (float)uStack_31 + fVar42 * fVar22
                             + VStack_35.x * 0.0;
              pVVar47 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_get_normalized
                                  (&VStack_35,&VStack_5,pMVar38);
              uVar49._0_4_ = pVVar47->x;
              uVar49._4_4_ = pVVar47->y;
              fVar11 = pVVar47->z;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_5._0_8_ = uVar49;
              VStack_5.z = fVar11;
              Cube::Cube_MoveEdge(info,fVar3,(Vector3 *)&VStack_5,
                                  (CubeOutOfBoundState__Enum *)&IStackX_8,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_EdgeMoved;
            }
            else {
              if (pTVar10 == (Transform *)0x0) goto code_?;
              pMVar38 = (MethodInfo *)0x0;
              pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_worldToLocalMatrix(&MStack_12,pTVar10,(MethodInfo *)0x0);
              VStack_35.x = pMVar39->m02;
              VStack_35.y = pMVar39->m12;
              VStack_35.z = pMVar39->m22;
              VStack_35.w = pMVar39->m32;
              fVar11 = pMVar39->m00;
              fVar19 = pMVar39->m10;
              fVar24 = pMVar39->m20;
              fVar34 = pMVar39->m30;
              fVar33 = pMVar39->m01;
              fVar37 = pMVar39->m11;
              fVar40 = pMVar39->m21;
              fVar41 = pMVar39->m31;
              fVar42 = pMVar39->m03;
              fVar43 = pMVar39->m13;
              fVar44 = pMVar39->m23;
              fVar45 = pMVar39->m33;
              VStack_5.y = fVar21;
              VStack_5.x = fVar20;
              VStack_5.z = fVar22;
              fVar46 = (float)FUN_?(&VStack_5);
              if (fVar23 < fVar46) {
                fVar22 = fVar22 / fVar46;
                uStack_31 = CONCAT44(fVar21 / fVar46,fVar20 / fVar46);
              }
              else {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
                uStack_31._0_4_ = (pVVar32->zeroVector).x;
                uStack_31._4_4_ = (pVVar32->zeroVector).y;
                fVar22 = (pVVar32->zeroVector).z;
              }
              VStack_5.z = uStack_31._4_4_ * fVar40 + (float)uStack_31 * fVar24 +
                             fVar22 * VStack_35.z + fVar44 * 0.0;
              VStack_5.w = uStack_31._4_4_ * fVar41 + (float)uStack_31 * fVar34 +
                             fVar22 * VStack_35.w + fVar45 * 0.0;
              VStack_5.y = fVar37 * uStack_31._4_4_ + fVar19 * (float)uStack_31 +
                             VStack_35.y * fVar22 + fVar43 * 0.0;
              VStack_5.x = fVar33 * uStack_31._4_4_ + fVar11 * (float)uStack_31 +
                             VStack_35.x * fVar22 + fVar42 * 0.0;
              pVVar47 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_get_normalized
                                  (&VStack_35,&VStack_5,pMVar38);
              uVar26._0_4_ = pVVar47->x;
              uVar26._4_4_ = pVVar47->y;
              fVar11 = pVVar47->z;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_5._0_8_ = uVar26;
              VStack_5.z = fVar11;
              Cube::Cube_MoveVertex
                        (info,fVar3,(Vector3 *)&VStack_5,edgeIndex0,edgeIndex1,
                         (CubeOutOfBoundState__Enum *)&IStackX_8,(MethodInfo *)0x0);
              *editCubeChange = EditCubeChange__Enum_VertexMoved;
            }
            bVar50 = 1;
            *delta = 0.0;
          }
          else {
            bVar50 = 0;
            IStackX_8._0_4_ = CubeOutOfBoundState__Enum_NoChange;
          }
          *edgeMoved = bVar50;
          return IStackX_8._0_4_;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  CVar15 = (*pcVar14)();
  return CVar15;
}


/* Single ScaleFactor(GameObject) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor
                (GameObject *gameObject,MethodInfo *method)

{
  fVar1 = 0.0;
  iVar2 = 0;
  if (gameObject != (GameObject *)0x0) {
    while( true ) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (gameObject->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        fVar1 = (float)(*pcVar4)();
        return fVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        fVar1 = (float)(*pcVar4)();
        return fVar1;
      }
      pcRam_? = pcVar4;
      pvVar3 = (void *)(*pcRam_?)(pvVar3);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar3,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar6 = obj[1].klass;
      if (pOVar6 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        fVar1 = (float)(*pcVar4)();
        return fVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        fVar1 = (float)(*pcVar4)();
        return fVar1;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar6);
      if (iVar2 == 0) {
        iVar2 = 1;
        fVar1 = fVar1 + 0.0;
      }
      else {
        if (iVar2 != 1) {
          if (iVar2 != 2) {
            uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this = (IndexOutOfRangeException *)func_?(uVar5);
            message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this,message,(MethodInfo *)0x0);
            uVar5 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(this,uVar5);
            pcVar4 = (code *)swi(3);
            fVar1 = (float)(*pcVar4)();
            return fVar1;
          }
          return (fVar1 + 0.0) / _UNK_?;
        }
        fVar1 = fVar1 + 0.0;
        iVar2 = 2;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar1 = (float)(*pcVar4)();
  return fVar1;
}


/* Single ScaleFactor(GameObject, Face) */

float Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_ScaleFactor_1
                (GameObject *gameObject,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_face);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(face) {
  case Face__Enum_Top:
  case Face__Enum_Bottom:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      fStack_3 = 0.0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_2);
      return uStack_2._4_4_;
    }
    break;
  case Face__Enum_Front:
  case Face__Enum_Back:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      fStack_3 = 0.0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_2);
      return fStack_3;
    }
    break;
  case Face__Enum_Left:
  case Face__Enum_Right:
    if ((gameObject != (GameObject *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (gameObject,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      fStack_3 = 0.0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_2);
      return (float)uStack_2;
    }
    break;
  default:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_face,(MethodInfo *)0x0);
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      fVar6 = (float)(*pcVar5)();
      return fVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)();
    return 0.0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Void SetLayerRecursively(Transform, Boolean) */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
               (Transform *t,bool select,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LogicSelected);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerSelected);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  if (t != (Transform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)t,(MethodInfo *)0x0);
    if (select == 0) {
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar2,(MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
      if (iVar3 == iVar4) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        layerName = StringLiteral_Default;
      }
      else {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          (pGVar2,(MethodInfo *)0x0);
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_LogicSelected,(MethodInfo *)0x0);
        if (iVar3 == iVar4) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          layerName = StringLiteral_Logic;
        }
        else {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (pGVar2,(MethodInfo *)0x0);
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_PlayerSelected,(MethodInfo *)0x0);
          if (iVar3 != iVar4) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          layerName = StringLiteral_Player;
        }
      }
    }
    else {
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (pGVar2,(MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      if (iVar3 == iVar4) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        layerName = StringLiteral_CamRotateTarget;
      }
      else {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)t,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          (pGVar2,(MethodInfo *)0x0);
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if (iVar3 == iVar4) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          layerName = StringLiteral_LogicSelected;
        }
        else {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (pGVar2,(MethodInfo *)0x0);
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Player,(MethodInfo *)0x0);
          if (iVar3 != iVar4) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)t,(MethodInfo *)0x0);
          layerName = StringLiteral_PlayerSelected;
        }
      }
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (layerName,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar2,iVar3,(MethodInfo *)0x0);
code_?:
      pIStackX_20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                              (t,(MethodInfo *)0x0);
      uStack_5 = 0;
      ppIStack_6 = &pIStackX_20;
      plStack_7 = alStack_1;
      do {
        if (pIStackX_20 == (IEnumerator *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        cVar9 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        pIVar10 = pIStackX_20;
        if (cVar9 == '\0') {
          alStack_1[0] = FUN_?(pIStackX_20,TypeInfo__System__IDisposable);
          if (alStack_1[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
          }
          return;
        }
        if (pIStackX_20 == (IEnumerator *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pIVar11 = pIStackX_20->klass;
        uVar12 = 0;
        uVar13._0_1_ = (pIVar11->_1).rank;
        uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
        if (uVar13 != 0) {
          do {
            if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar14 = &(pIVar11->vtable).MoveNext + (pIVar11->interfaceOffsets[uVar12].offset + 1);
              goto code_?;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
        }
        pVVar14 = (VirtualInvokeData *)
                  FUN_?(pIStackX_20,TypeInfo__System__Collections__IEnumerator);
code_?:
        pTVar15 = (Transform *)(*pVVar14->methodPtr)(pIVar10,pVVar14->method);
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        t_00 = (Transform *)0x0;
        if (pTVar15 != (Transform *)0x0) {
          bVar16 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar15->klass->_1).naturalAligment < bVar16) ||
             (t_00 = pTVar15,
             (pTVar15->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            FUN_?(pTVar15,TypeInfo__UnityEngine__Transform);
            goto code_?;
          }
        }
        SharedCubeFunctions_SetLayerRecursively(t_00,select,(MethodInfo *)0x0);
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 WorldPosToValidGridPos(GameObject, Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldPosToValidGridPos
                    (Vector3 *__return_storage_ptr__,GameObject *gameObject,Vector3 *worldPos,
                    int32_t cubeSegments,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeSegments_is_at_least_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cubeSegments < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_CubeSegments_is_at_least_1,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = _UNK_? / (float)cubeSegments;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = mscorlib.dll::System::Math::Math_Round_5
                     ((double)fVar1,2,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  fVar1 = (float)dVar2;
  if ((gameObject != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    uStack_3._0_4_ = worldPos->x;
    uStack_3._4_4_ = worldPos->y;
    fStack_4 = worldPos->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_5 = 0;
    fStack_6 = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&uStack_3);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar2 = (double)func_?((double)(float)uStack_5);
    dVar11 = (double)func_?((double)uStack_5._4_4_);
    dVar12 = (double)func_?((double)fStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    iVar14 = 0;
    uVar15 = (pVVar13->oneVector).x;
    fVar16 = (float)dVar2 - (float)uVar15 * _UNK_?;
    fVar17 = (float)dVar11 - (pVVar13->oneVector).y * _UNK_?;
    fVar18 = (float)dVar12 - (pVVar13->oneVector).z * _UNK_?;
    while( true ) {
      while( true ) {
        if (iVar14 == 0) {
          fVar19 = (float)uStack_5;
          fVar20 = fVar16;
        }
        else if (iVar14 == 1) {
          fVar19 = uStack_5._4_4_;
          fVar20 = fVar17;
        }
        else {
          fVar19 = fStack_6;
          fVar20 = fVar18;
          if (iVar14 != 2) {
            uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            pIVar21 = (IndexOutOfRangeException *)func_?(uVar10);
            pSVar22 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (pIVar21,pSVar22,(MethodInfo *)0x0);
            uVar10 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(pIVar21,uVar10);
            pcVar8 = (code *)swi(3);
            pVVar9 = (Vector3 *)(*pcVar8)();
            return pVVar9;
          }
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
        dVar2 = (double)func_?((double)((fVar19 - fVar20) / fVar1));
        iVar23 = (int)dVar2;
        if (iVar14 != 0) break;
        iVar14 = 1;
        fVar16 = (float)iVar23 * fVar1 + fVar16;
      }
      if (iVar14 != 1) break;
      iVar14 = 2;
      fVar17 = (float)iVar23 * fVar1 + fVar17;
    }
    if (iVar14 != 2) {
      uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar21 = (IndexOutOfRangeException *)func_?(uVar10);
      pSVar22 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (pIVar21,pSVar22,(MethodInfo *)0x0);
      uVar10 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      FUN_?(pIVar21,uVar10);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    fVar18 = (float)iVar23 * fVar1 + fVar18;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (gameObject->fields)._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    pvVar7 = (void *)(*pcRam_?)(pvVar7);
    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar7,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
    if (obj_00 != (Object *)0x0) {
      uStack_3 = CONCAT44(fVar17,fVar16);
      fStack_4 = fVar18;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      fStack_6 = 0.0;
      pOVar24 = obj_00[1].klass;
      if (pOVar24 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        pVVar9 = (Vector3 *)(*pcVar8)();
        return pVVar9;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        pVVar9 = (Vector3 *)(*pcVar8)();
        return pVVar9;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pOVar24,&uStack_3,&uStack_5);
      __return_storage_ptr__->x = (float)uStack_5;
      __return_storage_ptr__->y = uStack_5._4_4_;
      __return_storage_ptr__->z = fStack_6;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* IntVector WorldToLocal(GameObject, Vector3, Boolean) */

IntVector *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
          (IntVector *__return_storage_ptr__,GameObject *gameObject,Vector3 *point,bool floor,
          MethodInfo *method)

{
  if ((gameObject == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pIVar2 = (IntVector *)(*pcVar1)();
    return pIVar2;
  }
  uStack_3._0_4_ = point->x;
  uStack_3._4_4_ = point->y;
  fStack_4 = point->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pIVar2 = (IntVector *)(*pcVar1)();
    return pIVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    pIVar2 = (IntVector *)(*pcVar1)();
    return pIVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7,&uStack_3,&uStack_5);
  if (floor == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar9 = (double)FUN_?((double)(float)uStack_5,0);
    dVar10 = (double)FUN_?((double)uStack_5._4_4_,0);
    dVar11 = (double)FUN_?((double)fStack_6,0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar9 = (double)func_?((double)(float)uStack_5);
    dVar10 = (double)func_?((double)uStack_5._4_4_);
    dVar11 = (double)func_?((double)fStack_6);
  }
  __return_storage_ptr__->x = (int16_t)(int)dVar9;
  __return_storage_ptr__->y = (int16_t)(int)dVar10;
  __return_storage_ptr__->z = (int16_t)(int)dVar11;
  return __return_storage_ptr__;
}


/* SharedCubeFunctions() */

void Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&_0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_0D9366A7866315145DF405E103A928871A65FDCA218CFE82B66F5719CDE799D2_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_3086B2DEF3530EA0C41DA25BE54853897C14DAD1F4F971862B51BE6A23E31DB5_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_3212133D503E3733C58BC9245B27816D0AB019E8F256167D94EE2EF1AA253C17_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_3E684BA6BE12099B15008C988C9A2A2F39C4998ED5AAB1F628B7903354331F2F_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_3EA0E73E350002B637E873B7CB7348DD7E1BCE73102F97D2B1FA8693ECC0DAEE_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_44213D5337CB506057EAFD42FA33A4776A44B0A5B0DA2405701680673CE173A2_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_59E3B3AC5476357BCD66274BB6A67316738712645A4299A570105FFE4826372C_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_5C7EED3CACF93747DA516A9AC649BE9445AC47109AEE57E8B6A6EB6741768A25_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_69D5B9635C30CE068AB88DFE7AEC46AA236E6BFBE8C95FF0E8D63741A1A12912_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_7671F4AC667CD05AE5E6F74DCB7160FE6B34A775A4B2BC985EA5F05EDB5F0E8C_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_78C1F43AB6F856DFB12C9E73F27EE7883763E8A6A3D27F49A8E89A74DE3DD84A_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_974B7612E2388B86C1BC0353AC9B2F65B6957BF64200ACC73E0A7BD063BA7469_Field);
    LOCK();
    UNLOCK();
    FUN_?(&A53B3522877C6E2C38B170CB40FA7BCAE5DD40492EE274555BA018EEE935E33B_Field);
    LOCK();
    UNLOCK();
    FUN_?(&A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field);
    LOCK();
    UNLOCK();
    FUN_?(&A8D5E66148A8596B4CA037E02125BDA105EEBB89FDA286BAB2B89D08F69FC8EA_Field);
    LOCK();
    UNLOCK();
    FUN_?(&AB04D5434C9E64B5F7652A8D9A9172F0A1CB0E8D294133D8A2A144C25AEFBC53_Field);
    LOCK();
    UNLOCK();
    FUN_?(&AC748DFBD4E9609670D8D4ACCE70E4F010449ED0E59EE6A9F38BB2425D5DB9B4_Field);
    LOCK();
    UNLOCK();
    FUN_?(&B575398F444AEB797A8E12CEEAD67595A3CCB4B903BE0CB6978BE00431F4FD94_Field);
    LOCK();
    UNLOCK();
    FUN_?(&BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_Field);
    LOCK();
    UNLOCK();
    FUN_?(&BD1586D96349669994A64F043D5272C820092DC8F3A204F4A8BBA71A213370F7_Field);
    LOCK();
    UNLOCK();
    FUN_?(&D338C7CFBD24E8741DD131258566A2A6062F965C156F701C380EE71B840DE304_Field);
    LOCK();
    UNLOCK();
    FUN_?(&EA0939139B805DAC80B699838CDDE55214E0993F0E60ED1EF04BA14ED2DB380F_Field);
    LOCK();
    UNLOCK();
    FUN_?(&EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field);
    LOCK();
    UNLOCK();
    FUN_?(&F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  (pSVar1->constraint).x = 0x18;
  (pSVar1->constraint).y = 0x18;
  (pSVar1->constraint).z = 0x18;
  pIVar2 = (Int32__Array__Array *)FUN_?(TypeInfo__System__Int32,6);
  pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            (pAVar3,_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_Field,
             (MethodInfo *)0x0);
  if (pIVar2 != (Int32__Array__Array *)0x0) {
    FUN_?(pIVar2,0);
    pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar3,_D338C7CFBD24E8741DD131258566A2A6062F965C156F701C380EE71B840DE304_Field,
               (MethodInfo *)0x0);
    FUN_?(pIVar2,1);
    pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar3,__3E684BA6BE12099B15008C988C9A2A2F39C4998ED5AAB1F628B7903354331F2F_Field,
               (MethodInfo *)0x0);
    FUN_?(pIVar2,2);
    pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar3,_EA0939139B805DAC80B699838CDDE55214E0993F0E60ED1EF04BA14ED2DB380F_Field,
               (MethodInfo *)0x0);
    FUN_?(pIVar2,3);
    pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar3,_AC748DFBD4E9609670D8D4ACCE70E4F010449ED0E59EE6A9F38BB2425D5DB9B4_Field,
               (MethodInfo *)0x0);
    FUN_?(pIVar2,4);
    pAVar3 = (Array *)FUN_?(TypeInfo__System__Int32,4);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar3,_AB04D5434C9E64B5F7652A8D9A9172F0A1CB0E8D294133D8A2A144C25AEFBC53_Field,
               (MethodInfo *)0x0);
    FUN_?(pIVar2,5);
    bVar4 = iRam_? != 0;
    TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes = pIVar2;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__SharedCubeFunctions->static_fields->FaceIndexToVertexIndexes >> 0xc
                     );
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pDVar9 = (Dictionary_2_System_Int32_System_Int32___Array *)
             FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>,6);
    pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
             FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    FUN_?(pDVar10,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      uVar11 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar10,0,0,(InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar10,1,1,(InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar10,2,2,(InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (pDVar10,3,3,(InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      if (pDVar9 != (Dictionary_2_System_Int32_System_Int32___Array *)0x0) {
        lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
        if (lVar6 == 0) {
          uVar11 = FUN_?();
          FUN_?(uVar11,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FUN_?(pDVar9,0);
        pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
                 FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
        FUN_?(pDVar10,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
        if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (pDVar10,4,0,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (pDVar10,5,1,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (pDVar10,6,2,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (pDVar10,7,3,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar11 = FUN_?();
            FUN_?(uVar11,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FUN_?(pDVar9,1);
          pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
                   FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
          FUN_?(pDVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                       );
          if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryInsert
                      (pDVar10,7,0,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                       ->klass->rgctx_data[0x22].method);
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryInsert
                      (pDVar10,6,1,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                       ->klass->rgctx_data[0x22].method);
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryInsert
                      (pDVar10,1,2,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                       ->klass->rgctx_data[0x22].method);
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryInsert
                      (pDVar10,0,3,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                       ->klass->rgctx_data[0x22].method);
            lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
            if (lVar6 == 0) {
              uVar11 = FUN_?();
              FUN_?(uVar11,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FUN_?(pDVar9,2);
            pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
                     FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
            FUN_?(pDVar10,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                         );
            if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__TryInsert
                        (pDVar10,5,0,(InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                         ->klass->rgctx_data[0x22].method);
              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__TryInsert
                        (pDVar10,4,1,(InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                         ->klass->rgctx_data[0x22].method);
              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__TryInsert
                        (pDVar10,3,2,(InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                         ->klass->rgctx_data[0x22].method);
              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]
              ::Dictionary_2_System_Int32_System_Int32__TryInsert
                        (pDVar10,2,3,(InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                         ->klass->rgctx_data[0x22].method);
              lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
              if (lVar6 == 0) {
                uVar11 = FUN_?();
                FUN_?(uVar11,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              FUN_?(pDVar9,3);
              pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
                       FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
              FUN_?(pDVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                           );
              if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                          (pDVar10,4,0,(InsertionBehavior__Enum)uVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                           ->klass->rgctx_data[0x22].method);
                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                          (pDVar10,7,1,(InsertionBehavior__Enum)uVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                           ->klass->rgctx_data[0x22].method);
                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                          (pDVar10,0,2,(InsertionBehavior__Enum)uVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                           ->klass->rgctx_data[0x22].method);
                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                          (pDVar10,3,3,(InsertionBehavior__Enum)uVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                           ->klass->rgctx_data[0x22].method);
                lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
                if (lVar6 == 0) {
                  uVar11 = FUN_?();
                  FUN_?(uVar11,0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                FUN_?(pDVar9,4);
                pDVar10 = (Dictionary_2_System_Int32_System_Int32_ *)
                         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>)
                ;
                FUN_?(pDVar10,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
                             );
                if (pDVar10 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                            (pDVar10,6,0,(InsertionBehavior__Enum)uVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                             ->klass->rgctx_data[0x22].method);
                  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                            (pDVar10,5,1,(InsertionBehavior__Enum)uVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                             ->klass->rgctx_data[0x22].method);
                  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                            (pDVar10,2,2,(InsertionBehavior__Enum)uVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                             ->klass->rgctx_data[0x22].method);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                            (pDVar10,1,3,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                             ->klass->rgctx_data[0x22].method);
                  lVar6 = FUN_?(pDVar10,(pDVar9->klass->_0).element_class);
                  if (lVar6 == 0) {
                    uVar11 = FUN_?();
                    FUN_?(uVar11,0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  FUN_?(pDVar9,5,pDVar10);
                  bVar4 = iRam_? != 0;
                  TypeInfo__SharedCubeFunctions->static_fields->VertexIndexToFaceIndexes = pDVar9;
                  if (bVar4) {
                    uVar5 = (uint)((ulonglong)
                                    &TypeInfo__SharedCubeFunctions->static_fields->
                                     VertexIndexToFaceIndexes >> 0xc);
                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar4 = uVar7 == *puVar8;
                      if (bVar4) {
                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  pIVar13 = (IntVector__Array__Array *)
                            FUN_?(TypeInfo__MV__WorldObject__IntVector,0x18);
                  lVar6 = FUN_?(TypeInfo__MV__WorldObject__IntVector,4);
                  if (lVar6 != 0) {
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined4 *)(lVar6 + 0x20) = 0x1ffff;
                      *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                      if (1 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                        *(undefined2 *)(lVar6 + 0x2a) = 0;
                        if (2 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined4 *)(lVar6 + 0x2c) = 0x10000;
                          *(undefined2 *)(lVar6 + 0x30) = 0;
                          if (3 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined4 *)(lVar6 + 0x32) = 0x10000;
                            *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                            if (pIVar13 != (IntVector__Array__Array *)0x0) {
                              FUN_?(pIVar13,0);
                              lVar6 = FUN_?(TypeInfo__MV__WorldObject__IntVector,4);
                              if (lVar6 != 0) {
                                if (*(int *)(lVar6 + 0x18) != 0) {
                                  *(undefined4 *)(lVar6 + 0x20) = 0x10000;
                                  *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                    *(undefined4 *)(lVar6 + 0x26) = 0x10000;
                                    *(undefined2 *)(lVar6 + 0x2a) = 0;
                                    if (2 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                      *(undefined2 *)(lVar6 + 0x30) = 0;
                                      if (3 < *(uint *)(lVar6 + 0x18)) {
                                        *(undefined4 *)(lVar6 + 0x32) = 0x10001;
                                        *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                        FUN_?(pIVar13,1);
                                        lVar6 = FUN_?(TypeInfo__MV__WorldObject__IntVector,4
                                                             );
                                        if (lVar6 == 0) goto code_?;
                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                          *(undefined4 *)(lVar6 + 0x20) = 0x10000;
                                          *(undefined2 *)(lVar6 + 0x24) = 0;
                                          if (1 < *(uint *)(lVar6 + 0x18)) {
                                            *(undefined4 *)(lVar6 + 0x26) = 0x10000;
                                            *(undefined2 *)(lVar6 + 0x2a) = 1;
                                            if (2 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                              *(undefined2 *)(lVar6 + 0x30) = 1;
                                              if (3 < *(uint *)(lVar6 + 0x18)) {
                                                *(undefined4 *)(lVar6 + 0x32) = 0x10001;
                                                *(undefined2 *)(lVar6 + 0x36) = 0;
                                                FUN_?(pIVar13,2);
                                                lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                if (lVar6 == 0) goto code_?;
                                                if (*(int *)(lVar6 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar6 + 0x20) = 0x1ffff;
                                                  *(undefined2 *)(lVar6 + 0x24) = 0;
                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                                                    *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                    if (2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x2c) = 0x10000;
                                                      *(undefined2 *)(lVar6 + 0x30) = 1;
                                                      if (3 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x32) = 0x10000;
                                                        *(undefined2 *)(lVar6 + 0x36) = 0;
                                                        FUN_?(pIVar13,3);
                                                        lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffffffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff0000;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0000
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,4);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0000;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff0000;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff0001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,5);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0000;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff0000;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff0001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,6);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffffffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff0000;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0000
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,7);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0xffff;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0000
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,8);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0000;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 1;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0xffff;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,9);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x10000;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0xffff;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 1;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,10);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10000;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0xffff;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0xffff;
                                                          FUN_?(pIVar13,0xb);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0000;
                                                    *(undefined2 *)(lVar6 + 0x24) = 1;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 1;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0xc);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 1;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0000
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0xd);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 1;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10000;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0xe);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0;
                                                    *(undefined2 *)(lVar6 + 0x24) = 1;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x10000;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 1;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 1;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0xf);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffffffff
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0x10);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0xffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0xffff;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffffffff
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,0x11);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x1ffff;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,0x12);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x1ffff;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x1ffff;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0x13);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0001;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 1;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 1;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,0x14);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xffff0001;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 1;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 1;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 0xffff0001
                                                          ;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0x15);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 1;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x10001;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 1;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 1;
                                                          *(undefined2 *)(lVar6 + 0x36) = 1;
                                                          FUN_?(pIVar13,0x16);
                                                          lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,4);
                                                  if (lVar6 == 0) goto code_?;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 1;
                                                    *(undefined2 *)(lVar6 + 0x24) = 0xffff;
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + 0x26) = 0x10001;
                                                      *(undefined2 *)(lVar6 + 0x2a) = 0xffff;
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined4 *)(lVar6 + 0x2c) = 0x10001;
                                                        *(undefined2 *)(lVar6 + 0x30) = 0;
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + 0x32) = 1;
                                                          *(undefined2 *)(lVar6 + 0x36) = 0;
                                                          FUN_?(pIVar13,0x17);
                                                          TypeInfo__SharedCubeFunctions->
                                                          static_fields->LightTestOffsets = pIVar13;
                                                          func_?(&
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestOffsets);
                                                  pFVar14 = (Face__Enum__Array__Array *)
                                                            FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,0x18);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __59E3B3AC5476357BCD66274BB6A67316738712645A4299A570105FFE4826372C_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar14 != (Face__Enum__Array__Array *)0x0) {
                                                    FUN_?(pFVar14,0);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _A53B3522877C6E2C38B170CB40FA7BCAE5DD40492EE274555BA018EEE935E33B_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,1);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __5C7EED3CACF93747DA516A9AC649BE9445AC47109AEE57E8B6A6EB6741768A25_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,2);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __44213D5337CB506057EAFD42FA33A4776A44B0A5B0DA2405701680673CE173A2_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,3);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __3212133D503E3733C58BC9245B27816D0AB019E8F256167D94EE2EF1AA253C17_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,4);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __78C1F43AB6F856DFB12C9E73F27EE7883763E8A6A3D27F49A8E89A74DE3DD84A_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,5);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _B575398F444AEB797A8E12CEEAD67595A3CCB4B903BE0CB6978BE00431F4FD94_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,6);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __69D5B9635C30CE068AB88DFE7AEC46AA236E6BFBE8C95FF0E8D63741A1A12912_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,7,pAVar3);
                                                  lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 5,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 3;
                                                    FUN_?(pFVar14,8,lVar6);
                                                    lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 3,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 4;
                                                    FUN_?(pFVar14,9);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,10);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _A8D5E66148A8596B4CA037E02125BDA105EEBB89FDA286BAB2B89D08F69FC8EA_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0xb,pAVar3);
                                                  lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 2,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 4;
                                                    FUN_?(pFVar14,0xc,lVar6);
                                                    lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 5,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 2;
                                                    FUN_?(pFVar14,0xd);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0xe);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __7671F4AC667CD05AE5E6F74DCB7160FE6B34A775A4B2BC985EA5F05EDB5F0E8C_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0xf,pAVar3);
                                                  lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 5,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 2;
                                                    FUN_?(pFVar14,0x10,lVar6);
                                                    lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 3,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 5;
                                                    FUN_?(pFVar14,0x11);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __974B7612E2388B86C1BC0353AC9B2F65B6957BF64200ACC73E0A7BD063BA7469_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0x12);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _EB3EA27B21B258CCA651A8DE5834B657D518ABA9AF99B6BEB2C0CCBB27C0C8F5_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0x13,pAVar3);
                                                  lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 3,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 4;
                                                    FUN_?(pFVar14,0x14,lVar6);
                                                    lVar6 = FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  if (lVar6 != 0) {
                                                    if ((*(uint *)(lVar6 + 0x18) < 2) ||
                                                       (*(undefined4 *)(lVar6 + 0x24) = 4,
                                                       *(uint *)(lVar6 + 0x18) < 3))
                                                    goto code_?;
                                                    *(undefined4 *)(lVar6 + 0x28) = 2;
                                                    FUN_?(pFVar14,0x15);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _BD1586D96349669994A64F043D5272C820092DC8F3A204F4A8BBA71A213370F7_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0x16);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __12C98A439AD9BDD8E757CC8DE108146D6D2552CA5A534FEEA589561F558525A3_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pFVar14,0x17);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestNormalTargetFaces = pFVar14;
                                                  func_?(&TypeInfo__SharedCubeFunctions
                                                                       ->static_fields->
                                                                       LightTestNormalTargetFaces);
                                                  array = (Face__Enum__Array *)
                                                          FUN_?(
                                                  TypeInfo__MV__WorldObject__Face,0x18);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)array,
                                                                                                                          
                                                  __3EA0E73E350002B637E873B7CB7348DD7E1BCE73102F97D2B1FA8693ECC0DAEE_Field
                                                  ,(MethodInfo *)0x0);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestNormalSecondaryTargetFaces = array;
                                                  func_?(&TypeInfo__SharedCubeFunctions
                                                                       ->static_fields->
                                                                                                                                              
                                                  LightTestNormalSecondaryTargetFaces);
                                                  pIVar2 = (Int32__Array__Array *)
                                                           FUN_?(TypeInfo__System__Int32,6);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pIVar2 != (Int32__Array__Array *)0x0) {
                                                    FUN_?(pIVar2,0);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,1);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,2);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,3);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,4);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,5);
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestOppositeFaceCorners = pIVar2;
                                                  func_?(&TypeInfo__SharedCubeFunctions
                                                                       ->static_fields->
                                                                       LightTestOppositeFaceCorners)
                                                  ;
                                                  pIVar2 = (Int32__Array__Array *)
                                                           FUN_?(TypeInfo__System__Int32,6);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _F565169B16BA9172A376C4BBC695B7586ADD01DC1142CDBBDF803D30DC68A148_Field
                                                  ,(MethodInfo *)0x0);
                                                  if (pIVar2 != (Int32__Array__Array *)0x0) {
                                                    FUN_?(pIVar2,0);
                                                    pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __7DE6C05FE260533E58F5F5D7195356F52AA241A405B3EC59D9A7E618A31EB70B_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,1);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  _A69DBB9813CAFBDB74661959B1EB85075542F30F2CE490C308D06C3AACEAAF42_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,2);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,3);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __7BCBDCCC340EA4ECBDD35B946E4F1C88E504A39C0708D3155A5C65E1B4183290_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,4);
                                                  pAVar3 = (Array *)FUN_?(
                                                  TypeInfo__System__Int32,4);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar3,
                                                  __8FD9A02CC3EC720EFB3B246422557271F0349320C1E14523AD7E1A6D2D963700_Field
                                                  ,(MethodInfo *)0x0);
                                                  FUN_?(pIVar2,5);
                                                  bVar4 = iRam_? != 0;
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestSameFaceCorners = pIVar2;
                                                  if (bVar4) {
                                                    uVar5 = (uint)((ulonglong)
                                                                    &TypeInfo__SharedCubeFunctions->
                                                                     static_fields->
                                                                     LightTestSameFaceCorners >> 0xc
                                                                   );
                                                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                      LOCK();
                                                      bVar4 = uVar7 == *puVar8;
                                                      if (bVar4) {
                                                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar4);
                                                  }
                                                  pIVar15 = (IntVector__Array *)
                                                            FUN_?(
                                                  TypeInfo__MV__WorldObject__IntVector,6);
                                                  if (pIVar15 == (IntVector__Array *)0x0) {
                                                    FUN_?();
                                                    pcVar12 = (code *)swi(3);
                                                    (*pcVar12)();
                                                    return;
                                                  }
                                                  if ((int)pIVar15->max_length != 0) {
                                                    pIVar15->vector[0].x = 0;
                                                    pIVar15->vector[0].y = -1;
                                                    pIVar15->vector[0].z = 0;
                                                    if (1 < (uint)pIVar15->max_length) {
                                                      pIVar15->vector[1].x = 0;
                                                      pIVar15->vector[1].y = 1;
                                                      pIVar15->vector[1].z = 0;
                                                      if (2 < (uint)pIVar15->max_length) {
                                                        pIVar15->vector[2].x = 0;
                                                        pIVar15->vector[2].y = 0;
                                                        pIVar15->vector[2].z = 1;
                                                        if (3 < (uint)pIVar15->max_length) {
                                                          pIVar15->vector[3].x = 0;
                                                          pIVar15->vector[3].y = 0;
                                                          pIVar15->vector[3].z = -1;
                                                          if (4 < (uint)pIVar15->max_length) {
                                                            pIVar15->vector[4].x = 1;
                                                            pIVar15->vector[4].y = 0;
                                                            pIVar15->vector[4].z = 0;
                                                            if (5 < (uint)pIVar15->max_length) {
                                                              pIVar15->vector[5].x = -1;
                                                              pIVar15->vector[5].y = 0;
                                                              pIVar15->vector[5].z = 0;
                                                              TypeInfo__SharedCubeFunctions->
                                                              static_fields->LightTestInwardsOffset
                                                                   = pIVar15;
                                                              if (iRam_? != 0) {
                                                                uVar5 = (uint)((ulonglong)
                                                                                &
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  LightTestInwardsOffset >> 0xc);
                                                  lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                    puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                    LOCK();
                                                    bVar4 = uVar7 == *puVar8;
                                                    if (bVar4) {
                                                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar4);
                                                  }
                                                  pIVar16 = (Int32__Array *)
                                                            FUN_?(TypeInfo__System__Int32,6)
                                                  ;
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)pIVar16,
                                                                                                                          
                                                  __3086B2DEF3530EA0C41DA25BE54853897C14DAD1F4F971862B51BE6A23E31DB5_Field
                                                  ,(MethodInfo *)0x0);
                                                  bVar4 = iRam_? != 0;
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  FaceHeightAxis = pIVar16;
                                                  if (bVar4) {
                                                    uVar5 = (uint)((ulonglong)
                                                                    &TypeInfo__SharedCubeFunctions->
                                                                     static_fields->FaceHeightAxis
                                                                   >> 0xc);
                                                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                      LOCK();
                                                      bVar4 = uVar7 == *puVar8;
                                                      if (bVar4) {
                                                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar4);
                                                  }
                                                  pIVar16 = (Int32__Array *)
                                                            FUN_?(TypeInfo__System__Int32,6)
                                                  ;
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)pIVar16,
                                                                                                                          
                                                  __0D9366A7866315145DF405E103A928871A65FDCA218CFE82B66F5719CDE799D2_Field
                                                  ,(MethodInfo *)0x0);
                                                  bVar4 = iRam_? != 0;
                                                  TypeInfo__SharedCubeFunctions->static_fields->
                                                  FaceDirectionScalar = pIVar16;
                                                  if (bVar4) {
                                                    uVar5 = (uint)((ulonglong)
                                                                    &TypeInfo__SharedCubeFunctions->
                                                                     static_fields->
                                                                     FaceDirectionScalar >> 0xc);
                                                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                      LOCK();
                                                      bVar4 = uVar7 == *puVar8;
                                                      if (bVar4) {
                                                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar4);
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar12 = (code *)swi(3);
                                                  (*pcVar12)();
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
                                                  goto code_?;
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
                                goto code_?;
                              }
                            }
                            goto code_?;
                          }
                        }
                      }
                    }
code_?:
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
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
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* IntVector get_CubeConstraint() */

IntVector *
Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraint
          (IntVector *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  iVar2 = (pSVar1->constraint).y;
  __return_storage_ptr__->x = (pSVar1->constraint).x;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = (pSVar1->constraint).z;
  return __return_storage_ptr__;
}


/* Vector3 get_CubeConstraintVector3() */

Vector3 * Assembly-CSharp.dll::SharedCubeFunctions::SharedCubeFunctions_get_CubeConstraintVector3
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SharedCubeFunctions);
  }
  pSVar1 = TypeInfo__SharedCubeFunctions->static_fields;
  sVar2 = (pSVar1->constraint).y;
  __return_storage_ptr__->x = (float)(int)(pSVar1->constraint).x;
  sVar3 = (pSVar1->constraint).z;
  __return_storage_ptr__->y = (float)(int)sVar2;
  __return_storage_ptr__->z = (float)(int)sVar3;
  return __return_storage_ptr__;
}

