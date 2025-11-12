
/* OBB Calc3DTriangleOBB(Vector3, Vector3, Vector3, Vector3, TriangleEpsilon) */

OBB * Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Calc3DTriangleOBB
                (OBB *__return_storage_ptr__,Vector3 *p0,Vector3 *p1,Vector3 *p2,Vector3 *normal,
                TriangleEpsilon *epsilon,MethodInfo *method)

{
  uVar1 = p1->x;
  uVar2 = p1->y;
  fVar3 = p0->z;
  fVar4 = p2->z;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  uStack_5._0_4_ = p0->x;
  uStack_5._4_4_ = p0->y;
  uStack_6._0_4_ = p1->x;
  uStack_6._4_4_ = p1->y;
  uStack_7._0_4_ = p2->x;
  uStack_7._4_4_ = p2->y;
  uVar8 = p0->x;
  uVar9 = p0->y;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  fVar10 = p0->z - p1->z;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  fVar11 = _UNK_?;
  uVar12 = p1->x;
  uVar13 = p1->y;
  uVar14 = p2->x;
  uVar15 = p2->y;
  fVar16 = p1->z - p2->z;
  fVar17 = ((float)uVar9 - (float)uVar2) * ((float)uVar9 - (float)uVar2) +
           ((float)uVar8 - (float)uVar1) * ((float)uVar8 - (float)uVar1) + fVar10 * fVar10 +
           _UNK_?;
  fVar18 = ((float)uVar13 - (float)uVar15) * ((float)uVar13 - (float)uVar15) +
           ((float)uVar12 - (float)uVar14) * ((float)uVar12 - (float)uVar14) + fVar16 * fVar16;
  fVar10 = fVar4;
  fVar16 = p1->z;
  if (fVar17 < fVar18) {
    uStack_5._0_4_ = p1->x;
    uStack_5._4_4_ = p1->y;
    uStack_6._0_4_ = p2->x;
    uStack_6._4_4_ = p2->y;
    fVar10 = p0->z;
    uStack_7._0_4_ = p0->x;
    uStack_7._4_4_ = p0->y;
    fVar17 = fVar18;
    fVar3 = p1->z;
    fVar16 = fVar4;
  }
  uVar19 = p2->x;
  uVar20 = p2->y;
  auStack_21._0_4_ = p0->x;
  auStack_21._4_4_ = p0->y;
  fVar4 = p2->z - p0->z;
  fVar4 = ((float)uVar20 - (float)auStack_21._4_4_) * ((float)uVar20 - (float)auStack_21._4_4_) +
           ((float)uVar19 - (float)auStack_21._0_4_) * ((float)uVar19 - (float)auStack_21._0_4_) +
           fVar4 * fVar4;
  if (fVar17 < fVar4) {
    uStack_5._0_4_ = p2->x;
    uStack_5._4_4_ = p2->y;
    fVar3 = p2->z;
    fVar16 = p0->z;
    fVar10 = p1->z;
    uStack_6._0_4_ = p0->x;
    uStack_6._4_4_ = p0->y;
    uStack_7._0_4_ = p1->x;
    uStack_7._4_4_ = p1->y;
    fVar17 = fVar4;
  }
  fVar4 = (float)uStack_5;
  fVar22 = (float)uStack_6 - (float)uStack_5;
  fVar18 = uStack_5._4_4_;
  fVar23 = uStack_6._4_4_ - uStack_5._4_4_;
  uStack_5 = CONCAT44(fVar23,fVar22);
  fStack_24 = fVar16 - fVar3;
  fVar25 = (float)FUN_?(&uStack_5);
  if (fVar11 < fVar25) {
    fStack_24 = (fVar16 - fVar3) / fVar25;
    uStack_5 = CONCAT44(fVar23 / fVar25,fVar22 / fVar25);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar26->zeroVector).x;
    uStack_5._4_4_ = (pVVar26->zeroVector).y;
    fStack_24 = (pVVar26->zeroVector).z;
  }
  uStack_6._0_4_ = normal->x;
  uStack_6._4_4_ = normal->y;
  fStack_27 = normal->z;
  auStack_21._0_4_ = 0.0;
  auStack_21._4_4_ = 0.0;
  uStack_28 = 0;
  pcVar29 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar29 = (code *)FUN_?(&UNK_?), pcVar29 == (code *)0x0)) {
    uVar30 = func_?(&UNK_?);
    FUN_?(uVar30,0);
    pcVar29 = (code *)swi(3);
    pOVar31 = (OBB *)(*pcVar29)();
    return pOVar31;
  }
  pcRam_? = pcVar29;
  (*pcRam_?)(&uStack_5,&uStack_6);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar32 = cRam_?;
  pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar11 = (pVVar26->zeroVector).y;
  fVar16 = (pVVar26->zeroVector).z;
  (__return_storage_ptr__->_center).x = (pVVar26->zeroVector).x;
  (__return_storage_ptr__->_center).y = fVar11;
  (__return_storage_ptr__->_center).z = fVar16;
  if (cVar32 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar16 = (pVVar26->zeroVector).z;
  fVar11 = (pVVar26->zeroVector).y;
  (__return_storage_ptr__->_size).x = (pVVar26->zeroVector).x;
  (__return_storage_ptr__->_size).y = fVar11;
  (__return_storage_ptr__->_size).z = fVar16;
  fVar16 = epsilon->_areaEps;
  (__return_storage_ptr__->_rotation).x = (float)auStack_21._0_4_;
  (__return_storage_ptr__->_rotation).y = (float)auStack_21._4_4_;
  (__return_storage_ptr__->_rotation).z = (float)(undefined4)uStack_28;
  (__return_storage_ptr__->_rotation).w = (float)uStack_28._4_4_;
  __return_storage_ptr__->_isValid = 1;
  fVar16 = fVar16 + fVar16;
  if (fVar17 < 0.0) {
    fVar17 = (float)FUN_?();
  }
  else {
    fVar17 = SQRT(fVar17);
  }
  fVar17 = fVar17 + fVar16;
  pVVar33 = OBB::OBB_get_Right((Vector3 *)auStack_21,__return_storage_ptr__,(MethodInfo *)0x0);
  uVar34 = pVVar33->x;
  uVar35 = pVVar33->y;
  fVar11 = epsilon->_extrudeEps;
  fVar25 = (uStack_7._4_4_ - fVar18) * (float)uVar35 + ((float)uStack_7 - fVar4) * (float)uVar34 +
           (fVar10 - fVar3) * pVVar33->z;
  fVar16 = (float)((uint)fVar25 & _UNK_?) + fVar16;
  (__return_storage_ptr__->_size).x = fVar16;
  (__return_storage_ptr__->_size).y = fVar11 + fVar11;
  (__return_storage_ptr__->_size).z = fVar17;
  pVVar33 = OBB::OBB_get_Right((Vector3 *)auStack_21,__return_storage_ptr__,(MethodInfo *)0x0);
  fVar10 = _UNK_?;
  fVar11 = _UNK_?;
  if (0.0 <= fVar25) {
    fVar11 = _UNK_?;
  }
  uVar36 = pVVar33->y;
  uVar37 = pVVar33->x;
  fVar38 = pVVar33->z * fVar11;
  fVar25 = epsilon->_areaEps;
  fVar39 = (float)uVar37 * fVar11 * fVar16 * _UNK_?;
  fVar40 = (float)uVar36 * fVar11 * fVar16 * _UNK_?;
  fVar41 = fVar38 * fVar16 * _UNK_?;
  fVar16 = epsilon->_areaEps;
  pVVar33 = OBB::OBB_get_Look((Vector3 *)auStack_21,__return_storage_ptr__,(MethodInfo *)0x0);
  uVar42 = pVVar33->x;
  uVar43 = pVVar33->y;
  fVar23 = pVVar33->z;
  pVVar33 = OBB::OBB_get_Look((Vector3 *)auStack_21,__return_storage_ptr__,(MethodInfo *)0x0);
  uVar44 = pVVar33->x;
  uVar45 = pVVar33->y;
  fVar22 = pVVar33->z;
  (__return_storage_ptr__->_center).x =
       (((fVar39 - (float)uVar37 * fVar11 * fVar25) + fVar4) - (float)uVar42 * fVar16) +
       fVar17 * (float)uVar44 * fVar10;
  (__return_storage_ptr__->_center).y =
       (((fVar40 - (float)uVar36 * fVar11 * fVar25) + fVar18) - (float)uVar43 * fVar16) +
       (float)uVar45 * fVar17 * fVar10;
  (__return_storage_ptr__->_center).z =
       (((fVar41 - fVar38 * fVar25) + fVar3) - fVar23 * fVar16) + fVar17 * fVar22 * fVar10;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] CalcEqTriangle2DPoints(Vector2, Single, Quaternion) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcEqTriangle2DPoints
          (Vector2 centroid,float sideLength,Quaternion *rotation,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = sideLength * _UNK_?;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = TriangleMath_GetEqTriangleCentroidAltitude(sideLength,(MethodInfo *)0x0);
  fVar3 = rotation->x;
  fVar4 = rotation->y;
  fVar5 = rotation->z;
  fVar6 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar8 = fVar4 + fVar4;
  fVar9 = fVar5 + fVar5;
  fVar10 = (_UNK_? - (fVar4 * fVar8 + fVar5 * fVar9)) * (pVVar7->rightVector).x +
           (fVar3 * fVar8 - fVar6 * fVar9) * (pVVar7->rightVector).y +
           (fVar3 * fVar9 + fVar6 * fVar8) * 0.0;
  fVar8 = (_UNK_? - (fVar3 * (fVar3 + fVar3) + fVar5 * fVar9)) * (pVVar7->rightVector).y +
          (fVar6 * fVar9 + fVar3 * fVar8) * (pVVar7->rightVector).x +
          (fVar4 * fVar9 - fVar6 * (fVar3 + fVar3)) * 0.0;
  fVar3 = rotation->x;
  fVar4 = rotation->y;
  fVar5 = rotation->z;
  fVar6 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = fVar4 + fVar4;
  fVar12 = fVar5 + fVar5;
  fVar9 = (_UNK_? - (fVar4 * fVar11 + fVar5 * fVar12)) * (pVVar7->upVector).x +
           (fVar3 * fVar11 - fVar6 * fVar12) * (pVVar7->upVector).y +
           (rotation->x * fVar12 + fVar6 * fVar11) * 0.0;
  fVar12 = (_UNK_? - (rotation->x * (fVar3 + fVar3) + fVar5 * fVar12)) *
           (pVVar7->upVector).y + (fVar6 * fVar12 + fVar3 * fVar11) * (pVVar7->upVector).x +
           (fVar4 * fVar12 - fVar6 * (fVar3 + fVar3)) * 0.0;
  fStack_13 = centroid.x;
  fStack_14 = centroid.y;
  fVar6 = fStack_13 - fVar9 * fVar2;
  fVar11 = fStack_14 - fVar12 * fVar2;
  pLVar15 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  fVar3 = fVar10 * fVar1;
  fVar4 = fVar8 * fVar1;
  fVar5 = fVar6 - fVar3;
  if (pLVar15 != (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(pLVar15,CONCAT44(fVar11 - fVar4,fVar5),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__TriangleMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__TriangleMath);
    }
    fVar2 = sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor - fVar2;
    FUN_?(pLVar15,CONCAT44(fVar12 * fVar2 + fStack_14,fVar9 * fVar2 + fStack_13),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar15,CONCAT44(fVar8 * fVar1 + fVar11,fVar10 * fVar1 + fVar6),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    return pLVar15;
  }
  FUN_?(fVar3,fVar4,fVar5);
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_UnityEngine_Vector2_ *)(*pcVar16)();
  return pLVar15;
}


