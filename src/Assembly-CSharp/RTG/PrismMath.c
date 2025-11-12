
/* List`1[UnityEngine.Vector3] CalcTriangPrismCornerPoints(Vector3, Single, Single, Single, Single,
   Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PrismMath::PrismMath_CalcTriangPrismCornerPoints
          (Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,float topDepth,
          float height,Quaternion *prismRotation,MethodInfo *method)

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
  fVar1 = baseWidth * _UNK_?;
  fVar2 = baseDepth * _UNK_?;
  fVar3 = topWidth * _UNK_?;
  fVar4 = topDepth * _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fVar7 = (float)(PStack_6.Quadrant ^ _UNK_?);
  fVar8 = (float)(PStack_6.FirstAxisSign ^ _UNK_?);
  fVar9 = (float)((uint)(pVVar5->forwardVector).z ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar7 = fVar7 * fVar2 - (float)PStack_6.Quadrant * fVar1;
  fVar8 = fVar8 * fVar2 - (float)PStack_6.FirstAxisSign * fVar1;
  fVar1 = fVar9 * fVar2 - (pVVar5->rightVector).z * fVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar9 = (float)PStack_6.Quadrant * baseWidth + fVar7;
  fStack_10 = (pVVar5->rightVector).z * baseWidth + fVar1;
  fVar11 = (float)PStack_6.FirstAxisSign * baseWidth + fVar8;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fStack_12 = (float)PStack_6.Quadrant * fVar2;
  fStack_13 = (pVVar5->forwardVector).z * fVar2;
  fVar2 = (float)PStack_6.FirstAxisSign * fVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->upVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->upVector).y;
  fVar14 = (float)PStack_6.Quadrant * height;
  fVar15 = (pVVar5->upVector).z * height;
  fVar16 = (float)PStack_6.FirstAxisSign * height;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fVar17 = (float)PStack_6.Quadrant * fVar4;
  fVar18 = (float)PStack_6.FirstAxisSign * fVar4;
  fVar19 = (pVVar5->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar17 = (fVar14 - fVar17) - (float)PStack_6.Quadrant * fVar3;
  fVar18 = (fVar16 - fVar18) - (float)PStack_6.FirstAxisSign * fVar3;
  fVar3 = (fVar15 - fVar19 * fVar4) - (pVVar5->rightVector).z * fVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fVar14 = (float)PStack_6.Quadrant * fVar4 + fVar14;
  fVar15 = (pVVar5->forwardVector).z * fVar4 + fVar15;
  fVar16 = (float)PStack_6.FirstAxisSign * fVar4 + fVar16;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_6.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_6.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar4 = (pVVar5->rightVector).z * topWidth + fVar3;
  fVar19 = (float)PStack_6.Quadrant * topWidth + fVar17;
  fVar20 = (float)PStack_6.FirstAxisSign * topWidth + fVar18;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  pvVar21 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
    pvVar21 = (void *)FUN_?(pvVar21);
  }
  pPVar22 = (PlaneIdHelper_PlaneQuadrantInfo__Array *)FUN_?(pvVar21,6);
  bVar23 = iRam_? != 0;
  (this->fields)._items = pPVar22;
  if (bVar23) {
    uVar24 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
    do {
      uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
      puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
      LOCK();
      bVar23 = uVar26 == *puVar27;
      if (bVar23) {
        *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
      }
      UNLOCK();
    } while (!bVar23);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_6.Quadrant = (int32_t)baseCenter->x;
  PStack_6.FirstAxisSign = (int32_t)baseCenter->y;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_28._0_4_ = (pVVar5->oneVector).x;
  uStack_28._4_4_ = (pVVar5->oneVector).y;
  fStack_29 = (pVVar5->oneVector).z;
  uStack_30._0_4_ = prismRotation->x;
  uStack_30._4_4_ = prismRotation->y;
  uStack_31._0_4_ = prismRotation->z;
  uStack_31._4_4_ = prismRotation->w;
  PStack_6.SecondAxisSign = (int32_t)baseCenter->z;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_37 = 0;
  uStack_38 = 0;
  uStack_39 = 0;
  pcVar40 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar40 = (code *)FUN_?(&UNK_?), pcVar40 == (code *)0x0)) {
    uVar41 = func_?(&UNK_?);
    FUN_?(uVar41,0);
    pcVar40 = (code *)swi(3);
    pLVar42 = (List_1_UnityEngine_Vector3_ *)(*pcVar40)();
    return pLVar42;
  }
  pcRam_? = pcVar40;
  (*pcRam_?)(&PStack_6,&uStack_30,&uStack_28,&uStack_32);
  pMVar43 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  fVar44 = _UNK_? /
           (fVar8 * uStack_35._4_4_ + fVar7 * uStack_33._4_4_ + fVar1 * uStack_37._4_4_ +
           uStack_39._4_4_);
  fVar45 = (fVar8 * (float)uStack_34 + fVar7 * (float)uStack_32 + fVar1 * (float)uStack_36 +
           (float)uStack_38) * fVar44;
  fVar46 = (fVar8 * (float)uStack_35 + fVar7 * (float)uStack_33 + fVar1 * (float)uStack_37 +
           (float)uStack_39) * fVar44;
  fVar44 = (fVar8 * uStack_34._4_4_ + fVar7 * uStack_32._4_4_ + fVar1 * uStack_36._4_4_ +
           uStack_38._4_4_) * fVar44;
  piVar47 = &(this->fields)._version;
  *piVar47 = *piVar47 + 1;
  pPVar22 = (this->fields)._items;
  if (pPVar22 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar22->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar22->max_length <= uVar24) goto code_?;
      pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar45;
      pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar44;
      pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar46;
    }
    else {
      PStack_6.FirstAxisSign = (int32_t)fVar44;
      PStack_6.Quadrant = (int32_t)fVar45;
      PStack_6.SecondAxisSign = (int32_t)fVar46;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar1 = _UNK_?;
    fVar8 = uStack_35._4_4_;
    fVar44 = _UNK_? /
             (fVar11 * uStack_35._4_4_ + fVar9 * uStack_33._4_4_ + fStack_10 * uStack_37._4_4_ +
             uStack_39._4_4_);
    fVar7 = (fVar11 * (float)uStack_34 + fVar9 * (float)uStack_32 +
              fStack_10 * (float)uStack_36 + (float)uStack_38) * fVar44;
    fVar45 = (fVar11 * uStack_34._4_4_ + fVar9 * uStack_32._4_4_ + fStack_10 * uStack_36._4_4_ +
             uStack_38._4_4_) * fVar44;
    fVar44 = (fVar11 * (float)uStack_35 + fVar9 * (float)uStack_33 +
              fStack_10 * (float)uStack_37 + (float)uStack_39) * fVar44;
    piVar47 = &(this->fields)._version;
    *piVar47 = *piVar47 + 1;
    pPVar22 = (this->fields)._items;
    if (pPVar22 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar22->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar22->max_length <= uVar24) goto code_?;
      pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar7;
      pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar45;
      pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar44;
    }
    else {
      PStack_6.FirstAxisSign = (int32_t)fVar45;
      PStack_6.Quadrant = (int32_t)fVar7;
      PStack_6.SecondAxisSign = (int32_t)fVar44;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar7 = uStack_33._4_4_;
    fVar11 = fVar1 / (fVar2 * fVar8 + fStack_12 * uStack_33._4_4_ + fStack_13 * uStack_37._4_4_
                      + uStack_39._4_4_);
    fVar44 = (fVar2 * (float)uStack_34 + fStack_12 * (float)uStack_32 +
              fStack_13 * (float)uStack_36 + (float)uStack_38) * fVar11;
    fVar9 = (float)uStack_39;
    fVar45 = (fVar2 * (float)uStack_35 + fStack_12 * (float)uStack_33 +
              fStack_13 * (float)uStack_37 + (float)uStack_39) * fVar11;
    fVar11 = (fVar2 * uStack_34._4_4_ + fStack_12 * uStack_32._4_4_ +
              fStack_13 * uStack_36._4_4_ + uStack_38._4_4_) * fVar11;
    piVar47 = &(this->fields)._version;
    *piVar47 = *piVar47 + 1;
    pPVar22 = (this->fields)._items;
    if (pPVar22 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar22->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar22->max_length <= uVar24) goto code_?;
      pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar44;
      pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar11;
      pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar45;
    }
    else {
      PStack_6.FirstAxisSign = (int32_t)fVar11;
      PStack_6.Quadrant = (int32_t)fVar44;
      PStack_6.SecondAxisSign = (int32_t)fVar45;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar2 = uStack_37._4_4_;
    fVar11 = fVar1 / (fVar18 * fVar8 + fVar17 * fVar7 + fVar3 * uStack_37._4_4_ +
                      uStack_39._4_4_);
    fVar44 = (fVar18 * (float)uStack_34 + fVar17 * (float)uStack_32 + fVar3 * (float)uStack_36 +
             (float)uStack_38) * fVar11;
    fVar9 = (fVar18 * (float)uStack_35 + fVar17 * (float)uStack_33 + fVar3 * (float)uStack_37 +
             fVar9) * fVar11;
    fVar11 = (fVar18 * uStack_34._4_4_ + fVar17 * uStack_32._4_4_ + fVar3 * uStack_36._4_4_ +
             uStack_38._4_4_) * fVar11;
    piVar47 = &(this->fields)._version;
    *piVar47 = *piVar47 + 1;
    pPVar22 = (this->fields)._items;
    if (pPVar22 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar22->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar22->max_length <= uVar24) goto code_?;
      pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar44;
      pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar11;
      pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar9;
    }
    else {
      PStack_6.FirstAxisSign = (int32_t)fVar11;
      PStack_6.Quadrant = (int32_t)fVar44;
      PStack_6.SecondAxisSign = (int32_t)fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar17 = uStack_39._4_4_;
    fVar9 = (float)uStack_34;
    fVar3 = (float)uStack_32;
    fVar18 = fVar1 / (fVar16 * fVar8 + fVar14 * fVar7 + fVar15 * fVar2 + uStack_39._4_4_);
    fVar44 = (fVar16 * (float)uStack_34 + fVar14 * (float)uStack_32 + fVar15 * (float)uStack_36 +
             (float)uStack_38) * fVar18;
    fVar11 = (float)uStack_39;
    fVar45 = (fVar16 * (float)uStack_35 + fVar14 * (float)uStack_33 + fVar15 * (float)uStack_37 +
             (float)uStack_39) * fVar18;
    fVar18 = (fVar16 * uStack_34._4_4_ + fVar14 * uStack_32._4_4_ + fVar15 * uStack_36._4_4_ +
             uStack_38._4_4_) * fVar18;
    piVar47 = &(this->fields)._version;
    *piVar47 = *piVar47 + 1;
    pPVar22 = (this->fields)._items;
    if (pPVar22 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar24 = (this->fields)._size;
    if (uVar24 < (uint)pPVar22->max_length) {
      (this->fields)._size = uVar24 + 1;
      if ((uint)pPVar22->max_length <= uVar24) goto code_?;
      pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar44;
      pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar18;
      pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar45;
    }
    else {
      PStack_6.FirstAxisSign = (int32_t)fVar18;
      PStack_6.Quadrant = (int32_t)fVar44;
      PStack_6.SecondAxisSign = (int32_t)fVar45;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar1 = fVar1 / (fVar20 * fVar8 + fVar19 * fVar7 + fVar4 * fVar2 + fVar17);
    fVar2 = (fVar20 * fVar9 + fVar19 * fVar3 + fVar4 * (float)uStack_36 + (float)uStack_38) *
             fVar1;
    fVar3 = (fVar20 * (float)uStack_35 + fVar19 * (float)uStack_33 + fVar4 * (float)uStack_37 +
             fVar11) * fVar1;
    fVar1 = (fVar20 * uStack_34._4_4_ + fVar19 * uStack_32._4_4_ + fVar4 * uStack_36._4_4_ +
             uStack_38._4_4_) * fVar1;
    piVar47 = &(this->fields)._version;
    *piVar47 = *piVar47 + 1;
    pPVar22 = (this->fields)._items;
    if (pPVar22 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar24 = (this->fields)._size;
      if (uVar24 < (uint)pPVar22->max_length) {
        (this->fields)._size = uVar24 + 1;
        if ((uint)pPVar22->max_length <= uVar24) {
code_?:
          FUN_?();
          pcVar40 = (code *)swi(3);
          pLVar42 = (List_1_UnityEngine_Vector3_ *)(*pcVar40)();
          return pLVar42;
        }
        pPVar22->vector[(int)uVar24].Quadrant = (int32_t)fVar2;
        pPVar22->vector[(int)uVar24].FirstAxisSign = (int32_t)fVar1;
        pPVar22->vector[(int)uVar24].SecondAxisSign = (int32_t)fVar3;
      }
      else {
        PStack_6.FirstAxisSign = (int32_t)fVar1;
        PStack_6.Quadrant = (int32_t)fVar2;
        PStack_6.SecondAxisSign = (int32_t)fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_6,pMVar43->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar40 = (code *)swi(3);
  pLVar42 = (List_1_UnityEngine_Vector3_ *)(*pcVar40)();
  return pLVar42;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Single, Single, Single, Quaternion,
   PrismEpsilon) */

