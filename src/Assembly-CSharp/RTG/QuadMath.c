
/* List`1[UnityEngine.Vector2] Calc2DQuadCornerPoints(Vector2, Vector2, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadCornerPoints
          (Vector2 quadCenter,Vector2 quadSize,float degreeRotation,MethodInfo *method)

{
  VStack_1 = quadSize;
  VStack_2 = quadCenter;
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
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3 = TypeInfo__UnityEngine__Vector2->static_fields->rightVector;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4 = TypeInfo__UnityEngine__Vector2->static_fields->upVector;
  QuadMath_Calc2DQuadRightUp(degreeRotation,&VStack_3,&VStack_4,(MethodInfo *)0x0);
  fVar5 = VStack_1.x * _UNK_?;
  fVar6 = VStack_1.y * _UNK_?;
  pLVar7 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar7,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  fVar8 = VStack_3.x;
  fVar9 = VStack_2.x;
  fVar10 = VStack_4.x;
  fVar11 = VStack_3.y;
  fVar12 = VStack_2.y;
  fVar13 = VStack_4.y;
  fVar14 = (VStack_2.x - fVar5 * VStack_3.x) + fVar6 * VStack_4.x;
  if (pLVar7 != (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(pLVar7,CONCAT44((VStack_2.y - fVar5 * VStack_3.y) + fVar6 * VStack_4.y,fVar14)
                  ,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar7,CONCAT44(fVar11 * fVar5 + fVar12 + fVar13 * fVar6,
                                  fVar8 * fVar5 + fVar9 + fVar10 * fVar6),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar7,CONCAT44((fVar11 * fVar5 + fVar12) - fVar13 * fVar6,
                                  (fVar8 * fVar5 + fVar9) - fVar10 * fVar6),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar7,CONCAT44((fVar12 - fVar11 * fVar5) - fVar13 * fVar6,
                                  (fVar9 - fVar8 * fVar5) - fVar10 * fVar6),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    return pLVar7;
  }
  FUN_?(fVar6 * VStack_4.y,fVar5 * VStack_3.y,fVar14);
  pcVar15 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector2_ *)(*pcVar15)();
  return pLVar7;
}


/* List`1[UnityEngine.Vector2] Calc2DQuadCornerPoints(Vector2, Vector2, Vector2, Vector2) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadCornerPoints_1
          (Vector2 quadCenter,Vector2 quadSize,Vector2 right,Vector2 up,MethodInfo *method)

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
  fStack_1 = quadSize.x;
  fStack_2 = quadSize.y;
  fStack_1 = fStack_1 * _UNK_?;
  fStack_2 = fStack_2 * _UNK_?;
  pLVar3 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  fStack_4 = right.x;
  fStack_5 = quadCenter.x;
  fStack_6 = up.x;
  fStack_7 = right.y;
  fStack_8 = quadCenter.y;
  fStack_9 = up.y;
  fVar10 = (fStack_5 - fStack_4 * fStack_1) + fStack_6 * fStack_2;
  if (pLVar3 != (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(pLVar3,CONCAT44((fStack_8 - fStack_7 * fStack_1) + fStack_9 * fStack_2,fVar10)
                  ,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar3,CONCAT44(fStack_7 * fStack_1 + fStack_8 + fStack_9 * fStack_2,
                                  fStack_4 * fStack_1 + fStack_5 + fStack_6 * fStack_2),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar3,CONCAT44((fStack_7 * fStack_1 + fStack_8) - fStack_9 * fStack_2,
                                  (fStack_4 * fStack_1 + fStack_5) - fStack_6 * fStack_2),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    FUN_?(pLVar3,CONCAT44((fStack_8 - fStack_7 * fStack_1) - fStack_9 * fStack_2,
                                  (fStack_5 - fStack_4 * fStack_1) - fStack_6 * fStack_2),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    return pLVar3;
  }
  FUN_?(fStack_9 * fStack_2,fVar10);
  pcVar11 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar11)();
  return pLVar3;
}


/* Void Calc2DQuadRightUp(Single, Vector2 ByRef, Vector2 ByRef) */

void Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc2DQuadRightUp
               (float degreeRotation,Vector2 *right,Vector2 *up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  right->y = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  right->x = fVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  up->y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  up->x = fVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->forwardVector).x;
  uStack_4._4_4_ = (pVVar3->forwardVector).y;
  fStack_5 = (pVVar3->forwardVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(degreeRotation,&uStack_4,&uStack_6);
  fVar2 = _UNK_?;
  fVar10 = (*right).x;
  fVar11 = (float)uStack_7 + (float)uStack_7;
  fVar12 = uStack_6._4_4_ + uStack_6._4_4_;
  fStackX_14 = (*right).y;
  VVar13.y = (_UNK_? -
            (((float)uStack_6 + (float)uStack_6) * (float)uStack_6 + fVar11 * (float)uStack_7))
            * fStackX_14 + (fVar11 * uStack_7._4_4_ + fVar12 * (float)uStack_6) * fVar10 +
            (fVar11 * uStack_6._4_4_ - ((float)uStack_6 + (float)uStack_6) * uStack_7._4_4_) *
            0.0;
  VVar13.x = (_UNK_? - (fVar12 * uStack_6._4_4_ + fVar11 * (float)uStack_7)) * fVar10 +
            (fVar12 * (float)uStack_6 - fVar11 * uStack_7._4_4_) * fStackX_14 +
            (fVar11 * (float)uStack_6 + fVar12 * uStack_7._4_4_) * 0.0;
  *right = VVar13;
  fVar10 = (*up).x;
  fVar11 = (float)uStack_7 + (float)uStack_7;
  fVar12 = uStack_6._4_4_ + uStack_6._4_4_;
  fStackX_14 = (*up).y;
  VVar14.y = (fVar2 - (((float)uStack_6 + (float)uStack_6) * (float)uStack_6 +
                     fVar11 * (float)uStack_7)) * fStackX_14 +
            (fVar11 * uStack_7._4_4_ + fVar12 * (float)uStack_6) * fVar10 +
            (fVar11 * uStack_6._4_4_ - ((float)uStack_6 + (float)uStack_6) * uStack_7._4_4_) *
            0.0;
  VVar14.x = (fVar2 - (fVar12 * uStack_6._4_4_ + fVar11 * (float)uStack_7)) * fVar10 +
            (fVar12 * (float)uStack_6 - fVar11 * uStack_7._4_4_) * fStackX_14 +
            (fVar11 * (float)uStack_6 + fVar12 * uStack_7._4_4_) * 0.0;
  *up = VVar14;
  return;
}