/* List`1[UnityEngine.Vector3] CalcEqTriangle3DPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcEqTriangle3DPoints
          (Vector3 *centroid,float sideLength,Quaternion *rotation,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = sideLength * _UNK_?;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = TriangleMath_GetEqTriangleCentroidAltitude(sideLength,(MethodInfo *)0x0);
  PStack_3.Quadrant = (int32_t)rotation->x;
  PStack_3.FirstAxisSign = (int32_t)rotation->y;
  PStack_3.SecondAxisSign = (int32_t)rotation->z;
  fStack_4 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = (float)PStack_3.FirstAxisSign + (float)PStack_3.FirstAxisSign;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (float)PStack_3.SecondAxisSign + (float)PStack_3.SecondAxisSign;
  uVar8 = (pVVar6->upVector).x;
  uVar9 = (pVVar6->upVector).y;
  fVar10 = (float)PStack_3.FirstAxisSign * fVar5;
  fVar11 = (float)PStack_3.Quadrant * fVar5;
  fVar12 = (float)PStack_3.Quadrant * fVar7;
  fVar13 = (float)PStack_3.FirstAxisSign * fVar7;
  fVar14 = (float)PStack_3.Quadrant * ((float)PStack_3.Quadrant + (float)PStack_3.Quadrant);
  fVar15 = ((float)PStack_3.Quadrant + (float)PStack_3.Quadrant) * fStack_4;
  fVar16 = (pVVar6->upVector).z;
  PStack_3.Quadrant = (int32_t)centroid->x;
  PStack_3.FirstAxisSign = (int32_t)centroid->y;
  fVar17 = (float)PStack_3.Quadrant -
           ((_UNK_? - ((float)PStack_3.SecondAxisSign * fVar7 + fVar10)) * (float)uVar8 +
            (fVar11 - fVar7 * fStack_4) * (float)uVar9 + (fVar5 * fStack_4 + fVar12) * fVar16) *
           fVar2;
  fVar18 = (float)PStack_3.FirstAxisSign -
           ((_UNK_? - ((float)PStack_3.SecondAxisSign * fVar7 + fVar14)) * (float)uVar9 +
            (fVar7 * fStack_4 + fVar11) * (float)uVar8 + (fVar13 - fVar15) * fVar16) * fVar2;
  fVar10 = centroid->z -
           ((fVar12 - fVar5 * fStack_4) * (float)uVar8 + (fVar15 + fVar13) * (float)uVar9 +
           (_UNK_? - (fVar10 + fVar14)) * fVar16) * fVar2;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fVar16 = rotation->x;
  fVar11 = rotation->y;
  fVar7 = rotation->z;
  fVar5 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar19 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar15 = fVar11 + fVar11;
  fVar13 = fVar7 + fVar7;
  fVar20 = (fVar16 + fVar16) * fVar16;
  PStack_3.Quadrant = (int32_t)(pVVar6->rightVector).x;
  PStack_3.FirstAxisSign = (int32_t)(pVVar6->rightVector).y;
  fVar21 = (fVar16 + fVar16) * fVar5;
  fVar12 = (pVVar6->rightVector).z;
  fVar14 = fVar17 - ((_UNK_? - (fVar13 * fVar7 + fVar15 * fVar11)) *
                     (float)PStack_3.Quadrant +
                     (fVar15 * fVar16 - fVar13 * fVar5) * (float)PStack_3.FirstAxisSign +
                    (fVar15 * fVar5 + fVar13 * fVar16) * fVar12) * fVar1;
  fVar7 = fVar18 - ((_UNK_? - (fVar13 * fVar7 + fVar20)) * (float)PStack_3.FirstAxisSign
                     + (fVar13 * fVar5 + fVar15 * fVar16) * (float)PStack_3.Quadrant +
                    (fVar13 * fVar11 - fVar21) * fVar12) * fVar1;
  fVar16 = fVar10 - ((fVar13 * fVar16 - fVar15 * fVar5) * (float)PStack_3.Quadrant +
                     (fVar21 + fVar13 * fVar11) * (float)PStack_3.FirstAxisSign +
                    (_UNK_? - (fVar15 * fVar11 + fVar20)) * fVar12) * fVar1;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar23->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar23->max_length <= uVar24) goto code_?;
      pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar14;
      pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar7;
      pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar16;
    }
    else {
      PStack_3.FirstAxisSign = (int32_t)fVar7;
      PStack_3.Quadrant = (int32_t)fVar14;
      PStack_3.SecondAxisSign = (int32_t)fVar16;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_3,pMVar19->klass->rgctx_data[0xe].method);
    }
    fVar16 = rotation->x;
    fVar11 = rotation->y;
    fVar7 = rotation->z;
    fVar5 = rotation->w;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar15 = fVar7 + fVar7;
    fVar21 = fVar11 + fVar11;
    fVar25 = (fVar16 + fVar16) * fVar16;
    PStack_3.Quadrant = (int32_t)(pVVar6->upVector).x;
    PStack_3.FirstAxisSign = (int32_t)(pVVar6->upVector).y;
    fVar12 = (pVVar6->upVector).z;
    fVar26 = (fVar16 + fVar16) * fVar5;
    fVar27 = (_UNK_? - (fVar15 * fVar7 + fVar21 * fVar11)) * (float)PStack_3.Quadrant;
    fVar14 = (fVar21 * fVar16 - fVar15 * fVar5) * (float)PStack_3.FirstAxisSign;
    fVar28 = (fVar15 * fVar16 - fVar21 * fVar5) * (float)PStack_3.Quadrant;
    fVar20 = (fVar15 * fVar5 + fVar21 * fVar16) * (float)PStack_3.Quadrant;
    fVar13 = (_UNK_? - (fVar15 * fVar7 + fVar25)) * (float)PStack_3.FirstAxisSign;
    fVar29 = (fVar26 + fVar15 * fVar11) * (float)PStack_3.FirstAxisSign;
    fVar7 = _UNK_? - (fVar21 * fVar11 + fVar25);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__TriangleMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__TriangleMath);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar2 = sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor - fVar2;
    PStack_3.Quadrant = (int32_t)centroid->x;
    PStack_3.FirstAxisSign = (int32_t)centroid->y;
    fVar16 = fVar2 * (fVar27 + fVar14 + (fVar21 * fVar5 + fVar15 * fVar16) * fVar12) +
             (float)PStack_3.Quadrant;
    fVar11 = fVar2 * (fVar13 + fVar20 + (fVar15 * fVar11 - fVar26) * fVar12) +
             (float)PStack_3.FirstAxisSign;
    fVar2 = fVar2 * (fVar28 + fVar29 + fVar7 * fVar12) + centroid->z;
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar23->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar23->max_length <= uVar24) goto code_?;
      pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar16;
      pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar11;
      pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar2;
    }
    else {
      PStack_3.FirstAxisSign = (int32_t)fVar11;
      PStack_3.Quadrant = (int32_t)fVar16;
      PStack_3.SecondAxisSign = (int32_t)fVar2;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_3,pMVar19->klass->rgctx_data[0xe].method);
    }
    fVar2 = rotation->x;
    fVar16 = rotation->y;
    fVar11 = rotation->z;
    fVar7 = rotation->w;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar14 = fVar16 + fVar16;
    fVar12 = fVar11 + fVar11;
    fVar13 = (fVar2 + fVar2) * fVar2;
    PStack_3.Quadrant = (int32_t)(pVVar6->rightVector).x;
    PStack_3.FirstAxisSign = (int32_t)(pVVar6->rightVector).y;
    fVar15 = (fVar2 + fVar2) * fVar7;
    fVar5 = (pVVar6->rightVector).z;
    fVar17 = ((_UNK_? - (fVar12 * fVar11 + fVar14 * fVar16)) * (float)PStack_3.Quadrant +
              (fVar14 * fVar2 - fVar12 * fVar7) * (float)PStack_3.FirstAxisSign +
             (fVar14 * fVar7 + fVar12 * fVar2) * fVar5) * fVar1 + fVar17;
    fVar18 = ((_UNK_? - (fVar12 * fVar11 + fVar13)) * (float)PStack_3.FirstAxisSign +
              (fVar12 * fVar7 + fVar14 * fVar2) * (float)PStack_3.Quadrant +
             (fVar12 * fVar16 - fVar15) * fVar5) * fVar1 + fVar18;
    fVar10 = ((fVar12 * fVar2 - fVar14 * fVar7) * (float)PStack_3.Quadrant +
              (fVar15 + fVar12 * fVar16) * (float)PStack_3.FirstAxisSign +
             (_UNK_? - (fVar14 * fVar16 + fVar13)) * fVar5) * fVar1 + fVar10;
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar24 = (this->fields)._size;
      if (uVar24 < (uint)pPVar23->max_length) {
        (this->fields)._size = uVar24 + 1;
        if ((uint)pPVar23->max_length <= uVar24) {
code_?:
          FUN_?();
          pcVar30 = (code *)swi(3);
          pLVar31 = (List_1_UnityEngine_Vector3_ *)(*pcVar30)();
          return pLVar31;
        }
        pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar17;
        pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar18;
        pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar10;
      }
      else {
        PStack_3.FirstAxisSign = (int32_t)fVar18;
        PStack_3.Quadrant = (int32_t)fVar17;
        PStack_3.SecondAxisSign = (int32_t)fVar10;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_3,pMVar19->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  pLVar31 = (List_1_UnityEngine_Vector3_ *)(*pcVar30)();
  return pLVar31;
}


/* List`1[UnityEngine.Vector2] CalcRATriangle2DPoints(Vector2, Single, Single, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangle2DPoints
          (Vector2 rightAngleCorner,float xLength,float yLength,float degreeTriRotation,
          MethodInfo *method)

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
  (*pcRam_?)(degreeTriRotation,&uStack_2,&uStack_4);
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
  fVar13 = (float)uStack_4 * fVar11;
  fVar14 = (float)uStack_4 * fVar12;
  fVar15 = uStack_5._4_4_ * fVar12;
  fVar16 = _UNK_? - (uStack_4._4_4_ * fVar11 + (float)uStack_5 * fVar12);
  fVar17 = (pVVar10->rightVector).x;
  fVar18 = (pVVar10->rightVector).y;
  fVar19 = (pVVar10->rightVector).x;
  fVar11 = uStack_5._4_4_ * fVar11;
  fVar20 = _UNK_? -
           ((float)uStack_4 * ((float)uStack_4 + (float)uStack_4) + (float)uStack_5 * fVar12);
  fVar12 = uStack_4._4_4_ * fVar12;
  fVar21 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
  fVar22 = (pVVar10->rightVector).y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar23 = (float)uStack_5 + (float)uStack_5;
  fVar24 = uStack_4._4_4_ + uStack_4._4_4_;
  fVar25 = (float)uStack_5 * fVar23;
  fVar26 = uStack_4._4_4_ * fVar24;
  fVar27 = (float)uStack_4 * fVar24;
  fVar28 = uStack_5._4_4_ * fVar23;
  fVar29 = uStack_4._4_4_ * fVar23;
  fVar23 = (float)uStack_4 * fVar23;
  fVar30 = (float)uStack_4 * ((float)uStack_4 + (float)uStack_4);
  fVar31 = (pVVar10->upVector).x;
  fVar32 = (pVVar10->upVector).y;
  fVar33 = (pVVar10->upVector).x;
  fVar24 = uStack_5._4_4_ * fVar24;
  fVar34 = (pVVar10->upVector).y;
  fVar35 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
  pLVar8 = (List_1_UnityEngine_Vector2_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar8,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
               );
  if (pLVar8 == (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pLVar8 = (List_1_UnityEngine_Vector2_ *)(*pcVar6)();
    return pLVar8;
  }
  FUN_?(pLVar8,rightAngleCorner,
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  fStack_36 = rightAngleCorner.x;
  fStack_37 = rightAngleCorner.y;
  FUN_?(pLVar8,CONCAT44(((fVar9 - (fVar30 + fVar25)) * fVar34 + (fVar28 + fVar27) * fVar33 +
                                 (fVar29 - fVar35) * 0.0) * yLength + fStack_37,
                                 ((fVar9 - (fVar26 + fVar25)) * fVar31 + (fVar27 - fVar28) * fVar32 +
                                 (fVar23 + fVar24) * 0.0) * yLength + fStack_36),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar8,CONCAT44((fVar20 * fVar22 + (fVar15 + fVar13) * fVar19 +
                                 (fVar12 - fVar21) * 0.0) * xLength + fStack_37,
                                 (fVar16 * fVar17 + (fVar13 - fVar15) * fVar18 +
                                 (fVar14 + fVar11) * 0.0) * xLength + fStack_36),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  return pLVar8;
}


/* List`1[UnityEngine.Vector3] CalcRATriangle3DPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangle3DPoints
          (Vector3 *rightAngleCorner,float xLength,float yLength,Quaternion *triangleRotation,
          MethodInfo *method)

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
  fVar1 = triangleRotation->x;
  fVar2 = triangleRotation->y;
  fVar3 = triangleRotation->z;
  fVar4 = triangleRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar1 * (fVar1 + fVar1);
  PStack_7.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_7.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar8 = (pVVar5->rightVector).z;
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar4 * (fVar1 + fVar1);
  fVar11 = fVar2 + fVar2;
  fVar12 = (_UNK_? - (fVar3 * fVar9 + fVar6)) * (float)PStack_7.FirstAxisSign;
  fVar13 = (_UNK_? - (fVar3 * fVar9 + fVar2 * fVar11)) * (float)PStack_7.Quadrant;
  fVar3 = (fVar1 * fVar11 - fVar4 * fVar9) * (float)PStack_7.FirstAxisSign;
  fVar14 = (fVar1 * fVar9 - fVar4 * fVar11) * (float)PStack_7.Quadrant;
  fVar15 = (fVar4 * fVar9 + fVar1 * fVar11) * (float)PStack_7.Quadrant;
  fVar16 = (fVar10 + fVar2 * fVar9) * (float)PStack_7.FirstAxisSign;
  fVar6 = _UNK_? - (fVar2 * fVar11 + fVar6);
  fStack_17 = triangleRotation->x;
  fStack_18 = triangleRotation->y;
  fStack_19 = triangleRotation->z;
  fStack_20 = triangleRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_7.Quadrant = (int32_t)(pVVar5->upVector).x;
  PStack_7.FirstAxisSign = (int32_t)(pVVar5->upVector).y;
  fVar21 = fStack_19 + fStack_19;
  fVar22 = fStack_17 * (fStack_17 + fStack_17);
  fVar23 = fStack_18 + fStack_18;
  fVar24 = fStack_17 * fVar21;
  fVar25 = fStack_20 * fVar21;
  fVar26 = fStack_18 * fVar21;
  fVar27 = fStack_20 * fVar23;
  fVar28 = fStack_20 * (fStack_17 + fStack_17);
  fVar29 = (pVVar5->upVector).z;
  fVar30 = (_UNK_? - (fStack_19 * fVar21 + fStack_18 * fVar23)) * (float)PStack_7.Quadrant;
  fVar31 = (fStack_17 * fVar23 - fVar25) * (float)PStack_7.FirstAxisSign;
  fVar32 = (fVar24 - fVar27) * (float)PStack_7.Quadrant;
  fVar33 = _UNK_? - (fStack_18 * fVar23 + fVar22);
  fVar22 = (_UNK_? - (fStack_19 * fVar21 + fVar22)) * (float)PStack_7.FirstAxisSign;
  fVar21 = (fVar25 + fStack_17 * fVar23) * (float)PStack_7.Quadrant;
  fVar23 = (fVar28 + fVar26) * (float)PStack_7.FirstAxisSign;
  fStack_17 = fVar25;
  fStack_18 = fStack_20;
  fStack_19 = fStack_20;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar34 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar35 = &(this->fields)._version;
    *piVar35 = *piVar35 + 1;
    pPVar36 = (this->fields)._items;
    if (pPVar36 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar37 = (this->fields)._size;
    if (uVar37 < (uint)pPVar36->max_length) {
      (this->fields)._size = uVar37 + 1;
      if ((uint)pPVar36->max_length <= uVar37) goto code_?;
      fVar38 = rightAngleCorner->y;
      fVar25 = rightAngleCorner->z;
      pPVar36->vector[(int)uVar37].Quadrant = (int32_t)rightAngleCorner->x;
      pPVar36->vector[(int)uVar37].FirstAxisSign = (int32_t)fVar38;
      pPVar36->vector[(int)uVar37].SecondAxisSign = (int32_t)fVar25;
    }
    else {
      PStack_7.SecondAxisSign = (int32_t)rightAngleCorner->z;
      PStack_7.Quadrant = (int32_t)rightAngleCorner->x;
      PStack_7.FirstAxisSign = (int32_t)rightAngleCorner->y;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_7,pMVar34->klass->rgctx_data[0xe].method);
    }
    pMVar34 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_7.Quadrant = (int32_t)rightAngleCorner->x;
    PStack_7.FirstAxisSign = (int32_t)rightAngleCorner->y;
    fVar31 = (fVar30 + fVar31 + (fVar27 + fVar24) * fVar29) * yLength + (float)PStack_7.Quadrant;
    fVar21 = (fVar22 + fVar21 + (fVar26 - fVar28) * fVar29) * yLength +
             (float)PStack_7.FirstAxisSign;
    fVar29 = (fVar32 + fVar23 + fVar33 * fVar29) * yLength + rightAngleCorner->z;
    piVar35 = &(this->fields)._version;
    *piVar35 = *piVar35 + 1;
    pPVar36 = (this->fields)._items;
    if (pPVar36 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar37 = (this->fields)._size;
    if (uVar37 < (uint)pPVar36->max_length) {
      (this->fields)._size = uVar37 + 1;
      if ((uint)pPVar36->max_length <= uVar37) goto code_?;
      pPVar36->vector[(int)uVar37].Quadrant = (int32_t)fVar31;
      pPVar36->vector[(int)uVar37].FirstAxisSign = (int32_t)fVar21;
      pPVar36->vector[(int)uVar37].SecondAxisSign = (int32_t)fVar29;
    }
    else {
      PStack_7.FirstAxisSign = (int32_t)fVar21;
      PStack_7.Quadrant = (int32_t)fVar31;
      PStack_7.SecondAxisSign = (int32_t)fVar29;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_7,pMVar34->klass->rgctx_data[0xe].method);
    }
    pMVar34 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_7.Quadrant = (int32_t)rightAngleCorner->x;
    PStack_7.FirstAxisSign = (int32_t)rightAngleCorner->y;
    fVar3 = (fVar13 + fVar3 + (fVar4 * fVar11 + fVar1 * fVar9) * fVar8) * xLength +
             (float)PStack_7.Quadrant;
    fVar2 = (fVar12 + fVar15 + (fVar2 * fVar9 - fVar10) * fVar8) * xLength +
             (float)PStack_7.FirstAxisSign;
    fVar1 = (fVar14 + fVar16 + fVar6 * fVar8) * xLength + rightAngleCorner->z;
    piVar35 = &(this->fields)._version;
    *piVar35 = *piVar35 + 1;
    pPVar36 = (this->fields)._items;
    if (pPVar36 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar37 = (this->fields)._size;
      if (uVar37 < (uint)pPVar36->max_length) {
        (this->fields)._size = uVar37 + 1;
        if ((uint)pPVar36->max_length <= uVar37) {
code_?:
          FUN_?();
          pcVar39 = (code *)swi(3);
          pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
          return pLVar40;
        }
        pPVar36->vector[(int)uVar37].Quadrant = (int32_t)fVar3;
        pPVar36->vector[(int)uVar37].FirstAxisSign = (int32_t)fVar2;
        pPVar36->vector[(int)uVar37].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_7.FirstAxisSign = (int32_t)fVar2;
        PStack_7.Quadrant = (int32_t)fVar3;
        PStack_7.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_7,pMVar34->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar39 = (code *)swi(3);
  pLVar40 = (List_1_UnityEngine_Vector3_ *)(*pcVar39)();
  return pLVar40;
}


/* Single CalcRATriangleAltitude(Vector2) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleAltitude
                (Vector2 sides,MethodInfo *method)

{
  uStackX_18 = sides.x;
  uStackX_1c = sides.y;
  fVar1 = uStackX_1c * uStackX_1c + uStackX_18 * uStackX_18;
  if (0.0 <= fVar1) {
    return (uStackX_1c * uStackX_18) / SQRT(fVar1);
  }
  fVar1 = (float)FUN_?(fVar1);
  return (uStackX_1c * uStackX_18) / fVar1;
}


/* Single CalcRATriangleHypotenuse(Single, Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleHypotenuse
                (float side0,float side1,MethodInfo *method)

{
  fVar1 = side0 * side0 + side1 * side1;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    if (((uint)fVar1 & 0x7fffff) != 0) {
      return (float)((uint)fVar1 | 0x400000);
    }
    if ((int)fVar1 < 0) goto code_?;
  }
  if (-1 < (int)fVar1 || ABS(fVar1) == 0.0) {
    return SQRT(fVar1);
  }
code_?:
  fVar1 = (float)FUN_?(&UNK_?,5,0xffc00000,1,8,0x21,fVar1,0,1);
  return fVar1;
}


/* Single CalcRATriangleHypotenuse(Vector2) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_CalcRATriangleHypotenuse_1
                (Vector2 sides,MethodInfo *method)

{
  fStackX_18 = sides.x;
  fStackX_1c = sides.y;
  fVar1 = fStackX_1c * fStackX_1c + fStackX_18 * fStackX_18;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    if (((uint)fVar1 & 0x7fffff) != 0) {
      return (float)((uint)fVar1 | 0x400000);
    }
    if ((int)fVar1 < 0) goto code_?;
  }
  if (-1 < (int)fVar1 || ABS(fVar1) == 0.0) {
    return SQRT(fVar1);
  }
code_?:
  fVar1 = (float)FUN_?(&UNK_?,5,0xffc00000,1,8,0x21,fVar1,0,1);
  return fVar1;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Vector2, Vector2, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Contains2DPoint
               (Vector2 point,Vector2 p0,Vector2 p1,Vector2 p2,TriangleEpsilon *epsilon,
               MethodInfo *method)

{
  VStack_1 = p2;
  VStack_2 = p1;
  VStack_3 = p0;
  VStack_4 = point;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = VStack_4.y;
  fVar6 = VStack_3.y;
  fVar7 = VStack_2.y;
  fVar8 = VStack_1.y;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  aTStack_11[0]._areaEps = epsilon->_areaEps;
  aTStack_11[0]._extrudeEps = epsilon->_extrudeEps;
  aTStack_11[0]._wireEps = epsilon->_wireEps;
  VStack_1.y = fVar8;
  VStack_2.y = fVar7;
  VStack_3.y = fVar6;
  VStack_4.y = fVar5;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  bVar14 = TriangleMath_Contains3DPoint
                    ((Vector3 *)&VStack_4,0,(Vector3 *)&VStack_3,(Vector3 *)&VStack_2,
                     (Vector3 *)&VStack_1,aTStack_11,(MethodInfo *)0x0);
  return bVar14;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Contains3DPoint
               (Vector3 *point,bool checkOnPlane,Vector3 *p0,Vector3 *p1,Vector3 *p2,
               TriangleEpsilon *epsilon,MethodInfo *method)

{
  uVar1 = p1->x;
  uVar2 = p1->y;
  uVar3 = p0->x;
  uVar4 = p0->y;
  fVar5 = p1->z - p0->z;
  fVar6 = (float)uVar1 - (float)uVar3;
  fVar7 = (float)uVar2 - (float)uVar4;
  uVar8 = p1->x;
  uVar9 = p1->y;
  uVar10 = p2->x;
  uVar11 = p2->y;
  fVar12 = p2->z - p1->z;
  uVar13 = p0->x;
  uVar14 = p0->y;
  uVar15 = p2->x;
  uVar16 = p2->y;
  fVar17 = (float)uVar13 - (float)uVar15;
  fVar18 = p0->z - p2->z;
  fVar19 = (float)uVar14 - (float)uVar16;
  fVar20 = fVar7 * (float)((uint)fVar18 ^ _UNK_?) -
           fVar5 * (float)((uint)fVar19 ^ _UNK_?);
  fVar21 = fVar5 * (float)((uint)fVar17 ^ _UNK_?) -
           fVar6 * (float)((uint)fVar18 ^ _UNK_?);
  fVar22 = fVar6 * (float)((uint)fVar19 ^ _UNK_?) -
           fVar7 * (float)((uint)fVar17 ^ _UNK_?);
  uStack_23 = CONCAT44(fVar21,fVar20);
  fStack_24 = fVar22;
  fVar25 = (float)FUN_?(&uStack_23);
  if (_UNK_? < fVar25) {
    fStack_24 = fVar22 / fVar25;
    uStack_23 = CONCAT44(fVar21 / fVar25,fVar20 / fVar25);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_23._0_4_ = (pVVar26->zeroVector).x;
    uStack_23._4_4_ = (pVVar26->zeroVector).y;
    fStack_24 = (pVVar26->zeroVector).z;
  }
  fVar21 = fStack_24;
  fVar20 = uStack_23._4_4_;
  fVar25 = (float)uStack_23;
  if ((checkOnPlane == 0) ||
     (uVar27 = p0->x, uVar28 = p0->y, uVar29 = point->x, uVar30 = point->y,
     fVar22 = (float)((uint)(((float)uVar30 - (float)uVar28) * uStack_23._4_4_ +
                             ((float)uVar29 - (float)uVar27) * (float)uStack_23 +
                            (point->z - p0->z) * fStack_24) & _UNK_?),
     fVar22 < epsilon->_extrudeEps || fVar22 == epsilon->_extrudeEps)) {
    fVar31 = fVar7 * fStack_24 - fVar5 * uStack_23._4_4_;
    fVar22 = fVar5 * (float)uStack_23 - fVar6 * fStack_24;
    fVar5 = fVar6 * uStack_23._4_4_ - fVar7 * (float)uStack_23;
    uStack_23 = CONCAT44(fVar22,fVar31);
    fStack_24 = fVar5;
    fVar6 = (float)FUN_?(&uStack_23);
    if (_UNK_? < fVar6) {
      fVar5 = fVar5 / fVar6;
      uStack_23 = CONCAT44(fVar22 / fVar6,fVar31 / fVar6);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_23._0_4_ = (pVVar26->zeroVector).x;
      uStack_23._4_4_ = (pVVar26->zeroVector).y;
      fVar5 = (pVVar26->zeroVector).z;
    }
    uVar32 = p0->x;
    uVar33 = p0->y;
    uVar34 = point->x;
    uVar35 = point->y;
    fVar5 = ((float)uVar35 - (float)uVar33) * uStack_23._4_4_ +
             ((float)uVar34 - (float)uVar32) * (float)uStack_23 + (point->z - p0->z) * fVar5;
    if (fVar5 < epsilon->_areaEps || fVar5 == epsilon->_areaEps) {
      fVar7 = fVar21 * ((float)uVar11 - (float)uVar9) - fVar12 * fVar20;
      fVar22 = fVar12 * fVar25 - ((float)uVar10 - (float)uVar8) * fVar21;
      fVar5 = ((float)uVar10 - (float)uVar8) * fVar20 - fVar25 * ((float)uVar11 - (float)uVar9);
      uStack_23 = CONCAT44(fVar22,fVar7);
      fStack_24 = fVar5;
      fVar6 = (float)FUN_?(&uStack_23);
      fVar12 = _UNK_?;
      if (_UNK_? < fVar6) {
        fVar5 = fVar5 / fVar6;
        uStack_23 = CONCAT44(fVar22 / fVar6,fVar7 / fVar6);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_23._0_4_ = (pVVar26->zeroVector).x;
        uStack_23._4_4_ = (pVVar26->zeroVector).y;
        fVar5 = (pVVar26->zeroVector).z;
      }
      uVar36 = p1->x;
      uVar37 = p1->y;
      uVar38 = point->x;
      uVar39 = point->y;
      fVar5 = ((float)uVar39 - (float)uVar37) * uStack_23._4_4_ +
               ((float)uVar38 - (float)uVar36) * (float)uStack_23 + (point->z - p1->z) * fVar5;
      if (fVar5 < epsilon->_areaEps || fVar5 == epsilon->_areaEps) {
        fVar5 = fVar21 * fVar19 - fVar18 * fVar20;
        fVar18 = fVar18 * fVar25 - fVar17 * fVar21;
        fVar25 = fVar17 * fVar20 - fVar25 * fVar19;
        uStack_23 = CONCAT44(fVar18,fVar5);
        fStack_24 = fVar25;
        fVar19 = (float)FUN_?(&uStack_23);
        if (fVar12 < fVar19) {
          fVar25 = fVar25 / fVar19;
          uStack_23 = CONCAT44(fVar18 / fVar19,fVar5 / fVar19);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_23._0_4_ = (pVVar26->zeroVector).x;
          uStack_23._4_4_ = (pVVar26->zeroVector).y;
          fVar25 = (pVVar26->zeroVector).z;
        }
        uVar40 = p2->x;
        uVar41 = p2->y;
        uVar42 = point->x;
        uVar43 = point->y;
        fVar25 = ((float)uVar43 - (float)uVar41) * uStack_23._4_4_ +
                 ((float)uVar42 - (float)uVar40) * (float)uStack_23 + (point->z - p2->z) * fVar25;
        if (fVar25 < epsilon->_areaEps || fVar25 == epsilon->_areaEps) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Single GetEqTriangleAltitude(Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_GetEqTriangleAltitude
                (float sideLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__TriangleMath);
  }
  return sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor;
}


/* Single GetEqTriangleCentroidAltitude(Single) */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_GetEqTriangleCentroidAltitude
                (float sideLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__TriangleMath);
  }
  return (sideLength * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor) /
         _UNK_?;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_Raycast
               (Ray *ray,float *t,Vector3 *p0,Vector3 *p1,Vector3 *p2,TriangleEpsilon *epsilon,
               MethodInfo *method)

