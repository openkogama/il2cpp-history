
/* Boolean Contains2DPoint(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains2DPoint(Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = point.x;
  fStack_2 = point.y;
  if (isClosed == 0) {
    uVar3 = 0;
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    uVar6 = (polyPoints->fields)._size;
    lVar7 = 0x20;
    for (; (int)uVar3 < (int)uVar6; uVar3 = uVar3 + 1) {
      uVar8 = (int)(uVar3 + 1) % (int)uVar6;
      if (uVar6 <= uVar8) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      pVVar9 = (polyPoints->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar8) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      if (uVar6 <= uVar3) goto code_?;
      if ((uint)pVVar9->max_length <= uVar3) goto code_?;
      uVar10 = FUN_?();
      uVar6 = (polyPoints->fields)._size;
      if (uVar6 <= uVar3) goto code_?;
      pVVar9 = (polyPoints->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar3) goto code_?;
      fStack_11 = (float)((ulonglong)uVar10 >> 0x20);
      fStack_12 = (float)uVar10;
      fVar13 = (fStack_2 - *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c)) * fStack_11 + (fStack_1 - *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7)) * fStack_12;
      if (epsilon->_areaEps <= fVar13 && fVar13 != epsilon->_areaEps) {
        return 0;
      }
      lVar7 = lVar7 + 8;
    }
  }
  else {
    uVar3 = 0;
    if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
    uVar6 = (polyPoints->fields)._size;
    lVar7 = 0x20;
    for (; (int)uVar3 < (int)(uVar6 - 1); uVar3 = uVar3 + 1) {
      if (uVar6 <= uVar3 + 1) goto code_?;
      pVVar9 = (polyPoints->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar3 + 1) goto code_?;
      if (uVar6 <= uVar3) goto code_?;
      if ((uint)pVVar9->max_length <= uVar3) goto code_?;
      uVar10 = FUN_?();
      uVar6 = (polyPoints->fields)._size;
      if (uVar6 <= uVar3) goto code_?;
      pVVar9 = (polyPoints->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar3) goto code_?;
      fStack_11 = (float)((ulonglong)uVar10 >> 0x20);
      fStack_12 = (float)uVar10;
      fVar13 = (fStack_2 - *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c)) * fStack_11 + (fStack_1 - *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7)) * fStack_12;
      if (epsilon->_areaEps <= fVar13 && fVar13 != epsilon->_areaEps) {
        return 0;
      }
      lVar7 = lVar7 + 8;
    }
  }
  return 1;
}


/* Boolean Contains3DPoint(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains3DPoint(Vector3 *point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,bool isClosed,Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cwPolyPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((cwPolyPoints->fields)._size < (int)(isClosed + 3)) {
code_?:
    bVar2 = 0;
  }
  else {
    if ((cwPolyPoints->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pVVar3 = (cwPolyPoints->fields)._items;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar3->max_length == 0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    uVar4 = pVVar3->vector[0].x;
    uVar5 = pVVar3->vector[0].y;
    fVar6 = pVVar3->vector[0].z;
    fVar7 = (float)FUN_?();
    if (1e-05 < fVar7) {
      uVar8 = polyNormal->x;
      uVar9 = polyNormal->y;
      fVar10 = polyNormal->z / fVar7;
      uStack_11 = CONCAT44((float)uVar9 / fVar7,(float)uVar8 / fVar7);
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
      fVar10 = (pVVar12->zeroVector).z;
    }
    if (checkOnPlane != 0) {
      uVar13 = point->x;
      uVar14 = point->y;
      fVar6 = ABS((float)uVar14 * uStack_11._4_4_ + (float)uVar13 * (float)uStack_11 + point->z * fVar10 + -(uStack_11._4_4_ * (float)uVar5 + (float)uStack_11 * (float)uVar4 + fVar10 * fVar6));
      if (epsilon->_extrudeEps <= fVar6 && fVar6 != epsilon->_extrudeEps) goto code_?;
    }
    if (isClosed == 0) {
      lVar15 = 0;
      for (uVar16 = 0; (int)uVar16 < (cwPolyPoints->fields)._size; uVar16 = uVar16 + 1) {
        uVar17 = (int)(uVar16 + 1) % (cwPolyPoints->fields)._size;
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        if ((uint)(cwPolyPoints->fields)._size <= uVar16) goto code_?;
        if ((uint)pVVar3->max_length <= uVar16) goto code_?;
        uVar18 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar15);
        uVar19 = pVVar3->vector[(int)uVar17].x;
        fVar20 = (float)uVar19 - (float)uVar18;
        fVar10 = pVVar3->vector[(int)uVar17].z - *(float *)((longlong)&pVVar3->vector[0].z + lVar15);
        fVar21 = pVVar3->vector[(int)uVar17].y - (float)((ulonglong)uVar18 >> 0x20);
        uVar22 = polyNormal->x;
        uVar23 = polyNormal->y;
        fVar6 = polyNormal->z;
        fVar7 = (float)FUN_?();
        if (1e-05 < fVar7) {
          fVar24 = ((float)uVar23 * fVar20 - (float)uVar22 * fVar21) / fVar7;
          uStack_11 = CONCAT44(((float)uVar22 * fVar10 - fVar6 * fVar20) / fVar7,(fVar6 * fVar21 - (float)uVar23 * fVar10) / fVar7);
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
          fVar24 = (pVVar12->zeroVector).z;
        }
        if ((uint)(cwPolyPoints->fields)._size <= uVar16) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar16) goto code_?;
        uVar18 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar15);
        uVar25 = point->x;
        uVar26 = point->y;
        fVar6 = ((float)uVar26 - (float)((ulonglong)uVar18 >> 0x20)) * uStack_11._4_4_ + ((float)uVar25 - (float)uVar18) * (float)uStack_11 + (point->z - *(float *)((longlong)&pVVar3->vector[0].z + lVar15)) * fVar24;
        if (epsilon->_areaEps <= fVar6 && fVar6 != epsilon->_areaEps) goto code_?;
        lVar15 = lVar15 + 0xc;
      }
    }
    else {
      lVar15 = 0;
      for (uVar16 = 0; (int)uVar16 < (cwPolyPoints->fields)._size + -1; uVar16 = uVar16 + 1) {
        if ((uint)(cwPolyPoints->fields)._size <= uVar16 + 1) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar16 + 1) goto code_?;
        if ((uint)(cwPolyPoints->fields)._size <= uVar16) goto code_?;
        if ((uint)pVVar3->max_length <= uVar16) goto code_?;
        uVar18 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar15);
        fVar20 = (float)*(undefined8 *)((longlong)&pVVar3->vector[1].x + lVar15) - (float)uVar18;
        fVar10 = *(float *)((longlong)&pVVar3->vector[1].z + lVar15) - *(float *)((longlong)&pVVar3->vector[0].z + lVar15);
        fVar21 = *(float *)((longlong)&pVVar3->vector[1].y + lVar15) - (float)((ulonglong)uVar18 >> 0x20);
        uVar27 = polyNormal->x;
        uVar28 = polyNormal->y;
        fVar6 = polyNormal->z;
        fVar7 = (float)FUN_?();
        if (1e-05 < fVar7) {
          fVar24 = ((float)uVar28 * fVar20 - (float)uVar27 * fVar21) / fVar7;
          uStack_11 = CONCAT44(((float)uVar27 * fVar10 - fVar6 * fVar20) / fVar7,(fVar6 * fVar21 - (float)uVar28 * fVar10) / fVar7);
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
          fVar24 = (pVVar12->zeroVector).z;
        }
        if ((uint)(cwPolyPoints->fields)._size <= uVar16) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar16) goto code_?;
        uVar18 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar15);
        uVar29 = point->x;
        uVar30 = point->y;
        fVar6 = ((float)uVar30 - (float)((ulonglong)uVar18 >> 0x20)) * uStack_11._4_4_ + ((float)uVar29 - (float)uVar18) * (float)uStack_11 + (point->z - *(float *)((longlong)&pVVar3->vector[0].z + lVar15)) * fVar24;
        if (epsilon->_areaEps <= fVar6 && fVar6 != epsilon->_areaEps) goto code_?;
        lVar15 = lVar15 + 0xc;
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}


/* Boolean Is2DPointOnBorder(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnBorder(Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (polyPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((int)(isClosed + 3) <= (polyPoints->fields)._size) {
    if (isClosed == 0) {
      lVar3 = 0x20;
      for (uVar4 = 0; (int)uVar4 < (polyPoints->fields)._size; uVar4 = uVar4 + 1) {
        if ((uint)(polyPoints->fields)._size <= uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          bVar2 = (*pcVar1)();
          return bVar2;
        }
        pVVar5 = (polyPoints->fields)._items;
        if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar5->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          bVar2 = (*pcVar1)();
          return bVar2;
        }
        uVar6 = (int)(uVar4 + 1) % (polyPoints->fields)._size;
        if ((uint)(polyPoints->fields)._size <= uVar6) goto code_?;
        if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar5->max_length <= uVar6) goto code_?;
        point1.y = pVVar5->vector[(int)uVar6].y;
        point1.x = pVVar5->vector[(int)uVar6].x;
        point0.y = *(float *)((longlong)pVVar5->vector + lVar3 + -0x1c);
        point0.x = *(float *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3);
        fVar7 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,point0,point1,(MethodInfo *)0x0);
        if (fVar7 <= epsilon->_wireEps) {
          return 1;
        }
        lVar3 = lVar3 + 8;
      }
    }
    else {
      lVar3 = 0x28;
      for (uVar4 = 0; (int)uVar4 < (polyPoints->fields)._size + -1; uVar4 = uVar4 + 1) {
        if ((uint)(polyPoints->fields)._size <= uVar4) goto code_?;
        pVVar5 = (polyPoints->fields)._items;
        if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar5->max_length <= uVar4) goto code_?;
        if ((uint)(polyPoints->fields)._size <= uVar4 + 1) goto code_?;
        if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar5->max_length <= uVar4 + 1) goto code_?;
        point1_00.y = *(float *)((longlong)pVVar5->vector + lVar3 + -0x1c);
        point1_00.x = *(float *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3);
        point0_00.y = *(float *)((longlong)pVVar5->vector + lVar3 + -0x24);
        point0_00.x = *(float *)((longlong)(pVVar5->vector + -5) + lVar3);
        fVar7 = Vector2Ex::Vector2Ex_GetDistanceToSegment(point,point0_00,point1_00,(MethodInfo *)0x0);
        if (fVar7 <= epsilon->_wireEps) {
          return 1;
        }
        lVar3 = lVar3 + 8;
      }
    }
  }
  return 0;
}


/* Boolean Is2DPointOnThickBorder(Vector2, List`1[UnityEngine.Vector2], List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnThickBorder(Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,List_1_UnityEngine_Vector2_ *thickBorderPoints,bool isClosed,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
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
  if ((polyPoints != (List_1_UnityEngine_Vector2_ *)0x0) && (thickBorderPoints != (List_1_UnityEngine_Vector2_ *)0x0)) {
    if (((polyPoints->fields)._size == (thickBorderPoints->fields)._size) && ((int)(isClosed + 3) <= (polyPoints->fields)._size)) {
      polyPoints_00 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      pvVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_->klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
        pvVar1 = (void *)FUN_?(pvVar1);
      }
      pVVar2 = (Vector2__Array *)FUN_?(pvVar1,4);
      bVar3 = iRam_? != 0;
      (polyPoints_00->fields)._items = pVVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&polyPoints_00->fields >> 0xc);
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
      lVar8 = 0x20;
      fVar9 = epsilon->_thickWireEps;
      for (uVar4 = 0; (int)uVar4 < (polyPoints->fields)._size + -1; uVar4 = uVar4 + 1) {
        piVar10 = &(polyPoints_00->fields)._version;
        *piVar10 = *piVar10 + 1;
        (polyPoints_00->fields)._size = 0;
        if ((uint)(polyPoints->fields)._size <= uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        pVVar2 = (polyPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          bVar12 = (*pcVar11)();
          return bVar12;
        }
        FUN_?(polyPoints_00,CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),*(undefined4 *)((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass + lVar8)),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        if ((uint)(thickBorderPoints->fields)._size <= uVar4) goto code_?;
        pVVar2 = (thickBorderPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4) goto code_?;
        FUN_?(polyPoints_00,CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),*(undefined4 *)((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass + lVar8)),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        if ((uint)(thickBorderPoints->fields)._size <= uVar4 + 1) goto code_?;
        pVVar2 = (thickBorderPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4 + 1) goto code_?;
        FUN_?(polyPoints_00,CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x14),*(undefined4 *)((longlong)(pVVar2->vector + -3) + lVar8)),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        if ((uint)(polyPoints->fields)._size <= uVar4 + 1) goto code_?;
        pVVar2 = (polyPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4 + 1) goto code_?;
        FUN_?(polyPoints_00,CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x14),*(undefined4 *)((longlong)(pVVar2->vector + -3) + lVar8)),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        if ((uint)(polyPoints->fields)._size <= uVar4) goto code_?;
        pVVar2 = (polyPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4) goto code_?;
        FUN_?(polyPoints_00,CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),*(undefined4 *)((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass + lVar8)),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
        aPStack_13[0]._extrudeEps = 0.0;
        aPStack_13[0]._wireEps = 0.0;
        aPStack_13[0]._thickWireEps = 0.0;
        aPStack_13[0]._areaEps = ABS(fVar9);
        bVar12 = PolygonMath_Contains2DPoint(point,polyPoints_00,1,aPStack_13,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          return 1;
        }
        lVar8 = lVar8 + 8;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Boolean Is3DPointOnBorder(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is3DPointOnBorder(Vector3 *point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,bool isClosed,Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cwPolyPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((int)(isClosed + 3) <= (cwPolyPoints->fields)._size) {
    if ((cwPolyPoints->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pVVar3 = (cwPolyPoints->fields)._items;
    if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar3->max_length == 0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    VStack_4.x = pVVar3->vector[0].x;
    VStack_4.y = pVVar3->vector[0].y;
    fVar5 = pVVar3->vector[0].z;
    VStack_6.x = polyNormal->x;
    VStack_6.y = polyNormal->y;
    VStack_6.z = polyNormal->z;
    fVar7 = (float)FUN_?();
    if (1e-05 < fVar7) {
      uVar8 = polyNormal->x;
      uVar9 = polyNormal->y;
      fVar10 = polyNormal->z / fVar7;
      VStack_6.y = (float)uVar9 / fVar7;
      VStack_6.x = (float)uVar8 / fVar7;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_6.x = (pVVar11->zeroVector).x;
      VStack_6.y = (pVVar11->zeroVector).y;
      fVar10 = (pVVar11->zeroVector).z;
    }
    fVar5 = -(VStack_4.y * VStack_6.y + VStack_4.x * VStack_6.x + fVar5 * fVar10);
    if (checkOnPlane == 0) {
      uVar12 = point->x;
      uVar13 = point->y;
      fVar5 = (float)uVar13 * VStack_6.y + (float)uVar12 * VStack_6.x + point->z * fVar10 + fVar5;
      aVStack_14[0].x = point->x;
      aVStack_14[0].y = point->y;
      point->x = aVStack_14[0].x - fVar5 * VStack_6.x;
      point->y = aVStack_14[0].y - fVar5 * VStack_6.y;
      point->z = point->z - fVar5 * fVar10;
    }
    else {
      aVStack_14[0].x = point->x;
      aVStack_14[0].y = point->y;
      fVar5 = ABS(VStack_6.y * aVStack_14[0].y + aVStack_14[0].x * VStack_6.x + point->z * fVar10 + fVar5);
      if (epsilon->_extrudeEps <= fVar5 && fVar5 != epsilon->_extrudeEps) {
        return 0;
      }
    }
    uVar15 = 0;
    lVar16 = 0;
    if (isClosed == 0) {
      for (; (int)uVar15 < (cwPolyPoints->fields)._size; uVar15 = uVar15 + 1) {
        if ((uint)(cwPolyPoints->fields)._size <= uVar15) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar15) goto code_?;
        uVar17 = (int)(uVar15 + 1) % (cwPolyPoints->fields)._size;
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        VStack_4.x = pVVar3->vector[(int)uVar17].x;
        VStack_4.y = pVVar3->vector[(int)uVar17].y;
        VStack_4.z = pVVar3->vector[(int)uVar17].z;
        VStack_6._0_8_ = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        VStack_6.z = *(float *)((longlong)&pVVar3->vector[0].z + lVar16);
        aVStack_14[0].x = point->x;
        aVStack_14[0].y = point->y;
        aVStack_14[0].z = point->z;
        fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment(aVStack_14,&VStack_6,&VStack_4,(MethodInfo *)0x0);
        if (fVar5 <= epsilon->_wireEps) {
          return 1;
        }
        lVar16 = lVar16 + 0xc;
      }
    }
    else {
      for (; (int)uVar15 < (cwPolyPoints->fields)._size + -1; uVar15 = uVar15 + 1) {
        if ((uint)(cwPolyPoints->fields)._size <= uVar15) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar15) goto code_?;
        if ((uint)(cwPolyPoints->fields)._size <= uVar15 + 1) goto code_?;
        if ((uint)pVVar3->max_length <= uVar15 + 1) goto code_?;
        aVStack_14[0]._0_8_ = *(undefined8 *)((longlong)&pVVar3->vector[1].x + lVar16);
        aVStack_14[0].z = *(float *)((longlong)&pVVar3->vector[1].z + lVar16);
        VStack_4._0_8_ = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        VStack_4.z = *(float *)((longlong)&pVVar3->vector[0].z + lVar16);
        VStack_6.x = point->x;
        VStack_6.y = point->y;
        VStack_6.z = point->z;
        fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment(&VStack_6,&VStack_4,aVStack_14,(MethodInfo *)0x0);
        if (fVar5 <= epsilon->_wireEps) {
          return 1;
        }
        lVar16 = lVar16 + 0xc;
      }
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, List`1[UnityEngine.Vector3], Boolean, Vector3, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Raycast(Ray *ray,float *t,List_1_UnityEngine_Vector3_ *cwPolyPoints,bool isClosed,Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *t = 0.0;
  if (cwPolyPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((int)(isClosed + 3) <= (cwPolyPoints->fields)._size) {
      if ((cwPolyPoints->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      pVVar3 = (cwPolyPoints->fields)._items;
      if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar3->max_length == 0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      VStack_4.x = pVVar3->vector[0].x;
      VStack_4.y = pVVar3->vector[0].y;
      fVar5 = pVVar3->vector[0].z;
      VStack_6.x = polyNormal->x;
      VStack_6.y = polyNormal->y;
      VStack_6.z = polyNormal->z;
      fVar7 = (float)FUN_?(&VStack_6);
      if (1e-05 < fVar7) {
        uVar8 = polyNormal->x;
        uVar9 = polyNormal->y;
        fVar10 = polyNormal->z / fVar7;
        VStack_6.y = (float)uVar9 / fVar7;
        VStack_6.x = (float)uVar8 / fVar7;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_6.x = (pVVar11->zeroVector).x;
        VStack_6.y = (pVVar11->zeroVector).y;
        fVar10 = (pVVar11->zeroVector).z;
      }
      fVar7 = (ray->m_Origin).z;
      uStack_12._0_4_ = (ray->m_Direction).y;
      uStack_12._4_4_ = (ray->m_Direction).z;
      fVar13 = (float)(undefined4)uStack_12 * VStack_6.y + (ray->m_Direction).x * VStack_6.x + (float)uStack_12._4_4_ * fVar10;
      fVar14 = (ray->m_Origin).x * VStack_6.x;
      fVar15 = (ray->m_Origin).y * VStack_6.y;
      fVar16 = VStack_4.x * VStack_6.x;
      fVar17 = VStack_4.y * VStack_6.y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Mathf);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar18 = ABS(fVar13);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar19 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
      fVar20 = fVar18 * 1e-06;
      if (fVar18 * 1e-06 <= fVar19) {
        fVar20 = fVar19;
      }
      if ((fVar20 <= ABS(0.0 - fVar13)) && (fVar13 = (-(fVar15 + fVar14 + fVar7 * fVar10) - -(fVar17 + fVar16 + fVar5 * fVar10)) / fVar13, 0.0 < fVar13)) {
        uVar21 = (ray->m_Direction).x;
        uVar22 = (ray->m_Direction).y;
        uVar23 = (ray->m_Origin).x;
        uVar24 = (ray->m_Origin).y;
        VStack_6.x = (float)uVar21 * fVar13 + (float)uVar23;
        VStack_4.x = polyNormal->x;
        VStack_4.y = polyNormal->y;
        PStack_25._areaEps = epsilon->_areaEps;
        PStack_25._extrudeEps = epsilon->_extrudeEps;
        PStack_25._wireEps = epsilon->_wireEps;
        PStack_25._thickWireEps = epsilon->_thickWireEps;
        VStack_4.z = polyNormal->z;
        VStack_6.z = (ray->m_Direction).z * fVar13 + (ray->m_Origin).z;
        VStack_6.y = (float)uVar22 * fVar13 + (float)uVar24;
        bVar2 = PolygonMath_Contains3DPoint(&VStack_6,0,cwPolyPoints,isClosed,&VStack_4,&PStack_25,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          *t = fVar13;
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