/* Vector3 Calc3DQuadCorner(Vector3, Vector2, Quaternion, QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadCorner
                    (Vector3 *__return_storage_ptr__,Vector3 *quadCenter,Vector2 quadSize,
                    Quaternion *quadRotation,QuadCorner__Enum quadCorner,MethodInfo *method)

{
  fVar1 = quadRotation->x;
  fVar2 = quadRotation->y;
  fVar3 = quadRotation->z;
  fVar4 = quadRotation->w;
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
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar7 * fVar2);
  fVar14 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar15 = _UNK_? - (fVar7 * fVar2 + fVar8);
  fVar3 = quadRotation->x;
  fVar8 = quadRotation->y;
  fVar16 = quadRotation->z;
  fVar17 = quadRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar18 = (pVVar5->upVector).x;
  uVar19 = (pVVar5->upVector).y;
  fVar20 = fVar16 + fVar16;
  fVar21 = fVar8 + fVar8;
  fVar22 = (fVar3 + fVar3) * fVar3;
  fVar23 = (fVar3 + fVar3) * fVar17;
  fStack_24 = quadSize.x;
  fStack_25 = quadSize.y;
  fStack_24 = fStack_24 * _UNK_?;
  fStack_25 = fStack_25 * _UNK_?;
  fVar14 = fStack_24 *
           (fVar14 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
           (fVar6 * fVar2 - fVar12) * fVar11);
  fVar13 = fStack_24 *
           (fVar13 * (float)uVar9 + (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 +
           (fVar7 * fVar4 + fVar6 * fVar1) * fVar11);
  fStack_24 = fStack_24 *
              ((fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 +
               (fVar12 + fVar6 * fVar2) * (float)uVar10 + fVar15 * fVar11);
  fVar1 = (pVVar5->upVector).z;
  fVar2 = ((_UNK_? - (fVar20 * fVar16 + fVar21 * fVar8)) * (float)uVar18 +
            (fVar21 * fVar3 - fVar20 * fVar17) * (float)uVar19 +
           (fVar21 * fVar17 + fVar20 * fVar3) * fVar1) * fStack_25;
  fVar4 = ((_UNK_? - (fVar20 * fVar16 + fVar22)) * (float)uVar19 +
            (fVar20 * fVar17 + fVar21 * fVar3) * (float)uVar18 + (fVar20 * fVar8 - fVar23) * fVar1)
           * fStack_25;
  fStack_25 = ((fVar20 * fVar3 - fVar21 * fVar17) * (float)uVar18 +
               (fVar23 + fVar20 * fVar8) * (float)uVar19 +
              (_UNK_? - (fVar21 * fVar8 + fVar22)) * fVar1) * fStack_25;
  if (quadCorner == QuadCorner__Enum_TopLeft) {
    uVar26 = quadCenter->x;
    fVar2 = ((float)uVar26 - fVar13) + fVar2;
    fVar4 = (quadCenter->y - fVar14) + fVar4;
    fStack_25 = (quadCenter->z - fStack_24) + fStack_25;
  }
  else {
    if (quadCorner == QuadCorner__Enum_TopRight) {
      uVar27 = quadCenter->x;
      uVar28 = quadCenter->y;
      fVar1 = quadCenter->z;
      __return_storage_ptr__->x = fVar13 + (float)uVar27 + fVar2;
      __return_storage_ptr__->y = fVar14 + (float)uVar28 + fVar4;
      __return_storage_ptr__->z = fStack_24 + fVar1 + fStack_25;
      return __return_storage_ptr__;
    }
    if (quadCorner == QuadCorner__Enum_BottomRight) {
      uVar29 = quadCenter->x;
      uVar30 = quadCenter->y;
      fVar1 = quadCenter->z;
      __return_storage_ptr__->x = (fVar13 + (float)uVar29) - fVar2;
      __return_storage_ptr__->y = (fVar14 + (float)uVar30) - fVar4;
      __return_storage_ptr__->z = (fStack_24 + fVar1) - fStack_25;
      return __return_storage_ptr__;
    }
    uVar31 = quadCenter->x;
    fVar2 = ((float)uVar31 - fVar13) - fVar2;
    fVar4 = (quadCenter->y - fVar14) - fVar4;
    fStack_25 = (quadCenter->z - fStack_24) - fStack_25;
  }
  __return_storage_ptr__->x = fVar2;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fStack_25;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] Calc3DQuadCornerPoints(Vector3, Vector2, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadCornerPoints
          (Vector3 *quadCenter,Vector2 quadSize,Quaternion *quadRotation,MethodInfo *method)

{
  VStack_1 = quadSize;
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
  fVar2 = quadRotation->x;
  fVar3 = quadRotation->y;
  fVar4 = quadRotation->z;
  fVar5 = quadRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = fVar3 + fVar3;
  fVar8 = fVar4 + fVar4;
  fVar9 = (fVar2 + fVar2) * fVar2;
  uStack_10._0_4_ = (pVVar6->rightVector).x;
  uStack_10._4_4_ = (pVVar6->rightVector).y;
  fVar11 = (pVVar6->rightVector).z;
  fVar12 = fVar5 * (fVar2 + fVar2);
  fVar13 = (_UNK_? - (fVar4 * fVar8 + fVar3 * fVar7)) * (float)(undefined4)uStack_10 +
           (fVar7 * fVar2 - fVar5 * fVar8) * (float)uStack_10._4_4_ +
           (fVar5 * fVar7 + fVar8 * fVar2) * fVar11;
  fVar4 = (_UNK_? - (fVar4 * fVar8 + fVar9)) * (float)uStack_10._4_4_ +
           (fVar5 * fVar8 + fVar7 * fVar2) * (float)(undefined4)uStack_10 +
           (fVar3 * fVar8 - fVar12) * fVar11;
  fVar2 = (fVar8 * fVar2 - fVar5 * fVar7) * (float)(undefined4)uStack_10 +
           (fVar12 + fVar3 * fVar8) * (float)uStack_10._4_4_ +
           (_UNK_? - (fVar3 * fVar7 + fVar9)) * fVar11;
  fStack_14 = quadRotation->x;
  fStack_15 = quadRotation->y;
  fStack_16 = quadRotation->z;
  fStack_17 = quadRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_10._0_4_ = (pVVar6->upVector).x;
  uStack_10._4_4_ = (pVVar6->upVector).y;
  fVar5 = fStack_16 + fStack_16;
  fVar18 = fStack_14 * (fStack_14 + fStack_14);
  fVar8 = fStack_15 + fStack_15;
  fVar12 = fStack_17 * fVar5;
  fVar9 = fStack_17 * (fStack_14 + fStack_14);
  fVar3 = (pVVar6->upVector).z;
  fVar11 = (_UNK_? - (fStack_16 * fVar5 + fStack_15 * fVar8)) *
           (float)(undefined4)uStack_10 + (fStack_14 * fVar8 - fVar12) * (float)uStack_10._4_4_ +
           (fStack_17 * fVar8 + fStack_14 * fVar5) * fVar3;
  fVar7 = (_UNK_? - (fStack_16 * fVar5 + fVar18)) * (float)uStack_10._4_4_ +
           (fVar12 + fStack_14 * fVar8) * (float)(undefined4)uStack_10 +
           (fStack_15 * fVar5 - fVar9) * fVar3;
  fVar19 = (fStack_14 * fVar5 - fStack_17 * fVar8) * (float)(undefined4)uStack_10 +
           (fVar9 + fStack_15 * fVar5) * (float)uStack_10._4_4_ +
           (_UNK_? - (fStack_15 * fVar8 + fVar18)) * fVar3;
  fVar9 = VStack_1.x * _UNK_?;
  fVar18 = VStack_1.y * _UNK_?;
  fStack_14 = fVar12;
  fStack_15 = fStack_17;
  fStack_16 = fStack_17;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar20 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  uVar21 = quadCenter->x;
  fVar8 = ((float)uVar21 - fVar13 * fVar9) + fVar11 * fVar18;
  fVar5 = (quadCenter->y - fVar4 * fVar9) + fVar7 * fVar18;
  fVar3 = (quadCenter->z - fVar2 * fVar9) + fVar19 * fVar18;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar23->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar23->max_length <= uVar24) goto code_?;
      pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar8;
      pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar5;
      pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar3;
    }
    else {
      VStack_1.y = fVar5;
      VStack_1.x = fVar8;
      fStack_25 = fVar3;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&VStack_1,
                 pMVar20->klass->rgctx_data[0xe].method);
    }
    pMVar20 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar26 = quadCenter->x;
    uVar27 = quadCenter->y;
    fVar3 = fVar9 * fVar13 + (float)uVar26 + fVar18 * fVar11;
    fVar8 = fVar9 * fVar2 + quadCenter->z + fVar18 * fVar19;
    fVar5 = fVar9 * fVar4 + (float)uVar27 + fVar18 * fVar7;
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar23->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar23->max_length <= uVar24) goto code_?;
      pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar3;
      pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar5;
      pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar8;
    }
    else {
      VStack_1.y = fVar5;
      VStack_1.x = fVar3;
      fStack_25 = fVar8;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&VStack_1,
                 pMVar20->klass->rgctx_data[0xe].method);
    }
    pMVar20 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar28 = quadCenter->x;
    uVar29 = quadCenter->y;
    fVar3 = (fVar9 * fVar13 + (float)uVar28) - fVar18 * fVar11;
    fVar8 = (fVar9 * fVar2 + quadCenter->z) - fVar18 * fVar19;
    fVar5 = (fVar9 * fVar4 + (float)uVar29) - fVar18 * fVar7;
    piVar22 = &(this->fields)._version;
    *piVar22 = *piVar22 + 1;
    pPVar23 = (this->fields)._items;
    if (pPVar23 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar23->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar23->max_length <= uVar24) goto code_?;
      pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar3;
      pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar5;
      pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar8;
    }
    else {
      VStack_1.y = fVar5;
      VStack_1.x = fVar3;
      fStack_25 = fVar8;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,(PlaneIdHelper_PlaneQuadrantInfo *)&VStack_1,
                 pMVar20->klass->rgctx_data[0xe].method);
    }
    pMVar20 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uVar30 = quadCenter->x;
    fVar5 = ((float)uVar30 - fVar9 * fVar13) - fVar18 * fVar11;
    fVar3 = (quadCenter->y - fVar9 * fVar4) - fVar18 * fVar7;
    fVar2 = (quadCenter->z - fVar9 * fVar2) - fVar18 * fVar19;
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
          pcVar31 = (code *)swi(3);
          pLVar32 = (List_1_UnityEngine_Vector3_ *)(*pcVar31)();
          return pLVar32;
        }
        pPVar23->vector[(int)uVar24].Quadrant = (int32_t)fVar5;
        pPVar23->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar3;
        pPVar23->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar2;
      }
      else {
        VStack_1.y = fVar3;
        VStack_1.x = fVar5;
        fStack_25 = fVar2;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,(PlaneIdHelper_PlaneQuadrantInfo *)&VStack_1,
                   pMVar20->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  pLVar32 = (List_1_UnityEngine_Vector3_ *)(*pcVar31)();
  return pLVar32;
}


/* OBB Calc3DQuadOBB(Vector3, Vector2, Quaternion, QuadEpsilon) */