{
  pVVar1 = p2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    pVVar1 = p2;
  }
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  VStack_3.x = pVVar1->x;
  VStack_3.y = pVVar1->y;
  VStack_3.z = pVVar1->z;
  RStack_4.m_Origin.x = p1->x;
  RStack_4.m_Origin.y = p1->y;
  RStack_4.m_Origin.z = p1->z;
  TStack_5._areaEps = p0->x;
  TStack_5._extrudeEps = p0->y;
  TStack_5._wireEps = p0->z;
  *t = 0.0;
  p2 = pVVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&QStack_2,(Vector3 *)&TStack_5,&RStack_4.m_Origin,&VStack_3,
             in_stack_6);
  uStack_7._0_4_ = (ray->m_Direction).y;
  uStack_7._4_4_ = (ray->m_Direction).z;
  fVar8 = QStack_2.x;
  fVar9 = QStack_2.y;
  fVar10 = QStack_2.z;
  fVar11 = (ray->m_Direction).x * QStack_2.x + (float)(undefined4)uStack_7 * QStack_2.y +
           (float)uStack_7._4_4_ * QStack_2.z;
  fVar12 = (float)((uint)((ray->m_Origin).x * QStack_2.x + (ray->m_Origin).y * QStack_2.y +
                         (ray->m_Origin).z * QStack_2.z) ^ _UNK_?) - QStack_2.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar13 = epsilon;
  fVar14 = (float)((uint)fVar11 & (uint)_UNK_?);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar14 * _UNK_?;
  if (fVar14 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if ((fVar16 <= (float)((uint)(0.0 - fVar11) & (uint)_UNK_?)) &&
     (fVar12 = fVar12 / fVar11, 0.0 < fVar12)) {
    uVar17 = (ray->m_Direction).x;
    uVar18 = (ray->m_Direction).y;
    TStack_19._areaEps = (ray->m_Origin).x;
    TStack_19._extrudeEps = (ray->m_Origin).y;
    fVar11 = (ray->m_Direction).z;
    fVar15 = (float)uVar17 * fVar12 + TStack_19._areaEps;
    fVar16 = (float)uVar18 * fVar12 + TStack_19._extrudeEps;
    fVar14 = (ray->m_Origin).z;
    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    TStack_5._wireEps = pTVar13->_wireEps;
    TStack_5._areaEps = pTVar13->_areaEps;
    TStack_5._extrudeEps = pTVar13->_extrudeEps;
    RStack_4.m_Origin.z = pVVar1->z;
    VStack_3.z = p1->z;
    RStack_4.m_Origin.x = pVVar1->x;
    RStack_4.m_Origin.y = pVVar1->y;
    QStack_20.z = p0->z;
    VStack_3.x = p1->x;
    VStack_3.y = p1->y;
    QStack_20.x = p0->x;
    QStack_20.y = p0->y;
    TStack_19._extrudeEps = fVar16;
    TStack_19._areaEps = fVar15;
    TStack_19._wireEps = fVar11 * fVar12 + fVar14;
    bVar21 = TriangleMath_Contains3DPoint
                       ((Vector3 *)&TStack_19,0,(Vector3 *)&QStack_20,&VStack_3,
                        &RStack_4.m_Origin,&TStack_5,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      *t = fVar12;
      return 1;
    }
  }
  if ((pTVar13->_extrudeEps == 0.0) ||
     (TStack_19._areaEps = (ray->m_Direction).x, TStack_19._extrudeEps = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)(fVar9 * TStack_19._extrudeEps + fVar8 * TStack_19._areaEps +
                   fVar10 * (ray->m_Direction).z) & (uint)_UNK_?))) {
    bVar21 = 0;
  }
  else {
    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    TStack_19._areaEps = pTVar13->_areaEps;
    TStack_19._extrudeEps = pTVar13->_extrudeEps;
    TStack_19._wireEps = pTVar13->_wireEps;
    TStack_5._wireEps = pVVar1->z;
    RStack_4.m_Origin.z = p1->z;
    QStack_20.x = QStack_2.x;
    QStack_20.y = QStack_2.y;
    TStack_5._areaEps = pVVar1->x;
    TStack_5._extrudeEps = pVVar1->y;
    VStack_3.z = p0->z;
    RStack_4.m_Origin.x = p1->x;
    RStack_4.m_Origin.y = p1->y;
    VStack_3.x = p0->x;
    VStack_3.y = p0->y;
    QStack_20.z = fVar10;
    pOVar22 = TriangleMath_Calc3DTriangleOBB
                        (aOStack_23,&VStack_3,&RStack_4.m_Origin,(Vector3 *)&TStack_5,
                         (Vector3 *)&QStack_20,&TStack_19,(MethodInfo *)0x0);
    TStack_19._areaEps = 0.0;
    TStack_19._extrudeEps = 0.0;
    uVar24._0_4_ = (pOVar22->_size).x;
    uVar24._4_4_ = (pOVar22->_size).y;
    RStack_4.m_Origin.x = (pOVar22->_size).x;
    RStack_4.m_Origin.y = (pOVar22->_size).y;
    fVar8 = (pOVar22->_size).z;
    RStack_4.m_Direction.x = (pOVar22->_center).x;
    RStack_4.m_Direction.y = (pOVar22->_center).y;
    fVar9 = (pOVar22->_center).z;
    fStack_25 = (pOVar22->_rotation).x;
    fStack_26 = (pOVar22->_rotation).y;
    fStack_27 = (pOVar22->_rotation).z;
    fStack_28 = (pOVar22->_rotation).w;
    uStack_29 = *(undefined4 *)&pOVar22->_isValid;
    RStack_4.m_Origin.z = fVar8;
    RStack_4.m_Direction.z = fVar9;
    pVVar1 = p2;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
      pVVar1 = p2;
    }
    p2._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
    if (cRam_? == '\0') {
      p2 = pVVar1;
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    p2._0_4_ = 0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar30 = (ray->m_Direction).y;
    uVar31 = (ray->m_Direction).z;
    QStack_2.y = fStack_26;
    QStack_2.x = fStack_25;
    QStack_2.z = fStack_27;
    QStack_2.w = fStack_28;
    TStack_5._extrudeEps = RStack_4.m_Direction.y;
    TStack_5._areaEps = RStack_4.m_Direction.x;
    RStack_4.m_Origin.x = (ray->m_Origin).x;
    RStack_4.m_Origin.y = (ray->m_Origin).y;
    uVar32 = *(undefined8 *)&(ray->m_Origin).z;
    TStack_19._wireEps = 0.0;
    RStack_4.m_Origin.z = (float)uVar32;
    RStack_4.m_Direction.x = (float)((ulonglong)uVar32 >> 0x20);
    TStack_5._wireEps = fVar9;
    QStack_20._0_8_ = uVar24;
    QStack_20.z = fVar8;
    RStack_4.m_Direction.y = (float)uVar30;
    RStack_4.m_Direction.z = (float)uVar31;
    bVar21 = BoxMath::BoxMath_Raycast_1
                       (&RStack_4,(float *)&p2,(Vector3 *)&TStack_5,(Vector3 *)&QStack_20,
                        &QStack_2,(BoxEpsilon *)&TStack_19,(MethodInfo *)0x0);
  }
  return bVar21;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Vector3, Vector3, TriangleEpsilon) */

