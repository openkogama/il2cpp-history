
/* Boolean BoxIntersectsBox(Vector3, Vector3, Quaternion, Vector3, Vector3, Quaternion) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_BoxIntersectsBox
               (Vector3 *center0,Vector3 *size0,Quaternion *rotation0,Vector3 *center1,
               Vector3 *size1,Quaternion *rotation1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__BoxMath);
  }
  fVar1 = rotation0->x;
  fVar2 = rotation0->y;
  fVar3 = rotation0->z;
  fVar4 = rotation0->w;
  pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar6 = _UNK_?;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = fVar2 + fVar2;
  uVar9 = (pVVar7->rightVector).x;
  uVar10 = (pVVar7->rightVector).y;
  fVar11 = fVar3 + fVar3;
  fVar12 = fVar1 * (fVar1 + fVar1);
  fVar13 = fVar4 * (fVar1 + fVar1);
  fVar14 = (pVVar7->rightVector).z;
  fVar15 = _UNK_? - (fVar3 * fVar11 + fVar12);
  fVar12 = _UNK_? - (fVar2 * fVar8 + fVar12);
  if (pVVar5 == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    bVar17 = (*pcVar16)();
    return bVar17;
  }
  if ((int)pVVar5->max_length != 0) {
    bVar18 = cRam_? == '\0';
    fVar19 = rotation0->x;
    fVar20 = rotation0->y;
    fVar21 = rotation0->z;
    fVar22 = rotation0->w;
    pVVar5->vector[0].x =
         (_UNK_? - (fVar3 * fVar11 + fVar2 * fVar8)) * (float)uVar9 +
         (fVar1 * fVar8 - fVar4 * fVar11) * (float)uVar10 +
         (fVar4 * fVar8 + fVar1 * fVar11) * fVar14;
    pVVar5->vector[0].y =
         fVar15 * (float)uVar10 + (fVar4 * fVar11 + fVar1 * fVar8) * (float)uVar9 +
         (fVar2 * fVar11 - fVar13) * fVar14;
    pVVar5->vector[0].z =
         (fVar1 * fVar11 - fVar4 * fVar8) * (float)uVar9 +
         (fVar13 + fVar2 * fVar11) * (float)uVar10 + fVar12 * fVar14;
    pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
    if (bVar18) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = fVar20 + fVar20;
    uVar23 = (pVVar7->upVector).x;
    uVar24 = (pVVar7->upVector).y;
    fVar2 = fVar21 + fVar21;
    fVar14 = fVar19 * (fVar19 + fVar19);
    fVar4 = fVar22 * (fVar19 + fVar19);
    fVar1 = (pVVar7->upVector).z;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if (1 < (uint)pVVar5->max_length) {
      bVar18 = cRam_? == '\0';
      fVar11 = rotation0->x;
      fVar12 = rotation0->y;
      fVar8 = rotation0->z;
      fVar15 = rotation0->w;
      pVVar5->vector[1].x =
           (fVar6 - (fVar21 * fVar2 + fVar20 * fVar3)) * (float)uVar23 +
           (fVar19 * fVar3 - fVar22 * fVar2) * (float)uVar24 +
           (fVar22 * fVar3 + fVar19 * fVar2) * fVar1;
      pVVar5->vector[1].y =
           (fVar6 - (fVar21 * fVar2 + fVar14)) * (float)uVar24 +
           (fVar22 * fVar2 + fVar19 * fVar3) * (float)uVar23 + (fVar20 * fVar2 - fVar4) * fVar1;
      pVVar5->vector[1].z =
           (fVar19 * fVar2 - fVar22 * fVar3) * (float)uVar23 +
           (fVar4 + fVar20 * fVar2) * (float)uVar24 +
           (fVar6 - (fVar20 * fVar3 + fVar14)) * fVar1;
      pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
      if (bVar18) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar3 = fVar12 + fVar12;
      uVar25 = (pVVar7->forwardVector).x;
      uVar26 = (pVVar7->forwardVector).y;
      fVar2 = fVar8 + fVar8;
      fVar14 = fVar11 * (fVar11 + fVar11);
      fVar4 = fVar15 * (fVar11 + fVar11);
      fVar1 = (pVVar7->forwardVector).z;
      if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
      if (2 < (uint)pVVar5->max_length) {
        bVar18 = cRam_? == '\0';
        pVVar5->vector[2].x =
             (fVar6 - (fVar8 * fVar2 + fVar12 * fVar3)) * (float)uVar25 +
             (fVar11 * fVar3 - fVar15 * fVar2) * (float)uVar26 +
             (fVar15 * fVar3 + fVar11 * fVar2) * fVar1;
        pVVar5->vector[2].y =
             (fVar6 - (fVar8 * fVar2 + fVar14)) * (float)uVar26 +
             (fVar15 * fVar2 + fVar11 * fVar3) * (float)uVar25 +
             (fVar12 * fVar2 - fVar4) * fVar1;
        pVVar5->vector[2].z =
             (fVar11 * fVar2 - fVar15 * fVar3) * (float)uVar25 +
             (fVar4 + fVar12 * fVar2) * (float)uVar26 +
             (fVar6 - (fVar12 * fVar3 + fVar14)) * fVar1;
        fVar1 = rotation1->x;
        fVar2 = rotation1->y;
        fVar3 = rotation1->z;
        fVar4 = rotation1->w;
        pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
        if (bVar18) {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar12 = fVar2 + fVar2;
        fVar11 = fVar3 + fVar3;
        fVar8 = (fVar1 + fVar1) * fVar1;
        uVar27 = (pVVar7->rightVector).x;
        uVar28 = (pVVar7->rightVector).y;
        fVar15 = (fVar1 + fVar1) * fVar4;
        fVar14 = (pVVar7->rightVector).z;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar5->max_length != 0) {
          bVar18 = cRam_? == '\0';
          pVVar5->vector[0].x =
               (fVar6 - (fVar11 * fVar3 + fVar2 * fVar12)) * (float)uVar27 +
               (fVar12 * fVar1 - fVar11 * fVar4) * (float)uVar28 +
               (fVar12 * fVar4 + fVar11 * fVar1) * fVar14;
          pVVar5->vector[0].y =
               (fVar6 - (fVar11 * fVar3 + fVar8)) * (float)uVar28 +
               (fVar11 * fVar4 + fVar12 * fVar1) * (float)uVar27 +
               (fVar2 * fVar11 - fVar15) * fVar14;
          fVar3 = rotation1->x;
          fVar13 = rotation1->y;
          fVar19 = rotation1->z;
          fVar20 = rotation1->w;
          pVVar5->vector[0].z =
               (fVar11 * fVar1 - fVar12 * fVar4) * (float)uVar27 +
               (fVar15 + fVar2 * fVar11) * (float)uVar28 +
               (fVar6 - (fVar2 * fVar12 + fVar8)) * fVar14;
          pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
          if (bVar18) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar4 = fVar13 + fVar13;
          fVar2 = fVar19 + fVar19;
          fVar14 = (fVar3 + fVar3) * fVar3;
          uVar29 = (pVVar7->upVector).x;
          uVar30 = (pVVar7->upVector).y;
          fVar11 = (fVar3 + fVar3) * fVar20;
          fVar1 = (pVVar7->upVector).z;
          if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar5->max_length) {
            bVar18 = cRam_? == '\0';
            pVVar5->vector[1].x =
                 (fVar6 - (fVar2 * fVar19 + fVar4 * fVar13)) * (float)uVar29 +
                 (fVar4 * fVar3 - fVar2 * fVar20) * (float)uVar30 +
                 (fVar4 * fVar20 + fVar2 * fVar3) * fVar1;
            pVVar5->vector[1].y =
                 (fVar6 - (fVar2 * fVar19 + fVar14)) * (float)uVar30 +
                 (fVar2 * fVar20 + fVar4 * fVar3) * (float)uVar29 +
                 (fVar2 * fVar13 - fVar11) * fVar1;
            fVar12 = rotation1->x;
            fVar8 = rotation1->y;
            fVar15 = rotation1->z;
            fVar19 = rotation1->w;
            pVVar5->vector[1].z =
                 (fVar2 * fVar3 - fVar4 * fVar20) * (float)uVar29 +
                 (fVar11 + fVar2 * fVar13) * (float)uVar30 +
                 (fVar6 - (fVar4 * fVar13 + fVar14)) * fVar1;
            pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
            if (bVar18) {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar3 = fVar8 + fVar8;
            fVar2 = fVar15 + fVar15;
            fVar4 = (fVar12 + fVar12) * fVar12;
            uVar31 = (pVVar7->forwardVector).x;
            uVar32 = (pVVar7->forwardVector).y;
            fVar14 = (fVar12 + fVar12) * fVar19;
            fVar1 = (pVVar7->forwardVector).z;
            if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
            if (2 < (uint)pVVar5->max_length) {
              uVar33 = 0;
              pVVar5->vector[2].x =
                   (fVar6 - (fVar2 * fVar15 + fVar3 * fVar8)) * (float)uVar31 +
                   (fVar3 * fVar12 - fVar2 * fVar19) * (float)uVar32 +
                   (fVar3 * fVar19 + fVar2 * fVar12) * fVar1;
              pVVar5->vector[2].y =
                   (fVar6 - (fVar2 * fVar15 + fVar4)) * (float)uVar32 +
                   (fVar2 * fVar19 + fVar3 * fVar12) * (float)uVar31 +
                   (fVar2 * fVar8 - fVar14) * fVar1;
              pVVar5->vector[2].z =
                   (fVar2 * fVar12 - fVar3 * fVar19) * (float)uVar31 +
                   (fVar14 + fVar2 * fVar8) * (float)uVar32 +
                   (fVar6 - (fVar3 * fVar8 + fVar4)) * fVar1;
              uVar34 = uVar33;
              uVar35 = uVar33;
              uVar36 = uVar33;
              uVar37 = uVar33;
              do {
                do {
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pBVar38 = TypeInfo__RTG__BoxMath->static_fields;
                  pVVar5 = pBVar38->A;
                  if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                  uVar39 = (uint)uVar37;
                  if ((uint)pVVar5->max_length <= uVar39) goto code_?;
                  pVVar40 = pBVar38->B;
                  if (pVVar40 == (Vector3__Array *)0x0) goto code_?;
                  if ((uint)pVVar40->max_length <= (uint)uVar34) goto code_?;
                  uVar41 = *(undefined8 *)((longlong)&pVVar40->vector[0].x + uVar35);
                  uVar42 = *(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar36);
                  if (pBVar38->R == (Single__Array_1 *)0x0) goto code_?;
                  fStack_43 = (float)uVar41;
                  fStack_44 = (float)uVar42;
                  fStack_45 = (float)((ulonglong)uVar42 >> 0x20);
                  fStack_46 = (float)((ulonglong)uVar41 >> 0x20);
                  FUN_?(pBVar38->R,(longlong)(int)uVar39,uVar34,
                                fStack_43 * fStack_44 + fStack_45 * fStack_46 +
                                *(float *)((longlong)&pVVar5->vector[0].z + uVar36) *
                                *(float *)((longlong)&pVVar40->vector[0].z + uVar35));
                  uVar47 = _UNK_?;
                  fVar1 = _UNK_?;
                  uVar48 = (uint)uVar34 + 1;
                  uVar34 = (ulonglong)uVar48;
                  uVar35 = uVar35 + 0xc;
                } while ((int)uVar48 < 3);
                uVar37 = (ulonglong)(uVar39 + 1);
                uVar36 = uVar36 + 0xc;
                uVar34 = uVar33;
                uVar35 = uVar33;
              } while ((int)(uVar39 + 1) < 3);
              uVar49 = size0->x;
              uVar50 = size0->y;
              fVar2 = (float)uVar49 * _UNK_?;
              fVar14 = (float)uVar50 * _UNK_?;
              fVar11 = size0->z * _UNK_?;
              uVar51 = size1->x;
              uVar52 = size1->y;
              fVar3 = (float)uVar51 * _UNK_?;
              fVar6 = size1->z * _UNK_?;
              fVar4 = (float)uVar52 * _UNK_?;
              do {
                iVar53 = (int)uVar34;
                uVar34 = uVar33;
                do {
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->R;
                  pSVar55 = TypeInfo__RTG__BoxMath->static_fields->absR;
                  if (pSVar54 == (Single__Array_1 *)0x0) goto code_?;
                  uVar39 = FUN_?(pSVar54,(longlong)iVar53,uVar34);
                  if (pSVar55 == (Single__Array_1 *)0x0) goto code_?;
                  FUN_?(pSVar55,(longlong)iVar53,uVar34,(float)(uVar39 & uVar47) + fVar1);
                  uVar39 = (int)uVar34 + 1;
                  uVar34 = (ulonglong)uVar39;
                } while ((int)uVar39 < 3);
                uVar34 = (ulonglong)(iVar53 + 1U);
              } while ((int)(iVar53 + 1U) < 3);
              uVar56 = center1->x;
              uVar57 = center1->y;
              uVar58 = center0->x;
              uVar59 = center0->y;
              fVar8 = center1->z - center0->z;
              fVar12 = (float)uVar56 - (float)uVar58;
              fVar1 = (float)uVar57 - (float)uVar59;
              if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__RTG__BoxMath);
              }
              pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
              if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar5->max_length != 0) {
                uVar60 = pVVar5->vector[0].x;
                uVar61 = pVVar5->vector[0].y;
                if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                if (1 < (uint)pVVar5->max_length) {
                  uVar62 = pVVar5->vector[1].x;
                  uVar63 = pVVar5->vector[1].y;
                  if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                  if (2 < (uint)pVVar5->max_length) {
                    uVar64 = pVVar5->vector[2].x;
                    uVar65 = pVVar5->vector[2].y;
                    fVar13 = fVar1 * (float)uVar61 + fVar12 * (float)uVar60 +
                             fVar8 * pVVar5->vector[0].z;
                    fVar15 = fVar1 * (float)uVar63 + fVar12 * (float)uVar62 +
                             fVar8 * pVVar5->vector[1].z;
                    fVar1 = fVar1 * (float)uVar65 + fVar12 * (float)uVar64 +
                             fVar8 * pVVar5->vector[2].z;
                    uVar34 = uVar33;
                    pBVar66 = TypeInfo__RTG__BoxMath;
                    do {
                      if (*(int *)&(pBVar66->_1).field_0x1c == 0) {
                        FUN_?(pBVar66);
                        pBVar66 = TypeInfo__RTG__BoxMath;
                      }
                      pSVar54 = pBVar66->static_fields->absR;
                      if (pSVar54 == (Single__Array_1 *)0x0) goto code_?;
                      uVar39 = (uint)uVar34;
                      if (((uint)pSVar54->bounds->length <= uVar39) ||
                         (iVar67 = pSVar54->bounds[1].length, (int)iVar67 == 0))
                      goto code_?;
                      pSVar55 = pBVar66->static_fields->absR;
                      iVar68 = pSVar55->bounds[1].length;
                      if ((uint)iVar68 < 2) goto code_?;
                      pSVar69 = pBVar66->static_fields->absR;
                      iVar70 = pSVar69->bounds[1].length;
                      if ((uint)iVar70 < 3) goto code_?;
                      fVar12 = fVar2;
                      fVar8 = fVar13;
                      if (((uVar39 != 0) && (fVar12 = fVar14, fVar8 = fVar15, uVar39 != 1)) &&
                         (fVar12 = fVar11, fVar8 = fVar1, uVar39 != 2)) {
                        uVar41 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar71 = (IndexOutOfRangeException *)func_?(uVar41);
                        pSVar72 = (String *)
                                  func_?(&StringLiteral_Invalid_Vector3_index_);
                        mscorlib.dll::System::IndexOutOfRangeException::
                        IndexOutOfRangeException__ctor_1(pIVar71,pSVar72,(MethodInfo *)0x0);
                        uVar41 = func_?(&
                                                  MethodInfo__UnityEngine__Vector3__get_Item_int_);
                        FUN_?(pIVar71,uVar41);
                        pcVar16 = (code *)swi(3);
                        bVar17 = (*pcVar16)();
                        return bVar17;
                      }
                      if (fVar12 + fVar4 * pSVar55->vector[iVar68 * uVar35 + 1] +
                                   fVar3 * pSVar54->vector[iVar67 * uVar35] +
                                   fVar6 * pSVar69->vector[iVar70 * uVar35 + 2] <
                          (float)((uint)fVar8 & uVar47)) {
                        return 0;
                      }
                      uVar34 = (ulonglong)(uVar39 + 1);
                      uVar35 = uVar35 + 1;
                    } while ((int)(uVar39 + 1) < 3);
                    lVar73 = 0x20;
                    uVar34 = uVar33;
                    do {
                      if (*(int *)&(pBVar66->_1).field_0x1c == 0) {
                        FUN_?(pBVar66);
                        pBVar66 = TypeInfo__RTG__BoxMath;
                      }
                      pSVar54 = pBVar66->static_fields->absR;
                      if (pSVar54 == (Single__Array_1 *)0x0) goto code_?;
                      if (((int)pSVar54->bounds->length == 0) ||
                         (uVar39 = (uint)uVar34, (uint)pSVar54->bounds[1].length <= uVar39))
                      goto code_?;
                      pSVar55 = pBVar66->static_fields->absR;
                      pIVar74 = pSVar55->bounds;
                      if (((uint)pIVar74->length < 2) ||
                         ((iVar67 = pIVar74[1].length, (uint)iVar67 <= uVar39 ||
                          (pSVar69 = pBVar66->static_fields->absR, (uint)pSVar69->bounds->length < 3
                          )))) goto code_?;
                      pSVar75 = pBVar66->static_fields->R;
                      if (pSVar75 == (Single__Array_1 *)0x0) goto code_?;
                      if (((int)pSVar75->bounds->length == 0) ||
                         ((uint)pSVar75->bounds[1].length <= uVar39)) goto code_?;
                      pSVar76 = pBVar66->static_fields->R;
                      pIVar74 = pSVar76->bounds;
                      if (((uint)pIVar74->length < 2) ||
                         ((iVar68 = pIVar74[1].length, (uint)iVar68 <= uVar39 ||
                          (pSVar77 = pBVar66->static_fields->R, (uint)pSVar77->bounds->length < 3)))
                         ) goto code_?;
                      fVar12 = fVar3;
                      if ((uVar39 != 0) &&
                         ((fVar12 = fVar4, uVar39 != 1 && (fVar12 = fVar6, uVar39 != 2)))) {
                        uVar41 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar71 = (IndexOutOfRangeException *)func_?(uVar41);
                        pSVar72 = (String *)
                                  func_?(&StringLiteral_Invalid_Vector3_index_);
                        mscorlib.dll::System::IndexOutOfRangeException::
                        IndexOutOfRangeException__ctor_1(pIVar71,pSVar72,(MethodInfo *)0x0);
                        uVar41 = func_?(&
                                                  MethodInfo__UnityEngine__Vector3__get_Item_int_);
                        FUN_?(pIVar71,uVar41);
                        pcVar16 = (code *)swi(3);
                        bVar17 = (*pcVar16)();
                        return bVar17;
                      }
                      if (fVar12 + fVar14 * pSVar55->vector[iVar67 + uVar33] +
                                   fVar2 * *(float *)((longlong)pSVar54->vector + lVar73 + -0x20) +
                                   fVar11 * pSVar69->vector[uVar33 + pSVar69->bounds[1].length * 2]
                          < (float)((uint)(fVar15 * pSVar76->vector[iVar68 + uVar33] +
                                           fVar13 * *(float *)((longlong)pSVar75->vector +
                                                              lVar73 + -0x20) +
                                          fVar1 * pSVar77->vector
                                                   [uVar33 + pSVar77->bounds[1].length * 2]) &
                                   uVar47)) {
                        return 0;
                      }
                      uVar34 = (ulonglong)(uVar39 + 1);
                      uVar33 = uVar33 + 1;
                      lVar73 = lVar73 + 4;
                    } while ((int)(uVar39 + 1) < 3);
                    if (*(int *)&(pBVar66->_1).field_0x1c == 0) {
                      FUN_?(pBVar66);
                      pBVar66 = TypeInfo__RTG__BoxMath;
                    }
                    pSVar54 = pBVar66->static_fields->absR;
                    if (pSVar54 == (Single__Array_1 *)0x0) goto code_?;
                    if ((2 < (uint)pSVar54->bounds->length) &&
                       (iVar67 = pSVar54->bounds[1].length, (int)iVar67 != 0)) {
                      pSVar55 = pBVar66->static_fields->absR;
                      pSVar69 = pBVar66->static_fields->absR;
                      if (2 < (uint)pSVar69->bounds[1].length) {
                        pSVar75 = pBVar66->static_fields->R;
                        if (pSVar75 == (Single__Array_1 *)0x0) goto code_?;
                        if ((1 < (uint)pSVar75->bounds->length) &&
                           (iVar68 = pSVar75->bounds[1].length, (int)iVar68 != 0)) {
                          pSVar76 = pBVar66->static_fields->R;
                          pIVar74 = pSVar76->bounds;
                          if (2 < (uint)pIVar74->length) {
                            if (fVar6 * pBVar66->static_fields->absR->vector[1] +
                                pSVar69->vector[2] * fVar4 +
                                fVar11 * pSVar55->vector[pSVar55->bounds[1].length] +
                                pSVar54->vector[iVar67 * 2] * fVar14 <
                                (float)((uint)(pSVar75->vector[iVar68] * fVar1 -
                                              fVar15 * pSVar76->vector[pIVar74[1].length * 2]) &
                                       uVar47)) {
                              return 0;
                            }
                            if (*(int *)&(pBVar66->_1).field_0x1c == 0) {
                              FUN_?(pBVar66);
                              pBVar66 = TypeInfo__RTG__BoxMath;
                            }
                            pSVar54 = pBVar66->static_fields->absR;
                            if (pSVar54 == (Single__Array_1 *)0x0) goto code_?;
                            if ((2 < (uint)pSVar54->bounds->length) &&
                               (iVar67 = pSVar54->bounds[1].length, 1 < (uint)iVar67)) {
                              pSVar55 = pBVar66->static_fields->absR;
                              pSVar69 = pBVar66->static_fields->absR;
                              if (2 < (uint)pSVar69->bounds[1].length) {
                                pSVar75 = pBVar66->static_fields->R;
                                if (pSVar75 == (Single__Array_1 *)0x0) goto code_?;
                                if ((1 < (uint)pSVar75->bounds->length) &&
                                   (iVar68 = pSVar75->bounds[1].length, 1 < (uint)iVar68)) {
                                  pSVar76 = pBVar66->static_fields->R;
                                  pIVar74 = pSVar76->bounds;
                                  if (2 < (uint)pIVar74->length) {
                                    if (fVar6 * pBVar66->static_fields->absR->vector[0] +
                                        pSVar69->vector[2] * fVar3 +
                                        fVar11 * pSVar55->vector[pSVar55->bounds[1].length + 1] +
                                        pSVar54->vector[iVar67 * 2 + 1] * fVar14 <
                                        (float)((uint)(pSVar75->vector[iVar68 + 1] * fVar1 -
                                                      fVar15 * pSVar76->vector
                                                               [pIVar74[1].length * 2 + 1]) & uVar47
                                               )) {
                                      return 0;
                                    }
                                    if (*(int *)&(pBVar66->_1).field_0x1c == 0) {
                                      FUN_?(pBVar66);
                                      pBVar66 = TypeInfo__RTG__BoxMath;
                                    }
                                    pSVar54 = pBVar66->static_fields->absR;
                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                      fVar12 = (float)FUN_?(pSVar54,2,2);
                                      pSVar54 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                        fVar8 = (float)FUN_?(pSVar54,1,2);
                                        pSVar54 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                          if (((int)pSVar54->bounds->length == 0) ||
                                             ((uint)pSVar54->bounds[1].length < 2))
                                          goto code_?;
                                          fVar19 = pSVar54->vector[1];
                                          fVar20 = TypeInfo__RTG__BoxMath->static_fields->absR->
                                                   vector[0];
                                          pSVar54 = TypeInfo__RTG__BoxMath->static_fields->R;
                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                            fVar21 = (float)FUN_?(pSVar54,1,2);
                                            pSVar54 = TypeInfo__RTG__BoxMath->static_fields->R;
                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                              fVar22 = (float)FUN_?(pSVar54,2,2);
                                              if (fVar4 * fVar20 + fVar19 * fVar3 +
                                                  fVar8 * fVar11 + fVar12 * fVar14 <
                                                  (float)((uint)(fVar21 * fVar1 - fVar22 * fVar15)
                                                         & uVar47)) {
                                                return 0;
                                              }
                                              if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c
                                                  == 0) {
                                                FUN_?(TypeInfo__RTG__BoxMath);
                                              }
                                              pSVar54 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                              if (pSVar54 != (Single__Array_1 *)0x0) {
                                                fVar12 = (float)FUN_?(pSVar54,2,0);
                                                pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                          absR;
                                                if (pSVar54 != (Single__Array_1 *)0x0) {
                                                  fVar8 = (float)FUN_?(pSVar54,0,0);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar19 = (float)FUN_?(pSVar54,1,2);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float)FUN_?(pSVar54,1,1);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar21 = (float)FUN_?(pSVar54,2,0);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar22 = (float)FUN_?(pSVar54,0,0)
                                                          ;
                                                          if (fVar20 * fVar6 + fVar19 * fVar4 +
                                                              fVar8 * fVar11 + fVar12 * fVar2 <
                                                              (float)((uint)(fVar21 * fVar13 -
                                                                            fVar22 * fVar1) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).
                                                                       field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar54 = TypeInfo__RTG__BoxMath->
                                                                    static_fields->absR;
                                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                                            fVar12 = (float)FUN_?(pSVar54,2,
                                                                                          1);
                                                            pSVar54 = TypeInfo__RTG__BoxMath->
                                                                      static_fields->absR;
                                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                                              fVar8 = (float)FUN_?(pSVar54,
                                                  0,1);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar19 = (float)FUN_?(pSVar54,1,2);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float)FUN_?(pSVar54,1,0);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar21 = (float)FUN_?(pSVar54,2,1);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar22 = (float)FUN_?(pSVar54,0,1)
                                                          ;
                                                          if (fVar20 * fVar6 + fVar19 * fVar3 +
                                                              fVar8 * fVar11 + fVar12 * fVar2 <
                                                              (float)((uint)(fVar21 * fVar13 -
                                                                            fVar22 * fVar1) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).
                                                                       field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar54 = TypeInfo__RTG__BoxMath->
                                                                    static_fields->absR;
                                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                                            fVar12 = (float)FUN_?(pSVar54,2,
                                                                                          2);
                                                            pSVar54 = TypeInfo__RTG__BoxMath->
                                                                      static_fields->absR;
                                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                                              fVar8 = (float)FUN_?(pSVar54,
                                                  0,2);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar19 = (float)FUN_?(pSVar54,1,1);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float)FUN_?(pSVar54,1,0);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar21 = (float)FUN_?(pSVar54,2,2);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar22 = (float)FUN_?(pSVar54,0,2)
                                                          ;
                                                          if (fVar20 * fVar4 + fVar19 * fVar3 +
                                                              fVar8 * fVar11 + fVar12 * fVar2 <
                                                              (float)((uint)(fVar21 * fVar13 -
                                                                            fVar22 * fVar1) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).
                                                                       field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar54 = TypeInfo__RTG__BoxMath->
                                                                    static_fields->absR;
                                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                                            fVar1 = (float)FUN_?(pSVar54,1,
                                                                                          0);
                                                            pSVar54 = TypeInfo__RTG__BoxMath->
                                                                      static_fields->absR;
                                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                                              fVar11 = (float)FUN_?(pSVar54,
                                                  0,0);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar12 = (float)FUN_?(pSVar54,2,2);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar8 = (float)FUN_?(pSVar54,2,1);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar19 = (float)FUN_?(pSVar54,0,0);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float)FUN_?(pSVar54,1,0)
                                                          ;
                                                          if (fVar8 * fVar6 + fVar12 * fVar4 +
                                                              fVar11 * fVar14 + fVar1 * fVar2 <
                                                              (float)((uint)(fVar19 * fVar15 -
                                                                            fVar20 * fVar13) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).
                                                                       field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar54 = TypeInfo__RTG__BoxMath->
                                                                    static_fields->absR;
                                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                                            fVar1 = (float)FUN_?(pSVar54,1,
                                                                                          1);
                                                            pSVar54 = TypeInfo__RTG__BoxMath->
                                                                      static_fields->absR;
                                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                                              fVar11 = (float)FUN_?(pSVar54,
                                                  0,1);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar12 = (float)FUN_?(pSVar54,2,2);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar8 = (float)FUN_?(pSVar54,2,0);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar19 = (float)FUN_?(pSVar54,0,1);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float)FUN_?(pSVar54,1,1)
                                                          ;
                                                          if (fVar8 * fVar6 + fVar12 * fVar3 +
                                                              fVar11 * fVar14 + fVar1 * fVar2 <
                                                              (float)((uint)(fVar19 * fVar15 -
                                                                            fVar20 * fVar13) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).
                                                                       field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar54 = TypeInfo__RTG__BoxMath->
                                                                    static_fields->absR;
                                                          if (pSVar54 != (Single__Array_1 *)0x0) {
                                                            fVar1 = (float)FUN_?(pSVar54,1,
                                                                                          2);
                                                            pSVar54 = TypeInfo__RTG__BoxMath->
                                                                      static_fields->absR;
                                                            if (pSVar54 != (Single__Array_1 *)0x0) {
                                                              fVar6 = (float)FUN_?(pSVar54,
                                                  0,2);
                                                  pSVar54 = TypeInfo__RTG__BoxMath->static_fields->
                                                            absR;
                                                  if (pSVar54 != (Single__Array_1 *)0x0) {
                                                    fVar11 = (float)FUN_?(pSVar54,2,1);
                                                    pSVar54 = TypeInfo__RTG__BoxMath->static_fields
                                                              ->absR;
                                                    if (pSVar54 != (Single__Array_1 *)0x0) {
                                                      fVar12 = (float)FUN_?(pSVar54,2,0);
                                                      pSVar54 = TypeInfo__RTG__BoxMath->
                                                                static_fields->R;
                                                      if (pSVar54 != (Single__Array_1 *)0x0) {
                                                        fVar8 = (float)FUN_?(pSVar54,0,2);
                                                        pSVar54 = TypeInfo__RTG__BoxMath->
                                                                  static_fields->R;
                                                        if (pSVar54 != (Single__Array_1 *)0x0) {
                                                          fVar19 = (float)FUN_?(pSVar54,1,2)
                                                          ;
                                                          if (fVar12 * fVar4 + fVar11 * fVar3 +
                                                              fVar6 * fVar14 + fVar1 * fVar2 <
                                                              (float)((uint)(fVar15 * fVar8 -
                                                                            fVar19 * fVar13) &
                                                                     uVar47)) {
                                                            return 0;
                                                          }
                                                          return 1;
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
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* List`1[UnityEngine.Vector3] CalcBoxCornerPoints(Vector3, Vector3, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxCornerPoints
          (Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  fVar3 = boxSize->z * _UNK_?;
  fVar4 = (float)uVar1 * _UNK_?;
  fVar5 = (float)uVar2 * _UNK_?;
  fVar6 = boxRotation->x;
  fVar7 = boxRotation->y;
  fVar8 = boxRotation->z;
  fVar9 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar11 = fVar8 + fVar8;
  uVar12 = (pVVar10->rightVector).x;
  uVar13 = (pVVar10->rightVector).y;
  fVar14 = fVar7 + fVar7;
  fVar15 = fVar6 * (fVar6 + fVar6);
  fVar16 = fVar9 * (fVar6 + fVar6);
  fVar17 = (pVVar10->rightVector).z;
  fVar18 = (_UNK_? - (fVar8 * fVar11 + fVar7 * fVar14)) * (float)uVar12 +
           (fVar6 * fVar14 - fVar9 * fVar11) * (float)uVar13 +
           (fVar9 * fVar14 + fVar6 * fVar11) * fVar17;
  fVar19 = (_UNK_? - (fVar8 * fVar11 + fVar15)) * (float)uVar13 +
           (fVar9 * fVar11 + fVar6 * fVar14) * (float)uVar12 + (fVar7 * fVar11 - fVar16) * fVar17;
  fVar17 = (fVar6 * fVar11 - fVar9 * fVar14) * (float)uVar12 +
           (fVar16 + fVar7 * fVar11) * (float)uVar13 +
           (_UNK_? - (fVar7 * fVar14 + fVar15)) * fVar17;
  fVar6 = boxRotation->x;
  fVar7 = boxRotation->y;
  fVar8 = boxRotation->z;
  fVar9 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar20 = (pVVar10->upVector).x;
  uVar21 = (pVVar10->upVector).y;
  fVar14 = fVar8 + fVar8;
  fVar15 = fVar7 + fVar7;
  fVar22 = fVar6 * (fVar6 + fVar6);
  fVar23 = fVar9 * (fVar6 + fVar6);
  fVar11 = (pVVar10->upVector).z;
  fVar16 = (_UNK_? - (fVar8 * fVar14 + fVar7 * fVar15)) * (float)uVar20 +
           (fVar6 * fVar15 - fVar9 * fVar14) * (float)uVar21 +
           (fVar9 * fVar15 + fVar6 * fVar14) * fVar11;
  fVar24 = (_UNK_? - (fVar8 * fVar14 + fVar22)) * (float)uVar21 +
           (fVar9 * fVar14 + fVar6 * fVar15) * (float)uVar20 + (fVar7 * fVar14 - fVar23) * fVar11;
  fVar11 = (fVar6 * fVar14 - fVar9 * fVar15) * (float)uVar20 +
           (fVar23 + fVar7 * fVar14) * (float)uVar21 +
           (_UNK_? - (fVar7 * fVar15 + fVar22)) * fVar11;
  fVar6 = boxRotation->x;
  fVar7 = boxRotation->y;
  fVar8 = boxRotation->z;
  fVar9 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar25 = (pVVar10->forwardVector).x;
  uVar26 = (pVVar10->forwardVector).y;
  fVar15 = fVar8 + fVar8;
  fVar22 = fVar7 + fVar7;
  fVar27 = fVar6 * (fVar6 + fVar6);
  fVar28 = fVar9 * (fVar6 + fVar6);
  fVar14 = (pVVar10->forwardVector).z;
  fVar23 = (_UNK_? - (fVar8 * fVar15 + fVar7 * fVar22)) * (float)uVar25 +
           (fVar6 * fVar22 - fVar9 * fVar15) * (float)uVar26 +
           (fVar9 * fVar22 + fVar6 * fVar15) * fVar14;
  fVar8 = (_UNK_? - (fVar8 * fVar15 + fVar27)) * (float)uVar26 +
           (fVar9 * fVar15 + fVar6 * fVar22) * (float)uVar25 + (fVar7 * fVar15 - fVar28) * fVar14;
  fVar9 = (fVar6 * fVar15 - fVar9 * fVar22) * (float)uVar25 +
           (fVar28 + fVar7 * fVar15) * (float)uVar26 +
           (_UNK_? - (fVar7 * fVar22 + fVar27)) * fVar14;
  uVar29 = boxCenter->x;
  uVar30 = boxCenter->y;
  fVar6 = (float)uVar29 - fVar3 * fVar23;
  fVar14 = (float)uVar30 - fVar3 * fVar8;
  fVar7 = boxCenter->z - fVar3 * fVar9;
  collection = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,8)
  ;
  if (collection != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    if (*(int *)&collection[1].monitor != 0) {
      collection[2].klass =
           (IEnumerable_1_UnityEngine_Vector3___Class *)
           CONCAT44((fVar14 - fVar19 * fVar4) + fVar24 * fVar5,
                    (fVar6 - fVar18 * fVar4) + fVar16 * fVar5);
      *(float *)&collection[2].monitor = (fVar7 - fVar17 * fVar4) + fVar11 * fVar5;
      if (1 < *(uint *)&collection[1].monitor) {
        *(ulonglong *)((longlong)&collection[2].monitor + 4) =
             CONCAT44(fVar19 * fVar4 + fVar14 + fVar24 * fVar5,
                      fVar18 * fVar4 + fVar6 + fVar16 * fVar5);
        *(float *)((longlong)&collection[3].klass + 4) = fVar17 * fVar4 + fVar7 + fVar11 * fVar5;
        if (2 < *(uint *)&collection[1].monitor) {
          collection[3].monitor =
               (MonitorData *)
               CONCAT44((fVar19 * fVar4 + fVar14) - fVar24 * fVar5,
                        (fVar18 * fVar4 + fVar6) - fVar16 * fVar5);
          *(float *)&collection[4].klass = (fVar17 * fVar4 + fVar7) - fVar11 * fVar5;
          if (3 < *(uint *)&collection[1].monitor) {
            *(ulonglong *)((longlong)&collection[4].klass + 4) =
                 CONCAT44((fVar14 - fVar19 * fVar4) - fVar24 * fVar5,
                          (fVar6 - fVar18 * fVar4) - fVar16 * fVar5);
            *(float *)((longlong)&collection[4].monitor + 4) =
                 (fVar7 - fVar17 * fVar4) - fVar11 * fVar5;
            uVar31 = boxCenter->x;
            uVar32 = boxCenter->y;
            fVar6 = fVar23 * fVar3 + (float)uVar31;
            fVar7 = fVar8 * fVar3 + (float)uVar32;
            fVar8 = fVar9 * fVar3 + boxCenter->z;
            if (4 < *(uint *)&collection[1].monitor) {
              collection[5].klass =
                   (IEnumerable_1_UnityEngine_Vector3___Class *)
                   CONCAT44(fVar19 * fVar4 + fVar7 + fVar24 * fVar5,
                            fVar18 * fVar4 + fVar6 + fVar16 * fVar5);
              *(float *)&collection[5].monitor = fVar17 * fVar4 + fVar8 + fVar11 * fVar5;
              if (5 < *(uint *)&collection[1].monitor) {
                *(ulonglong *)((longlong)&collection[5].monitor + 4) =
                     CONCAT44((fVar7 - fVar19 * fVar4) + fVar24 * fVar5,
                              (fVar6 - fVar18 * fVar4) + fVar16 * fVar5);
                *(float *)((longlong)&collection[6].klass + 4) =
                     (fVar8 - fVar17 * fVar4) + fVar11 * fVar5;
                if (6 < *(uint *)&collection[1].monitor) {
                  collection[6].monitor =
                       (MonitorData *)
                       CONCAT44((fVar7 - fVar19 * fVar4) - fVar24 * fVar5,
                                (fVar6 - fVar18 * fVar4) - fVar16 * fVar5);
                  *(float *)&collection[7].klass = (fVar8 - fVar17 * fVar4) - fVar11 * fVar5;
                  if (7 < *(uint *)&collection[1].monitor) {
                    *(ulonglong *)((longlong)&collection[7].klass + 4) =
                         CONCAT44((fVar19 * fVar4 + fVar7) - fVar24 * fVar5,
                                  (fVar18 * fVar4 + fVar6) - fVar16 * fVar5);
                    *(float *)((longlong)&collection[7].monitor + 4) =
                         (fVar17 * fVar4 + fVar8) - fVar11 * fVar5;
                    pLVar33 = (List_1_UnityEngine_Vector3_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                           );
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                    List_1_UnityEngine_Vector3___ctor_1
                              (pLVar33,collection,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                              );
                    return pLVar33;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar34 = (code *)swi(3);
    pLVar33 = (List_1_UnityEngine_Vector3_ *)(*pcVar34)();
    return pLVar33;
  }
  FUN_?();
  pcVar34 = (code *)swi(3);
  pLVar33 = (List_1_UnityEngine_Vector3_ *)(*pcVar34)();
  return pLVar33;
}


/* Vector3 CalcBoxFaceCenter(Vector3, Vector3, Quaternion, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceCenter
                    (Vector3 *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,
                    Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  fVar3 = boxSize->z * _UNK_?;
  fVar4 = (float)uVar1 * _UNK_?;
  fVar5 = (float)uVar2 * _UNK_?;
  fVar6 = boxRotation->x;
  fVar7 = boxRotation->y;
  fVar8 = boxRotation->z;
  fVar9 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar11 = fVar8 + fVar8;
  fVar12 = fVar7 + fVar7;
  fVar13 = (fVar6 + fVar6) * fVar6;
  uVar14 = (pVVar10->rightVector).x;
  uVar15 = (pVVar10->rightVector).y;
  fVar16 = (pVVar10->rightVector).z;
  fVar17 = (fVar6 + fVar6) * fVar9;
  fVar18 = (_UNK_? - (fVar11 * fVar8 + fVar12 * fVar7)) * (float)uVar14 +
           (fVar12 * fVar6 - fVar11 * fVar9) * (float)uVar15 +
           (fVar12 * fVar9 + fVar11 * fVar6) * fVar16;
  fVar19 = (_UNK_? - (fVar11 * fVar8 + fVar13)) * (float)uVar15 +
           (fVar11 * fVar9 + fVar12 * fVar6) * (float)uVar14 + (fVar11 * fVar7 - fVar17) * fVar16;
  fVar16 = (fVar11 * fVar6 - fVar12 * fVar9) * (float)uVar14 +
           (fVar17 + fVar11 * fVar7) * (float)uVar15 +
           (_UNK_? - (fVar12 * fVar7 + fVar13)) * fVar16;
  fVar6 = boxRotation->x;
  fVar7 = boxRotation->y;
  fVar8 = boxRotation->z;
  fVar9 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar20 = (pVVar10->upVector).x;
  uVar21 = (pVVar10->upVector).y;
  fVar22 = fVar8 + fVar8;
  fVar11 = (pVVar10->upVector).z;
  fVar23 = fVar7 + fVar7;
  fVar12 = (fVar6 + fVar6) * fVar6;
  fVar24 = (fVar6 + fVar6) * fVar9;
  fVar25 = (_UNK_? - (fVar22 * fVar8 + fVar23 * fVar7)) * (float)uVar20 +
           (fVar23 * fVar6 - fVar22 * fVar9) * (float)uVar21 +
           (fVar23 * fVar9 + fVar22 * fVar6) * fVar11;
  fVar26 = _UNK_? - (fVar22 * fVar8 + fVar12);
  fVar27 = _UNK_? - (fVar23 * fVar7 + fVar12);
  fVar8 = boxRotation->x;
  fVar12 = boxRotation->y;
  fVar13 = boxRotation->z;
  fVar17 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar28 = (pVVar10->forwardVector).x;
  uVar29 = (pVVar10->forwardVector).y;
  fVar30 = fVar13 + fVar13;
  fVar31 = (pVVar10->forwardVector).z;
  fVar32 = fVar12 + fVar12;
  fVar33 = (fVar8 + fVar8) * fVar8;
  fVar34 = (fVar8 + fVar8) * fVar17;
  fVar35 = (_UNK_? - (fVar30 * fVar13 + fVar32 * fVar12)) * (float)uVar28 +
           (fVar32 * fVar8 - fVar30 * fVar17) * (float)uVar29 +
           (fVar32 * fVar17 + fVar30 * fVar8) * fVar31;
  fVar13 = (_UNK_? - (fVar30 * fVar13 + fVar33)) * (float)uVar29 +
           (fVar30 * fVar17 + fVar32 * fVar8) * (float)uVar28 + (fVar30 * fVar12 - fVar34) * fVar31;
  fVar8 = (fVar30 * fVar8 - fVar32 * fVar17) * (float)uVar28 +
           (fVar34 + fVar30 * fVar12) * (float)uVar29 +
           (_UNK_? - (fVar32 * fVar12 + fVar33)) * fVar31;
  if (boxFace == BoxFace__Enum_Front) {
    uVar36 = boxCenter->x;
    fVar19 = fVar13 * fVar3;
    fVar7 = (float)uVar36 - fVar35 * fVar3;
    fVar6 = boxCenter->z - fVar8 * fVar3;
  }
  else {
    if (boxFace == BoxFace__Enum_Back) {
      uVar37 = boxCenter->x;
      uVar38 = boxCenter->y;
      fVar6 = boxCenter->z;
      __return_storage_ptr__->x = fVar35 * fVar3 + (float)uVar37;
      __return_storage_ptr__->y = fVar13 * fVar3 + (float)uVar38;
      __return_storage_ptr__->z = fVar8 * fVar3 + fVar6;
      return __return_storage_ptr__;
    }
    if (boxFace != BoxFace__Enum_Left) {
      if (boxFace == BoxFace__Enum_Right) {
        uVar39 = boxCenter->x;
        uVar40 = boxCenter->y;
        fVar6 = boxCenter->z;
        __return_storage_ptr__->x = fVar18 * fVar4 + (float)uVar39;
        __return_storage_ptr__->y = fVar19 * fVar4 + (float)uVar40;
        __return_storage_ptr__->z = fVar16 * fVar4 + fVar6;
        return __return_storage_ptr__;
      }
      fVar19 = (fVar26 * (float)uVar21 + (fVar22 * fVar9 + fVar23 * fVar6) * (float)uVar20 +
               (fVar22 * fVar7 - fVar24) * fVar11) * fVar5;
      fVar6 = ((fVar22 * fVar6 - fVar23 * fVar9) * (float)uVar20 +
                (fVar24 + fVar22 * fVar7) * (float)uVar21 + fVar27 * fVar11) * fVar5;
      if (boxFace != BoxFace__Enum_Bottom) {
        uVar41 = boxCenter->x;
        uVar42 = boxCenter->y;
        fVar7 = boxCenter->z;
        __return_storage_ptr__->x = fVar25 * fVar5 + (float)uVar41;
        __return_storage_ptr__->y = fVar19 + (float)uVar42;
        __return_storage_ptr__->z = fVar6 + fVar7;
        return __return_storage_ptr__;
      }
      uVar43 = boxCenter->x;
      fVar6 = boxCenter->z - fVar6;
      fVar7 = (float)uVar43 - fVar25 * fVar5;
      fVar19 = boxCenter->y - fVar19;
      goto code_?;
    }
    uVar44 = boxCenter->x;
    fVar7 = (float)uVar44 - fVar18 * fVar4;
    fVar19 = fVar19 * fVar4;
    fVar6 = boxCenter->z - fVar16 * fVar4;
  }
  fVar19 = boxCenter->y - fVar19;
code_?:
  __return_storage_ptr__->x = fVar7;
  __return_storage_ptr__->y = fVar19;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Vector3 CalcBoxFaceNormal(Vector3, Vector3, Quaternion, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,
                    Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  fVar1 = boxRotation->x;
  fVar2 = boxRotation->y;
  fVar3 = boxRotation->z;
  fVar4 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar1 * (fVar1 + fVar1);
  uVar7 = (pVVar5->rightVector).x;
  uVar8 = (pVVar5->rightVector).y;
  fVar9 = (pVVar5->rightVector).z;
  fVar10 = fVar3 + fVar3;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar12 = fVar2 + fVar2;
  fVar13 = (_UNK_? - (fVar3 * fVar10 + fVar2 * fVar12)) * (float)uVar7 +
           (fVar1 * fVar12 - fVar4 * fVar10) * (float)uVar8 +
           (fVar4 * fVar12 + fVar1 * fVar10) * fVar9;
  fVar14 = (_UNK_? - (fVar3 * fVar10 + fVar6)) * (float)uVar8 +
           (fVar4 * fVar10 + fVar1 * fVar12) * (float)uVar7 + (fVar2 * fVar10 - fVar11) * fVar9;
  fVar9 = (fVar1 * fVar10 - fVar4 * fVar12) * (float)uVar7 +
           (fVar11 + fVar2 * fVar10) * (float)uVar8 +
           (_UNK_? - (fVar2 * fVar12 + fVar6)) * fVar9;
  fVar1 = boxRotation->x;
  fVar2 = boxRotation->y;
  fVar3 = boxRotation->z;
  fVar4 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15 = (pVVar5->upVector).x;
  uVar16 = (pVVar5->upVector).y;
  fVar12 = fVar3 + fVar3;
  fVar17 = fVar1 * (fVar1 + fVar1);
  fVar6 = fVar2 + fVar2;
  fVar18 = fVar4 * (fVar1 + fVar1);
  fVar10 = (pVVar5->upVector).z;
  fVar11 = (_UNK_? - (fVar3 * fVar12 + fVar2 * fVar6)) * (float)uVar15 +
           (fVar1 * fVar6 - fVar4 * fVar12) * (float)uVar16 +
           (fVar4 * fVar6 + fVar1 * fVar12) * fVar10;
  fVar19 = (_UNK_? - (fVar3 * fVar12 + fVar17)) * (float)uVar16 +
           (fVar4 * fVar12 + fVar1 * fVar6) * (float)uVar15 + (fVar2 * fVar12 - fVar18) * fVar10;
  fVar10 = (fVar1 * fVar12 - fVar4 * fVar6) * (float)uVar15 +
           (fVar18 + fVar2 * fVar12) * (float)uVar16 +
           (_UNK_? - (fVar2 * fVar6 + fVar17)) * fVar10;
  fVar1 = boxRotation->x;
  fVar2 = boxRotation->y;
  fVar3 = boxRotation->z;
  fVar4 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar20 = (pVVar5->forwardVector).x;
  uVar21 = (pVVar5->forwardVector).y;
  fVar6 = fVar3 + fVar3;
  fVar22 = fVar1 * (fVar1 + fVar1);
  fVar17 = fVar2 + fVar2;
  fVar23 = fVar4 * (fVar1 + fVar1);
  fVar12 = (pVVar5->forwardVector).z;
  fVar18 = (_UNK_? - (fVar3 * fVar6 + fVar2 * fVar17)) * (float)uVar20 +
           (fVar1 * fVar17 - fVar4 * fVar6) * (float)uVar21 +
           (fVar4 * fVar17 + fVar1 * fVar6) * fVar12;
  fVar3 = (_UNK_? - (fVar3 * fVar6 + fVar22)) * (float)uVar21 +
           (fVar4 * fVar6 + fVar1 * fVar17) * (float)uVar20 + (fVar2 * fVar6 - fVar23) * fVar12;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar17) * (float)uVar20 +
           (fVar23 + fVar2 * fVar6) * (float)uVar21 +
           (_UNK_? - (fVar2 * fVar17 + fVar22)) * fVar12;
  if (boxFace == BoxFace__Enum_Front) {
    fVar1 = (float)((uint)fVar1 ^ _UNK_?);
    uVar24 = (uint)fVar3 ^ _UNK_?;
    __return_storage_ptr__->x = (float)((uint)fVar18 ^ _UNK_?);
    __return_storage_ptr__->y = (float)uVar24;
  }
  else {
    if (boxFace != BoxFace__Enum_Back) {
      if (boxFace == BoxFace__Enum_Left) {
        uVar24 = (uint)fVar14 ^ _UNK_?;
        fVar9 = (float)((uint)fVar9 ^ _UNK_?);
        __return_storage_ptr__->x = (float)((uint)fVar13 ^ _UNK_?);
        __return_storage_ptr__->y = (float)uVar24;
        __return_storage_ptr__->z = fVar9;
        return __return_storage_ptr__;
      }
      if (boxFace == BoxFace__Enum_Right) {
        __return_storage_ptr__->x = fVar13;
        __return_storage_ptr__->y = fVar14;
        __return_storage_ptr__->z = fVar9;
        return __return_storage_ptr__;
      }
      if (boxFace != BoxFace__Enum_Bottom) {
        __return_storage_ptr__->x = fVar11;
        __return_storage_ptr__->y = fVar19;
        __return_storage_ptr__->z = fVar10;
        return __return_storage_ptr__;
      }
      uVar24 = (uint)fVar19 ^ _UNK_?;
      fVar10 = (float)((uint)fVar10 ^ _UNK_?);
      __return_storage_ptr__->x = (float)((uint)fVar11 ^ _UNK_?);
      __return_storage_ptr__->y = (float)uVar24;
      __return_storage_ptr__->z = fVar10;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->x = fVar18;
    __return_storage_ptr__->y = fVar3;
  }
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Plane CalcBoxFacePlane(Vector3, Vector3, Quaternion, BoxFace) */

