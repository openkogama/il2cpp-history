
/* Matrix4x4 GetInverse(Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetInverse
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 *mtx,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = mtx->m01;
  uVar3 = mtx->m02;
  fVar4 = (((((mtx->m33 * mtx->m22 - mtx->m32 * mtx->m23) * mtx->m11 -
              (mtx->m33 * mtx->m21 - mtx->m31 * mtx->m23) * mtx->m12) +
             (mtx->m32 * mtx->m21 - mtx->m31 * mtx->m22) * mtx->m13) * mtx->m00 -
            (((mtx->m33 * mtx->m22 - mtx->m32 * mtx->m23) * mtx->m10 -
             (mtx->m33 * mtx->m20 - mtx->m30 * mtx->m23) * mtx->m12) +
            (mtx->m32 * mtx->m20 - mtx->m30 * mtx->m22) * mtx->m13) * (float)uVar2) +
           ((((mtx->m33 * mtx->m21 - mtx->m23) - mtx->m31) * mtx->m10 -
            (mtx->m33 * mtx->m20 - mtx->m30 * mtx->m23) * mtx->m11) +
           (mtx->m31 * mtx->m20 - mtx->m30 * mtx->m21) * mtx->m13) * (float)uVar3) -
           (((mtx->m32 * mtx->m21 - mtx->m31 * mtx->m22) * mtx->m10 -
            (mtx->m32 * mtx->m20 - mtx->m30 * mtx->m22) * mtx->m11) +
           (mtx->m31 * mtx->m20 - mtx->m30 * mtx->m21) * mtx->m12) * mtx->m03;
  uVar5 = mtx->m00;
  uVar6 = mtx->m10;
  uVar7 = mtx->m20;
  uVar8 = mtx->m30;
  if ((float)((uint)fVar4 & _UNK_?) < _UNK_?) {
    fVar4 = mtx->m01;
    fVar9 = mtx->m11;
    fVar10 = mtx->m21;
    fVar11 = mtx->m31;
    __return_storage_ptr__->m00 = (float)uVar5;
    __return_storage_ptr__->m10 = (float)uVar6;
    __return_storage_ptr__->m20 = (float)uVar7;
    __return_storage_ptr__->m30 = (float)uVar8;
    fVar12 = mtx->m02;
    fVar13 = mtx->m12;
    fVar14 = mtx->m22;
    fVar15 = mtx->m32;
    __return_storage_ptr__->m01 = fVar4;
    __return_storage_ptr__->m11 = fVar9;
    __return_storage_ptr__->m21 = fVar10;
    __return_storage_ptr__->m31 = fVar11;
    fVar4 = mtx->m03;
    fVar9 = mtx->m13;
    fVar10 = mtx->m23;
    fVar11 = mtx->m33;
    __return_storage_ptr__->m02 = fVar12;
    __return_storage_ptr__->m12 = fVar13;
    __return_storage_ptr__->m22 = fVar14;
    __return_storage_ptr__->m32 = fVar15;
    __return_storage_ptr__->m03 = fVar4;
    __return_storage_ptr__->m13 = fVar9;
    __return_storage_ptr__->m23 = fVar10;
    __return_storage_ptr__->m33 = fVar11;
  }
  else {
    fVar9 = mtx->m33;
    fVar10 = mtx->m32;
    fVar15 = mtx->m02;
    fVar16 = mtx->m12;
    fVar17 = mtx->m01;
    fVar18 = mtx->m11;
    fVar19 = mtx->m21;
    fVar11 = mtx->m23;
    fVar12 = mtx->m13;
    fVar13 = mtx->m31;
    fVar20 = mtx->m03;
    fVar4 = _UNK_? / fVar4;
    fVar14 = mtx->m22;
    fVar21 = (((fVar9 * fVar14 - fVar11 * fVar10) * fVar18 - (fVar9 * fVar16 - fVar12 * fVar10) * fVar19)
             + (fVar11 * fVar16 - fVar12 * fVar14) * fVar13) * fVar4;
    mtx->m01 = (((fVar9 * fVar14 - fVar11 * fVar10) * fVar17 -
                (fVar9 * fVar15 - fVar20 * fVar10) * fVar19) +
               (fVar11 * fVar15 - fVar20 * fVar10) * fVar13) * (float)((uint)fVar4 ^ _UNK_?);
    mtx->m02 = (((fVar9 * fVar16 - fVar12 * fVar10) * fVar17 -
                (fVar9 * fVar15 - fVar20 * fVar10) * fVar18) +
               (fVar12 * fVar15 - fVar20 * fVar16) * fVar13) * fVar4;
    mtx->m03 = (((fVar11 * fVar16 - fVar12 * fVar14) * fVar17 - (fVar11 * fVar15 - fVar20 * fVar14) * fVar18)
               + (fVar12 * fVar15 - fVar20 * fVar16) * fVar19) * (float)((uint)fVar4 ^ uVar1);
    fVar22 = (((fVar9 * fVar14 - fVar11 * fVar10) * (float)uVar6 -
              (fVar9 * fVar16 - fVar12 * fVar10) * (float)uVar7) +
             (fVar11 * fVar16 - fVar12 * fVar14) * (float)uVar8) * (float)((uint)fVar4 ^ uVar1);
    mtx->m11 = (((fVar9 * fVar14 - fVar11 * fVar10) * (float)uVar5 -
                (fVar9 * fVar15 - fVar20 * fVar10) * (float)uVar7) +
               (fVar11 * fVar15 - fVar20 * fVar14) * (float)uVar8) * fVar4;
    mtx->m12 = (((fVar9 * fVar16 - fVar12 * fVar10) * (float)uVar5 -
                (fVar9 * fVar15 - fVar20 * fVar10) * (float)uVar6) +
               (fVar12 * fVar15 - fVar20 * fVar16) * (float)uVar8) * (float)((uint)fVar4 ^ uVar1);
    mtx->m13 = (((fVar11 * fVar16 - fVar12 * fVar14) * (float)uVar5 -
                (fVar11 * fVar15 - fVar20 * fVar14) * (float)uVar6) +
               (fVar12 * fVar15 - fVar20 * fVar16) * (float)uVar7) * fVar4;
    fVar23 = (((fVar9 * fVar19 - fVar11 * fVar13) * (float)uVar6 -
              (fVar9 * fVar18 - fVar12 * fVar13) * (float)uVar7) +
             (fVar11 * fVar18 - fVar12 * fVar19) * (float)uVar8) * fVar4;
    mtx->m21 = (((fVar9 * fVar19 - fVar11 * fVar13) * (float)uVar5 -
                (fVar9 * fVar17 - fVar20 * fVar13) * (float)uVar7) +
               (fVar11 * fVar17 - fVar20 * fVar19) * (float)uVar8) * (float)((uint)fVar4 ^ uVar1);
    mtx->m22 = (((fVar9 * fVar18 - fVar12 * fVar13) * (float)uVar5 -
                (fVar9 * fVar17 - fVar20 * fVar13) * (float)uVar6) +
               (fVar12 * fVar17 - fVar20 * fVar18) * (float)uVar8) * fVar4;
    mtx->m23 = (((fVar11 * fVar18 - fVar12 * fVar19) * (float)uVar5 -
                (fVar11 * fVar17 - fVar20 * fVar19) * (float)uVar6) +
               (fVar12 * fVar17 - fVar20 * fVar18) * (float)uVar7) * (float)((uint)fVar4 ^ uVar1);
    fVar9 = (((fVar10 * fVar19 - fVar10 * fVar16) * (float)uVar6 -
              (fVar10 * fVar18 - fVar16 * fVar13) * (float)uVar7) +
             (fVar14 * fVar18 - fVar16 * fVar19) * (float)uVar8) * (float)((uint)fVar4 ^ uVar1);
    mtx->m31 = (((fVar10 * fVar19 - fVar16 * fVar13) * (float)uVar5 -
                (fVar10 * fVar17 - fVar15 * fVar13) * (float)uVar7) +
               (fVar14 * fVar17 - fVar15 * fVar19) * (float)uVar8) * fVar4;
    mtx->m32 = (((fVar10 * fVar18 - fVar16 * fVar13) * (float)uVar5 -
                (fVar10 * fVar17 - fVar15 * fVar13) * (float)uVar6) +
               (fVar16 * fVar17 - fVar15 * fVar18) * (float)uVar8) * (float)((uint)fVar4 ^ uVar1);
    __return_storage_ptr__->m00 = fVar21;
    __return_storage_ptr__->m10 = fVar22;
    __return_storage_ptr__->m20 = fVar23;
    __return_storage_ptr__->m30 = fVar9;
    mtx->m33 = (((fVar14 * fVar18 - fVar16 * fVar19) * (float)uVar5 -
                (fVar14 * fVar17 - fVar15 * fVar19) * (float)uVar6) +
               (fVar16 * fVar17 - fVar15 * fVar18) * (float)uVar7) * fVar4;
    mtx->m00 = fVar21;
    mtx->m10 = fVar22;
    mtx->m20 = fVar23;
    mtx->m30 = fVar9;
    fVar4 = mtx->m11;
    fVar9 = mtx->m21;
    fVar10 = mtx->m31;
    fVar11 = mtx->m02;
    fVar12 = mtx->m12;
    fVar13 = mtx->m22;
    fVar14 = mtx->m32;
    __return_storage_ptr__->m01 = mtx->m01;
    __return_storage_ptr__->m11 = fVar4;
    __return_storage_ptr__->m21 = fVar9;
    __return_storage_ptr__->m31 = fVar10;
    fVar4 = mtx->m03;
    fVar9 = mtx->m13;
    fVar10 = mtx->m23;
    fVar15 = mtx->m33;
    __return_storage_ptr__->m02 = fVar11;
    __return_storage_ptr__->m12 = fVar12;
    __return_storage_ptr__->m22 = fVar13;
    __return_storage_ptr__->m32 = fVar14;
    __return_storage_ptr__->m03 = fVar4;
    __return_storage_ptr__->m13 = fVar9;
    __return_storage_ptr__->m23 = fVar10;
    __return_storage_ptr__->m33 = fVar15;
  }
  return __return_storage_ptr__;
}


/* Vector3[] GetNormalizedAxes(Matrix4x4) */

