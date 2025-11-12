
/* List`1[UnityEngine.Vector2] Calc2DExtentPoints(Vector2, Single, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Calc2DExtentPoints
          (Vector2 circleCenter,float circleRadius,float degreeCircleRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->forwardVector).x;
  uStack_2._4_4_ = (pVVar1->forwardVector).y;
  fStack_3 = (pVVar1->forwardVector).z;
  uStack_4 = 0;
  uStack_5 = 0;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pLVar8 = (List_1_UnityEngine_Vector2_ *)(*pcVar6)();
    return pLVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(degreeCircleRotation,&uStack_2,&uStack_4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar9 = _UNK_?;
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = uStack_4._4_4_ + uStack_4._4_4_;
  fVar12 = (float)uStack_5 + (float)uStack_5;
  fVar13 = (_UNK_? - (uStack_4._4_4_ * fVar11 + (float)uStack_5 * fVar12)) *
           (pVVar10->rightVector).x +
           ((float)uStack_4 * fVar11 - uStack_5._4_4_ * fVar12) * (pVVar10->rightVector).y +
           ((float)uStack_4 * fVar12 + uStack_5._4_4_ * fVar11) * 0.0;
  fVar11 = (_UNK_? -
          ((float)uStack_4 * ((float)uStack_4 + (float)uStack_4) + (float)uStack_5 * fVar12)) *
          (pVVar10->rightVector).y +
          (uStack_5._4_4_ * fVar12 + (float)uStack_4 * fVar11) * (pVVar10->rightVector).x +
          (uStack_4._4_4_ * fVar12 - uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4)) * 0.0
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar14 = uStack_4._4_4_ + uStack_4._4_4_;
  fVar15 = (float)uStack_5 + (float)uStack_5;
  fVar12 = (fVar9 - (uStack_4._4_4_ * fVar14 + (float)uStack_5 * fVar15)) * (pVVar10->upVector).x +
           ((float)uStack_4 * fVar14 - uStack_5._4_4_ * fVar15) * (pVVar10->upVector).y +
           ((float)uStack_4 * fVar15 + uStack_5._4_4_ * fVar14) * 0.0;
  fVar14 = (fVar9 - ((float)uStack_4 * ((float)uStack_4 + (float)uStack_4) +
                   (float)uStack_5 * fVar15)) * (pVVar10->upVector).y +
          (uStack_5._4_4_ * fVar15 + (float)uStack_4 * fVar14) * (pVVar10->upVector).x +
          (uStack_4._4_4_ * fVar15 - uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4)) * 0.0;
  pLVar8 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar8,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  fStack_16 = circleCenter.x;
  fStack_17 = circleCenter.y;
  fVar9 = fVar12 * circleRadius + fStack_16;
  if (pLVar8 == (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(fVar9);
    pcVar6 = (code *)swi(3);
    pLVar8 = (List_1_UnityEngine_Vector2_ *)(*pcVar6)();
    return pLVar8;
  }
  FUN_?(pLVar8,CONCAT44(fVar14 * circleRadius + fStack_17,fVar9),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar8,CONCAT44(fVar11 * circleRadius + fStack_17,fVar13 * circleRadius + fStack_16),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar8,CONCAT44(fStack_17 - fVar14 * circleRadius,fStack_16 - fVar12 * circleRadius),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar8,CONCAT44(fStack_17 - fVar11 * circleRadius,fStack_16 - fVar13 * circleRadius),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  return pLVar8;
}


/* List`1[UnityEngine.Vector3] Calc3DExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Calc3DExtentPoints
          (Vector3 *circleCenter,float circleRadius,Quaternion *circleRotation,MethodInfo *method)

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
  fVar1 = circleRotation->x;
  fVar2 = circleRotation->y;
  fVar3 = circleRotation->z;
  fVar4 = circleRotation->w;
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
  fVar12 = (_UNK_? - (fVar3 * fVar6 + fVar2 * fVar11)) * (float)PStack_8.Quadrant +
           (fVar1 * fVar11 - fVar4 * fVar6) * (float)PStack_8.FirstAxisSign +
           (fVar4 * fVar11 + fVar1 * fVar6) * fVar9;
  fVar3 = (_UNK_? - (fVar3 * fVar6 + fVar7)) * (float)PStack_8.FirstAxisSign +
           (fVar4 * fVar6 + fVar1 * fVar11) * (float)PStack_8.Quadrant +
           (fVar2 * fVar6 - fVar10) * fVar9;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar11) * (float)PStack_8.Quadrant +
           (fVar10 + fVar2 * fVar6) * (float)PStack_8.FirstAxisSign +
           (_UNK_? - (fVar2 * fVar11 + fVar7)) * fVar9;
  fStack_13 = circleRotation->x;
  fStack_14 = circleRotation->y;
  fStack_15 = circleRotation->z;
  fStack_16 = circleRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_8.Quadrant = (int32_t)(pVVar5->upVector).x;
  PStack_8.FirstAxisSign = (int32_t)(pVVar5->upVector).y;
  fVar4 = fStack_15 + fStack_15;
  fVar17 = fStack_13 * (fStack_13 + fStack_13);
  fVar6 = fStack_14 + fStack_14;
  fVar10 = fStack_16 * fVar4;
  fVar7 = fStack_16 * (fStack_13 + fStack_13);
  fVar2 = (pVVar5->upVector).z;
  fVar9 = (_UNK_? - (fStack_15 * fVar4 + fStack_14 * fVar6)) * (float)PStack_8.Quadrant +
           (fStack_13 * fVar6 - fVar10) * (float)PStack_8.FirstAxisSign +
           (fStack_16 * fVar6 + fStack_13 * fVar4) * fVar2;
  fVar11 = (_UNK_? - (fStack_15 * fVar4 + fVar17)) * (float)PStack_8.FirstAxisSign +
           (fVar10 + fStack_13 * fVar6) * (float)PStack_8.Quadrant +
           (fStack_14 * fVar4 - fVar7) * fVar2;
  fVar7 = (fStack_13 * fVar4 - fStack_16 * fVar6) * (float)PStack_8.Quadrant +
           (fVar7 + fStack_14 * fVar4) * (float)PStack_8.FirstAxisSign +
           (_UNK_? - (fStack_14 * fVar6 + fVar17)) * fVar2;
  fStack_13 = fVar10;
  fStack_14 = fStack_16;
  fStack_15 = fStack_16;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar18 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_8.Quadrant = (int32_t)circleCenter->x;
  PStack_8.FirstAxisSign = (int32_t)circleCenter->y;
  fVar2 = fVar9 * circleRadius + (float)PStack_8.Quadrant;
  fVar4 = fVar11 * circleRadius + (float)PStack_8.FirstAxisSign;
  fVar6 = fVar7 * circleRadius + circleCenter->z;
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
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)circleCenter->x;
    PStack_8.FirstAxisSign = (int32_t)circleCenter->y;
    fVar2 = fVar12 * circleRadius + (float)PStack_8.Quadrant;
    fVar4 = fVar3 * circleRadius + (float)PStack_8.FirstAxisSign;
    fVar6 = fVar1 * circleRadius + circleCenter->z;
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
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)circleCenter->x;
    PStack_8.FirstAxisSign = (int32_t)circleCenter->y;
    fVar4 = (float)PStack_8.Quadrant - fVar9 * circleRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar11 * circleRadius;
    fVar9 = circleCenter->z - fVar7 * circleRadius;
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
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)circleCenter->x;
    PStack_8.FirstAxisSign = (int32_t)circleCenter->y;
    fVar4 = (float)PStack_8.Quadrant - fVar12 * circleRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar3 * circleRadius;
    fVar1 = circleCenter->z - fVar1 * circleRadius;
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
        pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar4;
        pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar2;
        pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_8.FirstAxisSign = (int32_t)fVar2;
        PStack_8.Quadrant = (int32_t)fVar4;
        PStack_8.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
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


/* Boolean Contains2DPoint(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains2DPoint
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon *epsilon,
               MethodInfo *method)

{
  uStackX_20._0_4_ = point.x;
  uStackX_20._4_4_ = point.y;
  fStack_1 = circleCenter.x;
  fStack_2 = circleCenter.y;
  uStackX_20 = CONCAT44(uStackX_20._4_4_ - fStack_2,(float)uStackX_20 - fStack_1);
  fVar3 = (float)FUN_?(&uStackX_20);
  return fVar3 <= circleRadius + epsilon->_radiusEps;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains3DPoint
               (Vector3 *point,bool checkOnPlane,Vector3 *circleCenter,float circleRadius,
               Vector3 *circleNormal,CircleEpsilon *epsilon,MethodInfo *method)

{
  uStack_1._0_4_ = circleNormal->x;
  uStack_1._4_4_ = circleNormal->y;
  fStack_2 = circleNormal->z;
  fVar3 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar3) {
    uVar4 = circleNormal->x;
    uVar5 = circleNormal->y;
    fVar6 = circleNormal->z / fVar3;
    uStack_1 = CONCAT44((float)uVar5 / fVar3,(float)uVar4 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar7->zeroVector).x;
    uStack_1._4_4_ = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  uVar8 = circleCenter->x;
  uVar9 = circleCenter->y;
  fVar3 = (float)((uint)(uStack_1._4_4_ * (float)uVar9 + (float)uStack_1 * (float)uVar8 +
                         fVar6 * circleCenter->z) ^ _UNK_?);
  if ((checkOnPlane != 0) &&
     (uVar10 = point->x, uVar11 = point->y,
     fVar12 = (float)((uint)((float)uVar11 * uStack_1._4_4_ + (float)uVar10 * (float)uStack_1 +
                             point->z * fVar6 + fVar3) & _UNK_?),
     epsilon->_extrudeEps <= fVar12 && fVar12 != epsilon->_extrudeEps)) {
    return 0;
  }
  uVar13 = point->x;
  uVar14 = point->y;
  fVar3 = (float)uVar14 * uStack_1._4_4_ + (float)uVar13 * (float)uStack_1 + point->z * fVar6 +
           fVar3;
  uVar15 = point->x;
  uVar16 = point->y;
  uVar17 = circleCenter->x;
  uVar18 = circleCenter->y;
  fStack_2 = (point->z - fVar6 * fVar3) - circleCenter->z;
  uStack_1 = CONCAT44(((float)uVar16 - uStack_1._4_4_ * fVar3) - (float)uVar18,
                       ((float)uVar15 - (float)uStack_1 * fVar3) - (float)uVar17);
  fVar3 = (float)FUN_?(&uStack_1);
  return fVar3 <= circleRadius + epsilon->_radiusEps;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Is2DPointOnBorder
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon *epsilon,
               MethodInfo *method)

{
  uStackX_20._0_4_ = point.x;
  uStackX_20._4_4_ = point.y;
  fStack_1 = circleCenter.x;
  fStack_2 = circleCenter.y;
  uStackX_20 = CONCAT44(uStackX_20._4_4_ - fStack_2,(float)uStackX_20 - fStack_1);
  fVar3 = (float)FUN_?(&uStackX_20);
  if (fVar3 < circleRadius - epsilon->_wireEps) {
    return 0;
  }
  return fVar3 <= circleRadius + epsilon->_wireEps;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Raycast
               (Ray *ray,float *t,Vector3 *circleCenter,float circleRadius,Vector3 *circleNormal,
               CircleEpsilon *epsilon,MethodInfo *method)

{
  VStack_1.x = circleNormal->x;
  VStack_1.y = circleNormal->y;
  VStack_1.z = circleNormal->z;
  cylinderRadius = circleRadius + epsilon->_radiusEps;
  *t = 0.0;
  fVar2 = (float)FUN_?(&VStack_1);
  if (_UNK_? < fVar2) {
    uVar3 = circleNormal->x;
    uVar4 = circleNormal->y;
    VStack_1.x = (float)uVar3 / fVar2;
    fVar5 = circleNormal->z / fVar2;
    VStack_1.y = (float)uVar4 / fVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_1.x = (pVVar6->zeroVector).x;
    VStack_1.y = (pVVar6->zeroVector).y;
    fVar5 = (pVVar6->zeroVector).z;
  }
  VStack_7.x = circleCenter->x;
  VStack_7.y = circleCenter->y;
  aRStack_8[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_8[0].m_Direction.z = (ray->m_Direction).z;
  fVar9 = aRStack_8[0].m_Direction.y * VStack_1.y + (ray->m_Direction).x * VStack_1.x +
           aRStack_8[0].m_Direction.z * fVar5;
  fVar10 = (float)((uint)((ray->m_Origin).y * VStack_1.y + (ray->m_Origin).x * VStack_1.x +
                         (ray->m_Origin).z * fVar5) ^ _UNK_?);
  fVar2 = (float)((uint)(VStack_1.y * VStack_7.y + VStack_1.x * VStack_7.x +
                         fVar5 * circleCenter->z) ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = (float)((uint)fVar9 & _UNK_?);
  if ((float)((uint)fVar9 & _UNK_?) <= 0.0) {
    fVar5 = 0.0;
  }
  fVar11 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar12 = fVar5 * _UNK_?;
  if (fVar5 * _UNK_? <= fVar11) {
    fVar12 = fVar11;
  }
  if ((fVar12 <= (float)((uint)(0.0 - fVar9) & _UNK_?)) &&
     (fVar9 = (fVar10 - fVar2) / fVar9, 0.0 < fVar9)) {
    uVar13 = (ray->m_Direction).x;
    uVar14 = (ray->m_Direction).y;
    uVar15 = (ray->m_Origin).x;
    uVar16 = (ray->m_Origin).y;
    VStack_7.x = circleCenter->x;
    VStack_7.y = circleCenter->y;
    VStack_1.x = ((float)uVar13 * fVar9 + (float)uVar15) - VStack_7.x;
    VStack_1.z = ((ray->m_Direction).z * fVar9 + (ray->m_Origin).z) - circleCenter->z;
    VStack_1.y = ((float)uVar14 * fVar9 + (float)uVar16) - VStack_7.y;
    fVar2 = (float)FUN_?(&VStack_1);
    if (fVar2 <= cylinderRadius) {
      *t = fVar9;
      return 1;
    }
  }
  if ((epsilon->_extrudeEps == 0.0) ||
     (uVar17 = circleNormal->x, uVar18 = circleNormal->y, uVar19 = (ray->m_Direction).x,
     uVar20 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar18 * (float)uVar20 + (float)uVar17 * (float)uVar19 +
                   circleNormal->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar21 = 0;
  }
  else {
    fVar2 = epsilon->_extrudeEps;
    uVar22 = circleNormal->x;
    uVar23 = circleNormal->y;
    VStack_7.x = circleCenter->x;
    VStack_7.y = circleCenter->y;
    fVar12 = circleCenter->z - fVar2 * circleNormal->z;
    fVar24 = VStack_7.x - fVar2 * (float)uVar22;
    fVar11 = VStack_7.y - fVar2 * (float)uVar23;
    fVar2 = epsilon->_extrudeEps;
    fVar10 = fVar2 * (float)uVar22 + VStack_7.x;
    fVar9 = fVar2 * circleNormal->z + circleCenter->z;
    fVar5 = fVar2 * (float)uVar23 + VStack_7.y;
    VStack_1.z = fVar9 - fVar12;
    VStack_1.y = fVar5 - fVar11;
    VStack_1.x = fVar10 - fVar24;
    fVar2 = (float)FUN_?(&VStack_1);
    aRStack_8[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_8[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_8[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_1.y = fVar5;
    VStack_1.x = fVar10;
    VStack_7.y = fVar11;
    VStack_7.x = fVar24;
    aRStack_8[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_8[0].m_Direction.z = (ray->m_Direction).z;
    VStack_1.z = fVar9;
    VStack_7.z = fVar12;
    bVar21 = CylinderMath::CylinderMath_Raycast_1
                       (aRStack_8,t,&VStack_7,&VStack_1,cylinderRadius,fVar2,
                        (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  }
  return bVar21;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_RaycastWire
               (Ray *ray,float *t,Vector3 *circleCenter,float circleRadius,Vector3 *circleNormal,
               CircleEpsilon *epsilon,MethodInfo *method)

{
  VStack_1.x = circleNormal->x;
  VStack_1.y = circleNormal->y;
  VStack_1.z = circleNormal->z;
  *t = 0.0;
  fVar2 = (float)FUN_?(&VStack_1);
  if (_UNK_? < fVar2) {
    uVar3 = circleNormal->x;
    uVar4 = circleNormal->y;
    VStack_1.x = (float)uVar3 / fVar2;
    fVar5 = circleNormal->z / fVar2;
    VStack_1.y = (float)uVar4 / fVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_1.x = (pVVar6->zeroVector).x;
    VStack_1.y = (pVVar6->zeroVector).y;
    fVar5 = (pVVar6->zeroVector).z;
  }
  VStack_7.x = circleCenter->x;
  VStack_7.y = circleCenter->y;
  aRStack_8[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_8[0].m_Direction.z = (ray->m_Direction).z;
  fVar9 = aRStack_8[0].m_Direction.y * VStack_1.y + (ray->m_Direction).x * VStack_1.x +
           aRStack_8[0].m_Direction.z * fVar5;
  fVar10 = (float)((uint)((ray->m_Origin).y * VStack_1.y + (ray->m_Origin).x * VStack_1.x +
                         (ray->m_Origin).z * fVar5) ^ _UNK_?);
  fVar2 = (float)((uint)(VStack_1.y * VStack_7.y + VStack_1.x * VStack_7.x +
                         fVar5 * circleCenter->z) ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = (float)((uint)fVar9 & _UNK_?);
  if ((float)((uint)fVar9 & _UNK_?) <= 0.0) {
    fVar5 = 0.0;
  }
  fVar11 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar12 = fVar5 * _UNK_?;
  if (fVar5 * _UNK_? <= fVar11) {
    fVar12 = fVar11;
  }
  if ((fVar12 <= (float)((uint)(0.0 - fVar9) & _UNK_?)) &&
     (fVar9 = (fVar10 - fVar2) / fVar9, 0.0 < fVar9)) {
    uVar13 = (ray->m_Direction).x;
    uVar14 = (ray->m_Direction).y;
    uVar15 = (ray->m_Origin).x;
    uVar16 = (ray->m_Origin).y;
    VStack_7.x = circleCenter->x;
    VStack_7.y = circleCenter->y;
    VStack_1.z = circleCenter->z - ((ray->m_Direction).z * fVar9 + (ray->m_Origin).z);
    VStack_1.y = VStack_7.y - ((float)uVar14 * fVar9 + (float)uVar16);
    VStack_1.x = VStack_7.x - ((float)uVar13 * fVar9 + (float)uVar15);
    fVar2 = (float)FUN_?(&VStack_1);
    if ((circleRadius - epsilon->_wireEps <= fVar2) && (fVar2 <= circleRadius + epsilon->_wireEps)
       ) {
      *t = fVar9;
      return 1;
    }
  }
  if ((epsilon->_extrudeEps == 0.0) ||
     (uVar17 = circleNormal->x, uVar18 = circleNormal->y, uVar19 = (ray->m_Direction).x,
     uVar20 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar18 * (float)uVar20 + (float)uVar17 * (float)uVar19 +
                   circleNormal->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar21 = 0;
  }
  else {
    fVar2 = epsilon->_extrudeEps;
    uVar22 = circleNormal->x;
    uVar23 = circleNormal->y;
    VStack_7.x = circleCenter->x;
    VStack_7.y = circleCenter->y;
    fVar12 = circleCenter->z - fVar2 * circleNormal->z;
    fVar24 = VStack_7.x - fVar2 * (float)uVar22;
    fVar11 = VStack_7.y - fVar2 * (float)uVar23;
    fVar2 = epsilon->_extrudeEps;
    fVar10 = fVar2 * (float)uVar22 + VStack_7.x;
    fVar9 = fVar2 * circleNormal->z + circleCenter->z;
    fVar5 = fVar2 * (float)uVar23 + VStack_7.y;
    VStack_1.z = fVar9 - fVar12;
    VStack_1.y = fVar5 - fVar11;
    VStack_1.x = fVar10 - fVar24;
    fVar2 = (float)FUN_?(&VStack_1);
    aRStack_8[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_8[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_8[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_1.y = fVar5;
    VStack_1.x = fVar10;
    VStack_7.y = fVar11;
    VStack_7.x = fVar24;
    aRStack_8[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_8[0].m_Direction.z = (ray->m_Direction).z;
    VStack_1.z = fVar9;
    VStack_7.z = fVar12;
    bVar21 = CylinderMath::CylinderMath_Raycast_1
                       (aRStack_8,t,&VStack_7,&VStack_1,circleRadius + epsilon->_wireEps,fVar2,
                        (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  }
  return bVar21;
}

