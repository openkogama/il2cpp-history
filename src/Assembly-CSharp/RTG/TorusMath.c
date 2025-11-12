
/* List`1[UnityEngine.Vector3] Calc3DHrzExtentPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TorusMath::TorusMath_Calc3DHrzExtentPoints
          (Vector3 *torusCenter,float torusCoreRadius,float torusTubeRadius,
          Quaternion *torusRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = torusRotation->x;
  fVar2 = torusRotation->y;
  fVar3 = torusRotation->z;
  fVar4 = torusRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar1 * (fVar1 + fVar1);
  uVar8 = (pVVar5->rightVector).x;
  uVar9 = (pVVar5->rightVector).y;
  fVar10 = (pVVar5->rightVector).z;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar12 = fVar2 + fVar2;
  fVar13 = (_UNK_? - (fVar3 * fVar6 + fVar2 * fVar12)) * (float)uVar8 +
           (fVar1 * fVar12 - fVar4 * fVar6) * (float)uVar9 +
           (fVar4 * fVar12 + fVar1 * fVar6) * fVar10;
  fVar3 = (_UNK_? - (fVar3 * fVar6 + fVar7)) * (float)uVar9 +
           (fVar4 * fVar6 + fVar1 * fVar12) * (float)uVar8 + (fVar2 * fVar6 - fVar11) * fVar10;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar12) * (float)uVar8 +
           (fVar11 + fVar2 * fVar6) * (float)uVar9 +
           (_UNK_? - (fVar2 * fVar12 + fVar7)) * fVar10;
  PStack_14.Quadrant = (int32_t)torusRotation->x;
  PStack_14.FirstAxisSign = (int32_t)torusRotation->y;
  PStack_14.SecondAxisSign = (int32_t)torusRotation->z;
  fStack_15 = torusRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar16._0_4_ = (int32_t)(pVVar5->forwardVector).x;
  uVar16._4_4_ = (int32_t)(pVVar5->forwardVector).y;
  fVar12 = (float)PStack_14.FirstAxisSign + (float)PStack_14.FirstAxisSign;
  fVar6 = (float)PStack_14.SecondAxisSign + (float)PStack_14.SecondAxisSign;
  fVar11 = (float)PStack_14.Quadrant * ((float)PStack_14.Quadrant + (float)PStack_14.Quadrant);
  fVar7 = ((float)PStack_14.Quadrant + (float)PStack_14.Quadrant) * fStack_15;
  fVar2 = (pVVar5->forwardVector).z;
  fVar4 = (_UNK_? -
           ((float)PStack_14.SecondAxisSign * fVar6 + (float)PStack_14.FirstAxisSign * fVar12)) *
           (float)(int32_t)uVar16 +
           ((float)PStack_14.Quadrant * fVar12 - fVar6 * fStack_15) * (float)uVar16._4_4_ +
           (fVar12 * fStack_15 + (float)PStack_14.Quadrant * fVar6) * fVar2;
  fVar10 = (_UNK_? - ((float)PStack_14.SecondAxisSign * fVar6 + fVar11)) *
           (float)uVar16._4_4_ +
           (fVar6 * fStack_15 + (float)PStack_14.Quadrant * fVar12) * (float)(int32_t)uVar16 +
           ((float)PStack_14.FirstAxisSign * fVar6 - fVar7) * fVar2;
  fVar11 = ((float)PStack_14.Quadrant * fVar6 - fVar12 * fStack_15) * (float)(int32_t)uVar16 +
           (fVar7 + (float)PStack_14.FirstAxisSign * fVar6) * (float)uVar16._4_4_ +
           (_UNK_? - ((float)PStack_14.FirstAxisSign * fVar12 + fVar11)) * fVar2;
  fVar7 = torusCoreRadius + torusTubeRadius;
  PStack_14._0_8_ = uVar16;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar17 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_14.Quadrant = (int32_t)torusCenter->x;
  PStack_14.FirstAxisSign = (int32_t)torusCenter->y;
  fVar12 = (float)PStack_14.Quadrant - fVar7 * fVar13;
  fVar6 = (float)PStack_14.FirstAxisSign - fVar7 * fVar3;
  fVar2 = torusCenter->z - fVar7 * fVar1;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar18 = &(this->fields)._version;
    *piVar18 = *piVar18 + 1;
    pPVar19 = (this->fields)._items;
    if (pPVar19 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar20 = (this->fields)._size;
    if (uVar20 < (uint)pPVar19->max_length) {
      (this->fields)._size = uVar20 + 1;
      if ((uint)pPVar19->max_length <= uVar20) goto code_?;
      pPVar19->vector[(int)uVar20].Quadrant = (int32_t)fVar12;
      pPVar19->vector[(int)uVar20].FirstAxisSign = (int32_t)fVar6;
      pPVar19->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar2;
    }
    else {
      PStack_14.FirstAxisSign = (int32_t)fVar6;
      PStack_14.Quadrant = (int32_t)fVar12;
      PStack_14.SecondAxisSign = (int32_t)fVar2;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_14,pMVar17->klass->rgctx_data[0xe].method);
    }
    pMVar17 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_14.Quadrant = (int32_t)torusCenter->x;
    PStack_14.FirstAxisSign = (int32_t)torusCenter->y;
    fVar2 = fVar4 * fVar7 + (float)PStack_14.Quadrant;
    fVar6 = fVar10 * fVar7 + (float)PStack_14.FirstAxisSign;
    fVar12 = fVar11 * fVar7 + torusCenter->z;
    piVar18 = &(this->fields)._version;
    *piVar18 = *piVar18 + 1;
    pPVar19 = (this->fields)._items;
    if (pPVar19 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar20 = (this->fields)._size;
    if (uVar20 < (uint)pPVar19->max_length) {
      (this->fields)._size = uVar20 + 1;
      if ((uint)pPVar19->max_length <= uVar20) goto code_?;
      pPVar19->vector[(int)uVar20].Quadrant = (int32_t)fVar2;
      pPVar19->vector[(int)uVar20].FirstAxisSign = (int32_t)fVar6;
      pPVar19->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar12;
    }
    else {
      PStack_14.FirstAxisSign = (int32_t)fVar6;
      PStack_14.Quadrant = (int32_t)fVar2;
      PStack_14.SecondAxisSign = (int32_t)fVar12;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_14,pMVar17->klass->rgctx_data[0xe].method);
    }
    pMVar17 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_14.Quadrant = (int32_t)torusCenter->x;
    PStack_14.FirstAxisSign = (int32_t)torusCenter->y;
    fVar6 = fVar13 * fVar7 + (float)PStack_14.Quadrant;
    fVar2 = fVar3 * fVar7 + (float)PStack_14.FirstAxisSign;
    fVar1 = fVar1 * fVar7 + torusCenter->z;
    piVar18 = &(this->fields)._version;
    *piVar18 = *piVar18 + 1;
    pPVar19 = (this->fields)._items;
    if (pPVar19 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar20 = (this->fields)._size;
    if (uVar20 < (uint)pPVar19->max_length) {
      (this->fields)._size = uVar20 + 1;
      if ((uint)pPVar19->max_length <= uVar20) goto code_?;
      pPVar19->vector[(int)uVar20].Quadrant = (int32_t)fVar6;
      pPVar19->vector[(int)uVar20].FirstAxisSign = (int32_t)fVar2;
      pPVar19->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar1;
    }
    else {
      PStack_14.FirstAxisSign = (int32_t)fVar2;
      PStack_14.Quadrant = (int32_t)fVar6;
      PStack_14.SecondAxisSign = (int32_t)fVar1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_14,pMVar17->klass->rgctx_data[0xe].method);
    }
    pMVar17 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_14.Quadrant = (int32_t)torusCenter->x;
    PStack_14.FirstAxisSign = (int32_t)torusCenter->y;
    fVar2 = (float)PStack_14.Quadrant - fVar4 * fVar7;
    fVar1 = (float)PStack_14.FirstAxisSign - fVar10 * fVar7;
    fVar3 = torusCenter->z - fVar11 * fVar7;
    piVar18 = &(this->fields)._version;
    *piVar18 = *piVar18 + 1;
    pPVar19 = (this->fields)._items;
    if (pPVar19 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar20 = (this->fields)._size;
      if (uVar20 < (uint)pPVar19->max_length) {
        (this->fields)._size = uVar20 + 1;
        if ((uint)pPVar19->max_length <= uVar20) {
code_?:
          FUN_?();
          pcVar21 = (code *)swi(3);
          pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar21)();
          return pLVar22;
        }
        pPVar19->vector[(int)uVar20].Quadrant = (int32_t)fVar2;
        pPVar19->vector[(int)uVar20].FirstAxisSign = (int32_t)fVar1;
        pPVar19->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar3;
      }
      else {
        PStack_14.FirstAxisSign = (int32_t)fVar1;
        PStack_14.Quadrant = (int32_t)fVar2;
        PStack_14.SecondAxisSign = (int32_t)fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_14,pMVar17->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar21)();
  return pLVar22;
}


/* AABB CalcCylAABB(Vector3, Single, Single, Single, Quaternion) */