OBB * Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Calc3DQuadOBB
                (OBB *__return_storage_ptr__,Vector3 *quadCenter,Vector2 quadSize,
                Quaternion *quadRotation,QuadEpsilon *epsilon,MethodInfo *method)

{
  fStackX_8 = quadSize.x;
  fStackX_c = quadSize.y;
  fVar1 = (epsilon->_sizeEps).x;
  fVar2 = (epsilon->_sizeEps).y;
  fVar3 = epsilon->_extrudeEps;
  *(undefined2 *)&__return_storage_ptr__->field_0x29 = 0;
  __return_storage_ptr__->field_0x2b = 0;
  fVar4 = quadCenter->y;
  fVar5 = quadCenter->z;
  (__return_storage_ptr__->_center).x = quadCenter->x;
  (__return_storage_ptr__->_center).y = fVar4;
  fVar4 = quadRotation->x;
  fVar6 = quadRotation->y;
  fVar7 = quadRotation->z;
  fVar8 = quadRotation->w;
  (__return_storage_ptr__->_center).z = fVar5;
  (__return_storage_ptr__->_size).x = fStackX_8 + fVar1;
  (__return_storage_ptr__->_size).y = fStackX_c + fVar2;
  (__return_storage_ptr__->_rotation).x = fVar4;
  (__return_storage_ptr__->_rotation).y = fVar6;
  (__return_storage_ptr__->_rotation).z = fVar7;
  (__return_storage_ptr__->_rotation).w = fVar8;
  __return_storage_ptr__->_isValid = 1;
  (__return_storage_ptr__->_size).z = fVar3 + fVar3;
  return __return_storage_ptr__;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, Single, Single, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains2DPoint
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,
               float degreeRotation,QuadEpsilon *epsilon,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_3 = point;
  VStack_4 = quadCenter;
  QuadMath_Calc2DQuadRightUp(degreeRotation,&VStack_1,&VStack_2,(MethodInfo *)0x0);
  if ((float)((uint)((VStack_3.y - VStack_4.y) * VStack_1.y +
                    (VStack_3.x - VStack_4.x) * VStack_1.x) & _UNK_?) <=
      ((epsilon->_sizeEps).x + quadWidth) * _UNK_?) {
    return (float)((uint)(VStack_2.y * (VStack_3.y - VStack_4.y) +
                         VStack_2.x * (VStack_3.x - VStack_4.x)) & _UNK_?) <=
           ((epsilon->_sizeEps).y + quadHeight) * _UNK_?;
  }
  return 0;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, Single, Vector2, Vector2, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains2DPoint_1
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,Vector2 quadRight,
               Vector2 quadUp,QuadEpsilon *epsilon,MethodInfo *method)

