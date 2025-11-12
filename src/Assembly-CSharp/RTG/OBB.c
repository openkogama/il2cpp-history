
/* Void Encapsulate(OBB) */

void Assembly-CSharp.dll::RTG::OBB::OBB_Encapsulate(OBB *this,OBB *otherOBB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1._center.y = 0.0;
  AStack_1._center.z = 0.0;
  AStack_1._size.x = 0.0;
  AStack_1._size.y = 0.0;
  AStack_1._size.z = 0.0;
  AStack_1._center.x = 0.0;
  AStack_1._isValid = 0;
  AStack_1._25_3_ = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_2.x = (otherOBB->_rotation).x;
  QStack_2.y = (otherOBB->_rotation).y;
  QStack_2.z = (otherOBB->_rotation).z;
  QStack_2.w = (otherOBB->_rotation).w;
  VStack_3.z = (otherOBB->_size).z;
  VStack_3.x = (otherOBB->_size).x;
  VStack_3.y = (otherOBB->_size).y;
  VStack_4.x = (otherOBB->_center).x;
  VStack_4.y = (otherOBB->_center).y;
  VStack_4.z = (otherOBB->_center).z;
  pLVar5 = BoxMath::BoxMath_CalcBoxCornerPoints
                      (&VStack_4,&VStack_3,&QStack_2,(MethodInfo *)0x0);
  uVar6._0_4_ = (this->_center).x;
  uVar6._4_4_ = (this->_center).y;
  fVar7 = (this->_center).z;
  uVar8._0_4_ = (this->_rotation).x;
  uVar8._4_4_ = (this->_rotation).y;
  uVar9._0_4_ = (this->_rotation).z;
  uVar9._4_4_ = (this->_rotation).w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar10->oneVector).x;
  VStack_4.y = (pVVar10->oneVector).y;
  VStack_4.z = (pVVar10->oneVector).z;
  MStack_11.m00 = 0.0;
  MStack_11.m10 = 0.0;
  MStack_11.m20 = 0.0;
  MStack_11.m30 = 0.0;
  MStack_11.m01 = 0.0;
  MStack_11.m11 = 0.0;
  MStack_11.m21 = 0.0;
  MStack_11.m31 = 0.0;
  MStack_11.m02 = 0.0;
  MStack_11.m12 = 0.0;
  MStack_11.m22 = 0.0;
  MStack_11.m32 = 0.0;
  MStack_11.m03 = 0.0;
  MStack_11.m13 = 0.0;
  MStack_11.m23 = 0.0;
  MStack_11.m33 = 0.0;
  pcVar12 = pcRam_?;
  VStack_3._0_8_ = uVar6;
  VStack_3.z = fVar7;
  QStack_2._0_8_ = uVar8;
  QStack_2._8_8_ = uVar9;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&VStack_3,&QStack_2,&VStack_4,&MStack_11);
  MStack_13.m00 = MStack_11.m00;
  MStack_13.m10 = MStack_11.m10;
  MStack_13.m20 = MStack_11.m20;
  MStack_13.m30 = MStack_11.m30;
  MStack_13.m01 = MStack_11.m01;
  MStack_13.m11 = MStack_11.m11;
  MStack_13.m21 = MStack_11.m21;
  MStack_13.m31 = MStack_11.m31;
  MStack_13.m02 = MStack_11.m02;
  MStack_13.m12 = MStack_11.m12;
  MStack_13.m22 = MStack_11.m22;
  MStack_13.m32 = MStack_11.m32;
  MStack_13.m03 = MStack_11.m03;
  MStack_13.m13 = MStack_11.m13;
  MStack_13.m23 = MStack_11.m23;
  MStack_13.m33 = MStack_11.m33;
  aMStack_14[0].m00 = 0.0;
  aMStack_14[0].m10 = 0.0;
  aMStack_14[0].m20 = 0.0;
  aMStack_14[0].m30 = 0.0;
  aMStack_14[0].m01 = 0.0;
  aMStack_14[0].m11 = 0.0;
  aMStack_14[0].m21 = 0.0;
  aMStack_14[0].m31 = 0.0;
  aMStack_14[0].m02 = 0.0;
  aMStack_14[0].m12 = 0.0;
  aMStack_14[0].m22 = 0.0;
  aMStack_14[0].m32 = 0.0;
  aMStack_14[0].m03 = 0.0;
  aMStack_14[0].m13 = 0.0;
  aMStack_14[0].m23 = 0.0;
  aMStack_14[0].m33 = 0.0;
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&MStack_13,aMStack_14);
  MStack_13.m00 = aMStack_14[0].m00;
  MStack_13.m10 = aMStack_14[0].m10;
  MStack_13.m20 = aMStack_14[0].m20;
  MStack_13.m30 = aMStack_14[0].m30;
  MStack_13.m01 = aMStack_14[0].m01;
  MStack_13.m11 = aMStack_14[0].m11;
  MStack_13.m21 = aMStack_14[0].m21;
  MStack_13.m31 = aMStack_14[0].m31;
  MStack_13.m02 = aMStack_14[0].m02;
  MStack_13.m12 = aMStack_14[0].m12;
  MStack_13.m22 = aMStack_14[0].m22;
  MStack_13.m32 = aMStack_14[0].m32;
  MStack_13.m03 = aMStack_14[0].m03;
  MStack_13.m13 = aMStack_14[0].m13;
  MStack_13.m23 = aMStack_14[0].m23;
  MStack_13.m33 = aMStack_14[0].m33;
  pLVar5 = Matrix4x4Ex::Matrix4x4Ex_TransformPoints(&MStack_13,pLVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1._isValid = 1;
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15 = (pVVar10->zeroVector).x;
  uVar16 = (pVVar10->zeroVector).y;
  AStack_1._center.z = (pVVar10->zeroVector).z;
  AStack_1._size.x = (this->_size).x;
  AStack_1._size.y = (this->_size).y;
  AStack_1._size.z = (this->_size).z;
  AStack_1._center.x = (float)uVar15;
  AStack_1._center.y = (float)uVar16;
  AABB::AABB_Encapsulate_1
            (&AStack_1,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar5,(MethodInfo *)0x0);
  fVar17 = (this->_rotation).x;
  fVar18 = (this->_rotation).y;
  fVar19 = (this->_rotation).z;
  fVar20 = (this->_rotation).w;
  fVar21 = fVar19 + fVar19;
  fVar22 = fVar18 + fVar18;
  fVar7 = fVar17 * (fVar17 + fVar17);
  fVar23 = fVar20 * (fVar17 + fVar17);
  uVar24 = (this->_center).x;
  uVar25 = (this->_center).y;
  fVar26 = _UNK_? - (fVar19 * fVar21 + fVar7);
  fVar27 = _UNK_? - (fVar18 * fVar22 + fVar7);
  fVar7 = (this->_center).z;
  (this->_center).x =
       (_UNK_? - (fVar19 * fVar21 + fVar18 * fVar22)) * AStack_1._center.x +
       (fVar17 * fVar22 - fVar20 * fVar21) * AStack_1._center.y +
       (fVar20 * fVar22 + fVar17 * fVar21) * AStack_1._center.z + (float)uVar24;
  (this->_center).y =
       fVar26 * AStack_1._center.y + (fVar20 * fVar21 + fVar17 * fVar22) * AStack_1._center.x +
       (fVar18 * fVar21 - fVar23) * AStack_1._center.z + (float)uVar25;
  (this->_size).x = AStack_1._size.x;
  (this->_size).y = AStack_1._size.y;
  (this->_center).z =
       (fVar17 * fVar21 - fVar20 * fVar22) * AStack_1._center.x +
       (fVar23 + fVar18 * fVar21) * AStack_1._center.y + fVar27 * AStack_1._center.z + fVar7;
  (this->_size).z = AStack_1._size.z;
  return;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::OBB::OBB_GetCenterAndCornerPoints(OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            OBB_GetCornerPoints(this,(MethodInfo *)0x0);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    PStack_2.Quadrant = (int32_t)(this->_center).x;
    PStack_2.FirstAxisSign = (int32_t)(this->_center).y;
    PStack_2.SecondAxisSign = (int32_t)(this->_center).z;
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pPVar4 = (this_00->fields)._items;
    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if ((uint)pPVar4->max_length <= uVar5) {
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_2,pMVar1->klass->rgctx_data[0xe].method);
        return (List_1_UnityEngine_Vector3_ *)this_00;
      }
      (this_00->fields)._size = uVar5 + 1;
      if (uVar5 < (uint)pPVar4->max_length) {
        pPVar4->vector[(int)uVar5].Quadrant = PStack_2.Quadrant;
        pPVar4->vector[(int)uVar5].FirstAxisSign = PStack_2.FirstAxisSign;
        pPVar4->vector[(int)uVar5].SecondAxisSign = PStack_2.SecondAxisSign;
        return (List_1_UnityEngine_Vector3_ *)this_00;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
      return pLVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
  return pLVar7;
}


/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,OBB *this,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  uVar3._0_4_ = (this->_size).x;
  uVar3._4_4_ = (this->_size).y;
  fVar4 = (this->_size).z;
  uVar5._0_4_ = (this->_rotation).x;
  uVar5._4_4_ = (this->_rotation).y;
  uVar6._0_4_ = (this->_rotation).z;
  uVar6._4_4_ = (this->_rotation).w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7.z = point->z;
  VStack_7.x = point->x;
  VStack_7.y = point->y;
  VStack_8._0_8_ = uVar3;
  VStack_8.z = fVar4;
  VStack_9._0_8_ = uVar1;
  VStack_9.z = fVar2;
  aQStack_10[0]._0_8_ = uVar5;
  aQStack_10[0]._8_8_ = uVar6;
  pVVar11 = BoxMath::BoxMath_CalcBoxPtClosestToPt
                     (&VStack_12,&VStack_7,&VStack_9,&VStack_8,aQStack_10,(MethodInfo *)0x0);
  fVar4 = pVVar11->y;
  fVar2 = pVVar11->z;
  __return_storage_ptr__->x = pVVar11->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::OBB::OBB_GetCornerPoints(OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  uVar3._0_4_ = (this->_size).x;
  uVar3._4_4_ = (this->_size).y;
  fVar4 = (this->_size).z;
  uVar5._0_4_ = (this->_rotation).x;
  uVar5._4_4_ = (this->_rotation).y;
  uVar6._0_4_ = (this->_rotation).z;
  uVar6._4_4_ = (this->_rotation).w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7._0_8_ = uVar3;
  VStack_7.z = fVar4;
  VStack_8._0_8_ = uVar1;
  VStack_8.z = fVar2;
  aQStack_9[0]._0_8_ = uVar5;
  aQStack_9[0]._8_8_ = uVar6;
  pLVar10 = BoxMath::BoxMath_CalcBoxCornerPoints(&VStack_8,&VStack_7,aQStack_9,(MethodInfo *)0x0);
  return pLVar10;
}


/* OBB GetInvalid() */

OBB * Assembly-CSharp.dll::RTG::OBB::OBB_GetInvalid(OBB *__return_storage_ptr__,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* Vector3 GetPointFaceNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_GetPointFaceNormal
                    (Vector3 *__return_storage_ptr__,OBB *this,Vector3 *pointOnFace,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_rotation).x;
  uVar1._4_4_ = (this->_rotation).y;
  uVar2._0_4_ = (this->_rotation).z;
  uVar2._4_4_ = (this->_rotation).w;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar3->oneVector).x;
  uStack_6._4_4_ = (pVVar3->oneVector).y;
  fStack_7 = (pVVar3->oneVector).z;
  MStack_8.m00 = 0.0;
  MStack_8.m10 = 0.0;
  MStack_8.m20 = 0.0;
  MStack_8.m30 = 0.0;
  MStack_8.m01 = 0.0;
  MStack_8.m11 = 0.0;
  MStack_8.m21 = 0.0;
  MStack_8.m31 = 0.0;
  MStack_8.m02 = 0.0;
  MStack_8.m12 = 0.0;
  MStack_8.m22 = 0.0;
  MStack_8.m32 = 0.0;
  MStack_8.m03 = 0.0;
  MStack_8.m13 = 0.0;
  MStack_8.m23 = 0.0;
  MStack_8.m33 = 0.0;
  pcVar9 = pcRam_?;
  uStack_10 = uVar4;
  fStack_11 = fVar5;
  uStack_12 = uVar1;
  uStack_13 = uVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar9 = (code *)swi(3);
    pVVar14 = (Vector3 *)(*pcVar9)();
    return pVVar14;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(&uStack_10,&uStack_12,&uStack_6,&MStack_8);
  aMStack_15[0].m00 = MStack_8.m00;
  aMStack_15[0].m10 = MStack_8.m10;
  aMStack_15[0].m20 = MStack_8.m20;
  aMStack_15[0].m30 = MStack_8.m30;
  aMStack_15[0].m01 = MStack_8.m01;
  aMStack_15[0].m11 = MStack_8.m11;
  aMStack_15[0].m21 = MStack_8.m21;
  aMStack_15[0].m31 = MStack_8.m31;
  aMStack_15[0].m02 = MStack_8.m02;
  aMStack_15[0].m12 = MStack_8.m12;
  aMStack_15[0].m22 = MStack_8.m22;
  aMStack_15[0].m32 = MStack_8.m32;
  aMStack_15[0].m03 = MStack_8.m03;
  aMStack_15[0].m13 = MStack_8.m13;
  aMStack_15[0].m23 = MStack_8.m23;
  aMStack_15[0].m33 = MStack_8.m33;
  pVVar16 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxes(aMStack_15,(MethodInfo *)0x0);
  fVar17 = _UNK_?;
  fVar18 = _UNK_?;
  uVar19 = (this->_size).x;
  uVar20 = (this->_size).y;
  fVar21 = (float)uVar20 * _UNK_?;
  fVar22 = (float)uVar19 * _UNK_?;
  fVar23 = (this->_size).z * _UNK_?;
  uVar24 = pointOnFace->x;
  uVar25 = pointOnFace->y;
  uStack_10._0_4_ = (this->_center).x;
  uStack_10._4_4_ = (this->_center).y;
  fVar5 = pointOnFace->z;
  fVar26 = (float)uVar24 - (float)(undefined4)uStack_10;
  fVar27 = (this->_center).z;
  fVar28 = (float)uVar25 - (float)uStack_10._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar3->zeroVector).x;
  uStack_6._4_4_ = (pVVar3->zeroVector).y;
  fVar29 = (pVVar3->zeroVector).z;
  uVar30 = 0;
  pVVar14 = pVVar16->vector;
  fVar31 = fVar17;
  if (pVVar16 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    pVVar14 = (Vector3 *)(*pcVar9)();
    return pVVar14;
  }
  while( true ) {
    if ((uint)pVVar16->max_length <= uVar30) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      pVVar14 = (Vector3 *)(*pcVar9)();
      return pVVar14;
    }
    uStack_10._0_4_ = pVVar14->x;
    uStack_10._4_4_ = pVVar14->y;
    fVar32 = (float)(undefined4)uStack_10 * fVar26 + (float)uStack_10._4_4_ * fVar28 +
             pVVar14->z * (fVar5 - fVar27);
    fVar33 = fVar22;
    if (((uVar30 != 0) && (fVar33 = fVar21, uVar30 != 1)) && (fVar33 = fVar23, uVar30 != 2)) break;
    fVar33 = (float)((uint)((float)((uint)fVar32 & _UNK_?) - fVar33) & _UNK_?);
    if (fVar33 < fVar18) {
      fVar29 = pVVar14->z;
      uStack_6._0_4_ = pVVar14->x;
      uStack_6._4_4_ = pVVar14->y;
      fVar31 = fVar17;
      fVar18 = fVar33;
      if (0.0 <= fVar32) {
        fVar31 = _UNK_?;
      }
    }
    uVar30 = uVar30 + 1;
    pVVar14 = pVVar14 + 1;
    if (2 < (int)uVar30) {
      fVar5 = (float)uStack_6 * fVar31;
      fVar27 = uStack_6._4_4_ * fVar31;
      uStack_10 = CONCAT44(fVar27,fVar5);
      fStack_11 = fVar29 * fVar31;
      fVar18 = (float)FUN_?(&uStack_10);
      if (_UNK_? < fVar18) {
        fVar5 = fVar5 / fVar18;
        fVar27 = fVar27 / fVar18;
        fVar18 = (fVar29 * fVar31) / fVar18;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar5 = (pVVar3->zeroVector).x;
        fVar27 = (pVVar3->zeroVector).y;
        fVar18 = (pVVar3->zeroVector).z;
      }
      __return_storage_ptr__->x = fVar5;
      __return_storage_ptr__->y = fVar27;
      __return_storage_ptr__->z = fVar18;
      return __return_storage_ptr__;
    }
  }
  uVar4 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar4);
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  uVar4 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  FUN_?(this_00,uVar4);
  pcVar9 = (code *)swi(3);
  pVVar14 = (Vector3 *)(*pcVar9)();
  return pVVar14;
}


