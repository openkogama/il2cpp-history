
/* List`1[UnityEngine.Vector3] CalcRightUpExtents(Vector3, Single, Vector3, Vector3) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::SphereMath::SphereMath_CalcRightUpExtents
          (Vector3 *sphereCenter,float sphereRadius,Vector3 *right,Vector3 *up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pvVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass->
            rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pPVar2 = (PlaneIdHelper_PlaneQuadrantInfo__Array *)FUN_?(pvVar1,4);
  bVar3 = iRam_? != 0;
  (this->fields)._items = pPVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pMVar8 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  uVar9 = right->x;
  uVar10 = right->y;
  aPStack_11[0].Quadrant = (int32_t)sphereCenter->x;
  aPStack_11[0].FirstAxisSign = (int32_t)sphereCenter->y;
  fVar12 = (float)aPStack_11[0].Quadrant - (float)uVar9 * sphereRadius;
  fVar13 = (float)aPStack_11[0].FirstAxisSign - (float)uVar10 * sphereRadius;
  fVar14 = sphereCenter->z - right->z * sphereRadius;
  piVar15 = &(this->fields)._version;
  *piVar15 = *piVar15 + 1;
  pPVar2 = (this->fields)._items;
  if (pPVar2 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pPVar2->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pPVar2->max_length <= uVar4) goto code_?;
      pPVar2->vector[(int)uVar4].Quadrant = (int32_t)fVar12;
      pPVar2->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar13;
      pPVar2->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar14;
    }
    else {
      aPStack_11[0].FirstAxisSign = (int32_t)fVar13;
      aPStack_11[0].Quadrant = (int32_t)fVar12;
      aPStack_11[0].SecondAxisSign = (int32_t)fVar14;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_11,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar16 = up->x;
    uVar17 = up->y;
    aPStack_11[0].Quadrant = (int32_t)sphereCenter->x;
    aPStack_11[0].FirstAxisSign = (int32_t)sphereCenter->y;
    fVar13 = (float)uVar16 * sphereRadius + (float)aPStack_11[0].Quadrant;
    fVar14 = (float)uVar17 * sphereRadius + (float)aPStack_11[0].FirstAxisSign;
    fVar12 = up->z * sphereRadius + sphereCenter->z;
    piVar15 = &(this->fields)._version;
    *piVar15 = *piVar15 + 1;
    pPVar2 = (this->fields)._items;
    if (pPVar2 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pPVar2->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pPVar2->max_length <= uVar4) goto code_?;
      pPVar2->vector[(int)uVar4].Quadrant = (int32_t)fVar13;
      pPVar2->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar14;
      pPVar2->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar12;
    }
    else {
      aPStack_11[0].FirstAxisSign = (int32_t)fVar14;
      aPStack_11[0].Quadrant = (int32_t)fVar13;
      aPStack_11[0].SecondAxisSign = (int32_t)fVar12;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_11,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar18 = right->x;
    uVar19 = right->y;
    aPStack_11[0].Quadrant = (int32_t)sphereCenter->x;
    aPStack_11[0].FirstAxisSign = (int32_t)sphereCenter->y;
    fVar13 = (float)uVar18 * sphereRadius + (float)aPStack_11[0].Quadrant;
    fVar14 = (float)uVar19 * sphereRadius + (float)aPStack_11[0].FirstAxisSign;
    fVar12 = right->z * sphereRadius + sphereCenter->z;
    piVar15 = &(this->fields)._version;
    *piVar15 = *piVar15 + 1;
    pPVar2 = (this->fields)._items;
    if (pPVar2 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pPVar2->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pPVar2->max_length <= uVar4) goto code_?;
      pPVar2->vector[(int)uVar4].Quadrant = (int32_t)fVar13;
      pPVar2->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar14;
      pPVar2->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar12;
    }
    else {
      aPStack_11[0].FirstAxisSign = (int32_t)fVar14;
      aPStack_11[0].Quadrant = (int32_t)fVar13;
      aPStack_11[0].SecondAxisSign = (int32_t)fVar12;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_11,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar20 = up->x;
    uVar21 = up->y;
    aPStack_11[0].Quadrant = (int32_t)sphereCenter->x;
    aPStack_11[0].FirstAxisSign = (int32_t)sphereCenter->y;
    fVar12 = (float)aPStack_11[0].Quadrant - (float)uVar20 * sphereRadius;
    fVar13 = (float)aPStack_11[0].FirstAxisSign - (float)uVar21 * sphereRadius;
    fVar14 = sphereCenter->z - up->z * sphereRadius;
    piVar15 = &(this->fields)._version;
    *piVar15 = *piVar15 + 1;
    pPVar2 = (this->fields)._items;
    if (pPVar2 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar4 = (this->fields)._size;
      if (uVar4 < (uint)pPVar2->max_length) {
        (this->fields)._size = uVar4 + 1;
        if ((uint)pPVar2->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar22 = (code *)swi(3);
          pLVar23 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
          return pLVar23;
        }
        pPVar2->vector[(int)uVar4].Quadrant = (int32_t)fVar12;
        pPVar2->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar13;
        pPVar2->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar14;
      }
      else {
        aPStack_11[0].FirstAxisSign = (int32_t)fVar13;
        aPStack_11[0].Quadrant = (int32_t)fVar12;
        aPStack_11[0].SecondAxisSign = (int32_t)fVar14;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,aPStack_11,pMVar8->klass->rgctx_data[0xe].method);
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


/* Boolean ContainsPoint(Vector3, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_ContainsPoint
               (Vector3 *point,Vector3 *sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  uVar1 = sphereCenter->x;
  uVar2 = sphereCenter->y;
  uVar3 = point->x;
  fVar4 = point->y - (float)uVar2;
  fVar5 = point->z - sphereCenter->z;
  return fVar4 * fVar4 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) +
         fVar5 * fVar5 <= (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius);
}


/* Boolean Raycast(Ray, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast
               (Ray *ray,Vector3 *sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  VStack_1.x = sphereCenter->x;
  VStack_1.y = sphereCenter->y;
  VStack_1.z = sphereCenter->z;
  RStack_2.m_Direction.y = (ray->m_Direction).y;
  RStack_2.m_Direction.z = (ray->m_Direction).z;
  RStack_2.m_Origin.x = (ray->m_Origin).x;
  RStack_2.m_Origin.y = (ray->m_Origin).y;
  RStack_2._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  afStackX_18[0] = 0.0;
  bVar3 = SphereMath_Raycast_1
                    (&RStack_2,afStackX_18,&VStack_1,sphereRadius,epsilon,(MethodInfo *)0x0);
  return bVar3;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast_1
               (Ray *ray,float *t,Vector3 *sphereCenter,float sphereRadius,SphereEpsilon epsilon,
               MethodInfo *method)

{
  *t = 0.0;
  uVar1 = (ray->m_Origin).x;
  uVar2 = (ray->m_Origin).y;
  uVar3 = sphereCenter->x;
  uVar4 = sphereCenter->y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = (ray->m_Origin).z - sphereCenter->z;
  fVar7 = (float)uVar2 - (float)uVar4;
  uVar8 = (ray->m_Direction).x;
  uVar9 = (ray->m_Direction).y;
  fVar10 = (ray->m_Direction).z;
  fVar11 = (float)uVar9 * (float)uVar9 + (float)uVar8 * (float)uVar8 + fVar10 * fVar10;
  uVar12 = (ray->m_Direction).x;
  uVar13 = (ray->m_Direction).y;
  fVar14 = fVar7 * (float)uVar13 + fVar5 * (float)uVar12 + fVar6 * (ray->m_Direction).z;
  fVar14 = fVar14 + fVar14;
  fVar10 = fVar14 * fVar14 -
           ((fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) -
           (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius)) *
           fVar11 * _UNK_?;
  if ((0.0 <= fVar10) && (fVar11 = fVar11 + fVar11, fVar11 != 0.0)) {
    fVar6 = (float)((uint)fVar14 ^ _UNK_?);
    if (fVar10 == 0.0) {
      fVar6 = fVar6 / fVar11;
      fVar5 = fVar6;
    }
    else {
      if (fVar10 < 0.0) {
        uVar15 = CONCAT44(uVar2,fVar10);
        fVar10 = (float)FUN_?(uVar15);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      fVar5 = (fVar10 + fVar6) / fVar11;
      fVar11 = ((float)((uint)fVar14 ^ _UNK_?) - fVar10) / fVar11;
      fVar6 = fVar11;
      if (fVar11 < fVar5) {
        fVar6 = fVar5;
        fVar5 = fVar11;
      }
    }
    if ((0.0 <= fVar5) || (fVar5 = fVar6, 0.0 <= fVar6)) {
      *t = fVar5;
      return 1;
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Single ByRef, Vector3, Single, SphereEpsilon) */