Vector3__Array *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxes
          (Matrix4x4 *matrix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  auVar2._0_4_ = matrix->m00;
  auVar2._4_4_ = matrix->m10;
  auVar2._8_4_ = matrix->m20;
  auVar2._12_4_ = matrix->m30;
  uStack_3 = auVar2._0_8_;
  fStack_4 = (float)auVar2._8_4_;
  fVar5 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar5) {
    fVar6 = (float)auVar2._8_4_ / fVar5;
    uStack_3 = CONCAT44((float)auVar2._4_4_ / fVar5,(float)auVar2._0_4_ / fVar5);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar7->zeroVector).x;
    uStack_3._4_4_ = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      auVar8._0_4_ = matrix->m01;
      auVar8._4_4_ = matrix->m11;
      auVar8._8_4_ = matrix->m21;
      auVar8._12_4_ = matrix->m31;
      pVVar1->vector[0].x = (float)(undefined4)uStack_3;
      pVVar1->vector[0].y = (float)uStack_3._4_4_;
      pVVar1->vector[0].z = fVar6;
      uStack_3 = auVar8._0_8_;
      fStack_4 = (float)auVar8._8_4_;
      fVar5 = (float)FUN_?(&uStack_3);
      if (_UNK_? < fVar5) {
        fVar6 = (float)auVar8._8_4_ / fVar5;
        uStack_3 = CONCAT44((float)auVar8._4_4_ / fVar5,(float)auVar8._0_4_ / fVar5);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_3._0_4_ = (pVVar7->zeroVector).x;
        uStack_3._4_4_ = (pVVar7->zeroVector).y;
        fVar6 = (pVVar7->zeroVector).z;
      }
      if (1 < (uint)pVVar1->max_length) {
        auVar9._0_4_ = matrix->m02;
        auVar9._4_4_ = matrix->m12;
        auVar9._8_4_ = matrix->m22;
        auVar9._12_4_ = matrix->m32;
        pVVar1->vector[1].x = (float)(undefined4)uStack_3;
        pVVar1->vector[1].y = (float)uStack_3._4_4_;
        pVVar1->vector[1].z = fVar6;
        uStack_3 = auVar9._0_8_;
        fStack_4 = (float)auVar9._8_4_;
        fVar5 = (float)FUN_?(&uStack_3);
        if (_UNK_? < fVar5) {
          fVar6 = (float)auVar9._8_4_ / fVar5;
          uStack_3 = CONCAT44((float)auVar9._4_4_ / fVar5,(float)auVar9._0_4_ / fVar5);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_3._0_4_ = (pVVar7->zeroVector).x;
          uStack_3._4_4_ = (pVVar7->zeroVector).y;
          fVar6 = (pVVar7->zeroVector).z;
        }
        if (2 < (uint)pVVar1->max_length) {
          pVVar1->vector[2].x = (float)(undefined4)uStack_3;
          pVVar1->vector[2].y = (float)uStack_3._4_4_;
          pVVar1->vector[2].z = fVar6;
          return pVVar1;
        }
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    pVVar1 = (Vector3__Array *)(*pcVar10)();
    return pVVar1;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar10)();
  return pVVar1;
}


