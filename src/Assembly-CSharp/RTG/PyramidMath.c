
/* List`1[UnityEngine.Vector3] CalcBaseCornerPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_CalcBaseCornerPoints
          (Vector3 *baseCenter,float baseWidth,float baseDepth,Quaternion *rotation,
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
  fVar1 = rotation->x;
  fVar2 = rotation->y;
  fVar3 = rotation->z;
  fVar4 = rotation->w;
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
  fVar10 = fVar2 + fVar2;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar12 = (_UNK_? - (fVar3 * fVar6 + fVar2 * fVar10)) * (float)PStack_8.Quadrant +
          (fVar1 * fVar10 - fVar4 * fVar6) * (float)PStack_8.FirstAxisSign +
          (fVar4 * fVar10 + fVar1 * fVar6) * fVar9;
  fVar3 = (_UNK_? - (fVar3 * fVar6 + fVar7)) * (float)PStack_8.FirstAxisSign +
           (fVar4 * fVar6 + fVar1 * fVar10) * (float)PStack_8.Quadrant +
           (fVar2 * fVar6 - fVar11) * fVar9;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar10) * (float)PStack_8.Quadrant +
           (fVar11 + fVar2 * fVar6) * (float)PStack_8.FirstAxisSign +
           (_UNK_? - (fVar2 * fVar10 + fVar7)) * fVar9;
  fStack_13 = rotation->x;
  fStack_14 = rotation->y;
  fStack_15 = rotation->z;
  fStack_16 = rotation->w;
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
  fVar17 = fStack_13 * (fStack_13 + fStack_13);
  fVar6 = fStack_14 + fStack_14;
  fVar11 = fStack_16 * fVar4;
  fVar7 = fStack_16 * (fStack_13 + fStack_13);
  fVar2 = (pVVar5->forwardVector).z;
  fVar9 = (_UNK_? - (fStack_15 * fVar4 + fStack_14 * fVar6)) * (float)PStack_8.Quadrant +
           (fStack_13 * fVar6 - fVar11) * (float)PStack_8.FirstAxisSign +
           (fStack_16 * fVar6 + fStack_13 * fVar4) * fVar2;
  fVar10 = (_UNK_? - (fStack_15 * fVar4 + fVar17)) * (float)PStack_8.FirstAxisSign +
           (fVar11 + fStack_13 * fVar6) * (float)PStack_8.Quadrant +
           (fStack_14 * fVar4 - fVar7) * fVar2;
  fVar7 = (fStack_13 * fVar4 - fStack_16 * fVar6) * (float)PStack_8.Quadrant +
           (fVar7 + fStack_14 * fVar4) * (float)PStack_8.FirstAxisSign +
           (_UNK_? - (fStack_14 * fVar6 + fVar17)) * fVar2;
  fVar17 = baseWidth * _UNK_?;
  fVar18 = baseDepth * _UNK_?;
  fStack_13 = fVar11;
  fStack_14 = fStack_16;
  fStack_15 = fStack_16;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar19 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_8.Quadrant = (int32_t)baseCenter->x;
  PStack_8.FirstAxisSign = (int32_t)baseCenter->y;
  fVar2 = fVar17 * fVar12 + (float)PStack_8.Quadrant + fVar18 * fVar9;
  fVar6 = fVar17 * fVar1 + baseCenter->z + fVar18 * fVar7;
  fVar4 = fVar17 * fVar3 + (float)PStack_8.FirstAxisSign + fVar18 * fVar10;
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
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)baseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)baseCenter->y;
    fVar2 = (fVar12 * fVar17 + (float)PStack_8.Quadrant) - fVar9 * fVar18;
    fVar6 = (fVar1 * fVar17 + baseCenter->z) - fVar7 * fVar18;
    fVar4 = (fVar3 * fVar17 + (float)PStack_8.FirstAxisSign) - fVar10 * fVar18;
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
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar6;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)baseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)baseCenter->y;
    fVar6 = ((float)PStack_8.Quadrant - fVar12 * fVar17) - fVar9 * fVar18;
    fVar2 = ((float)PStack_8.FirstAxisSign - fVar3 * fVar17) - fVar10 * fVar18;
    fVar4 = (baseCenter->z - fVar1 * fVar17) - fVar7 * fVar18;
    piVar20 = &(this->fields)._version;
    *piVar20 = *piVar20 + 1;
    pPVar21 = (this->fields)._items;
    if (pPVar21 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar22 = (this->fields)._size;
    if (uVar22 < (uint)pPVar21->max_length) {
      (this->fields)._size = uVar22 + 1;
      if ((uint)pPVar21->max_length <= uVar22) goto code_?;
      pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar6;
      pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar2;
      pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar4;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar2;
      PStack_8.Quadrant = (int32_t)fVar6;
      PStack_8.SecondAxisSign = (int32_t)fVar4;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_8,pMVar19->klass->rgctx_data[0xe].method);
    }
    pMVar19 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)baseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)baseCenter->y;
    fVar4 = ((float)PStack_8.Quadrant - fVar12 * fVar17) + fVar9 * fVar18;
    fVar2 = ((float)PStack_8.FirstAxisSign - fVar3 * fVar17) + fVar10 * fVar18;
    fVar1 = (baseCenter->z - fVar1 * fVar17) + fVar7 * fVar18;
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
        pPVar21->vector[(int)uVar22].Quadrant = (int32_t)fVar4;
        pPVar21->vector[(int)uVar22].FirstAxisSign = (int32_t)fVar2;
        pPVar21->vector[(int)uVar22].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_8.FirstAxisSign = (int32_t)fVar2;
        PStack_8.Quadrant = (int32_t)fVar4;
        PStack_8.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_8,pMVar19->klass->rgctx_data[0xe].method);
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


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Single, Quaternion, PyramidEpsilon) */

