
/* Boolean Contains2DPoint(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains2DPoint
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,
               PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
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
      fVar13 = (fStack_2 - *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c)) * fStack_11 +
              (fStack_1 -
              *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7)) *
              fStack_12;
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
      fVar13 = (fStack_2 - *(float *)((longlong)pVVar9->vector + lVar7 + -0x1c)) * fStack_11 +
              (fStack_1 -
              *(float *)((longlong)&((Vector2__Array *)(pVVar9->vector + -4))->klass + lVar7)) *
              fStack_12;
      if (epsilon->_areaEps <= fVar13 && fVar13 != epsilon->_areaEps) {
        return 0;
      }
      lVar7 = lVar7 + 8;
    }
  }
  return 1;
}


/* Boolean Contains3DPoint(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3,
   PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Contains3DPoint
               (Vector3 *point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,
               bool isClosed,Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
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
    fVar8 = _UNK_?;
    if (_UNK_? < fVar7) {
      uVar9 = polyNormal->x;
      uVar10 = polyNormal->y;
      fVar11 = polyNormal->z / fVar7;
      uStack_12 = CONCAT44((float)uVar10 / fVar7,(float)uVar9 / fVar7);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_12._0_4_ = (pVVar13->zeroVector).x;
      uStack_12._4_4_ = (pVVar13->zeroVector).y;
      fVar11 = (pVVar13->zeroVector).z;
    }
    if (checkOnPlane != 0) {
      uVar14 = point->x;
      uVar15 = point->y;
      fVar6 = (float)((uint)((float)uVar15 * uStack_12._4_4_ + (float)uVar14 * (float)uStack_12 +
                              point->z * fVar11 +
                             (float)((uint)(uStack_12._4_4_ * (float)uVar5 +
                                            (float)uStack_12 * (float)uVar4 + fVar11 * fVar6) ^
                                    _UNK_?)) & _UNK_?);
      if (epsilon->_extrudeEps <= fVar6 && fVar6 != epsilon->_extrudeEps)
      goto code_?;
    }
    if (isClosed == 0) {
      lVar16 = 0;
      for (uVar17 = 0; (int)uVar17 < (cwPolyPoints->fields)._size; uVar17 = uVar17 + 1) {
        uVar18 = (int)(uVar17 + 1) % (cwPolyPoints->fields)._size;
        if ((uint)(cwPolyPoints->fields)._size <= uVar18) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar18) goto code_?;
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        uVar19 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        uVar20 = pVVar3->vector[(int)uVar18].x;
        fVar21 = (float)uVar20 - (float)uVar19;
        fVar11 = pVVar3->vector[(int)uVar18].z -
                 *(float *)((longlong)&pVVar3->vector[0].z + lVar16);
        fVar22 = pVVar3->vector[(int)uVar18].y - (float)((ulonglong)uVar19 >> 0x20);
        uVar23 = polyNormal->x;
        uVar24 = polyNormal->y;
        fVar6 = polyNormal->z;
        fVar7 = (float)FUN_?();
        if (fVar8 < fVar7) {
          fVar25 = ((float)uVar24 * fVar21 - (float)uVar23 * fVar22) / fVar7;
          uStack_12 = CONCAT44(((float)uVar23 * fVar11 - fVar6 * fVar21) / fVar7,
                               (fVar6 * fVar22 - (float)uVar24 * fVar11) / fVar7);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_12._0_4_ = (pVVar13->zeroVector).x;
          uStack_12._4_4_ = (pVVar13->zeroVector).y;
          fVar25 = (pVVar13->zeroVector).z;
        }
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        uVar19 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        uVar26 = point->x;
        uVar27 = point->y;
        fVar6 = ((float)uVar27 - (float)((ulonglong)uVar19 >> 0x20)) * uStack_12._4_4_ +
                 ((float)uVar26 - (float)uVar19) * (float)uStack_12 +
                 (point->z - *(float *)((longlong)&pVVar3->vector[0].z + lVar16)) * fVar25;
        if (epsilon->_areaEps <= fVar6 && fVar6 != epsilon->_areaEps) goto code_?;
        lVar16 = lVar16 + 0xc;
      }
    }
    else {
      lVar16 = 0;
      for (uVar17 = 0; (int)uVar17 < (cwPolyPoints->fields)._size + -1; uVar17 = uVar17 + 1) {
        if ((uint)(cwPolyPoints->fields)._size <= uVar17 + 1) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17 + 1) goto code_?;
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        uVar19 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        fVar21 = (float)*(undefined8 *)((longlong)&pVVar3->vector[1].x + lVar16) - (float)uVar19;
        fVar11 = *(float *)((longlong)&pVVar3->vector[1].z + lVar16) -
                 *(float *)((longlong)&pVVar3->vector[0].z + lVar16);
        fVar22 = *(float *)((longlong)&pVVar3->vector[1].y + lVar16) -
                 (float)((ulonglong)uVar19 >> 0x20);
        uVar28 = polyNormal->x;
        uVar29 = polyNormal->y;
        fVar6 = polyNormal->z;
        fVar7 = (float)FUN_?();
        if (fVar8 < fVar7) {
          fVar25 = ((float)uVar29 * fVar21 - (float)uVar28 * fVar22) / fVar7;
          uStack_12 = CONCAT44(((float)uVar28 * fVar11 - fVar6 * fVar21) / fVar7,
                               (fVar6 * fVar22 - (float)uVar29 * fVar11) / fVar7);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_12._0_4_ = (pVVar13->zeroVector).x;
          uStack_12._4_4_ = (pVVar13->zeroVector).y;
          fVar25 = (pVVar13->zeroVector).z;
        }
        if ((uint)(cwPolyPoints->fields)._size <= uVar17) goto code_?;
        pVVar3 = (cwPolyPoints->fields)._items;
        if (pVVar3 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar3->max_length <= uVar17) goto code_?;
        uVar19 = *(undefined8 *)((longlong)&pVVar3->vector[0].x + lVar16);
        uVar30 = point->x;
        uVar31 = point->y;
        fVar6 = ((float)uVar31 - (float)((ulonglong)uVar19 >> 0x20)) * uStack_12._4_4_ +
                 ((float)uVar30 - (float)uVar19) * (float)uStack_12 +
                 (point->z - *(float *)((longlong)&pVVar3->vector[0].z + lVar16)) * fVar25;
        if (epsilon->_areaEps <= fVar6 && fVar6 != epsilon->_areaEps) goto code_?;
        lVar16 = lVar16 + 0xc;
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}


/* Boolean Is2DPointOnBorder(Vector2, List`1[UnityEngine.Vector2], Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnBorder
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,bool isClosed,
               PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
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
        point1_00.x = *(float *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3
                                );
        point0_00.y = *(float *)((longlong)pVVar5->vector + lVar3 + -0x24);
        point0_00.x = *(float *)((longlong)(pVVar5->vector + -5) + lVar3);
        fVar7 = Vector2Ex::Vector2Ex_GetDistanceToSegment
                          (point,point0_00,point1_00,(MethodInfo *)0x0);
        if (fVar7 <= epsilon->_wireEps) {
          return 1;
        }
        lVar3 = lVar3 + 8;
      }
    }
  }
  return 0;
}


/* Boolean Is2DPointOnThickBorder(Vector2, List`1[UnityEngine.Vector2], List`1[UnityEngine.Vector2],
   Boolean, PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is2DPointOnThickBorder
               (Vector2 point,List_1_UnityEngine_Vector2_ *polyPoints,
               List_1_UnityEngine_Vector2_ *thickBorderPoints,bool isClosed,PolygonEpsilon *epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((polyPoints != (List_1_UnityEngine_Vector2_ *)0x0) &&
     (thickBorderPoints != (List_1_UnityEngine_Vector2_ *)0x0)) {
    if (((polyPoints->fields)._size == (thickBorderPoints->fields)._size) &&
       ((int)(isClosed + 3) <= (polyPoints->fields)._size)) {
      polyPoints_00 =
           (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      pvVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_->
               klass->rgctx_data[3].rgctxDataDummy;
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
      fVar9 = (float)((uint)epsilon->_thickWireEps & _UNK_?);
      for (uVar4 = 0; (int)uVar4 < (polyPoints->fields)._size + -1; uVar4 = uVar4 + 1) {
        piVar10 = &(polyPoints_00->fields)._version;
        *piVar10 = *piVar10 + 1;
        (polyPoints_00->fields)._size = 0;
        if ((uint)(polyPoints->fields)._size <= uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
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
        FUN_?(polyPoints_00,
                      CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),
                               *(undefined4 *)
                                ((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass +
                                lVar8)),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        if ((uint)(thickBorderPoints->fields)._size <= uVar4) goto code_?;
        pVVar2 = (thickBorderPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4) goto code_?;
        FUN_?(polyPoints_00,
                      CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),
                               *(undefined4 *)
                                ((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass +
                                lVar8)),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        if ((uint)(thickBorderPoints->fields)._size <= uVar4 + 1) goto code_?;
        pVVar2 = (thickBorderPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4 + 1) goto code_?;
        FUN_?(polyPoints_00,
                      CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x14),
                               *(undefined4 *)((longlong)(pVVar2->vector + -3) + lVar8)),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        if ((uint)(polyPoints->fields)._size <= uVar4 + 1) goto code_?;
        pVVar2 = (polyPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4 + 1) goto code_?;
        FUN_?(polyPoints_00,
                      CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x14),
                               *(undefined4 *)((longlong)(pVVar2->vector + -3) + lVar8)),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        if ((uint)(polyPoints->fields)._size <= uVar4) goto code_?;
        pVVar2 = (polyPoints->fields)._items;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar4) goto code_?;
        FUN_?(polyPoints_00,
                      CONCAT44(*(undefined4 *)((longlong)pVVar2->vector + lVar8 + -0x1c),
                               *(undefined4 *)
                                ((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass +
                                lVar8)),
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
        aPStack_13[0]._extrudeEps = 0.0;
        aPStack_13[0]._wireEps = 0.0;
        aPStack_13[0]._thickWireEps = 0.0;
        aPStack_13[0]._areaEps = fVar9;
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


/* Boolean Is3DPointOnBorder(Vector3, Boolean, List`1[UnityEngine.Vector3], Boolean, Vector3,
   PolygonEpsilon) */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Is3DPointOnBorder
               (Vector3 *point,bool checkOnPlane,List_1_UnityEngine_Vector3_ *cwPolyPoints,
               bool isClosed,Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
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
    if (_UNK_? < fVar7) {
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
    fVar5 = (float)((uint)(VStack_4.y * VStack_6.y + VStack_4.x * VStack_6.x + fVar5 * fVar10)
                    ^ _UNK_?);
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
      fVar5 = (float)((uint)(VStack_6.y * aVStack_14[0].y + aVStack_14[0].x * VStack_6.x +
                              point->z * fVar10 + fVar5) & _UNK_?);
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
        fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (aVStack_14,&VStack_6,&VStack_4,(MethodInfo *)0x0);
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
        fVar5 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (&VStack_6,&VStack_4,aVStack_14,(MethodInfo *)0x0);
        if (fVar5 <= epsilon->_wireEps) {
          return 1;
        }
        lVar16 = lVar16 + 0xc;
      }
    }
  }
  return 0;
}


