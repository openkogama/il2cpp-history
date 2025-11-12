
/* List`1[UnityEngine.Vector3] CalcExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_CalcExtentPoints(Vector3 *center,float cylinderRadius,Quaternion *cylinderRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
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
  fVar1 = cylinderRotation->x;
  fVar2 = cylinderRotation->y;
  fVar3 = cylinderRotation->z;
  fVar4 = cylinderRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar1 * (fVar1 + fVar1);
  PStack_8.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_8.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar9 = (pVVar5->rightVector).z;
  fVar10 = fVar4 * (fVar1 + fVar1);
  fVar11 = fVar2 + fVar2;
  fVar12 = (1.0 - (fVar3 * fVar6 + fVar2 * fVar11)) * (float)PStack_8.Quadrant + (fVar1 * fVar11 - fVar4 * fVar6) * (float)PStack_8.FirstAxisSign + (fVar4 * fVar11 + fVar1 * fVar6) * fVar9;
  fVar3 = (1.0 - (fVar3 * fVar6 + fVar7)) * (float)PStack_8.FirstAxisSign + (fVar4 * fVar6 + fVar1 * fVar11) * (float)PStack_8.Quadrant + (fVar2 * fVar6 - fVar10) * fVar9;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar11) * (float)PStack_8.Quadrant + (fVar10 + fVar2 * fVar6) * (float)PStack_8.FirstAxisSign + (1.0 - (fVar2 * fVar11 + fVar7)) * fVar9;
  fStack_13 = cylinderRotation->x;
  fStack_14 = cylinderRotation->y;
  fStack_15 = cylinderRotation->z;
  fStack_16 = cylinderRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_8.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_8.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fVar4 = fStack_15 + fStack_15;
  fVar10 = fStack_13 * (fStack_13 + fStack_13);
  fVar9 = fStack_14 + fStack_14;
  fVar6 = fStack_16 * fVar4;
  fVar11 = fStack_16 * (fStack_13 + fStack_13);
  fVar2 = (pVVar5->forwardVector).z;
  fVar7 = (1.0 - (fStack_15 * fVar4 + fStack_14 * fVar9)) * (float)PStack_8.Quadrant + (fStack_13 * fVar9 - fVar6) * (float)PStack_8.FirstAxisSign + (fStack_16 * fVar9 + fStack_13 * fVar4) * fVar2;
  fVar17 = (1.0 - (fStack_15 * fVar4 + fVar10)) * (float)PStack_8.FirstAxisSign + (fVar6 + fStack_13 * fVar9) * (float)PStack_8.Quadrant + (fStack_14 * fVar4 - fVar11) * fVar2;
  fVar11 = (fStack_13 * fVar4 - fStack_16 * fVar9) * (float)PStack_8.Quadrant + (fVar11 + fStack_14 * fVar4) * (float)PStack_8.FirstAxisSign + (1.0 - (fStack_14 * fVar9 + fVar10)) * fVar2;
  fStack_13 = fVar6;
  fStack_14 = fStack_16;
  fStack_15 = fStack_16;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_8.Quadrant = (int32_t)center->x;
  PStack_8.FirstAxisSign = (int32_t)center->y;
  fVar2 = fVar12 * cylinderRadius + (float)PStack_8.Quadrant;
  fVar4 = fVar3 * cylinderRadius + (float)PStack_8.FirstAxisSign;
  fVar9 = fVar1 * cylinderRadius + center->z;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar9;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)center->x;
    PStack_8.FirstAxisSign = (int32_t)center->y;
    fVar4 = (float)PStack_8.Quadrant - fVar7 * cylinderRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar17 * cylinderRadius;
    fVar9 = center->z - fVar11 * cylinderRadius;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar9;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar2;
      PStack_8.Quadrant = (int32_t)fVar4;
      PStack_8.SecondAxisSign = (int32_t)fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)center->x;
    PStack_8.FirstAxisSign = (int32_t)center->y;
    fVar4 = (float)PStack_8.Quadrant - fVar12 * cylinderRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar3 * cylinderRadius;
    fVar1 = center->z - fVar1 * cylinderRadius;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar1;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar2;
      PStack_8.Quadrant = (int32_t)fVar4;
      PStack_8.SecondAxisSign = (int32_t)fVar1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)center->x;
    PStack_8.FirstAxisSign = (int32_t)center->y;
    fVar2 = fVar7 * cylinderRadius + (float)PStack_8.Quadrant;
    fVar3 = fVar17 * cylinderRadius + (float)PStack_8.FirstAxisSign;
    fVar1 = fVar11 * cylinderRadius + center->z;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar21 = (this->fields)._size;
      if (uVar21 < (uint)pPVar20->max_length) {
        (this->fields)._size = uVar21 + 1;
        if ((uint)pPVar20->max_length <= uVar21) {
code_?:
          FUN_?();
          pcVar22 = (code *)swi(3);
          pLVar23 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
          return pLVar23;
        }
        pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar2;
        pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar3;
        pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_8.FirstAxisSign = (int32_t)fVar3;
        PStack_8.Quadrant = (int32_t)fVar2;
        PStack_8.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  pLVar23 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
  return pLVar23;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint(Vector3 *point,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  uVar1 = cylinderAxisPt1->x;
  uVar2 = cylinderAxisPt1->y;
  aVStack_3[0].x = cylinderAxisPt0->x;
  aVStack_3[0].y = cylinderAxisPt0->y;
  VStack_4.z = cylinderAxisPt1->z - cylinderAxisPt0->z;
  VStack_4.y = (float)uVar2 - aVStack_3[0].y;
  VStack_4.x = (float)uVar1 - aVStack_3[0].x;
  cylinderHeight = (float)FUN_?(&VStack_4);
  VStack_4.x = cylinderAxisPt1->x;
  VStack_4.y = cylinderAxisPt1->y;
  VStack_4.z = cylinderAxisPt1->z;
  VStack_5.x = cylinderAxisPt0->x;
  VStack_5.y = cylinderAxisPt0->y;
  VStack_5.z = cylinderAxisPt0->z;
  aVStack_3[0].x = point->x;
  aVStack_3[0].y = point->y;
  aVStack_3[0].z = point->z;
  bVar6 = CylinderMath_ContainsPoint_1(aVStack_3,&VStack_5,&VStack_4,cylinderRadius,cylinderHeight,epsilon,(MethodInfo *)0x0);
  return bVar6;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint_1(Vector3 *point,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  uVar1 = cylinderAxisPt1->x;
  uVar2 = cylinderAxisPt1->y;
  uVar3 = cylinderAxisPt0->x;
  uVar4 = cylinderAxisPt0->y;
  fVar5 = cylinderAxisPt1->z - cylinderAxisPt0->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (1e-05 < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,((float)uVar1 - (float)uVar3) / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  uVar10 = cylinderAxisPt0->x;
  uVar11 = cylinderAxisPt0->y;
  uVar12 = point->x;
  uVar13 = point->y;
  fVar8 = ((float)uVar13 - (float)uVar11) * uStack_6._4_4_ + ((float)uVar12 - (float)uVar10) * (float)uStack_6 + (point->z - cylinderAxisPt0->z) * fVar5;
  if ((fVar8 < -epsilon._vertEps) || (epsilon._vertEps + cylinderHeight < fVar8)) {
    bVar14 = false;
  }
  else {
    uVar15 = cylinderAxisPt0->x;
    uVar16 = cylinderAxisPt0->y;
    uVar17 = point->x;
    uVar18 = point->y;
    fStack_7 = (fVar5 * fVar8 + cylinderAxisPt0->z) - point->z;
    uStack_6 = CONCAT44((uStack_6._4_4_ * fVar8 + (float)uVar16) - (float)uVar18,((float)uStack_6 * fVar8 + (float)uVar15) - (float)uVar17);
    fVar5 = (float)FUN_?(&uStack_6);
    bVar14 = fVar5 <= epsilon._hrzEps + cylinderRadius;
  }
  return bVar14;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast(Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  VStack_1.x = cylinderAxisPt0->x;
  VStack_1.y = cylinderAxisPt0->y;
  uVar2 = cylinderAxisPt1->x;
  uVar3 = cylinderAxisPt1->y;
  VStack_4.z = cylinderAxisPt1->z - cylinderAxisPt0->z;
  VStack_4.y = (float)uVar3 - VStack_1.y;
  VStack_4.x = (float)uVar2 - VStack_1.x;
  cylinderHeight = (float)FUN_?(&VStack_4);
  VStack_4.x = cylinderAxisPt1->x;
  VStack_4.y = cylinderAxisPt1->y;
  VStack_4.z = cylinderAxisPt1->z;
  RStack_5.m_Direction.y = (ray->m_Direction).y;
  RStack_5.m_Direction.z = (ray->m_Direction).z;
  VStack_1.x = cylinderAxisPt0->x;
  VStack_1.y = cylinderAxisPt0->y;
  RStack_5.m_Origin.x = (ray->m_Origin).x;
  RStack_5.m_Origin.y = (ray->m_Origin).y;
  RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_1.z = cylinderAxisPt0->z;
  bVar6 = CylinderMath_Raycast_1(&RStack_5,t,&VStack_1,&VStack_4,cylinderRadius,cylinderHeight,epsilon,(MethodInfo *)0x0);
  return bVar6;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps(Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

{
  VStack_1.x = cylinderAxisPt0->x;
  VStack_1.y = cylinderAxisPt0->y;
  uVar2 = cylinderAxisPt1->x;
  uVar3 = cylinderAxisPt1->y;
  VStack_4.z = cylinderAxisPt1->z - cylinderAxisPt0->z;
  VStack_4.y = (float)uVar3 - VStack_1.y;
  VStack_4.x = (float)uVar2 - VStack_1.x;
  cylinderHeight = (float)FUN_?(&VStack_4);
  VStack_4.x = cylinderAxisPt1->x;
  VStack_4.y = cylinderAxisPt1->y;
  VStack_4.z = cylinderAxisPt1->z;
  RStack_5.m_Direction.y = (ray->m_Direction).y;
  RStack_5.m_Direction.z = (ray->m_Direction).z;
  VStack_1.x = cylinderAxisPt0->x;
  VStack_1.y = cylinderAxisPt0->y;
  RStack_5.m_Origin.x = (ray->m_Origin).x;
  RStack_5.m_Origin.y = (ray->m_Origin).y;
  RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_1.z = cylinderAxisPt0->z;
  bVar6 = CylinderMath_RaycastNoCaps_1(&RStack_5,t,&VStack_1,&VStack_4,cylinderRadius,cylinderHeight,epsilon,(MethodInfo *)0x0);
  return bVar6;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps_1(Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  uVar1 = cylinderAxisPt1->x;
  uVar2 = cylinderAxisPt1->y;
  uVar3 = cylinderAxisPt0->x;
  uVar4 = cylinderAxisPt0->y;
  fVar5 = cylinderAxisPt1->z - cylinderAxisPt0->z;
  *t = 0.0;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (1e-05 < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,((float)uVar1 - (float)uVar3) / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  fVar8 = cylinderHeight + epsilon._vertEps + epsilon._vertEps;
  if (1e-06 <= fVar8) {
    uVar10 = cylinderAxisPt0->x;
    uVar11 = cylinderAxisPt0->y;
    fVar12 = (float)uStack_6;
    fVar13 = uStack_6._4_4_;
    fVar14 = (float)uVar10 - epsilon._vertEps * (float)uStack_6;
    fVar15 = cylinderAxisPt0->z - epsilon._vertEps * fVar5;
    fVar16 = (float)uVar11 - epsilon._vertEps * uStack_6._4_4_;
    uVar17._0_4_ = (ray->m_Direction).x;
    uVar17._4_4_ = (ray->m_Direction).y;
    fVar18 = (ray->m_Direction).z;
    fVar19 = (float)uVar17._4_4_ * fVar5 - fVar18 * uStack_6._4_4_;
    fVar20 = fVar18 * (float)uStack_6 - (float)(undefined4)uVar17 * fVar5;
    fVar21 = (float)(undefined4)uVar17 * uStack_6._4_4_ - (float)uVar17._4_4_ * (float)uStack_6;
    uVar22 = (ray->m_Origin).x;
    uVar23 = (ray->m_Origin).y;
    fVar24 = (float)uVar22 - fVar14;
    fVar25 = (ray->m_Origin).z - fVar15;
    fVar18 = (float)uVar23 - fVar16;
    fVar26 = fVar18 * fVar5 - fVar25 * uStack_6._4_4_;
    fVar27 = fVar24 * uStack_6._4_4_ - fVar18 * (float)uStack_6;
    fVar24 = fVar25 * (float)uStack_6 - fVar24 * fVar5;
    fVar18 = fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21;
    fVar20 = fVar24 * fVar20 + fVar26 * fVar19 + fVar21 * fVar27;
    fVar20 = fVar20 + fVar20;
    fVar26 = fVar20 * fVar20 - ((fVar24 * fVar24 + fVar26 * fVar26 + fVar27 * fVar27) - (cylinderRadius + epsilon._hrzEps) * (cylinderRadius + epsilon._hrzEps)) * fVar18 * 4.0;
    if ((0.0 <= fVar26) && (fVar18 = fVar18 + fVar18, fVar18 != 0.0)) {
      if (fVar26 == 0.0) {
        fVar18 = -fVar20 / fVar18;
        fVar24 = fVar18;
      }
      else {
        if (fVar26 < 0.0) {
          uStack_6 = uVar17;
          fVar26 = (float)FUN_?(fVar26);
        }
        else {
          fVar26 = SQRT(fVar26);
        }
        fVar24 = (fVar26 + -fVar20) / fVar18;
        fVar26 = (-fVar20 - fVar26) / fVar18;
        fVar18 = fVar26;
        if (fVar26 < fVar24) {
          fVar18 = fVar24;
          fVar24 = fVar26;
        }
      }
      if ((0.0 <= fVar24) || (fVar24 = fVar18, 0.0 <= fVar18)) {
        *t = fVar24;
        uVar28 = (ray->m_Direction).x;
        uVar29 = (ray->m_Direction).y;
        uVar30 = (ray->m_Origin).x;
        uVar31 = (ray->m_Origin).y;
        fVar5 = (((float)uVar29 * fVar24 + (float)uVar31) - fVar16) * fVar13 + (((float)uVar28 * fVar24 + (float)uVar30) - fVar14) * fVar12 + (((ray->m_Direction).z * fVar24 + (ray->m_Origin).z) - fVar15) * fVar5;
        if ((0.0 <= fVar5) && (fVar5 <= fVar8)) {
          return 1;
        }
        *t = 0.0;
      }
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast_1(Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  fVar1 = cylinderRadius + epsilon._hrzEps;
  uVar2 = cylinderAxisPt0->x;
  uVar3 = cylinderAxisPt0->y;
  fVar4 = cylinderAxisPt1->z - cylinderAxisPt0->z;
  uVar5 = cylinderAxisPt1->x;
  uVar6 = cylinderAxisPt1->y;
  *t = 0.0;
  uStack_7 = CONCAT44((float)uVar6 - (float)uVar3,(float)uVar5 - (float)uVar2);
  fStack_8 = fVar4;
  fVar9 = (float)FUN_?(&uStack_7);
  if (1e-05 < fVar9) {
    fVar4 = fVar4 / fVar9;
    uStack_10 = CONCAT44(((float)uVar6 - (float)uVar3) / fVar9,((float)uVar5 - (float)uVar2) / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_10._0_4_ = (pVVar11->zeroVector).x;
    uStack_10._4_4_ = (pVVar11->zeroVector).y;
    fVar4 = (pVVar11->zeroVector).z;
  }
  fVar9 = cylinderHeight + epsilon._vertEps + epsilon._vertEps;
  if (fVar9 < 1e-06) {
    return 0;
  }
  uVar12 = cylinderAxisPt0->x;
  uVar13 = cylinderAxisPt0->y;
  fVar14 = (float)uVar12 - epsilon._vertEps * (float)uStack_10;
  fVar15 = (float)uVar13 - epsilon._vertEps * uStack_10._4_4_;
  fVar16 = cylinderAxisPt0->z - epsilon._vertEps * fVar4;
  uVar17 = cylinderAxisPt1->x;
  uVar18 = cylinderAxisPt1->y;
  fVar19 = epsilon._vertEps * (float)uStack_10 + (float)uVar17;
  fVar20 = epsilon._vertEps * fVar4 + cylinderAxisPt1->z;
  fVar21 = epsilon._vertEps * uStack_10._4_4_ + (float)uVar18;
  uStack_7 = uStack_10;
  bVar22 = false;
  bVar23 = false;
  fStack_8 = fVar4;
  fVar24 = (float)FUN_?(&uStack_7);
  if (1e-05 < fVar24) {
    fVar25 = fVar4 / fVar24;
    uVar26 = CONCAT44(uStack_10._4_4_ / fVar24,(float)uStack_10 / fVar24);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26._0_4_ = (pVVar11->zeroVector).x;
    uVar26._4_4_ = (pVVar11->zeroVector).y;
    fVar25 = (pVVar11->zeroVector).z;
  }
  fVar24 = (ray->m_Origin).z;
  uStack_27._0_4_ = (ray->m_Direction).y;
  uStack_27._4_4_ = (ray->m_Direction).z;
  uStack_7._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
  uStack_7._0_4_ = (float)uVar26;
  fVar28 = (float)(undefined4)uStack_27 * uStack_7._4_4_ + (ray->m_Direction).x * (float)uStack_7 + (float)uStack_27._4_4_ * fVar25;
  fVar29 = (ray->m_Origin).x * (float)uStack_7;
  fVar30 = (ray->m_Origin).y * uStack_7._4_4_;
  fVar31 = fVar15 * uStack_7._4_4_;
  fVar32 = fVar14 * (float)uStack_7;
  if (cRam_? == '\0') {
    uStack_7 = uVar26;
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar33 = ABS(fVar28);
  if (ABS(fVar28) <= 0.0) {
    fVar33 = 0.0;
  }
  fVar34 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
  fVar35 = fVar33 * 1e-06;
  if (fVar33 * 1e-06 <= fVar34) {
    fVar35 = fVar34;
  }
  if (ABS(0.0 - fVar28) < fVar35) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = (-(fVar30 + fVar29 + fVar24 * fVar25) - -(fVar31 + fVar32 + fVar16 * fVar25)) / fVar28;
    if (0.0 < fVar28) {
      uVar36 = (ray->m_Direction).x;
      uVar37 = (ray->m_Direction).y;
      uVar38 = (ray->m_Origin).x;
      uVar39 = (ray->m_Origin).y;
      fVar25 = ((float)uVar36 * fVar28 + (float)uVar38) - fVar14;
      fVar29 = ((float)uVar37 * fVar28 + (float)uVar39) - fVar15;
      fVar24 = ((ray->m_Direction).z * fVar28 + (ray->m_Origin).z) - fVar16;
      bVar22 = fVar29 * fVar29 + fVar25 * fVar25 + fVar24 * fVar24 <= fVar1 * fVar1;
    }
  }
  uStack_7 = uStack_10;
  fStack_8 = fVar4;
  fVar24 = (float)FUN_?(&uStack_7);
  if (1e-05 < fVar24) {
    fVar25 = fVar4 / fVar24;
    uVar40 = CONCAT44(uStack_10._4_4_ / fVar24,(float)uStack_10 / fVar24);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40._0_4_ = (pVVar11->zeroVector).x;
    uVar40._4_4_ = (pVVar11->zeroVector).y;
    fVar25 = (pVVar11->zeroVector).z;
  }
  fVar24 = (ray->m_Origin).z;
  uVar41 = (ray->m_Direction).y;
  uStack_7._4_4_ = (float)((ulonglong)uVar40 >> 0x20);
  uStack_7._0_4_ = (float)uVar40;
  fVar33 = (float)uVar41 * uStack_7._4_4_ + (ray->m_Direction).x * (float)uStack_7 + (ray->m_Direction).z * fVar25;
  fVar30 = (ray->m_Origin).y * uStack_7._4_4_;
  fVar31 = fVar21 * uStack_7._4_4_;
  fVar29 = (ray->m_Origin).x * (float)uStack_7;
  fVar32 = fVar19 * (float)uStack_7;
  if (cRam_? == '\0') {
    uStack_7 = uVar40;
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar35 = ABS(fVar33);
  if (ABS(fVar33) <= 0.0) {
    fVar35 = 0.0;
  }
  fVar42 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
  fVar34 = fVar35 * 1e-06;
  if (fVar35 * 1e-06 <= fVar42) {
    fVar34 = fVar42;
  }
  if (ABS(0.0 - fVar33) < fVar34) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = (-(fVar30 + fVar29 + fVar24 * fVar25) - -(fVar31 + fVar32 + fVar20 * fVar25)) / fVar33;
    if (0.0 < fVar33) {
      uVar43 = (ray->m_Direction).x;
      uVar44 = (ray->m_Direction).y;
      uVar45 = (ray->m_Origin).x;
      uVar46 = (ray->m_Origin).y;
      fVar19 = ((float)uVar43 * fVar33 + (float)uVar45) - fVar19;
      fVar21 = ((float)uVar44 * fVar33 + (float)uVar46) - fVar21;
      fVar20 = ((ray->m_Direction).z * fVar33 + (ray->m_Origin).z) - fVar20;
      bVar23 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20 <= fVar1 * fVar1;
    }
  }
  uStack_7._0_4_ = (ray->m_Direction).x;
  uStack_7._4_4_ = (ray->m_Direction).y;
  fVar19 = (ray->m_Direction).z;
  fVar32 = uStack_7._4_4_ * fVar4 - fVar19 * uStack_10._4_4_;
  fVar24 = fVar19 * (float)uStack_10 - (float)uStack_7 * fVar4;
  fVar25 = (float)uStack_7 * uStack_10._4_4_ - uStack_7._4_4_ * (float)uStack_10;
  uVar47 = (ray->m_Origin).y;
  uVar48 = (ray->m_Origin).x;
  fVar19 = (ray->m_Origin).z - fVar16;
  fVar20 = ((float)uVar47 - fVar15) * fVar4 - fVar19 * uStack_10._4_4_;
  fVar21 = ((float)uVar48 - fVar14) * uStack_10._4_4_ - ((float)uVar47 - fVar15) * (float)uStack_10;
  fVar29 = fVar19 * (float)uStack_10 - ((float)uVar48 - fVar14) * fVar4;
  fVar19 = fVar24 * fVar24 + fVar32 * fVar32 + fVar25 * fVar25;
  fVar24 = fVar29 * fVar24 + fVar20 * fVar32 + fVar25 * fVar21;
  fVar24 = fVar24 + fVar24;
  fVar1 = fVar24 * fVar24 - ((fVar29 * fVar29 + fVar20 * fVar20 + fVar21 * fVar21) - fVar1 * fVar1) * fVar19 * 4.0;
  if (fVar1 < 0.0) {
    return 0;
  }
  fVar19 = fVar19 + fVar19;
  if (fVar19 == 0.0) {
    return 0;
  }
  if (fVar1 == 0.0) {
    fVar19 = -fVar24 / fVar19;
    fVar20 = fVar19;
  }
  else {
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar20 = (fVar1 + -fVar24) / fVar19;
    fVar1 = (-fVar24 - fVar1) / fVar19;
    fVar19 = fVar1;
    if (fVar1 < fVar20) {
      fVar19 = fVar20;
      fVar20 = fVar1;
    }
  }
  if ((fVar20 < 0.0) && (fVar20 = fVar19, fVar19 < 0.0)) {
    return 0;
  }
  *t = fVar20;
  uVar49 = (ray->m_Direction).x;
  uVar50 = (ray->m_Direction).y;
  uVar51 = (ray->m_Origin).x;
  uVar52 = (ray->m_Origin).y;
  fVar4 = (((float)uVar50 * fVar20 + (float)uVar52) - fVar15) * uStack_10._4_4_ + (((float)uVar49 * fVar20 + (float)uVar51) - fVar14) * (float)uStack_10 + (((ray->m_Direction).z * fVar20 + (ray->m_Origin).z) - fVar16) * fVar4;
  if (fVar4 < 0.0) {
    if (!bVar23 && !bVar22) goto code_?;
    *t = 3.4028235e+38;
    if (bVar23) {
      *t = fVar33;
    }
    if ((bVar22) && (fVar28 < *t)) {
      *t = fVar28;
    }
  }
  if (fVar4 <= fVar9) {
    return 1;
  }
  if (bVar23 || bVar22) {
    *t = 3.4028235e+38;
    if (bVar23) {
      *t = fVar33;
    }
    if (!bVar22) {
      return 1;
    }
    if (*t <= fVar28) {
      return 1;
    }
    *t = fVar28;
    return 1;
  }
code_?:
  *t = 0.0;
  return 0;
}