bool Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_ContainsPoint
               (Vector3 *point,Vector3 *baseCenter,float baseWidth,float baseDepth,float height,
               Quaternion *rotation,PyramidEpsilon epsilon,MethodInfo *method)

{
  PStack_1.m_Normal.x = 0.0;
  PStack_1.m_Normal.y = 0.0;
  PStack_1.m_Normal.z = 0.0;
  PStack_1.m_Distance = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_2.x = baseCenter->x;
  VStack_2.y = baseCenter->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->oneVector).x;
  VStack_4.y = (pVVar3->oneVector).y;
  VStack_4.z = (pVVar3->oneVector).z;
  auStack_5._0_4_ = rotation->x;
  auStack_5._4_4_ = rotation->y;
  auStack_5._8_4_ = rotation->z;
  auStack_5._12_4_ = rotation->w;
  VStack_2.z = baseCenter->z;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    bVar16 = (*pcVar14)();
    return bVar16;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&VStack_2,auStack_5,&VStack_4,&uStack_6);
  uStack_17 = uStack_6;
  uStack_18 = uStack_7;
  uStack_19 = uStack_8;
  uStack_20 = uStack_9;
  uStack_21 = uStack_10;
  uStack_22 = uStack_11;
  uStack_23 = (undefined4)uStack_12;
  uStack_24 = uStack_12._4_4_;
  uStack_25 = (undefined4)uStack_13;
  uStack_26 = uStack_13._4_4_;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    bVar16 = (*pcVar14)();
    return bVar16;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&uStack_17,&uStack_27);
  fVar35 = point->z;
  auStack_5._0_4_ = point->x;
  auStack_5._4_4_ = point->y;
  fVar36 = _UNK_? /
           (uStack_30._4_4_ * (float)auStack_5._4_4_ +
            uStack_28._4_4_ * (float)auStack_5._0_4_ + fVar35 * uStack_32._4_4_ +
           uStack_34._4_4_);
  fVar37 = ((float)uStack_29 * (float)auStack_5._4_4_ +
            (float)uStack_27 * (float)auStack_5._0_4_ + (float)uStack_31 * fVar35 +
           (float)uStack_33) * fVar36;
  fVar38 = (uStack_29._4_4_ * (float)auStack_5._4_4_ +
            uStack_27._4_4_ * (float)auStack_5._0_4_ + uStack_31._4_4_ * fVar35 +
           uStack_33._4_4_) * fVar36;
  fVar36 = ((float)uStack_30 * (float)auStack_5._4_4_ +
            (float)uStack_28 * (float)auStack_5._0_4_ + fVar35 * (float)uStack_32 +
           (float)uStack_34) * fVar36;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar39 = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_5._0_4_ = (pVVar3->upVector).x;
  auStack_5._4_4_ = (pVVar3->upVector).y;
  fVar40 = (float)(auStack_5._4_4_ ^ _UNK_?);
  fVar41 = (float)(auStack_5._0_4_ ^ _UNK_?);
  fVar35 = (float)((uint)(pVVar3->upVector).z ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_5._0_4_ = (pVVar3->zeroVector).x;
  auStack_5._4_4_ = (pVVar3->zeroVector).y;
  fVar42 = (pVVar3->zeroVector).z;
  VStack_2.y = fVar40;
  VStack_2.x = fVar41;
  VStack_2.z = fVar35;
  fVar43 = (float)FUN_?(&VStack_2);
  if (_UNK_? < fVar43) {
    fVar35 = fVar35 / fVar43;
    VStack_4.y = fVar40 / fVar43;
    VStack_4.x = fVar41 / fVar43;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_4.x = (pVVar3->zeroVector).x;
    VStack_4.y = (pVVar3->zeroVector).y;
    fVar35 = (pVVar3->zeroVector).z;
  }
  if ((float)((uint)(VStack_4.y * (float)auStack_5._4_4_ +
                     VStack_4.x * (float)auStack_5._0_4_ + fVar35 * fVar42) ^ uVar39) +
      VStack_4.y * fVar38 + VStack_4.x * fVar37 + fVar35 * fVar36 <= epsilon._ptContainEps) {
    fVar35 = baseWidth * _UNK_?;
    fVar40 = baseDepth * _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar3->upVector).x;
    auStack_5._4_4_ = (pVVar3->upVector).y;
    fVar41 = (pVVar3->upVector).z * height;
    fVar42 = (float)auStack_5._0_4_ * height;
    fVar43 = (float)auStack_5._4_4_ * height;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar3->rightVector).x;
    auStack_5._4_4_ = (pVVar3->rightVector).y;
    fVar44 = (pVVar3->rightVector).z;
    fVar45 = (float)auStack_5._4_4_ * fVar35;
    fVar46 = (float)auStack_5._0_4_ * fVar35;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar3->forwardVector).x;
    auStack_5._4_4_ = (pVVar3->forwardVector).y;
    fVar46 = fVar46 - (float)auStack_5._0_4_ * fVar40;
    fVar45 = fVar45 - (float)auStack_5._4_4_ * fVar40;
    fVar44 = fVar44 * fVar35 - (pVVar3->forwardVector).z * fVar40;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar47 = (pVVar3->rightVector).x;
    uVar48 = (pVVar3->rightVector).y;
    VStack_2.y = fVar45;
    VStack_2.x = fVar46;
    uVar15._4_4_ = fVar43;
    uVar15._0_4_ = fVar42;
    auStack_5._8_4_ = fVar44 - (pVVar3->rightVector).z * baseWidth;
    auStack_5._4_4_ = fVar45 - (float)uVar48 * baseWidth;
    auStack_5._0_4_ = fVar46 - (float)uVar47 * baseWidth;
    VStack_4._0_8_ = uVar15;
    VStack_4.z = fVar41;
    VStack_2.z = fVar44;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (&PStack_1,&VStack_4,&VStack_2,(Vector3 *)auStack_5,in_stack_49)
    ;
    if (PStack_1.m_Normal.y * fVar38 + PStack_1.m_Normal.x * fVar37 +
        PStack_1.m_Normal.z * fVar36 + PStack_1.m_Distance <= epsilon._ptContainEps) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_5._0_4_ = (pVVar3->rightVector).x;
      auStack_5._4_4_ = (pVVar3->rightVector).y;
      fVar42 = (pVVar3->rightVector).z;
      fVar43 = (float)auStack_5._4_4_ * fVar35;
      fVar44 = (float)auStack_5._0_4_ * fVar35;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_5._0_4_ = (pVVar3->forwardVector).x;
      auStack_5._4_4_ = (pVVar3->forwardVector).y;
      fVar44 = (float)auStack_5._0_4_ * fVar40 + fVar44;
      fVar43 = (float)auStack_5._4_4_ * fVar40 + fVar43;
      fVar42 = (pVVar3->forwardVector).z * fVar40 + fVar42 * fVar35;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar50 = (pVVar3->forwardVector).x;
      uVar51 = (pVVar3->forwardVector).y;
      VStack_2.y = fVar43;
      VStack_2.x = fVar44;
      auStack_5._8_4_ = fVar42 - (pVVar3->forwardVector).z * baseDepth;
      auStack_5._4_4_ = fVar43 - (float)uVar51 * baseDepth;
      auStack_5._0_4_ = fVar44 - (float)uVar50 * baseDepth;
      VStack_4._0_8_ = uVar15;
      VStack_4.z = fVar41;
      VStack_2.z = fVar42;
      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                (&PStack_1,&VStack_4,&VStack_2,(Vector3 *)auStack_5,
                 in_stack_49);
      if (PStack_1.m_Normal.y * fVar38 + PStack_1.m_Normal.x * fVar37 +
          PStack_1.m_Normal.z * fVar36 + PStack_1.m_Distance <= epsilon._ptContainEps) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        auStack_5._0_4_ = (pVVar3->rightVector).x;
        auStack_5._4_4_ = (pVVar3->rightVector).y;
        fVar42 = (pVVar3->rightVector).z;
        fVar43 = (float)(auStack_5._4_4_ ^ uVar39);
        fVar44 = (float)(auStack_5._0_4_ ^ uVar39);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        auStack_5._0_4_ = (pVVar3->forwardVector).x;
        auStack_5._4_4_ = (pVVar3->forwardVector).y;
        fVar44 = (float)auStack_5._0_4_ * fVar40 + fVar44 * fVar35;
        fVar43 = (float)auStack_5._4_4_ * fVar40 + fVar43 * fVar35;
        fVar42 = (pVVar3->forwardVector).z * fVar40 + (float)((uint)fVar42 ^ uVar39) * fVar35;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar52 = (pVVar3->rightVector).x;
        uVar53 = (pVVar3->rightVector).y;
        VStack_2.y = fVar43;
        VStack_2.x = fVar44;
        auStack_5._8_4_ = (pVVar3->rightVector).z * baseWidth + fVar42;
        auStack_5._4_4_ = (float)uVar53 * baseWidth + fVar43;
        auStack_5._0_4_ = (float)uVar52 * baseWidth + fVar44;
        VStack_4._0_8_ = uVar15;
        VStack_4.z = fVar41;
        VStack_2.z = fVar42;
        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                  (&PStack_1,&VStack_4,&VStack_2,(Vector3 *)auStack_5,
                   in_stack_49);
        if (PStack_1.m_Normal.y * fVar38 + PStack_1.m_Normal.x * fVar37 +
            PStack_1.m_Normal.z * fVar36 + PStack_1.m_Distance <= epsilon._ptContainEps) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          auStack_5._0_4_ = (pVVar3->rightVector).x;
          auStack_5._4_4_ = (pVVar3->rightVector).y;
          fVar42 = (pVVar3->rightVector).z;
          fVar43 = (float)(auStack_5._4_4_ ^ uVar39);
          fVar44 = (float)(auStack_5._0_4_ ^ uVar39);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          auStack_5._0_4_ = (pVVar3->forwardVector).x;
          auStack_5._4_4_ = (pVVar3->forwardVector).y;
          fVar44 = fVar44 * fVar35 - (float)auStack_5._0_4_ * fVar40;
          fVar43 = fVar43 * fVar35 - (float)auStack_5._4_4_ * fVar40;
          fVar35 = (float)((uint)fVar42 ^ uVar39) * fVar35 - (pVVar3->forwardVector).z * fVar40;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar54 = (pVVar3->forwardVector).x;
          uVar55 = (pVVar3->forwardVector).y;
          VStack_2.y = fVar43;
          VStack_2.x = fVar44;
          auStack_5._8_4_ = (pVVar3->forwardVector).z * baseDepth + fVar35;
          auStack_5._4_4_ = (float)uVar55 * baseDepth + fVar43;
          auStack_5._0_4_ = (float)uVar54 * baseDepth + fVar44;
          VStack_4._0_8_ = uVar15;
          VStack_4.z = fVar41;
          VStack_2.z = fVar35;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    (&PStack_1,&VStack_4,&VStack_2,(Vector3 *)auStack_5,
                     in_stack_49);
          if (PStack_1.m_Normal.y * fVar38 + PStack_1.m_Normal.x * fVar37 +
              PStack_1.m_Normal.z * fVar36 + PStack_1.m_Distance <= epsilon._ptContainEps) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Single, Quaternion) */

