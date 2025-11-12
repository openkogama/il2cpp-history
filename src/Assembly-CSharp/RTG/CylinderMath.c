
/* List`1[UnityEngine.Vector3] CalcExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_CalcExtentPoints
          (Vector3 *center,float cylinderRadius,Quaternion *cylinderRotation,MethodInfo *method)

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
  fVar5 = _UNK_?;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = fVar3 + fVar3;
  fVar8 = fVar1 * (fVar1 + fVar1);
  PStack_9.Quadrant = (int32_t)(pVVar6->rightVector).x;
  PStack_9.FirstAxisSign = (int32_t)(pVVar6->rightVector).y;
  fVar10 = (pVVar6->rightVector).z;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar12 = fVar2 + fVar2;
  fVar13 = (_UNK_? - (fVar3 * fVar7 + fVar2 * fVar12)) * (float)PStack_9.Quadrant +
           (fVar1 * fVar12 - fVar4 * fVar7) * (float)PStack_9.FirstAxisSign +
           (fVar4 * fVar12 + fVar1 * fVar7) * fVar10;
  fVar3 = (_UNK_? - (fVar3 * fVar7 + fVar8)) * (float)PStack_9.FirstAxisSign +
           (fVar4 * fVar7 + fVar1 * fVar12) * (float)PStack_9.Quadrant +
           (fVar2 * fVar7 - fVar11) * fVar10;
  fVar1 = (fVar1 * fVar7 - fVar4 * fVar12) * (float)PStack_9.Quadrant +
           (fVar11 + fVar2 * fVar7) * (float)PStack_9.FirstAxisSign +
           (_UNK_? - (fVar2 * fVar12 + fVar8)) * fVar10;
  fStack_14 = cylinderRotation->x;
  fStack_15 = cylinderRotation->y;
  fStack_16 = cylinderRotation->z;
  fStack_17 = cylinderRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_9.Quadrant = (int32_t)(pVVar6->forwardVector).x;
  PStack_9.FirstAxisSign = (int32_t)(pVVar6->forwardVector).y;
  fVar4 = fStack_16 + fStack_16;
  fVar11 = fStack_14 * (fStack_14 + fStack_14);
  fVar10 = fStack_15 + fStack_15;
  fVar7 = fStack_17 * fVar4;
  fVar12 = fStack_17 * (fStack_14 + fStack_14);
  fVar2 = (pVVar6->forwardVector).z;
  fVar8 = (fVar5 - (fStack_16 * fVar4 + fStack_15 * fVar10)) * (float)PStack_9.Quadrant +
           (fStack_14 * fVar10 - fVar7) * (float)PStack_9.FirstAxisSign +
           (fStack_17 * fVar10 + fStack_14 * fVar4) * fVar2;
  fVar18 = (_UNK_? - (fStack_16 * fVar4 + fVar11)) * (float)PStack_9.FirstAxisSign +
           (fVar7 + fStack_14 * fVar10) * (float)PStack_9.Quadrant +
           (fStack_15 * fVar4 - fVar12) * fVar2;
  fVar5 = (fStack_14 * fVar4 - fStack_17 * fVar10) * (float)PStack_9.Quadrant +
           (fVar12 + fStack_15 * fVar4) * (float)PStack_9.FirstAxisSign +
           (_UNK_? - (fStack_15 * fVar10 + fVar11)) * fVar2;
  fStack_14 = fVar7;
  fStack_15 = fStack_17;
  fStack_16 = fStack_17;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar19 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_9.Quadrant = (int32_t)center->x;
  PStack_9.FirstAxisSign = (int32_t)center->y;
  fVar2 = fVar13 * cylinderRadius + (float)PStack_9.Quadrant;
  fVar4 = fVar3 * cylinderRadius + (float)PStack_9.FirstAxisSign;
  fVar10 = fVar1 * cylinderRadius + center->z;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar20 = &(this->fields)._version;
    *piVar20 = *piVar20 + 1;
    pPVar21 = (this->fields)._items;
    if (pPVar21 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar22 = (this->fields)._size;
    if (uVar22 < (uint)pPVar21->max_length) {
      (this->fields)._size = uVar22 + 1;
      if ((uint)pPVar21->max_length <= uVar22) goto code_?;
      pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar2;
      pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar4;
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar10;
    }
    else {
      PStack_9.FirstAxisSign = (int32_t)fVar4;
      PStack_9.Quadrant = (int32_t)fVar2;
      PStack_9.SecondAxisSign = (int32_t)fVar10;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_9,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_9.Quadrant = (int32_t)center->x;
    PStack_9.FirstAxisSign = (int32_t)center->y;
    fVar4 = (float)PStack_9.Quadrant - fVar8 * cylinderRadius;
    fVar2 = (float)PStack_9.FirstAxisSign - fVar18 * cylinderRadius;
    fVar10 = center->z - fVar5 * cylinderRadius;
    piVar20 = &(this->fields)._version;
    *piVar20 = *piVar20 + 1;
    pPVar21 = (this->fields)._items;
    if (pPVar21 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar22 = (this->fields)._size;
    if (uVar22 < (uint)pPVar21->max_length) {
      (this->fields)._size = uVar22 + 1;
      if ((uint)pPVar21->max_length <= uVar22) goto code_?;
      pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar4;
      pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar2;
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar10;
    }
    else {
      PStack_9.FirstAxisSign = (int32_t)fVar2;
      PStack_9.Quadrant = (int32_t)fVar4;
      PStack_9.SecondAxisSign = (int32_t)fVar10;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_9,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_9.Quadrant = (int32_t)center->x;
    PStack_9.FirstAxisSign = (int32_t)center->y;
    fVar4 = (float)PStack_9.Quadrant - fVar13 * cylinderRadius;
    fVar2 = (float)PStack_9.FirstAxisSign - fVar3 * cylinderRadius;
    fVar1 = center->z - fVar1 * cylinderRadius;
    piVar20 = &(this->fields)._version;
    *piVar20 = *piVar20 + 1;
    pPVar21 = (this->fields)._items;
    if (pPVar21 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar22 = (this->fields)._size;
    if (uVar22 < (uint)pPVar21->max_length) {
      (this->fields)._size = uVar22 + 1;
      if ((uint)pPVar21->max_length <= uVar22) goto code_?;
      pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar4;
      pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar2;
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar1;
    }
    else {
      PStack_9.FirstAxisSign = (int32_t)fVar2;
      PStack_9.Quadrant = (int32_t)fVar4;
      PStack_9.SecondAxisSign = (int32_t)fVar1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_9,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_9.Quadrant = (int32_t)center->x;
    PStack_9.FirstAxisSign = (int32_t)center->y;
    fVar2 = fVar8 * cylinderRadius + (float)PStack_9.Quadrant;
    fVar3 = fVar18 * cylinderRadius + (float)PStack_9.FirstAxisSign;
    fVar1 = fVar5 * cylinderRadius + center->z;
    piVar20 = &(this->fields)._version;
    *piVar20 = *piVar20 + 1;
    pPVar21 = (this->fields)._items;
    if (pPVar21 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar22 = (this->fields)._size;
      if (uVar22 < (uint)pPVar21->max_length) {
        (this->fields)._size = uVar22 + 1;
        if ((uint)pPVar21->max_length <= uVar22) {
code_?:
          FUN_?();
          pcVar23 = (code *)swi(3);
          pLVar24 = (List_1_UnityEngine_Vector3_ *)(*pcVar23)();
          return pLVar24;
        }
        pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar2;
        pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar3;
        pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_9.FirstAxisSign = (int32_t)fVar3;
        PStack_9.Quadrant = (int32_t)fVar2;
        PStack_9.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_9,pMVar19->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  pLVar24 = (List_1_UnityEngine_Vector3_ *)(*pcVar23)();
  return pLVar24;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint
               (Vector3 *point,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

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
  bVar6 = CylinderMath_ContainsPoint_1
                    (aVStack_3,&VStack_5,&VStack_4,cylinderRadius,cylinderHeight,epsilon,
                     (MethodInfo *)0x0);
  return bVar6;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_ContainsPoint_1
               (Vector3 *point,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

{
  uVar1 = cylinderAxisPt1->x;
  uVar2 = cylinderAxisPt1->y;
  uVar3 = cylinderAxisPt0->x;
  uVar4 = cylinderAxisPt0->y;
  fVar5 = cylinderAxisPt1->z - cylinderAxisPt0->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,
                         ((float)uVar1 - (float)uVar3) / fVar8);
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
  fVar8 = ((float)uVar13 - (float)uVar11) * uStack_6._4_4_ +
           ((float)uVar12 - (float)uVar10) * (float)uStack_6 +
           (point->z - cylinderAxisPt0->z) * fVar5;
  if ((fVar8 < (float)((uint)epsilon._vertEps ^ _UNK_?)) ||
     (epsilon._vertEps + cylinderHeight < fVar8)) {
    bVar14 = false;
  }
  else {
    uVar15 = cylinderAxisPt0->x;
    uVar16 = cylinderAxisPt0->y;
    uVar17 = point->x;
    uVar18 = point->y;
    fStack_7 = (fVar5 * fVar8 + cylinderAxisPt0->z) - point->z;
    uStack_6 = CONCAT44((uStack_6._4_4_ * fVar8 + (float)uVar16) - (float)uVar18,
                         ((float)uStack_6 * fVar8 + (float)uVar15) - (float)uVar17);
    fVar5 = (float)FUN_?(&uStack_6);
    bVar14 = fVar5 <= epsilon._hrzEps + cylinderRadius;
  }
  return bVar14;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast
               (Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

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
  bVar6 = CylinderMath_Raycast_1
                    (&RStack_5,t,&VStack_1,&VStack_4,cylinderRadius,cylinderHeight,epsilon,
                     (MethodInfo *)0x0);
  return bVar6;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps
               (Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,CylinderEpsilon epsilon,MethodInfo *method)

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
  bVar6 = CylinderMath_RaycastNoCaps_1
                    (&RStack_5,t,&VStack_1,&VStack_4,cylinderRadius,cylinderHeight,epsilon,
                     (MethodInfo *)0x0);
  return bVar6;
}


/* Boolean RaycastNoCaps(Ray, Single ByRef, Vector3, Vector3, Single, Single, CylinderEpsilon) */

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_RaycastNoCaps_1
               (Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

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
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,
                         ((float)uVar1 - (float)uVar3) / fVar8);
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
  uVar10 = _UNK_?;
  fVar8 = cylinderHeight + epsilon._vertEps + epsilon._vertEps;
  if (_UNK_? <= fVar8) {
    uVar11 = cylinderAxisPt0->x;
    uVar12 = cylinderAxisPt0->y;
    fVar13 = (float)uStack_6;
    fVar14 = uStack_6._4_4_;
    fVar15 = (float)uVar11 - epsilon._vertEps * (float)uStack_6;
    fVar16 = cylinderAxisPt0->z - epsilon._vertEps * fVar5;
    fVar17 = (float)uVar12 - epsilon._vertEps * uStack_6._4_4_;
    uVar18._0_4_ = (ray->m_Direction).x;
    uVar18._4_4_ = (ray->m_Direction).y;
    fVar19 = (ray->m_Direction).z;
    fVar20 = (float)uVar18._4_4_ * fVar5 - fVar19 * uStack_6._4_4_;
    fVar21 = fVar19 * (float)uStack_6 - (float)(undefined4)uVar18 * fVar5;
    fVar22 = (float)(undefined4)uVar18 * uStack_6._4_4_ - (float)uVar18._4_4_ * (float)uStack_6;
    uVar23 = (ray->m_Origin).x;
    uVar24 = (ray->m_Origin).y;
    fVar25 = (float)uVar23 - fVar15;
    fVar26 = (ray->m_Origin).z - fVar16;
    fVar19 = (float)uVar24 - fVar17;
    fVar27 = fVar19 * fVar5 - fVar26 * uStack_6._4_4_;
    fVar19 = fVar25 * uStack_6._4_4_ - fVar19 * (float)uStack_6;
    fVar25 = fVar26 * (float)uStack_6 - fVar25 * fVar5;
    fVar26 = fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22;
    fVar21 = fVar25 * fVar21 + fVar27 * fVar20 + fVar22 * fVar19;
    fVar21 = fVar21 + fVar21;
    fVar19 = fVar21 * fVar21 -
             ((fVar25 * fVar25 + fVar27 * fVar27 + fVar19 * fVar19) -
             (cylinderRadius + epsilon._hrzEps) * (cylinderRadius + epsilon._hrzEps)) *
             fVar26 * _UNK_?;
    if ((0.0 <= fVar19) && (fVar26 = fVar26 + fVar26, fVar26 != 0.0)) {
      fVar27 = (float)((uint)fVar21 ^ _UNK_?);
      if (fVar19 == 0.0) {
        fVar27 = fVar27 / fVar26;
        fVar25 = fVar27;
      }
      else {
        if (fVar19 < 0.0) {
          uStack_6 = uVar18;
          fVar19 = (float)FUN_?(fVar19);
        }
        else {
          fVar19 = SQRT(fVar19);
        }
        fVar25 = (fVar19 + fVar27) / fVar26;
        fVar26 = ((float)((uint)fVar21 ^ uVar10) - fVar19) / fVar26;
        fVar27 = fVar26;
        if (fVar26 < fVar25) {
          fVar27 = fVar25;
          fVar25 = fVar26;
        }
      }
      if ((0.0 <= fVar25) || (fVar25 = fVar27, 0.0 <= fVar27)) {
        *t = fVar25;
        uVar28 = (ray->m_Direction).x;
        uVar29 = (ray->m_Direction).y;
        uVar30 = (ray->m_Origin).x;
        uVar31 = (ray->m_Origin).y;
        fVar5 = (((float)uVar29 * fVar25 + (float)uVar31) - fVar17) * fVar14 +
                 (((float)uVar28 * fVar25 + (float)uVar30) - fVar15) * fVar13 +
                 (((ray->m_Direction).z * fVar25 + (ray->m_Origin).z) - fVar16) * fVar5;
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

bool Assembly-CSharp.dll::RTG::CylinderMath::CylinderMath_Raycast_1
               (Ray *ray,float *t,Vector3 *cylinderAxisPt0,Vector3 *cylinderAxisPt1,
               float cylinderRadius,float cylinderHeight,CylinderEpsilon epsilon,MethodInfo *method)

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
  fVar10 = _UNK_?;
  if (_UNK_? < fVar9) {
    fVar4 = fVar4 / fVar9;
    uStack_11 = CONCAT44(((float)uVar6 - (float)uVar3) / fVar9,
                         ((float)uVar5 - (float)uVar2) / fVar9);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_11._0_4_ = (pVVar12->zeroVector).x;
    uStack_11._4_4_ = (pVVar12->zeroVector).y;
    fVar4 = (pVVar12->zeroVector).z;
  }
  fVar9 = cylinderHeight + epsilon._vertEps + epsilon._vertEps;
  if (fVar9 < _UNK_?) {
    return 0;
  }
  uVar13 = cylinderAxisPt0->x;
  uVar14 = cylinderAxisPt0->y;
  fVar15 = (float)uVar13 - epsilon._vertEps * (float)uStack_11;
  fVar16 = (float)uVar14 - epsilon._vertEps * uStack_11._4_4_;
  fVar17 = cylinderAxisPt0->z - epsilon._vertEps * fVar4;
  uVar18 = cylinderAxisPt1->x;
  uVar19 = cylinderAxisPt1->y;
  fVar20 = epsilon._vertEps * (float)uStack_11 + (float)uVar18;
  fVar21 = epsilon._vertEps * fVar4 + cylinderAxisPt1->z;
  fVar22 = epsilon._vertEps * uStack_11._4_4_ + (float)uVar19;
  uStack_7 = uStack_11;
  bVar23 = false;
  bVar24 = false;
  fStack_8 = fVar4;
  fVar25 = (float)FUN_?(&uStack_7);
  if (fVar10 < fVar25) {
    fVar10 = fVar4 / fVar25;
    uVar26 = CONCAT44(uStack_11._4_4_ / fVar25,(float)uStack_11 / fVar25);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26._0_4_ = (pVVar12->zeroVector).x;
    uVar26._4_4_ = (pVVar12->zeroVector).y;
    fVar10 = (pVVar12->zeroVector).z;
  }
  uStack_27._0_4_ = (ray->m_Direction).y;
  uStack_27._4_4_ = (ray->m_Direction).z;
  uStack_7._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
  uStack_7._0_4_ = (float)uVar26;
  fVar28 = (float)(undefined4)uStack_27 * uStack_7._4_4_ + (ray->m_Direction).x * (float)uStack_7
           + (float)uStack_27._4_4_ * fVar10;
  fVar25 = (float)((uint)((ray->m_Origin).y * uStack_7._4_4_ + (ray->m_Origin).x * (float)uStack_7
                         + (ray->m_Origin).z * fVar10) ^ _UNK_?);
  fVar10 = (float)((uint)(fVar16 * uStack_7._4_4_ + fVar15 * (float)uStack_7 + fVar17 * fVar10) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    uStack_7 = uVar26;
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar29 = _UNK_?;
  fVar30 = (float)((uint)fVar28 & _UNK_?);
  if ((float)((uint)fVar28 & _UNK_?) <= 0.0) {
    fVar30 = 0.0;
  }
  fVar31 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar32 = fVar30 * _UNK_?;
  if (fVar30 * _UNK_? <= fVar31) {
    fVar32 = fVar31;
  }
  if ((float)((uint)(0.0 - fVar28) & _UNK_?) < fVar32) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = (fVar25 - fVar10) / fVar28;
    if (0.0 < fVar28) {
      uVar33 = (ray->m_Direction).x;
      uVar34 = (ray->m_Direction).y;
      uVar35 = (ray->m_Origin).x;
      uVar36 = (ray->m_Origin).y;
      fVar25 = ((float)uVar33 * fVar28 + (float)uVar35) - fVar15;
      fVar30 = ((float)uVar34 * fVar28 + (float)uVar36) - fVar16;
      fVar10 = ((ray->m_Direction).z * fVar28 + (ray->m_Origin).z) - fVar17;
      bVar23 = fVar30 * fVar30 + fVar25 * fVar25 + fVar10 * fVar10 <= fVar1 * fVar1;
    }
  }
  uStack_7 = uStack_11;
  fStack_8 = fVar4;
  fVar10 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar10) {
    fVar25 = fVar4 / fVar10;
    uVar37 = CONCAT44(uStack_11._4_4_ / fVar10,(float)uStack_11 / fVar10);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar37._0_4_ = (pVVar12->zeroVector).x;
    uVar37._4_4_ = (pVVar12->zeroVector).y;
    fVar25 = (pVVar12->zeroVector).z;
  }
  uVar38 = (ray->m_Direction).y;
  uStack_7._4_4_ = (float)((ulonglong)uVar37 >> 0x20);
  uStack_7._0_4_ = (float)uVar37;
  fVar32 = (float)uVar38 * uStack_7._4_4_ + (ray->m_Direction).x * (float)uStack_7 +
           (ray->m_Direction).z * fVar25;
  fVar30 = (float)((uint)((ray->m_Origin).y * uStack_7._4_4_ + (ray->m_Origin).x * (float)uStack_7
                         + (ray->m_Origin).z * fVar25) ^ _UNK_?);
  fVar10 = (float)((uint)(fVar22 * uStack_7._4_4_ + fVar20 * (float)uStack_7 + fVar21 * fVar25) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    uStack_7 = uVar37;
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar39 = _UNK_?;
  fVar25 = (float)((uint)fVar32 & uVar29);
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar40 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar31 = fVar25 * _UNK_?;
  if (fVar25 * _UNK_? <= fVar40) {
    fVar31 = fVar40;
  }
  if ((float)((uint)(0.0 - fVar32) & uVar29) < fVar31) {
    fVar32 = 0.0;
  }
  else {
    fVar32 = (fVar30 - fVar10) / fVar32;
    if (0.0 < fVar32) {
      uVar41 = (ray->m_Direction).x;
      uVar42 = (ray->m_Direction).y;
      uVar43 = (ray->m_Origin).x;
      uVar44 = (ray->m_Origin).y;
      fVar20 = ((float)uVar41 * fVar32 + (float)uVar43) - fVar20;
      fVar22 = ((float)uVar42 * fVar32 + (float)uVar44) - fVar22;
      fVar21 = ((ray->m_Direction).z * fVar32 + (ray->m_Origin).z) - fVar21;
      bVar24 = fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21 <= fVar1 * fVar1;
    }
  }
  uStack_7._0_4_ = (ray->m_Direction).x;
  uStack_7._4_4_ = (ray->m_Direction).y;
  fVar10 = (ray->m_Direction).z;
  fVar31 = uStack_7._4_4_ * fVar4 - fVar10 * uStack_11._4_4_;
  fVar20 = fVar10 * (float)uStack_11 - (float)uStack_7 * fVar4;
  fVar21 = (float)uStack_7 * uStack_11._4_4_ - uStack_7._4_4_ * (float)uStack_11;
  uVar45 = (ray->m_Origin).y;
  uVar46 = (ray->m_Origin).x;
  fVar22 = (ray->m_Origin).z - fVar17;
  fVar10 = ((float)uVar45 - fVar16) * fVar4 - fVar22 * uStack_11._4_4_;
  fVar25 = ((float)uVar46 - fVar15) * uStack_11._4_4_ - ((float)uVar45 - fVar16) * (float)uStack_11;
  fVar22 = fVar22 * (float)uStack_11 - ((float)uVar46 - fVar15) * fVar4;
  fVar30 = fVar20 * fVar20 + fVar31 * fVar31 + fVar21 * fVar21;
  fVar20 = fVar22 * fVar20 + fVar10 * fVar31 + fVar21 * fVar25;
  fVar20 = fVar20 + fVar20;
  fVar10 = fVar20 * fVar20 -
           ((fVar22 * fVar22 + fVar10 * fVar10 + fVar25 * fVar25) - fVar1 * fVar1) *
           fVar30 * _UNK_?;
  if (fVar10 < 0.0) {
    return 0;
  }
  fVar30 = fVar30 + fVar30;
  if (fVar30 == 0.0) {
    return 0;
  }
  fVar1 = (float)((uint)fVar20 ^ _UNK_?);
  if (fVar10 == 0.0) {
    fVar1 = fVar1 / fVar30;
    fVar25 = fVar1;
  }
  else {
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_?(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar25 = (fVar10 + fVar1) / fVar30;
    fVar30 = ((float)((uint)fVar20 ^ uVar39) - fVar10) / fVar30;
    fVar1 = fVar30;
    if (fVar30 < fVar25) {
      fVar1 = fVar25;
      fVar25 = fVar30;
    }
  }
  if ((fVar25 < 0.0) && (fVar25 = fVar1, fVar1 < 0.0)) {
    return 0;
  }
  *t = fVar25;
  uVar47 = (ray->m_Direction).x;
  uVar48 = (ray->m_Direction).y;
  uVar49 = (ray->m_Origin).x;
  uVar50 = (ray->m_Origin).y;
  fVar4 = (((float)uVar48 * fVar25 + (float)uVar50) - fVar16) * uStack_11._4_4_ +
           (((float)uVar47 * fVar25 + (float)uVar49) - fVar15) * (float)uStack_11 +
           (((ray->m_Direction).z * fVar25 + (ray->m_Origin).z) - fVar17) * fVar4;
  if (fVar4 < 0.0) {
    if (!bVar24 && !bVar23) goto code_?;
    *t = 3.4028235e+38;
    if (bVar24) {
      *t = fVar32;
    }
    if ((bVar23) && (fVar28 < *t)) {
      *t = fVar28;
    }
  }
  if (fVar4 <= fVar9) {
    return 1;
  }
  if (bVar24 || bVar23) {
    *t = 3.4028235e+38;
    if (bVar24) {
      *t = fVar32;
    }
    if (!bVar23) {
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