bool Assembly-CSharp.dll::RTG::PrismMath::PrismMath_ContainsPoint
               (Vector3 *point,Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth,
               float topDepth,float height,Quaternion *prismRotation,PrismEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_1.w = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_2.x = baseCenter->x;
  QStack_2.y = baseCenter->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_4.x = (pVVar3->oneVector).x;
  QStack_4.y = (pVVar3->oneVector).y;
  QStack_4.z = (pVVar3->oneVector).z;
  QStack_5.x = prismRotation->x;
  QStack_5.y = prismRotation->y;
  QStack_5.z = prismRotation->z;
  QStack_5.w = prismRotation->w;
  QStack_2.z = baseCenter->z;
  QStack_6.z = 0.0;
  QStack_6.w = 0.0;
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
  (*pcRam_?)(&QStack_2,&QStack_5,&QStack_4,&QStack_6.z);
  uStack_17._0_4_ = QStack_6.z;
  uStack_17._4_4_ = QStack_6.w;
  uStack_18 = uStack_7;
  uStack_19 = uStack_8;
  uStack_20 = uStack_9;
  uStack_21 = uStack_10;
  uStack_22 = uStack_11;
  uStack_23 = uStack_12;
  uStack_24 = uStack_13;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
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
  (*pcRam_?)(&uStack_17,&uStack_25);
  fVar33 = point->z;
  QStack_5.x = point->x;
  QStack_5.y = point->y;
  fVar34 = _UNK_? /
           (QStack_5.y * uStack_28._4_4_ + QStack_5.x * uStack_26._4_4_ +
            fVar33 * uStack_30._4_4_ + uStack_32._4_4_);
  fVar35 = fVar34 * (QStack_5.y * (float)uStack_27 + QStack_5.x * (float)uStack_25 +
                     fVar33 * (float)uStack_29 + (float)uStack_31);
  fVar36 = fVar34 * (QStack_5.y * uStack_27._4_4_ + QStack_5.x * uStack_25._4_4_ +
                     fVar33 * uStack_29._4_4_ + uStack_31._4_4_);
  fVar34 = fVar34 * (QStack_5.y * (float)uStack_28 + QStack_5.x * (float)uStack_26 +
                     fVar33 * (float)uStack_30 + (float)uStack_32);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15._0_4_ = (pVVar3->zeroVector).x;
  uVar15._4_4_ = (pVVar3->zeroVector).y;
  fVar33 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar37 = TypeInfo__UnityEngine__Quaternion->static_fields;
  QStack_5.x = (pQVar37->identityQuaternion).x;
  QStack_5.y = (pQVar37->identityQuaternion).y;
  QStack_5.z = (pQVar37->identityQuaternion).z;
  QStack_5.w = (pQVar37->identityQuaternion).w;
  QStack_4._0_8_ = uVar15;
  QStack_4.z = fVar33;
  pLVar38 = PrismMath_CalcTriangPrismCornerPoints
                      ((Vector3 *)&QStack_4,baseWidth,baseDepth,topWidth,topDepth,height,
                       &QStack_5,(MethodInfo *)0x0);
  if (pLVar38 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar38->fields)._size == 0) goto code_?;
    pVVar39 = (pLVar38->fields)._items;
    if (pVVar39 != (Vector3__Array *)0x0) {
      if ((int)pVVar39->max_length != 0) {
        uVar40._0_4_ = pVVar39->vector[0].x;
        uVar40._4_4_ = pVVar39->vector[0].y;
        fVar33 = pVVar39->vector[0].z;
        if ((uint)(pLVar38->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          bVar16 = (*pcVar14)();
          return bVar16;
        }
        if (1 < (uint)pVVar39->max_length) {
          QStack_6.x = pVVar39->vector[1].x;
          QStack_6.y = pVVar39->vector[1].y;
          fVar41 = pVVar39->vector[1].z;
          if ((uint)(pLVar38->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar39->max_length) {
            uVar42._0_4_ = pVVar39->vector[2].x;
            uVar42._4_4_ = pVVar39->vector[2].y;
            fVar43 = pVVar39->vector[2].z;
            QStack_5._0_8_ = uVar42;
            if ((uint)(pLVar38->fields)._size < 4) goto code_?;
            if (pVVar39 == (Vector3__Array *)0x0) goto DAT_?;
            if (3 < (uint)pVVar39->max_length) {
              QStack_2.x = pVVar39->vector[3].x;
              QStack_2.y = pVVar39->vector[3].y;
              fVar44 = pVVar39->vector[3].z;
              if ((uint)(pLVar38->fields)._size < 6) goto code_?;
              if (5 < (uint)pVVar39->max_length) {
                uVar45._0_4_ = pVVar39->vector[5].x;
                uVar45._4_4_ = pVVar39->vector[5].y;
                fVar46 = pVVar39->vector[5].z;
                uVar47._0_4_ = pVVar39->vector[4].x;
                uVar47._4_4_ = pVVar39->vector[4].y;
                fVar48 = pVVar39->vector[4].z;
                QStack_49._0_8_ = uVar47;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                QStack_4.x = (pVVar3->upVector).x;
                QStack_4.y = (pVVar3->upVector).y;
                fVar50 = (pVVar3->upVector).z;
                QStack_4.z = fVar50;
                QStack_51._0_8_ = QStack_4._0_8_;
                fVar52 = (float)FUN_?(&QStack_4);
                if (_UNK_? < fVar52) {
                  QStack_4.x = QStack_51.x / fVar52;
                  fVar50 = fVar50 / fVar52;
                  QStack_4.y = QStack_51.y / fVar52;
                }
                else {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                  QStack_4.x = (pVVar3->zeroVector).x;
                  QStack_4.y = (pVVar3->zeroVector).y;
                  fVar50 = (pVVar3->zeroVector).z;
                }
                uVar53 = _UNK_?;
                if (QStack_4.y * fVar36 + QStack_4.x * fVar35 + fVar50 * fVar34 +
                    (float)((uint)(QStack_4.y * QStack_49.y + QStack_4.x * QStack_49.x +
                                  fVar50 * fVar48) ^ _UNK_?) <= epsilon._ptContainEps) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar54 = (pVVar3->upVector).x;
                  uVar55 = (pVVar3->upVector).y;
                  fVar52 = (float)((uint)(pVVar3->upVector).z ^ uVar53);
                  QStack_49.y = (float)(uVar55 ^ uVar53);
                  QStack_49.x = (float)(uVar54 ^ uVar53);
                  QStack_49.z = fVar52;
                  fVar50 = (float)FUN_?(&QStack_49);
                  if (_UNK_? < fVar50) {
                    QStack_1.z = fVar52 / fVar50;
                    QStack_4.y = (float)(uVar55 ^ uVar53) / fVar50;
                    QStack_4.x = (float)(uVar54 ^ uVar53) / fVar50;
                  }
                  else {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                    QStack_4.x = (pVVar3->zeroVector).x;
                    QStack_4.y = (pVVar3->zeroVector).y;
                    QStack_1.z = (pVVar3->zeroVector).z;
                  }
                  QStack_1.w = (float)((uint)(QStack_5.y * QStack_4.y +
                                                QStack_5.x * QStack_4.x + fVar43 * QStack_1.z)
                                        ^ uVar53);
                  if (fVar36 * QStack_4.y + fVar35 * QStack_4.x + fVar34 * QStack_1.z +
                      QStack_1.w <= epsilon._ptContainEps) {
                    QStack_49._0_8_ = uVar42;
                    QStack_49.z = fVar43;
                    QStack_1._0_8_ = QStack_4._0_8_;
                    QStack_5._0_8_ = uVar47;
                    QStack_51._0_8_ = uVar40;
                    QStack_51.z = fVar33;
                    QStack_5.z = fVar48;
                    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                              ((Plane *)&QStack_1,(Vector3 *)&QStack_51,(Vector3 *)&QStack_49,
                               (Vector3 *)&QStack_5,
                               (MethodInfo *)CONCAT44(in_stack_56,topDepth));
                    uVar15 = QStack_6._0_8_;
                    if (QStack_1.y * fVar36 + QStack_1.x * fVar35 + QStack_1.z * fVar34 +
                        QStack_1.w <= epsilon._ptContainEps) {
                      QStack_51.x = QStack_6.x;
                      QStack_51.y = QStack_6.y;
                      QStack_49._0_8_ = uVar45;
                      QStack_49.z = fVar46;
                      QStack_5._0_8_ = uVar47;
                      QStack_51.z = fVar41;
                      QStack_5.z = fVar48;
                      UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                                ((Plane *)&QStack_1,(Vector3 *)&QStack_51,(Vector3 *)&QStack_49,
                                 (Vector3 *)&QStack_5,
                                 (MethodInfo *)CONCAT44(in_stack_56,topDepth));
                      uVar42 = QStack_6._0_8_;
                      if (QStack_1.y * fVar36 + QStack_1.x * fVar35 + QStack_1.z * fVar34 +
                          QStack_1.w <= epsilon._ptContainEps) {
                        QStack_5.x = QStack_2.x;
                        QStack_5.y = QStack_2.y;
                        QStack_5.z = fVar44;
                        QStack_6.x = (float)uVar15;
                        QStack_6.y = SUB84(uVar15,4);
                        QStack_51.x = QStack_6.x;
                        QStack_51.y = QStack_6.y;
                        QStack_49._0_8_ = uVar40;
                        QStack_49.z = fVar33;
                        QStack_51.z = fVar41;
                        QStack_6._0_8_ = uVar42;
                        UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                                  ((Plane *)&QStack_1,(Vector3 *)&QStack_51,
                                   (Vector3 *)&QStack_49,(Vector3 *)&QStack_5,
                                   (MethodInfo *)CONCAT44(in_stack_56,topDepth));
                        if (QStack_1.y * fVar36 + QStack_1.x * fVar35 + QStack_1.z * fVar34 +
                            QStack_1.w <= epsilon._ptContainEps) {
                          return 1;
                        }
                      }
                    }
                  }
                }
                return 0;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      bVar16 = (*pcVar14)();
      return bVar16;
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar16 = (*pcVar14)();
  return bVar16;
}


/* Boolean RaycastTriangular(Ray, Single ByRef, Vector3, Single, Single, Single, Single, Single,
   Quaternion) */

bool Assembly-CSharp.dll::RTG::PrismMath::PrismMath_RaycastTriangular
               (Ray *ray,float *t,Vector3 *baseCenter,float baseWidth,float baseDepth,float topWidth
               ,float topDepth,float height,Quaternion *prismRotation,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<float>__Sort_System__Comparison<float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__PrismMath____c___RaycastTriangular_b__1_0_float__float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PrismMath____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_20[0] = 0.0;
  *t = 0.0;
  if ((((baseWidth != 0.0) && (baseDepth != 0.0)) && (topWidth != 0.0)) &&
     ((topDepth != 0.0 && (height != 0.0)))) {
    uVar1 = (uint)_UNK_?;
    fVar2 = (float)((uint)baseWidth & uVar1);
    fVar3 = (float)((uint)baseDepth & uVar1);
    fVar4 = (float)((uint)topWidth & uVar1);
    fVar5 = (float)((uint)topDepth & uVar1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = baseCenter->x;
    QStack_6.y = baseCenter->y;
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_8.x = (pVVar7->oneVector).x;
    QStack_8.y = (pVVar7->oneVector).y;
    QStack_8.z = (pVVar7->oneVector).z;
    RStack_9.m_Origin.x = prismRotation->x;
    RStack_9.m_Origin.y = prismRotation->y;
    RStack_9.m_Origin.z = prismRotation->z;
    RStack_9.m_Direction.x = prismRotation->w;
    QStack_6.z = baseCenter->z;
    MStack_10.m00 = 0.0;
    MStack_10.m10 = 0.0;
    MStack_10.m20 = 0.0;
    MStack_10.m30 = 0.0;
    MStack_10.m01 = 0.0;
    MStack_10.m11 = 0.0;
    MStack_10.m21 = 0.0;
    MStack_10.m31 = 0.0;
    MStack_10.m02 = 0.0;
    MStack_10.m12 = 0.0;
    MStack_10.m22 = 0.0;
    MStack_10.m32 = 0.0;
    MStack_10.m03 = 0.0;
    MStack_10.m13 = 0.0;
    MStack_10.m23 = 0.0;
    MStack_10.m33 = 0.0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      bVar13 = (*pcVar11)();
      return bVar13;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&QStack_6,&RStack_9,&QStack_8);
    aMStack_14[0].m00 = MStack_10.m00;
    aMStack_14[0].m10 = MStack_10.m10;
    aMStack_14[0].m20 = MStack_10.m20;
    aMStack_14[0].m30 = MStack_10.m30;
    aMStack_14[0].m01 = MStack_10.m01;
    aMStack_14[0].m11 = MStack_10.m11;
    aMStack_14[0].m21 = MStack_10.m21;
    aMStack_14[0].m31 = MStack_10.m31;
    aMStack_14[0].m02 = MStack_10.m02;
    aMStack_14[0].m12 = MStack_10.m12;
    aMStack_14[0].m22 = MStack_10.m22;
    aMStack_14[0].m32 = MStack_10.m32;
    auStack_15._0_4_ = (ray->m_Origin).x;
    auStack_15._4_4_ = (ray->m_Origin).y;
    auStack_15._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aMStack_14[0].m03 = MStack_10.m03;
    aMStack_14[0].m13 = MStack_10.m13;
    aMStack_14[0].m23 = MStack_10.m23;
    aMStack_14[0].m33 = MStack_10.m33;
    auStack_15._16_4_ = (ray->m_Direction).y;
    auStack_15._20_4_ = (ray->m_Direction).z;
    pRVar16 = RayEx::RayEx_InverseTransform
                        (&RStack_9,(Ray *)auStack_15,aMStack_14,(MethodInfo *)0x0);
    fVar17 = (pRVar16->m_Origin).y;
    uVar12 = *(undefined8 *)&(pRVar16->m_Origin).z;
    QStack_8.x = (pRVar16->m_Direction).y;
    QStack_8.y = (pRVar16->m_Direction).z;
    (ray->m_Origin).x = (pRVar16->m_Origin).x;
    (ray->m_Origin).y = fVar17;
    *(undefined8 *)&(ray->m_Origin).z = uVar12;
    (ray->m_Direction).y = QStack_8.x;
    (ray->m_Direction).z = QStack_8.y;
    fStack_18 = fVar3;
    if (fVar3 <= fVar5) {
      fStack_18 = fVar5;
    }
    fVar17 = fVar2;
    if (fVar2 <= fVar4) {
      fVar17 = fVar4;
    }
    auStack_15._0_4_ = (pRVar16->m_Origin).x;
    auStack_15._4_4_ = (pRVar16->m_Origin).y;
    auStack_15._8_8_ = *(undefined8 *)&(pRVar16->m_Origin).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_9.m_Origin.x = (pVVar7->upVector).x;
    RStack_9.m_Origin.y = (pVVar7->upVector).y;
    fVar19 = RStack_9.m_Origin.y * height * _UNK_?;
    fVar20 = RStack_9.m_Origin.x * height * _UNK_?;
    fVar21 = (pVVar7->upVector).z * height * _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_9.m_Origin.x = 0.0;
    RStack_9.m_Origin.y = 0.0;
    pQVar22 = TypeInfo__UnityEngine__Quaternion->static_fields;
    RStack_23.m_Origin.x = (pQVar22->identityQuaternion).x;
    RStack_23.m_Origin.y = (pQVar22->identityQuaternion).y;
    RStack_23.m_Origin.z = (pQVar22->identityQuaternion).z;
    RStack_23.m_Direction.x = (pQVar22->identityQuaternion).w;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    afStack_24[0] = 0.0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    QStack_6.x = RStack_9.m_Origin.x;
    QStack_6.y = RStack_9.m_Origin.y;
    RStack_9.m_Origin.x = RStack_23.m_Origin.x;
    RStack_9.m_Origin.y = RStack_23.m_Origin.y;
    RStack_9.m_Origin.z = RStack_23.m_Origin.z;
    RStack_9.m_Direction.x = RStack_23.m_Direction.x;
    QStack_6.z = 0.0;
    VStack_25.z = fStack_18;
    RStack_23.m_Origin.z = fVar21;
    VStack_25.y = height;
    VStack_25.x = fVar17;
    RStack_23.m_Origin.y = fVar19;
    RStack_23.m_Origin.x = fVar20;
    auStack_15._16_4_ = QStack_8.x;
    auStack_15._20_4_ = QStack_8.y;
    bVar13 = BoxMath::BoxMath_Raycast_1
                       ((Ray *)auStack_15,afStack_24,&RStack_23.m_Origin,&VStack_25,
                        (Quaternion *)&RStack_9,(BoxEpsilon *)&QStack_6,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar12._0_4_ = (pVVar7->zeroVector).x;
      uVar12._4_4_ = (pVVar7->zeroVector).y;
      fVar17 = (pVVar7->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_23.m_Origin.z = fVar17;
      pQVar22 = TypeInfo__UnityEngine__Quaternion->static_fields;
      auStack_15._0_4_ = (pQVar22->identityQuaternion).x;
      auStack_15._4_4_ = (pQVar22->identityQuaternion).y;
      auStack_15._8_4_ = (pQVar22->identityQuaternion).z;
      auStack_15._12_4_ = (pQVar22->identityQuaternion).w;
      RStack_23.m_Origin._0_8_ = uVar12;
      pLVar26 = PrismMath_CalcTriangPrismCornerPoints
                          (&RStack_23.m_Origin,fVar2,fVar3,fVar4,fVar5,height,
                           (Quaternion *)auStack_15,(MethodInfo *)0x0);
      if (pLVar26 != (List_1_UnityEngine_Vector3_ *)0x0) {
        if ((pLVar26->fields)._size == 0) goto code_?;
        pVVar27 = (pLVar26->fields)._items;
        if (pVVar27 != (Vector3__Array *)0x0) {
          if ((int)pVVar27->max_length != 0) {
            uVar28._0_4_ = pVVar27->vector[0].x;
            uVar28._4_4_ = pVVar27->vector[0].y;
            fVar5 = pVVar27->vector[0].z;
            if ((uint)(pLVar26->fields)._size < 2) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              bVar13 = (*pcVar11)();
              return bVar13;
            }
            if (1 < (uint)pVVar27->max_length) {
              fVar4 = pVVar27->vector[1].z;
              uVar29._0_4_ = pVVar27->vector[1].x;
              uVar29._4_4_ = pVVar27->vector[1].y;
              afStack_24[0] = fVar4;
              if ((uint)(pLVar26->fields)._size < 3) goto code_?;
              if (2 < (uint)pVVar27->max_length) {
                uVar30._0_4_ = pVVar27->vector[2].x;
                uVar30._4_4_ = pVVar27->vector[2].y;
                fVar3 = pVVar27->vector[2].z;
                if ((uint)(pLVar26->fields)._size < 4) goto code_?;
                if (3 < (uint)pVVar27->max_length) {
                  uVar31._0_4_ = pVVar27->vector[3].x;
                  uVar31._4_4_ = pVVar27->vector[3].y;
                  fVar2 = pVVar27->vector[3].z;
                  if ((uint)(pLVar26->fields)._size < 6) goto code_?;
                  if (5 < (uint)pVVar27->max_length) {
                    uVar32._0_4_ = pVVar27->vector[5].x;
                    uVar32._4_4_ = pVVar27->vector[5].y;
                    fStack_18 = pVVar27->vector[5].z;
                    pVVar27 = (pLVar26->fields)._items;
                    uVar33._0_4_ = pVVar27->vector[4].x;
                    uVar33._4_4_ = pVVar27->vector[4].y;
                    fVar17 = pVVar27->vector[4].z;
                    lVar34 = FUN_?(TypeInfo__System__Collections__Generic__List<float>);
                    FUN_?(lVar34,5,
                                  MethodInfo__System__Collections__Generic__List<float>__List_int_);
                    QStack_8.x = 0.0;
                    QStack_8.y = 0.0;
                    fVar19 = 0.0;
                    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
                      FUN_?();
                      fVar19 = QStack_8.x;
                    }
                    uVar12 = QStack_8._0_8_;
                    auStack_15._0_4_ = (ray->m_Origin).x;
                    auStack_15._4_4_ = (ray->m_Origin).y;
                    auStack_15._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                    RStack_23.m_Origin.z = fVar19;
                    auStack_15._16_4_ = (ray->m_Direction).y;
                    auStack_15._20_4_ = (ray->m_Direction).z;
                    RStack_23.m_Origin.x = QStack_8.x;
                    RStack_23.m_Origin.y = QStack_8.y;
                    RStack_9.m_Origin.z = fVar5;
                    RStack_9.m_Origin._0_8_ = uVar28;
                    QStack_6._0_8_ = uVar29;
                    QStack_6.z = fVar4;
                    VStack_25._0_8_ = uVar30;
                    VStack_25.z = fVar3;
                    bVar13 = TriangleMath::TriangleMath_Raycast
                                       ((Ray *)auStack_15,afStackX_20,&RStack_9.m_Origin,
                                        (Vector3 *)&QStack_6,&VStack_25,
                                        (TriangleEpsilon *)&RStack_23,(MethodInfo *)0x0);
                    if (bVar13 != 0) {
                      if (lVar34 == 0) goto code_?;
                      FUN_?(lVar34,afStackX_20[0],
                                    MethodInfo__System__Collections__Generic__List<float>__Add_float_
                                   );
                    }
                    if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    uVar35 = QStack_8._0_8_;
                    auStack_15._0_4_ = (ray->m_Origin).x;
                    auStack_15._4_4_ = (ray->m_Origin).y;
                    auStack_15._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                    auStack_15._16_4_ = (ray->m_Direction).y;
                    auStack_15._20_4_ = (ray->m_Direction).z;
                    RStack_9.m_Origin.z = QStack_8.x;
                    RStack_23.m_Origin.z = fStack_18;
                    QStack_8.x = (float)uVar12;
                    QStack_8.y = SUB84(uVar12,4);
                    RStack_9.m_Origin.x = QStack_8.x;
                    RStack_9.m_Origin.y = QStack_8.y;
                    QStack_8._0_8_ = uVar35;
                    QStack_6._0_8_ = uVar31;
                    QStack_6.z = fVar2;
                    RStack_23.m_Origin._0_8_ = uVar32;
                    VStack_25._0_8_ = uVar33;
                    VStack_25.z = fVar17;
                    bVar13 = TriangleMath::TriangleMath_Raycast
                                       ((Ray *)auStack_15,afStackX_20,(Vector3 *)&QStack_6,
                                        &VStack_25,&RStack_23.m_Origin,
                                        (TriangleEpsilon *)&RStack_9,(MethodInfo *)0x0);
                    if (bVar13 != 0) {
                      if (lVar34 == 0) goto code_?;
                      FUN_?(lVar34,afStackX_20[0],
                                    MethodInfo__System__Collections__Generic__List<float>__Add_float_
                                   );
                    }
                    pLVar26 = (List_1_UnityEngine_Vector3_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                           );
                    FUN_?(pLVar26,4,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                                 );
                    if (pLVar26 != (List_1_UnityEngine_Vector3_ *)0x0) {
                      RStack_9.m_Origin._0_8_ = uVar28;
                      RStack_9.m_Origin.z = fVar5;
                      FUN_?(pLVar26,&RStack_9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                      RStack_9.m_Origin._0_8_ = uVar31;
                      RStack_9.m_Origin.z = fVar2;
                      FUN_?(pLVar26,&RStack_9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                      RStack_9.m_Origin.z = fStack_18;
                      RStack_9.m_Origin._0_8_ = uVar32;
                      FUN_?(pLVar26,&RStack_9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                      fVar5 = afStack_24[0];
                      RStack_9.m_Origin.z = afStack_24[0];
                      RStack_9.m_Origin._0_8_ = uVar29;
                      FUN_?(pLVar26,&RStack_9,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                   );
                      if ((uint)(pLVar26->fields)._size < 2) goto code_?;
                      pVVar27 = (pLVar26->fields)._items;
                      if (pVVar27 != (Vector3__Array *)0x0) {
                        if ((uint)pVVar27->max_length < 2) goto code_?;
                        uVar36 = pVVar27->vector[1].x;
                        uVar37 = pVVar27->vector[1].y;
                        RStack_9.m_Origin.x = pVVar27->vector[0].x;
                        RStack_9.m_Origin.y = pVVar27->vector[0].y;
                        fVar4 = pVVar27->vector[1].z - pVVar27->vector[0].z;
                        if ((uint)(pLVar26->fields)._size < 4) goto code_?;
                        if (pVVar27 != (Vector3__Array *)0x0) {
                          if ((uint)pVVar27->max_length < 4) goto code_?;
                          uVar38 = pVVar27->vector[3].x;
                          uVar39 = pVVar27->vector[3].y;
                          fVar19 = pVVar27->vector[3].z - pVVar27->vector[0].z;
                          fVar21 = fVar19 * ((float)uVar37 - RStack_9.m_Origin.y) -
                                   ((float)uVar39 - RStack_9.m_Origin.y) * fVar4;
                          fVar40 = ((float)uVar38 - RStack_9.m_Origin.x) * fVar4 -
                                   fVar19 * ((float)uVar36 - RStack_9.m_Origin.x);
                          fVar4 = ((float)uVar39 - RStack_9.m_Origin.y) *
                                   ((float)uVar36 - RStack_9.m_Origin.x) -
                                   ((float)uVar38 - RStack_9.m_Origin.x) *
                                   ((float)uVar37 - RStack_9.m_Origin.y);
                          RStack_9.m_Origin.z = fVar4;
                          RStack_9.m_Origin.y = fVar40;
                          RStack_9.m_Origin.x = fVar21;
                          fVar20 = (float)FUN_?(&RStack_9);
                          fVar19 = _UNK_?;
                          if (_UNK_? < fVar20) {
                            fVar4 = fVar4 / fVar20;
                            QStack_8.y = fVar40 / fVar20;
                            QStack_8.x = fVar21 / fVar20;
                          }
                          else {
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
                            QStack_8.x = (pVVar7->zeroVector).x;
                            QStack_8.y = (pVVar7->zeroVector).y;
                            fVar4 = (pVVar7->zeroVector).z;
                          }
                          RStack_23.m_Direction.y = (ray->m_Direction).y;
                          RStack_23.m_Direction.z = (ray->m_Direction).z;
                          RStack_9.m_Origin.z = fVar4;
                          RStack_9.m_Origin.x = QStack_8.x;
                          RStack_9.m_Origin.y = QStack_8.y;
                          RStack_23.m_Origin.x = (ray->m_Origin).x;
                          RStack_23.m_Origin.y = (ray->m_Origin).y;
                          RStack_23._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                          auStack_15._0_4_ = 0.0;
                          auStack_15._4_4_ = 0.0;
                          auStack_15._8_4_ = 0.0;
                          auStack_15._12_4_ = 0.0;
                          bVar13 = PolygonMath::PolygonMath_Raycast
                                             (&RStack_23,afStackX_20,pLVar26,0,&RStack_9.m_Origin
                                              ,(PolygonEpsilon *)auStack_15,(MethodInfo *)0x0);
                          if (bVar13 != 0) {
                            if (lVar34 == 0) goto code_?;
                            FUN_?(lVar34,afStackX_20[0],
                                          MethodInfo__System__Collections__Generic__List<float>__Add_float_
                                         );
                          }
                          if ((uint)(pLVar26->fields)._size < 2) goto code_?;
                          pVVar27 = (pLVar26->fields)._items;
                          if (pVVar27 != (Vector3__Array *)0x0) {
                            if ((uint)pVVar27->max_length < 2) goto code_?;
                            pVVar27->vector[1].x = (float)uVar30;
                            pVVar27->vector[1].y = uVar30._4_4_;
                            pVVar27->vector[1].z = fVar3;
                            piVar41 = &(pLVar26->fields)._version;
                            *piVar41 = *piVar41 + 1;
                            if ((uint)(pLVar26->fields)._size < 3) goto code_?;
                            pVVar27 = (pLVar26->fields)._items;
                            if (pVVar27 != (Vector3__Array *)0x0) {
                              if ((uint)pVVar27->max_length < 3) goto code_?;
                              pVVar27->vector[2].x = (float)uVar33;
                              pVVar27->vector[2].y = uVar33._4_4_;
                              pVVar27->vector[2].z = fVar17;
                              piVar41 = &(pLVar26->fields)._version;
                              *piVar41 = *piVar41 + 1;
                              if ((uint)(pLVar26->fields)._size < 4) goto code_?;
                              pVVar27 = (pLVar26->fields)._items;
                              if (pVVar27 != (Vector3__Array *)0x0) {
                                if ((uint)pVVar27->max_length < 4) goto code_?;
                                pVVar27->vector[3].x = (float)uVar31;
                                pVVar27->vector[3].y = uVar31._4_4_;
                                pVVar27->vector[3].z = fVar2;
                                piVar41 = &(pLVar26->fields)._version;
                                *piVar41 = *piVar41 + 1;
                                if ((uint)(pLVar26->fields)._size < 2) goto code_?;
                                pVVar27 = (pLVar26->fields)._items;
                                if (pVVar27 != (Vector3__Array *)0x0) {
                                  if ((uint)pVVar27->max_length < 2) goto code_?;
                                  uVar42 = pVVar27->vector[1].x;
                                  uVar43 = pVVar27->vector[1].y;
                                  RStack_9.m_Origin.x = pVVar27->vector[0].x;
                                  RStack_9.m_Origin.y = pVVar27->vector[0].y;
                                  fVar4 = pVVar27->vector[1].z - pVVar27->vector[0].z;
                                  if ((uint)(pLVar26->fields)._size < 4) goto code_?;
                                  if (pVVar27 != (Vector3__Array *)0x0) {
                                    if ((uint)pVVar27->max_length < 4) goto code_?;
                                    uVar44 = pVVar27->vector[3].x;
                                    uVar45 = pVVar27->vector[3].y;
                                    fVar2 = pVVar27->vector[3].z - pVVar27->vector[0].z;
                                    fVar17 = fVar2 * ((float)uVar43 - RStack_9.m_Origin.y) -
                                             ((float)uVar45 - RStack_9.m_Origin.y) * fVar4;
                                    fVar20 = ((float)uVar44 - RStack_9.m_Origin.x) * fVar4 -
                                             fVar2 * ((float)uVar42 - RStack_9.m_Origin.x);
                                    fVar4 = ((float)uVar45 - RStack_9.m_Origin.y) *
                                             ((float)uVar42 - RStack_9.m_Origin.x) -
                                             ((float)uVar44 - RStack_9.m_Origin.x) *
                                             ((float)uVar43 - RStack_9.m_Origin.y);
                                    RStack_9.m_Origin.z = fVar4;
                                    RStack_9.m_Origin.y = fVar20;
                                    RStack_9.m_Origin.x = fVar17;
                                    fVar2 = (float)FUN_?(&RStack_9);
                                    if (fVar19 < fVar2) {
                                      fVar4 = fVar4 / fVar2;
                                      QStack_8.y = fVar20 / fVar2;
                                      QStack_8.x = fVar17 / fVar2;
                                    }
                                    else {
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      QStack_8.x = (pVVar7->zeroVector).x;
                                      QStack_8.y = (pVVar7->zeroVector).y;
                                      fVar4 = (pVVar7->zeroVector).z;
                                    }
                                    RStack_23.m_Direction.y = (ray->m_Direction).y;
                                    RStack_23.m_Direction.z = (ray->m_Direction).z;
                                    RStack_9.m_Origin.z = fVar4;
                                    RStack_9.m_Origin.x = QStack_8.x;
                                    RStack_9.m_Origin.y = QStack_8.y;
                                    RStack_23.m_Origin.x = (ray->m_Origin).x;
                                    RStack_23.m_Origin.y = (ray->m_Origin).y;
                                    RStack_23._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                                    auStack_15._0_4_ = 0.0;
                                    auStack_15._4_4_ = 0.0;
                                    auStack_15._8_4_ = 0.0;
                                    auStack_15._12_4_ = 0.0;
                                    bVar13 = PolygonMath::PolygonMath_Raycast
                                                       (&RStack_23,afStackX_20,pLVar26,0,
                                                        &RStack_9.m_Origin,
                                                        (PolygonEpsilon *)auStack_15,
                                                        (MethodInfo *)0x0);
                                    if (bVar13 != 0) {
                                      if (lVar34 == 0) goto code_?;
                                      FUN_?(lVar34,afStackX_20[0],
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List<float>__Add_float_
                                                  );
                                    }
                                    if ((pLVar26->fields)._size == 0) goto code_?;
                                    pVVar27 = (pLVar26->fields)._items;
                                    if (pVVar27 != (Vector3__Array *)0x0) {
                                      if ((int)pVVar27->max_length == 0) goto code_?;
                                      pVVar27->vector[0].x = (float)uVar29;
                                      pVVar27->vector[0].y = uVar29._4_4_;
                                      pVVar27->vector[0].z = fVar5;
                                      piVar41 = &(pLVar26->fields)._version;
                                      *piVar41 = *piVar41 + 1;
                                      if ((uint)(pLVar26->fields)._size < 2)
                                      goto code_?;
                                      pVVar27 = (pLVar26->fields)._items;
                                      if (pVVar27 != (Vector3__Array *)0x0) {
                                        if ((uint)pVVar27->max_length < 2)
                                        goto code_?;
                                        pVVar27->vector[1].x = (float)uVar32;
                                        pVVar27->vector[1].y = uVar32._4_4_;
                                        pVVar27->vector[1].z = fStack_18;
                                        piVar41 = &(pLVar26->fields)._version;
                                        *piVar41 = *piVar41 + 1;
                                        if ((uint)(pLVar26->fields)._size < 4)
                                        goto code_?;
                                        pVVar27 = (pLVar26->fields)._items;
                                        if (pVVar27 != (Vector3__Array *)0x0) {
                                          if ((uint)pVVar27->max_length < 4)
                                          goto code_?;
                                          pVVar27->vector[3].x = (float)uVar30;
                                          pVVar27->vector[3].y = uVar30._4_4_;
                                          pVVar27->vector[3].z = fVar3;
                                          piVar41 = &(pLVar26->fields)._version;
                                          *piVar41 = *piVar41 + 1;
                                          if ((uint)(pLVar26->fields)._size < 2)
                                          goto code_?;
                                          pVVar27 = (pLVar26->fields)._items;
                                          if (pVVar27 != (Vector3__Array *)0x0) {
                                            if ((uint)pVVar27->max_length < 2)
                                            goto code_?;
                                            uVar46 = pVVar27->vector[1].x;
                                            uVar47 = pVVar27->vector[1].y;
                                            RStack_9.m_Origin.x = pVVar27->vector[0].x;
                                            RStack_9.m_Origin.y = pVVar27->vector[0].y;
                                            fVar5 = pVVar27->vector[1].z - pVVar27->vector[0].z;
                                            if ((uint)(pLVar26->fields)._size < 4)
                                            goto code_?;
                                            if (pVVar27 != (Vector3__Array *)0x0) {
                                              if ((uint)pVVar27->max_length < 4)
                                              goto code_?;
                                              uVar48 = pVVar27->vector[3].x;
                                              uVar49 = pVVar27->vector[3].y;
                                              fVar3 = pVVar27->vector[3].z - pVVar27->vector[0].z;
                                              fVar2 = ((float)uVar47 - RStack_9.m_Origin.y) *
                                                       fVar3 - fVar5 * ((float)uVar49 -
                                                                         RStack_9.m_Origin.y);
                                              fVar4 = ((float)uVar46 - RStack_9.m_Origin.x) *
                                                       ((float)uVar49 - RStack_9.m_Origin.y) -
                                                       ((float)uVar47 - RStack_9.m_Origin.y) *
                                                       ((float)uVar48 - RStack_9.m_Origin.x);
                                              fVar3 = fVar5 * ((float)uVar48 -
                                                                RStack_9.m_Origin.x) -
                                                       ((float)uVar46 - RStack_9.m_Origin.x) *
                                                       fVar3;
                                              RStack_9.m_Origin.z = fVar4;
                                              RStack_9.m_Origin.y = fVar3;
                                              RStack_9.m_Origin.x = fVar2;
                                              fVar5 = (float)FUN_?(&RStack_9);
                                              if (fVar19 < fVar5) {
                                                fVar4 = fVar4 / fVar5;
                                                QStack_8.y = fVar3 / fVar5;
                                                QStack_8.x = fVar2 / fVar5;
                                              }
                                              else {
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pVVar7 = TypeInfo__UnityEngine__Vector3->
                                                          static_fields;
                                                QStack_8.x = (pVVar7->zeroVector).x;
                                                QStack_8.y = (pVVar7->zeroVector).y;
                                                fVar4 = (pVVar7->zeroVector).z;
                                              }
                                              RStack_23.m_Direction.y = (ray->m_Direction).y;
                                              RStack_23.m_Direction.z = (ray->m_Direction).z;
                                              RStack_9.m_Origin.z = fVar4;
                                              RStack_9.m_Origin.x = QStack_8.x;
                                              RStack_9.m_Origin.y = QStack_8.y;
                                              RStack_23.m_Origin.x = (ray->m_Origin).x;
                                              RStack_23.m_Origin.y = (ray->m_Origin).y;
                                              RStack_23._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
                                              auStack_15._0_4_ = 0.0;
                                              auStack_15._4_4_ = 0.0;
                                              auStack_15._8_4_ = 0.0;
                                              auStack_15._12_4_ = 0.0;
                                              bVar13 = PolygonMath::PolygonMath_Raycast
                                                                 (&RStack_23,afStackX_20,pLVar26,0,
                                                                  &RStack_9.m_Origin,
                                                                  (PolygonEpsilon *)auStack_15,
                                                                  (MethodInfo *)0x0);
                                              if (lVar34 != 0) {
                                                if (bVar13 != 0) {
                                                  FUN_?(lVar34,afStackX_20[0],
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__List<float>__Add_float_
                                                  );
                                                }
                                                if (*(int *)(lVar34 + 0x18) == 0) {
                                                  return 0;
                                                }
                                                if (*(int *)&(TypeInfo__RTG__PrismMath____c->_1).
                                                             field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                pCVar50 = TypeInfo__RTG__PrismMath____c->
                                                          static_fields->__9__1_0;
                                                if (pCVar50 == (Comparison_1_Single_ *)0x0) {
                                                  if (*(int *)&(TypeInfo__RTG__PrismMath____c->_1).
                                                               field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  pPVar51 = TypeInfo__RTG__PrismMath____c->
                                                            static_fields->__9;
                                                  pCVar50 = (Comparison_1_Single_ *)
                                                            FUN_?(
                                                  TypeInfo__System__Comparison<float>);
                                                  FUN_?(pCVar50,pPVar51,
                                                                                                                                
                                                  MethodInfo__RTG__PrismMath____c___RaycastTriangular_b__1_0_float__float_
                                                  );
                                                  TypeInfo__RTG__PrismMath____c->static_fields->
                                                  __9__1_0 = pCVar50;
                                                  func_?(&TypeInfo__RTG__PrismMath____c
                                                                       ->static_fields->__9__1_0);
                                                }
                                                FUN_?(lVar34,pCVar50);
                                                fVar5 = (float)FUN_?(lVar34,0);
                                                *t = fVar5;
                                                return 1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          bVar13 = (*pcVar11)();
          return bVar13;
        }
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar13 = (*pcVar11)();
      return bVar13;
    }
  }
  return 0;
}