{
  fStack_1 = point.x;
  fStack_2 = point.y;
  fStack_3 = quadCenter.x;
  fStack_4 = quadCenter.y;
  if (((float)((uint)((fStack_2 - fStack_4) * quadRight.y + (fStack_1 - fStack_3) * quadRight.x)
              & _UNK_?) <= (quadWidth + (epsilon->_sizeEps).x) * _UNK_?) &&
     ((float)((uint)(quadUp.y * (fStack_2 - fStack_4) + quadUp.x * (fStack_1 - fStack_3)) &
             _UNK_?) <= (quadHeight + (epsilon->_sizeEps).y) * _UNK_?)) {
    return 1;
  }
  return 0;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon)
    */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Contains3DPoint
               (Vector3 *point,bool checkOnPlane,Vector3 *quadCenter,float quadWidth,
               float quadHeight,Vector3 *quadRight,Vector3 *quadUp,QuadEpsilon *epsilon,
               MethodInfo *method)

{
  uStack_1._0_4_ = quadRight->x;
  uStack_1._4_4_ = quadRight->y;
  uVar2 = quadUp->x;
  uVar3 = quadUp->y;
  fVar4 = (float)uVar2 * quadRight->z - quadUp->z * (float)(undefined4)uStack_1;
  fVar5 = quadUp->z * (float)uStack_1._4_4_ - (float)uVar3 * quadRight->z;
  fVar6 = (float)uVar3 * (float)(undefined4)uStack_1 - (float)uVar2 * (float)uStack_1._4_4_;
  uStack_7 = CONCAT44(fVar4,fVar5);
  fStack_8 = fVar6;
  fVar9 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar9) {
    fVar6 = fVar6 / fVar9;
    uStack_7 = CONCAT44(fVar4 / fVar9,fVar5 / fVar9);
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
  fVar9 = (float)uStack_7;
  fVar5 = uStack_7._4_4_;
  fStack_8 = fVar6;
  fVar4 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar4) {
    fVar6 = fVar6 / fVar4;
    uStack_7 = CONCAT44(fVar5 / fVar4,fVar9 / fVar4);
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
  uVar11 = quadCenter->x;
  uVar12 = quadCenter->y;
  if ((checkOnPlane == 0) ||
     (uVar13 = point->x, uVar14 = point->y,
     fVar6 = (float)((uint)((float)uVar14 * uStack_7._4_4_ + (float)uVar13 * (float)uStack_7 +
                             point->z * fVar6 +
                            (float)((uint)(uStack_7._4_4_ * (float)uVar12 +
                                           (float)uStack_7 * (float)uVar11 + fVar6 * quadCenter->z)
                                   ^ _UNK_?)) & _UNK_?),
     fVar6 < epsilon->_extrudeEps || fVar6 == epsilon->_extrudeEps)) {
    uVar15 = quadCenter->x;
    uVar16 = quadCenter->y;
    uVar17 = point->x;
    fVar9 = point->z - quadCenter->z;
    fVar6 = point->y - (float)uVar16;
    uVar18 = quadRight->x;
    uVar19 = quadRight->y;
    uVar20 = quadUp->x;
    uVar21 = quadUp->y;
    if ((float)((uint)((float)uVar19 * fVar6 + (float)uVar18 * ((float)uVar17 - (float)uVar15) +
                      quadRight->z * fVar9) & _UNK_?) <=
        (quadWidth + (epsilon->_sizeEps).x) * _UNK_?) {
      if ((float)((uint)((float)uVar20 * ((float)uVar17 - (float)uVar15) + (float)uVar21 * fVar6 +
                        quadUp->z * fVar9) & _UNK_?) <=
          (quadHeight + (epsilon->_sizeEps).y) * _UNK_?) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, Single, Single, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Is2DPointOnBorder
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,
               float degreeRotation,QuadEpsilon *epsilon,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  QuadMath_Calc2DQuadRightUp(degreeRotation,&VStack_1,&VStack_2,(MethodInfo *)0x0);
  aQStack_3[0]._sizeEps = epsilon->_sizeEps;
  aQStack_3[0]._extrudeEps = epsilon->_extrudeEps;
  aQStack_3[0]._wireEps = epsilon->_wireEps;
  bVar4 = QuadMath_Is2DPointOnBorder_1
                    (point,quadCenter,quadWidth,quadHeight,VStack_1,VStack_2,aQStack_3,
                     (MethodInfo *)0x0);
  return bVar4;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, Single, Vector2, Vector2, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Is2DPointOnBorder_1
               (Vector2 point,Vector2 quadCenter,float quadWidth,float quadHeight,Vector2 quadRight,
               Vector2 quadUp,QuadEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  quadSize.y = quadHeight;
  quadSize.x = quadWidth;
  fVar1 = (float)((uint)epsilon->_wireEps & _UNK_?);
  pLVar2 = QuadMath_Calc2DQuadCornerPoints_1(quadCenter,quadSize,quadRight,quadUp,(MethodInfo *)0x0)
  ;
  uVar3 = 0;
  if (pLVar2 != (List_1_UnityEngine_Vector2_ *)0x0) {
    lVar4 = 0x20;
    do {
      if ((pLVar2->fields)._size <= (int)uVar3) {
        return 0;
      }
      if ((uint)(pLVar2->fields)._size <= uVar3) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pVVar7 = (pLVar2->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar7->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      uVar8 = (int)(uVar3 + 1) % (pLVar2->fields)._size;
      if ((uint)(pLVar2->fields)._size <= uVar8) goto code_?;
      if (pVVar7 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar7->max_length <= uVar8) goto code_?;
      point1.y = pVVar7->vector[(int)uVar8].y;
      point1.x = pVVar7->vector[(int)uVar8].x;
      point0.y = *(float *)((longlong)pVVar7->vector + lVar4 + -0x1c);
      point0.x = *(float *)((longlong)&((Vector2__Array *)(pVVar7->vector + -4))->klass + lVar4);
      fVar9 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,point0,point1,(MethodInfo *)0x0);
      if (fVar9 <= fVar1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    } while( true );
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_Raycast
               (Ray *ray,float *t,Vector3 *quadCenter,float quadWidth,float quadHeight,
               Vector3 *quadRight,Vector3 *quadUp,QuadEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *t = 0.0;
  VStack_1.x = quadRight->x;
  VStack_1.y = quadRight->y;
  VStack_2.x = quadUp->x;
  VStack_2.y = quadUp->y;
  uVar3._0_4_ = quadUp->z * VStack_1.y - VStack_2.y * quadRight->z;
  uVar3._4_4_ = VStack_2.x * quadRight->z - quadUp->z * VStack_1.x;
  fVar4 = VStack_2.y * VStack_1.x - VStack_2.x * VStack_1.y;
  RStack_5.m_Origin.z = fVar4;
  RStack_5.m_Origin.y = uVar3._4_4_;
  RStack_5.m_Origin.x = (float)uVar3;
  fVar6 = (float)FUN_?(&RStack_5);
  fVar7 = _UNK_?;
  if (_UNK_? < fVar6) {
    uVar3._0_4_ = (float)uVar3 / fVar6;
    uVar3._4_4_ = uVar3._4_4_ / fVar6;
    fVar4 = fVar4 / fVar6;
    RStack_5.m_Origin.y = uVar3._4_4_;
    RStack_5.m_Origin.x = (float)uVar3;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar8->zeroVector).x;
    uVar3._4_4_ = (pVVar8->zeroVector).y;
    fVar4 = (pVVar8->zeroVector).z;
    RStack_5.m_Origin._0_8_ = uVar3;
  }
  fVar6 = RStack_5.m_Origin.x;
  fVar9 = RStack_5.m_Origin.y;
  RStack_5.m_Origin.z = fVar4;
  fVar10 = (float)FUN_?(&RStack_5);
  if (fVar7 < fVar10) {
    fVar7 = fVar4 / fVar10;
    RStack_5.m_Origin.y = fVar9 / fVar10;
    RStack_5.m_Origin.x = fVar6 / fVar10;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_5.m_Origin.x = (pVVar8->zeroVector).x;
    RStack_5.m_Origin.y = (pVVar8->zeroVector).y;
    fVar7 = (pVVar8->zeroVector).z;
  }
  VStack_2.x = quadCenter->x;
  VStack_2.y = quadCenter->y;
  uStack_11._0_4_ = (ray->m_Direction).y;
  uStack_11._4_4_ = (ray->m_Direction).z;
  fVar9 = RStack_5.m_Origin.y;
  fVar6 = RStack_5.m_Origin.x;
  fVar12 = (float)(undefined4)uStack_11 * RStack_5.m_Origin.y +
           (ray->m_Direction).x * RStack_5.m_Origin.x + (float)uStack_11._4_4_ * fVar7;
  fVar13 = (float)((uint)((ray->m_Origin).y * RStack_5.m_Origin.y +
                          (ray->m_Origin).x * RStack_5.m_Origin.x + (ray->m_Origin).z * fVar7) ^
                  _UNK_?);
  fVar10 = (float)((uint)(RStack_5.m_Origin.y * VStack_2.y + RStack_5.m_Origin.x * VStack_2.x
                         + fVar7 * quadCenter->z) ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar14 = (float)((uint)fVar12 & (uint)_UNK_?);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar14 * _UNK_?;
  if (fVar14 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if ((fVar16 <= (float)((uint)(0.0 - fVar12) & (uint)_UNK_?)) &&
     (fVar12 = (fVar13 - fVar10) / fVar12, 0.0 < fVar12)) {
    uVar17 = (ray->m_Direction).x;
    uVar18 = (ray->m_Direction).y;
    uVar19 = (ray->m_Origin).x;
    uVar20 = (ray->m_Origin).y;
    RStack_5.m_Origin.z = quadUp->z;
    auStack_21._8_4_ = quadRight->z;
    VStack_1.z = quadCenter->z;
    VStack_22 = epsilon->_sizeEps;
    fStack_23 = epsilon->_extrudeEps;
    fStack_24 = epsilon->_wireEps;
    VStack_2.x = (float)uVar17 * fVar12 + (float)uVar19;
    RStack_5.m_Origin.x = quadUp->x;
    RStack_5.m_Origin.y = quadUp->y;
    auStack_21._0_4_ = quadRight->x;
    auStack_21._4_4_ = quadRight->y;
    VStack_2.z = (ray->m_Direction).z * fVar12 + (ray->m_Origin).z;
    VStack_2.y = (float)uVar18 * fVar12 + (float)uVar20;
    VStack_1.x = quadCenter->x;
    VStack_1.y = quadCenter->y;
    bVar25 = QuadMath_Contains3DPoint
                       (&VStack_2,0,&VStack_1,quadWidth,quadHeight,(Vector3 *)auStack_21,
                        &RStack_5.m_Origin,(QuadEpsilon *)&VStack_22,(MethodInfo *)0x0);
    if (bVar25 != 0) {
      *t = fVar12;
      return 1;
    }
  }
  if ((epsilon->_extrudeEps == 0.0) ||
     (uVar26 = (ray->m_Direction).x, uVar27 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)(fVar9 * (float)uVar27 + fVar6 * (float)uVar26 + fVar7 * (ray->m_Direction).z) &
            (uint)_UNK_?))) {
    bVar25 = 0;
  }
  else {
    VStack_2.x = quadUp->x;
    VStack_2.y = quadUp->y;
    VStack_2.z = quadUp->z;
    VStack_1.y = uVar3._4_4_;
    VStack_1.x = (float)uVar3;
    auStack_21._0_4_ = 0.0;
    auStack_21._4_4_ = 0.0;
    auStack_21._8_4_ = 0.0;
    auStack_21._12_4_ = 0.0;
    pcVar28 = pcRam_?;
    VStack_1.z = fVar4;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar28 = (code *)FUN_?(&UNK_?), pcVar28 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar28 = (code *)swi(3);
      bVar25 = (*pcVar28)();
      return bVar25;
    }
    pcRam_? = pcVar28;
    (*pcRam_?)(&VStack_1,&VStack_2,auStack_21);
    uVar29 = auStack_21._8_8_;
    uVar3 = auStack_21._0_8_;
    fVar7 = (epsilon->_sizeEps).y;
    fVar6 = epsilon->_extrudeEps;
    uVar30._0_4_ = quadCenter->x;
    uVar30._4_4_ = quadCenter->y;
    fVar4 = quadCenter->z;
    uVar31._0_4_ = (epsilon->_sizeEps).x + quadWidth;
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar32 = auStack_21._8_8_;
    RStack_5.m_Direction.y = (ray->m_Direction).y;
    RStack_5.m_Direction.z = (ray->m_Direction).z;
    RStack_5.m_Origin.x = (ray->m_Origin).x;
    RStack_5.m_Origin.y = (ray->m_Origin).y;
    RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    uVar31._4_4_ = fVar7 + quadHeight;
    VStack_2.z = 0.0;
    auStack_21._0_4_ = (undefined4)uVar3;
    auStack_21._4_4_ = SUB84(uVar3,4);
    VStack_22.x = (float)auStack_21._0_4_;
    VStack_22.y = (float)auStack_21._4_4_;
    auStack_21._8_4_ = (undefined4)uVar29;
    auStack_21._12_4_ = SUB84(uVar29,4);
    fStack_23 = (float)auStack_21._8_4_;
    fStack_24 = (float)auStack_21._12_4_;
    auStack_21._12_4_ = SUB84(uVar32,4);
    auStack_21._8_4_ = fVar4;
    auStack_21._0_8_ = uVar30;
    VStack_1._0_8_ = uVar31;
    VStack_1.z = fVar6 + fVar6;
    bVar25 = BoxMath::BoxMath_Raycast
                       (&RStack_5,(Vector3 *)auStack_21,&VStack_1,(Quaternion *)&VStack_22,
                        (BoxEpsilon *)&VStack_2,(MethodInfo *)0x0);
  }
  return bVar25;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Single, Single, Vector3, Vector3, QuadEpsilon) */

bool Assembly-CSharp.dll::RTG::QuadMath::QuadMath_RaycastWire
               (Ray *ray,float *t,Vector3 *quadCenter,float quadWidth,float quadHeight,
               Vector3 *quadRight,Vector3 *quadUp,QuadEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = quadUp;
  *t = 0.0;
  VStack_2.x = quadRight->x;
  VStack_2.y = quadRight->y;
  QStack_3.x = quadUp->x;
  QStack_3.y = quadUp->y;
  uVar4._0_4_ = quadUp->z * VStack_2.y - QStack_3.y * quadRight->z;
  uVar4._4_4_ = QStack_3.x * quadRight->z - quadUp->z * VStack_2.x;
  fVar5 = QStack_3.y * VStack_2.x - QStack_3.x * VStack_2.y;
  uStack_6 = CONCAT44(uVar4._4_4_,(float)uVar4);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  fVar9 = _UNK_?;
  if (_UNK_? < fVar8) {
    uVar4._0_4_ = (float)uVar4 / fVar8;
    uVar4._4_4_ = uVar4._4_4_ / fVar8;
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(uVar4._4_4_,(float)uVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4._0_4_ = (pVVar10->zeroVector).x;
    uVar4._4_4_ = (pVVar10->zeroVector).y;
    fVar5 = (pVVar10->zeroVector).z;
    uStack_6 = uVar4;
  }
  fVar8 = (float)uStack_6;
  fVar11 = uStack_6._4_4_;
  fStack_7 = fVar5;
  fVar12 = (float)FUN_?(&uStack_6);
  if (fVar9 < fVar12) {
    fVar9 = fVar5 / fVar12;
    uStack_6 = CONCAT44(fVar11 / fVar12,fVar8 / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar10->zeroVector).x;
    uStack_6._4_4_ = (pVVar10->zeroVector).y;
    fVar9 = (pVVar10->zeroVector).z;
  }
  uVar13 = _UNK_?;
  QStack_3.x = quadCenter->x;
  QStack_3.y = quadCenter->y;
  fVar11 = uStack_6._4_4_;
  fVar8 = (float)uStack_6;
  aRStack_14[0].m_Origin.z = fVar5;
  uVar15._0_4_ = pVVar1->x;
  uVar15._4_4_ = pVVar1->y;
  fStack_7 = pVVar1->z;
  aRStack_14[0].m_Origin.y = uVar4._4_4_;
  aRStack_14[0].m_Origin.x = (float)uVar4;
  QStack_16.x = 0.0;
  QStack_16.y = 0.0;
  QStack_16.z = 0.0;
  QStack_16.w = 0.0;
  fVar12 = (float)((uint)(uStack_6._4_4_ * QStack_3.y + (float)uStack_6 * QStack_3.x +
                         fVar9 * quadCenter->z) ^ _UNK_?);
  pcVar17 = pcRam_?;
  uStack_6 = uVar15;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar17 = (code *)swi(3);
    bVar18 = (*pcVar17)();
    return bVar18;
  }
  pcRam_? = pcVar17;
  (*pcRam_?)(aRStack_14,&uStack_6,&QStack_16);
  fVar19 = (ray->m_Origin).x;
  fVar20 = (ray->m_Origin).y;
  fVar21 = (ray->m_Origin).z;
  uStack_22._0_4_ = (ray->m_Direction).y;
  uStack_22._4_4_ = (ray->m_Direction).z;
  fVar23 = fVar11 * (float)(undefined4)uStack_22 + fVar8 * (ray->m_Direction).x +
           fVar9 * (float)uStack_22._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar24 = epsilon;
  fVar25 = (float)((uint)fVar23 & (uint)_UNK_?);
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar26 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar27 = fVar25 * _UNK_?;
  if (fVar25 * _UNK_? <= fVar26) {
    fVar27 = fVar26;
  }
  if (((float)((uint)(0.0 - fVar23) & (uint)_UNK_?) < fVar27) ||
     (fVar23 = ((float)((uint)(fVar11 * fVar20 + fVar8 * fVar19 + fVar9 * fVar21) ^ uVar13) -
               fVar12) / fVar23, fVar23 <= 0.0)) {
code_?:
    if ((pQVar24->_extrudeEps == 0.0) ||
       (uVar28 = (ray->m_Direction).x, uVar29 = (ray->m_Direction).y,
       _UNK_? <=
       (float)((uint)(fVar11 * (float)uVar29 + fVar8 * (float)uVar28 + fVar9 * (ray->m_Direction).z)
              & (uint)_UNK_?))) {
      bVar18 = 0;
    }
    else {
      QStack_3.x = pVVar1->x;
      QStack_3.y = pVVar1->y;
      QStack_3.z = pVVar1->z;
      VStack_2.y = uVar4._4_4_;
      VStack_2.x = (float)uVar4;
      QStack_30.x = 0.0;
      QStack_30.y = 0.0;
      QStack_30.z = 0.0;
      QStack_30.w = 0.0;
      pcVar17 = pcRam_?;
      VStack_2.z = fVar5;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar17 = (code *)swi(3);
        bVar18 = (*pcVar17)();
        return bVar18;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(&VStack_2,&QStack_3,&QStack_30);
      uVar15 = QStack_30._8_8_;
      uVar4 = QStack_30._0_8_;
      fVar9 = pQVar24->_extrudeEps;
      uVar31._0_4_ = quadCenter->x;
      uVar31._4_4_ = quadCenter->y;
      fVar5 = quadCenter->z;
      uVar32._0_4_ = (pQVar24->_sizeEps).x + quadWidth;
      fVar8 = (pQVar24->_sizeEps).y + quadHeight;
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__BoxMath);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      quadHeight = 0.0;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar33 = QStack_30._8_8_;
      aRStack_14[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_14[0].m_Direction.z = (ray->m_Direction).z;
      aRStack_14[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_14[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_14[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      uVar32._4_4_ = fVar8;
      QStack_3._8_8_ = QStack_3._8_8_ & 0xffffffff00000000;
      QStack_30.x = (float)uVar4;
      QStack_30.y = SUB84(uVar4,4);
      QStack_16.x = QStack_30.x;
      QStack_16.y = QStack_30.y;
      QStack_30.z = (float)uVar15;
      QStack_30.w = SUB84(uVar15,4);
      QStack_16.z = QStack_30.z;
      QStack_16.w = QStack_30.w;
      QStack_30.w = SUB84(uVar33,4);
      QStack_30.z = fVar5;
      VStack_2._0_8_ = uVar32;
      VStack_2.z = fVar9 + fVar9;
      QStack_30._0_8_ = uVar31;
      bVar18 = BoxMath::BoxMath_Raycast_1
                         (aRStack_14,&quadHeight,(Vector3 *)&QStack_30,&VStack_2,&QStack_16,
                          (BoxEpsilon *)&QStack_3,(MethodInfo *)0x0);
    }
  }
  else {
    uVar34 = (ray->m_Direction).x;
    uVar35 = (ray->m_Direction).y;
    uVar36 = (ray->m_Origin).x;
    uVar37 = (ray->m_Origin).y;
    fVar19 = (float)uVar34 * fVar23 + (float)uVar36;
    fVar12 = (float)uVar35 * fVar23 + (float)uVar37;
    fVar20 = (ray->m_Direction).z * fVar23 + (ray->m_Origin).z;
    QStack_30.z = quadCenter->z;
    QStack_30.x = quadCenter->x;
    QStack_30.y = quadCenter->y;
    QStack_3.x = QStack_16.x;
    QStack_3.y = QStack_16.y;
    QStack_3.z = QStack_16.z;
    QStack_3.w = QStack_16.w;
    quadSize.y = quadHeight;
    quadSize.x = quadWidth;
    pLVar38 = QuadMath_Calc3DQuadCornerPoints
                        ((Vector3 *)&QStack_30,quadSize,&QStack_3,(MethodInfo *)0x0);
    if (pLVar38 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      bVar18 = (*pcVar17)();
      return bVar18;
    }
    if ((pLVar38->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      bVar18 = (*pcVar17)();
      return bVar18;
    }
    pVVar39 = (pLVar38->fields)._items;
    if (pVVar39 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar39->max_length == 0) {
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      bVar18 = (*pcVar17)();
      return bVar18;
    }
    if ((uint)(pLVar38->fields)._size < 2) goto code_?;
    if ((uint)pVVar39->max_length < 2) goto code_?;
    QStack_30.x = pVVar39->vector[1].x;
    QStack_30.y = pVVar39->vector[1].y;
    QStack_30.z = pVVar39->vector[1].z;
    VStack_2.x = pVVar39->vector[0].x;
    VStack_2.y = pVVar39->vector[0].y;
    VStack_2.z = pVVar39->vector[0].z;
    QStack_3.y = fVar12;
    QStack_3.x = fVar19;
    QStack_3.z = fVar20;
    fVar21 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                       ((Vector3 *)&QStack_3,&VStack_2,(Vector3 *)&QStack_30,(MethodInfo *)0x0)
    ;
    if (pQVar24->_wireEps < fVar21) {
      if ((uint)(pLVar38->fields)._size < 2) goto code_?;
      pVVar39 = (pLVar38->fields)._items;
      if (pVVar39 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar39->max_length < 2) goto code_?;
      if ((uint)(pLVar38->fields)._size < 3) goto code_?;
      if ((uint)pVVar39->max_length < 3) goto code_?;
      QStack_3.x = pVVar39->vector[2].x;
      QStack_3.y = pVVar39->vector[2].y;
      QStack_3.z = pVVar39->vector[2].z;
      VStack_2.x = pVVar39->vector[1].x;
      VStack_2.y = pVVar39->vector[1].y;
      VStack_2.z = pVVar39->vector[1].z;
      QStack_30.y = fVar12;
      QStack_30.x = fVar19;
      QStack_30.z = fVar20;
      fVar21 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         ((Vector3 *)&QStack_30,&VStack_2,(Vector3 *)&QStack_3,
                          (MethodInfo *)0x0);
      if (pQVar24->_wireEps < fVar21) {
        if ((uint)(pLVar38->fields)._size < 3) goto code_?;
        pVVar39 = (pLVar38->fields)._items;
        if (pVVar39 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar39->max_length < 3) goto code_?;
        if ((uint)(pLVar38->fields)._size < 4) goto code_?;
        if ((uint)pVVar39->max_length < 4) goto code_?;
        QStack_3.x = pVVar39->vector[3].x;
        QStack_3.y = pVVar39->vector[3].y;
        QStack_3.z = pVVar39->vector[3].z;
        VStack_2.x = pVVar39->vector[2].x;
        VStack_2.y = pVVar39->vector[2].y;
        VStack_2.z = pVVar39->vector[2].z;
        QStack_30.z = fVar20;
        fVar21 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           ((Vector3 *)&QStack_30,&VStack_2,(Vector3 *)&QStack_3,
                            (MethodInfo *)0x0);
        if (pQVar24->_wireEps < fVar21) {
          if ((uint)(pLVar38->fields)._size < 4) goto code_?;
          pVVar39 = (pLVar38->fields)._items;
          if (pVVar39 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar39->max_length < 4) goto code_?;
          QStack_3.x = pVVar39->vector[0].x;
          QStack_3.y = pVVar39->vector[0].y;
          VStack_2.x = pVVar39->vector[3].x;
          VStack_2.y = pVVar39->vector[3].y;
          QStack_3.z = pVVar39->vector[0].z;
          VStack_2.z = pVVar39->vector[3].z;
          QStack_30.z = fVar20;
          fVar12 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                             ((Vector3 *)&QStack_30,&VStack_2,(Vector3 *)&QStack_3,
                              (MethodInfo *)0x0);
          if (pQVar24->_wireEps < fVar12) goto code_?;
        }
      }
    }
    *t = fVar23;
    bVar18 = 1;
  }
  return bVar18;
}