/* Boolean Raycast(Ray, Single ByRef, List`1[UnityEngine.Vector3], Boolean, Vector3, PolygonEpsilon)
    */

bool Assembly-CSharp.dll::RTG::PolygonMath::PolygonMath_Raycast
               (Ray *ray,float *t,List_1_UnityEngine_Vector3_ *cwPolyPoints,bool isClosed,
               Vector3 *polyNormal,PolygonEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
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
      if (_UNK_? < fVar7) {
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
      uStack_12._0_4_ = (ray->m_Direction).y;
      uStack_12._4_4_ = (ray->m_Direction).z;
      fVar13 = (float)(undefined4)uStack_12 * VStack_6.y + (ray->m_Direction).x * VStack_6.x +
               (float)uStack_12._4_4_ * fVar10;
      fVar7 = (float)((uint)((ray->m_Origin).y * VStack_6.y + (ray->m_Origin).x * VStack_6.x +
                             (ray->m_Origin).z * fVar10) ^ _UNK_?);
      fVar5 = (float)((uint)(VStack_4.y * VStack_6.y + VStack_4.x * VStack_6.x +
                             fVar5 * fVar10) ^ _UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Mathf);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar10 = (float)((uint)fVar13 & _UNK_?);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar15 = fVar10 * _UNK_?;
      if (fVar10 * _UNK_? <= fVar14) {
        fVar15 = fVar14;
      }
      if ((fVar15 <= (float)((uint)(0.0 - fVar13) & _UNK_?)) &&
         (fVar13 = (fVar7 - fVar5) / fVar13, 0.0 < fVar13)) {
        uVar16 = (ray->m_Direction).x;
        uVar17 = (ray->m_Direction).y;
        uVar18 = (ray->m_Origin).x;
        uVar19 = (ray->m_Origin).y;
        VStack_6.x = (float)uVar16 * fVar13 + (float)uVar18;
        VStack_4.x = polyNormal->x;
        VStack_4.y = polyNormal->y;
        PStack_20._areaEps = epsilon->_areaEps;
        PStack_20._extrudeEps = epsilon->_extrudeEps;
        PStack_20._wireEps = epsilon->_wireEps;
        PStack_20._thickWireEps = epsilon->_thickWireEps;
        VStack_4.z = polyNormal->z;
        VStack_6.z = (ray->m_Direction).z * fVar13 + (ray->m_Origin).z;
        VStack_6.y = (float)uVar17 * fVar13 + (float)uVar19;
        bVar2 = PolygonMath_Contains3DPoint
                           (&VStack_6,0,cwPolyPoints,isClosed,&VStack_4,&PStack_20,
                            (MethodInfo *)0x0);
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

