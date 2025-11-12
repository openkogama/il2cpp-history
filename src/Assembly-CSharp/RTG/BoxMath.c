
/* Boolean BoxIntersectsBox(Vector3, Vector3, Quaternion, Vector3, Vector3, Quaternion) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_BoxIntersectsBox(Vector3 *center0,Vector3 *size0,Quaternion *rotation0,Vector3 *center1,Vector3 *size1,Quaternion *rotation1,MethodInfo *method)

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
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = fVar2 + fVar2;
  uVar8 = (pVVar6->rightVector).x;
  uVar9 = (pVVar6->rightVector).y;
  fVar10 = fVar3 + fVar3;
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar12 = fVar4 * (fVar1 + fVar1);
  fVar13 = (pVVar6->rightVector).z;
  if (pVVar5 == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar14 = (code *)swi(3);
    bVar15 = (*pcVar14)();
    return bVar15;
  }
  if ((int)pVVar5->max_length != 0) {
    bVar16 = cRam_? == '\0';
    fVar17 = rotation0->x;
    fVar18 = rotation0->y;
    fVar19 = rotation0->z;
    fVar20 = rotation0->w;
    pVVar5->vector[0].x = (1.0 - (fVar3 * fVar10 + fVar2 * fVar7)) * (float)uVar8 + (fVar1 * fVar7 - fVar4 * fVar10) * (float)uVar9 + (fVar4 * fVar7 + fVar1 * fVar10) * fVar13;
    pVVar5->vector[0].y = (1.0 - (fVar3 * fVar10 + fVar11)) * (float)uVar9 + (fVar4 * fVar10 + fVar1 * fVar7) * (float)uVar8 + (fVar2 * fVar10 - fVar12) * fVar13;
    pVVar5->vector[0].z = (fVar1 * fVar10 - fVar4 * fVar7) * (float)uVar8 + (fVar12 + fVar2 * fVar10) * (float)uVar9 + (1.0 - (fVar2 * fVar7 + fVar11)) * fVar13;
    pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
    if (bVar16) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = fVar18 + fVar18;
    uVar21 = (pVVar6->upVector).x;
    uVar22 = (pVVar6->upVector).y;
    fVar2 = fVar19 + fVar19;
    fVar13 = fVar17 * (fVar17 + fVar17);
    fVar4 = fVar20 * (fVar17 + fVar17);
    fVar1 = (pVVar6->upVector).z;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if (1 < (uint)pVVar5->max_length) {
      bVar16 = cRam_? == '\0';
      fVar10 = rotation0->x;
      fVar7 = rotation0->y;
      fVar12 = rotation0->z;
      fVar11 = rotation0->w;
      pVVar5->vector[1].x = (1.0 - (fVar19 * fVar2 + fVar18 * fVar3)) * (float)uVar21 + (fVar17 * fVar3 - fVar20 * fVar2) * (float)uVar22 + (fVar20 * fVar3 + fVar17 * fVar2) * fVar1;
      pVVar5->vector[1].y = (1.0 - (fVar19 * fVar2 + fVar13)) * (float)uVar22 + (fVar20 * fVar2 + fVar17 * fVar3) * (float)uVar21 + (fVar18 * fVar2 - fVar4) * fVar1;
      pVVar5->vector[1].z = (fVar17 * fVar2 - fVar20 * fVar3) * (float)uVar21 + (fVar4 + fVar18 * fVar2) * (float)uVar22 + (1.0 - (fVar18 * fVar3 + fVar13)) * fVar1;
      pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
      if (bVar16) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar3 = fVar7 + fVar7;
      uVar23 = (pVVar6->forwardVector).x;
      uVar24 = (pVVar6->forwardVector).y;
      fVar2 = fVar12 + fVar12;
      fVar13 = fVar10 * (fVar10 + fVar10);
      fVar4 = fVar11 * (fVar10 + fVar10);
      fVar1 = (pVVar6->forwardVector).z;
      if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
      if (2 < (uint)pVVar5->max_length) {
        bVar16 = cRam_? == '\0';
        pVVar5->vector[2].x = (1.0 - (fVar12 * fVar2 + fVar7 * fVar3)) * (float)uVar23 + (fVar10 * fVar3 - fVar11 * fVar2) * (float)uVar24 + (fVar11 * fVar3 + fVar10 * fVar2) * fVar1;
        pVVar5->vector[2].y = (1.0 - (fVar12 * fVar2 + fVar13)) * (float)uVar24 + (fVar11 * fVar2 + fVar10 * fVar3) * (float)uVar23 + (fVar7 * fVar2 - fVar4) * fVar1;
        pVVar5->vector[2].z = (fVar10 * fVar2 - fVar11 * fVar3) * (float)uVar23 + (fVar4 + fVar7 * fVar2) * (float)uVar24 + (1.0 - (fVar7 * fVar3 + fVar13)) * fVar1;
        fVar1 = rotation1->x;
        fVar2 = rotation1->y;
        fVar3 = rotation1->z;
        fVar4 = rotation1->w;
        pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
        if (bVar16) {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar7 = fVar2 + fVar2;
        fVar10 = fVar3 + fVar3;
        fVar12 = (fVar1 + fVar1) * fVar1;
        uVar25 = (pVVar6->rightVector).x;
        uVar26 = (pVVar6->rightVector).y;
        fVar11 = (fVar1 + fVar1) * fVar4;
        fVar13 = (pVVar6->rightVector).z;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar5->max_length != 0) {
          bVar16 = cRam_? == '\0';
          pVVar5->vector[0].x = (1.0 - (fVar10 * fVar3 + fVar2 * fVar7)) * (float)uVar25 + (fVar7 * fVar1 - fVar10 * fVar4) * (float)uVar26 + (fVar7 * fVar4 + fVar10 * fVar1) * fVar13;
          pVVar5->vector[0].y = (1.0 - (fVar10 * fVar3 + fVar12)) * (float)uVar26 + (fVar10 * fVar4 + fVar7 * fVar1) * (float)uVar25 + (fVar2 * fVar10 - fVar11) * fVar13;
          fVar3 = rotation1->x;
          fVar17 = rotation1->y;
          fVar18 = rotation1->z;
          fVar19 = rotation1->w;
          pVVar5->vector[0].z = (fVar10 * fVar1 - fVar7 * fVar4) * (float)uVar25 + (fVar11 + fVar2 * fVar10) * (float)uVar26 + (1.0 - (fVar2 * fVar7 + fVar12)) * fVar13;
          pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
          if (bVar16) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar4 = fVar17 + fVar17;
          fVar2 = fVar18 + fVar18;
          fVar13 = (fVar3 + fVar3) * fVar3;
          uVar27 = (pVVar6->upVector).x;
          uVar28 = (pVVar6->upVector).y;
          fVar10 = (fVar3 + fVar3) * fVar19;
          fVar1 = (pVVar6->upVector).z;
          if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar5->max_length) {
            bVar16 = cRam_? == '\0';
            pVVar5->vector[1].x = (1.0 - (fVar2 * fVar18 + fVar4 * fVar17)) * (float)uVar27 + (fVar4 * fVar3 - fVar2 * fVar19) * (float)uVar28 + (fVar4 * fVar19 + fVar2 * fVar3) * fVar1;
            pVVar5->vector[1].y = (1.0 - (fVar2 * fVar18 + fVar13)) * (float)uVar28 + (fVar2 * fVar19 + fVar4 * fVar3) * (float)uVar27 + (fVar2 * fVar17 - fVar10) * fVar1;
            fVar7 = rotation1->x;
            fVar12 = rotation1->y;
            fVar11 = rotation1->z;
            fVar18 = rotation1->w;
            pVVar5->vector[1].z = (fVar2 * fVar3 - fVar4 * fVar19) * (float)uVar27 + (fVar10 + fVar2 * fVar17) * (float)uVar28 + (1.0 - (fVar4 * fVar17 + fVar13)) * fVar1;
            pVVar5 = TypeInfo__RTG__BoxMath->static_fields->B;
            if (bVar16) {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar3 = fVar12 + fVar12;
            fVar2 = fVar11 + fVar11;
            fVar4 = (fVar7 + fVar7) * fVar7;
            uVar29 = (pVVar6->forwardVector).x;
            uVar30 = (pVVar6->forwardVector).y;
            fVar13 = (fVar7 + fVar7) * fVar18;
            fVar1 = (pVVar6->forwardVector).z;
            if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
            if (2 < (uint)pVVar5->max_length) {
              uVar31 = 0;
              pVVar5->vector[2].x = (1.0 - (fVar2 * fVar11 + fVar3 * fVar12)) * (float)uVar29 + (fVar3 * fVar7 - fVar2 * fVar18) * (float)uVar30 + (fVar3 * fVar18 + fVar2 * fVar7) * fVar1;
              pVVar5->vector[2].y = (1.0 - (fVar2 * fVar11 + fVar4)) * (float)uVar30 + (fVar2 * fVar18 + fVar3 * fVar7) * (float)uVar29 + (fVar2 * fVar12 - fVar13) * fVar1;
              pVVar5->vector[2].z = (fVar2 * fVar7 - fVar3 * fVar18) * (float)uVar29 + (fVar13 + fVar2 * fVar12) * (float)uVar30 + (1.0 - (fVar3 * fVar12 + fVar4)) * fVar1;
              uVar32 = uVar31;
              uVar33 = uVar31;
              uVar34 = uVar31;
              uVar35 = uVar31;
              do {
                do {
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pBVar36 = TypeInfo__RTG__BoxMath->static_fields;
                  pVVar5 = pBVar36->A;
                  if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                  uVar37 = (uint)uVar35;
                  if ((uint)pVVar5->max_length <= uVar37) goto code_?;
                  pVVar38 = pBVar36->B;
                  if (pVVar38 == (Vector3__Array *)0x0) goto code_?;
                  if ((uint)pVVar38->max_length <= (uint)uVar32) goto code_?;
                  uVar39 = *(undefined8 *)((longlong)&pVVar38->vector[0].x + uVar33);
                  uVar40 = *(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar34);
                  if (pBVar36->R == (Single__Array_1 *)0x0) goto code_?;
                  fStack_41 = (float)uVar39;
                  fStack_42 = (float)uVar40;
                  fStack_43 = (float)((ulonglong)uVar40 >> 0x20);
                  fStack_44 = (float)((ulonglong)uVar39 >> 0x20);
                  FUN_?(pBVar36->R,(longlong)(int)uVar37,uVar32,fStack_41 * fStack_42 + fStack_43 * fStack_44 + *(float *)((longlong)&pVVar5->vector[0].z + uVar34) * *(float *)((longlong)&pVVar38->vector[0].z + uVar33));
                  uVar45 = (uint)uVar32 + 1;
                  uVar32 = (ulonglong)uVar45;
                  uVar33 = uVar33 + 0xc;
                } while ((int)uVar45 < 3);
                uVar35 = (ulonglong)(uVar37 + 1);
                uVar34 = uVar34 + 0xc;
                uVar32 = uVar31;
                uVar33 = uVar31;
              } while ((int)(uVar37 + 1) < 3);
              uVar46 = size0->x;
              uVar47 = size0->y;
              fVar1 = (float)uVar46 * 0.5;
              fVar4 = (float)uVar47 * 0.5;
              fVar10 = size0->z * 0.5;
              uVar48 = size1->x;
              uVar49 = size1->y;
              fVar2 = (float)uVar48 * 0.5;
              fVar13 = size1->z * 0.5;
              fVar3 = (float)uVar49 * 0.5;
              do {
                iVar50 = (int)uVar32;
                uVar32 = uVar31;
                do {
                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                  pSVar52 = TypeInfo__RTG__BoxMath->static_fields->absR;
                  if (pSVar51 == (Single__Array_1 *)0x0) goto code_?;
                  fVar7 = (float)FUN_?(pSVar51,(longlong)iVar50,uVar32);
                  if (pSVar52 == (Single__Array_1 *)0x0) goto code_?;
                  FUN_?(pSVar52,(longlong)iVar50,uVar32,ABS(fVar7) + 0.0001);
                  uVar37 = (int)uVar32 + 1;
                  uVar32 = (ulonglong)uVar37;
                } while ((int)uVar37 < 3);
                uVar32 = (ulonglong)(iVar50 + 1U);
              } while ((int)(iVar50 + 1U) < 3);
              uVar53 = center1->x;
              uVar54 = center1->y;
              uVar55 = center0->x;
              uVar56 = center0->y;
              fVar11 = center1->z - center0->z;
              fVar12 = (float)uVar53 - (float)uVar55;
              fVar7 = (float)uVar54 - (float)uVar56;
              if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__RTG__BoxMath);
              }
              pVVar5 = TypeInfo__RTG__BoxMath->static_fields->A;
              if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar5->max_length != 0) {
                uVar57 = pVVar5->vector[0].x;
                uVar58 = pVVar5->vector[0].y;
                if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                if (1 < (uint)pVVar5->max_length) {
                  uVar59 = pVVar5->vector[1].x;
                  uVar60 = pVVar5->vector[1].y;
                  if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
                  if (2 < (uint)pVVar5->max_length) {
                    uVar61 = pVVar5->vector[2].x;
                    uVar62 = pVVar5->vector[2].y;
                    fVar18 = fVar7 * (float)uVar58 + fVar12 * (float)uVar57 + fVar11 * pVVar5->vector[0].z;
                    fVar17 = fVar7 * (float)uVar60 + fVar12 * (float)uVar59 + fVar11 * pVVar5->vector[1].z;
                    fVar7 = fVar7 * (float)uVar62 + fVar12 * (float)uVar61 + fVar11 * pVVar5->vector[2].z;
                    uVar32 = uVar31;
                    pBVar63 = TypeInfo__RTG__BoxMath;
                    do {
                      if (*(int *)&(pBVar63->_1).field_0x1c == 0) {
                        FUN_?(pBVar63);
                        pBVar63 = TypeInfo__RTG__BoxMath;
                      }
                      pSVar51 = pBVar63->static_fields->absR;
                      if (pSVar51 == (Single__Array_1 *)0x0) goto code_?;
                      uVar37 = (uint)uVar32;
                      if (((uint)pSVar51->bounds->length <= uVar37) || (iVar64 = pSVar51->bounds[1].length, (int)iVar64 == 0)) goto code_?;
                      pSVar52 = pBVar63->static_fields->absR;
                      iVar65 = pSVar52->bounds[1].length;
                      if ((uint)iVar65 < 2) goto code_?;
                      pSVar66 = pBVar63->static_fields->absR;
                      iVar67 = pSVar66->bounds[1].length;
                      if ((uint)iVar67 < 3) goto code_?;
                      fVar12 = fVar1;
                      fVar11 = fVar18;
                      if (((uVar37 != 0) && (fVar12 = fVar4, fVar11 = fVar17, uVar37 != 1)) && (fVar12 = fVar10, fVar11 = fVar7, uVar37 != 2)) {
                        uVar39 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar68 = (IndexOutOfRangeException *)func_?(uVar39);
                        pSVar69 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
                        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(pIVar68,pSVar69,(MethodInfo *)0x0);
                        uVar39 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
                        FUN_?(pIVar68,uVar39);
                        pcVar14 = (code *)swi(3);
                        bVar15 = (*pcVar14)();
                        return bVar15;
                      }
                      if (fVar12 + fVar3 * pSVar52->vector[iVar65 * uVar33 + 1] + fVar2 * pSVar51->vector[iVar64 * uVar33] + fVar13 * pSVar66->vector[iVar67 * uVar33 + 2] < ABS(fVar11)) {
                        return 0;
                      }
                      uVar32 = (ulonglong)(uVar37 + 1);
                      uVar33 = uVar33 + 1;
                    } while ((int)(uVar37 + 1) < 3);
                    lVar70 = 0x20;
                    uVar32 = uVar31;
                    do {
                      if (*(int *)&(pBVar63->_1).field_0x1c == 0) {
                        FUN_?(pBVar63);
                        pBVar63 = TypeInfo__RTG__BoxMath;
                      }
                      pSVar51 = pBVar63->static_fields->absR;
                      if (pSVar51 == (Single__Array_1 *)0x0) goto code_?;
                      if (((int)pSVar51->bounds->length == 0) || (uVar37 = (uint)uVar32, (uint)pSVar51->bounds[1].length <= uVar37)) goto code_?;
                      pSVar52 = pBVar63->static_fields->absR;
                      pIVar71 = pSVar52->bounds;
                      if (((uint)pIVar71->length < 2) || ((iVar64 = pIVar71[1].length, (uint)iVar64 <= uVar37 || (pSVar66 = pBVar63->static_fields->absR, (uint)pSVar66->bounds->length < 3)))) goto code_?;
                      pSVar72 = pBVar63->static_fields->R;
                      if (pSVar72 == (Single__Array_1 *)0x0) goto code_?;
                      if (((int)pSVar72->bounds->length == 0) || ((uint)pSVar72->bounds[1].length <= uVar37)) goto code_?;
                      pSVar73 = pBVar63->static_fields->R;
                      pIVar71 = pSVar73->bounds;
                      if (((uint)pIVar71->length < 2) || ((iVar65 = pIVar71[1].length, (uint)iVar65 <= uVar37 || (pSVar74 = pBVar63->static_fields->R, (uint)pSVar74->bounds->length < 3)))) goto code_?;
                      fVar12 = fVar2;
                      if ((uVar37 != 0) && ((fVar12 = fVar3, uVar37 != 1 && (fVar12 = fVar13, uVar37 != 2)))) {
                        uVar39 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                        pIVar68 = (IndexOutOfRangeException *)func_?(uVar39);
                        pSVar69 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
                        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(pIVar68,pSVar69,(MethodInfo *)0x0);
                        uVar39 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
                        FUN_?(pIVar68,uVar39);
                        pcVar14 = (code *)swi(3);
                        bVar15 = (*pcVar14)();
                        return bVar15;
                      }
                      if (fVar12 + fVar4 * pSVar52->vector[iVar64 + uVar31] + fVar1 * *(float *)((longlong)pSVar51->vector + lVar70 + -0x20) + fVar10 * pSVar66->vector[uVar31 + pSVar66->bounds[1].length * 2] < ABS(fVar17 * pSVar73->vector[iVar65 + uVar31] + fVar18 * *(float *)((longlong)pSVar72->vector + lVar70 + -0x20) + fVar7 * pSVar74->vector[uVar31 + pSVar74->bounds[1].length * 2])) {
                        return 0;
                      }
                      uVar32 = (ulonglong)(uVar37 + 1);
                      uVar31 = uVar31 + 1;
                      lVar70 = lVar70 + 4;
                    } while ((int)(uVar37 + 1) < 3);
                    if (*(int *)&(pBVar63->_1).field_0x1c == 0) {
                      FUN_?(pBVar63);
                      pBVar63 = TypeInfo__RTG__BoxMath;
                    }
                    pSVar51 = pBVar63->static_fields->absR;
                    if (pSVar51 == (Single__Array_1 *)0x0) goto code_?;
                    if ((2 < (uint)pSVar51->bounds->length) && (iVar64 = pSVar51->bounds[1].length, (int)iVar64 != 0)) {
                      pSVar52 = pBVar63->static_fields->absR;
                      pSVar66 = pBVar63->static_fields->absR;
                      if (2 < (uint)pSVar66->bounds[1].length) {
                        pSVar72 = pBVar63->static_fields->R;
                        if (pSVar72 == (Single__Array_1 *)0x0) goto code_?;
                        if ((1 < (uint)pSVar72->bounds->length) && (iVar65 = pSVar72->bounds[1].length, (int)iVar65 != 0)) {
                          pSVar73 = pBVar63->static_fields->R;
                          pIVar71 = pSVar73->bounds;
                          if (2 < (uint)pIVar71->length) {
                            if (fVar13 * pBVar63->static_fields->absR->vector[1] + pSVar66->vector[2] * fVar3 + fVar10 * pSVar52->vector[pSVar52->bounds[1].length] + pSVar51->vector[iVar64 * 2] * fVar4 < ABS(pSVar72->vector[iVar65] * fVar7 - fVar17 * pSVar73->vector[pIVar71[1].length * 2])) {
                              return 0;
                            }
                            if (*(int *)&(pBVar63->_1).field_0x1c == 0) {
                              FUN_?(pBVar63);
                              pBVar63 = TypeInfo__RTG__BoxMath;
                            }
                            pSVar51 = pBVar63->static_fields->absR;
                            if (pSVar51 == (Single__Array_1 *)0x0) goto code_?;
                            if ((2 < (uint)pSVar51->bounds->length) && (iVar64 = pSVar51->bounds[1].length, 1 < (uint)iVar64)) {
                              pSVar52 = pBVar63->static_fields->absR;
                              pSVar66 = pBVar63->static_fields->absR;
                              if (2 < (uint)pSVar66->bounds[1].length) {
                                pSVar72 = pBVar63->static_fields->R;
                                if (pSVar72 == (Single__Array_1 *)0x0) goto code_?;
                                if ((1 < (uint)pSVar72->bounds->length) && (iVar65 = pSVar72->bounds[1].length, 1 < (uint)iVar65)) {
                                  pSVar73 = pBVar63->static_fields->R;
                                  pIVar71 = pSVar73->bounds;
                                  if (2 < (uint)pIVar71->length) {
                                    if (fVar13 * pBVar63->static_fields->absR->vector[0] + pSVar66->vector[2] * fVar2 + fVar10 * pSVar52->vector[pSVar52->bounds[1].length + 1] + pSVar51->vector[iVar64 * 2 + 1] * fVar4 < ABS(pSVar72->vector[iVar65 + 1] * fVar7 - fVar17 * pSVar73->vector[pIVar71[1].length * 2 + 1])) {
                                      return 0;
                                    }
                                    if (*(int *)&(pBVar63->_1).field_0x1c == 0) {
                                      FUN_?(pBVar63);
                                      pBVar63 = TypeInfo__RTG__BoxMath;
                                    }
                                    pSVar51 = pBVar63->static_fields->absR;
                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                      fVar12 = (float)FUN_?(pSVar51,2,2);
                                      pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                      if (pSVar51 != (Single__Array_1 *)0x0) {
                                        fVar11 = (float)FUN_?(pSVar51,1,2);
                                        pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                        if (pSVar51 != (Single__Array_1 *)0x0) {
                                          if (((int)pSVar51->bounds->length == 0) || ((uint)pSVar51->bounds[1].length < 2)) goto code_?;
                                          fVar19 = pSVar51->vector[1];
                                          fVar20 = TypeInfo__RTG__BoxMath->static_fields->absR->vector[0];
                                          pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                          if (pSVar51 != (Single__Array_1 *)0x0) {
                                            fVar75 = (float)FUN_?(pSVar51,1,2);
                                            pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                            if (pSVar51 != (Single__Array_1 *)0x0) {
                                              fVar76 = (float)FUN_?(pSVar51,2,2);
                                              if (fVar3 * fVar20 + fVar19 * fVar2 + fVar11 * fVar10 + fVar12 * fVar4 < ABS(fVar75 * fVar7 - fVar76 * fVar17)) {
                                                return 0;
                                              }
                                              if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                FUN_?(TypeInfo__RTG__BoxMath);
                                              }
                                              pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                              if (pSVar51 != (Single__Array_1 *)0x0) {
                                                fVar12 = (float)FUN_?(pSVar51,2,0);
                                                pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                if (pSVar51 != (Single__Array_1 *)0x0) {
                                                  fVar11 = (float)FUN_?(pSVar51,0,0);
                                                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                  if (pSVar51 != (Single__Array_1 *)0x0) {
                                                    fVar19 = (float)FUN_?(pSVar51,1,2);
                                                    pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float)FUN_?(pSVar51,1,1);
                                                      pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                      if (pSVar51 != (Single__Array_1 *)0x0) {
                                                        fVar75 = (float)FUN_?(pSVar51,2,0);
                                                        pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                        if (pSVar51 != (Single__Array_1 *)0x0) {
                                                          fVar76 = (float)FUN_?(pSVar51,0,0);
                                                          if (fVar20 * fVar13 + fVar19 * fVar3 + fVar11 * fVar10 + fVar12 * fVar1 < ABS(fVar75 * fVar18 - fVar76 * fVar7)) {
                                                            return 0;
                                                          }
                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                          }
                                                          pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                          if (pSVar51 != (Single__Array_1 *)0x0) {
                                                            fVar12 = (float)FUN_?(pSVar51,2,1);
                                                            pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                            if (pSVar51 != (Single__Array_1 *)0x0) {
                                                              fVar11 = (float)FUN_?(pSVar51,0,1);
                                                              pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                              if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                fVar19 = (float)FUN_?(pSVar51,1,2);
                                                                pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                  fVar20 = (float)FUN_?(pSVar51,1,0);
                                                                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                  if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                    fVar75 = (float)FUN_?(pSVar51,2,1);
                                                                    pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                      fVar76 = (float)FUN_?(pSVar51,0,1);
                                                                      if (fVar20 * fVar13 + fVar19 * fVar2 + fVar11 * fVar10 + fVar12 * fVar1 < ABS(fVar75 * fVar18 - fVar76 * fVar7)) {
                                                                        return 0;
                                                                      }
                                                                      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                                        FUN_?(TypeInfo__RTG__BoxMath);
                                                                      }
                                                                      pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                      if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                        fVar12 = (float)FUN_?(pSVar51,2,2);
                                                                        pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                        if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                          fVar11 = (float)FUN_?(pSVar51,0,2);
                                                                          pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                          if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                            fVar19 = (float)FUN_?(pSVar51,1,1);
                                                                            pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                            if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                              fVar20 = (float)FUN_?(pSVar51,1,0);
                                                                              pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                              if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                fVar75 = (float)FUN_?(pSVar51,2,2);
                                                                                pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                  fVar76 = (float)FUN_?(pSVar51,0,2);
                                                                                  if (fVar20 * fVar3 + fVar19 * fVar2 + fVar11 * fVar10 + fVar12 * fVar1 < ABS(fVar75 * fVar18 - fVar76 * fVar7)) {
                                                                                    return 0;
                                                                                  }
                                                                                  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                                                    FUN_?(TypeInfo__RTG__BoxMath);
                                                                                  }
                                                                                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                  if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                    fVar10 = (float)FUN_?(pSVar51,1,0);
                                                                                    pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                      fVar7 = (float)FUN_?(pSVar51,0,0);
                                                                                      pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                      if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                        fVar12 = (float)FUN_?(pSVar51,2,2);
                                                                                        pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                        if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                          fVar11 = (float)FUN_?(pSVar51,2,1);
                                                                                          pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                          if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                            fVar19 = (float)FUN_?(pSVar51,0,0);
                                                                                            pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                            if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                              fVar20 = (float)FUN_?(pSVar51,1,0);
                                                                                              if (fVar11 * fVar13 + fVar12 * fVar3 + fVar7 * fVar4 + fVar10 * fVar1 < ABS(fVar19 * fVar17 - fVar20 * fVar18)) {
                                                                                                return 0;
                                                                                              }
                                                                                              if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                                                                FUN_?(TypeInfo__RTG__BoxMath);
                                                                                              }
                                                                                              pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                              if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                fVar10 = (float)FUN_?(pSVar51,1,1);
                                                                                                pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                  fVar7 = (float)FUN_?(pSVar51,0,1);
                                                                                                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                  if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                    fVar12 = (float)FUN_?(pSVar51,2,2);
                                                                                                    pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                      fVar11 = (float)FUN_?(pSVar51,2,0);
                                                                                                      pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                                      if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                        fVar19 = (float)FUN_?(pSVar51,0,1);
                                                                                                        pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                                        if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                          fVar20 = (float)FUN_?(pSVar51,1,1);
                                                                                                          if (fVar11 * fVar13 + fVar12 * fVar2 + fVar7 * fVar4 + fVar10 * fVar1 < ABS(fVar19 * fVar17 - fVar20 * fVar18)) {
                                                                                                            return 0;
                                                                                                          }
                                                                                                          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                                                                                                            FUN_?(TypeInfo__RTG__BoxMath);
                                                                                                          }
                                                                                                          pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                          if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                            fVar13 = (float)FUN_?(pSVar51,1,2);
                                                                                                            pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                            if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                              fVar10 = (float)FUN_?(pSVar51,0,2);
                                                                                                              pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                              if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                                fVar7 = (float)FUN_?(pSVar51,2,1);
                                                                                                                pSVar51 = TypeInfo__RTG__BoxMath->static_fields->absR;
                                                                                                                if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                                  fVar12 = (float)FUN_?(pSVar51,2,0);
                                                                                                                  pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                                                  if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                                    fVar11 = (float)FUN_?(pSVar51,0,2);
                                                                                                                    pSVar51 = TypeInfo__RTG__BoxMath->static_fields->R;
                                                                                                                    if (pSVar51 != (Single__Array_1 *)0x0) {
                                                                                                                      fVar19 = (float)FUN_?(pSVar51,1,2);
                                                                                                                      if (fVar12 * fVar3 + fVar7 * fVar2 + fVar10 * fVar4 + fVar13 * fVar1 < ABS(fVar17 * fVar11 - fVar19 * fVar18)) {
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
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* List`1[UnityEngine.Vector3] CalcBoxCornerPoints(Vector3, Vector3, Quaternion) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxCornerPoints(Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
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
  fVar3 = boxSize->z * 0.5;
  fVar4 = (float)uVar1 * 0.5;
  fVar5 = (float)uVar2 * 0.5;
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
  fVar18 = (1.0 - (fVar8 * fVar11 + fVar7 * fVar14)) * (float)uVar12 + (fVar6 * fVar14 - fVar9 * fVar11) * (float)uVar13 + (fVar9 * fVar14 + fVar6 * fVar11) * fVar17;
  fVar19 = (1.0 - (fVar8 * fVar11 + fVar15)) * (float)uVar13 + (fVar9 * fVar11 + fVar6 * fVar14) * (float)uVar12 + (fVar7 * fVar11 - fVar16) * fVar17;
  fVar17 = (fVar6 * fVar11 - fVar9 * fVar14) * (float)uVar12 + (fVar16 + fVar7 * fVar11) * (float)uVar13 + (1.0 - (fVar7 * fVar14 + fVar15)) * fVar17;
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
  fVar16 = (1.0 - (fVar8 * fVar14 + fVar7 * fVar15)) * (float)uVar20 + (fVar6 * fVar15 - fVar9 * fVar14) * (float)uVar21 + (fVar9 * fVar15 + fVar6 * fVar14) * fVar11;
  fVar24 = (1.0 - (fVar8 * fVar14 + fVar22)) * (float)uVar21 + (fVar9 * fVar14 + fVar6 * fVar15) * (float)uVar20 + (fVar7 * fVar14 - fVar23) * fVar11;
  fVar11 = (fVar6 * fVar14 - fVar9 * fVar15) * (float)uVar20 + (fVar23 + fVar7 * fVar14) * (float)uVar21 + (1.0 - (fVar7 * fVar15 + fVar22)) * fVar11;
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
  fVar23 = (1.0 - (fVar8 * fVar15 + fVar7 * fVar22)) * (float)uVar25 + (fVar6 * fVar22 - fVar9 * fVar15) * (float)uVar26 + (fVar9 * fVar22 + fVar6 * fVar15) * fVar14;
  fVar8 = (1.0 - (fVar8 * fVar15 + fVar27)) * (float)uVar26 + (fVar9 * fVar15 + fVar6 * fVar22) * (float)uVar25 + (fVar7 * fVar15 - fVar28) * fVar14;
  fVar9 = (fVar6 * fVar15 - fVar9 * fVar22) * (float)uVar25 + (fVar28 + fVar7 * fVar15) * (float)uVar26 + (1.0 - (fVar7 * fVar22 + fVar27)) * fVar14;
  uVar29 = boxCenter->x;
  uVar30 = boxCenter->y;
  fVar6 = (float)uVar29 - fVar3 * fVar23;
  fVar14 = (float)uVar30 - fVar3 * fVar8;
  fVar7 = boxCenter->z - fVar3 * fVar9;
  collection = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  if (collection != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    if (*(int *)&collection[1].monitor != 0) {
      collection[2].klass = (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44((fVar14 - fVar19 * fVar4) + fVar24 * fVar5,(fVar6 - fVar18 * fVar4) + fVar16 * fVar5);
      *(float *)&collection[2].monitor = (fVar7 - fVar17 * fVar4) + fVar11 * fVar5;
      if (1 < *(uint *)&collection[1].monitor) {
        *(ulonglong *)((longlong)&collection[2].monitor + 4) = CONCAT44(fVar19 * fVar4 + fVar14 + fVar24 * fVar5,fVar18 * fVar4 + fVar6 + fVar16 * fVar5);
        *(float *)((longlong)&collection[3].klass + 4) = fVar17 * fVar4 + fVar7 + fVar11 * fVar5;
        if (2 < *(uint *)&collection[1].monitor) {
          collection[3].monitor = (MonitorData *)CONCAT44((fVar19 * fVar4 + fVar14) - fVar24 * fVar5,(fVar18 * fVar4 + fVar6) - fVar16 * fVar5);
          *(float *)&collection[4].klass = (fVar17 * fVar4 + fVar7) - fVar11 * fVar5;
          if (3 < *(uint *)&collection[1].monitor) {
            *(ulonglong *)((longlong)&collection[4].klass + 4) = CONCAT44((fVar14 - fVar19 * fVar4) - fVar24 * fVar5,(fVar6 - fVar18 * fVar4) - fVar16 * fVar5);
            *(float *)((longlong)&collection[4].monitor + 4) = (fVar7 - fVar17 * fVar4) - fVar11 * fVar5;
            uVar31 = boxCenter->x;
            uVar32 = boxCenter->y;
            fVar6 = fVar23 * fVar3 + (float)uVar31;
            fVar7 = fVar8 * fVar3 + (float)uVar32;
            fVar8 = fVar9 * fVar3 + boxCenter->z;
            if (4 < *(uint *)&collection[1].monitor) {
              collection[5].klass = (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44(fVar19 * fVar4 + fVar7 + fVar24 * fVar5,fVar18 * fVar4 + fVar6 + fVar16 * fVar5);
              *(float *)&collection[5].monitor = fVar17 * fVar4 + fVar8 + fVar11 * fVar5;
              if (5 < *(uint *)&collection[1].monitor) {
                *(ulonglong *)((longlong)&collection[5].monitor + 4) = CONCAT44((fVar7 - fVar19 * fVar4) + fVar24 * fVar5,(fVar6 - fVar18 * fVar4) + fVar16 * fVar5);
                *(float *)((longlong)&collection[6].klass + 4) = (fVar8 - fVar17 * fVar4) + fVar11 * fVar5;
                if (6 < *(uint *)&collection[1].monitor) {
                  collection[6].monitor = (MonitorData *)CONCAT44((fVar7 - fVar19 * fVar4) - fVar24 * fVar5,(fVar6 - fVar18 * fVar4) - fVar16 * fVar5);
                  *(float *)&collection[7].klass = (fVar8 - fVar17 * fVar4) - fVar11 * fVar5;
                  if (7 < *(uint *)&collection[1].monitor) {
                    *(ulonglong *)((longlong)&collection[7].klass + 4) = CONCAT44((fVar19 * fVar4 + fVar7) - fVar24 * fVar5,(fVar18 * fVar4 + fVar6) - fVar16 * fVar5);
                    *(float *)((longlong)&collection[7].monitor + 4) = (fVar17 * fVar4 + fVar8) - fVar11 * fVar5;
                    pLVar33 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::List_1_UnityEngine_Vector3___ctor_1(pLVar33,collection,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_);
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

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceCenter(Vector3 *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  fVar3 = boxSize->z * 0.5;
  fVar4 = (float)uVar1 * 0.5;
  fVar5 = (float)uVar2 * 0.5;
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
  fVar18 = (1.0 - (fVar11 * fVar8 + fVar12 * fVar7)) * (float)uVar14 + (fVar12 * fVar6 - fVar11 * fVar9) * (float)uVar15 + (fVar12 * fVar9 + fVar11 * fVar6) * fVar16;
  fVar19 = (1.0 - (fVar11 * fVar8 + fVar13)) * (float)uVar15 + (fVar11 * fVar9 + fVar12 * fVar6) * (float)uVar14 + (fVar11 * fVar7 - fVar17) * fVar16;
  fVar16 = (fVar11 * fVar6 - fVar12 * fVar9) * (float)uVar14 + (fVar17 + fVar11 * fVar7) * (float)uVar15 + (1.0 - (fVar12 * fVar7 + fVar13)) * fVar16;
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
  fVar24 = (fVar6 + fVar6) * fVar6;
  fVar25 = (fVar6 + fVar6) * fVar9;
  fVar26 = (1.0 - (fVar22 * fVar8 + fVar23 * fVar7)) * (float)uVar20 + (fVar23 * fVar6 - fVar22 * fVar9) * (float)uVar21 + (fVar23 * fVar9 + fVar22 * fVar6) * fVar11;
  fVar12 = boxRotation->x;
  fVar13 = boxRotation->y;
  fVar17 = boxRotation->z;
  fVar27 = boxRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar28 = (pVVar10->forwardVector).x;
  uVar29 = (pVVar10->forwardVector).y;
  fVar30 = fVar17 + fVar17;
  fVar31 = (pVVar10->forwardVector).z;
  fVar32 = fVar13 + fVar13;
  fVar33 = (fVar12 + fVar12) * fVar12;
  fVar34 = (fVar12 + fVar12) * fVar27;
  fVar35 = (1.0 - (fVar30 * fVar17 + fVar32 * fVar13)) * (float)uVar28 + (fVar32 * fVar12 - fVar30 * fVar27) * (float)uVar29 + (fVar32 * fVar27 + fVar30 * fVar12) * fVar31;
  fVar17 = (1.0 - (fVar30 * fVar17 + fVar33)) * (float)uVar29 + (fVar30 * fVar27 + fVar32 * fVar12) * (float)uVar28 + (fVar30 * fVar13 - fVar34) * fVar31;
  fVar12 = (fVar30 * fVar12 - fVar32 * fVar27) * (float)uVar28 + (fVar34 + fVar30 * fVar13) * (float)uVar29 + (1.0 - (fVar32 * fVar13 + fVar33)) * fVar31;
  if (boxFace == BoxFace__Enum_Front) {
    uVar36 = boxCenter->x;
    fVar19 = fVar17 * fVar3;
    fVar7 = (float)uVar36 - fVar35 * fVar3;
    fVar6 = boxCenter->z - fVar12 * fVar3;
  }
  else {
    if (boxFace == BoxFace__Enum_Back) {
      uVar37 = boxCenter->x;
      uVar38 = boxCenter->y;
      fVar6 = boxCenter->z;
      __return_storage_ptr__->x = fVar35 * fVar3 + (float)uVar37;
      __return_storage_ptr__->y = fVar17 * fVar3 + (float)uVar38;
      __return_storage_ptr__->z = fVar12 * fVar3 + fVar6;
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
      fVar19 = ((1.0 - (fVar22 * fVar8 + fVar24)) * (float)uVar21 + (fVar22 * fVar9 + fVar23 * fVar6) * (float)uVar20 + (fVar22 * fVar7 - fVar25) * fVar11) * fVar5;
      fVar6 = ((fVar22 * fVar6 - fVar23 * fVar9) * (float)uVar20 + (fVar25 + fVar22 * fVar7) * (float)uVar21 + (1.0 - (fVar23 * fVar7 + fVar24)) * fVar11) * fVar5;
      if (boxFace != BoxFace__Enum_Bottom) {
        uVar41 = boxCenter->x;
        uVar42 = boxCenter->y;
        fVar7 = boxCenter->z;
        __return_storage_ptr__->x = fVar26 * fVar5 + (float)uVar41;
        __return_storage_ptr__->y = fVar19 + (float)uVar42;
        __return_storage_ptr__->z = fVar6 + fVar7;
        return __return_storage_ptr__;
      }
      uVar43 = boxCenter->x;
      fVar6 = boxCenter->z - fVar6;
      fVar7 = (float)uVar43 - fVar26 * fVar5;
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

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceNormal(Vector3 *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

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
  fVar13 = (1.0 - (fVar3 * fVar10 + fVar2 * fVar12)) * (float)uVar7 + (fVar1 * fVar12 - fVar4 * fVar10) * (float)uVar8 + (fVar4 * fVar12 + fVar1 * fVar10) * fVar9;
  fVar14 = (1.0 - (fVar3 * fVar10 + fVar6)) * (float)uVar8 + (fVar4 * fVar10 + fVar1 * fVar12) * (float)uVar7 + (fVar2 * fVar10 - fVar11) * fVar9;
  fVar9 = (fVar1 * fVar10 - fVar4 * fVar12) * (float)uVar7 + (fVar11 + fVar2 * fVar10) * (float)uVar8 + (1.0 - (fVar2 * fVar12 + fVar6)) * fVar9;
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
  fVar11 = (1.0 - (fVar3 * fVar12 + fVar2 * fVar6)) * (float)uVar15 + (fVar1 * fVar6 - fVar4 * fVar12) * (float)uVar16 + (fVar4 * fVar6 + fVar1 * fVar12) * fVar10;
  fVar19 = (1.0 - (fVar3 * fVar12 + fVar17)) * (float)uVar16 + (fVar4 * fVar12 + fVar1 * fVar6) * (float)uVar15 + (fVar2 * fVar12 - fVar18) * fVar10;
  fVar10 = (fVar1 * fVar12 - fVar4 * fVar6) * (float)uVar15 + (fVar18 + fVar2 * fVar12) * (float)uVar16 + (1.0 - (fVar2 * fVar6 + fVar17)) * fVar10;
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
  fVar18 = (1.0 - (fVar3 * fVar6 + fVar2 * fVar17)) * (float)uVar20 + (fVar1 * fVar17 - fVar4 * fVar6) * (float)uVar21 + (fVar4 * fVar17 + fVar1 * fVar6) * fVar12;
  fVar3 = (1.0 - (fVar3 * fVar6 + fVar22)) * (float)uVar21 + (fVar4 * fVar6 + fVar1 * fVar17) * (float)uVar20 + (fVar2 * fVar6 - fVar23) * fVar12;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar17) * (float)uVar20 + (fVar23 + fVar2 * fVar6) * (float)uVar21 + (1.0 - (fVar2 * fVar17 + fVar22)) * fVar12;
  if (boxFace == BoxFace__Enum_Front) {
    fVar1 = -fVar1;
    uVar24 = CONCAT44(fVar3,fVar18) ^ 0x8000000080000000;
    __return_storage_ptr__->x = (float)(int)uVar24;
    __return_storage_ptr__->y = (float)(int)(uVar24 >> 0x20);
  }
  else {
    if (boxFace != BoxFace__Enum_Back) {
      if (boxFace == BoxFace__Enum_Left) {
        uVar24 = CONCAT44(fVar14,fVar13) ^ 0x8000000080000000;
        __return_storage_ptr__->x = (float)(int)uVar24;
        __return_storage_ptr__->y = (float)(int)(uVar24 >> 0x20);
        __return_storage_ptr__->z = -fVar9;
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
      uVar24 = CONCAT44(fVar19,fVar11) ^ 0x8000000080000000;
      __return_storage_ptr__->x = (float)(int)uVar24;
      __return_storage_ptr__->y = (float)(int)(uVar24 >> 0x20);
      __return_storage_ptr__->z = -fVar10;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->x = fVar18;
    __return_storage_ptr__->y = fVar3;
  }
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Plane CalcBoxFacePlane(Vector3, Vector3, Quaternion, BoxFace) */