/* Matrix4x4 GetUnitBoxTransform() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::OBB::OBB_GetUnitBoxTransform
          (Matrix4x4 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  if (this->_isValid == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Matrix4x4);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
    fVar2 = (pMVar1->identityMatrix).m10;
    fVar3 = (pMVar1->identityMatrix).m20;
    fVar4 = (pMVar1->identityMatrix).m30;
    fVar5 = (pMVar1->identityMatrix).m01;
    fVar6 = (pMVar1->identityMatrix).m11;
    fVar7 = (pMVar1->identityMatrix).m21;
    fVar8 = (pMVar1->identityMatrix).m31;
    __return_storage_ptr__->m00 = (pMVar1->identityMatrix).m00;
    __return_storage_ptr__->m10 = fVar2;
    __return_storage_ptr__->m20 = fVar3;
    __return_storage_ptr__->m30 = fVar4;
    uStack_9._0_4_ = (pMVar1->identityMatrix).m02;
    uStack_9._4_4_ = (pMVar1->identityMatrix).m12;
    uStack_10._0_4_ = (pMVar1->identityMatrix).m22;
    uStack_10._4_4_ = (pMVar1->identityMatrix).m32;
    __return_storage_ptr__->m01 = fVar5;
    __return_storage_ptr__->m11 = fVar6;
    __return_storage_ptr__->m21 = fVar7;
    __return_storage_ptr__->m31 = fVar8;
    uStack_11._0_4_ = (pMVar1->identityMatrix).m03;
    uStack_11._4_4_ = (pMVar1->identityMatrix).m13;
    uStack_12._0_4_ = (pMVar1->identityMatrix).m23;
    uStack_12._4_4_ = (pMVar1->identityMatrix).m33;
  }
  else {
    fStack_13 = (this->_size).z;
    uStack_14._0_4_ = (this->_size).x;
    uStack_14._4_4_ = (this->_size).y;
    uStack_15._0_4_ = (this->_center).x;
    uStack_15._4_4_ = (this->_center).y;
    uStack_16._0_4_ = (this->_rotation).x;
    uStack_16._4_4_ = (this->_rotation).y;
    uStack_17._0_4_ = (this->_rotation).z;
    uStack_17._4_4_ = (this->_rotation).w;
    fStack_18 = (this->_center).z;
    uStack_19 = 0;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    pcVar23 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar23 = (code *)swi(3);
      pMVar25 = (Matrix4x4 *)(*pcVar23)();
      return pMVar25;
    }
    pcRam_? = pcVar23;
    (*pcRam_?)(&uStack_15,&uStack_16,&uStack_14,&uStack_19);
    __return_storage_ptr__->m00 = (float)(undefined4)uStack_19;
    __return_storage_ptr__->m10 = (float)uStack_19._4_4_;
    __return_storage_ptr__->m20 = (float)(undefined4)uStack_20;
    __return_storage_ptr__->m30 = (float)uStack_20._4_4_;
    __return_storage_ptr__->m01 = (float)(undefined4)uStack_21;
    __return_storage_ptr__->m11 = (float)uStack_21._4_4_;
    __return_storage_ptr__->m21 = (float)(undefined4)uStack_22;
    __return_storage_ptr__->m31 = (float)uStack_22._4_4_;
  }
  __return_storage_ptr__->m02 = (float)uStack_9;
  __return_storage_ptr__->m12 = uStack_9._4_4_;
  __return_storage_ptr__->m22 = (float)uStack_10;
  __return_storage_ptr__->m32 = uStack_10._4_4_;
  __return_storage_ptr__->m03 = (float)uStack_11;
  __return_storage_ptr__->m13 = uStack_11._4_4_;
  __return_storage_ptr__->m23 = (float)uStack_12;
  __return_storage_ptr__->m33 = uStack_12._4_4_;
  return __return_storage_ptr__;
}


/* Void Inflate(Single) */