Plane * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFacePlane
                  (Plane *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,
                  Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  uStack_1._0_4_ = boxSize->x;
  uStack_1._4_4_ = boxSize->y;
  fVar2 = (float)uStack_1 * _UNK_?;
  fVar3 = uStack_1._4_4_ * _UNK_?;
  fVar4 = boxSize->z * _UNK_?;
  uStack_5._0_4_ = boxRotation->x;
  uStack_5._4_4_ = boxRotation->y;
  fStack_6 = boxRotation->z;
  fStack_7 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = fStack_6 + fStack_6;
  fVar10 = (float)uStack_5 * ((float)uStack_5 + (float)uStack_5);
  uVar11 = (pVVar8->rightVector).x;
  uVar12 = (pVVar8->rightVector).y;
  fVar13 = uStack_5._4_4_ + uStack_5._4_4_;
  fVar14 = (float)uStack_5 * fVar9;
  fVar15 = fStack_7 * fVar9;
  fVar16 = uStack_5._4_4_ * fVar9;
  fVar17 = uStack_5._4_4_ * fVar13;
  fVar18 = (float)uStack_5 * fVar13;
  fVar19 = fStack_7 * ((float)uStack_5 + (float)uStack_5);
  uStack_5 = CONCAT44(fStack_7,fVar15);
  fVar20 = (pVVar8->rightVector).z;
  fVar21 = (_UNK_? - (fStack_6 * fVar9 + fVar17)) * (float)uVar11 +
           (fVar18 - fVar15) * (float)uVar12 + (fStack_7 * fVar13 + fVar14) * fVar20;
  fStack_22 = (_UNK_? - (fStack_6 * fVar9 + fVar10)) * (float)uVar12 +
              (fVar15 + fVar18) * (float)uVar11 + (fVar16 - fVar19) * fVar20;
  fStack_23 = (fVar14 - fStack_7 * fVar13) * (float)uVar11 + (fVar19 + fVar16) * (float)uVar12 +
              (_UNK_? - (fVar17 + fVar10)) * fVar20;
  uStack_1._0_4_ = boxRotation->x;
  uStack_1._4_4_ = boxRotation->y;
  fStack_24 = boxRotation->z;
  fStack_25 = boxRotation->w;
  fStack_6 = fStack_7;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar26 = (pVVar8->upVector).x;
  uVar27 = (pVVar8->upVector).y;
  fVar13 = fStack_24 + fStack_24;
  fVar15 = uStack_1._4_4_ + uStack_1._4_4_;
  fVar18 = ((float)uStack_1 + (float)uStack_1) * (float)uStack_1;
  fVar19 = ((float)uStack_1 + (float)uStack_1) * fStack_25;
  fVar20 = (pVVar8->upVector).z;
  fVar9 = (_UNK_? - (fVar13 * fStack_24 + fVar15 * uStack_1._4_4_)) * (float)uVar26 +
           (fVar15 * (float)uStack_1 - fVar13 * fStack_25) * (float)uVar27 +
           (fVar15 * fStack_25 + fVar13 * (float)uStack_1) * fVar20;
  fStack_28 = (_UNK_? - (fVar13 * fStack_24 + fVar18)) * (float)uVar27 +
              (fVar13 * fStack_25 + fVar15 * (float)uStack_1) * (float)uVar26 +
              (fVar13 * uStack_1._4_4_ - fVar19) * fVar20;
  fVar20 = (fVar13 * (float)uStack_1 - fVar15 * fStack_25) * (float)uVar26 +
           (fVar19 + fVar13 * uStack_1._4_4_) * (float)uVar27 +
           (_UNK_? - (fVar15 * uStack_1._4_4_ + fVar18)) * fVar20;
  uStack_1._0_4_ = boxRotation->x;
  uStack_1._4_4_ = boxRotation->y;
  fStack_24 = boxRotation->z;
  fStack_25 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar29 = (pVVar8->forwardVector).x;
  uVar30 = (pVVar8->forwardVector).y;
  fVar15 = fStack_24 + fStack_24;
  fVar18 = uStack_1._4_4_ + uStack_1._4_4_;
  fVar19 = ((float)uStack_1 + (float)uStack_1) * (float)uStack_1;
  fStack_31 = fVar15 * (float)uStack_1;
  fVar17 = ((float)uStack_1 + (float)uStack_1) * fStack_25;
  fVar13 = (pVVar8->forwardVector).z;
  fStack_32 = (_UNK_? - (fVar15 * fStack_24 + fVar18 * uStack_1._4_4_)) * (float)uVar29 +
              (fVar18 * (float)uStack_1 - fVar15 * fStack_25) * (float)uVar30 +
              (fVar18 * fStack_25 + fStack_31) * fVar13;
  fStack_33 = (_UNK_? - (fVar15 * fStack_24 + fVar19)) * (float)uVar30 +
              (fVar15 * fStack_25 + fVar18 * (float)uStack_1) * (float)uVar29 +
              (fVar15 * uStack_1._4_4_ - fVar17) * fVar13;
  fStack_6 = (fStack_31 - fVar18 * fStack_25) * (float)uVar29 +
              (fVar17 + fVar15 * uStack_1._4_4_) * (float)uVar30 +
              (_UNK_? - (fVar18 * uStack_1._4_4_ + fVar19)) * fVar13;
  if (boxFace == BoxFace__Enum_Front) {
    fVar15 = fStack_33 * fVar4;
    fVar13 = fStack_32 * fVar4;
    fVar3 = fStack_6 * fVar4;
    fVar2 = fStack_33;
    fVar21 = fStack_32;
code_?:
    fStack_6 = (float)((uint)fStack_6 ^ _UNK_?);
    uVar34 = boxCenter->x;
    uVar35 = boxCenter->y;
    fStack_24 = boxCenter->z - fVar3;
    uStack_5 = CONCAT44((uint)fVar2 ^ _UNK_?,(uint)fVar21 ^ _UNK_?);
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
    uStack_1 = CONCAT44((float)uVar35 - fVar15,(float)uVar34 - fVar13);
  }
  else {
    if (boxFace != BoxFace__Enum_Back) {
      fStack_6 = fStack_23;
      if (boxFace == BoxFace__Enum_Left) {
        fVar13 = fVar21 * fVar2;
        fVar15 = fStack_22 * fVar2;
        fVar3 = fStack_23 * fVar2;
        fVar2 = fStack_22;
      }
      else {
        if (boxFace == BoxFace__Enum_Right) {
          fVar9 = fVar21 * fVar2;
          fVar20 = fStack_22 * fVar2;
          fVar2 = fStack_23 * fVar2;
          fVar3 = fStack_22;
          goto code_?;
        }
        if (boxFace != BoxFace__Enum_Bottom) {
          uVar36 = boxCenter->x;
          uVar37 = boxCenter->y;
          puVar38 = &uStack_5;
          puVar39 = &uStack_1;
          fStack_6 = fVar20 * fVar3 + boxCenter->z;
          (__return_storage_ptr__->m_Normal).x = 0.0;
          (__return_storage_ptr__->m_Normal).y = 0.0;
          *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
          uStack_5 = CONCAT44(fStack_28 * fVar3 + (float)uVar37,fVar9 * fVar3 + (float)uVar36);
          uStack_1 = CONCAT44(fStack_28,fVar9);
          fStack_24 = fVar20;
          goto code_?;
        }
        fVar13 = fVar9 * fVar3;
        fVar15 = fStack_28 * fVar3;
        fVar3 = fVar20 * fVar3;
        fVar2 = fStack_28;
        fStack_6 = fVar20;
        fVar21 = fVar9;
      }
      goto code_?;
    }
    fVar9 = fStack_32 * fVar4;
    fVar20 = fStack_33 * fVar4;
    fVar2 = fStack_6 * fVar4;
    fVar21 = fStack_32;
    fVar3 = fStack_33;
code_?:
    uVar40 = boxCenter->x;
    uVar41 = boxCenter->y;
    fStack_24 = fVar2 + boxCenter->z;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
    uStack_1 = CONCAT44(fVar20 + (float)uVar41,fVar9 + (float)uVar40);
    uStack_5 = CONCAT44(fVar3,fVar21);
  }
  puVar38 = &uStack_1;
  puVar39 = &uStack_5;
code_?:
  FUN_?(__return_storage_ptr__,puVar39,puVar38);
  return __return_storage_ptr__;
}