bool Assembly-CSharp.dll::RTG::PyramidMath::PyramidMath_Raycast
               (Ray *ray,float *t,Vector3 *baseCenter,float baseWidth,float baseDepth,float height,
               Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Comparison<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__PyramidMath____c___Raycast_b__1_0_float__float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PyramidMath____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  PStack_2.m_Normal.x = 0.0;
  PStack_2.m_Normal.y = 0.0;
  PStack_2.m_Normal.z = 0.0;
  PStack_2.m_Distance = 0.0;
  *t = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3.x = baseCenter->x;
  VStack_3.y = baseCenter->y;
  VStack_4._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
  VStack_4.z = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
  auStack_5._0_4_ = rotation->x;
  auStack_5._4_4_ = rotation->y;
  uStack_6 = *(Vector2 *)&rotation->z;
  VStack_3.z = baseCenter->z;
  _Stack_170.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_168.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_160.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_158.genericMethod = (Il2CppGenericMethod *)0x0;
  uStack_7._0_4_ = 0;
  uStack_7._4_2_ = 0;
  uStack_7._6_2_ = 0;
  uStack_8._0_2_ = 0;
  uStack_8._2_1_ = 0;
  uStack_8._3_5_ = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar11 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar11 = (code *)FUN_?(&UNK_?);
    if (pcVar11 == (code *)0x0) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      bVar13 = (*pcVar11)();
      return bVar13;
    }
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(&VStack_3,auStack_5,&VStack_4);
  _Stack_128.methodMetadataHandle = _Stack_170.methodMetadataHandle;
  _Stack_120.genericMethod = _Stack_168.genericMethod;
  _Stack_118.methodMetadataHandle = _Stack_160.methodMetadataHandle;
  _Stack_110.genericMethod = _Stack_158.genericMethod;
  uStack_14 = (uint32_t)uStack_7;
  uStack_15 = uStack_7._4_2_;
  uStack_16 = uStack_7._6_2_;
  uStack_17 = (uint16_t)uStack_8;
  uStack_18 = uStack_8._2_1_;
  uStack_19 = uStack_8._3_5_;
  auStack_5._0_4_ = (ray->m_Origin).x;
  auStack_5._4_4_ = (ray->m_Origin).y;
  uStack_6 = *(Vector2 *)&(ray->m_Origin).z;
  uStack_20 = uStack_9;
  uStack_21 = uStack_10;
  pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
  pRVar23 = RayEx::RayEx_InverseTransform
                      ((Ray *)auStack_24,(Ray *)auStack_5,(Matrix4x4 *)&_Stack_128,
                       (MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  fVar25 = (pRVar23->m_Origin).y;
  pIVar26 = *(InvokerMethod *)&pRVar23->m_Origin;
  fVar27 = (pRVar23->m_Origin).z;
  fVar28 = (pRVar23->m_Direction).x;
  pIVar29 = *(Il2CppClass **)&(pRVar23->m_Direction).y;
  (ray->m_Origin).x = (pRVar23->m_Origin).x;
  (ray->m_Origin).y = fVar25;
  (ray->m_Origin).z = fVar27;
  (ray->m_Direction).x = fVar28;
  *(Il2CppClass **)&(ray->m_Direction).y = pIVar29;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar25 = _UNK_?;
  pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_5._0_4_ = (pVVar30->upVector).x;
  auStack_5._4_4_ = (pVVar30->upVector).y;
  fVar31 = (float)auStack_5._4_4_ * height * _UNK_?;
  fVar32 = (float)auStack_5._0_4_ * height * _UNK_?;
  fVar33 = (pVVar30->upVector).z * height * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_5._0_4_ = 0.0;
  auStack_5._4_4_ = 0.0;
  VVar34 = *(Vector2 *)TypeInfo__UnityEngine__Quaternion->static_fields;
  VVar35 = ((Vector2 *)TypeInfo__UnityEngine__Quaternion->static_fields)[1];
  pQVar36 = rotation;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
    pQVar36 = rotation;
  }
  rotation._4_4_ = (undefined4)((ulonglong)pQVar36 >> 0x20);
  if (cRam_? == '\0') {
    rotation = pQVar36;
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  rotation._0_4_ = 0.0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = (float)auStack_5._0_4_;
  VStack_4.y = (float)auStack_5._4_4_;
  VStack_3.y = height;
  VStack_3.x = baseWidth;
  method_00 = (MethodInfo *)auStack_5;
  VStack_37.y = fVar31;
  VStack_37.x = fVar32;
  VStack_3.z = baseDepth;
  VStack_4.z = 0.0;
  auStack_5 = (undefined1  [8])VVar34;
  uStack_6 = VVar35;
  VStack_37.z = fVar33;
  auStack_24._0_8_ = pIVar26;
  auStack_24._8_4_ = fVar27;
  fStack_38 = fVar28;
  pIStack_39 = pIVar29;
  bVar13 = BoxMath::BoxMath_Raycast_1
                     ((Ray *)auStack_24,(float *)&rotation,&VStack_37,&VStack_3,
                      (Quaternion *)method_00,(BoxEpsilon *)&VStack_4,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    lVar40 = FUN_?(TypeInfo__System__Collections__Generic__List<float>);
    pvVar41 = MethodInfo__System__Collections__Generic__List<float>__List_int_->klass->rgctx_data[3]
              .rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar41 + 0x135) & 1) == 0) {
      pvVar41 = (void *)FUN_?(pvVar41);
    }
    uVar12 = FUN_?(pvVar41);
    bVar1 = iRam_? != 0;
    *(undefined8 *)(lVar40 + 0x10) = uVar12;
    if (bVar1) {
      uVar42 = (uint)(lVar40 + 0x10U >> 0xc);
      uVar43 = (ulonglong)((uVar42 & 0x1fffff) >> 6);
      do {
        uVar44 = *(ulonglong *)(uVar43 * 8 + 0xADDR);
        puVar45 = (ulonglong *)(uVar43 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar44 == *puVar45;
        if (bVar1) {
          *puVar45 = uVar44 | 1L << (uVar42 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar29 = *(Il2CppClass **)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fVar27 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    VStack_3._0_8_ = pIVar29;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_37.x = (pVVar30->zeroVector).x;
    VStack_37.y = (pVVar30->zeroVector).y;
    fVar28 = (pVVar30->zeroVector).z;
    VStack_4._0_8_ = pIVar29;
    VStack_4.z = fVar27;
    fVar31 = (float)FUN_?(&VStack_4);
    if (_UNK_? < fVar31) {
      fVar32 = VStack_3.x / fVar31;
      fVar33 = VStack_3.y / fVar31;
      fVar27 = fVar27 / fVar31;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar32 = (pVVar30->zeroVector).x;
      fVar33 = (pVVar30->zeroVector).y;
      fVar27 = (pVVar30->zeroVector).z;
    }
    uVar42 = _UNK_?;
    VStack_4._0_8_ = CONCAT44(fVar33,fVar32);
    pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
    fVar46 = SUB84(pIStack_22,0) * fVar33 + (ray->m_Direction).x * fVar32 +
             (float)((ulonglong)pIStack_22 >> 0x20) * fVar27;
    fVar31 = (float)((uint)((ray->m_Origin).y * fVar33 + (ray->m_Origin).x * fVar32 +
                           (ray->m_Origin).z * fVar27) ^ _UNK_?);
    fVar27 = (float)((uint)(VStack_37.y * fVar33 + VStack_37.x * fVar32 + fVar28 * fVar27) ^
                    _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar47 = _UNK_?;
    fVar28 = (float)((uint)fVar46 & _UNK_?);
    if ((float)((uint)fVar46 & _UNK_?) <= 0.0) {
      fVar28 = 0.0;
    }
    fVar33 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar32 = fVar28 * _UNK_?;
    if (fVar28 * _UNK_? <= fVar33) {
      fVar32 = fVar33;
    }
    if ((fVar32 <= (float)((uint)(0.0 - fVar46) & _UNK_?)) &&
       (fVar46 = (fVar31 - fVar27) / fVar46, 0.0 < fVar46)) {
      uVar48 = (ray->m_Direction).x;
      uVar49 = (ray->m_Direction).y;
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      fVar27 = (ray->m_Direction).z;
      fVar32 = (float)uVar48 * fVar46 + (float)auStack_5._0_4_;
      fVar31 = (float)uVar49 * fVar46 + (float)auStack_5._4_4_;
      fVar28 = (ray->m_Origin).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar50 = (undefined4)((ulonglong)method_00 >> 0x20);
      pIVar29 = *(Il2CppClass **)&TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
      fVar33 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_5._0_4_ = 0.0;
      auStack_5._4_4_ = 0.0;
      uStack_6._0_4_ = 0.0;
      uStack_6._4_4_ = 0.0;
      VStack_4._0_8_ =
           *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
      VStack_4.z = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
      VStack_37.z = baseCenter->z;
      VStack_37.x = baseCenter->x;
      VStack_37.y = baseCenter->y;
      VStack_51.y = fVar31;
      VStack_51.x = fVar32;
      method_00 = (MethodInfo *)CONCAT44(uVar50,baseDepth);
      VStack_3._0_8_ = pIVar29;
      VStack_3.z = fVar33;
      VStack_51.z = fVar27 * fVar46 + fVar28;
      bVar13 = QuadMath::QuadMath_Contains3DPoint
                         (&VStack_51,0,&VStack_37,baseWidth,baseDepth,&VStack_3,&VStack_4,
                          (QuadEpsilon *)auStack_5,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        FUN_?(lVar40);
      }
    }
    fVar27 = baseWidth * fVar25;
    fVar25 = baseDepth * fVar25;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->upVector).x;
    auStack_5._4_4_ = (pVVar30->upVector).y;
    fVar31 = (float)auStack_5._4_4_ * height;
    rotation._0_4_ = (float)auStack_5._0_4_ * height;
    fVar28 = (pVVar30->upVector).z * height;
    VStack_37.y = (float)auStack_5._4_4_;
    VStack_37.x = fVar31;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->rightVector).x;
    auStack_5._4_4_ = (pVVar30->rightVector).y;
    fVar32 = (pVVar30->rightVector).z;
    fVar33 = (float)auStack_5._4_4_ * fVar27;
    fVar46 = (float)auStack_5._0_4_ * fVar27;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->forwardVector).x;
    auStack_5._4_4_ = (pVVar30->forwardVector).y;
    fVar46 = fVar46 - (float)auStack_5._0_4_ * fVar25;
    fVar33 = fVar33 - (float)auStack_5._4_4_ * fVar25;
    fVar32 = fVar32 * fVar27 - (pVVar30->forwardVector).z * fVar25;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->rightVector).x;
    auStack_5._4_4_ = (pVVar30->rightVector).y;
    fVar52 = fVar46 - (float)auStack_5._0_4_ * baseWidth;
    fStack_53 = fVar33 - (float)auStack_5._4_4_ * baseWidth;
    VStack_4.z = fVar32 - (pVVar30->rightVector).z * baseWidth;
    VStack_51.x = VStack_4.z;
    VStack_4.y = fStack_53;
    VStack_4.x = fVar52;
    auStack_54._0_8_ = CONCAT44(fVar33,fVar46);
    VStack_3._0_8_ = CONCAT44(fVar31,rotation._0_4_);
    VStack_55.y = fVar31;
    VStack_55.x = rotation._0_4_;
    _Stack_200._0_4_ = fVar28;
    auStack_54._8_4_ = fVar32;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (&PStack_2,(Vector3 *)&VStack_55,(Vector3 *)auStack_54,&VStack_4,method_00);
    pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
    auStack_5._4_4_ = (ray->m_Direction).x;
    auStack_5._0_4_ =
         (float)auStack_5._4_4_ * PStack_2.m_Normal.x +
         SUB84(pIStack_22,0) * PStack_2.m_Normal.y +
         (float)((ulonglong)pIStack_22 >> 0x20) * PStack_2.m_Normal.z;
    uStack_6 = (Vector2)CONCAT44(auStack_5._4_4_,auStack_5._4_4_);
    fVar31 = (float)((uint)((ray->m_Origin).x * PStack_2.m_Normal.x +
                            (ray->m_Origin).y * PStack_2.m_Normal.y +
                           (ray->m_Origin).z * PStack_2.m_Normal.z) ^ uVar42) -
             PStack_2.m_Distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar56 = (float)(auStack_5._0_4_ & uVar47);
    if ((float)(auStack_5._0_4_ & uVar47) <= 0.0) {
      fVar56 = 0.0;
    }
    fVar57 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar58 = fVar56 * _UNK_?;
    if (fVar56 * _UNK_? <= fVar57) {
      fVar58 = fVar57;
    }
    if ((fVar58 <= (float)((uint)(0.0 - (float)auStack_5._0_4_) & uVar47)) &&
       (fVar31 = fVar31 / (float)auStack_5._0_4_, 0.0 < fVar31)) {
      uVar59 = (ray->m_Direction).x;
      uVar60 = (ray->m_Direction).y;
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VVar34.x = (float)uVar59 * fVar31 + (float)auStack_5._0_4_;
      fVar56 = (float)uVar60 * fVar31 + (float)auStack_5._4_4_;
      a_Stack_1f8[0]._0_4_ = (ray->m_Direction).z * fVar31 + (ray->m_Origin).z;
      if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_55.x = VStack_4.x;
      VStack_55.y = VStack_4.y;
      auStack_54._0_8_ = CONCAT44(fStack_53,fVar52);
      uVar12._4_4_ = fVar33;
      uVar12._0_4_ = fVar46;
      auStack_54._8_4_ = VStack_51.x;
      method_00 = (MethodInfo *)auStack_54;
      auStack_24._0_8_ = CONCAT44(VStack_37.x,rotation._0_4_);
      VVar34.y = fVar56;
      uStack_6 = (Vector2)CONCAT44(uStack_6._4_4_,a_Stack_1f8[0]._0_4_);
      _Stack_200._0_4_ = 0.0;
      auStack_5 = (undefined1  [8])VVar34;
      VStack_51._0_8_ = uVar12;
      VStack_51.z = fVar32;
      auStack_24._8_4_ = fVar28;
      bVar13 = TriangleMath::TriangleMath_Contains3DPoint
                         ((Vector3 *)auStack_5,0,(Vector3 *)auStack_24,&VStack_51,
                          (Vector3 *)method_00,(TriangleEpsilon *)&VStack_55,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        FUN_?(lVar40);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->rightVector).x;
    auStack_5._4_4_ = (pVVar30->rightVector).y;
    fVar33 = (float)auStack_5._0_4_ * fVar27;
    fVar31 = (pVVar30->rightVector).z;
    fVar32 = (float)auStack_5._4_4_ * fVar27;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->forwardVector).x;
    auStack_5._4_4_ = (pVVar30->forwardVector).y;
    fVar32 = (float)auStack_5._4_4_ * fVar25 + fVar32;
    fVar33 = (float)auStack_5._0_4_ * fVar25 + fVar33;
    fVar31 = (pVVar30->forwardVector).z * fVar25 + fVar31 * fVar27;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar61 = (pVVar30->forwardVector).x;
    uVar62 = (pVVar30->forwardVector).y;
    fVar46 = fVar33 - (float)uVar61 * baseDepth;
    a_Stack_1f8[0]._0_4_ = fVar32 - (float)uVar62 * baseDepth;
    fVar52 = fVar31 - (pVVar30->forwardVector).z * baseDepth;
    VStack_51.x = fVar52;
    uStack_6 = (Vector2)CONCAT44(uStack_6._4_4_,fVar52);
    auStack_5._4_4_ = a_Stack_1f8[0]._0_4_;
    auStack_5._0_4_ = fVar46;
    auStack_24._0_8_ = CONCAT44(fVar32,fVar33);
    VStack_55.x = VStack_3.x;
    VStack_55.y = VStack_3.y;
    _Stack_200._0_4_ = fVar28;
    auStack_24._8_4_ = fVar31;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (&PStack_2,(Vector3 *)&VStack_55,(Vector3 *)auStack_24,(Vector3 *)auStack_5,
               method_00);
    pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
    auStack_5._4_4_ = (ray->m_Direction).x;
    auStack_5._0_4_ =
         (float)auStack_5._4_4_ * PStack_2.m_Normal.x +
         SUB84(pIStack_22,0) * PStack_2.m_Normal.y +
         (float)((ulonglong)pIStack_22 >> 0x20) * PStack_2.m_Normal.z;
    uStack_6 = (Vector2)CONCAT44(auStack_5._4_4_,auStack_5._4_4_);
    fVar52 = (float)((uint)((ray->m_Origin).x * PStack_2.m_Normal.x +
                            (ray->m_Origin).y * PStack_2.m_Normal.y +
                           (ray->m_Origin).z * PStack_2.m_Normal.z) ^ uVar42) -
             PStack_2.m_Distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar56 = (float)(auStack_5._0_4_ & uVar47);
    if ((float)(auStack_5._0_4_ & uVar47) <= 0.0) {
      fVar56 = 0.0;
    }
    fVar57 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar58 = fVar56 * _UNK_?;
    if (fVar56 * _UNK_? <= fVar57) {
      fVar58 = fVar57;
    }
    if ((fVar58 <= (float)((uint)(0.0 - (float)auStack_5._0_4_) & uVar47)) &&
       (fVar52 = fVar52 / (float)auStack_5._0_4_, 0.0 < fVar52)) {
      uVar63 = (ray->m_Direction).x;
      uVar64 = (ray->m_Direction).y;
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      uVar65._0_4_ = (float)uVar63 * fVar52 + (float)auStack_5._0_4_;
      fVar56 = (float)uVar64 * fVar52 + (float)auStack_5._4_4_;
      fStack_53 = (ray->m_Direction).z * fVar52 + (ray->m_Origin).z;
      if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_5._0_4_ = VStack_4.x;
      auStack_5._4_4_ = VStack_4.y;
      auStack_24._0_8_ = CONCAT44(a_Stack_1f8[0]._0_4_,fVar46);
      VStack_55 = (Vector2)CONCAT44(fVar32,fVar33);
      auStack_24._8_4_ = VStack_51.x;
      method_00 = (MethodInfo *)auStack_24;
      auStack_54._0_8_ = CONCAT44(VStack_37.x,rotation._0_4_);
      uVar65._4_4_ = fVar56;
      VStack_51.z = fStack_53;
      uStack_6 = (Vector2)((ulonglong)uStack_6 & 0xffffffff00000000);
      _Stack_200._0_4_ = fVar31;
      VStack_51._0_8_ = uVar65;
      auStack_54._8_4_ = fVar28;
      bVar13 = TriangleMath::TriangleMath_Contains3DPoint
                         (&VStack_51,0,(Vector3 *)auStack_54,(Vector3 *)&VStack_55,
                          (Vector3 *)method_00,(TriangleEpsilon *)auStack_5,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        FUN_?(lVar40);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->rightVector).x;
    auStack_5._4_4_ = (pVVar30->rightVector).y;
    fVar31 = (pVVar30->rightVector).z;
    fVar32 = (float)(auStack_5._4_4_ ^ uVar42);
    fVar33 = (float)(auStack_5._0_4_ ^ uVar42);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->forwardVector).x;
    auStack_5._4_4_ = (pVVar30->forwardVector).y;
    fVar32 = (float)auStack_5._4_4_ * fVar25 + fVar32 * fVar27;
    fVar33 = (float)auStack_5._0_4_ * fVar25 + fVar33 * fVar27;
    fVar31 = (pVVar30->forwardVector).z * fVar25 + (float)((uint)fVar31 ^ uVar42) * fVar27;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar66 = (pVVar30->rightVector).x;
    uVar67 = (pVVar30->rightVector).y;
    VStack_51.x = (float)uVar67 * baseWidth + fVar32;
    fVar46 = (float)uVar66 * baseWidth + fVar33;
    a_Stack_1f8[0]._0_4_ = (pVVar30->rightVector).z * baseWidth + fVar31;
    VStack_51.y = (float)uVar67;
    uStack_6 = (Vector2)CONCAT44(uStack_6._4_4_,a_Stack_1f8[0]._0_4_);
    auStack_5._4_4_ = VStack_51.x;
    auStack_5._0_4_ = fVar46;
    auStack_24._0_8_ = CONCAT44(fVar32,fVar33);
    VStack_55.x = VStack_3.x;
    VStack_55.y = VStack_3.y;
    _Stack_200._0_4_ = fVar28;
    auStack_24._8_4_ = fVar31;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (&PStack_2,(Vector3 *)&VStack_55,(Vector3 *)auStack_24,(Vector3 *)auStack_5,
               method_00);
    uVar42 = _UNK_?;
    pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
    fVar56 = (ray->m_Direction).x * PStack_2.m_Normal.x +
             SUB84(pIStack_22,0) * PStack_2.m_Normal.y +
             (float)((ulonglong)pIStack_22 >> 0x20) * PStack_2.m_Normal.z;
    fVar52 = (float)((uint)((ray->m_Origin).x * PStack_2.m_Normal.x +
                            (ray->m_Origin).y * PStack_2.m_Normal.y +
                           (ray->m_Origin).z * PStack_2.m_Normal.z) ^ _UNK_?) -
             PStack_2.m_Distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar58 = (float)((uint)fVar56 & uVar47);
    if ((float)((uint)fVar56 & uVar47) <= 0.0) {
      fVar58 = 0.0;
    }
    fVar68 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar57 = fVar58 * _UNK_?;
    if (fVar58 * _UNK_? <= fVar68) {
      fVar57 = fVar68;
    }
    if (((float)((uint)(0.0 - fVar56) & uVar47) < fVar57) ||
       (fVar52 = fVar52 / fVar56, fVar52 <= 0.0)) {
      fVar46 = VStack_37.x;
    }
    else {
      uVar69 = (ray->m_Direction).x;
      uVar70 = (ray->m_Direction).y;
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      fVar68 = (float)uVar69 * fVar52 + (float)auStack_5._0_4_;
      fVar56 = (ray->m_Direction).z;
      fVar57 = (float)uVar70 * fVar52 + (float)auStack_5._4_4_;
      fVar58 = (ray->m_Origin).z;
      if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_5._0_4_ = VStack_4.x;
      auStack_5._4_4_ = VStack_4.y;
      auStack_24._0_8_ = CONCAT44(VStack_51.x,fVar46);
      fVar46 = VStack_37.x;
      VStack_55 = (Vector2)CONCAT44(fVar32,fVar33);
      auStack_54._0_8_ = CONCAT44(fVar46,rotation._0_4_);
      method_00 = (MethodInfo *)auStack_24;
      VStack_37.y = fVar57;
      VStack_37.x = fVar68;
      auStack_24._8_4_ = a_Stack_1f8[0]._0_4_;
      uStack_6 = (Vector2)((ulonglong)uStack_6 & 0xffffffff00000000);
      _Stack_200._0_4_ = fVar31;
      VStack_37.z = fVar56 * fVar52 + fVar58;
      auStack_54._8_4_ = fVar28;
      bVar13 = TriangleMath::TriangleMath_Contains3DPoint
                         (&VStack_37,0,(Vector3 *)auStack_54,(Vector3 *)&VStack_55,
                          (Vector3 *)method_00,(TriangleEpsilon *)auStack_5,(MethodInfo *)0x0);
      uVar42 = _UNK_?;
      if (bVar13 != 0) {
        FUN_?(lVar40);
        uVar42 = _UNK_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->rightVector).x;
    auStack_5._4_4_ = (pVVar30->rightVector).y;
    fVar31 = (pVVar30->rightVector).z;
    fVar32 = (float)(auStack_5._4_4_ ^ uVar42);
    fVar33 = (float)(auStack_5._0_4_ ^ uVar42);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_5._0_4_ = (pVVar30->forwardVector).x;
    auStack_5._4_4_ = (pVVar30->forwardVector).y;
    fVar33 = fVar33 * fVar27 - (float)auStack_5._0_4_ * fVar25;
    fVar32 = fVar32 * fVar27 - (float)auStack_5._4_4_ * fVar25;
    fVar25 = (float)((uint)fVar31 ^ uVar42) * fVar27 - (pVVar30->forwardVector).z * fVar25;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar71 = (pVVar30->forwardVector).x;
    uVar72 = (pVVar30->forwardVector).y;
    fVar27 = (float)uVar71 * baseDepth + fVar33;
    fVar31 = (pVVar30->forwardVector).z * baseDepth + fVar25;
    fVar58 = (float)uVar72 * baseDepth + fVar32;
    uStack_6 = (Vector2)CONCAT44(uStack_6._4_4_,fVar31);
    auStack_5._4_4_ = fVar58;
    auStack_5._0_4_ = fVar27;
    auStack_24._0_8_ = CONCAT44(fVar32,fVar33);
    VStack_55.x = VStack_3.x;
    VStack_55.y = VStack_3.y;
    _Stack_200._0_4_ = fVar28;
    auStack_24._8_4_ = fVar25;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
              (&PStack_2,(Vector3 *)&VStack_55,(Vector3 *)auStack_24,(Vector3 *)auStack_5,
               method_00);
    pIStack_22 = *(InvokerMethod *)&(ray->m_Direction).y;
    fVar56 = (ray->m_Direction).x * PStack_2.m_Normal.x +
             SUB84(pIStack_22,0) * PStack_2.m_Normal.y +
             (float)((ulonglong)pIStack_22 >> 0x20) * PStack_2.m_Normal.z;
    fVar52 = (float)((uint)((ray->m_Origin).y * PStack_2.m_Normal.y +
                            (ray->m_Origin).x * PStack_2.m_Normal.x +
                           (ray->m_Origin).z * PStack_2.m_Normal.z) ^ _UNK_?) -
             PStack_2.m_Distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar57 = (float)((uint)fVar56 & uVar47);
    if ((float)((uint)fVar56 & uVar47) <= 0.0) {
      fVar57 = 0.0;
    }
    fVar73 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar68 = fVar57 * _UNK_?;
    if (fVar57 * _UNK_? <= fVar73) {
      fVar68 = fVar73;
    }
    if ((fVar68 <= (float)((uint)(0.0 - fVar56) & uVar47)) &&
       (fVar52 = fVar52 / fVar56, 0.0 < fVar52)) {
      uVar74 = (ray->m_Direction).x;
      uVar75 = (ray->m_Direction).y;
      auStack_5._0_4_ = (ray->m_Origin).x;
      auStack_5._4_4_ = (ray->m_Origin).y;
      fVar56 = (ray->m_Direction).z;
      fVar57 = (ray->m_Origin).z;
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      fVar73 = (float)uVar74 * fVar52 + (float)auStack_5._0_4_;
      fVar68 = (float)uVar75 * fVar52 + (float)auStack_5._4_4_;
      if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_5._0_4_ = VStack_4.x;
      auStack_5._4_4_ = VStack_4.y;
      auStack_24._0_8_ = CONCAT44(fVar58,fVar27);
      VStack_55 = (Vector2)CONCAT44(fVar32,fVar33);
      auStack_54._0_8_ = CONCAT44(fVar46,rotation._0_4_);
      VStack_4.y = fVar68;
      VStack_4.x = fVar73;
      uStack_6 = (Vector2)((ulonglong)uStack_6 & 0xffffffff00000000);
      VStack_4.z = fVar56 * fVar52 + fVar57;
      _Stack_200._0_4_ = fVar25;
      auStack_54._8_4_ = fVar28;
      auStack_24._8_4_ = fVar31;
      bVar13 = TriangleMath::TriangleMath_Contains3DPoint
                         (&VStack_4,0,(Vector3 *)auStack_54,(Vector3 *)&VStack_55,
                          (Vector3 *)auStack_24,(TriangleEpsilon *)auStack_5,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        FUN_?(lVar40);
      }
    }
    if (*(int *)(lVar40 + 0x18) != 0) {
      if (*(int *)&(TypeInfo__RTG__PyramidMath____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar76 = TypeInfo__RTG__PyramidMath____c->static_fields->__9__1_0;
      if (pCVar76 == (Comparison_1_Single_ *)0x0) {
        if (*(int *)&(TypeInfo__RTG__PyramidMath____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar77 = TypeInfo__RTG__PyramidMath____c->static_fields->__9;
        pCVar76 = (Comparison_1_Single_ *)FUN_?(TypeInfo__System__Comparison<float>);
        FUN_?(pCVar76,pPVar77,
                      MethodInfo__RTG__PyramidMath____c___Raycast_b__1_0_float__float_);
        TypeInfo__RTG__PyramidMath____c->static_fields->__9__1_0 = pCVar76;
        func_?(&TypeInfo__RTG__PyramidMath____c->static_fields->__9__1_0);
      }
      FUN_?(lVar40,pCVar76);
      fVar25 = (float)FUN_?(lVar40,0);
      *t = fVar25;
      return 1;
    }
  }
  return 0;
}