void Assembly-CSharp.dll::RTG::OBB::OBB_Inflate(OBB *this,float amount,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  (this->_size).x = (float)uVar1 + amount;
  (this->_size).y = (this->_size).y + amount;
  (this->_size).z = (this->_size).z + amount;
  return;
}


/* Boolean IntersectsOBB(OBB) */

bool Assembly-CSharp.dll::RTG::OBB::OBB_IntersectsOBB(OBB *this,OBB *otherOBB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  uVar3._0_4_ = (this->_size).x;
  uVar3._4_4_ = (this->_size).y;
  fVar4 = (this->_size).z;
  uVar5._0_4_ = (this->_rotation).x;
  uVar5._4_4_ = (this->_rotation).y;
  uVar6._0_4_ = (this->_rotation).z;
  uVar6._4_4_ = (this->_rotation).w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7.z = (otherOBB->_size).z;
  QStack_8.x = (otherOBB->_rotation).x;
  QStack_8.y = (otherOBB->_rotation).y;
  QStack_8.z = (otherOBB->_rotation).z;
  QStack_8.w = (otherOBB->_rotation).w;
  VStack_7.x = (otherOBB->_size).x;
  VStack_7.y = (otherOBB->_size).y;
  VStack_9.z = (otherOBB->_center).z;
  VStack_9.x = (otherOBB->_center).x;
  VStack_9.y = (otherOBB->_center).y;
  VStack_10._0_8_ = uVar3;
  VStack_10.z = fVar4;
  VStack_11._0_8_ = uVar1;
  VStack_11.z = fVar2;
  aQStack_12[0]._0_8_ = uVar5;
  aQStack_12[0]._8_8_ = uVar6;
  bVar13 = BoxMath::BoxMath_BoxIntersectsBox
                    (&VStack_11,&VStack_10,aQStack_12,&VStack_9,&VStack_7,&QStack_8,
                     (MethodInfo *)0x0);
  return bVar13;
}