/* Vector3 GetNormalizedAxis(Matrix4x4, Int32) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxis
                    (Vector3 *__return_storage_ptr__,Matrix4x4 *matrix,int32_t axisIndex,
                    MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (aVStack_2,matrix,axisIndex,(MethodInfo *)0x0);
  VVar3 = *pVVar1;
  aVStack_2[0]._0_8_ = VVar3._0_8_;
  aVStack_2[0].z = VVar3.z;
  fVar4 = (float)FUN_?(aVStack_2);
  if (_UNK_? < fVar4) {
    fVar5 = VVar3.z / fVar4;
    uVar6 = CONCAT44(VVar3.y / fVar4,VVar3.x / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6._0_4_ = (pVVar7->zeroVector).x;
    uVar6._4_4_ = (pVVar7->zeroVector).y;
    fVar5 = (pVVar7->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)(int)uVar6;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Matrix4x4 GetRelativeTransform(Matrix4x4, Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetRelativeTransform
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 *matrix,Matrix4x4 *referenceTransform,
          MethodInfo *method)

{
  MStack_1.m00 = matrix->m00;
  MStack_1.m10 = matrix->m10;
  MStack_1.m20 = matrix->m20;
  MStack_1.m30 = matrix->m30;
  MStack_1.m01 = matrix->m01;
  MStack_1.m11 = matrix->m11;
  MStack_1.m21 = matrix->m21;
  MStack_1.m31 = matrix->m31;
  MStack_1.m02 = matrix->m02;
  MStack_1.m12 = matrix->m12;
  MStack_1.m22 = matrix->m22;
  MStack_1.m32 = matrix->m32;
  MStack_1.m03 = matrix->m03;
  MStack_1.m13 = matrix->m13;
  MStack_1.m23 = matrix->m23;
  MStack_1.m33 = matrix->m33;
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     (&MStack_3,referenceTransform,(MethodInfo *)0x0);
  MStack_4.m00 = pMVar2->m00;
  MStack_4.m10 = pMVar2->m10;
  MStack_4.m20 = pMVar2->m20;
  MStack_4.m30 = pMVar2->m30;
  MStack_4.m01 = pMVar2->m01;
  MStack_4.m11 = pMVar2->m11;
  MStack_4.m21 = pMVar2->m21;
  MStack_4.m31 = pMVar2->m31;
  MStack_4.m02 = pMVar2->m02;
  MStack_4.m12 = pMVar2->m12;
  MStack_4.m22 = pMVar2->m22;
  MStack_4.m32 = pMVar2->m32;
  MStack_4.m03 = pMVar2->m03;
  MStack_4.m13 = pMVar2->m13;
  MStack_4.m23 = pMVar2->m23;
  MStack_4.m33 = pMVar2->m33;
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                     (&MStack_5,&MStack_4,&MStack_1,(MethodInfo *)0x0);
  fVar6 = pMVar2->m10;
  fVar7 = pMVar2->m20;
  fVar8 = pMVar2->m30;
  fVar9 = pMVar2->m01;
  fVar10 = pMVar2->m11;
  fVar11 = pMVar2->m21;
  fVar12 = pMVar2->m31;
  __return_storage_ptr__->m00 = pMVar2->m00;
  __return_storage_ptr__->m10 = fVar6;
  __return_storage_ptr__->m20 = fVar7;
  __return_storage_ptr__->m30 = fVar8;
  fVar6 = pMVar2->m02;
  fVar7 = pMVar2->m12;
  fVar8 = pMVar2->m22;
  fVar13 = pMVar2->m32;
  __return_storage_ptr__->m01 = fVar9;
  __return_storage_ptr__->m11 = fVar10;
  __return_storage_ptr__->m21 = fVar11;
  __return_storage_ptr__->m31 = fVar12;
  fVar9 = pMVar2->m03;
  fVar10 = pMVar2->m13;
  fVar11 = pMVar2->m23;
  fVar12 = pMVar2->m33;
  __return_storage_ptr__->m02 = fVar6;
  __return_storage_ptr__->m12 = fVar7;
  __return_storage_ptr__->m22 = fVar8;
  __return_storage_ptr__->m32 = fVar13;
  __return_storage_ptr__->m03 = fVar9;
  __return_storage_ptr__->m13 = fVar10;
  __return_storage_ptr__->m23 = fVar11;
  __return_storage_ptr__->m33 = fVar12;
  return __return_storage_ptr__;
}


/* Vector3 GetScale(Matrix4x4) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetScale
                    (Vector3 *__return_storage_ptr__,Matrix4x4 *matrix,MethodInfo *method)

{
  fStack_1 = matrix->m20;
  uStack_2._0_4_ = matrix->m00;
  uStack_2._4_4_ = matrix->m10;
  fStack_3 = matrix->m21;
  uStack_4._0_4_ = matrix->m01;
  uStack_4._4_4_ = matrix->m11;
  fStack_5 = matrix->m22;
  uStack_6._0_4_ = matrix->m02;
  uStack_6._4_4_ = matrix->m12;
  fVar7 = (float)FUN_?(&uStack_2);
  fVar8 = (float)FUN_?(&uStack_4);
  fVar9 = (float)FUN_?(&uStack_6);
  __return_storage_ptr__->x = fVar7;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar9;
  return __return_storage_ptr__;
}


/* Vector3 GetTranslation(Matrix4x4) */