bool Assembly-CSharp.dll::RTG::SphereMath::SphereMath_Raycast_2
               (Ray *ray,float *t0,float *t1,Vector3 *sphereCenter,float sphereRadius,
               SphereEpsilon epsilon,MethodInfo *method)

{
  *t1 = 0.0;
  *t0 = 0.0;
  uVar1 = (ray->m_Origin).x;
  uVar2 = (ray->m_Origin).y;
  uVar3 = sphereCenter->x;
  uVar4 = sphereCenter->y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = (ray->m_Origin).z - sphereCenter->z;
  fVar7 = (float)uVar2 - (float)uVar4;
  uVar8 = (ray->m_Direction).x;
  uVar9 = (ray->m_Direction).y;
  fVar10 = (ray->m_Direction).z;
  fVar11 = fVar7 * (float)uVar9 + fVar5 * (float)uVar8 + fVar6 * (ray->m_Direction).z;
  bVar12 = MathEx::MathEx_SolveQuadratic
                    ((float)uVar9 * (float)uVar9 + (float)uVar8 * (float)uVar8 + fVar10 * fVar10,
                     fVar11 + fVar11,
                     (fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) -
                     (epsilon._radiusEps + sphereRadius) * (epsilon._radiusEps + sphereRadius),t0,t1
                     ,(MethodInfo *)0x0);
  if ((bVar12 == 0) || ((*t0 <= 0.0 && *t0 != 0.0 && (*t1 <= 0.0 && *t1 != 0.0)))) {
    bVar12 = 0;
  }
  else {
    fVar10 = *t0;
    if (*t1 <= fVar10 && fVar10 != *t1) {
      *t0 = *t1;
      *t1 = fVar10;
    }
    if (*t0 <= 0.0 && *t0 != 0.0) {
      *t0 = *t1;
    }
    bVar12 = 1;
  }
  return bVar12;
}