Plane * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFacePlane(Plane *__return_storage_ptr__,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  uStack_1._0_4_ = boxSize->x;
  uStack_1._4_4_ = boxSize->y;
  fVar2 = (float)uStack_1 * 0.5;
  fVar3 = uStack_1._4_4_ * 0.5;
  fVar4 = boxSize->z * 0.5;
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
  fVar21 = (1.0 - (fStack_6 * fVar9 + fVar17)) * (float)uVar11 + (fVar18 - fVar15) * (float)uVar12 + (fStack_7 * fVar13 + fVar14) * fVar20;
  fStack_22 = (1.0 - (fStack_6 * fVar9 + fVar10)) * (float)uVar12 + (fVar15 + fVar18) * (float)uVar11 + (fVar16 - fVar19) * fVar20;
  fStack_23 = (fVar14 - fStack_7 * fVar13) * (float)uVar11 + (fVar19 + fVar16) * (float)uVar12 + (1.0 - (fVar17 + fVar10)) * fVar20;
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
  fVar9 = (1.0 - (fVar13 * fStack_24 + fVar15 * uStack_1._4_4_)) * (float)uVar26 + (fVar15 * (float)uStack_1 - fVar13 * fStack_25) * (float)uVar27 + (fVar15 * fStack_25 + fVar13 * (float)uStack_1) * fVar20;
  fStack_28 = (1.0 - (fVar13 * fStack_24 + fVar18)) * (float)uVar27 + (fVar13 * fStack_25 + fVar15 * (float)uStack_1) * (float)uVar26 + (fVar13 * uStack_1._4_4_ - fVar19) * fVar20;
  fVar20 = (fVar13 * (float)uStack_1 - fVar15 * fStack_25) * (float)uVar26 + (fVar19 + fVar13 * uStack_1._4_4_) * (float)uVar27 + (1.0 - (fVar15 * uStack_1._4_4_ + fVar18)) * fVar20;
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
  fStack_32 = (1.0 - (fVar15 * fStack_24 + fVar18 * uStack_1._4_4_)) * (float)uVar29 + (fVar18 * (float)uStack_1 - fVar15 * fStack_25) * (float)uVar30 + (fVar18 * fStack_25 + fStack_31) * fVar13;
  fStack_33 = (1.0 - (fVar15 * fStack_24 + fVar19)) * (float)uVar30 + (fVar15 * fStack_25 + fVar18 * (float)uStack_1) * (float)uVar29 + (fVar15 * uStack_1._4_4_ - fVar17) * fVar13;
  fStack_6 = (fStack_31 - fVar18 * fStack_25) * (float)uVar29 + (fVar17 + fVar15 * uStack_1._4_4_) * (float)uVar30 + (1.0 - (fVar18 * uStack_1._4_4_ + fVar19)) * fVar13;
  if (boxFace == BoxFace__Enum_Front) {
    fVar15 = fStack_33 * fVar4;
    fVar13 = fStack_32 * fVar4;
    fVar3 = fStack_6 * fVar4;
    fVar2 = fStack_33;
    fVar21 = fStack_32;
code_?:
    fStack_6 = -fStack_6;
    uVar34 = boxCenter->x;
    uVar35 = boxCenter->y;
    fStack_24 = boxCenter->z - fVar3;
    uStack_5 = CONCAT44(fVar2,fVar21) ^ 0x8000000080000000;
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

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceSize(Vector3 *__return_storage_ptr__,Vector3 *boxSize,BoxFace__Enum boxFace,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxPtClosestToPt(Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,MethodInfo *method)

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
  if (lVar8 == 0) {
    FUN_?();
    pcVar19 = (code *)swi(3);
    pVVar20 = (Vector3 *)(*pcVar19)();
    return pVVar20;
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    bVar21 = cRam_? == '\0';
    fVar22 = boxRotation->x;
    fVar23 = boxRotation->y;
    fVar24 = boxRotation->z;
    fVar25 = boxRotation->w;
    *(ulonglong *)(lVar8 + 0x20) = CONCAT44((1.0 - (fVar11 * fVar14 + fVar16)) * aVStack_3[0].y + (fVar12 * fVar14 + fVar9 * fVar15) * aVStack_3[0].x + (fVar14 * fVar10 - fVar17) * fVar18,(1.0 - (fVar11 * fVar14 + fVar15 * fVar10)) * aVStack_3[0].x + (fVar9 * fVar15 - fVar12 * fVar14) * aVStack_3[0].y + (fVar12 * fVar15 + fVar9 * fVar14) * fVar18);
    *(float *)(lVar8 + 0x28) = (fVar9 * fVar14 - fVar12 * fVar15) * aVStack_3[0].x + (fVar17 + fVar14 * fVar10) * aVStack_3[0].y + (1.0 - (fVar15 * fVar10 + fVar16)) * fVar18;
    if (bVar21) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar10 = fVar24 + fVar24;
    aVStack_3[0].x = (pVVar13->upVector).x;
    aVStack_3[0].y = (pVVar13->upVector).y;
    fVar11 = fVar23 + fVar23;
    fVar18 = fVar22 * (fVar22 + fVar22);
    fVar12 = fVar25 * (fVar22 + fVar22);
    fVar9 = (pVVar13->upVector).z;
    if (1 < *(uint *)(lVar8 + 0x18)) {
      bVar21 = cRam_? == '\0';
      fVar14 = boxRotation->x;
      fVar15 = boxRotation->y;
      fVar17 = boxRotation->z;
      fVar16 = boxRotation->w;
      *(ulonglong *)(lVar8 + 0x2c) = CONCAT44((1.0 - (fVar24 * fVar10 + fVar18)) * aVStack_3[0].y + (fVar25 * fVar10 + fVar22 * fVar11) * aVStack_3[0].x + (fVar23 * fVar10 - fVar12) * fVar9,(1.0 - (fVar24 * fVar10 + fVar23 * fVar11)) * aVStack_3[0].x + (fVar22 * fVar11 - fVar25 * fVar10) * aVStack_3[0].y + (fVar25 * fVar11 + fVar22 * fVar10) * fVar9);
      *(float *)(lVar8 + 0x34) = (fVar22 * fVar10 - fVar25 * fVar11) * aVStack_3[0].x + (fVar12 + fVar23 * fVar10) * aVStack_3[0].y + (1.0 - (fVar23 * fVar11 + fVar18)) * fVar9;
      if (bVar21) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar10 = fVar17 + fVar17;
      aVStack_3[0].x = (pVVar13->forwardVector).x;
      aVStack_3[0].y = (pVVar13->forwardVector).y;
      fVar11 = fVar15 + fVar15;
      fVar18 = fVar14 * (fVar14 + fVar14);
      fVar12 = fVar16 * (fVar14 + fVar14);
      fVar9 = (pVVar13->forwardVector).z;
      if (2 < *(uint *)(lVar8 + 0x18)) {
        fVar22 = boxSize->z;
        *(ulonglong *)(lVar8 + 0x38) = CONCAT44((1.0 - (fVar17 * fVar10 + fVar18)) * aVStack_3[0].y + (fVar16 * fVar10 + fVar14 * fVar11) * aVStack_3[0].x + (fVar15 * fVar10 - fVar12) * fVar9,(1.0 - (fVar17 * fVar10 + fVar15 * fVar11)) * aVStack_3[0].x + (fVar14 * fVar11 - fVar16 * fVar10) * aVStack_3[0].y + (fVar16 * fVar11 + fVar14 * fVar10) * fVar9);
        uVar26 = boxSize->x;
        uVar27 = boxSize->y;
        *(float *)(lVar8 + 0x40) = (fVar14 * fVar10 - fVar16 * fVar11) * aVStack_3[0].x + (fVar12 + fVar15 * fVar10) * aVStack_3[0].y + (1.0 - (fVar15 * fVar11 + fVar18)) * fVar9;
        fVar22 = fVar22 * 0.5;
        fVar10 = boxCenter->y;
        puVar28 = (undefined8 *)(lVar8 + 0x20);
        fVar9 = boxCenter->z;
        index = 0;
        __return_storage_ptr__->x = boxCenter->x;
        __return_storage_ptr__->y = fVar10;
        __return_storage_ptr__->z = fVar9;
        aVStack_3[0].y = (float)uVar27 * 0.5;
        aVStack_3[0].x = (float)uVar26 * 0.5;
        aVStack_3[0].z = fVar22;
        while (index < *(uint *)(lVar8 + 0x18)) {
          fVar10 = (float)((ulonglong)*puVar28 >> 0x20) * fVar7 + (float)*puVar28 * fVar5 + *(float *)(puVar28 + 1) * (fVar4 - fVar6);
          fVar9 = (float)uVar26 * 0.5;
          if (((index != 0) && (fVar9 = (float)uVar27 * 0.5, index != 1)) && (fVar9 = fVar22, index != 2)) {
            uVar29 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this = (IndexOutOfRangeException *)func_?(uVar29);
            message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1(this,message,(MethodInfo *)0x0);
            uVar29 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(this,uVar29);
            pcVar19 = (code *)swi(3);
            pVVar20 = (Vector3 *)(*pcVar19)();
            return pVVar20;
          }
          if (fVar9 < fVar10) {
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(aVStack_3,index,method_00);
          }
          else {
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(aVStack_3,index,method_00);
            if (fVar10 < -fVar9) {
              fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item(aVStack_3,index,method_00);
              fVar10 = -fVar10;
            }
          }
          if (*(uint *)(lVar8 + 0x18) <= index) break;
          uVar30 = __return_storage_ptr__->x;
          uVar31 = __return_storage_ptr__->y;
          uVar29 = *puVar28;
          fVar9 = *(float *)((longlong)puVar28 + 4);
          fVar11 = *(float *)(puVar28 + 1);
          index = index + 1;
          puVar28 = (undefined8 *)((longlong)puVar28 + 0xc);
          __return_storage_ptr__->x = (float)uVar29 * fVar10 + (float)uVar30;
          __return_storage_ptr__->y = fVar9 * fVar10 + (float)uVar31;
          __return_storage_ptr__->z = fVar11 * fVar10 + __return_storage_ptr__->z;
          if (2 < (int)index) {
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  pVVar20 = (Vector3 *)(*pcVar19)();
  return pVVar20;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_ContainsPoint(Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxEpsilon *epsilon,MethodInfo *method)

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
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
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
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    bVar21 = (*pcVar19)();
    return bVar21;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_22,&uStack_32);
  fVar40 = point->z;
  uVar41 = point->x;
  uVar42 = point->y;
  fVar43 = 1.0 / (uStack_35._4_4_ * (float)uVar42 + uStack_33._4_4_ * (float)uVar41 + uStack_37._4_4_ * fVar40 + uStack_39._4_4_);
  fVar44 = ((float)uStack_35 * (float)uVar42 + (float)uStack_33 * (float)uVar41 + (float)uStack_37 * fVar40 + (float)uStack_39) * fVar43;
  point->x = ((float)uStack_34 * (float)uVar42 + (float)uStack_32 * (float)uVar41 + (float)uStack_36 * fVar40 + (float)uStack_38) * fVar43;
  point->y = (uStack_34._4_4_ * (float)uVar42 + uStack_32._4_4_ * (float)uVar41 + uStack_36._4_4_ * fVar40 + uStack_38._4_4_) * fVar43;
  point->z = fVar44;
  if ((((-0.5 <= point->x) && (point->x <= 0.5)) && (-0.5 <= point->y)) && ((point->y <= 0.5 && (-0.5 <= fVar44)))) {
    return fVar44 <= 0.5;
  }
  return 0;
}


/* BoxFaceAreaDesc GetBoxFaceAreaDesc(Vector3, BoxFace) */

BoxFaceAreaDesc Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetBoxFaceAreaDesc(Vector3 *boxSize,BoxFace__Enum boxFace,MethodInfo *method)

{
  if ((boxFace == BoxFace__Enum_Front) || (boxFace == BoxFace__Enum_Back)) {
    fVar1 = boxSize->y * boxSize->x;
    if (fVar1 < 1e-06) {
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
    if (fVar1 < 1e-06) {
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
    if (fVar1 < 1e-06) {
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

int32_t Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceAxisIndex(BoxFace__Enum face,MethodInfo *method)

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

BoxFaceDesc * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint(BoxFaceDesc *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__);
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
  (__return_storage_ptr__->Center).z = 0.0;
  uStack_1 = 0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar3 = BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar3 == (List_1_RTG_BoxFace_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    uStack_10 = (pLVar3->fields)._version;
    lStack_11 = (ulonglong)uStack_10 << 0x20;
    uStack_12 = 0;
    uStack_5._0_4_ = SUB84(pLVar3,0);
    uStack_5._4_4_ = (float)((ulonglong)pLVar3 >> 0x20);
    fStack_13 = (float)uStack_5;
    fStack_14 = uStack_5._4_4_;
    uStack_15 = 0;
    uStack_16 = 0;
    auStack_17._0_4_ = 0.0;
    auStack_17._4_4_ = 0.0;
    auStack_17._8_8_ = &fStack_13;
    fVar18 = 3.4028235e+38;
    boxFace_00 = BoxFace__Enum_Front;
    uStack_5 = pLVar3;
    while (lVar19 = CONCAT44(fStack_14,fStack_13), lVar19 != 0) {
      if ((uStack_10 != *(uint *)(lVar19 + 0x1c)) || (*(uint *)(lVar19 + 0x18) <= uStack_15)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__->klass->field_0x135 & 1) == 0) {
          FUN_?();
          lVar19 = CONCAT44(fStack_14,fStack_13);
        }
        if (lVar19 == 0) goto code_?;
        if (uStack_10 == *(uint *)(lVar19 + 0x1c)) {
          uStack_15 = *(int *)(lVar19 + 0x18) + 1;
          uStack_16 = uStack_16 & 0xffffffff00000000;
          (__return_storage_ptr__->Center).x = 0.0;
          (__return_storage_ptr__->Center).y = 0.0;
          (__return_storage_ptr__->Center).z = 0.0;
          __return_storage_ptr__->Face = boxFace_00;
          (__return_storage_ptr__->Plane).m_Normal.x = (float)uStack_1;
          (__return_storage_ptr__->Plane).m_Normal.y = uStack_1._4_4_;
          (__return_storage_ptr__->Plane).m_Normal.z = (float)uStack_2;
          (__return_storage_ptr__->Plane).m_Distance = uStack_2._4_4_;
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_17._0_4_ = boxRotation->x;
          auStack_17._4_4_ = boxRotation->y;
          auStack_17._8_4_ = boxRotation->z;
          auStack_17._12_4_ = boxRotation->w;
          VStack_20.x = boxSize->x;
          VStack_20.y = boxSize->y;
          VStack_20.z = boxSize->z;
          VStack_21.x = boxCenter->x;
          VStack_21.y = boxCenter->y;
          VStack_21.z = boxCenter->z;
          pVVar22 = BoxMath_CalcBoxFaceCenter((Vector3 *)aQStack_23,&VStack_21,&VStack_20,(Quaternion *)auStack_17,boxFace_00,(MethodInfo *)0x0);
          fVar18 = pVVar22->y;
          (__return_storage_ptr__->Center).x = pVVar22->x;
          (__return_storage_ptr__->Center).y = fVar18;
          (__return_storage_ptr__->Center).z = pVVar22->z;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      lVar19 = *(longlong *)(lVar19 + 0x10);
      if (lVar19 == 0) goto code_?;
      if (*(uint *)(lVar19 + 0x18) <= uStack_15) goto code_?;
      boxFace = *(BoxFace__Enum *)(lVar19 + 0x20 + (longlong)(int)uStack_15 * 4);
      uStack_16 = CONCAT44(uStack_16._4_4_,boxFace);
      uStack_15 = uStack_15 + 1;
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
      pPVar24 = BoxMath_CalcBoxFacePlane((Plane *)&uStack_5,&VStack_20,&VStack_21,aQStack_23,boxFace,(MethodInfo *)0x0);
      uVar25._0_4_ = (pPVar24->m_Normal).x;
      uVar25._4_4_ = (pPVar24->m_Normal).y;
      pfVar26 = &(pPVar24->m_Normal).z;
      aQStack_23[0].x = point->x;
      aQStack_23[0].y = point->y;
      fVar27 = ABS(aQStack_23[0].y * (pPVar24->m_Normal).y + aQStack_23[0].x * (pPVar24->m_Normal).x + point->z * *pfVar26 + pPVar24->m_Distance);
      if (fVar27 < fVar18) {
        fVar18 = fVar27;
        boxFace_00 = boxFace;
        uStack_1 = uVar25;
        uStack_2 = *(undefined8 *)pfVar26;
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

BoxFaceDesc * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint_1(BoxFaceDesc *__return_storage_ptr__,Vector3 *point,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,Vector3 *viewVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__);
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
  (__return_storage_ptr__->Center).z = 0.0;
  uStack_1 = 0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar3 = BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar3 == (List_1_RTG_BoxFace_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    uStack_10 = (pLVar3->fields)._version;
    lStack_11 = (ulonglong)uStack_10 << 0x20;
    uStack_12 = 0;
    uStack_5._0_4_ = SUB84(pLVar3,0);
    uStack_5._4_4_ = (float)((ulonglong)pLVar3 >> 0x20);
    fStack_13 = (float)uStack_5;
    fStack_14 = uStack_5._4_4_;
    uStack_15 = 0;
    uStack_16 = 0;
    auStack_17._0_4_ = 0.0;
    auStack_17._4_4_ = 0.0;
    auStack_17._8_8_ = &fStack_13;
    fVar18 = 3.4028235e+38;
    boxFace_00 = BoxFace__Enum_Front;
    uStack_5 = pLVar3;
    while (lVar19 = CONCAT44(fStack_14,fStack_13), lVar19 != 0) {
      if ((uStack_10 != *(uint *)(lVar19 + 0x1c)) || (*(uint *)(lVar19 + 0x18) <= uStack_15)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__->klass->field_0x135 & 1) == 0) {
          FUN_?();
          lVar19 = CONCAT44(fStack_14,fStack_13);
        }
        if (lVar19 == 0) goto code_?;
        if (uStack_10 == *(uint *)(lVar19 + 0x1c)) {
          uStack_15 = *(int *)(lVar19 + 0x18) + 1;
          uStack_16 = uStack_16 & 0xffffffff00000000;
          (__return_storage_ptr__->Center).x = 0.0;
          (__return_storage_ptr__->Center).y = 0.0;
          (__return_storage_ptr__->Center).z = 0.0;
          __return_storage_ptr__->Face = boxFace_00;
          (__return_storage_ptr__->Plane).m_Normal.x = (float)uStack_1;
          (__return_storage_ptr__->Plane).m_Normal.y = uStack_1._4_4_;
          (__return_storage_ptr__->Plane).m_Normal.z = (float)uStack_2;
          (__return_storage_ptr__->Plane).m_Distance = uStack_2._4_4_;
          if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_17._0_4_ = boxRotation->x;
          auStack_17._4_4_ = boxRotation->y;
          auStack_17._8_4_ = boxRotation->z;
          auStack_17._12_4_ = boxRotation->w;
          VStack_20.x = boxSize->x;
          VStack_20.y = boxSize->y;
          VStack_20.z = boxSize->z;
          VStack_21.x = boxCenter->x;
          VStack_21.y = boxCenter->y;
          VStack_21.z = boxCenter->z;
          pVVar22 = BoxMath_CalcBoxFaceCenter((Vector3 *)aQStack_23,&VStack_21,&VStack_20,(Quaternion *)auStack_17,boxFace_00,(MethodInfo *)0x0);
          fVar18 = pVVar22->y;
          (__return_storage_ptr__->Center).x = pVVar22->x;
          (__return_storage_ptr__->Center).y = fVar18;
          (__return_storage_ptr__->Center).z = pVVar22->z;
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      lVar19 = *(longlong *)(lVar19 + 0x10);
      if (lVar19 == 0) goto code_?;
      if (*(uint *)(lVar19 + 0x18) <= uStack_15) goto code_?;
      boxFace = *(BoxFace__Enum *)(lVar19 + 0x20 + (longlong)(int)uStack_15 * 4);
      uStack_16 = CONCAT44(uStack_16._4_4_,boxFace);
      uStack_15 = uStack_15 + 1;
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
      pPVar24 = BoxMath_CalcBoxFacePlane((Plane *)&uStack_5,&VStack_20,&VStack_21,aQStack_23,boxFace,(MethodInfo *)0x0);
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
        fVar25 = ABS(aQStack_23[0].y * fVar26 + aQStack_23[0].x * fVar25 + point->z * fVar29 + pPVar24->m_Distance);
        if (fVar25 < fVar18) {
          fVar18 = fVar25;
          boxFace_00 = boxFace;
          uStack_1 = uVar27;
          uStack_2 = *(undefined8 *)pfVar28;
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

BoxFace__Enum Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetMostAlignedFace(Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,Vector3 *direction,MethodInfo *method)

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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
        pVVar8 = BoxMath_CalcBoxFaceNormal(&VStack_9,&VStack_7,&VStack_6,aQStack_5,pBVar4->vector[0],(MethodInfo *)0x0);
        VStack_7.x = direction->x;
        VStack_7.y = direction->y;
        uVar10 = pVVar8->x;
        uVar11 = pVVar8->y;
        lVar12 = 0x24;
        fVar13 = (float)uVar11 * VStack_7.y + (float)uVar10 * VStack_7.x + pVVar8->z * direction->z;
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
          pVVar8 = BoxMath_CalcBoxFaceNormal(&VStack_9,&VStack_6,&VStack_7,aQStack_5,BVar3,(MethodInfo *)0x0);
          aQStack_5[0].x = direction->x;
          aQStack_5[0].y = direction->y;
          uVar16 = pVVar8->x;
          uVar17 = pVVar8->y;
          fVar18 = (float)uVar17 * aQStack_5[0].y + (float)uVar16 * aQStack_5[0].x + pVVar8->z * direction->z;
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

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast(Ray *ray,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxEpsilon *epsilon,MethodInfo *method)

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
  bVar6 = BoxMath_Raycast_1(&RStack_3,afStackX_8,&VStack_5,&VStack_1,&QStack_4,(BoxEpsilon *)&VStack_2,(MethodInfo *)0x0);
  return bVar6;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast_1(Ray *ray,float *t,Vector3 *boxCenter,Vector3 *boxSize,Quaternion *boxRotation,BoxEpsilon *epsilon,MethodInfo *method)

{
  QStack_1.x = boxSize->x;
  QStack_1.y = boxSize->y;
  *t = 0.0;
  uVar2 = (epsilon->_sizeEps).x;
  uVar3 = (epsilon->_sizeEps).y;
  QStack_4.x = (float)uVar2 + QStack_1.x;
  QStack_4.z = (epsilon->_sizeEps).z + boxSize->z;
  QStack_4.y = (float)uVar3 + QStack_1.y;
  boxSize->x = QStack_4.x;
  boxSize->y = (float)uVar3 + QStack_1.y;
  boxSize->z = QStack_4.z;
  bVar5 = boxSize->x <= 1e-06 && boxSize->x != 1e-06;
  bVar6 = bVar5 + 1;
  if (1e-06 < boxSize->y || boxSize->y == 1e-06) {
    bVar6 = bVar5;
  }
  bVar7 = bVar6 + 1;
  if (1e-06 <= QStack_4.z) {
    bVar7 = bVar6;
  }
  if (1 < bVar7) {
    return 0;
  }
  if (bVar7 != 1) {
    QStack_8.x = boxCenter->x;
    QStack_8.y = boxCenter->y;
    QStack_1.x = boxRotation->x;
    QStack_1.y = boxRotation->y;
    QStack_1.z = boxRotation->z;
    QStack_1.w = boxRotation->w;
    QStack_8.z = boxCenter->z;
    MStack_9.m00 = 0.0;
    MStack_9.m10 = 0.0;
    MStack_9.m20 = 0.0;
    MStack_9.m30 = 0.0;
    MStack_9.m01 = 0.0;
    MStack_9.m11 = 0.0;
    MStack_9.m21 = 0.0;
    MStack_9.m31 = 0.0;
    MStack_9.m02 = 0.0;
    MStack_9.m12 = 0.0;
    MStack_9.m22 = 0.0;
    MStack_9.m32 = 0.0;
    MStack_9.m03 = 0.0;
    MStack_9.m13 = 0.0;
    MStack_9.m23 = 0.0;
    MStack_9.m33 = 0.0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&QStack_8,&QStack_1,&QStack_4);
    MStack_13.m00 = MStack_9.m00;
    MStack_13.m10 = MStack_9.m10;
    MStack_13.m20 = MStack_9.m20;
    MStack_13.m30 = MStack_9.m30;
    MStack_13.m01 = MStack_9.m01;
    MStack_13.m11 = MStack_9.m11;
    MStack_13.m21 = MStack_9.m21;
    MStack_13.m31 = MStack_9.m31;
    MStack_13.m02 = MStack_9.m02;
    MStack_13.m12 = MStack_9.m12;
    MStack_13.m22 = MStack_9.m22;
    MStack_13.m32 = MStack_9.m32;
    aMStack_14[0].m01 = MStack_9.m01;
    aMStack_14[0].m11 = MStack_9.m11;
    aMStack_14[0].m21 = MStack_9.m21;
    aMStack_14[0].m31 = MStack_9.m31;
    MStack_13.m03 = MStack_9.m03;
    MStack_13.m13 = MStack_9.m13;
    MStack_13.m23 = MStack_9.m23;
    MStack_13.m33 = MStack_9.m33;
    aMStack_14[0].m00 = MStack_9.m00;
    aMStack_14[0].m10 = MStack_9.m10;
    aMStack_14[0].m20 = MStack_9.m20;
    aMStack_14[0].m30 = MStack_9.m30;
    aMStack_14[0].m02 = MStack_9.m02;
    aMStack_14[0].m12 = MStack_9.m12;
    aMStack_14[0].m22 = MStack_9.m22;
    aMStack_14[0].m32 = MStack_9.m32;
    RStack_15.m_Origin.x = (ray->m_Origin).x;
    RStack_15.m_Origin.y = (ray->m_Origin).y;
    RStack_15._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aMStack_14[0].m03 = MStack_9.m03;
    aMStack_14[0].m13 = MStack_9.m13;
    aMStack_14[0].m23 = MStack_9.m23;
    aMStack_14[0].m33 = MStack_9.m33;
    RStack_15.m_Direction.y = (ray->m_Direction).y;
    RStack_15.m_Direction.z = (ray->m_Direction).z;
    pRVar16 = RayEx::RayEx_InverseTransform(&RStack_17,&RStack_15,aMStack_14,(MethodInfo *)0x0);
    fVar18 = (pRVar16->m_Origin).x;
    fVar19 = (pRVar16->m_Origin).y;
    uVar20._0_4_ = (pRVar16->m_Origin).x;
    uVar20._4_4_ = (pRVar16->m_Origin).y;
    pfVar21 = &(pRVar16->m_Origin).z;
    fVar22 = *pfVar21;
    fVar23 = (pRVar16->m_Direction).x;
    uVar24 = *(undefined8 *)pfVar21;
    uVar11._0_4_ = (pRVar16->m_Direction).y;
    uVar11._4_4_ = (pRVar16->m_Direction).z;
    if ((float)(undefined4)uVar11 * (float)(undefined4)uVar11 + fVar23 * fVar23 + (float)uVar11._4_4_ * (float)uVar11._4_4_ == 0.0) {
      return 0;
    }
    uStack_25 = uVar11;
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
    RStack_15.m_Direction.y = (float)uVar30 * 0.5;
    RStack_15.m_Direction.z = (pVVar26->oneVector).z * 0.5;
    RStack_15.m_Direction.x = (float)uVar29 * 0.5;
    RStack_15.m_Origin.z = fVar28;
    pcVar10 = pcRam_?;
    QStack_1._0_8_ = uVar20;
    QStack_1._8_8_ = uVar24;
    uStack_31 = uVar11;
    RStack_15.m_Origin._0_8_ = uVar27;
    if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    cVar32 = (*pcRam_?)(&QStack_1,&RStack_15,t);
    if (cVar32 == '\0') {
      return 0;
    }
    fVar28 = *t;
    fVar18 = fVar28 * fVar23 + fVar18;
    fVar22 = fVar28 * uStack_25._4_4_ + fVar22;
    fVar19 = fVar28 * (float)(undefined4)uVar11 + fVar19;
    fVar23 = 1.0 / (MStack_9.m31 * fVar19 + MStack_9.m30 * fVar18 + MStack_9.m32 * fVar22 + MStack_9.m33);
    uVar33 = (ray->m_Origin).x;
    uVar34 = (ray->m_Origin).y;
    QStack_4.y = (MStack_9.m11 * fVar19 + MStack_9.m10 * fVar18 + MStack_9.m12 * fVar22 + MStack_9.m13) * fVar23 - (float)uVar34;
    QStack_4.x = (MStack_9.m01 * fVar19 + MStack_9.m00 * fVar18 + MStack_9.m02 * fVar22 + MStack_9.m03) * fVar23 - (float)uVar33;
    QStack_4.z = (MStack_9.m21 * fVar19 + MStack_9.m20 * fVar18 + MStack_9.m22 * fVar22 + MStack_9.m23) * fVar23 - (ray->m_Origin).z;
    fVar18 = (float)FUN_?(&QStack_4);
    *t = fVar18;
    return 1;
  }
  if (boxSize->x <= 1e-06 && boxSize->x != 1e-06) {
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
    RStack_15.m_Origin.x = boxRotation->x;
    RStack_15.m_Origin.y = boxRotation->y;
    RStack_15.m_Origin.z = boxRotation->z;
    RStack_15.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->forwardVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_8,(Quaternion *)&RStack_15,(Vector3 *)&QStack_1,(MethodInfo *)0x0);
    uVar37 = pVVar36->x;
    uVar38 = pVVar36->y;
    fVar18 = pVVar36->z;
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
    RStack_15.m_Origin.x = boxRotation->x;
    RStack_15.m_Origin.y = boxRotation->y;
    RStack_15.m_Origin.z = boxRotation->z;
    RStack_15.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->upVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_8,(Quaternion *)&RStack_15,(Vector3 *)&QStack_1,(MethodInfo *)0x0);
    fVar19 = boxSize->z;
    QStack_1.x = pVVar36->x;
    QStack_1.y = pVVar36->y;
    QStack_4.x = boxCenter->x;
    QStack_4.y = boxCenter->y;
    RStack_17.m_Origin.x = (ray->m_Origin).x;
    RStack_17.m_Origin.y = (ray->m_Origin).y;
    RStack_17._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    fVar22 = boxSize->y;
    fVar23 = (float)uVar37;
    fVar28 = (float)uVar38;
  }
  else {
    if (1e-06 < boxSize->y || boxSize->y == 1e-06) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar35 = TypeInfo__UnityEngine__Vector3;
      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_8.x = (pVVar26->rightVector).x;
      QStack_8.y = (pVVar26->rightVector).y;
      QStack_8.z = (pVVar26->rightVector).z;
      QStack_4.x = boxRotation->x;
      QStack_4.y = boxRotation->y;
      QStack_4.z = boxRotation->z;
      QStack_4.w = boxRotation->w;
      pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_1,&QStack_4,(Vector3 *)&QStack_8,(MethodInfo *)0x0);
      uVar24._0_4_ = pVVar36->x;
      uVar24._4_4_ = pVVar36->y;
      fVar18 = pVVar36->z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        pVVar35 = TypeInfo__UnityEngine__Vector3;
      }
      pVVar26 = pVVar35->static_fields;
      QStack_8.x = (pVVar26->upVector).x;
      QStack_8.y = (pVVar26->upVector).y;
      QStack_8.z = (pVVar26->upVector).z;
      QStack_4.x = boxRotation->x;
      QStack_4.y = boxRotation->y;
      QStack_4.z = boxRotation->z;
      QStack_4.w = boxRotation->w;
      pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_1,&QStack_4,(Vector3 *)&QStack_8,(MethodInfo *)0x0);
      fVar19 = boxSize->x;
      quadCenter = &QStack_1;
      QStack_8.x = pVVar36->x;
      QStack_8.y = pVVar36->y;
      QStack_1.x = boxCenter->x;
      QStack_1.y = boxCenter->y;
      QStack_1.z = boxCenter->z;
      quadUp = &QStack_8;
      RStack_17.m_Origin.x = (ray->m_Origin).x;
      RStack_17.m_Origin.y = (ray->m_Origin).y;
      RStack_17._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      quadRight = &QStack_4;
      fVar22 = boxSize->y;
      QStack_4.z = fVar18;
      QStack_4._0_8_ = uVar24;
      QStack_8.z = pVVar36->z;
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
    RStack_15.m_Origin.x = boxRotation->x;
    RStack_15.m_Origin.y = boxRotation->y;
    RStack_15.m_Origin.z = boxRotation->z;
    RStack_15.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->rightVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_8,(Quaternion *)&RStack_15,(Vector3 *)&QStack_1,(MethodInfo *)0x0);
    fVar23 = pVVar36->x;
    fVar28 = pVVar36->y;
    fVar18 = pVVar36->z;
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
    RStack_15.m_Origin.x = boxRotation->x;
    RStack_15.m_Origin.y = boxRotation->y;
    RStack_15.m_Origin.z = boxRotation->z;
    RStack_15.m_Direction.x = boxRotation->w;
    QStack_1.z = (pVVar26->forwardVector).z;
    pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1((Vector3 *)&QStack_8,(Quaternion *)&RStack_15,(Vector3 *)&QStack_1,(MethodInfo *)0x0);
    fVar19 = boxSize->x;
    QStack_1.x = pVVar36->x;
    QStack_1.y = pVVar36->y;
    QStack_4.x = boxCenter->x;
    QStack_4.y = boxCenter->y;
    RStack_17.m_Origin.x = (ray->m_Origin).x;
    RStack_17.m_Origin.y = (ray->m_Origin).y;
    RStack_17._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    fVar22 = boxSize->z;
  }
  quadCenter = &QStack_4;
  QStack_1.z = pVVar36->z;
  QStack_4.z = boxCenter->z;
  quadUp = &QStack_1;
  quadRight = &QStack_8;
  QStack_8.y = fVar28;
  QStack_8.x = fVar23;
  QStack_8.z = fVar18;
code_?:
  RStack_15.m_Origin.z = 0.0;
  RStack_15.m_Direction.x = 0.0;
  RStack_15.m_Origin.x = 0.0;
  RStack_15.m_Origin.y = 0.0;
  RStack_17.m_Direction.y = (ray->m_Direction).y;
  RStack_17.m_Direction.z = (ray->m_Direction).z;
  bVar12 = QuadMath::QuadMath_Raycast(&RStack_17,t,(Vector3 *)quadCenter,fVar19,fVar22,(Vector3 *)quadRight,(Vector3 *)quadUp,(QuadEpsilon *)&RStack_15,(MethodInfo *)0x0);
  return bVar12;
}


/* Void TransformBox(Vector3, Vector3, Matrix4x4, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::RTG::BoxMath::BoxMath_TransformBox(Vector3 *boxCenter,Vector3 *boxSize,Matrix4x4 *transformMatrix,Vector3 *newBoxCenter,Vector3 *newBoxSize,MethodInfo *method)

{
  uVar1 = boxSize->x;
  uVar2 = boxSize->y;
  fVar3 = (float)uVar2 * 0.5;
  fVar4 = (float)uVar1 * 0.5;
  fVar5 = boxSize->z * 0.5;
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
  fVar17 = 1.0 / ((float)uVar8 * transformMatrix->m31 + (float)uVar7 * transformMatrix->m30 + fVar6 * transformMatrix->m32 + transformMatrix->m33);
  fVar18 = transformMatrix->m01;
  fVar19 = transformMatrix->m11;
  fVar20 = transformMatrix->m02;
  fVar21 = transformMatrix->m21;
  newBoxCenter->x = fVar17 * ((float)uVar8 * transformMatrix->m01 + (float)uVar7 * transformMatrix->m00 + fVar6 * transformMatrix->m02 + transformMatrix->m03);
  newBoxCenter->y = fVar17 * ((float)uVar8 * fVar9 + (float)uVar7 * fVar11 + fVar6 * fVar12 + fVar15);
  fVar9 = transformMatrix->m00;
  newBoxCenter->z = fVar17 * ((float)uVar8 * fVar10 + (float)uVar7 * fVar13 + fVar6 * fVar14 + fVar16);
  fVar9 = ABS(fVar3 * fVar18) + ABS(fVar4 * fVar9) + ABS(fVar5 * fVar20);
  fVar6 = ABS(fVar3 * fVar19) + ABS(fVar4 * transformMatrix->m10) + ABS(fVar5 * transformMatrix->m12);
  fVar10 = ABS(fVar3 * fVar21) + ABS(fVar4 * transformMatrix->m20) + ABS(fVar5 * transformMatrix->m22);
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
  pLVar1 = (List_1_RTG_BoxFace_ *)FUN_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List__);
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
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(pLVar12,0,pMVar11->klass->rgctx_data[0xe].method);
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
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(pLVar12,1,pMVar11->klass->rgctx_data[0xe].method);
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
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(pLVar12,2,pMVar11->klass->rgctx_data[0xe].method);
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
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(pLVar12,3,pMVar11->klass->rgctx_data[0xe].method);
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
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::List_1_System_UInt32Enum__AddWithResize(pLVar12,4,pMVar11->klass->rgctx_data[0xe].method);
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
          FUN_?(pLVar1,uVar2 + 1,(pMVar11->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_);
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
  this = (List_1_System_Int32Enum_ *)FUN_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::List_1_System_Int32Enum___ctor_1(this,(IEnumerable_1_System_Int32Enum_ *)collection,MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_);
  return (List_1_RTG_BoxFace_ *)this;
}