bool Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_RaycastWire
               (Ray *ray,float *t,Vector3 *p0,Vector3 *p1,Vector3 *p2,TriangleEpsilon *epsilon,
               MethodInfo *method)

{
  pVVar1 = p2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    pVVar1 = p2;
  }
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  RStack_3.m_Origin.x = pVVar1->x;
  RStack_3.m_Origin.y = pVVar1->y;
  RStack_3.m_Origin.z = pVVar1->z;
  QStack_4.x = p1->x;
  QStack_4.y = p1->y;
  TStack_5._areaEps = p0->x;
  TStack_5._extrudeEps = p0->y;
  QStack_4.z = p1->z;
  TStack_5._wireEps = p0->z;
  *t = 0.0;
  p2 = pVVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
            ((Plane *)&QStack_2,(Vector3 *)&TStack_5,(Vector3 *)&QStack_4,&RStack_3.m_Origin
             ,in_stack_6);
  uStack_7._0_4_ = (ray->m_Direction).y;
  uStack_7._4_4_ = (ray->m_Direction).z;
  fVar8 = QStack_2.x;
  fVar9 = QStack_2.y;
  fVar10 = QStack_2.z;
  fVar11 = (ray->m_Direction).x * QStack_2.x + (float)(undefined4)uStack_7 * QStack_2.y +
           (float)uStack_7._4_4_ * QStack_2.z;
  fVar12 = (float)((uint)((ray->m_Origin).x * QStack_2.x + (ray->m_Origin).y * QStack_2.y +
                         (ray->m_Origin).z * QStack_2.z) ^ _UNK_?) - QStack_2.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar13 = epsilon;
  fVar14 = (float)((uint)fVar11 & (uint)_UNK_?);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar14 * _UNK_?;
  if (fVar14 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if (((float)((uint)(0.0 - fVar11) & (uint)_UNK_?) < fVar16) ||
     (fVar12 = fVar12 / fVar11, fVar12 <= 0.0)) {
code_?:
    if ((pTVar13->_extrudeEps == 0.0) ||
       (VStack_17.x = (ray->m_Direction).x, VStack_17.y = (ray->m_Direction).y,
       _UNK_? <=
       (float)((uint)(fVar9 * VStack_17.y + fVar8 * VStack_17.x + fVar10 * (ray->m_Direction).z) &
              (uint)_UNK_?))) {
      bVar18 = 0;
    }
    else {
      if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      TStack_5._areaEps = pTVar13->_areaEps;
      TStack_5._extrudeEps = pTVar13->_extrudeEps;
      TStack_5._wireEps = pTVar13->_wireEps;
      RStack_3.m_Origin.z = pVVar1->z;
      QStack_4.x = QStack_2.x;
      QStack_4.y = QStack_2.y;
      RStack_3.m_Origin.x = pVVar1->x;
      RStack_3.m_Origin.y = pVVar1->y;
      QStack_2.z = p1->z;
      VStack_17.z = p0->z;
      QStack_2.x = p1->x;
      QStack_2.y = p1->y;
      VStack_17.x = p0->x;
      VStack_17.y = p0->y;
      QStack_4.z = fVar10;
      pOVar19 = TriangleMath_Calc3DTriangleOBB
                          (aOStack_20,&VStack_17,(Vector3 *)&QStack_2,&RStack_3.m_Origin,
                           (Vector3 *)&QStack_4,&TStack_5,(MethodInfo *)0x0);
      VStack_17.x = 0.0;
      VStack_17.y = 0.0;
      uVar21._0_4_ = (pOVar19->_size).x;
      uVar21._4_4_ = (pOVar19->_size).y;
      RStack_3.m_Origin.x = (pOVar19->_size).x;
      RStack_3.m_Origin.y = (pOVar19->_size).y;
      fVar8 = (pOVar19->_size).z;
      RStack_3.m_Direction.x = (pOVar19->_center).x;
      RStack_3.m_Direction.y = (pOVar19->_center).y;
      fVar9 = (pOVar19->_center).z;
      fStack_22 = (pOVar19->_rotation).x;
      fStack_23 = (pOVar19->_rotation).y;
      fStack_24 = (pOVar19->_rotation).z;
      fStack_25 = (pOVar19->_rotation).w;
      uStack_26 = *(undefined4 *)&pOVar19->_isValid;
      RStack_3.m_Origin.z = fVar8;
      RStack_3.m_Direction.z = fVar9;
      pVVar1 = p2;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
        pVVar1 = p2;
      }
      p2._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
      if (cRam_? == '\0') {
        p2 = pVVar1;
        FUN_?(&TypeInfo__RTG__BoxMath);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      p2._0_4_ = 0;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar27 = (ray->m_Direction).y;
      uVar28 = (ray->m_Direction).z;
      QStack_4.y = fStack_23;
      QStack_4.x = fStack_22;
      QStack_4.z = fStack_24;
      QStack_4.w = fStack_25;
      TStack_5._extrudeEps = RStack_3.m_Direction.y;
      TStack_5._areaEps = RStack_3.m_Direction.x;
      RStack_3.m_Origin.x = (ray->m_Origin).x;
      RStack_3.m_Origin.y = (ray->m_Origin).y;
      uVar29 = *(undefined8 *)&(ray->m_Origin).z;
      VStack_17.z = 0.0;
      RStack_3.m_Origin.z = (float)uVar29;
      RStack_3.m_Direction.x = (float)((ulonglong)uVar29 >> 0x20);
      QStack_2.z = fVar8;
      TStack_5._wireEps = fVar9;
      QStack_2._0_8_ = uVar21;
      RStack_3.m_Direction.y = (float)uVar27;
      RStack_3.m_Direction.z = (float)uVar28;
      bVar18 = BoxMath::BoxMath_Raycast_1
                         (&RStack_3,(float *)&p2,(Vector3 *)&TStack_5,(Vector3 *)&QStack_2,
                          &QStack_4,(BoxEpsilon *)&VStack_17,(MethodInfo *)0x0);
    }
  }
  else {
    uVar30 = (ray->m_Direction).x;
    uVar31 = (ray->m_Direction).y;
    VStack_17.x = (ray->m_Origin).x;
    VStack_17.y = (ray->m_Origin).y;
    TStack_5._wireEps = p1->z;
    fVar15 = (float)uVar30 * fVar12 + VStack_17.x;
    fVar14 = (ray->m_Direction).z * fVar12 + (ray->m_Origin).z;
    fVar16 = (float)uVar31 * fVar12 + VStack_17.y;
    TStack_5._areaEps = p1->x;
    TStack_5._extrudeEps = p1->y;
    QStack_4.x = p0->x;
    QStack_4.y = p0->y;
    RStack_3.m_Origin.y = fVar16;
    RStack_3.m_Origin.x = fVar15;
    RStack_3.m_Origin.z = fVar14;
    QStack_4.z = p0->z;
    fVar11 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                       (&RStack_3.m_Origin,(Vector3 *)&QStack_4,(Vector3 *)&TStack_5,
                        (MethodInfo *)0x0);
    if (pTVar13->_wireEps < fVar11) {
      TStack_5._wireEps = pVVar1->z;
      TStack_5._areaEps = pVVar1->x;
      TStack_5._extrudeEps = pVVar1->y;
      QStack_4.x = p1->x;
      QStack_4.y = p1->y;
      QStack_4.z = p1->z;
      RStack_3.m_Origin.z = fVar14;
      fVar11 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         (&RStack_3.m_Origin,(Vector3 *)&QStack_4,(Vector3 *)&TStack_5,
                          (MethodInfo *)0x0);
      if (pTVar13->_wireEps < fVar11) {
        TStack_5._wireEps = p0->z;
        TStack_5._areaEps = p0->x;
        TStack_5._extrudeEps = p0->y;
        QStack_4.x = pVVar1->x;
        QStack_4.y = pVVar1->y;
        QStack_4.z = pVVar1->z;
        RStack_3.m_Origin.z = fVar14;
        fVar11 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (&RStack_3.m_Origin,(Vector3 *)&QStack_4,(Vector3 *)&TStack_5,
                            (MethodInfo *)0x0);
        if (pTVar13->_wireEps < fVar11) goto code_?;
      }
    }
    *t = fVar12;
    bVar18 = 1;
  }
  return bVar18;
}


/* TriangleMath() */

void Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (_UNK_? < 0.0) {
    fVar1 = (float)FUN_?(_UNK_?);
  }
  else {
    fVar1 = SQRT(_UNK_?);
  }
  TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor = fVar1 * _UNK_?;
  return;
}


/* Single get_EqTriangleAltFactor() */

float Assembly-CSharp.dll::RTG::TriangleMath::TriangleMath_get_EqTriangleAltFactor
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__TriangleMath);
  }
  return TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor;
}