/* Vector3 CalcBoxFaceSize(Vector3, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceSize
                    (Vector3 *__return_storage_ptr__,Vector3 *boxSize,BoxFace__Enum boxFace,
                    MethodInfo *method)

{
  fVar1 = boxSize->y;
  fVar2 = boxSize->z;
  __return_storage_ptr__->x = boxSize->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  if ((boxFace == BoxFace__Enum_Front) || (boxFace == BoxFace__Enum_Back)) {
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  if ((boxFace != BoxFace__Enum_Left) && (boxFace != BoxFace__Enum_Right)) {
    __return_storage_ptr__->y = 0.0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 CalcBoxPtClosestToPt(Vector3, Vector3, Vector3, Quaternion) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxPtClosestToPt
                    (Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,
                    Vector3 *boxSize,Quaternion *boxRotation,MethodInfo *method)

{
  method_00 = (MethodInfo *)boxCenter;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = point->x;
  uVar2 = point->y;
  aVStack_3[0].x = boxCenter->x;
  aVStack_3[0].y = boxCenter->y;
  fVar4 = point->z;
  fVar5 = (float)uVar1 - aVStack_3[0].x;
  fVar6 = boxCenter->z;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  fVar7 = (float)uVar2 - aVStack_3[0].y;
  __return_storage_ptr__->z = 0.0;
  lVar8 = FUN_?(TypeInfo__UnityEngine__Vector3,3);
  fVar9 = boxRotation->x;
  fVar10 = boxRotation->y;
  fVar11 = boxRotation->z;
  fVar12 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar14 = fVar11 + fVar11;
  fVar15 = fVar10 + fVar10;
  aVStack_3[0].x = (pVVar13->rightVector).x;
  aVStack_3[0].y = (pVVar13->rightVector).y;
  fVar16 = fVar9 * (fVar9 + fVar9);
  fVar17 = fVar12 * (fVar9 + fVar9);
  fVar18 = (pVVar13->rightVector).z;
  fVar19 = _UNK_? - (fVar15 * fVar10 + fVar16);
  if (lVar8 == 0) {
    FUN_?();
    pcVar20 = (code *)swi(3);
    pVVar21 = (Vector3 *)(*pcVar20)();
    return pVVar21;
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    bVar22 = cRam_? == '\0';
    fVar23 = boxRotation->x;
    fVar24 = boxRotation->y;
    fVar25 = boxRotation->z;
    fVar26 = boxRotation->w;
    *(ulonglong *)(lVar8 + 0x20) =
         CONCAT44((_UNK_? - (fVar11 * fVar14 + fVar16)) * aVStack_3[0].y +
                  (fVar12 * fVar14 + fVar9 * fVar15) * aVStack_3[0].x +
                  (fVar14 * fVar10 - fVar17) * fVar18,
                  (_UNK_? - (fVar11 * fVar14 + fVar15 * fVar10)) * aVStack_3[0].x +
                  (fVar9 * fVar15 - fVar12 * fVar14) * aVStack_3[0].y +
                  (fVar12 * fVar15 + fVar9 * fVar14) * fVar18);
    *(float *)(lVar8 + 0x28) =
         (fVar9 * fVar14 - fVar12 * fVar15) * aVStack_3[0].x +
         (fVar17 + fVar14 * fVar10) * aVStack_3[0].y + fVar19 * fVar18;
    if (bVar22) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = fVar25 + fVar25;
    aVStack_3[0].x = (pVVar13->upVector).x;
    aVStack_3[0].y = (pVVar13->upVector).y;
    fVar12 = fVar24 + fVar24;
    fVar19 = fVar23 * (fVar23 + fVar23);
    fVar18 = fVar26 * (fVar23 + fVar23);
    fVar9 = (pVVar13->upVector).z;
    fVar11 = _UNK_? - (fVar24 * fVar12 + fVar19);
    if (1 < *(uint *)(lVar8 + 0x18)) {
      bVar22 = cRam_? == '\0';
      fVar14 = boxRotation->x;
      fVar15 = boxRotation->y;
      fVar17 = boxRotation->z;
      fVar16 = boxRotation->w;
      *(ulonglong *)(lVar8 + 0x2c) =
           CONCAT44((_UNK_? - (fVar25 * fVar10 + fVar19)) * aVStack_3[0].y +
                    (fVar26 * fVar10 + fVar23 * fVar12) * aVStack_3[0].x +
                    (fVar24 * fVar10 - fVar18) * fVar9,
                    (_UNK_? - (fVar25 * fVar10 + fVar24 * fVar12)) * aVStack_3[0].x +
                    (fVar23 * fVar12 - fVar26 * fVar10) * aVStack_3[0].y +
                    (fVar26 * fVar12 + fVar23 * fVar10) * fVar9);
      *(float *)(lVar8 + 0x34) =
           (fVar23 * fVar10 - fVar26 * fVar12) * aVStack_3[0].x +
           (fVar18 + fVar24 * fVar10) * aVStack_3[0].y + fVar11 * fVar9;
      if (bVar22) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar10 = _UNK_?;
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar11 = fVar17 + fVar17;
      aVStack_3[0].x = (pVVar13->forwardVector).x;
      aVStack_3[0].y = (pVVar13->forwardVector).y;
      fVar18 = fVar15 + fVar15;
      fVar23 = fVar14 * (fVar14 + fVar14);
      fVar19 = fVar16 * (fVar14 + fVar14);
      fVar9 = (pVVar13->forwardVector).z;
      fVar12 = _UNK_? - (fVar15 * fVar18 + fVar23);
      if (2 < *(uint *)(lVar8 + 0x18)) {
        fVar24 = boxSize->z;
        *(ulonglong *)(lVar8 + 0x38) =
             CONCAT44((_UNK_? - (fVar17 * fVar11 + fVar23)) * aVStack_3[0].y +
                      (fVar16 * fVar11 + fVar14 * fVar18) * aVStack_3[0].x +
                      (fVar15 * fVar11 - fVar19) * fVar9,
                      (_UNK_? - (fVar17 * fVar11 + fVar15 * fVar18)) * aVStack_3[0].x +
                      (fVar14 * fVar18 - fVar16 * fVar11) * aVStack_3[0].y +
                      (fVar16 * fVar18 + fVar14 * fVar11) * fVar9);
        uVar27 = boxSize->x;
        uVar28 = boxSize->y;
        *(float *)(lVar8 + 0x40) =
             (fVar14 * fVar11 - fVar16 * fVar18) * aVStack_3[0].x +
             (fVar19 + fVar15 * fVar11) * aVStack_3[0].y + fVar12 * fVar9;
        uVar29 = _UNK_?;
        fVar24 = fVar24 * fVar10;
        fVar11 = boxCenter->y;
        puVar30 = (undefined8 *)(lVar8 + 0x20);
        fVar9 = boxCenter->z;
        index = 0;
        __return_storage_ptr__->x = boxCenter->x;
        __return_storage_ptr__->y = fVar11;
        __return_storage_ptr__->z = fVar9;
        aVStack_3[0].y = (float)uVar28 * fVar10;
        aVStack_3[0].x = (float)uVar27 * fVar10;
        aVStack_3[0].z = fVar24;
        while (index < *(uint *)(lVar8 + 0x18)) {
          fVar11 = (float)((ulonglong)*puVar30 >> 0x20) * fVar7 + (float)*puVar30 * fVar5 +
                   *(float *)(puVar30 + 1) * (fVar4 - fVar6);
          fVar9 = (float)uVar27 * fVar10;
          if (((index != 0) && (fVar9 = (float)uVar28 * fVar10, index != 1)) &&
             (fVar9 = fVar24, index != 2)) {
            uVar31 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this = (IndexOutOfRangeException *)func_?(uVar31);
            message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this,message,(MethodInfo *)0x0);
            uVar31 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(this,uVar31);
            pcVar20 = (code *)swi(3);
            pVVar21 = (Vector3 *)(*pcVar20)();
            return pVVar21;
          }
          if (fVar9 < fVar11) {
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (aVStack_3,index,method_00);
          }
          else {
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                               (aVStack_3,index,method_00);
            if (fVar11 < (float)((uint)fVar9 ^ uVar29)) {
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 (aVStack_3,index,method_00);
              fVar11 = (float)((uint)fVar11 ^ uVar29);
            }
          }
          if (*(uint *)(lVar8 + 0x18) <= index) break;
          uVar32 = __return_storage_ptr__->x;
          uVar33 = __return_storage_ptr__->y;
          uVar31 = *puVar30;
          fVar9 = *(float *)((longlong)puVar30 + 4);
          fVar12 = *(float *)(puVar30 + 1);
          index = index + 1;
          puVar30 = (undefined8 *)((longlong)puVar30 + 0xc);
          __return_storage_ptr__->x = (float)uVar31 * fVar11 + (float)uVar32;
          __return_storage_ptr__->y = fVar9 * fVar11 + (float)uVar33;
          __return_storage_ptr__->z = fVar12 * fVar11 + __return_storage_ptr__->z;
          if (2 < (int)index) {
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  pVVar21 = (Vector3 *)(*pcVar20)();
  return pVVar21;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_ContainsPoint
               (Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,
               BoxEpsilon *epsilon,MethodInfo *method)

{
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  uVar3 = (epsilon->_sizeEps).x;
  uVar4 = (epsilon->_sizeEps).y;
  fStack_5 = (epsilon->_sizeEps).z + boxSize->z;
  uStack_6._0_4_ = boxRotation->x;
  uStack_6._4_4_ = boxRotation->y;
  uStack_7._0_4_ = boxRotation->z;
  uStack_7._4_4_ = boxRotation->w;
  fStack_8 = boxCenter->z;
  uStack_9._0_4_ = boxCenter->x;
  uStack_9._4_4_ = boxCenter->y;
  uStack_10 = CONCAT44((float)uVar4 + (float)uVar2,(float)uVar3 + (float)uVar1);
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    bVar21 = (*pcVar19)();
    return bVar21;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_9,&uStack_6,&uStack_10,&uStack_11);
  uStack_22 = uStack_11;
  uStack_23 = uStack_12;
  uStack_24 = uStack_13;
  uStack_25 = uStack_14;
  uStack_26 = uStack_15;
  uStack_27 = uStack_16;
  uStack_28 = (undefined4)uStack_17;
  uStack_29 = uStack_17._4_4_;
  uStack_30 = (undefined4)uStack_18;
  uStack_31 = uStack_18._4_4_;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_37 = 0;
  uStack_38 = 0;
  uStack_39 = 0;
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    bVar21 = (*pcVar19)();
    return bVar21;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_22,&uStack_32);
  fVar40 = _UNK_?;
  fVar41 = point->z;
  uVar42 = point->x;
  uVar43 = point->y;
  fVar44 = _UNK_? /
           (uStack_35._4_4_ * (float)uVar43 + uStack_33._4_4_ * (float)uVar42 +
            uStack_37._4_4_ * fVar41 + uStack_39._4_4_);
  fVar45 = ((float)uStack_35 * (float)uVar43 + (float)uStack_33 * (float)uVar42 +
            (float)uStack_37 * fVar41 + (float)uStack_39) * fVar44;
  point->x = ((float)uStack_34 * (float)uVar43 + (float)uStack_32 * (float)uVar42 +
              (float)uStack_36 * fVar41 + (float)uStack_38) * fVar44;
  point->y = (uStack_34._4_4_ * (float)uVar43 + uStack_32._4_4_ * (float)uVar42 +
              uStack_36._4_4_ * fVar41 + uStack_38._4_4_) * fVar44;
  point->z = fVar45;
  if ((((fVar40 <= point->x) && (point->x <= _UNK_?)) && (fVar40 <= point->y)) &&
     ((point->y <= _UNK_? && (fVar40 <= fVar45)))) {
    return fVar45 <= _UNK_?;
  }
  return 0;
}


/* BoxFaceAreaDesc GetBoxFaceAreaDesc(Vector3, BoxFace) */

