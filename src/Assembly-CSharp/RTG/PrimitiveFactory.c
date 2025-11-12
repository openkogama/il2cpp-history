
/* List`1[UnityEngine.Vector2] Generate2DArcBorderPoints(Vector2, Vector2, Single, Boolean, Int32) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DArcBorderPoints(Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,bool forceShortestArc,int32_t numPoints,MethodInfo *method)

{
  VStack_1 = arcOrigin;
  VStack_2 = arcStartPoint;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
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
  if (numPoints < 2) {
    pLVar3 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    return pLVar3;
  }
  pLVar3 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar3,numPoints,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  fVar4 = (float)FUN_?();
  fVar5 = VStack_2.x - VStack_1.x;
  fVar6 = VStack_2.y - VStack_1.y;
  aVStack_7[0].y = fVar6;
  aVStack_7[0].x = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_9._0_4_ = (pVVar8->forwardVector).x;
  uStack_9._4_4_ = (pVVar8->forwardVector).y;
  fStack_10 = (pVVar8->forwardVector).z;
  uStack_11 = 0;
  uStack_12 = 0;
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar13)();
    return pLVar3;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)();
  fVar15 = (float)FUN_?(aVStack_7);
  fVar16 = (float)FUN_?(aVStack_7);
  if (1e-05 < fVar16) {
    fVar6 = fVar6 / fVar16;
    fVar5 = fVar5 / fVar16;
    uStack_9 = (ulonglong)(uint)fVar6;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    aVStack_7[0] = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
    uStack_9 = CONCAT44(fVar6,fVar6);
    fVar5 = aVStack_7[0].x;
  }
  if (forceShortestArc != 0) {
    ArcMath::ArcMath_ConvertToSh2DArcAngle(arcOrigin,arcStartPoint,fVar4,(MethodInfo *)0x0);
  }
  iVar17 = 0;
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_18._0_4_ = (pVVar8->forwardVector).x;
    uStack_18._4_4_ = (pVVar8->forwardVector).y;
    fStack_19 = (pVVar8->forwardVector).z;
    uStack_11 = 0;
    uStack_12 = 0;
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar13)();
      return pLVar3;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)();
    fVar4 = (uStack_11._4_4_ + uStack_11._4_4_) * (float)uStack_11;
    fVar16 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_12;
    fVar20 = ((float)uStack_12 + (float)uStack_12) * uStack_11._4_4_;
    fVar21 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_11;
    fVar22 = ((float)uStack_11 + (float)uStack_11) * (float)uStack_11;
    fVar23 = ((float)uStack_12 + (float)uStack_12) * uStack_12._4_4_;
    fVar24 = (uStack_11._4_4_ + uStack_11._4_4_) * uStack_11._4_4_;
    fVar25 = ((float)uStack_11 + (float)uStack_11) * uStack_12._4_4_;
    fVar26 = (uStack_11._4_4_ + uStack_11._4_4_) * uStack_12._4_4_;
    fVar27 = (1.0 - (fVar16 + fVar24)) * fVar5 + (fVar4 - fVar23) * fVar6 + (fVar26 + fVar21) * 0.0;
    fVar4 = (1.0 - (fVar16 + fVar22)) * (float)uStack_9 + (fVar23 + fVar4) * fVar5 + (fVar20 - fVar25) * 0.0;
    fStack_28 = (fVar21 - fVar26) * fVar5 + (fVar25 + fVar20) * (float)uStack_9 + (1.0 - (fVar24 + fVar22)) * 0.0;
    uStack_29 = CONCAT44(fVar4,fVar27);
    fVar6 = (float)FUN_?(&uStack_29);
    if (1e-05 < fVar6) {
      aVStack_7[0].y = fVar4 / fVar6;
      aVStack_7[0].x = fVar27 / fVar6;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_7[0].x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
      aVStack_7[0].y = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    }
    pMVar30 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
    item.x = aVStack_7[0].x * fVar15 + VStack_1.x;
    fVar6 = aVStack_7[0].y * fVar15 + VStack_1.y;
    if (pLVar3 == (List_1_UnityEngine_Vector2_ *)0x0) break;
    piVar31 = &(pLVar3->fields)._version;
    *piVar31 = *piVar31 + 1;
    pVVar32 = (pLVar3->fields)._items;
    if (pVVar32 == (Vector2__Array *)0x0) break;
    uVar33 = (pLVar3->fields)._size;
    if (uVar33 < (uint)pVVar32->max_length) {
      (pLVar3->fields)._size = uVar33 + 1;
      if ((uint)pVVar32->max_length <= uVar33) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar13)();
        return pLVar3;
      }
      pVVar32->vector[(int)uVar33].x = item.x;
      pVVar32->vector[(int)uVar33].y = fVar6;
    }
    else {
      item.y = fVar6;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar3,item,pMVar30->klass->rgctx_data[0xe].method);
    }
    iVar17 = iVar17 + 1;
    if (numPoints <= iVar17) {
      return pLVar3;
    }
    fVar6 = (float)uStack_9;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar13)();
  return pLVar3;
}


/* List`1[UnityEngine.Vector2] Generate2DCircleBorderPointsCW(Vector2, Single, Int32) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW(Vector2 circleCenter,float circleRadius,int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (numPoints < 5) {
    numPoints = 4;
  }
  pLVar1 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar1,numPoints,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
  iVar2 = 0;
  if (0 < numPoints) {
    fStack_3 = circleCenter.y;
    fStack_4 = circleCenter.x;
    do {
      fVar5 = (float)FUN_?();
      fVar6 = fVar5 * circleRadius + fStack_4;
      fVar5 = (float)FUN_?();
      pMVar7 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
      fVar5 = fVar5 * circleRadius + fStack_3;
      if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar8)();
        return pLVar1;
      }
      piVar9 = &(pLVar1->fields)._version;
      *piVar9 = *piVar9 + 1;
      pVVar10 = (pLVar1->fields)._items;
      if (pVVar10 == (Vector2__Array *)0x0) goto code_?;
      uVar11 = (pLVar1->fields)._size;
      if (uVar11 < (uint)pVVar10->max_length) {
        (pLVar1->fields)._size = uVar11 + 1;
        if ((uint)pVVar10->max_length <= uVar11) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar8)();
          return pLVar1;
        }
        pVVar10->vector[(int)uVar11].x = fVar6;
        pVVar10->vector[(int)uVar11].y = fVar5;
      }
      else {
        item.y = fVar5;
        item.x = fVar6;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar1,item,pMVar7->klass->rgctx_data[0xe].method);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < numPoints);
  }
  return pLVar1;
}


/* List`1[UnityEngine.Vector2] Generate2DPolyBorderPointsCW(List`1[UnityEngine.Vector2], PrimitiveFactory+PolyBorderDirection, Single, Boolean) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderPointsCW(List_1_UnityEngine_Vector2_ *cwPolyPoints,PrimitiveFactory_PolyBorderDirection__Enum borderDirection,float borderThickness,bool isClosed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cwPolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
  iVar1 = (cwPolyPoints->fields)._size;
  if (isClosed == 0) {
    bVar2 = SBORROW4(iVar1 + -1,2);
    iVar3 = iVar1 + -3;
  }
  else {
    bVar2 = SBORROW4(iVar1 + -1,3);
    iVar3 = iVar1 + -4;
  }
  if (bVar2 == iVar3 < 0) {
    if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Inward) {
      fVar4 = -1.0;
    }
    else {
      fVar4 = 1.0;
    }
    iVar5 = (cwPolyPoints->fields)._size;
    fVar4 = fVar4 * borderThickness;
    uStackX_8 = CONCAT44(uStackX_8._4_4_,fVar4);
    pLVar6 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar6,iVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    iVar3 = (cwPolyPoints->fields)._size;
    if (isClosed == 0) {
      if (iVar3 == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pLVar6 = (List_1_UnityEngine_Vector2_ *)(*pcVar7)();
        return pLVar6;
      }
      pVVar8 = (cwPolyPoints->fields)._items;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((int)pVVar8->max_length == 0) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        pLVar6 = (List_1_UnityEngine_Vector2_ *)(*pcVar7)();
        return pLVar6;
      }
      fVar9 = pVVar8->vector[0].x;
      fVar10 = pVVar8->vector[0].y;
      if ((uint)(cwPolyPoints->fields)._size < 2) goto code_?;
      if ((uint)pVVar8->max_length < 2) goto code_?;
      uStack_11 = CONCAT44(pVVar8->vector[1].x - fVar9,-(pVVar8->vector[1].y - fVar10));
      FUN_?(&uStack_11);
      if (pLVar6 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        pLVar6 = (List_1_UnityEngine_Vector2_ *)(*pcVar7)();
        return pLVar6;
      }
      FUN_?(pLVar6,CONCAT44(extraout_var * fVar4 + fVar10,extraout_EAX * fVar4 + fVar9),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
      uVar12 = 0;
      if (0 < iVar1 + -2) {
        uStack_13 = 0x7fffffff7fffffff;
        uStack_14 = 0x7fffffff7fffffff;
        lVar15 = 0x20;
        do {
          if ((uint)(cwPolyPoints->fields)._size <= uVar12) goto code_?;
          pVVar8 = (cwPolyPoints->fields)._items;
          if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar8->max_length <= uVar12) goto code_?;
          fVar9 = *(float *)((longlong)pVVar8->vector + lVar15 + -0x1c);
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar8->vector + -4))->klass + lVar15);
          if ((uint)(cwPolyPoints->fields)._size <= uVar12 + 1) goto code_?;
          pVVar8 = (cwPolyPoints->fields)._items;
          if ((uint)pVVar8->max_length <= uVar12 + 1) goto code_?;
          fVar16 = *(float *)((longlong)(pVVar8->vector + -3) + lVar15);
          fVar17 = *(float *)((longlong)pVVar8->vector + lVar15 + -0x14);
          if ((uint)(pLVar6->fields)._size <= uVar12) goto code_?;
          pVVar18 = (pLVar6->fields)._items;
          if (pVVar18 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar18->max_length <= uVar12) goto code_?;
          fVar19 = *(float *)((longlong)&((Vector2__Array *)(pVVar18->vector + -4))->klass + lVar15);
          fVar20 = *(float *)((longlong)pVVar18->vector + lVar15 + -0x1c);
          if ((uint)(cwPolyPoints->fields)._size <= uVar12 + 2) goto code_?;
          if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar8->max_length <= uVar12 + 2) goto code_?;
          fVar21 = *(float *)((longlong)(pVVar8->vector + -2) + lVar15);
          fVar22 = *(float *)((longlong)pVVar8->vector + lVar15 + -0xc);
          uStack_23 = CONCAT44(fVar21 - fVar16,fVar22 - fVar17) ^ 0x80000000;
          uVar24 = FUN_?(&uStack_23);
          uStack_23._0_4_ = (float)uVar24;
          fVar25 = (float)uStack_23;
          fVar4 = (float)uStack_23 * fVar4;
          uStack_23._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
          fVar26 = uStack_23._4_4_;
          fVar27 = uStack_23._4_4_ * (float)uStackX_8;
          fVar17 = fVar17 - fVar9;
          fVar16 = fVar16 - fVar10;
          uStack_11 = CONCAT44(fVar17,fVar16);
          uStack_23 = uVar24;
          fVar9 = (float)FUN_?();
          if (1e-05 < fVar9) {
            fVar16 = fVar16 / fVar9;
            fVar17 = fVar17 / fVar9;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector2);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar16 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
            fVar17 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          }
          fVar9 = fVar26 * fVar17 + fVar25 * fVar16;
          if ((1e-05 <= (float)((uint)fVar9 & (uint)uStack_13)) && (fVar4 = ((fVar20 - (fVar27 + fVar22)) * fVar26 + (fVar19 - (fVar4 + fVar21)) * fVar25) / -fVar9, 0.0 <= fVar4)) {
            FUN_?(pLVar6,CONCAT44(fVar17 * fVar4 + fVar20,fVar16 * fVar4 + fVar19),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 8;
          fVar4 = (float)uStackX_8;
        } while ((int)uVar12 < iVar1 + -2);
      }
      iVar1 = (cwPolyPoints->fields)._size;
      if ((uint)(cwPolyPoints->fields)._size <= iVar1 - 2U) goto code_?;
      pVVar8 = (cwPolyPoints->fields)._items;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length <= iVar1 - 2U) goto code_?;
      iVar3 = (cwPolyPoints->fields)._size;
      if ((uint)(cwPolyPoints->fields)._size <= iVar3 - 1U) goto code_?;
      if ((uint)pVVar8->max_length <= iVar3 - 1U) goto code_?;
      fVar10 = pVVar8->vector[(longlong)iVar3 + -1].x;
      fVar9 = pVVar8->vector[(longlong)iVar3 + -1].y;
      uStackX_8 = CONCAT44(fVar10 - pVVar8->vector[(longlong)iVar1 + -2].x,fVar9 - pVVar8->vector[(longlong)iVar1 + -2].y) ^ 0x80000000;
      uVar24 = FUN_?(&uStackX_8);
      uStackX_8._0_4_ = (float)uVar24;
      uStackX_8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
      fVar10 = (float)uStackX_8 * fVar4 + fVar10;
      fVar9 = uStackX_8._4_4_ * fVar4 + fVar9;
      uStackX_8 = uVar24;
    }
    else {
      if (iVar3 == 0) goto code_?;
      pVVar8 = (cwPolyPoints->fields)._items;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((int)pVVar8->max_length == 0) goto code_?;
      fVar9 = pVVar8->vector[0].x;
      fVar10 = pVVar8->vector[0].y;
      VVar28 = pVVar8->vector[0];
      if ((uint)(cwPolyPoints->fields)._size < 2) goto code_?;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length < 2) goto code_?;
      uStack_11 = CONCAT44(pVVar8->vector[1].x - fVar9,-(pVVar8->vector[1].y - fVar10));
      FUN_?();
      iVar3 = (cwPolyPoints->fields)._size;
      if ((uint)(cwPolyPoints->fields)._size <= iVar3 - 2U) goto code_?;
      pVVar8 = (cwPolyPoints->fields)._items;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length <= iVar3 - 2U) goto code_?;
      fVar16 = pVVar8->vector[(longlong)iVar3 + -2].x;
      fVar17 = pVVar8->vector[(longlong)iVar3 + -2].y;
      iVar3 = (cwPolyPoints->fields)._size;
      if ((uint)(cwPolyPoints->fields)._size <= iVar3 - 1U) goto code_?;
      pVVar8 = (cwPolyPoints->fields)._items;
      if ((uint)pVVar8->max_length <= iVar3 - 1U) goto code_?;
      fVar19 = pVVar8->vector[(longlong)iVar3 + -1].x;
      fVar20 = pVVar8->vector[(longlong)iVar3 + -1].y;
      uStack_11 = CONCAT44(fVar19 - fVar16,-(fVar20 - fVar17));
      uStack_23 = FUN_?(&uStack_11);
      uStack_11 = CONCAT44(fVar20 - fVar17,fVar19 - fVar16);
      uVar24 = FUN_?(&uStack_11);
      fVar16 = (float)uStack_23 * fVar4 + fVar16;
      fVar17 = uStack_23._4_4_ * fVar4 + fVar17;
      uStack_11._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
      uStack_11._0_4_ = (float)uVar24;
      fVar19 = uStack_11._4_4_ * extraout_var_00 + (float)uStack_11 * extraout_EAX_00;
      uStack_11 = uVar24;
      if ((ABS(fVar19) < 1e-05) || (fVar9 = ((fVar17 - (extraout_var_00 * fVar4 + fVar10)) * extraout_var_00 + (fVar16 - (extraout_EAX_00 * fVar4 + fVar9)) * extraout_EAX_00) / -fVar19, fVar9 < 0.0)) {
        if (pLVar6 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      }
      else {
        fVar10 = (float)uStack_11 * fVar9;
        fVar9 = uStack_11._4_4_ * fVar9;
        if (pLVar6 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
        VVar28.y = fVar9 + fVar17;
        VVar28.x = fVar10 + fVar16;
      }
      FUN_?(pLVar6,VVar28,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
      uVar12 = 0;
      if (0 < iVar1 + -2) {
        lVar15 = 0x20;
        do {
          if ((uint)(cwPolyPoints->fields)._size <= uVar12) goto code_?;
          pVVar8 = (cwPolyPoints->fields)._items;
          if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar8->max_length <= uVar12) goto code_?;
          fVar9 = *(float *)((longlong)pVVar8->vector + lVar15 + -0x1c);
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar8->vector + -4))->klass + lVar15);
          if ((uint)(cwPolyPoints->fields)._size <= uVar12 + 1) goto code_?;
          pVVar8 = (cwPolyPoints->fields)._items;
          if ((uint)pVVar8->max_length <= uVar12 + 1) goto code_?;
          fVar16 = *(float *)((longlong)(pVVar8->vector + -3) + lVar15);
          fVar17 = *(float *)((longlong)pVVar8->vector + lVar15 + -0x14);
          if ((uint)(pLVar6->fields)._size <= uVar12) goto code_?;
          pVVar18 = (pLVar6->fields)._items;
          if (pVVar18 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar18->max_length <= uVar12) goto code_?;
          fVar19 = *(float *)((longlong)&((Vector2__Array *)(pVVar18->vector + -4))->klass + lVar15);
          fVar20 = *(float *)((longlong)pVVar18->vector + lVar15 + -0x1c);
          if ((uint)(cwPolyPoints->fields)._size <= uVar12 + 2) goto code_?;
          if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar8->max_length <= uVar12 + 2) goto code_?;
          fVar21 = *(float *)((longlong)(pVVar8->vector + -2) + lVar15);
          fVar22 = *(float *)((longlong)pVVar8->vector + lVar15 + -0xc);
          uStack_11 = CONCAT44(fVar21 - fVar16,-(fVar22 - fVar17));
          uVar24 = FUN_?(&uStack_11);
          uStack_11._0_4_ = (float)uVar24;
          fVar25 = (float)uStack_11;
          fVar4 = (float)uStack_11 * fVar4;
          uStack_11._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
          fVar26 = uStack_11._4_4_;
          fVar27 = uStack_11._4_4_ * (float)uStackX_8;
          fVar17 = fVar17 - fVar9;
          fVar16 = fVar16 - fVar10;
          uStack_23 = CONCAT44(fVar17,fVar16);
          uStack_11 = uVar24;
          fVar9 = (float)FUN_?();
          if (1e-05 < fVar9) {
            fVar16 = fVar16 / fVar9;
            fVar17 = fVar17 / fVar9;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector2);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar16 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
            fVar17 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          }
          fVar9 = fVar26 * fVar17 + fVar25 * fVar16;
          if ((1e-05 <= ABS(fVar9)) && (fVar4 = ((fVar20 - (fVar27 + fVar22)) * fVar26 + (fVar19 - (fVar4 + fVar21)) * fVar25) / -fVar9, 0.0 <= fVar4)) {
            FUN_?(pLVar6,CONCAT44(fVar17 * fVar4 + fVar20,fVar16 * fVar4 + fVar19),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 8;
          fVar4 = (float)uStackX_8;
        } while ((int)uVar12 < iVar1 + -2);
      }
      if ((pLVar6->fields)._size == 0) goto code_?;
      pVVar8 = (pLVar6->fields)._items;
      if (pVVar8 == (Vector2__Array *)0x0) goto code_?;
      if ((int)pVVar8->max_length == 0) goto code_?;
      fVar9 = pVVar8->vector[0].y;
      fVar10 = pVVar8->vector[0].x;
    }
    FUN_?(pLVar6,CONCAT44(fVar9,fVar10),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
  }
  else {
    pLVar6 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  }
  return pLVar6;
}


/* List`1[UnityEngine.Vector2] Generate2DPolyBorderQuadsCW(List`1[UnityEngine.Vector2], List`1[UnityEngine.Vector2], PrimitiveFactory+PolyBorderDirection, Boolean) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate2DPolyBorderQuadsCW(List_1_UnityEngine_Vector2_ *cwPolyPoints,List_1_UnityEngine_Vector2_ *cwBorderPts,PrimitiveFactory_PolyBorderDirection__Enum borderDirection,bool isClosed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cwPolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) || (cwBorderPts == (List_1_UnityEngine_Vector2_ *)0x0)) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar1)();
    return pLVar2;
  }
  if ((cwPolyPoints->fields)._size == (cwBorderPts->fields)._size) {
    iVar3 = (cwPolyPoints->fields)._size;
    iVar4 = iVar3 + -1;
    if (isClosed == 0) {
      bVar5 = SBORROW4(iVar4,2);
      iVar3 = iVar3 + -3;
    }
    else {
      bVar5 = SBORROW4(iVar4,3);
      iVar3 = iVar3 + -4;
    }
    if (bVar5 == iVar3 < 0) {
      pLVar2 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      FUN_?(pLVar2,iVar4 * 4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
      uVar6 = 0;
      if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Outward) {
        lVar7 = 0x28;
        while( true ) {
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((cwPolyPoints->fields)._size + -1 <= (int)uVar6) {
            return pLVar2;
          }
          if ((uint)(cwPolyPoints->fields)._size <= uVar6) break;
          pVVar9 = (cwPolyPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6) goto code_?;
          fVar10 = *(float *)((longlong)(pVVar9->vector + -5) + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x24);
          if (pLVar2 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item_03.y = fVar11;
            item_03.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_03,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwBorderPts->fields)._size <= uVar6) break;
          pVVar9 = (cwBorderPts->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6) goto code_?;
          fVar10 = *(float *)((longlong)(pVVar9->vector + -5) + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x24);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item_04.y = fVar11;
            item_04.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_04,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwBorderPts->fields)._size <= uVar6 + 1) break;
          pVVar9 = (cwBorderPts->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6 + 1) goto code_?;
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item_05.y = fVar11;
            item_05.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_05,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwPolyPoints->fields)._size <= uVar6 + 1) break;
          pVVar9 = (cwPolyPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6 + 1) goto code_?;
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            uVar6 = uVar6 + 1;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
            lVar7 = lVar7 + 8;
          }
          else {
            item_06.y = fVar11;
            item_06.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_06,pMVar8->klass->rgctx_data[0xe].method);
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          }
        }
      }
      else {
        lVar7 = 0x20;
        while( true ) {
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((cwPolyPoints->fields)._size + -1 <= (int)uVar6) {
            return pLVar2;
          }
          if ((uint)(cwPolyPoints->fields)._size <= uVar6) break;
          pVVar9 = (cwPolyPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar1)();
            return pLVar2;
          }
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c);
          if (pLVar2 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item.y = fVar11;
            item.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwPolyPoints->fields)._size <= uVar6 + 1) break;
          pVVar9 = (cwPolyPoints->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6 + 1) goto code_?;
          fVar10 = *(float *)((longlong)(pVVar9->vector + -3) + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x14);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item_00.y = fVar11;
            item_00.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_00,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwBorderPts->fields)._size <= uVar6 + 1) break;
          pVVar9 = (cwBorderPts->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6 + 1) goto code_?;
          fVar10 = *(float *)((longlong)(pVVar9->vector + -3) + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x14);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
          }
          else {
            item_01.y = fVar11;
            item_01.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_01,pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
          if ((uint)(cwBorderPts->fields)._size <= uVar6) break;
          pVVar9 = (cwBorderPts->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          if ((uint)pVVar9->max_length <= uVar6) goto code_?;
          fVar10 = *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7);
          fVar11 = *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c);
          piVar12 = &(pLVar2->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar9 = (pLVar2->fields)._items;
          if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
          uVar13 = (pLVar2->fields)._size;
          if (uVar13 < (uint)pVVar9->max_length) {
            (pLVar2->fields)._size = uVar13 + 1;
            if ((uint)pVVar9->max_length <= uVar13) goto code_?;
            uVar6 = uVar6 + 1;
            pVVar9->vector[(int)uVar13].x = fVar10;
            pVVar9->vector[(int)uVar13].y = fVar11;
            lVar7 = lVar7 + 8;
          }
          else {
            item_02.y = fVar11;
            item_02.x = fVar10;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::List_1_UnityEngine_Vector2__AddWithResize(pLVar2,item_02,pMVar8->klass->rgctx_data[0xe].method);
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          }
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      pLVar2 = (List_1_UnityEngine_Vector2_ *)(*pcVar1)();
      return pLVar2;
    }
  }
  pLVar2 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  return pLVar2;
}


/* List`1[UnityEngine.Vector3] Generate3DArcBorderPoints(Vector3, Vector3, Plane, Single, Boolean, Int32) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints(Vector3 *arcOrigin,Vector3 *arcStartPoint,Plane *arcPlane,float degreesFromStart,bool forceShortestArc,int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
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
  if (numPoints < 2) {
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  }
  else {
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,numPoints,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    fVar1 = (float)FUN_?();
    fVar2 = (arcPlane->m_Normal).x;
    fVar3 = (arcPlane->m_Normal).y;
    fVar4 = (arcPlane->m_Normal).z;
    uVar5 = arcOrigin->x;
    uVar6 = arcOrigin->y;
    fVar7 = (float)uVar6 * fVar3 + (float)uVar5 * fVar2 + arcOrigin->z * fVar4 + arcPlane->m_Distance;
    uVar8 = arcOrigin->x;
    uVar9 = arcOrigin->y;
    fVar10 = (float)uVar8 - fVar7 * fVar2;
    fVar11 = arcOrigin->z - fVar7 * fVar4;
    fVar12 = (float)uVar9 - fVar7 * fVar3;
    fVar2 = (arcPlane->m_Normal).x;
    fVar3 = (arcPlane->m_Normal).y;
    fVar4 = (arcPlane->m_Normal).z;
    uVar13 = arcStartPoint->x;
    uVar14 = arcStartPoint->y;
    fVar7 = (float)uVar14 * fVar3 + (float)uVar13 * fVar2 + arcStartPoint->z * fVar4 + arcPlane->m_Distance;
    PStack_15.Quadrant = (int32_t)arcStartPoint->x;
    PStack_15.FirstAxisSign = (int32_t)arcStartPoint->y;
    fVar2 = (float)PStack_15.Quadrant - fVar7 * fVar2;
    fStack_16 = arcStartPoint->z - fVar7 * fVar4;
    fVar17 = (float)PStack_15.FirstAxisSign - fVar7 * fVar3;
    fVar3 = fVar2 - fVar10;
    fVar4 = fVar17 - fVar12;
    fVar7 = fStack_16 - fVar11;
    uStack_18 = CONCAT44(fVar4,fVar3);
    VStack_19.x = (arcPlane->m_Normal).x;
    VStack_19.y = (arcPlane->m_Normal).y;
    VStack_19.z = (arcPlane->m_Normal).z;
    uStack_20 = 0;
    uStack_21 = 0;
    pcVar22 = pcRam_?;
    fStack_23 = fVar7;
    fStack_24 = fVar10;
    fStack_25 = fVar11;
    if ((pcRam_? == (code *)0x0) && (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
      uVar26 = func_?(&UNK_?);
      FUN_?(uVar26,0);
      pcVar22 = (code *)swi(3);
      pLVar27 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
      return pLVar27;
    }
    pcRam_? = pcVar22;
    (*pcRam_?)();
    fVar28 = (float)FUN_?(&uStack_18);
    VStack_19.y = fVar4;
    VStack_19.x = fVar3;
    VStack_19.z = fVar7;
    fVar29 = (float)FUN_?(&VStack_19);
    if (1e-05 < fVar29) {
      fStack_23 = fVar7 / fVar29;
      uStack_18 = CONCAT44(fVar4 / fVar29,fVar3 / fVar29);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar30->zeroVector).x;
      uStack_18._4_4_ = (pVVar30->zeroVector).y;
      fStack_23 = (pVVar30->zeroVector).z;
    }
    iVar31 = 0;
    if (forceShortestArc != 0) {
      VStack_19.x = (arcPlane->m_Normal).x;
      VStack_19.y = (arcPlane->m_Normal).y;
      VStack_19.z = (arcPlane->m_Normal).z;
      VStack_32.y = fVar17;
      VStack_32.x = fVar2;
      VStack_33.y = fVar12;
      VStack_33.x = fVar10;
      VStack_32.z = fStack_16;
      VStack_33.z = fVar11;
      ArcMath::ArcMath_ConvertToSh3DArcAngle(&VStack_33,&VStack_32,&VStack_19,fVar1,(MethodInfo *)0x0);
    }
    do {
      VStack_33.x = (arcPlane->m_Normal).x;
      VStack_33.y = (arcPlane->m_Normal).y;
      VStack_33.z = (arcPlane->m_Normal).z;
      uStack_20 = 0;
      uStack_21 = 0;
      pcVar22 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar22 = (code *)swi(3);
        pLVar27 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
        return pLVar27;
      }
      pcRam_? = pcVar22;
      (*pcRam_?)();
      fVar3 = ((float)uStack_21 + (float)uStack_21) * (float)uStack_21;
      fVar4 = ((float)uStack_21 + (float)uStack_21) * uStack_20._4_4_;
      fVar29 = ((float)uStack_21 + (float)uStack_21) * (float)uStack_20;
      fVar17 = ((float)uStack_20 + (float)uStack_20) * (float)uStack_20;
      fVar2 = (uStack_20._4_4_ + uStack_20._4_4_) * (float)uStack_20;
      fVar1 = ((float)uStack_21 + (float)uStack_21) * uStack_21._4_4_;
      fVar10 = (uStack_20._4_4_ + uStack_20._4_4_) * uStack_20._4_4_;
      fVar11 = ((float)uStack_20 + (float)uStack_20) * uStack_21._4_4_;
      fVar7 = (uStack_20._4_4_ + uStack_20._4_4_) * uStack_21._4_4_;
      fVar34 = (1.0 - (fVar3 + fVar10)) * (float)uStack_18 + (fVar2 - fVar1) * uStack_18._4_4_ + (fVar7 + fVar29) * fStack_23;
      fVar1 = (1.0 - (fVar3 + fVar17)) * uStack_18._4_4_ + (fVar1 + fVar2) * (float)uStack_18 + (fVar4 - fVar11) * fStack_23;
      fVar2 = (fVar29 - fVar7) * (float)uStack_18 + (fVar11 + fVar4) * uStack_18._4_4_ + (1.0 - (fVar10 + fVar17)) * fStack_23;
      VStack_32.y = fVar1;
      VStack_32.x = fVar34;
      VStack_32.z = fVar2;
      fVar3 = (float)FUN_?(&VStack_32);
      if (1e-05 < fVar3) {
        fVar2 = fVar2 / fVar3;
        VStack_19.y = fVar1 / fVar3;
        VStack_19.x = fVar34 / fVar3;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_19.x = (pVVar30->zeroVector).x;
        VStack_19.y = (pVVar30->zeroVector).y;
        fVar2 = (pVVar30->zeroVector).z;
      }
      pMVar35 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
      uVar26._0_4_ = VStack_19.x * fVar28 + fStack_24;
      fVar3 = VStack_19.y * fVar28 + fVar12;
      fVar2 = fVar2 * fVar28 + fStack_25;
      if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
        FUN_?();
        pcVar22 = (code *)swi(3);
        pLVar27 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
        return pLVar27;
      }
      piVar36 = &(this->fields)._version;
      *piVar36 = *piVar36 + 1;
      pPVar37 = (this->fields)._items;
      if (pPVar37 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar38 = (this->fields)._size;
      if (uVar38 < (uint)pPVar37->max_length) {
        (this->fields)._size = uVar38 + 1;
        if ((uint)pPVar37->max_length <= uVar38) {
          FUN_?();
          pcVar22 = (code *)swi(3);
          pLVar27 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
          return pLVar27;
        }
        pPVar37->vector[(int)uVar38].Quadrant = (int32_t)(float)uVar26;
        pPVar37->vector[(int)uVar38].FirstAxisSign = (int32_t)fVar3;
        pPVar37->vector[(int)uVar38].SecondAxisSign = (int32_t)fVar2;
      }
      else {
        uVar26._4_4_ = (int32_t)fVar3;
        PStack_15._0_8_ = uVar26;
        PStack_15.SecondAxisSign = (int32_t)fVar2;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_15,pMVar35->klass->rgctx_data[0xe].method);
      }
      iVar31 = iVar31 + 1;
    } while (iVar31 < numPoints);
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* List`1[UnityEngine.Vector3] Generate3DCircleBorderPoints(Vector3, Single, Vector3, Vector3, Int32) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints(Vector3 *circleCenter,float circleRadius,Vector3 *circleRight,Vector3 *circleUp,int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
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
  if (numPoints < 5) {
    numPoints = 4;
  }
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,numPoints,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  iVar1 = 0;
  if (0 < numPoints) {
    uVar2._0_4_ = (int32_t)circleRight->x;
    uVar2._4_4_ = (int32_t)circleRight->y;
    fVar3 = circleRight->z;
    uVar4._0_4_ = circleCenter->x;
    uVar4._4_4_ = circleCenter->y;
    fVar5 = circleCenter->z;
    uStack_6._0_4_ = circleUp->x;
    uStack_6._4_4_ = circleUp->y;
    fStack_7 = circleUp->z;
    PStack_8._0_8_ = uVar2;
    PStack_8.SecondAxisSign = (int32_t)fVar3;
    uStack_9 = uVar4;
    fStack_10 = fVar5;
    do {
      fVar11 = (float)FUN_?();
      fVar12 = (float)FUN_?();
      pMVar13 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
      fVar14 = fVar11 * (float)(int32_t)uVar2 * circleRadius + (float)uStack_9 + fVar12 * (float)uStack_6 * circleRadius;
      fVar15 = fVar11 * (float)uVar2._4_4_ * circleRadius + (float)uVar4._4_4_ + fVar12 * uStack_6._4_4_ * circleRadius;
      fVar11 = fVar11 * fVar3 * circleRadius + fVar5 + fVar12 * fStack_7 * circleRadius;
      if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        pLVar17 = (List_1_UnityEngine_Vector3_ *)(*pcVar16)();
        return pLVar17;
      }
      piVar18 = &(this->fields)._version;
      *piVar18 = *piVar18 + 1;
      pPVar19 = (this->fields)._items;
      if (pPVar19 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar20 = (this->fields)._size;
      if (uVar20 < (uint)pPVar19->max_length) {
        (this->fields)._size = uVar20 + 1;
        if ((uint)pPVar19->max_length <= uVar20) {
          FUN_?();
          pcVar16 = (code *)swi(3);
          pLVar17 = (List_1_UnityEngine_Vector3_ *)(*pcVar16)();
          return pLVar17;
        }
        pPVar19->vector[(int)uVar20].Quadrant = (int32_t)fVar14;
        pPVar19->vector[(int)uVar20].FirstAxisSign = (int32_t)fVar15;
        pPVar19->vector[(int)uVar20].SecondAxisSign = (int32_t)fVar11;
      }
      else {
        PStack_8.FirstAxisSign = (int32_t)fVar15;
        PStack_8.Quadrant = (int32_t)fVar14;
        PStack_8.SecondAxisSign = (int32_t)fVar11;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar13->klass->rgctx_data[0xe].method);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < numPoints);
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* List`1[UnityEngine.Vector3] GenerateSphereBorderPoints(Camera, Vector3, Single, Int32) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints(Camera *camera,Vector3 *sphereCenter,float sphereRadius,int32_t numPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (numPoints < 3) {
    pLVar1 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    return pLVar1;
  }
  if ((camera != (Camera *)0x0) && (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_3,this,(MethodInfo *)0x0);
    pIVar4 = *(InvokerMethod *)pVVar2;
    fVar5 = pVVar2->z;
    auStack_6 = (undefined1  [8])pIVar4;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = (Il2CppType **)0x0;
    _Stack_1d0._0_4_ = 0.0;
    pvVar8 = (this->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
      return pLVar1;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
      return pLVar1;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_7);
    VStack_11._0_8_ = pIVar4;
    VStack_11.z = fVar5;
    fVar12 = (float)FUN_?(&VStack_11);
    if (1e-05 < fVar12) {
      fStack_13 = (float)auStack_6._0_4_ / fVar12;
      fVar5 = fVar5 / fVar12;
      fStack_14 = (float)auStack_6._4_4_ / fVar12;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      _fStack_1b8 = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    }
    fVar15 = fStack_13 * (float)uStack_7;
    fVar16 = fStack_14 * uStack_7._4_4_;
    fVar17 = fVar5 * (float)_Stack_1d0._0_4_;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_3,this,(MethodInfo *)0x0);
    pIVar18 = *(Il2CppMethodPointer *)pVVar2;
    fVar12 = pVVar2->z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_3,this,(MethodInfo *)0x0);
    uVar19 = 0;
    method_00 = (MethodInfo *)auStack_6;
    VStack_11._0_8_ = *(undefined8 *)pVVar2;
    VStack_11.z = pVVar2->z;
    uStack_20 = *(Il2CppClass **)sphereCenter;
    fStack_21 = sphereCenter->z;
    auStack_6 = (undefined1  [8])pIVar18;
    fStack_22 = fVar12;
    pLVar1 = PrimitiveFactory_Generate3DCircleBorderPoints((Vector3 *)&uStack_20,sphereRadius,(Vector3 *)method_00,&VStack_11,numPoints,(MethodInfo *)0x0);
    lStack_23 = 0;
    uVar24 = uVar19;
    uStack_7 = (Il2CppType **)(longlong)numPoints;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      while( true ) {
        uVar25 = (uint)uVar19;
        if ((uint)(pLVar1->fields)._size <= uVar25) goto code_?;
        pVVar26 = (pLVar1->fields)._items;
        if (pVVar26 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar26->max_length <= uVar25) goto code_?;
        uStack_27 = *(undefined8 *)((longlong)&pVVar26->vector[0].x + uVar24);
        fVar12 = *(float *)((longlong)&pVVar26->vector[0].z + uVar24);
        _Stack_1c8 = *(_union_155 *)sphereCenter;
        fStackX_20 = *(float *)((longlong)&pVVar26->vector[0].z + uVar24) - sphereCenter->z;
        fVar28 = (float)uStack_27 - _Stack_1c8._0_4_;
        fVar29 = (float)((ulonglong)uStack_27 >> 0x20) - _Stack_1c8._4_4_;
        uStack_30 = CONCAT44(fVar29,fVar28);
        fStack_31 = fStackX_20;
        fVar32 = (float)FUN_?(&uStack_30);
        if (1e-05 < fVar32) {
          fVar28 = fVar28 / fVar32;
          fVar29 = fVar29 / fVar32;
          fStackX_20 = fStackX_20 / fVar32;
          VStack_11._0_8_ = CONCAT44(fVar29,fVar28);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_11._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
          fVar28 = (float)VStack_11._0_8_;
          fVar29 = (float)((ulonglong)VStack_11._0_8_ >> 0x20);
          fStackX_20 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
        }
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_20 = (Il2CppClass *)0x0;
        fStack_21 = 0.0;
        pvVar8 = (this->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
          return pLVar1;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
          return pLVar1;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        fVar33 = (float)uStack_27 - (float)uStack_20;
        fVar34 = uStack_27._4_4_ - uStack_20._4_4_;
        fVar12 = fVar12 - fStack_21;
        uStack_35 = CONCAT44(fVar34,fVar33);
        fStack_36 = fVar12;
        fVar32 = (float)FUN_?(&uStack_35);
        if (1e-05 < fVar32) {
          fVar12 = fVar12 / fVar32;
          auStack_6 = (undefined1  [8])CONCAT44(fVar34 / fVar32,fVar33 / fVar32);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_6 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
          fVar12 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
        }
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((camera->fields)._._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
          return pLVar1;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
          return pLVar1;
        }
        pcRam_? = pcVar9;
        cVar37 = (*pcRam_?)();
        if (cVar37 != '\0') {
          method_00 = (MethodInfo *)0x0;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_38,this,(MethodInfo *)0x0);
          auStack_6 = *(undefined1 (*) [8])pVVar2;
          fVar12 = pVVar2->z;
        }
        if (1e-05 < ABS((float)auStack_6._4_4_ * VStack_11.y + (float)auStack_6._0_4_ * VStack_11.x + fVar12 * fStackX_20)) {
          VStack_39.z = (float)auStack_6._0_4_ * VStack_11.y - (float)auStack_6._4_4_ * VStack_11.x;
          VStack_39.y = fVar12 * VStack_11.x - (float)auStack_6._0_4_ * fStackX_20;
          VStack_39.x = (float)auStack_6._4_4_ * fStackX_20 - fVar12 * VStack_11.y;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_40,&VStack_39,method_00);
          uStack_41._0_4_ = pVVar2->x;
          uStack_41._4_4_ = pVVar2->y;
          fStack_42 = pVVar2->z;
          _Stack_1c8.genericMethod = (Il2CppGenericMethod *)0x0;
          uStack_43._0_4_ = 0;
          uStack_43._4_2_ = 0;
          uStack_43._6_2_ = 0;
          func_?();
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
            return pLVar1;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)();
          auStack_44._0_8_ = CONCAT44(fVar29,fVar28);
          auStack_44._8_4_ = fStackX_20;
          method_00 = (MethodInfo *)auStack_44;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1(&VStack_45,(Quaternion *)&_Stack_1c8,(Vector3 *)auStack_44,(MethodInfo *)0x0);
          VStack_3.x = pVVar2->x;
          VStack_3.y = pVVar2->y;
          VStack_3.z = pVVar2->z;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(aVStack_46,&VStack_3,method_00);
          uVar47 = pVVar2->x;
          uVar48 = pVVar2->y;
          fVar12 = pVVar2->z;
          _Stack_1c8 = *(_union_155 *)sphereCenter;
          fVar32 = sphereCenter->z;
          if ((uint)(pLVar1->fields)._size <= uVar25) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
            return pLVar1;
          }
          pVVar26 = (pLVar1->fields)._items;
          if (pVVar26 == (Vector3__Array *)0x0) break;
          if ((uint)pVVar26->max_length <= uVar25) {
code_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
            return pLVar1;
          }
          *(ulonglong *)((longlong)&pVVar26->vector[0].x + uVar24) = CONCAT44((float)uVar48 * sphereRadius + _Stack_1c8._4_4_,(float)uVar47 * sphereRadius + _Stack_1c8._0_4_);
          *(float *)((longlong)&pVVar26->vector[0].z + uVar24) = fVar12 * sphereRadius + fVar32;
          piVar49 = &(pLVar1->fields)._version;
          *piVar49 = *piVar49 + 1;
          if ((uint)(pLVar1->fields)._size <= uVar25) goto code_?;
          pVVar26 = (pLVar1->fields)._items;
          if (pVVar26 == (Vector3__Array *)0x0) break;
          if ((uint)pVVar26->max_length <= uVar25) goto code_?;
          _Stack_1c8 = *(_union_155 *)((longlong)&pVVar26->vector[0].x + uVar24);
          if (fStack_14 * _Stack_1c8._4_4_ + fStack_13 * _Stack_1c8._0_4_ + fVar5 * *(float *)((longlong)&pVVar26->vector[0].z + uVar24) + -(fVar16 + fVar15 + fVar17) < 0.0) {
            pLVar1 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
            FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
            return pLVar1;
          }
        }
        uVar19 = (ulonglong)(uVar25 + 1);
        lStack_23 = lStack_23 + 1;
        uVar24 = uVar24 + 0xc;
        if ((longlong)uStack_7 <= lStack_23) {
          return pLVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar9)();
  return pLVar1;
}


/* Single PolyBorderDirToSign(PrimitiveFactory+PolyBorderDirection) */

float Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_PolyBorderDirToSign(PrimitiveFactory_PolyBorderDirection__Enum borderDirection,MethodInfo *method)

{
  if (borderDirection == PrimitiveFactory_PolyBorderDirection__Enum_Inward) {
    return -1.0;
  }
  return 1.0;
}


/* List`1[UnityEngine.Vector2] ProjectArcPointsOnPoly2DBorder(Vector2, List`1[UnityEngine.Vector2], List`1[UnityEngine.Vector2]) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::PrimitiveFactory::PrimitiveFactory_ProjectArcPointsOnPoly2DBorder(Vector2 arcOrigin,List_1_UnityEngine_Vector2_ *arcPoints,List_1_UnityEngine_Vector2_ *clockwisePolyPoints,MethodInfo *method)

{
  VStack_1 = arcOrigin;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Plane2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_10[0] = 0.0;
  if (arcPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if (1 < (arcPoints->fields)._size) {
      if (clockwisePolyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      if (2 < (clockwisePolyPoints->fields)._size) {
        iVar2 = (clockwisePolyPoints->fields)._size;
        iVar3 = (arcPoints->fields)._size;
        pLVar4 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
        FUN_?(pLVar4,iVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        ppLStack_11 = (List_1_UnityEngine_Vector2_ **)((ulonglong)(uint)(arcPoints->fields)._version << 0x20);
        uStack_12 = 0;
        lStack_13 = (longlong)ppLStack_11;
        uStack_14 = 0;
        uStack_6 = 0;
        ppLStack_11 = &pLStack_15;
        fVar16 = VStack_1.y;
        fVar17 = VStack_1.x;
        pLStack_18 = pLVar4;
        pLStack_15 = arcPoints;
        do {
          cVar19 = FUN_?(&pLStack_15,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector2>__MoveNext__);
          if (cVar19 == '\0') {
            return pLVar4;
          }
          fVar20 = (float)uStack_14;
          fVar21 = uStack_14._4_4_;
          for (iVar22 = 0; iVar22 < iVar2; iVar22 = iVar22 + 1) {
            pointOnPlane = (Vector2)FUN_?(clockwisePolyPoints,iVar22);
            VStack_23 = pointOnPlane;
            uVar24 = FUN_?(clockwisePolyPoints,(longlong)(iVar22 + 1) % (longlong)iVar2 & 0xffffffff);
            uStack_25._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
            fVar26 = VStack_23.y;
            uStack_25._4_4_ = uStack_25._4_4_ - VStack_23.y;
            uStack_25._0_4_ = (float)uVar24;
            fVar27 = VStack_23.x;
            uStack_25._0_4_ = (float)uStack_25 - VStack_23.x;
            VStack_23 = (Vector2)(CONCAT44((float)uStack_25,uStack_25._4_4_) ^ 0x80000000);
            normal = (Vector2)FUN_?(&VStack_23);
            this = (Plane2D *)FUN_?(TypeInfo__RTG__Plane2D);
            Plane2D::Plane2D__ctor_1(this,normal,pointOnPlane,(MethodInfo *)0x0);
            VStack_23.y = fVar21 - fVar16;
            VStack_23.x = fVar20 - fVar17;
            VStack_23 = (Vector2)FUN_?(&VStack_23);
            if (this == (Plane2D *)0x0) goto code_?;
            bVar28 = Plane2D::Plane2D_Raycast(this,arcOrigin,VStack_23,afStackX_10,(MethodInfo *)0x0);
            if (bVar28 != 0) {
              fVar29 = VStack_23.y * afStackX_10[0] + fVar16;
              fVar30 = VStack_23.x * afStackX_10[0] + fVar17;
              VStack_23 = (Vector2)FUN_?(&uStack_25);
              fVar27 = VStack_23.x * (fVar30 - fVar27) + VStack_23.y * (fVar29 - fVar26);
              if ((0.0 <= fVar27) && (fVar26 = (float)FUN_?(&uStack_25), fVar27 <= fVar26)) {
                if (pLVar4 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
                FUN_?(pLVar4,CONCAT44(fVar29,fVar30),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
                break;
              }
            }
          }
        } while( true );
      }
    }
    pLVar4 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar4,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    return pLVar4;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar31 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_Vector2_ *)(*pcVar31)();
  return pLVar4;
}