Vector3 * Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_GetTranslation
                    (Vector3 *__return_storage_ptr__,Matrix4x4 *matrix,MethodInfo *method)

{
  fVar1 = matrix->m23;
  fVar2 = matrix->m13;
  __return_storage_ptr__->x = matrix->m03;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Matrix4x4 RotationMatrixFromRightUp(Vector3, Vector3) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_RotationMatrixFromRightUp
          (Matrix4x4 *__return_storage_ptr__,Vector3 *right,Vector3 *up,MethodInfo *method)

{
  __return_storage_ptr__->m00 = 0.0;
  __return_storage_ptr__->m10 = 0.0;
  __return_storage_ptr__->m20 = 0.0;
  __return_storage_ptr__->m30 = 0.0;
  __return_storage_ptr__->m01 = 0.0;
  __return_storage_ptr__->m11 = 0.0;
  __return_storage_ptr__->m21 = 0.0;
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = 0.0;
  __return_storage_ptr__->m12 = 0.0;
  __return_storage_ptr__->m22 = 0.0;
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = 0.0;
  __return_storage_ptr__->m13 = 0.0;
  __return_storage_ptr__->m23 = 0.0;
  __return_storage_ptr__->m33 = 0.0;
  method_00 = (MethodInfo *)right;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(right,(MethodInfo *)right);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(up,method_00);
  uStack_1._0_4_ = up->x;
  uStack_1._4_4_ = up->y;
  uVar2 = right->x;
  uVar3 = right->y;
  fVar4 = right->z * (float)uStack_1._4_4_ - (float)uVar3 * up->z;
  fVar5 = (float)uVar2 * up->z - right->z * (float)(undefined4)uStack_1;
  fVar6 = (float)uVar3 * (float)(undefined4)uStack_1 - (float)uVar2 * (float)uStack_1._4_4_;
  uStack_7 = CONCAT44(fVar5,fVar4);
  fStack_8 = fVar6;
  fVar9 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar9) {
    fVar6 = fVar6 / fVar9;
    uStack_7 = CONCAT44(fVar5 / fVar9,fVar4 / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_7._0_4_ = (pVVar10->zeroVector).x;
    uStack_7._4_4_ = (pVVar10->zeroVector).y;
    fVar6 = (pVVar10->zeroVector).z;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Matrix4x4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
  fVar9 = (pMVar11->identityMatrix).m10;
  fVar4 = (pMVar11->identityMatrix).m20;
  fVar5 = (pMVar11->identityMatrix).m30;
  fVar12 = (pMVar11->identityMatrix).m01;
  fVar13 = (pMVar11->identityMatrix).m11;
  fVar14 = (pMVar11->identityMatrix).m21;
  fVar15 = (pMVar11->identityMatrix).m31;
  __return_storage_ptr__->m00 = (pMVar11->identityMatrix).m00;
  __return_storage_ptr__->m10 = fVar9;
  __return_storage_ptr__->m20 = fVar4;
  __return_storage_ptr__->m30 = fVar5;
  fVar9 = (pMVar11->identityMatrix).m02;
  fVar4 = (pMVar11->identityMatrix).m12;
  fVar5 = (pMVar11->identityMatrix).m22;
  fVar16 = (pMVar11->identityMatrix).m32;
  __return_storage_ptr__->m01 = fVar12;
  __return_storage_ptr__->m11 = fVar13;
  __return_storage_ptr__->m21 = fVar14;
  __return_storage_ptr__->m31 = fVar15;
  fVar12 = (pMVar11->identityMatrix).m03;
  fVar13 = (pMVar11->identityMatrix).m13;
  fVar14 = (pMVar11->identityMatrix).m23;
  fVar15 = (pMVar11->identityMatrix).m33;
  __return_storage_ptr__->m02 = fVar9;
  __return_storage_ptr__->m12 = fVar4;
  __return_storage_ptr__->m22 = fVar5;
  __return_storage_ptr__->m32 = fVar16;
  __return_storage_ptr__->m03 = fVar12;
  __return_storage_ptr__->m13 = fVar13;
  __return_storage_ptr__->m23 = fVar14;
  __return_storage_ptr__->m33 = fVar15;
  __return_storage_ptr__->m00 = right->x;
  __return_storage_ptr__->m10 = right->y;
  __return_storage_ptr__->m20 = right->z;
  __return_storage_ptr__->m01 = up->x;
  __return_storage_ptr__->m11 = up->y;
  __return_storage_ptr__->m21 = up->z;
  __return_storage_ptr__->m02 = (float)uStack_7;
  __return_storage_ptr__->m12 = uStack_7._4_4_;
  __return_storage_ptr__->m22 = fVar6;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] TransformPoints(Matrix4x4, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_TransformPoints
          (Matrix4x4 *matrix,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_UnityEngine_Vector3_ *)(*pcVar1)();
    return pLVar2;
  }
  if ((points->fields)._size == 0) {
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
    ;
  }
  else {
    iVar3 = (points->fields)._size;
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,iVar3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
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
    fVar10 = _UNK_?;
    ppLStack_11 = (List_1_UnityEngine_Vector3_ **)
                  ((ulonglong)(uint)(points->fields)._version << 0x20);
    uStack_12 = 0;
    uStack_13 = 0;
    lStack_14 = (longlong)ppLStack_11;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_5 = 0;
    ppLStack_11 = &pLStack_17;
    pLStack_17 = points;
    while (cVar18 = FUN_?(&pLStack_17,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                ),
          pMVar19 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
          , cVar18 != '\0') {
      fVar20 = fVar10 / ((float)uStack_16 * matrix->m32 +
                        (float)uStack_15 * matrix->m30 + uStack_15._4_4_ * matrix->m31 + matrix->m33
                       );
      fVar21 = ((float)uStack_16 * matrix->m02 +
                uStack_15._4_4_ * matrix->m01 + (float)uStack_15 * matrix->m00 + matrix->m03) *
               fVar20;
      fVar22 = ((float)uStack_16 * matrix->m12 +
                (float)uStack_15 * matrix->m10 + uStack_15._4_4_ * matrix->m11 + matrix->m13) *
               fVar20;
      fVar20 = ((float)uStack_16 * matrix->m22 +
                (float)uStack_15 * matrix->m20 + uStack_15._4_4_ * matrix->m21 + matrix->m23) *
               fVar20;
      if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      piVar23 = &(this->fields)._version;
      *piVar23 = *piVar23 + 1;
      pPVar24 = (this->fields)._items;
      uVar4 = (this->fields)._size;
      if (pPVar24 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      if (uVar4 < (uint)pPVar24->max_length) {
        (this->fields)._size = uVar4 + 1;
        if ((uint)pPVar24->max_length <= uVar4) goto code_?;
        pPVar24->vector[(int)uVar4].Quadrant = (int32_t)fVar21;
        pPVar24->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar22;
        pPVar24->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar20;
      }
      else {
        PStack_25.FirstAxisSign = (int32_t)fVar22;
        PStack_25.Quadrant = (int32_t)fVar21;
        PStack_25.SecondAxisSign = (int32_t)fVar20;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_25,pMVar19->klass->rgctx_data[0xe].method);
      }
    }
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* Matrix4x4 Translation(Vector3) */

Matrix4x4 *
Assembly-CSharp.dll::RTG::Matrix4x4Ex::Matrix4x4Ex_Translation
          (Matrix4x4 *__return_storage_ptr__,Vector3 *translation,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->m00 = 0.0;
  __return_storage_ptr__->m10 = 0.0;
  __return_storage_ptr__->m20 = 0.0;
  __return_storage_ptr__->m30 = 0.0;
  __return_storage_ptr__->m01 = 0.0;
  __return_storage_ptr__->m11 = 0.0;
  __return_storage_ptr__->m21 = 0.0;
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = 0.0;
  __return_storage_ptr__->m12 = 0.0;
  __return_storage_ptr__->m22 = 0.0;
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = 0.0;
  __return_storage_ptr__->m13 = 0.0;
  __return_storage_ptr__->m23 = 0.0;
  __return_storage_ptr__->m33 = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Matrix4x4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = translation->x;
  uVar3 = translation->y;
  pMVar4 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
  fVar5 = (pMVar4->identityMatrix).m10;
  fVar6 = (pMVar4->identityMatrix).m20;
  fVar7 = (pMVar4->identityMatrix).m30;
  fVar8 = (pMVar4->identityMatrix).m01;
  fVar9 = (pMVar4->identityMatrix).m11;
  fVar10 = (pMVar4->identityMatrix).m21;
  fVar11 = (pMVar4->identityMatrix).m31;
  __return_storage_ptr__->m00 = (pMVar4->identityMatrix).m00;
  __return_storage_ptr__->m10 = fVar5;
  __return_storage_ptr__->m20 = fVar6;
  __return_storage_ptr__->m30 = fVar7;
  fVar5 = (pMVar4->identityMatrix).m02;
  fVar6 = (pMVar4->identityMatrix).m12;
  fVar7 = (pMVar4->identityMatrix).m22;
  fVar12 = (pMVar4->identityMatrix).m32;
  __return_storage_ptr__->m01 = fVar8;
  __return_storage_ptr__->m11 = fVar9;
  __return_storage_ptr__->m21 = fVar10;
  __return_storage_ptr__->m31 = fVar11;
  fVar8 = (pMVar4->identityMatrix).m03;
  fVar9 = (pMVar4->identityMatrix).m13;
  fVar10 = (pMVar4->identityMatrix).m23;
  fVar11 = (pMVar4->identityMatrix).m33;
  __return_storage_ptr__->m02 = fVar5;
  __return_storage_ptr__->m12 = fVar6;
  __return_storage_ptr__->m22 = fVar7;
  __return_storage_ptr__->m32 = fVar12;
  __return_storage_ptr__->m03 = fVar8;
  __return_storage_ptr__->m13 = fVar9;
  __return_storage_ptr__->m23 = fVar10;
  __return_storage_ptr__->m33 = fVar11;
  __return_storage_ptr__->m03 = (float)uVar2;
  __return_storage_ptr__->m13 = (float)uVar3;
  __return_storage_ptr__->m23 = translation->z;
  __return_storage_ptr__->m33 = 1.0;
  return __return_storage_ptr__;
}