BoxFaceAreaDesc
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetBoxFaceAreaDesc
          (Vector3 *boxSize,BoxFace__Enum boxFace,MethodInfo *method)

{
  if ((boxFace == BoxFace__Enum_Front) || (boxFace == BoxFace__Enum_Back)) {
    fVar1 = boxSize->y * boxSize->x;
    if (fVar1 < _UNK_?) {
      fVar1 = boxSize->x;
      if (boxSize->x <= boxSize->y) {
        fVar1 = boxSize->y;
      }
      BVar2.Area = fVar1;
      BVar2.AreaType = 2;
      return BVar2;
    }
  }
  else if ((boxFace == BoxFace__Enum_Left) || (boxFace == BoxFace__Enum_Right)) {
    fVar1 = boxSize->z * boxSize->y;
    if (fVar1 < _UNK_?) {
      fVar1 = boxSize->y;
      if (boxSize->y <= boxSize->z) {
        fVar1 = boxSize->z;
      }
      BVar3.Area = fVar1;
      BVar3.AreaType = 2;
      return BVar3;
    }
  }
  else {
    fVar1 = boxSize->z * boxSize->x;
    if (fVar1 < _UNK_?) {
      fVar1 = boxSize->x;
      if (boxSize->x <= boxSize->z) {
        fVar1 = boxSize->z;
      }
      BVar4.Area = fVar1;
      BVar4.AreaType = 2;
      return BVar4;
    }
  }
  BVar5.Area = fVar1;
  BVar5.AreaType = 1;
  return BVar5;
}


