
/* Ray InverseTransform(Ray, Matrix4x4) */

Ray * Assembly-CSharp.dll::RTG::RayEx::RayEx_InverseTransform(Ray *__return_storage_ptr__,Ray *ray,Matrix4x4 *transformMatrix,MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse(aMStack_2,transformMatrix,(MethodInfo *)0x0);
  fVar3 = pMVar1->m00;
  fVar4 = pMVar1->m10;
  fVar5 = pMVar1->m20;
  fVar6 = pMVar1->m01;
  fVar7 = pMVar1->m11;
  fVar8 = pMVar1->m21;
  fVar9 = pMVar1->m02;
  fVar10 = pMVar1->m12;
  fVar11 = pMVar1->m22;
  fVar12 = pMVar1->m03;
  fVar13 = pMVar1->m13;
  fVar14 = pMVar1->m23;
  uVar15 = (ray->m_Origin).x;
  uVar16 = (ray->m_Origin).y;
  fVar17 = (ray->m_Origin).z;
  fVar18 = 1.0 / ((float)uVar15 * pMVar1->m30 + (float)uVar16 * pMVar1->m31 + fVar17 * pMVar1->m32 + pMVar1->m33);
  uVar19 = (ray->m_Direction).x;
  uVar20 = (ray->m_Direction).y;
  fVar21 = (ray->m_Direction).z;
  fVar22 = (float)uVar20 * fVar6 + (float)uVar19 * fVar3 + fVar21 * fVar9;
  fVar23 = (float)uVar19 * fVar4 + (float)uVar20 * fVar7 + fVar21 * fVar10;
  fVar21 = (float)uVar19 * fVar5 + (float)uVar20 * fVar8 + fVar21 * fVar11;
  uStack_24 = CONCAT44(fVar23,fVar22);
  fStack_25 = fVar21;
  fVar26 = (float)FUN_?(&uStack_24);
  if (1e-05 < fVar26) {
    fVar21 = fVar21 / fVar26;
    uStack_24 = CONCAT44(fVar23 / fVar26,fVar22 / fVar26);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_24._0_4_ = (pVVar27->zeroVector).x;
    uStack_24._4_4_ = (pVVar27->zeroVector).y;
    fVar21 = (pVVar27->zeroVector).z;
  }
  (__return_storage_ptr__->m_Direction).x = 0.0;
  (__return_storage_ptr__->m_Direction).y = 0.0;
  (__return_storage_ptr__->m_Direction).z = 0.0;
  fVar26 = (float)uStack_24;
  fVar22 = uStack_24._4_4_;
  (__return_storage_ptr__->m_Origin).x = ((float)uVar16 * fVar6 + (float)uVar15 * fVar3 + fVar17 * fVar9 + fVar12) * fVar18;
  (__return_storage_ptr__->m_Origin).y = ((float)uVar15 * fVar4 + (float)uVar16 * fVar7 + fVar17 * fVar10 + fVar13) * fVar18;
  (__return_storage_ptr__->m_Origin).z = ((float)uVar15 * fVar5 + (float)uVar16 * fVar8 + fVar17 * fVar11 + fVar14) * fVar18;
  fStack_25 = fVar21;
  fVar17 = (float)FUN_?(&uStack_24);
  if (1e-05 < fVar17) {
    fVar21 = fVar21 / fVar17;
    uVar28 = CONCAT44(fVar22 / fVar17,fVar26 / fVar17);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar28._0_4_ = (pVVar27->zeroVector).x;
    uVar28._4_4_ = (pVVar27->zeroVector).y;
    fVar21 = (pVVar27->zeroVector).z;
  }
  (__return_storage_ptr__->m_Direction).x = (float)(int)uVar28;
  (__return_storage_ptr__->m_Direction).y = (float)(int)((ulonglong)uVar28 >> 0x20);
  (__return_storage_ptr__->m_Direction).z = fVar21;
  return __return_storage_ptr__;
}


/* Ray Mirror(Ray, Vector3) */

Ray * Assembly-CSharp.dll::RTG::RayEx::RayEx_Mirror(Ray *__return_storage_ptr__,Ray *ray,Vector3 *mirrorPoint,MethodInfo *method)

{
  fVar1 = (ray->m_Origin).x;
  fVar2 = (ray->m_Origin).y;
  fVar3 = (ray->m_Origin).z;
  fVar4 = (ray->m_Direction).x;
  fVar5 = (ray->m_Direction).y;
  fVar6 = (ray->m_Direction).z;
  (__return_storage_ptr__->m_Origin).x = fVar1;
  (__return_storage_ptr__->m_Origin).y = fVar2;
  (__return_storage_ptr__->m_Origin).z = fVar3;
  (__return_storage_ptr__->m_Direction).x = fVar4;
  (__return_storage_ptr__->m_Direction).y = fVar5;
  (__return_storage_ptr__->m_Direction).z = fVar6;
  uVar7 = mirrorPoint->x;
  uVar8 = mirrorPoint->y;
  fStack_9 = (ray->m_Origin).z - mirrorPoint->z;
  uStack_10 = CONCAT44(fVar2 - (float)uVar8,fVar1 - (float)uVar7);
  fVar3 = (float)FUN_?(&uStack_10);
  uVar11._0_4_ = (ray->m_Direction).x;
  uVar11._4_4_ = (ray->m_Direction).y;
  uVar12 = mirrorPoint->x;
  uVar13 = mirrorPoint->y;
  fVar1 = (ray->m_Direction).z;
  fVar2 = mirrorPoint->z;
  (__return_storage_ptr__->m_Origin).x = (float)(undefined4)uVar11 * fVar3 + (float)uVar12;
  (__return_storage_ptr__->m_Origin).y = (float)uVar11._4_4_ * fVar3 + (float)uVar13;
  (__return_storage_ptr__->m_Origin).z = fVar1 * fVar3 + fVar2;
  fVar1 = -(ray->m_Direction).z;
  uStack_10 = uVar11 ^ 0x8000000080000000;
  fStack_9 = fVar1;
  fVar2 = (float)FUN_?(&uStack_10);
  if (1e-05 < fVar2) {
    fVar3 = -(float)(undefined4)uVar11 / fVar2;
    fVar4 = -(float)uVar11._4_4_ / fVar2;
    fVar1 = fVar1 / fVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar14->zeroVector).x;
    fVar4 = (pVVar14->zeroVector).y;
    fVar1 = (pVVar14->zeroVector).z;
  }
  (__return_storage_ptr__->m_Direction).x = fVar3;
  (__return_storage_ptr__->m_Direction).y = fVar4;
  (__return_storage_ptr__->m_Direction).z = fVar1;
  return __return_storage_ptr__;
}