AABB * Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcCylAABB
                 (AABB *__return_storage_ptr__,Vector3 *torusCenter,float torusCoreRadius,
                 float torusHrzRadius,float torusVertRadius,Quaternion *torusRotation,
                 MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  fVar2 = torusCoreRadius + torusHrzRadius + torusCoreRadius + torusHrzRadius;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  uStack_3 = 1;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->zeroVector).x;
  uVar6 = (pVVar4->zeroVector).y;
  fStack_7 = (pVVar4->zeroVector).z;
  (__return_storage_ptr__->_size).x = fVar2;
  (__return_storage_ptr__->_size).y = torusVertRadius + torusVertRadius;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = (float)uVar5;
  uStack_8 = CONCAT44(torusVertRadius + torusVertRadius,fVar2);
  (__return_storage_ptr__->_center).y = (float)uVar6;
  (__return_storage_ptr__->_center).z = fStack_7;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 1;
  uStack_9 = uVar6;
  if (bVar1) {
    fStack_10 = fVar2;
    fStack_11 = (float)uVar5;
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_12._0_4_ = torusCenter->x;
  uStack_12._4_4_ = torusCenter->y;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_13._0_4_ = (pVVar4->oneVector).x;
  uStack_13._4_4_ = (pVVar4->oneVector).y;
  fStack_14 = (pVVar4->oneVector).z;
  uStack_8._0_4_ = torusRotation->x;
  uStack_8._4_4_ = torusRotation->y;
  uVar15 = torusRotation->z;
  uVar16 = torusRotation->w;
  fStack_17 = torusCenter->z;
  MStack_18.m00 = 0.0;
  MStack_18.m10 = 0.0;
  MStack_18.m20 = 0.0;
  MStack_18.m30 = 0.0;
  MStack_18.m01 = 0.0;
  MStack_18.m11 = 0.0;
  MStack_18.m21 = 0.0;
  MStack_18.m31 = 0.0;
  MStack_18.m02 = 0.0;
  MStack_18.m12 = 0.0;
  MStack_18.m22 = 0.0;
  MStack_18.m32 = 0.0;
  MStack_18.m03 = 0.0;
  MStack_18.m13 = 0.0;
  MStack_18.m23 = 0.0;
  MStack_18.m33 = 0.0;
  pcVar19 = pcRam_?;
  fStack_10 = (float)uVar15;
  fStack_11 = (float)uVar16;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    pAVar21 = (AABB *)(*pcVar19)();
    return pAVar21;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_12,&uStack_8,&uStack_13,&MStack_18);
  MStack_22.m00 = MStack_18.m00;
  MStack_22.m10 = MStack_18.m10;
  MStack_22.m20 = MStack_18.m20;
  MStack_22.m30 = MStack_18.m30;
  MStack_22.m01 = MStack_18.m01;
  MStack_22.m11 = MStack_18.m11;
  MStack_22.m21 = MStack_18.m21;
  MStack_22.m31 = MStack_18.m31;
  MStack_22.m02 = MStack_18.m02;
  MStack_22.m12 = MStack_18.m12;
  MStack_22.m22 = MStack_18.m22;
  MStack_22.m32 = MStack_18.m32;
  MStack_22.m03 = MStack_18.m03;
  MStack_22.m13 = MStack_18.m13;
  MStack_22.m23 = MStack_18.m23;
  MStack_22.m33 = MStack_18.m33;
  AABB::AABB_Transform(__return_storage_ptr__,&MStack_22,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* AABB CalcCylModelAABB(Single, Single, Single) */

AABB * Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcCylModelAABB
                 (AABB *__return_storage_ptr__,float torusCoreRadius,float torusHrzRadius,
                 float torusVertRadius,MethodInfo *method)

{
  fVar1 = torusCoreRadius + torusHrzRadius + torusCoreRadius + torusHrzRadius;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  __return_storage_ptr__->field_0x1b = 0;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (__return_storage_ptr__->_center).x = (pVVar2->zeroVector).x;
  (__return_storage_ptr__->_center).y = fVar3;
  (__return_storage_ptr__->_size).x = fVar1;
  (__return_storage_ptr__->_size).y = torusVertRadius + torusVertRadius;
  (__return_storage_ptr__->_size).z = fVar1;
  (__return_storage_ptr__->_center).z = fVar4;
  __return_storage_ptr__->_isValid = 1;
  return __return_storage_ptr__;
}


/* Single CalcSphereRadius(Single, Single) */

float Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcSphereRadius
                (float torusCoreRadius,float torusTubeRadius,MethodInfo *method)

{
  return torusCoreRadius + torusTubeRadius;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Quaternion, TorusEpsilon) */

bool Assembly-CSharp.dll::RTG::TorusMath::TorusMath_Raycast
               (Ray *ray,float *t,Vector3 *torusCenter,float torusCoreRadius,float torusTubeRadius,
               Quaternion *torusRotation,TorusEpsilon *epsilon,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  *t = 0.0;
  fVar2 = torusTubeRadius + epsilon->_tubeRadiusEps;
  fVar3 = torusRotation->x;
  fVar4 = torusRotation->y;
  fVar5 = torusRotation->z;
  fVar6 = torusRotation->w;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  fVar10 = (fVar3 + fVar3) * fVar3;
  uVar11 = (pVVar7->upVector).x;
  uVar12 = (pVVar7->upVector).y;
  fVar13 = (fVar3 + fVar3) * fVar6;
  fVar14 = (pVVar7->upVector).z;
  fVar15 = (_UNK_? - (fVar8 * fVar5 + fVar9 * fVar4)) * (float)uVar11 +
           (fVar9 * fVar3 - fVar8 * fVar6) * (float)uVar12 +
           (fVar9 * fVar6 + fVar8 * fVar3) * fVar14;
  fVar5 = (_UNK_? - (fVar8 * fVar5 + fVar10)) * (float)uVar12 +
           (fVar8 * fVar6 + fVar9 * fVar3) * (float)uVar11 + (fVar8 * fVar4 - fVar13) * fVar14;
  fVar3 = (fVar8 * fVar3 - fVar9 * fVar6) * (float)uVar11 +
           (fVar13 + fVar8 * fVar4) * (float)uVar12 +
           (_UNK_? - (fVar9 * fVar4 + fVar10)) * fVar14;
  RStack_16.m_Origin.x = torusCenter->x;
  RStack_16.m_Origin.y = torusCenter->y;
  fVar8 = RStack_16.m_Origin.x - fVar15 * fVar2;
  fVar10 = RStack_16.m_Origin.y - fVar5 * fVar2;
  fVar9 = torusCenter->z - fVar3 * fVar2;
  fVar6 = fVar5 * fVar2 + RStack_16.m_Origin.y;
  fVar14 = fVar3 * fVar2 + torusCenter->z;
  fVar13 = fVar15 * fVar2 + RStack_16.m_Origin.x;
  VStack_17.z = fVar14 - fVar9;
  VStack_17.y = fVar6 - fVar10;
  VStack_17.x = fVar13 - fVar8;
  fVar4 = (float)FUN_?(&VStack_17);
  RStack_16.m_Origin.x = (ray->m_Origin).x;
  RStack_16.m_Origin.y = (ray->m_Origin).y;
  RStack_16._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_17.y = fVar6;
  VStack_17.x = fVar13;
  VStack_18.y = fVar10;
  VStack_18.x = fVar8;
  RStack_16.m_Direction.y = (ray->m_Direction).y;
  RStack_16.m_Direction.z = (ray->m_Direction).z;
  VStack_17.z = fVar14;
  VStack_18.z = fVar9;
  bVar19 = CylinderMath::CylinderMath_Raycast_1
                     (&RStack_16,t,&VStack_18,&VStack_17,fVar2 + torusCoreRadius,fVar4,
                      (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  if (bVar19 == 0) {
code_?:
    bVar19 = 0;
  }
  else {
    fVar4 = *t;
    uVar20 = (ray->m_Direction).x;
    uVar21 = (ray->m_Direction).y;
    RStack_16.m_Origin.x = (ray->m_Origin).x;
    RStack_16.m_Origin.y = (ray->m_Origin).y;
    fVar22 = (float)uVar20 * fVar4 + RStack_16.m_Origin.x;
    fVar23 = (float)uVar21 * fVar4 + RStack_16.m_Origin.y;
    fVar24 = (ray->m_Direction).z * fVar4 + (ray->m_Origin).z;
    VStack_18.y = fVar5;
    VStack_18.x = fVar15;
    VStack_18.z = fVar3;
    fVar4 = (float)FUN_?(&VStack_18);
    if (_UNK_? < fVar4) {
      VStack_17.x = fVar15 / fVar4;
      fVar3 = fVar3 / fVar4;
      VStack_17.y = fVar5 / fVar4;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_17.x = (pVVar7->zeroVector).x;
      VStack_17.y = (pVVar7->zeroVector).y;
      fVar3 = (pVVar7->zeroVector).z;
    }
    uVar25 = torusCenter->x;
    uVar26 = torusCenter->y;
    fVar4 = (float)((uint)(VStack_17.y * (float)uVar26 + VStack_17.x * (float)uVar25 +
                           fVar3 * torusCenter->z) ^ _UNK_?) +
             fVar23 * VStack_17.y + fVar22 * VStack_17.x + fVar24 * fVar3;
    RStack_16.m_Origin.x = torusCenter->x;
    RStack_16.m_Origin.y = torusCenter->y;
    VStack_17.x = (fVar22 - fVar4 * VStack_17.x) - RStack_16.m_Origin.x;
    VStack_17.z = (fVar24 - fVar4 * fVar3) - torusCenter->z;
    VStack_17.y = (fVar23 - fVar4 * VStack_17.y) - RStack_16.m_Origin.y;
    fVar3 = (float)FUN_?(&VStack_17);
    if (fVar3 < torusCoreRadius - fVar2) {
      RStack_16.m_Direction.y = (ray->m_Direction).y;
      RStack_16.m_Direction.z = (ray->m_Direction).z;
      VStack_18.y = fVar23;
      VStack_18.x = fVar22;
      RStack_16.m_Origin.x = (ray->m_Origin).x;
      RStack_16.m_Origin.y = (ray->m_Origin).y;
      RStack_16._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      VStack_18.z = fVar24;
      pRVar27 = RayEx::RayEx_Mirror(aRStack_28,&RStack_16,&VStack_18,(MethodInfo *)0x0);
      uVar29._0_4_ = (pRVar27->m_Direction).y;
      uVar29._4_4_ = (pRVar27->m_Direction).z;
      fVar3 = (pRVar27->m_Origin).x;
      fVar4 = (pRVar27->m_Origin).y;
      fVar5 = (pRVar27->m_Origin).z;
      fVar15 = (pRVar27->m_Direction).x;
      VStack_18.z = fVar14 - fVar9;
      VStack_18.y = fVar6 - fVar10;
      VStack_18.x = fVar13 - fVar8;
      _fStack_d8 = uVar29;
      fVar23 = (float)FUN_?(&VStack_18);
      VStack_18.y = fVar6;
      VStack_18.x = fVar13;
      RStack_16.m_Origin.y = fVar10;
      RStack_16.m_Origin.x = fVar8;
      RStack_16.m_Origin.z = fVar9;
      VStack_18.z = fVar14;
      aRStack_28[0].m_Origin.x = fVar3;
      aRStack_28[0].m_Origin.y = fVar4;
      aRStack_28[0].m_Origin.z = fVar5;
      aRStack_28[0].m_Direction.x = fVar15;
      aRStack_28[0].m_Direction._4_8_ = uVar29;
      bVar19 = CylinderMath::CylinderMath_RaycastNoCaps_1
                         (aRStack_28,t,&RStack_16.m_Origin,&VStack_18,torusCoreRadius - fVar2,
                          fVar23,(CylinderEpsilon)0x0,(MethodInfo *)0x0);
      if (bVar19 == 0) goto code_?;
      fVar6 = *t;
      uVar30 = (ray->m_Origin).x;
      VStack_17.x = (float)uVar30 - (fVar15 * fVar6 + fVar3);
      VStack_17.z = (ray->m_Origin).z - (fStack_31 * fVar6 + fVar5);
      VStack_17.y = (ray->m_Origin).y - (fStack_32 * fVar6 + fVar4);
      fVar3 = (float)FUN_?(&VStack_17);
      *t = fVar3;
    }
    bVar19 = 1;
  }
  return bVar19;
}


/* Boolean RaycastCylindrical(Ray, Single ByRef, Vector3, Single, Single, Single, Quaternion,
   TorusEpsilon) */

bool Assembly-CSharp.dll::RTG::TorusMath::TorusMath_RaycastCylindrical
               (Ray *ray,float *t,Vector3 *torusCenter,float torusCoreRadius,float torusHrzRadius,
               float torusVertRadius,Quaternion *torusRotation,TorusEpsilon *epsilon,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  *t = 0.0;
  fVar2 = torusVertRadius + epsilon->_cylVertRadius;
  fVar3 = torusHrzRadius + epsilon->_cylHrzRadius;
  fVar4 = torusRotation->x;
  fVar5 = torusRotation->y;
  fVar6 = torusRotation->z;
  fVar7 = torusRotation->w;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = fVar6 + fVar6;
  fVar10 = fVar5 + fVar5;
  fVar11 = (fVar4 + fVar4) * fVar4;
  uVar12 = (pVVar8->upVector).x;
  uVar13 = (pVVar8->upVector).y;
  fVar14 = (fVar4 + fVar4) * fVar7;
  fVar15 = (pVVar8->upVector).z;
  fVar16 = (_UNK_? - (fVar9 * fVar6 + fVar10 * fVar5)) * (float)uVar12 +
           (fVar10 * fVar4 - fVar9 * fVar7) * (float)uVar13 +
           (fVar10 * fVar7 + fVar9 * fVar4) * fVar15;
  fVar6 = (_UNK_? - (fVar9 * fVar6 + fVar11)) * (float)uVar13 +
           (fVar9 * fVar7 + fVar10 * fVar4) * (float)uVar12 + (fVar9 * fVar5 - fVar14) * fVar15;
  fVar4 = (fVar9 * fVar4 - fVar10 * fVar7) * (float)uVar12 +
           (fVar14 + fVar9 * fVar5) * (float)uVar13 +
           (_UNK_? - (fVar10 * fVar5 + fVar11)) * fVar15;
  RStack_17.m_Origin.x = torusCenter->x;
  RStack_17.m_Origin.y = torusCenter->y;
  fVar9 = RStack_17.m_Origin.x - fVar16 * fVar2;
  fVar11 = RStack_17.m_Origin.y - fVar6 * fVar2;
  fVar10 = torusCenter->z - fVar4 * fVar2;
  fVar7 = fVar6 * fVar2 + RStack_17.m_Origin.y;
  fVar15 = fVar4 * fVar2 + torusCenter->z;
  fVar2 = fVar16 * fVar2 + RStack_17.m_Origin.x;
  VStack_18.z = fVar15 - fVar10;
  VStack_18.y = fVar7 - fVar11;
  VStack_18.x = fVar2 - fVar9;
  fVar5 = (float)FUN_?(&VStack_18);
  RStack_17.m_Origin.x = (ray->m_Origin).x;
  RStack_17.m_Origin.y = (ray->m_Origin).y;
  RStack_17._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_18.y = fVar7;
  VStack_18.x = fVar2;
  VStack_19.y = fVar11;
  VStack_19.x = fVar9;
  RStack_17.m_Direction.y = (ray->m_Direction).y;
  RStack_17.m_Direction.z = (ray->m_Direction).z;
  VStack_18.z = fVar15;
  VStack_19.z = fVar10;
  bVar20 = CylinderMath::CylinderMath_Raycast_1
                     (&RStack_17,t,&VStack_19,&VStack_18,fVar3 + torusCoreRadius,fVar5,
                      (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  if (bVar20 == 0) {
code_?:
    bVar20 = 0;
  }
  else {
    fVar5 = *t;
    fVar3 = torusCoreRadius - fVar3;
    uVar21 = (ray->m_Direction).x;
    uVar22 = (ray->m_Direction).y;
    RStack_17.m_Origin.x = (ray->m_Origin).x;
    RStack_17.m_Origin.y = (ray->m_Origin).y;
    fVar23 = (float)uVar21 * fVar5 + RStack_17.m_Origin.x;
    fVar14 = (float)uVar22 * fVar5 + RStack_17.m_Origin.y;
    fVar24 = (ray->m_Direction).z * fVar5 + (ray->m_Origin).z;
    VStack_19.y = fVar6;
    VStack_19.x = fVar16;
    VStack_19.z = fVar4;
    fVar5 = (float)FUN_?(&VStack_19);
    if (_UNK_? < fVar5) {
      VStack_18.x = fVar16 / fVar5;
      fVar4 = fVar4 / fVar5;
      VStack_18.y = fVar6 / fVar5;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_18.x = (pVVar8->zeroVector).x;
      VStack_18.y = (pVVar8->zeroVector).y;
      fVar4 = (pVVar8->zeroVector).z;
    }
    uVar25 = torusCenter->x;
    uVar26 = torusCenter->y;
    fVar5 = (float)((uint)(VStack_18.y * (float)uVar26 + VStack_18.x * (float)uVar25 +
                           fVar4 * torusCenter->z) ^ _UNK_?) +
             fVar14 * VStack_18.y + fVar23 * VStack_18.x + fVar24 * fVar4;
    RStack_17.m_Origin.x = torusCenter->x;
    RStack_17.m_Origin.y = torusCenter->y;
    VStack_18.x = (fVar23 - fVar5 * VStack_18.x) - RStack_17.m_Origin.x;
    VStack_18.z = (fVar24 - fVar5 * fVar4) - torusCenter->z;
    VStack_18.y = (fVar14 - fVar5 * VStack_18.y) - RStack_17.m_Origin.y;
    fVar4 = (float)FUN_?(&VStack_18);
    if (fVar4 < fVar3) {
      RStack_17.m_Direction.y = (ray->m_Direction).y;
      RStack_17.m_Direction.z = (ray->m_Direction).z;
      VStack_19.y = fVar14;
      VStack_19.x = fVar23;
      RStack_17.m_Origin.x = (ray->m_Origin).x;
      RStack_17.m_Origin.y = (ray->m_Origin).y;
      RStack_17._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      VStack_19.z = fVar24;
      pRVar27 = RayEx::RayEx_Mirror(aRStack_28,&RStack_17,&VStack_19,(MethodInfo *)0x0);
      uVar29._0_4_ = (pRVar27->m_Direction).y;
      uVar29._4_4_ = (pRVar27->m_Direction).z;
      fVar4 = (pRVar27->m_Origin).x;
      fVar5 = (pRVar27->m_Origin).y;
      fVar6 = (pRVar27->m_Origin).z;
      fVar16 = (pRVar27->m_Direction).x;
      VStack_19.z = fVar15 - fVar10;
      VStack_19.y = fVar7 - fVar11;
      VStack_19.x = fVar2 - fVar9;
      _fStack_c8 = uVar29;
      fVar14 = (float)FUN_?(&VStack_19);
      VStack_19.y = fVar7;
      VStack_19.x = fVar2;
      RStack_17.m_Origin.y = fVar11;
      RStack_17.m_Origin.x = fVar9;
      RStack_17.m_Origin.z = fVar10;
      VStack_19.z = fVar15;
      aRStack_28[0].m_Origin.x = fVar4;
      aRStack_28[0].m_Origin.y = fVar5;
      aRStack_28[0].m_Origin.z = fVar6;
      aRStack_28[0].m_Direction.x = fVar16;
      aRStack_28[0].m_Direction._4_8_ = uVar29;
      bVar20 = CylinderMath::CylinderMath_RaycastNoCaps_1
                         (aRStack_28,t,&RStack_17.m_Origin,&VStack_19,fVar3,fVar14,
                          (CylinderEpsilon)0x0,(MethodInfo *)0x0);
      if (bVar20 == 0) goto code_?;
      fVar7 = *t;
      uVar30 = (ray->m_Origin).x;
      VStack_18.x = (float)uVar30 - (fVar16 * fVar7 + fVar4);
      VStack_18.z = (ray->m_Origin).z - (fStack_31 * fVar7 + fVar6);
      VStack_18.y = (ray->m_Origin).y - (fStack_32 * fVar7 + fVar5);
      fVar4 = (float)FUN_?(&VStack_18);
      *t = fVar4;
    }
    bVar20 = 1;
  }
  return bVar20;
}