/* Int32 GetFaceAxisIndex(BoxFace) */

int32_t Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceAxisIndex
                  (BoxFace__Enum face,MethodInfo *method)

{
  if ((face == BoxFace__Enum_Top) || (face == BoxFace__Enum_Bottom)) {
    iVar1 = 1;
  }
  else {
    if ((face == BoxFace__Enum_Left) || (face == BoxFace__Enum_Right)) {
      return 0;
    }
    iVar1 = 2;
    if (face != BoxFace__Enum_Back) {
      iVar1 = 2;
      if (face != BoxFace__Enum_Front) {
        iVar1 = -1;
      }
      return iVar1;
    }
  }
  return iVar1;
}


/* BoxFaceDesc GetFaceClosestToPoint(Vector3, Vector3, Vector3, Quaternion) */

BoxFaceDesc *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint
          (BoxFaceDesc *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,
          Quaternion *boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->Face = 0;
  (__return_storage_ptr__->Plane).m_Normal.x = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.y = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->Plane).m_Distance = 0;
  (__return_storage_ptr__->Center).y = 0.0;
  fVar1 = _UNK_?;
  (__return_storage_ptr__->Center).z = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar4 = BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar4 == (List_1_RTG_BoxFace_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    uVar5 = _UNK_?;
    uStack_11 = (pLVar4->fields)._version;
    lStack_12 = (ulonglong)uStack_11 << 0x20;
    uStack_13 = 0;
    uStack_6._0_4_ = SUB84(pLVar4,0);
    uStack_6._4_4_ = (float)((ulonglong)pLVar4 >> 0x20);
    fStack_14 = (float)uStack_6;
    fStack_15 = uStack_6._4_4_;
    uStack_16 = 0;
    uStack_17 = 0;
    auStack_18._0_4_ = 0.0;
    auStack_18._4_4_ = 0.0;
    auStack_18._8_8_ = &fStack_14;
    boxFace_00 = BoxFace__Enum_Front;
    uStack_6 = pLVar4;
    while (lVar19 = CONCAT44(fStack_15,fStack_14), lVar19 != 0) {
      if ((uStack_11 != *(uint *)(lVar19 + 0x1c)) || (*(uint *)(lVar19 + 0x18) <= uStack_16)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
          lVar19 = CONCAT44(fStack_15,fStack_14);
        }
        if (lVar19 == 0) goto code_?;
        if (uStack_11 == *(uint *)(lVar19 + 0x1c)) {
          uStack_16 = *(int *)(lVar19 + 0x18) + 1;
          uStack_17 = uStack_17 & 0xffffffff00000000;
          (__return_storage_ptr__->Center).x = 0.0;
          (__return_storage_ptr__->Center).y = 0.0;
          (__return_storage_ptr__->Center).z = 0.0;
          __return_storage_ptr__->Face = boxFace_00;
          (__return_storage_ptr__->Plane).m_Normal.x = (float)uStack_2;
          (__return_storage_ptr__->Plane).m_Normal.y = uStack_2._4_4_;
          (__return_storage_ptr__->Plane).m_Normal.z = (float)uStack_3;
          (__return_storage_ptr__->Plane).m_Distance = uStack_3._4_4_;
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_18._0_4_ = boxRotation->x;
          auStack_18._4_4_ = boxRotation->y;
          auStack_18._8_4_ = boxRotation->z;
          auStack_18._12_4_ = boxRotation->w;
          VStack_20.x = boxSize->x;
          VStack_20.y = boxSize->y;
          VStack_20.z = boxSize->z;
          VStack_21.x = boxCenter->x;
          VStack_21.y = boxCenter->y;
          VStack_21.z = boxCenter->z;
          pVVar22 = BoxMath_CalcBoxFaceCenter
                             ((Vector3 *)aQStack_23,&VStack_21,&VStack_20,(Quaternion *)auStack_18,
                              boxFace_00,(MethodInfo *)0x0);
          fVar1 = pVVar22->y;
          (__return_storage_ptr__->Center).x = pVVar22->x;
          (__return_storage_ptr__->Center).y = fVar1;
          (__return_storage_ptr__->Center).z = pVVar22->z;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      lVar19 = *(longlong *)(lVar19 + 0x10);
      if (lVar19 == 0) goto code_?;
      if (*(uint *)(lVar19 + 0x18) <= uStack_16) goto code_?;
      boxFace = *(BoxFace__Enum *)(lVar19 + 0x20 + (longlong)(int)uStack_16 * 4);
      uStack_17 = CONCAT44(uStack_17._4_4_,boxFace);
      uStack_16 = uStack_16 + 1;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      aQStack_23[0].x = boxRotation->x;
      aQStack_23[0].y = boxRotation->y;
      aQStack_23[0].z = boxRotation->z;
      aQStack_23[0].w = boxRotation->w;
      VStack_21.x = boxSize->x;
      VStack_21.y = boxSize->y;
      VStack_21.z = boxSize->z;
      VStack_20.x = boxCenter->x;
      VStack_20.y = boxCenter->y;
      VStack_20.z = boxCenter->z;
      pPVar24 = BoxMath_CalcBoxFacePlane
                         ((Plane *)&uStack_6,&VStack_20,&VStack_21,aQStack_23,boxFace,
                          (MethodInfo *)0x0);
      uVar25._0_4_ = (pPVar24->m_Normal).x;
      uVar25._4_4_ = (pPVar24->m_Normal).y;
      pfVar26 = &(pPVar24->m_Normal).z;
      aQStack_23[0].x = point->x;
      aQStack_23[0].y = point->y;
      fVar27 = (float)((uint)(aQStack_23[0].y * (pPVar24->m_Normal).y +
                              aQStack_23[0].x * (pPVar24->m_Normal).x + point->z * *pfVar26 +
                             pPVar24->m_Distance) & uVar5);
      if (fVar27 < fVar1) {
        fVar1 = fVar27;
        boxFace_00 = boxFace;
        uStack_2 = uVar25;
        uStack_3 = *(undefined8 *)pfVar26;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar28 = (code *)swi(3);
  pBVar29 = (BoxFaceDesc *)(*pcVar28)();
  return pBVar29;
}


/* BoxFaceDesc GetFaceClosestToPoint(Vector3, Vector3, Vector3, Quaternion, Vector3) */

BoxFaceDesc *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint_1
          (BoxFaceDesc *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,
          Quaternion *boxRotation,Vector3 *viewVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->Face = 0;
  (__return_storage_ptr__->Plane).m_Normal.x = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.y = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->Plane).m_Distance = 0;
  (__return_storage_ptr__->Center).y = 0.0;
  fVar1 = _UNK_?;
  (__return_storage_ptr__->Center).z = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar4 = BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar4 == (List_1_RTG_BoxFace_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    uVar5 = _UNK_?;
    uStack_11 = (pLVar4->fields)._version;
    lStack_12 = (ulonglong)uStack_11 << 0x20;
    uStack_13 = 0;
    uStack_6._0_4_ = SUB84(pLVar4,0);
    uStack_6._4_4_ = (float)((ulonglong)pLVar4 >> 0x20);
    fStack_14 = (float)uStack_6;
    fStack_15 = uStack_6._4_4_;
    uStack_16 = 0;
    uStack_17 = 0;
    auStack_18._0_4_ = 0.0;
    auStack_18._4_4_ = 0.0;
    auStack_18._8_8_ = &fStack_14;
    boxFace_00 = BoxFace__Enum_Front;
    uStack_6 = pLVar4;
    while (lVar19 = CONCAT44(fStack_15,fStack_14), lVar19 != 0) {
      if ((uStack_11 != *(uint *)(lVar19 + 0x1c)) || (*(uint *)(lVar19 + 0x18) <= uStack_16)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
          lVar19 = CONCAT44(fStack_15,fStack_14);
        }
        if (lVar19 == 0) goto code_?;
        if (uStack_11 == *(uint *)(lVar19 + 0x1c)) {
          uStack_16 = *(int *)(lVar19 + 0x18) + 1;
          uStack_17 = uStack_17 & 0xffffffff00000000;
          (__return_storage_ptr__->Center).x = 0.0;
          (__return_storage_ptr__->Center).y = 0.0;
          (__return_storage_ptr__->Center).z = 0.0;
          __return_storage_ptr__->Face = boxFace_00;
          (__return_storage_ptr__->Plane).m_Normal.x = (float)uStack_2;
          (__return_storage_ptr__->Plane).m_Normal.y = uStack_2._4_4_;
          (__return_storage_ptr__->Plane).m_Normal.z = (float)uStack_3;
          (__return_storage_ptr__->Plane).m_Distance = uStack_3._4_4_;
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_18._0_4_ = boxRotation->x;
          auStack_18._4_4_ = boxRotation->y;
          auStack_18._8_4_ = boxRotation->z;
          auStack_18._12_4_ = boxRotation->w;
          VStack_20.x = boxSize->x;
          VStack_20.y = boxSize->y;
          VStack_20.z = boxSize->z;
          VStack_21.x = boxCenter->x;
          VStack_21.y = boxCenter->y;
          VStack_21.z = boxCenter->z;
          pVVar22 = BoxMath_CalcBoxFaceCenter
                              ((Vector3 *)aQStack_23,&VStack_21,&VStack_20,(Quaternion *)auStack_18
                               ,boxFace_00,(MethodInfo *)0x0);
          fVar1 = pVVar22->y;
          (__return_storage_ptr__->Center).x = pVVar22->x;
          (__return_storage_ptr__->Center).y = fVar1;
          (__return_storage_ptr__->Center).z = pVVar22->z;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      lVar19 = *(longlong *)(lVar19 + 0x10);
      if (lVar19 == 0) goto code_?;
      if (*(uint *)(lVar19 + 0x18) <= uStack_16) goto code_?;
      boxFace = *(BoxFace__Enum *)(lVar19 + 0x20 + (longlong)(int)uStack_16 * 4);
      uStack_17 = CONCAT44(uStack_17._4_4_,boxFace);
      uStack_16 = uStack_16 + 1;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      aQStack_23[0].x = boxRotation->x;
      aQStack_23[0].y = boxRotation->y;
      aQStack_23[0].z = boxRotation->z;
      aQStack_23[0].w = boxRotation->w;
      VStack_21.x = boxSize->x;
      VStack_21.y = boxSize->y;
      VStack_21.z = boxSize->z;
      VStack_20.x = boxCenter->x;
      VStack_20.y = boxCenter->y;
      VStack_20.z = boxCenter->z;
      pPVar24 = BoxMath_CalcBoxFacePlane
                         ((Plane *)&uStack_6,&VStack_20,&VStack_21,aQStack_23,boxFace,
                          (MethodInfo *)0x0);
      fVar25 = (pPVar24->m_Normal).x;
      fVar26 = (pPVar24->m_Normal).y;
      uVar27._0_4_ = (pPVar24->m_Normal).x;
      uVar27._4_4_ = (pPVar24->m_Normal).y;
      pfVar28 = &(pPVar24->m_Normal).z;
      fVar29 = *pfVar28;
      aQStack_23[0].x = viewVector->x;
      aQStack_23[0].y = viewVector->y;
      if (fVar26 * aQStack_23[0].y + fVar25 * aQStack_23[0].x + fVar29 * viewVector->z < 0.0) {
        aQStack_23[0].x = point->x;
        aQStack_23[0].y = point->y;
        fVar25 = (float)((uint)(aQStack_23[0].y * fVar26 + aQStack_23[0].x * fVar25 +
                                point->z * fVar29 + pPVar24->m_Distance) & uVar5);
        if (fVar25 < fVar1) {
          fVar1 = fVar25;
          boxFace_00 = boxFace;
          uStack_2 = uVar27;
          uStack_3 = *(undefined8 *)pfVar28;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  pBVar31 = (BoxFaceDesc *)(*pcVar30)();
  return pBVar31;
}


/* BoxFace GetMostAlignedFace(Vector3, Vector3, Quaternion, Vector3) */

BoxFace__Enum
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetMostAlignedFace
          (Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,Vector3 *direction,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar1 != (List_1_RTG_BoxFace_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      BVar3 = (*pcVar2)();
      return BVar3;
    }
    pBVar4 = (pLVar1->fields)._items;
    if (pBVar4 != (BoxFace__Enum__Array *)0x0) {
      if ((int)pBVar4->max_length != 0) {
        aQStack_5[0].x = boxRotation->x;
        aQStack_5[0].y = boxRotation->y;
        aQStack_5[0].z = boxRotation->z;
        aQStack_5[0].w = boxRotation->w;
        VStack_6.z = boxSize->z;
        VStack_6.x = boxSize->x;
        VStack_6.y = boxSize->y;
        VStack_7.z = boxCenter->z;
        VStack_7.x = boxCenter->x;
        VStack_7.y = boxCenter->y;
        pVVar8 = BoxMath_CalcBoxFaceNormal
                            (&VStack_9,&VStack_7,&VStack_6,aQStack_5,pBVar4->vector[0],
                             (MethodInfo *)0x0);
        VStack_7.x = direction->x;
        VStack_7.y = direction->y;
        uVar10 = pVVar8->x;
        uVar11 = pVVar8->y;
        lVar12 = 0x24;
        fVar13 = (float)uVar11 * VStack_7.y + (float)uVar10 * VStack_7.x + pVVar8->z * direction->z
        ;
        uVar14 = 0;
        for (uVar15 = 1; (int)uVar15 < (pLVar1->fields)._size; uVar15 = uVar15 + 1) {
          if ((uint)(pLVar1->fields)._size <= uVar15) goto code_?;
          pBVar4 = (pLVar1->fields)._items;
          if (pBVar4 == (BoxFace__Enum__Array *)0x0) goto code_?;
          if ((uint)pBVar4->max_length <= uVar15) goto code_?;
          BVar3 = *(BoxFace__Enum *)((longlong)pBVar4->vector + lVar12 + -0x20);
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_7.x = boxSize->x;
          VStack_7.y = boxSize->y;
          aQStack_5[0].x = boxRotation->x;
          aQStack_5[0].y = boxRotation->y;
          aQStack_5[0].z = boxRotation->z;
          aQStack_5[0].w = boxRotation->w;
          VStack_7.z = boxSize->z;
          VStack_6.z = boxCenter->z;
          VStack_6.x = boxCenter->x;
          VStack_6.y = boxCenter->y;
          pVVar8 = BoxMath_CalcBoxFaceNormal
                              (&VStack_9,&VStack_6,&VStack_7,aQStack_5,BVar3,(MethodInfo *)0x0);
          aQStack_5[0].x = direction->x;
          aQStack_5[0].y = direction->y;
          uVar16 = pVVar8->x;
          uVar17 = pVVar8->y;
          fVar18 = (float)uVar17 * aQStack_5[0].y + (float)uVar16 * aQStack_5[0].x +
                   pVVar8->z * direction->z;
          uVar19 = uVar15;
          if (fVar18 <= fVar13) {
            uVar19 = uVar14;
            fVar18 = fVar13;
          }
          fVar13 = fVar18;
          lVar12 = lVar12 + 4;
          uVar14 = uVar19;
        }
        if ((uint)(pLVar1->fields)._size <= uVar14) goto code_?;
        pBVar4 = (pLVar1->fields)._items;
        if (pBVar4 == (BoxFace__Enum__Array *)0x0) goto code_?;
        if (uVar14 < (uint)pBVar4->max_length) {
          return pBVar4->vector[(int)uVar14];
        }
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      BVar3 = (*pcVar2)();
      return BVar3;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  BVar3 = (*pcVar2)();
  return BVar3;
}


/* Boolean Raycast(Ray, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast
               (Ray *ray,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,
               BoxEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = 0.0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.x = boxSize->x;
  VStack_1.y = boxSize->y;
  VStack_2.x = (epsilon->_sizeEps).x;
  VStack_2.y = (epsilon->_sizeEps).y;
  VStack_2.z = (epsilon->_sizeEps).z;
  RStack_3.m_Direction.y = (ray->m_Direction).y;
  RStack_3.m_Direction.z = (ray->m_Direction).z;
  VStack_1.z = boxSize->z;
  QStack_4.x = boxRotation->x;
  QStack_4.y = boxRotation->y;
  QStack_4.z = boxRotation->z;
  QStack_4.w = boxRotation->w;
  VStack_5.z = boxCenter->z;
  VStack_5.x = boxCenter->x;
  VStack_5.y = boxCenter->y;
  RStack_3.m_Origin.x = (ray->m_Origin).x;
  RStack_3.m_Origin.y = (ray->m_Origin).y;
  RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  bVar6 = BoxMath_Raycast_1(&RStack_3,afStackX_8,&VStack_5,&VStack_1,&QStack_4,
                            (BoxEpsilon *)&VStack_2,(MethodInfo *)0x0);
  return bVar6;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast_1
               (Ray *ray,float *t,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,
               BoxEpsilon *epsilon,MethodInfo *method)

{
  QStack_1.x = boxSize->x;
  QStack_1.y = boxSize->y;
  *t = 0.0;
  fVar2 = _UNK_?;
  uVar3 = (epsilon->_sizeEps).x;
  uVar4 = (epsilon->_sizeEps).y;
  QStack_5.x = (float)uVar3 + QStack_1.x;
  QStack_5.z = (epsilon->_sizeEps).z + boxSize->z;
  QStack_5.y = (float)uVar4 + QStack_1.y;
  boxSize->x = QStack_5.x;
  boxSize->y = (float)uVar4 + QStack_1.y;
  boxSize->z = QStack_5.z;
  bVar6 = boxSize->x <= fVar2 && fVar2 != boxSize->x;
  bVar7 = bVar6 + 1;
  if (fVar2 < boxSize->y || fVar2 == boxSize->y) {
    bVar7 = bVar6;
  }
  bVar8 = bVar7 + 1;
  if (fVar2 <= QStack_5.z) {
    bVar8 = bVar7;
  }
  if (1 < bVar8) {
    return 0;
  }
  if (bVar8 != 1) {
    QStack_9.x = boxCenter->x;
    QStack_9.y = boxCenter->y;
    QStack_1.x = boxRotation->x;
    QStack_1.y = boxRotation->y;
    QStack_1.z = boxRotation->z;
    QStack_1.w = boxRotation->w;
    QStack_9.z = boxCenter->z;
    MStack_10.m00 = 0.0;
    MStack_10.m10 = 0.0;
    MStack_10.m20 = 0.0;
    MStack_10.m30 = 0.0;
    MStack_10.m01 = 0.0;
    MStack_10.m11 = 0.0;
    MStack_10.m21 = 0.0;
    MStack_10.m31 = 0.0;
    MStack_10.m02 = 0.0;
    MStack_10.m12 = 0.0;
    MStack_10.m22 = 0.0;
    MStack_10.m32 = 0.0;
    MStack_10.m03 = 0.0;
    MStack_10.m13 = 0.0;
    MStack_10.m23 = 0.0;
    MStack_10.m33 = 0.0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      bVar13 = (*pcVar11)();
      return bVar13;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&QStack_9,&QStack_1,&QStack_5);
    MStack_14.m00 = MStack_10.m00;
    MStack_14.m10 = MStack_10.m10;
    MStack_14.m20 = MStack_10.m20;
    MStack_14.m30 = MStack_10.m30;
    MStack_14.m01 = MStack_10.m01;
    MStack_14.m11 = MStack_10.m11;
    MStack_14.m21 = MStack_10.m21;
    MStack_14.m31 = MStack_10.m31;
    MStack_14.m02 = MStack_10.m02;
    MStack_14.m12 = MStack_10.m12;
    MStack_14.m22 = MStack_10.m22;
    MStack_14.m32 = MStack_10.m32;
    aMStack_15[0].m01 = MStack_10.m01;
    aMStack_15[0].m11 = MStack_10.m11;
    aMStack_15[0].m21 = MStack_10.m21;
    aMStack_15[0].m31 = MStack_10.m31;
    MStack_14.m03 = MStack_10.m03;
    MStack_14.m13 = MStack_10.m13;
    MStack_14.m23 = MStack_10.m23;
    MStack_14.m33 = MStack_10.m33;
    aMStack_15[0].m00 = MStack_10.m00;
    aMStack_15[0].m10 = MStack_10.m10;
    aMStack_15[0].m20 = MStack_10.m20;
    aMStack_15[0].m30 = MStack_10.m30;
    aMStack_15[0].m02 = MStack_10.m02;
    aMStack_15[0].m12 = MStack_10.m12;
    aMStack_15[0].m22 = MStack_10.m22;
    aMStack_15[0].m32 = MStack_10.m32;
    RStack_16.m_Origin.x = (ray->m_Origin).x;
    RStack_16.m_Origin.y = (ray->m_Origin).y;
    RStack_16._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aMStack_15[0].m03 = MStack_10.m03;
    aMStack_15[0].m13 = MStack_10.m13;
    aMStack_15[0].m23 = MStack_10.m23;
    aMStack_15[0].m33 = MStack_10.m33;
    RStack_16.m_Direction.y = (ray->m_Direction).y;
    RStack_16.m_Direction.z = (ray->m_Direction).z;
    pRVar17 = RayEx::RayEx_InverseTransform(&RStack_18,&RStack_16,aMStack_15,(MethodInfo *)0x0);
    fVar2 = (pRVar17->m_Origin).x;
    fVar19 = (pRVar17->m_Origin).y;
    uVar20._0_4_ = (pRVar17->m_Origin).x;
    uVar20._4_4_ = (pRVar17->m_Origin).y;
    pfVar21 = &(pRVar17->m_Origin).z;
    fVar22 = *pfVar21;
    fVar23 = (pRVar17->m_Direction).x;
    uVar24 = *(undefined8 *)pfVar21;
    uVar12._0_4_ = (pRVar17->m_Direction).y;
    uVar12._4_4_ = (pRVar17->m_Direction).z;
    if ((float)(undefined4)uVar12 * (float)(undefined4)uVar12 + fVar23 * fVar23 +
        (float)uVar12._4_4_ * (float)uVar12._4_4_ == 0.0) {
      return 0;
    }
    uStack_25 = uVar12;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27._0_4_ = (pVVar26->zeroVector).x;
    uVar27._4_4_ = (pVVar26->zeroVector).y;
    fVar28 = (pVVar26->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar26->oneVector).x;
    uVar30 = (pVVar26->oneVector).y;
    RStack_16.m_Direction.y = (float)uVar30 * _UNK_?;
    RStack_16.m_Direction.z = (pVVar26->oneVector).z * _UNK_?;
    RStack_16.m_Direction.x = (float)uVar29 * _UNK_?;
    RStack_16.m_Origin.z = fVar28;
    pcVar11 = pcRam_?;
    QStack_1._0_8_ = uVar20;
    QStack_1._8_8_ = uVar24;
    uStack_31 = uVar12;
    RStack_16.m_Origin._0_8_ = uVar27;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      bVar13 = (*pcVar11)();
      return bVar13;
    }
    pcRam_? = pcVar11;
    cVar32 = (*pcRam_?)(&QStack_1,&RStack_16,t);
    if (cVar32 == '\0') {
      return 0;
    }
    fVar28 = *t;
    fVar2 = fVar28 * fVar23 + fVar2;
    fVar22 = fVar28 * uStack_25._4_4_ + fVar22;
    fVar19 = fVar28 * (float)(undefined4)uVar12 + fVar19;
    fVar23 = _UNK_? /
            (MStack_10.m31 * fVar19 + MStack_10.m30 * fVar2 + MStack_10.m32 * fVar22 +
            MStack_10.m33);
    uVar33 = (ray->m_Origin).x;
    uVar34 = (ray->m_Origin).y;
    QStack_5.y = (MStack_10.m11 * fVar19 + MStack_10.m10 * fVar2 + MStack_10.m12 * fVar22 +
                   MStack_10.m13) * fVar23 - (float)uVar34;
    QStack_5.x = (MStack_10.m01 * fVar19 + MStack_10.m00 * fVar2 + MStack_10.m02 * fVar22 +
                   MStack_10.m03) * fVar23 - (float)uVar33;
    QStack_5.z = (MStack_10.m21 * fVar19 + MStack_10.m20 * fVar2 + MStack_10.m22 * fVar22 +
                   MStack_10.m23) * fVar23 - (ray->m_Origin).z;
    fVar2 = (float)FUN_?(&QStack_5);
    *t = fVar2;
    return 1;
  }
  if (boxSize->x <= fVar2 && fVar2 != boxSize->x) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar35 = TypeInfo__UnityEngine__Vector3;
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_1.x = (pVVar26->forwardVector).x;
    QStack_1.y = (pVVar26->forwardVector).y;
    RStack_16.m_Origin.x = boxRotation->x;
    RStack_16.m_Origin.y = boxRotation->y;
    RStack_16.m_Origin.z = boxRotation->z;
    RStack_16.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->forwardVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&QStack_9,(Quaternion *)&RStack_16,(Vector3 *)&QStack_1,
                         (MethodInfo *)0x0);
    uVar37 = pVVar36->x;
    uVar38 = pVVar36->y;
    fVar2 = pVVar36->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pVVar35 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar26 = pVVar35->static_fields;
    QStack_1.x = (pVVar26->upVector).x;
    QStack_1.y = (pVVar26->upVector).y;
    RStack_16.m_Origin.x = boxRotation->x;
    RStack_16.m_Origin.y = boxRotation->y;
    RStack_16.m_Origin.z = boxRotation->z;
    RStack_16.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->upVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&QStack_9,(Quaternion *)&RStack_16,(Vector3 *)&QStack_1,
                         (MethodInfo *)0x0);
    fVar19 = boxSize->z;
    QStack_1.x = pVVar36->x;
    QStack_1.y = pVVar36->y;
    QStack_5.x = boxCenter->x;
    QStack_5.y = boxCenter->y;
    RStack_18.m_Origin.x = (ray->m_Origin).x;
    RStack_18.m_Origin.y = (ray->m_Origin).y;
    RStack_18._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    fVar22 = boxSize->y;
    fVar23 = (float)uVar37;
    fVar28 = (float)uVar38;
  }
  else {
    if (fVar2 < boxSize->y || fVar2 == boxSize->y) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar35 = TypeInfo__UnityEngine__Vector3;
      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_9.x = (pVVar26->rightVector).x;
      QStack_9.y = (pVVar26->rightVector).y;
      QStack_9.z = (pVVar26->rightVector).z;
      QStack_5.x = boxRotation->x;
      QStack_5.y = boxRotation->y;
      QStack_5.z = boxRotation->z;
      QStack_5.w = boxRotation->w;
      pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&QStack_1,&QStack_5,(Vector3 *)&QStack_9,
                           (MethodInfo *)0x0);
      uVar24._0_4_ = pVVar36->x;
      uVar24._4_4_ = pVVar36->y;
      fVar2 = pVVar36->z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        pVVar35 = TypeInfo__UnityEngine__Vector3;
      }
      pVVar26 = pVVar35->static_fields;
      QStack_9.x = (pVVar26->upVector).x;
      QStack_9.y = (pVVar26->upVector).y;
      QStack_9.z = (pVVar26->upVector).z;
      QStack_5.x = boxRotation->x;
      QStack_5.y = boxRotation->y;
      QStack_5.z = boxRotation->z;
      QStack_5.w = boxRotation->w;
      pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&QStack_1,&QStack_5,(Vector3 *)&QStack_9,
                           (MethodInfo *)0x0);
      fVar19 = boxSize->x;
      quadCenter = &QStack_1;
      QStack_9.x = pVVar36->x;
      QStack_9.y = pVVar36->y;
      QStack_1.x = boxCenter->x;
      QStack_1.y = boxCenter->y;
      QStack_1.z = boxCenter->z;
      quadUp = &QStack_9;
      RStack_18.m_Origin.x = (ray->m_Origin).x;
      RStack_18.m_Origin.y = (ray->m_Origin).y;
      RStack_18._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      quadRight = &QStack_5;
      fVar22 = boxSize->y;
      QStack_5.z = fVar2;
      QStack_5._0_8_ = uVar24;
      QStack_9.z = pVVar36->z;
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar35 = TypeInfo__UnityEngine__Vector3;
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_1.x = (pVVar26->rightVector).x;
    QStack_1.y = (pVVar26->rightVector).y;
    RStack_16.m_Origin.x = boxRotation->x;
    RStack_16.m_Origin.y = boxRotation->y;
    RStack_16.m_Origin.z = boxRotation->z;
    RStack_16.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->rightVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&QStack_9,(Quaternion *)&RStack_16,(Vector3 *)&QStack_1,
                         (MethodInfo *)0x0);
    fVar23 = pVVar36->x;
    fVar28 = pVVar36->y;
    fVar2 = pVVar36->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pVVar35 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar26 = pVVar35->static_fields;
    QStack_1.x = (pVVar26->forwardVector).x;
    QStack_1.y = (pVVar26->forwardVector).y;
    RStack_16.m_Origin.x = boxRotation->x;
    RStack_16.m_Origin.y = boxRotation->y;
    RStack_16.m_Origin.z = boxRotation->z;
    RStack_16.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->forwardVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&QStack_9,(Quaternion *)&RStack_16,(Vector3 *)&QStack_1,
                         (MethodInfo *)0x0);
    fVar19 = boxSize->x;
    QStack_1.x = pVVar36->x;
    QStack_1.y = pVVar36->y;
    QStack_5.x = boxCenter->x;
    QStack_5.y = boxCenter->y;
    RStack_18.m_Origin.x = (ray->m_Origin).x;
    RStack_18.m_Origin.y = (ray->m_Origin).y;
    RStack_18._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    fVar22 = boxSize->z;
  }
  quadCenter = &QStack_5;
  QStack_1.z = pVVar36->z;
  QStack_5.z = boxCenter->z;
  quadUp = &QStack_1;
  quadRight = &QStack_9;
  QStack_9.y = fVar28;
  QStack_9.x = fVar23;
  QStack_9.z = fVar2;
code_?:
  RStack_16.m_Origin.z = 0.0;
  RStack_16.m_Direction.x = 0.0;
  RStack_16.m_Origin.x = 0.0;
  RStack_16.m_Origin.y = 0.0;
  RStack_18.m_Direction.y = (ray->m_Direction).y;
  RStack_18.m_Direction.z = (ray->m_Direction).z;
  bVar13 = QuadMath::QuadMath_Raycast
                     (&RStack_18,t,(Vector3 *)quadCenter,fVar19,fVar22,(Vector3 *)quadRight,
                      (Vector3 *)quadUp,(QuadEpsilon *)&RStack_16,(MethodInfo *)0x0);
  return bVar13;
}


/* Void TransformBox(Vector3, Vector3, Matrix4x4, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::RTG::BoxMath::BoxMath_TransformBox
               (Vector3 *boxCenter,Vector3 *boxSize,Matrix4x4 *transformMatrix,Vector3 *newBoxCenter
               ,Vector3 *newBoxSize,MethodInfo *method)

{
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  fVar3 = (float)uVar2 * _UNK_?;
  fVar4 = (float)uVar1 * _UNK_?;
  fVar5 = boxSize->z * _UNK_?;
  fVar6 = boxCenter->z;
  uVar7 = boxCenter->x;
  uVar8 = boxCenter->y;
  fVar9 = transformMatrix->m11;
  fVar10 = transformMatrix->m21;
  fVar11 = transformMatrix->m10;
  fVar12 = transformMatrix->m12;
  fVar13 = transformMatrix->m20;
  fVar14 = transformMatrix->m22;
  fVar15 = transformMatrix->m13;
  fVar16 = transformMatrix->m23;
  fVar17 = _UNK_? /
           ((float)uVar8 * transformMatrix->m31 + (float)uVar7 * transformMatrix->m30 +
            fVar6 * transformMatrix->m32 + transformMatrix->m33);
  fVar18 = transformMatrix->m01;
  fVar19 = transformMatrix->m11;
  fVar20 = transformMatrix->m02;
  fVar21 = transformMatrix->m21;
  newBoxCenter->x =
       fVar17 * ((float)uVar8 * transformMatrix->m01 + (float)uVar7 * transformMatrix->m00 +
                 fVar6 * transformMatrix->m02 + transformMatrix->m03);
  newBoxCenter->y =
       fVar17 * ((float)uVar8 * fVar9 + (float)uVar7 * fVar11 + fVar6 * fVar12 + fVar15);
  fVar9 = transformMatrix->m00;
  newBoxCenter->z =
       fVar17 * ((float)uVar8 * fVar10 + (float)uVar7 * fVar13 + fVar6 * fVar14 + fVar16);
  fVar9 = (float)((uint)(fVar3 * fVar18) & _UNK_?) +
           (float)((uint)(fVar4 * fVar9) & _UNK_?) +
           (float)((uint)(fVar5 * fVar20) & _UNK_?);
  fVar6 = (float)((uint)(fVar3 * fVar19) & _UNK_?) +
           (float)((uint)(fVar4 * transformMatrix->m10) & _UNK_?) +
           (float)((uint)(fVar5 * transformMatrix->m12) & _UNK_?);
  fVar10 = (float)((uint)(fVar3 * fVar21) & _UNK_?) +
           (float)((uint)(fVar4 * transformMatrix->m20) & _UNK_?) +
           (float)((uint)(fVar5 * transformMatrix->m22) & _UNK_?);
  newBoxSize->x = fVar9 + fVar9;
  newBoxSize->y = fVar6 + fVar6;
  newBoxSize->z = fVar10 + fVar10;
  return;
}


/* BoxMath() */

void Assembly-CSharp.dll::RTG::BoxMath::BoxMath__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_BoxFace_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List__);
  TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces = pLVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RTG__BoxMath->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pVVar7 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  TypeInfo__RTG__BoxMath->static_fields->A = pVVar7;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__RTG__BoxMath->static_fields->A >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pVVar7 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  TypeInfo__RTG__BoxMath->static_fields->B = pVVar7;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__RTG__BoxMath->static_fields->B >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uStack_8 = 3;
  uStack_9 = 3;
  pSVar10 = (Single__Array_1 *)FUN_?(TypeInfo__System__Single,&uStack_8,0);
  TypeInfo__RTG__BoxMath->static_fields->R = pSVar10;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__RTG__BoxMath->static_fields->R >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uStack_8 = 3;
  uStack_9 = 3;
  pSVar10 = (Single__Array_1 *)FUN_?(TypeInfo__System__Single,&uStack_8,0);
  TypeInfo__RTG__BoxMath->static_fields->absR = pSVar10;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__RTG__BoxMath->static_fields->absR >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
  pLVar12 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
  if (pLVar12 != (List_1_System_UInt32Enum_ *)0x0) {
    piVar13 = &(pLVar12->fields)._version;
    *piVar13 = *piVar13 + 1;
    pUVar14 = (pLVar12->fields)._items;
    if (pUVar14 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar12->fields)._size;
    if (uVar2 < (uint)pUVar14->max_length) {
      (pLVar12->fields)._size = uVar2 + 1;
      if ((uint)pUVar14->max_length <= uVar2) goto code_?;
      pUVar14->vector[(int)uVar2] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,0,pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
    pLVar12 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar13 = &(pLVar12->fields)._version;
    *piVar13 = *piVar13 + 1;
    pUVar14 = (pLVar12->fields)._items;
    if (pUVar14 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar12->fields)._size;
    if (uVar2 < (uint)pUVar14->max_length) {
      (pLVar12->fields)._size = uVar2 + 1;
      if ((uint)pUVar14->max_length <= uVar2) goto code_?;
      pUVar14->vector[(int)uVar2] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,1,pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
    pLVar12 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar13 = &(pLVar12->fields)._version;
    *piVar13 = *piVar13 + 1;
    pUVar14 = (pLVar12->fields)._items;
    if (pUVar14 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar12->fields)._size;
    if (uVar2 < (uint)pUVar14->max_length) {
      (pLVar12->fields)._size = uVar2 + 1;
      if ((uint)pUVar14->max_length <= uVar2) goto code_?;
      pUVar14->vector[(int)uVar2] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,2,pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
    pLVar12 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar13 = &(pLVar12->fields)._version;
    *piVar13 = *piVar13 + 1;
    pUVar14 = (pLVar12->fields)._items;
    if (pUVar14 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar12->fields)._size;
    if (uVar2 < (uint)pUVar14->max_length) {
      (pLVar12->fields)._size = uVar2 + 1;
      if ((uint)pUVar14->max_length <= uVar2) goto code_?;
      pUVar14->vector[(int)uVar2] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,3,pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
    pLVar12 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar13 = &(pLVar12->fields)._version;
    *piVar13 = *piVar13 + 1;
    pUVar14 = (pLVar12->fields)._items;
    if (pUVar14 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar12->fields)._size;
    if (uVar2 < (uint)pUVar14->max_length) {
      (pLVar12->fields)._size = uVar2 + 1;
      if ((uint)pUVar14->max_length <= uVar2) goto code_?;
      pUVar14->vector[(int)uVar2] = 4;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,4,pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
    pLVar1 = TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
    if (pLVar1 != (List_1_RTG_BoxFace_ *)0x0) {
      piVar13 = &(pLVar1->fields)._version;
      *piVar13 = *piVar13 + 1;
      pBVar15 = (pLVar1->fields)._items;
      if (pBVar15 != (BoxFace__Enum__Array *)0x0) {
        uVar2 = (pLVar1->fields)._size;
        if ((uint)pBVar15->max_length <= uVar2) {
          uVar2 = (pLVar1->fields)._size;
          FUN_?(pLVar1,uVar2 + 1,
                        (pMVar11->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy);
          pBVar15 = (pLVar1->fields)._items;
          (pLVar1->fields)._size = uVar2 + 1;
          if (pBVar15 == (BoxFace__Enum__Array *)0x0) {
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if ((uint)pBVar15->max_length <= uVar2) {
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pBVar15->vector[(int)uVar2] = BoxFace__Enum_Top;
          return;
        }
        (pLVar1->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pBVar15->max_length) {
          pBVar15->vector[(int)uVar2] = BoxFace__Enum_Top;
          return;
        }
code_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* List`1[RTG.BoxFace] get_AllBoxFaces() */

List_1_RTG_BoxFace_ * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_get_AllBoxFaces(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__BoxMath);
  }
  collection = TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
  this = (List_1_System_Int32Enum_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
  List_1_System_Int32Enum___ctor_1
            (this,(IEnumerable_1_System_Int32Enum_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_
            );
  return (List_1_RTG_BoxFace_ *)this;
}