/* Boolean IntersectsSphere(Sphere) */

bool Assembly-CSharp.dll::RTG::OBB::OBB_IntersectsSphere
               (OBB *this,Sphere *sphere,MethodInfo *method)

{
  VStack_1.x = (sphere->_center).x;
  VStack_1.y = (sphere->_center).y;
  VStack_1.z = (sphere->_center).z;
  pVVar2 = OBB_GetClosestPoint(&VStack_3,this,&VStack_1,(MethodInfo *)0x0);
  uVar4 = (sphere->_center).x;
  uVar5 = pVVar2->x;
  uVar6 = pVVar2->y;
  fVar7 = (sphere->_center).z - pVVar2->z;
  fVar8 = (sphere->_center).y - (float)uVar6;
  return fVar8 * fVar8 + ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +
         fVar7 * fVar7 <= sphere->_radius * sphere->_radius;
}


/* OBB(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor
               (OBB *this,Vector3 *center,Vector3 *size,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  fVar2 = center->y;
  fVar3 = center->z;
  (this->_center).x = center->x;
  (this->_center).y = fVar2;
  fVar2 = size->x;
  fVar4 = size->y;
  (this->_center).z = fVar3;
  fVar3 = size->z;
  (this->_size).x = fVar2;
  (this->_size).y = fVar4;
  (this->_size).z = fVar3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar5->identityQuaternion).x;
  fVar2 = (pQVar5->identityQuaternion).y;
  fVar4 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  this->_isValid = 1;
  (this->_rotation).x = fVar3;
  (this->_rotation).y = fVar2;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar6;
  return;
}


/* OBB(Vector3, Vector3, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_1
               (OBB *this,Vector3 *center,Vector3 *size,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = center->y;
  fVar2 = center->z;
  (this->_center).x = center->x;
  (this->_center).y = fVar1;
  fVar1 = size->y;
  (this->_size).x = size->x;
  (this->_size).y = fVar1;
  fVar1 = rotation->x;
  fVar3 = rotation->y;
  fVar4 = rotation->z;
  fVar5 = rotation->w;
  (this->_center).z = fVar2;
  fVar2 = size->z;
  (this->_rotation).x = fVar1;
  (this->_rotation).y = fVar3;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar5;
  (this->_size).z = fVar2;
  this->_isValid = 1;
  return;
}


/* OBB(Vector3, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_2
               (OBB *this,Vector3 *center,Quaternion *rotation,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  fVar2 = center->y;
  fVar3 = center->z;
  (this->_center).x = center->x;
  (this->_center).y = fVar2;
  (this->_center).z = fVar3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar4->zeroVector).z;
  fVar2 = (pVVar4->zeroVector).y;
  (this->_size).x = (pVVar4->zeroVector).x;
  (this->_size).y = fVar2;
  fVar2 = rotation->x;
  fVar5 = rotation->y;
  fVar6 = rotation->z;
  fVar7 = rotation->w;
  (this->_size).z = fVar3;
  this->_isValid = 1;
  (this->_rotation).x = fVar2;
  (this->_rotation).y = fVar5;
  (this->_rotation).z = fVar6;
  (this->_rotation).w = fVar7;
  return;
}


/* OBB(Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_3(OBB *this,Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->_center).x = (pVVar2->zeroVector).x;
  (this->_center).y = fVar3;
  (this->_center).z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar2->zeroVector).z;
  fVar3 = (pVVar2->zeroVector).y;
  (this->_size).x = (pVVar2->zeroVector).x;
  (this->_size).y = fVar3;
  fVar3 = rotation->x;
  fVar5 = rotation->y;
  fVar6 = rotation->z;
  fVar7 = rotation->w;
  (this->_size).z = fVar4;
  this->_isValid = 1;
  (this->_rotation).x = fVar3;
  (this->_rotation).y = fVar5;
  (this->_rotation).z = fVar6;
  (this->_rotation).w = fVar7;
  return;
}


/* OBB(Bounds, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_4
               (OBB *this,Bounds *bounds,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = (bounds->m_Center).y;
  fVar2 = (bounds->m_Center).z;
  (this->_center).x = (bounds->m_Center).x;
  (this->_center).y = fVar1;
  (this->_center).z = fVar2;
  uVar3 = (bounds->m_Extents).x;
  fVar2 = (bounds->m_Extents).y;
  fVar1 = (bounds->m_Extents).z;
  fVar4 = (float)uVar3 * TypeRef__System__Activator__T._0_4_;
  fVar5 = rotation->x;
  fVar6 = rotation->y;
  fVar7 = rotation->z;
  fVar8 = rotation->w;
  this->_isValid = 1;
  (this->_size).x = fVar4;
  (this->_size).y = fVar2 + fVar2;
  (this->_rotation).x = fVar5;
  (this->_rotation).y = fVar6;
  (this->_rotation).z = fVar7;
  (this->_rotation).w = fVar8;
  (this->_size).z = fVar1 + fVar1;
  return;
}


/* OBB(AABB) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_5(OBB *this,AABB *aabb,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  fVar2 = (aabb->_center).y;
  fVar3 = (aabb->_center).z;
  (this->_center).x = (aabb->_center).x;
  (this->_center).y = fVar2;
  fVar2 = (aabb->_size).x;
  fVar4 = (aabb->_size).y;
  (this->_center).z = fVar3;
  fVar3 = (aabb->_size).z;
  (this->_size).x = fVar2;
  (this->_size).y = fVar4;
  (this->_size).z = fVar3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar5->identityQuaternion).x;
  fVar2 = (pQVar5->identityQuaternion).y;
  fVar4 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  this->_isValid = 1;
  (this->_rotation).x = fVar3;
  (this->_rotation).y = fVar2;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar6;
  return;
}


/* OBB(AABB, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_6
               (OBB *this,AABB *aabb,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = (aabb->_center).y;
  fVar2 = (aabb->_center).z;
  (this->_center).x = (aabb->_center).x;
  (this->_center).y = fVar1;
  fVar1 = (aabb->_size).y;
  (this->_size).x = (aabb->_size).x;
  (this->_size).y = fVar1;
  fVar1 = rotation->x;
  fVar3 = rotation->y;
  fVar4 = rotation->z;
  fVar5 = rotation->w;
  (this->_center).z = fVar2;
  fVar2 = (aabb->_size).z;
  (this->_rotation).x = fVar1;
  (this->_rotation).y = fVar3;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar5;
  (this->_size).z = fVar2;
  this->_isValid = 1;
  return;
}


/* OBB(AABB, Transform) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_7
               (OBB *this,AABB *modelSpaceAABB,Transform *worldTransform,MethodInfo *method)

{
  if (worldTransform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = (ulonglong)uStack_3._4_4_ << 0x20;
  pvVar4 = (worldTransform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)worldTransform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  uVar6 = (modelSpaceAABB->_size).x;
  uVar7 = (modelSpaceAABB->_size).y;
  fVar8 = (modelSpaceAABB->_size).z;
  bVar9 = cRam_? == '\0';
  uStack_10._0_4_ = (modelSpaceAABB->_center).x;
  uStack_10._4_4_ = (modelSpaceAABB->_center).y;
  fStack_11 = (modelSpaceAABB->_center).z;
  (this->_size).x = (float)uStack_2 * (float)uVar6;
  (this->_size).y = uStack_2._4_4_ * (float)uVar7;
  (this->_size).z = (float)uStack_3 * fVar8;
  if (bVar9) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_12 = 0;
  fStack_13 = 0.0;
  pvVar4 = (worldTransform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)worldTransform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_10,&uStack_12);
  bVar9 = cRam_? == '\0';
  (this->_center).x = (float)(undefined4)uStack_12;
  (this->_center).y = (float)uStack_12._4_4_;
  (this->_center).z = fStack_13;
  if (bVar9) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  pvVar4 = (worldTransform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)worldTransform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (this->_rotation).x = (float)uStack_2;
  (this->_rotation).y = uStack_2._4_4_;
  (this->_rotation).z = (float)uStack_3;
  (this->_rotation).w = (float)uStack_3._4_4_;
  this->_isValid = 1;
  return;
}


/* OBB(OBB) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_8(OBB *this,OBB *copy,MethodInfo *method)

{
  fVar1 = (copy->_size).y;
  fVar2 = (copy->_size).z;
  (this->_size).x = (copy->_size).x;
  (this->_size).y = fVar1;
  fVar1 = (copy->_center).y;
  (this->_center).x = (copy->_center).x;
  (this->_center).y = fVar1;
  fVar1 = (copy->_rotation).x;
  fVar3 = (copy->_rotation).y;
  fVar4 = (copy->_rotation).z;
  fVar5 = (copy->_rotation).w;
  (this->_size).z = fVar2;
  (this->_center).z = (copy->_center).z;
  bVar6 = copy->_isValid;
  (this->_rotation).x = fVar1;
  (this->_rotation).y = fVar3;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar5;
  this->_isValid = bVar6;
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Center
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  fVar1 = (this->_center).z;
  fVar2 = (this->_center).y;
  __return_storage_ptr__->x = (this->_center).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Extents() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Extents
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  fVar2 = (this->_size).y * _UNK_?;
  fVar3 = (this->_size).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Look
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  fVar1 = (this->_rotation).x;
  fVar2 = (this->_rotation).y;
  fVar3 = (this->_rotation).z;
  fVar4 = (this->_rotation).w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->forwardVector).x;
  uVar10 = (pVVar5->forwardVector).y;
  fVar11 = (pVVar5->forwardVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Right
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  fVar1 = (this->_rotation).x;
  fVar2 = (this->_rotation).y;
  fVar3 = (this->_rotation).z;
  fVar4 = (this->_rotation).w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->rightVector).x;
  uVar10 = (pVVar5->rightVector).y;
  fVar11 = (pVVar5->rightVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Matrix4x4 get_RotationMatrix() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::OBB::OBB_get_RotationMatrix
          (Matrix4x4 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_rotation).x;
  uVar1._4_4_ = (this->_rotation).y;
  uVar2._0_4_ = (this->_rotation).z;
  uVar2._4_4_ = (this->_rotation).w;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar3->oneVector).x;
  uStack_6._4_4_ = (pVVar3->oneVector).y;
  fStack_7 = (pVVar3->oneVector).z;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  uStack_17 = uVar4;
  fStack_18 = fVar5;
  uStack_19 = uVar1;
  uStack_20 = uVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar16 = (code *)swi(3);
    pMVar21 = (Matrix4x4 *)(*pcVar16)();
    return pMVar21;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_17,&uStack_19,&uStack_6,&uStack_8);
  __return_storage_ptr__->m00 = (float)(undefined4)uStack_8;
  __return_storage_ptr__->m10 = (float)uStack_8._4_4_;
  __return_storage_ptr__->m20 = (float)(undefined4)uStack_9;
  __return_storage_ptr__->m30 = (float)uStack_9._4_4_;
  __return_storage_ptr__->m01 = (float)(undefined4)uStack_10;
  __return_storage_ptr__->m11 = (float)uStack_10._4_4_;
  __return_storage_ptr__->m21 = (float)(undefined4)uStack_11;
  __return_storage_ptr__->m31 = (float)uStack_11._4_4_;
  __return_storage_ptr__->m02 = (float)(undefined4)uStack_12;
  __return_storage_ptr__->m12 = (float)uStack_12._4_4_;
  __return_storage_ptr__->m22 = (float)(undefined4)uStack_13;
  __return_storage_ptr__->m32 = (float)uStack_13._4_4_;
  __return_storage_ptr__->m03 = (float)(undefined4)uStack_14;
  __return_storage_ptr__->m13 = (float)uStack_14._4_4_;
  __return_storage_ptr__->m23 = (float)(undefined4)uStack_15;
  __return_storage_ptr__->m33 = (float)uStack_15._4_4_;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Up
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  fVar1 = (this->_rotation).x;
  fVar2 = (this->_rotation).y;
  fVar3 = (this->_rotation).z;
  fVar4 = (this->_rotation).w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->upVector).x;
  uVar10 = (pVVar5->upVector).y;
  fVar11 = (pVVar5->upVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}

