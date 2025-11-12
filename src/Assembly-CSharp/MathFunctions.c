
/* Matrix4x4 AbsMatrix(Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::MathFunctions::MathFunctions_AbsMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 *m,MethodInfo *method)

{
  uVar1 = _UNK_?;
  __return_storage_ptr__->m00 = 0.0;
  __return_storage_ptr__->m10 = 0.0;
  __return_storage_ptr__->m20 = 0.0;
  __return_storage_ptr__->m30 = 0.0;
  iVar2 = 0;
  __return_storage_ptr__->m01 = 0.0;
  __return_storage_ptr__->m11 = 0.0;
  __return_storage_ptr__->m21 = 0.0;
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = 0.0;
  __return_storage_ptr__->m12 = 0.0;
  __return_storage_ptr__->m22 = 0.0;
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = 0.0;
  __return_storage_ptr__->m13 = 0.0;
  __return_storage_ptr__->m23 = 0.0;
  __return_storage_ptr__->m33 = 0.0;
  do {
    iVar3 = 0;
    index = iVar2;
    do {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        (m,index,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,iVar2 + iVar3,(float)((uint)fVar4 & uVar1),(MethodInfo *)0x0
                );
      iVar3 = iVar3 + 1;
      index = index + 1;
    } while (iVar3 < 3);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0xc);
  return __return_storage_ptr__;
}


/* Vector3 CeilVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_CeilVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vector,MethodInfo *method)

{
  uVar1 = func_?(vector->x);
  uVar2 = func_?(vector->y);
  fVar3 = (float)func_?(vector->z);
  vector->z = fVar3;
  vector->x = (float)uVar1;
  vector->y = (float)uVar2;
  fVar3 = vector->z;
  __return_storage_ptr__->x = (float)uVar1;
  __return_storage_ptr__->y = (float)uVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void ClampIntVector(IntVector ByRef, IntVector, IntVector) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampIntVector
               (IntVector *target,IntVector *min,IntVector *max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  while( true ) {
    while( true ) {
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar1 == 0) {
        sVar2 = max->x;
        sVar3 = min->x;
        sVar4 = target->x;
      }
      else if (iVar1 == 1) {
        sVar2 = max->y;
        sVar3 = min->y;
        sVar4 = target->y;
      }
      else {
        if (iVar1 != 2) {
          uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar6 = (IndexOutOfRangeException *)func_?(uVar5);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar6,(MethodInfo *)0x0);
          uVar5 = func_?(&MethodInfo__MV__WorldObject__IntVector__get_Item_int_);
          FUN_?(pIVar6,uVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        sVar2 = max->z;
        sVar3 = min->z;
        sVar4 = target->z;
      }
      if ((sVar3 <= sVar4) && (sVar3 = sVar4, sVar2 < sVar4)) {
        sVar3 = sVar2;
      }
      if (iVar1 != 0) break;
      target->x = sVar3;
      iVar1 = 1;
    }
    if (iVar1 != 1) break;
    target->y = sVar3;
    iVar1 = 2;
  }
  if (iVar1 != 2) {
    uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar6 = (IndexOutOfRangeException *)func_?(uVar5);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar6,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__MV__WorldObject__IntVector__set_Item_int__short_);
    FUN_?(pIVar6,uVar5);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  target->z = sVar3;
  return;
}


/* Void ClampVector(Vector3 ByRef, Single, Single) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampVector
               (Vector3 *v,float min,float max,MethodInfo *method)

{
  fVar1 = v->x;
  fVar2 = min;
  if ((min <= fVar1) && (fVar2 = fVar1, max < fVar1)) {
    fVar2 = max;
  }
  v->x = fVar2;
  fVar1 = v->y;
  fVar2 = min;
  if ((min <= fVar1) && (fVar2 = fVar1, max < fVar1)) {
    fVar2 = max;
  }
  fVar1 = v->z;
  v->y = fVar2;
  if (fVar1 < min) {
    v->z = min;
    return;
  }
  if (fVar1 <= max) {
    v->z = fVar1;
    return;
  }
  v->z = max;
  return;
}


/* Void ClampVector(Vector3 ByRef, Vector3, Vector3) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampVector_1
               (Vector3 *v,Vector3 *min,Vector3 *max,MethodInfo *method)

{
  fVar1 = v->x;
  fVar2 = min->x;
  if ((fVar1 < min->x) || (fVar2 = max->x, max->x < fVar1)) {
    fVar1 = fVar2;
  }
  fVar2 = min->y;
  v->x = fVar1;
  fVar1 = v->y;
  if ((fVar1 < fVar2) || (fVar2 = max->y, max->y < fVar1)) {
    fVar1 = fVar2;
  }
  fVar2 = min->z;
  v->y = fVar1;
  fVar1 = v->z;
  if ((fVar2 <= fVar1) && (fVar2 = max->z, fVar1 <= fVar2)) {
    v->z = fVar1;
    return;
  }
  v->z = fVar2;
  return;
}


/* Boolean DistancePointLine(Vector3, Vector3, Vector3, Single ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine
               (Vector3 *point,Vector3 *lineStart,Vector3 *lineEnd,float *distance,
               MethodInfo *method)

{
  VStack_1.x = lineEnd->x;
  VStack_1.y = lineEnd->y;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  VStack_1.z = lineEnd->z;
  VStack_3.z = lineStart->z;
  VStack_3.x = lineStart->x;
  VStack_3.y = lineStart->y;
  aVStack_4[0].z = point->z;
  aVStack_4[0].x = point->x;
  aVStack_4[0].y = point->y;
  bVar5 = MathFunctions_DistancePointLine_1
                    (aVStack_4,&VStack_3,&VStack_1,distance,&VStack_2,(MethodInfo *)0x0);
  return bVar5;
}


/* Boolean DistancePointLine(Vector3, Vector3, Vector3, Single ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine_1
               (Vector3 *point,Vector3 *lineStart,Vector3 *lineEnd,float *distance,
               Vector3 *intersection,MethodInfo *method)

{
  uVar1 = lineEnd->x;
  uVar2 = lineEnd->y;
  bVar3 = 0;
  uVar4 = lineStart->x;
  uVar5 = lineStart->y;
  fVar6 = (float)uVar1 - (float)uVar4;
  fVar7 = lineEnd->z - lineStart->z;
  *distance = 0.0;
  intersection->x = 0.0;
  intersection->y = 0.0;
  fVar8 = (float)uVar2 - (float)uVar5;
  intersection->z = 0.0;
  fVar9 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  if (_UNK_? <= fVar9) {
    uVar10 = lineStart->x;
    uVar11 = lineStart->y;
    uVar12 = point->x;
    uVar13 = point->y;
    fVar9 = (((float)uVar13 - (float)uVar11) * fVar8 + ((float)uVar12 - (float)uVar10) * fVar6 +
             (point->z - lineStart->z) * fVar7) / fVar9;
    if ((0.0 <= fVar9) && (fVar9 <= _UNK_?)) {
      uVar14 = lineStart->x;
      uVar15 = lineStart->y;
      fVar6 = fVar6 * fVar9 + (float)uVar14;
      fVar8 = fVar8 * fVar9 + (float)uVar15;
      fVar9 = fVar7 * fVar9 + lineStart->z;
      fStack_16 = point->z - fVar9;
      intersection->x = fVar6;
      intersection->y = fVar8;
      uVar17 = point->x;
      uVar18 = point->y;
      intersection->z = fVar9;
      uStack_19 = CONCAT44((float)uVar18 - fVar8,(float)uVar17 - fVar6);
      fVar9 = (float)FUN_?(&uStack_19);
      *distance = fVar9;
      bVar3 = 1;
    }
  }
  return bVar3;
}


/* Void DistancePointLine(Vector3, Vector3, Vector3, Single ByRef, Vector3 ByRef, Single ByRef) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine_2
               (Vector3 *point,Vector3 *lineStart,Vector3 *lineEnd,float *distance,
               Vector3 *intersection,float *pointOnLineScalar,MethodInfo *method)

{
  uVar1 = lineEnd->x;
  uVar2 = lineEnd->y;
  uVar3 = lineStart->x;
  uVar4 = lineStart->y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = lineEnd->z - lineStart->z;
  fVar7 = (float)uVar2 - (float)uVar4;
  uVar8 = point->x;
  uVar9 = point->y;
  fVar10 = (((float)uVar9 - (float)uVar4) * fVar7 + ((float)uVar8 - (float)uVar3) * fVar5 +
           (point->z - lineStart->z) * fVar6) /
           (fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  *pointOnLineScalar = fVar10;
  uVar11 = lineStart->x;
  uVar12 = lineStart->y;
  fVar5 = fVar5 * fVar10 + (float)uVar11;
  fVar7 = fVar7 * fVar10 + (float)uVar12;
  fVar10 = fVar6 * fVar10 + lineStart->z;
  fStack_13 = point->z - fVar10;
  intersection->x = fVar5;
  intersection->y = fVar7;
  uVar14 = point->x;
  uVar15 = point->y;
  intersection->z = fVar10;
  uStack_16 = CONCAT44((float)uVar15 - fVar7,(float)uVar14 - fVar5);
  fVar10 = (float)FUN_?(&uStack_16);
  *distance = fVar10;
  return;
}


/* Vector3 DivideVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_DivideVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  fVar1 = vec0->y;
  fVar2 = vec1->y;
  __return_storage_ptr__->x = vec0->x / vec1->x;
  fVar3 = vec0->z;
  fVar4 = vec1->z;
  __return_storage_ptr__->y = fVar1 / fVar2;
  __return_storage_ptr__->z = fVar3 / fVar4;
  return __return_storage_ptr__;
}


/* Boolean DoLinesIntersect(Vector2, Vector2, Vector2, Vector2, Vector2 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DoLinesIntersect
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,Vector2 *ptIntersection,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = p2.y;
  fStack_2 = p0.x;
  fStack_3 = p2.x;
  fStack_4 = p3.y;
  fStack_5 = p3.x;
  fStack_6 = p0.y;
  fStack_7 = p1.x;
  fStack_8 = p1.y;
  dVar9 = (double)((fStack_7 - fStack_2) * (fStack_4 - fStack_1) -
                  (fStack_8 - fStack_6) * (fStack_5 - fStack_3));
  dVar10 = (double)((fStack_5 - fStack_3) * (fStack_6 - fStack_1) -
                  (fStack_2 - fStack_3) * (fStack_4 - fStack_1));
  dVar11 = (double)((fStack_6 - fStack_1) * (fStack_7 - fStack_2) -
                  (fStack_8 - fStack_6) * (fStack_2 - fStack_3));
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar12 = _UNK_?;
  if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & (uint)((ulonglong)_UNK_? >> 0x20),
                       SUB84(dVar10,0) & (uint)_UNK_?) < _UNK_?) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         (uint)((ulonglong)_UNK_? >> 0x20),
                         SUB84(dVar11,0) & (uint)_UNK_?) < dVar12) {
      bVar13 = MathFunctions_IsCoincidentalLineSegmentsOverlapping(p0,p1,p2,p3,(MethodInfo *)0x0);
      return bVar13 != 0;
    }
  }
  if ((((dVar9 == 0.0) || (dVar10 = dVar10 / dVar9, dVar10 < 0.0)) || (_UNK_? < dVar10)) ||
     ((dVar11 / dVar9 < 0.0 || (_UNK_? < dVar11 / dVar9)))) {
    bVar13 = 0;
  }
  else {
    ptIntersection->x = (float)((double)(fStack_7 - fStack_2) * dVar10 + (double)fStack_2);
    ptIntersection->y = (float)((double)(fStack_8 - fStack_6) * dVar10 + (double)fStack_6);
    bVar13 = 1;
  }
  return bVar13;
}


/* Single DotProduct(Vector3 ByRef, Vector3 ByRef) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_DotProduct
                (Vector3 *a,Vector3 *b,MethodInfo *method)

{
  return a->y * b->y + a->x * b->x + a->z * b->z;
}


/* Bounds FastAABBTransform(Matrix4x4, Bounds) */

Bounds * Assembly-CSharp.dll::MathFunctions::MathFunctions_FastAABBTransform
                   (Bounds *__return_storage_ptr__,Matrix4x4 *m,Bounds *b,MethodInfo *method)

{
  uVar1 = _UNK_?;
  aMStack_2[0].m00 = m->m00;
  aMStack_2[0].m10 = m->m10;
  aMStack_2[0].m20 = m->m20;
  aMStack_2[0].m30 = m->m30;
  aMStack_2[0].m01 = m->m01;
  aMStack_2[0].m11 = m->m11;
  aMStack_2[0].m21 = m->m21;
  aMStack_2[0].m31 = m->m31;
  iVar3 = 0;
  aMStack_2[0].m02 = m->m02;
  aMStack_2[0].m12 = m->m12;
  aMStack_2[0].m22 = m->m22;
  aMStack_2[0].m32 = m->m32;
  aMStack_2[0].m03 = m->m03;
  aMStack_2[0].m13 = m->m13;
  aMStack_2[0].m23 = m->m23;
  aMStack_2[0].m33 = m->m33;
  MStack_4.m00 = 0.0;
  MStack_4.m10 = 0.0;
  MStack_4.m20 = 0.0;
  MStack_4.m30 = 0.0;
  MStack_4.m01 = 0.0;
  MStack_4.m11 = 0.0;
  MStack_4.m21 = 0.0;
  MStack_4.m31 = 0.0;
  MStack_4.m02 = 0.0;
  MStack_4.m12 = 0.0;
  MStack_4.m22 = 0.0;
  MStack_4.m32 = 0.0;
  do {
    iVar5 = 0;
    index = iVar3;
    do {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         (aMStack_2,index,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (&MStack_4,iVar3 + iVar5,(float)((uint)fVar6 & uVar1),(MethodInfo *)0x0);
      fVar6 = _UNK_?;
      iVar5 = iVar5 + 1;
      index = index + 1;
    } while (iVar5 < 3);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xc);
  fVar7 = (b->m_Center).z;
  uVar8 = (b->m_Center).x;
  uVar9 = (b->m_Center).y;
  fVar10 = m->m11;
  fVar11 = m->m21;
  fVar12 = m->m10;
  fVar13 = m->m20;
  fVar14 = m->m12;
  fVar15 = m->m22;
  fVar16 = _UNK_? /
           ((float)uVar9 * m->m31 + (float)uVar8 * m->m30 + fVar7 * m->m32 + m->m33);
  fVar17 = m->m13;
  fVar18 = m->m23;
  uVar19 = (b->m_Extents).x;
  uVar20 = (b->m_Extents).y;
  fVar21 = (b->m_Extents).z;
  fVar22 = MStack_4.m01 * (float)uVar20 + MStack_4.m00 * (float)uVar19 + MStack_4.m02 * fVar21;
  fVar23 = MStack_4.m11 * (float)uVar20 + MStack_4.m10 * (float)uVar19 + MStack_4.m12 * fVar21;
  fVar21 = MStack_4.m21 * (float)uVar20 + MStack_4.m20 * (float)uVar19 + MStack_4.m22 * fVar21;
  (__return_storage_ptr__->m_Center).x =
       ((float)uVar9 * m->m01 + (float)uVar8 * m->m00 + fVar7 * m->m02 + m->m03) * fVar16;
  (__return_storage_ptr__->m_Center).y =
       ((float)uVar9 * fVar10 + (float)uVar8 * fVar12 + fVar7 * fVar14 + fVar17) * fVar16;
  (__return_storage_ptr__->m_Center).z =
       ((float)uVar9 * fVar11 + (float)uVar8 * fVar13 + fVar7 * fVar15 + fVar18) * fVar16;
  (__return_storage_ptr__->m_Extents).x = (fVar22 + fVar22) * fVar6;
  (__return_storage_ptr__->m_Extents).y = (fVar23 + fVar23) * fVar6;
  (__return_storage_ptr__->m_Extents).z = (fVar21 + fVar21) * fVar6;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] FlipPolygon(List`1[UnityEngine.Vector2]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::MathFunctions::MathFunctions_FlipPolygon
          (List_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                 );
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
  List_1_UnityEngine_Vector2___ctor_1
            (pLVar1,(IEnumerable_1_UnityEngine_Vector2_ *)points,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
            );
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((points->fields)._size / 2 <= (int)uVar2) {
        return pLVar1;
      }
      if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar4)();
        return pLVar1;
      }
      pVVar5 = (pLVar1->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar4)();
        return pLVar1;
      }
      fVar6 = *(float *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3);
      iVar7 = (pLVar1->fields)._size - uVar2;
      fVar8 = *(float *)((longlong)pVVar5->vector + lVar3 + -0x1c);
      if ((uint)(pLVar1->fields)._size <= iVar7 - 1U) goto code_?;
      pVVar5 = (pLVar1->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar5->max_length <= iVar7 - 1U) goto code_?;
      fVar9 = pVVar5->vector[(longlong)iVar7 + -1].y;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      if (pVVar5 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar5->max_length <= uVar2) goto code_?;
      *(float *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3) =
           pVVar5->vector[(longlong)iVar7 + -1].x;
      *(float *)((longlong)pVVar5->vector + lVar3 + -0x1c) = fVar9;
      piVar10 = &(pLVar1->fields)._version;
      *piVar10 = *piVar10 + 1;
      iVar7 = (pLVar1->fields)._size - uVar2;
      if ((uint)(pLVar1->fields)._size <= iVar7 - 1U) goto code_?;
      pVVar5 = (pLVar1->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) break;
      if ((uint)pVVar5->max_length <= iVar7 - 1U) goto code_?;
      uVar2 = uVar2 + 1;
      pVVar5->vector[(longlong)iVar7 + -1].x = fVar6;
      pVVar5->vector[(longlong)iVar7 + -1].y = fVar8;
      piVar10 = &(pLVar1->fields)._version;
      *piVar10 = *piVar10 + 1;
      lVar3 = lVar3 + 8;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar4)();
  return pLVar1;
}


/* Vector3 FloorVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_FloorVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar1 = (double)func_?((double)vector->x);
  dVar2 = (double)func_?((double)vector->y);
  dVar3 = (double)func_?((double)vector->z);
  vector->z = (float)dVar3;
  vector->x = (float)dVar1;
  vector->y = (float)dVar2;
  fVar4 = vector->z;
  __return_storage_ptr__->x = (float)dVar1;
  __return_storage_ptr__->y = (float)dVar2;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 GetMaxVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMaxVector
                    (Vector3 *__return_storage_ptr__,Vector3 *max0,Vector3 *max1,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  index = 0;
  method_00 = (MethodInfo *)max1;
  do {
    if (index == 0) {
      fVar1 = max1->x;
      fVar2 = max0->x;
    }
    else if (index == 1) {
      fVar1 = max1->y;
      fVar2 = max0->y;
    }
    else {
      if (index != 2) {
        uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar3);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this,uVar3);
        pcVar4 = (code *)swi(3);
        pVVar5 = (Vector3 *)(*pcVar4)();
        return pVVar5;
      }
      fVar1 = max1->z;
      fVar2 = max0->z;
    }
    pVVar5 = max1;
    if (fVar1 < fVar2) {
      pVVar5 = max0;
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (pVVar5,index,method_00);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (__return_storage_ptr__,index,fVar1,method);
    index = index + 1;
  } while (index < 3);
  return __return_storage_ptr__;
}


/* Vector3 GetMinVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMinVector
                    (Vector3 *__return_storage_ptr__,Vector3 *min0,Vector3 *min1,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  index = 0;
  method_00 = (MethodInfo *)min1;
  do {
    if (index == 0) {
      fVar1 = min1->x;
      fVar2 = min0->x;
    }
    else if (index == 1) {
      fVar1 = min1->y;
      fVar2 = min0->y;
    }
    else {
      if (index != 2) {
        uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar3);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,(MethodInfo *)0x0);
        uVar3 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this,uVar3);
        pcVar4 = (code *)swi(3);
        pVVar5 = (Vector3 *)(*pcVar4)();
        return pVVar5;
      }
      fVar1 = min1->z;
      fVar2 = min0->z;
    }
    pVVar5 = min1;
    if (fVar2 < fVar1) {
      pVVar5 = min0;
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (pVVar5,index,method_00);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (__return_storage_ptr__,index,fVar1,method);
    index = index + 1;
  } while (index < 3);
  return __return_storage_ptr__;
}


/* Vector3 GetNormal(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *pa,Vector3 *pb,Vector3 *pc,
                    MethodInfo *method)

{
  fVar1 = (pb->y - pa->y) * (pc->z - pa->z) - (pb->z - pa->z) * (pc->y - pa->y);
  fVar2 = (pb->z - pa->z) * (pc->x - pa->x) - (pc->z - pa->z) * (pb->x - pa->x);
  uStack_3 = CONCAT44(fVar2,fVar1);
  fVar4 = (pc->y - pa->y) * (pb->x - pa->x) - (pb->y - pa->y) * (pc->x - pa->x);
  fStack_5 = fVar4;
  fVar6 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar6) {
    fVar4 = fVar4 / fVar6;
    uVar7 = CONCAT44(fVar2 / fVar6,fVar1 / fVar6);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7._0_4_ = (pVVar8->zeroVector).x;
    uVar7._4_4_ = (pVVar8->zeroVector).y;
    fVar4 = (pVVar8->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)(int)uVar7;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion InertiaX(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaX
          (Quaternion *__return_storage_ptr__,Vector3 *eulerFrom,Vector3 *eulerTo,float speed,
          MethodInfo *method)

{
  fVar1 = _UNK_?;
  eulerFrom->y = 0.0;
  eulerFrom->z = 0.0;
  uStack_2._0_4_ = eulerFrom->x;
  uStack_2._4_4_ = eulerFrom->y;
  uStack_3 = CONCAT44(uStack_3._4_4_,eulerFrom->z * fVar1);
  uStack_4 = CONCAT44((float)uStack_2._4_4_ * fVar1,(float)(undefined4)uStack_2 * fVar1);
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_4,&uStack_5);
  eulerFrom->x = eulerTo->x;
  uVar10 = eulerFrom->x;
  uVar11 = eulerFrom->y;
  fStack_12 = eulerFrom->z * fVar1;
  uStack_2 = CONCAT44((float)uVar11 * fVar1,(float)uVar10 * fVar1);
  uStack_13 = 0;
  uStack_14 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_2,&uStack_13);
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  uStack_15 = (undefined4)uStack_5;
  uStack_16 = uStack_5._4_4_;
  uStack_17 = (undefined4)uStack_6;
  uStack_18 = uStack_6._4_4_;
  uStack_4 = uStack_13;
  uStack_3 = uStack_14;
  uStack_5 = 0;
  uStack_6 = 0;
  fVar1 = (float)(*pcRam_?)();
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_15,&uStack_4,fVar1 * speed,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion InertiaY(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaY
          (Quaternion *__return_storage_ptr__,Vector3 *eulerFrom,Vector3 *eulerTo,float speed,
          MethodInfo *method)

{
  fVar1 = _UNK_?;
  eulerFrom->x = 0.0;
  eulerFrom->z = 0.0;
  uStack_2._0_4_ = eulerFrom->x;
  uStack_2._4_4_ = eulerFrom->y;
  uStack_3 = CONCAT44(uStack_3._4_4_,eulerFrom->z * fVar1);
  uStack_4 = CONCAT44((float)uStack_2._4_4_ * fVar1,(float)(undefined4)uStack_2 * fVar1);
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_4,&uStack_5);
  eulerFrom->y = eulerTo->y;
  uVar10 = eulerFrom->x;
  uVar11 = eulerFrom->y;
  fStack_12 = eulerFrom->z * fVar1;
  uStack_2 = CONCAT44((float)uVar11 * fVar1,(float)uVar10 * fVar1);
  uStack_13 = 0;
  uStack_14 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_2,&uStack_13);
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  uStack_15 = (undefined4)uStack_5;
  uStack_16 = uStack_5._4_4_;
  uStack_17 = (undefined4)uStack_6;
  uStack_18 = uStack_6._4_4_;
  uStack_4 = uStack_13;
  uStack_3 = uStack_14;
  uStack_5 = 0;
  uStack_6 = 0;
  fVar1 = (float)(*pcRam_?)();
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&uStack_15,&uStack_4,fVar1 * speed,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* MathFunctions+IntersectResult Intersect(Vector2, Vector2, Vector2, Vector2, Vector2 ByRef) */

MathFunctions_IntersectResult__Enum
Assembly-CSharp.dll::MathFunctions::MathFunctions_Intersect
          (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,Vector2 *ptIntersection,MethodInfo *method)

{
  fStack_1 = p3.y;
  fStack_2 = p3.x;
  fStack_3 = p1.x;
  fStack_4 = p1.y;
  fStack_5 = p2.y;
  fStack_6 = p2.x;
  fStack_7 = p0.x;
  fStack_8 = p0.y;
  fVar9 = (fStack_3 - fStack_7) * (fStack_1 - fStack_5) -
          (fStack_4 - fStack_8) * (fStack_2 - fStack_6);
  fVar10 = (fStack_2 - fStack_6) * (fStack_8 - fStack_5) -
          (fStack_7 - fStack_6) * (fStack_1 - fStack_5);
  fVar11 = (fStack_8 - fStack_5) * (fStack_3 - fStack_7) -
          (fStack_4 - fStack_8) * (fStack_7 - fStack_6);
  if (fVar9 == 0.0) {
    if ((fVar10 == 0.0) && (fVar11 == 0.0)) {
      MVar12 = MathFunctions_IntersectResult__Enum_COINCIDENT;
    }
    else {
      MVar12 = MathFunctions_IntersectResult__Enum_PARALLEL;
    }
  }
  else {
    fVar10 = fVar10 / fVar9;
    if ((((fVar10 < 0.0) || (_UNK_? < fVar10)) || (fVar11 = fVar11 / fVar9, fVar11 < 0.0)) ||
       (_UNK_? < fVar11)) {
      MVar12 = MathFunctions_IntersectResult__Enum_NOT_INTERESECTING;
    }
    else {
      ptIntersection->x = (fStack_3 - fStack_7) * fVar10 + fStack_7;
      ptIntersection->y = (fStack_4 - fStack_8) * fVar10 + fStack_8;
      MVar12 = MathFunctions_IntersectResult__Enum_INTERESECTING;
    }
  }
  return MVar12;
}


/* Boolean IsCoincidentalLineSegmentsOverlapping(Vector2, Vector2, Vector2, Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsCoincidentalLineSegmentsOverlapping
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Single,4);
  fStack_2 = p0.x;
  fStack_3 = p0.y;
  fStack_4 = p2.x;
  fStack_5 = p2.y;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      fStack_6 = p3.x;
      *(float *)(lVar1 + 0x20) =
           (fStack_2 - fStack_4) * (fStack_2 - fStack_4) +
           (fStack_3 - fStack_5) * (fStack_3 - fStack_5);
      fStack_7 = p3.y;
      if (1 < *(uint *)(lVar1 + 0x18)) {
        fStack_8 = p1.x;
        fStack_9 = p1.y;
        *(float *)(lVar1 + 0x24) =
             (fStack_2 - fStack_6) * (fStack_2 - fStack_6) +
             (fStack_3 - fStack_7) * (fStack_3 - fStack_7);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(float *)(lVar1 + 0x28) =
               (fStack_9 - fStack_5) * (fStack_9 - fStack_5) +
               (fStack_8 - fStack_4) * (fStack_8 - fStack_4);
          if (3 < *(uint *)(lVar1 + 0x18)) {
            pfVar10 = (float *)(lVar1 + 0x20);
            fVar11 = 0.0;
            *(float *)(lVar1 + 0x2c) =
                 (fStack_9 - fStack_7) * (fStack_9 - fStack_7) +
                 (fStack_8 - fStack_6) * (fStack_8 - fStack_6);
            uVar12 = 0;
            while( true ) {
              if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar12) {
                return fVar11 < (fStack_5 - fStack_7) * (fStack_5 - fStack_7) +
                               (fStack_4 - fStack_6) * (fStack_4 - fStack_6) +
                               (fStack_3 - fStack_9) * (fStack_3 - fStack_9) +
                               (fStack_2 - fStack_8) * (fStack_2 - fStack_8);
              }
              if (*(uint *)(lVar1 + 0x18) <= uVar12) break;
              if (fVar11 < *pfVar10) {
                fVar11 = *pfVar10;
              }
              uVar12 = uVar12 + 1;
              pfVar10 = pfVar10 + 1;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    bVar14 = (*pcVar13)();
    return bVar14;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Boolean IsFloatValid(Single) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsFloatValid
               (float floatToValidate,MethodInfo *method)

{
  if (ABS(floatToValidate) == INFINITY) {
    return 0;
  }
  return (uint)ABS(floatToValidate) < 0x7f800001;
}


/* Int32 IsLineSegmentIntersectingShape(Vector2, Vector2, List`1[UnityEngine.Vector2], Boolean) */

int32_t Assembly-CSharp.dll::MathFunctions::MathFunctions_IsLineSegmentIntersectingShape
                  (Vector2 p0,Vector2 p1,List_1_UnityEngine_Vector2_ *points,bool isOpen,
                  MethodInfo *method)

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
  fVar1 = _UNK_?;
  dVar2 = _UNK_?;
  if (points == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  iVar5 = (points->fields)._size;
  if (isOpen != 0) {
    iVar5 = iVar5 + -1;
  }
  iVar6 = 0;
  VStack_7.x = -1.0;
  VStack_7.y = -1.0;
  if (0 < iVar5) {
    do {
      uVar8 = iVar6 % (points->fields)._size;
      if ((uint)(points->fields)._size <= uVar8) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      pVVar9 = (points->fields)._items;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar8) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      uVar10 = (iVar6 + 1) % (points->fields)._size;
      if ((uint)(points->fields)._size <= uVar10) goto code_?;
      if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar10) goto code_?;
      p3.y = pVVar9->vector[(int)uVar10].y;
      p3.x = pVVar9->vector[(int)uVar10].x;
      p2.y = pVVar9->vector[(int)uVar8].y;
      p2.x = pVVar9->vector[(int)uVar8].x;
      bVar11 = MathFunctions_DoLinesIntersect(p0,p1,p2,p3,&VStack_7,(MethodInfo *)0x0);
      fVar12 = VStack_7.y;
      fVar13 = VStack_7.x;
      if (bVar11 != 0) {
        if ((VStack_7.x == fVar1) && (VStack_7.y == fVar1)) {
          return iVar6;
        }
        uVar14 = FUN_?(points,(points->fields)._size + -1);
        uStack_15._0_4_ = (float)uVar14;
        fVar13 = fVar13 - (float)uStack_15;
        uStack_15._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
        fVar12 = fVar12 - uStack_15._4_4_;
        uStack_15 = uVar14;
        if (dVar2 < (double)(fVar12 * fVar12 + fVar13 * fVar13)) {
          return iVar6;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return -1;
}


/* Boolean IsPointInShape(IList`1[UnityEngine.Vector2], Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsPointInShape
               (IList_1_UnityEngine_Vector2_ *shapePoints,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = false;
  if (shapePoints == (IList_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = FUN_?(0,TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>,
                        shapePoints);
  fStack_5 = point.y;
  fStack_6 = point.x;
  uVar7 = 0;
  uVar8 = iVar4 - 1;
  do {
    uVar9 = uVar7;
    pIVar10 = shapePoints->klass;
    uVar11 = 0;
    uVar12._0_1_ = (pIVar10->_1).rank;
    uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar12 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>
           ) {
          pVVar13 = &(pIVar10->vtable).get_Item + pIVar10->interfaceOffsets[uVar11].offset;
          goto code_?;
        }
        uVar14 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar14;
      } while (uVar14 < uVar12);
    }
    pVVar13 = (VirtualInvokeData *)
             FUN_?(shapePoints,
                           TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>
                           ,0);
code_?:
    iVar4 = (*pVVar13->methodPtr)(shapePoints,pVVar13->method);
    if (iVar4 <= (int)uVar9) {
      return bVar1;
    }
    pIVar10 = shapePoints->klass;
    uVar11 = 0;
    uVar14._0_1_ = (pIVar10->_1).rank;
    uVar14._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar14 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>) {
          pVVar13 = &(pIVar10->vtable).get_Item + pIVar10->interfaceOffsets[uVar11].offset;
          goto code_?;
        }
        uVar12 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
      } while (uVar12 < uVar14);
    }
    pVVar13 = (VirtualInvokeData *)
             FUN_?(shapePoints,
                           TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,0);
code_?:
    (*pVVar13->methodPtr)(shapePoints,(ulonglong)uVar9,pVVar13->method);
    if (fStack_5 < extraout_var) {
code_?:
      FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                    shapePoints,uVar8);
      if (extraout_var_01 <= fStack_5) {
        FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,uVar9);
        if (fStack_5 < extraout_var_02) goto code_?;
      }
    }
    else {
      FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                    shapePoints,uVar8);
      if (extraout_var_00 <= fStack_5) goto code_?;
code_?:
      fVar15 = (float)FUN_?(0,
                                   TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                   ,shapePoints,uVar8);
      fVar16 = (float)FUN_?(0,
                                   TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                   ,shapePoints,uVar9);
      FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                    shapePoints,uVar9);
      FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                    shapePoints,uVar8);
      FUN_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                    shapePoints,uVar9);
      fVar17 = (float)FUN_?(0,
                                   TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                   ,shapePoints,uVar9);
      if (fStack_6 <
          ((fVar15 - fVar16) * (fStack_5 - extraout_var_03)) / (extraout_var_04 - extraout_var_05) +
          fVar17) {
        bVar1 = bVar1 == false;
      }
    }
    uVar7 = uVar9 + 1;
    uVar8 = uVar9;
  } while( true );
}


/* Boolean IsQuaternionFloatsValid(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsQuaternionFloatsValid
               (Quaternion *quaternion,MethodInfo *method)

{
  if (((((uint)ABS(quaternion->x) < 0x7f800001) && ((uint)ABS(quaternion->y) < 0x7f800001)) &&
      ((uint)ABS(quaternion->z) < 0x7f800001)) && ((uint)ABS(quaternion->w) < 0x7f800001)) {
    if (((ABS(quaternion->x) != INFINITY) && (ABS(quaternion->y) != INFINITY)) &&
       (ABS(quaternion->z) != INFINITY)) {
      return ABS(quaternion->w) != INFINITY;
    }
  }
  return 0;
}


/* Boolean IsVectorFloatsValid(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsVectorFloatsValid
               (Vector3 *vector,MethodInfo *method)

{
  uVar1 = vector->x;
  uVar2 = vector->y;
  if (((((uVar1 & 0x7fffffff) < 0x7f800001) && ((uVar2 & 0x7fffffff) < 0x7f800001)) &&
      ((uint)ABS(vector->z) < 0x7f800001)) &&
     (((uVar1 & 0x7fffffff) != 0x7f800000 && ((uVar2 & 0x7fffffff) != 0x7f800000)))) {
    return ABS(vector->z) != INFINITY;
  }
  return 0;
}


/* Boolean LineFacet(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_LineFacet
               (Vector3 *p1,Vector3 *p2,Vector3 *pa,Vector3 *pb,Vector3 *pc,Vector3 *p,
               MethodInfo *method)

{
  method_00 = (MethodInfo *)p2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (pb->y - pa->y) * (pc->z - pa->z) - (pb->z - pa->z) * (pc->y - pa->y);
  uVar1._4_4_ = (pb->z - pa->z) * (pc->x - pa->x) - (pc->z - pa->z) * (pb->x - pa->x);
  aVStack_2[0].y = uVar1._4_4_;
  aVStack_2[0].x = (float)uVar1;
  fVar3 = (pc->y - pa->y) * (pb->x - pa->x) - (pb->y - pa->y) * (pc->x - pa->x);
  aVStack_2[0].z = fVar3;
  fVar4 = (float)FUN_?(aVStack_2);
  if (_UNK_? < fVar4) {
    uVar1._4_4_ = uVar1._4_4_ / fVar4;
    uVar1._0_4_ = (float)uVar1 / fVar4;
    fVar3 = fVar3 / fVar4;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar1._0_4_ = (pVVar5->zeroVector).x;
    uVar1._4_4_ = (pVVar5->zeroVector).y;
    fVar3 = (pVVar5->zeroVector).z;
    aVStack_2[0]._0_8_ = uVar1;
  }
  fVar4 = (p2->y - p1->y) * uVar1._4_4_ + (p2->x - p1->x) * (float)uVar1 + (p2->z - p1->z) * fVar3;
  if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)((uint)fVar4 & _UNK_?))
  {
    fVar4 = (float)((uint)((((float)((uint)(float)uVar1 ^ _UNK_?) * pa->x -
                            uVar1._4_4_ * pa->y) - fVar3 * pa->z) + (float)uVar1 * p1->x +
                           uVar1._4_4_ * p1->y + fVar3 * p1->z) ^ _UNK_?) / fVar4;
    VStack_6.x = (p2->x - p1->x) * fVar4 + p1->x;
    VStack_6.y = (p2->y - p1->y) * fVar4 + p1->y;
    VStack_6.z = (p2->z - p1->z) * fVar4 + p1->z;
    p->x = VStack_6.x;
    p->y = VStack_6.y;
    p->z = VStack_6.z;
    if ((0.0 <= fVar4) && (fVar4 <= _UNK_?)) {
      VStack_6.x = pa->x - VStack_6.x;
      VStack_6.y = pa->y - VStack_6.y;
      VStack_6.z = pa->z - VStack_6.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&VStack_6,method_00);
      VStack_7.x = pb->x - p->x;
      VStack_7.y = pb->y - p->y;
      VStack_7.z = pb->z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&VStack_7,method_00);
      aVStack_2[0].x = pc->x - p->x;
      aVStack_2[0].y = pc->y - p->y;
      aVStack_2[0].z = pc->z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(aVStack_2,method_00);
      uVar1._4_4_ = VStack_7.z;
      uVar1._0_4_ = VStack_7.y;
      fVar3 = VStack_7.x;
      fVar8 = (float)func_?(VStack_7.y * VStack_6.y + VStack_7.x * VStack_6.x +
                                         VStack_7.z * VStack_6.z);
      fVar9 = aVStack_2[0].z;
      fVar10 = aVStack_2[0].y;
      fVar4 = aVStack_2[0].x;
      fVar3 = (float)func_?(aVStack_2[0].y * (float)uVar1 + aVStack_2[0].x * fVar3 +
                                         aVStack_2[0].z * uVar1._4_4_);
      uVar1._0_4_ = (float)func_?(fVar10 * VStack_6.y + fVar4 * VStack_6.x +
                                               fVar9 * VStack_6.z);
      return (float)((uint)((fVar8 + fVar3 + (float)uVar1) * _UNK_? - _UNK_?) &
                    _UNK_?) <= _UNK_?;
    }
  }
  return 0;
}


/* Boolean LineFacetCollision(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 ByRef,
   Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_LineFacetCollision
               (Vector3 *p1,Vector3 *p2,Vector3 *pa,Vector3 *pb,Vector3 *pc,Vector3 *lineDir,
               Vector3 *p,Vector3 *n,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = pa->z;
  VStack_2.x = pa->x;
  VStack_2.y = pa->y;
  VStack_3.x = pb->x;
  VStack_3.y = pb->y;
  uVar4 = pc->x;
  uVar5 = pc->y;
  fVar6 = (pc->z - fVar1) * (VStack_3.y - VStack_2.y) -
           ((float)uVar5 - VStack_2.y) * (pb->z - fVar1);
  fVar7 = ((float)uVar5 - VStack_2.y) * (VStack_3.x - VStack_2.x) -
           (VStack_3.y - VStack_2.y) * ((float)uVar4 - VStack_2.x);
  fVar8 = ((float)uVar4 - VStack_2.x) * (pb->z - fVar1) -
           (pc->z - fVar1) * (VStack_3.x - VStack_2.x);
  aVStack_9[0].y = fVar8;
  aVStack_9[0].x = fVar6;
  aVStack_9[0].z = fVar7;
  fVar1 = (float)FUN_?(aVStack_9);
  if (_UNK_? < fVar1) {
    fVar7 = fVar7 / fVar1;
    uVar10 = CONCAT44(fVar8 / fVar1,fVar6 / fVar1);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10._0_4_ = (pVVar11->zeroVector).x;
    uVar10._4_4_ = (pVVar11->zeroVector).y;
    fVar7 = (pVVar11->zeroVector).z;
  }
  n->x = (float)(int)uVar10;
  n->y = (float)(int)((ulonglong)uVar10 >> 0x20);
  uVar12 = lineDir->x;
  uVar13 = lineDir->y;
  n->z = fVar7;
  aVStack_9[0].y = (float)((ulonglong)uVar10 >> 0x20);
  aVStack_9[0].x = (float)uVar10;
  if ((aVStack_9[0].y * (float)uVar13 + aVStack_9[0].x * (float)uVar12 + fVar7 * lineDir->z <= 0.0)
     && (fVar1 = (p2->y - p1->y) * n->y + (p2->x - p1->x) * n->x + (p2->z - p1->z) * n->z,
        TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
        (float)((uint)fVar1 & _UNK_?))) {
    fVar1 = (float)((uint)((((float)((uint)n->x ^ _UNK_?) * pa->x - pa->y * n->y) -
                           pa->z * n->z) + n->x * p1->x + p1->y * n->y + p1->z * n->z) ^
                   _UNK_?) / fVar1;
    aVStack_9[0].x = (p2->x - p1->x) * fVar1 + p1->x;
    aVStack_9[0].y = (p2->y - p1->y) * fVar1 + p1->y;
    aVStack_9[0].z = (p2->z - p1->z) * fVar1 + p1->z;
    p->x = aVStack_9[0].x;
    p->y = aVStack_9[0].y;
    p->z = aVStack_9[0].z;
    if ((0.0 <= fVar1) && (fVar1 <= _UNK_?)) {
      aVStack_9[0].x = pa->x - aVStack_9[0].x;
      aVStack_9[0].y = pa->y - aVStack_9[0].y;
      aVStack_9[0].z = pa->z - aVStack_9[0].z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (aVStack_9,(MethodInfo *)n);
      VStack_2.x = pb->x - p->x;
      VStack_2.y = pb->y - p->y;
      VStack_2.z = pb->z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_2,(MethodInfo *)n);
      VStack_3.x = pc->x - p->x;
      VStack_3.y = pc->y - p->y;
      VStack_3.z = pc->z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_3,(MethodInfo *)n);
      fVar14 = VStack_2.z;
      fVar15 = VStack_2.y;
      fVar8 = VStack_2.x;
      fVar6 = VStack_3.z;
      fVar7 = VStack_3.y;
      fVar1 = VStack_3.x;
      fVar16 = (float)func_?(VStack_3.y * VStack_2.y + VStack_3.x * VStack_2.x +
                                         VStack_3.z * VStack_2.z);
      fVar8 = (float)func_?(fVar15 * aVStack_9[0].y + fVar8 * aVStack_9[0].x +
                                          fVar14 * aVStack_9[0].z);
      fVar1 = (float)func_?(fVar7 * aVStack_9[0].y + fVar1 * aVStack_9[0].x +
                                         fVar6 * aVStack_9[0].z);
      return (float)((uint)((fVar16 + fVar8 + fVar1) * _UNK_? - _UNK_?) &
                    _UNK_?) <= _UNK_?;
    }
  }
  return 0;
}


/* Vector3 MultiplyVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_MultiplyVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  fVar1 = vec0->y;
  fVar2 = vec1->y;
  __return_storage_ptr__->x = vec0->x * vec1->x;
  fVar3 = vec0->z;
  fVar4 = vec1->z;
  __return_storage_ptr__->y = fVar1 * fVar2;
  __return_storage_ptr__->z = fVar3 * fVar4;
  return __return_storage_ptr__;
}


/* Single NormalizeAngle(Single) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_NormalizeAngle
                (float degrees,MethodInfo *method)

{
  fVar1 = (float)FUN_?(degrees,_UNK_?);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + _UNK_?;
  }
  return fVar1;
}


/* Single Pitch(Vector3, Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Pitch
                (Vector3 *dir,Vector3 *planeNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = dir->x;
  uVar3 = dir->y;
  fVar4 = (float)(uVar2 ^ _UNK_?);
  fVar5 = (float)(uVar3 ^ _UNK_?);
  fVar6 = (float)((uint)dir->z ^ _UNK_?);
  uVar7 = (pVVar1->upVector).x;
  uVar8 = (pVVar1->upVector).y;
  uVar9 = planeNormal->x;
  uVar10 = planeNormal->y;
  fVar6 = (float)func_?((fVar6 * (float)uVar8 - fVar5 * (pVVar1->upVector).z) *
                                     (float)uVar9 +
                                     (fVar4 * (pVVar1->upVector).z - fVar6 * (float)uVar7) *
                                     (float)uVar10 +
                                     (fVar5 * (float)uVar7 - fVar4 * (float)uVar8) * planeNormal->z
                                     ,fVar5 * (float)uVar8 + fVar4 * (float)uVar7 +
                                      fVar6 * (pVVar1->upVector).z);
  return (fVar6 + _UNK_?) * _UNK_?;
}


/* Single Pow2(Single) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Pow2(float val,MethodInfo *method)

{
  return val * val;
}


/* Quaternion QuaternionFromAngleAndAxis(Single, Vector3) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
          (Quaternion *__return_storage_ptr__,float angle,Vector3 *AxisVector,MethodInfo *method)

{
  uStack_1._0_4_ = AxisVector->x;
  uStack_1._4_4_ = AxisVector->y;
  fStack_2 = AxisVector->z;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    pQVar7 = (Quaternion *)(*pcVar5)();
    return pQVar7;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(angle,&uStack_1,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Boolean QuaternionIsFinite(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionIsFinite
               (Quaternion *quaternion,MethodInfo *method)

{
  if (((ABS(quaternion->x) != INFINITY) && (ABS(quaternion->y) != INFINITY)) &&
     (ABS(quaternion->z) != INFINITY)) {
    return ABS(quaternion->w) != INFINITY;
  }
  return 0;
}


/* Boolean QuaternionIsNan(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionIsNan
               (Quaternion *quaternion,MethodInfo *method)

{
  if ((((uint)ABS(quaternion->x) < 0x7f800001) && ((uint)ABS(quaternion->y) < 0x7f800001)) &&
     ((uint)ABS(quaternion->z) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(quaternion->w);
  }
  return 1;
}


/* Vector3 RoundVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_RoundVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vector,int32_t decimals,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar1 = (double)FUN_?((double)vector->x,decimals);
  dVar2 = (double)FUN_?((double)vector->y,decimals);
  dVar3 = (double)FUN_?((double)vector->z,decimals);
  vector->z = (float)dVar3;
  vector->x = (float)dVar1;
  vector->y = (float)dVar2;
  fVar4 = vector->z;
  __return_storage_ptr__->x = (float)dVar1;
  __return_storage_ptr__->y = (float)dVar2;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Single SignedAngle(Vector2, Vector2) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle
                (Vector2 v1,Vector2 v2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = v2.x;
  fStackX_24 = v1.y;
  fStack_2 = v2.y;
  fStackX_20 = v1.x;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar3 = (double)func_?((double)(fStack_2 * fStackX_20 - fStack_1 * fStackX_24),
                                      (double)(fStackX_24 * fStack_2 + fStack_1 * fStackX_20));
  return (float)dVar3;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle_1
                (Vector3 *v1,Vector3 *v2,Vector3 *normal,MethodInfo *method)

{
  uVar1 = v2->x;
  uVar2 = v2->y;
  uVar3 = v1->x;
  uVar4 = v1->y;
  uVar5 = normal->x;
  uVar6 = normal->y;
  auVar7._16_48_ = in_ZMM6._16_48_;
  auVar8._16_48_ = in_ZMM3._16_48_;
  auVar9._4_4_ = uVar2;
  auVar9._0_4_ = uVar2;
  auVar9._8_4_ = uVar2;
  auVar9._12_4_ = uVar2;
  auVar8._0_16_ = ZEXT416((uint)v2->z);
  auVar10._4_60_ = auVar8._4_60_;
  auVar10._0_4_ = v2->z * v1->z;
  fVar11 = (v2->z * (float)uVar4 - (float)uVar2 * v1->z) * (float)uVar5 +
           ((float)uVar1 * v1->z - v2->z * (float)uVar3) * (float)uVar6 +
           ((float)uVar2 * (float)uVar3 - (float)uVar1 * (float)uVar4) * normal->z;
  fVar12 = (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + auVar10._0_4_;
  if (((byte)uRam_? & 3) == 3) {
    auVar13._0_8_ = (double)fVar12;
    auVar13._8_8_ = auVar9._8_8_;
    auVar7 = ZEXT1664(auVar13);
    auVar14._0_8_ = (double)fVar11;
    auVar8 = ZEXT864((ulonglong)auVar14._0_8_);
    auVar14._8_8_ = 0;
    iVar15 = ((uint)((ulonglong)auVar14._0_8_ >> 0x34) & 0x7ff) -
             ((uint)((ulonglong)auVar13._0_8_ >> 0x34) & 0x7ff);
    auVar16._0_8_ = ABS(auVar13._0_8_);
    dVar17 = ABS(auVar14._0_8_);
    if ((0x7ff0000000000000 < (ulonglong)auVar16._0_8_) ||
       (fVar12 = fVar11, 0x7ff0000000000000 < (ulonglong)dVar17)) {
      fVar12 = (float)func_?(0,fVar12,0,auVar10._0_8_,
                                          CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da),
                                          CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc));
      return fVar12;
    }
    if (dVar17 == 0.0) {
      if (-1 < (longlong)auVar13._0_8_) {
        return fVar11;
      }
    }
    else {
      auVar18 = auVar14;
      auVar9 = auVar13;
      if (auVar16._0_8_ == 0.0) {
        func_?();
        auVar9 = auVar7._0_16_;
        auVar18 = auVar8._0_16_;
        if ((longlong)auVar14._0_8_ < 0) {
          return _UNK_?;
        }
      }
      if (0x1a < iVar15) {
        func_?(0x20);
        if ((longlong)auVar14._0_8_ < 0) {
          return _UNK_?;
        }
        return _UNK_?;
      }
      dVar19 = auVar18._0_8_;
      dVar20 = auVar9._0_8_;
      if ((iVar15 < -0xd) && (-1 < (longlong)auVar13._0_8_)) {
        if (-0x97 < iVar15) {
          if (iVar15 < -0x7e) {
            dVar20 = (dVar19 * 1.2676506002282294e+30) / dVar20;
            uVar21 = (ulonglong)ABS(dVar20) >> 0x34;
            uVar22 = (uint)((ulonglong)ABS(dVar20) >> 0x34);
            if (uVar22 < 0x65) {
              if ((int)(0x65 - uVar22) < 0x37) {
                uVar21 = ((ulonglong)dVar20 & 0x1fffffffffffff | 0x10000000000000) >>
                         (100 - uVar21 & 0x3f);
                uVar21 = (uVar21 >> 1) + (ulonglong)((uint)uVar21 & 1);
              }
              else {
                uVar21 = 0;
              }
            }
            else {
              uVar21 = uVar21 - 100 << 0x34 | (ulonglong)dVar20 & 0xfffffffffffff;
            }
            dVar17 = (double)((ulonglong)dVar20 & 0x8000000000000000 | uVar21);
            if ((uVar21 & 0x7ff0000000000000) == 0) {
              func_?(0x30);
            }
            return (float)dVar17;
          }
          return (float)(dVar19 / dVar20);
        }
        func_?(0x30);
        if ((longlong)auVar14._0_8_ < 0) {
          return __01D2661CD3F3DAAF31E7896803487B4AF8D684212C9D4A34633EF34B49C7DBA1_Field;
        }
        return 0.0;
      }
      if ((-0x1b < iVar15) || (-1 < (longlong)auVar13._0_8_)) {
        if ((dVar17 != INFINITY) || (auVar16._0_8_ != INFINITY)) {
          auVar23 = auVar9;
          if ((longlong)auVar13._0_8_ < 0) {
            auVar23._0_8_ = (ulonglong)dVar20 ^ _UNK_?;
            auVar23._8_8_ = auVar9._8_8_;
          }
          if ((longlong)auVar14._0_8_ < 0) {
            auVar18._0_8_ = (ulonglong)dVar19 ^ _UNK_?;
          }
          bVar24 = auVar23._0_8_ < auVar18._0_8_;
          auVar25._0_8_ = -(ulonglong)!bVar24;
          auVar25._8_8_ = 0xffffffffffffffff;
          auVar9 = vblendvpd_avx(auVar23,auVar18,auVar25);
          auVar26._0_8_ = -(ulonglong)!bVar24;
          auVar26._8_8_ = 0xffffffffffffffff;
          auVar18 = vblendvpd_avx(auVar18,auVar23,auVar26);
          auVar16._0_8_ = auVar18._0_8_;
          dVar20 = auVar9._0_8_;
          dVar17 = dVar20 / auVar16._0_8_;
          if (dVar17 <= _UNK_?) {
            if (_UNK_? <= dVar17) {
              auVar16._0_8_ = dVar17 * dVar17;
              dVar17 = -(auVar16._0_8_ * dVar17 *
                        (-(auVar16._0_8_ * (-(auVar16._0_8_ * _UNK_?) + _UNK_?)) +
                        _UNK_?)) + dVar17;
            }
          }
          else {
            uVar22 = (uint)(dVar17 * _UNK_? + _UNK_?);
            dVar17 = (double)uVar22;
            dVar17 = (dVar20 * _UNK_? - auVar16._0_8_ * dVar17) /
                     (dVar20 * dVar17 + auVar16._0_8_ * _UNK_?);
            dVar17 = -(dVar17 * dVar17 * dVar17 * _UNK_?) +
                     dVar17 + *(double *)(&UNK_? + (ulonglong)(uVar22 - 0x10) * 8);
          }
          if (bVar24) {
            dVar17 = _UNK_? - dVar17;
          }
          if ((longlong)auVar13._0_8_ < 0) {
            dVar17 = _UNK_? - dVar17;
          }
          if ((longlong)auVar14._0_8_ < 0) {
            dVar17 = (double)((ulonglong)dVar17 ^ _UNK_?);
          }
          return (float)dVar17;
        }
        func_?(0x20);
        if (-1 < (longlong)auVar13._0_8_) {
          if (-1 < (longlong)auVar14._0_8_) {
            return _UNK_?;
          }
          return _UNK_?;
        }
        if (-1 < (longlong)auVar14._0_8_) {
          return _UNK_?;
        }
        return _UNK_?;
      }
    }
    func_?(0x20);
    fVar12 = _UNK_?;
    if ((longlong)auVar14._0_8_ < 0) {
      fVar12 = _UNK_?;
    }
    return fVar12;
  }
  auVar7._0_16_ = ZEXT816(0);
  dVar19 = (double)fVar12;
  auVar16._8_56_ = auVar7._8_56_;
  auVar16._0_8_ = (double)fVar11;
  iVar15 = ((uint)((ulonglong)auVar16._0_8_ >> 0x34) & 0x7ff) -
           ((uint)((ulonglong)dVar19 >> 0x34) & 0x7ff);
  dVar20 = ABS(dVar19);
  dVar17 = ABS(auVar16._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar20) ||
     (fVar12 = fVar11, 0x7ff0000000000000 < (ulonglong)dVar17)) {
    fVar12 = (float)func_?(fVar12);
    return fVar12;
  }
  if (dVar17 == 0.0) {
    if ((longlong)dVar19 < 0) {
joined_?:
      if (-1 < (longlong)auVar16._0_8_) {
        func_?(0x20);
        return _UNK_?;
      }
      func_?(0x20);
      return _UNK_?;
    }
code_?:
    return (float)auVar16._0_8_;
  }
  auVar8 = auVar16;
  dVar27 = dVar19;
  if (dVar20 == 0.0) {
    if ((longlong)auVar16._0_8_ < 0) goto code_?;
    func_?(0x20);
  }
  dVar28 = auVar8._0_8_;
  if (0x1a < iVar15) {
    if (-1 < (longlong)auVar16._0_8_) {
      func_?(0x20);
      return _UNK_?;
    }
code_?:
    func_?(0x20);
    return _UNK_?;
  }
  auVar29._16_48_ = auVar8._16_48_;
  if ((iVar15 < -0xd) && (-1 < (longlong)dVar19)) {
    if (iVar15 < -0x96) {
      func_?(0x30);
      if ((longlong)auVar16._0_8_ < 0) {
        return __01D2661CD3F3DAAF31E7896803487B4AF8D684212C9D4A34633EF34B49C7DBA1_Field;
      }
      return 0.0;
    }
    if (-0x7f < iVar15) {
      return (float)(dVar28 / dVar27);
    }
    dVar27 = (dVar28 * 1.2676506002282294e+30) / dVar27;
    uVar21 = (ulonglong)ABS(dVar27) >> 0x34;
    uVar22 = (uint)((ulonglong)ABS(dVar27) >> 0x34);
    if (uVar22 < 0x65) {
      if ((int)(0x65 - uVar22) < 0x37) {
        uVar21 = ((ulonglong)dVar27 & 0x1fffffffffffff | 0x10000000000000) >>
                 (100U - (char)uVar21 & 0x3f);
        uVar21 = (uVar21 >> 1) + (ulonglong)((uint)uVar21 & 1);
      }
      else {
        uVar21 = 0;
      }
    }
    else {
      uVar21 = uVar21 - 100 << 0x34 | (ulonglong)dVar27 & 0xfffffffffffff;
    }
    auVar16._0_8_ = (double)((ulonglong)dVar27 & 0x8000000000000000 | uVar21);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = auVar16._0_8_;
    if ((uVar21 & 0x7ff0000000000000) == 0) {
      func_?(0x30);
      auVar16._0_8_ = auVar29._0_8_;
    }
    goto code_?;
  }
  if ((iVar15 < -0x1a) && ((longlong)dVar19 < 0)) goto joined_?;
  if ((dVar17 == INFINITY) && (dVar20 == INFINITY)) {
    func_?(0x20);
    if (-1 < (longlong)dVar19) {
      if (-1 < (longlong)auVar16._0_8_) {
        return _UNK_?;
      }
      return _UNK_?;
    }
    if (-1 < (longlong)auVar16._0_8_) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  uVar22 = (uint)_UNK_?;
  uVar30 = (uint)(_UNK_? >> 0x20);
  if ((longlong)dVar19 < 0) {
    dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^ uVar30,SUB84(dVar27,0) ^ uVar22);
  }
  if ((longlong)auVar16._0_8_ < 0) {
    dVar28 = (double)CONCAT44(auVar8._4_4_ ^ uVar30,auVar8._0_4_ ^ uVar22);
  }
  dVar17 = dVar27;
  dVar20 = dVar28;
  if (dVar27 < dVar28) {
    dVar17 = dVar28;
    dVar20 = dVar27;
  }
  dVar31 = dVar20 / dVar17;
  if (dVar31 <= _UNK_?) {
    if (dVar31 < _UNK_?) goto code_?;
    dVar17 = dVar31 * dVar31;
    dVar17 = (_UNK_? - (_UNK_? - dVar17 * _UNK_?) * dVar17) *
             dVar17 * dVar31;
  }
  else {
    uVar32 = (uint)(dVar31 * _UNK_? + _UNK_?);
    dVar31 = (double)uVar32;
    dVar17 = (dVar20 * _UNK_? - dVar31 * dVar17) /
             (dVar31 * dVar20 + dVar17 * _UNK_?);
    dVar31 = dVar17 + *(double *)(&UNK_? + (ulonglong)(uVar32 - 0x10) * 8);
    dVar17 = dVar17 * dVar17 * dVar17 * _UNK_?;
  }
  dVar31 = dVar31 - dVar17;
code_?:
  if (dVar27 < dVar28) {
    dVar31 = _UNK_? - dVar31;
  }
  if ((longlong)dVar19 < 0) {
    dVar31 = _UNK_? - dVar31;
  }
  if ((longlong)auVar16._0_8_ < 0) {
    dVar31 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) ^ uVar30,SUB84(dVar31,0) ^ uVar22);
  }
  return (float)dVar31;
}


/* Double SignedDistanceTo(Plane ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo
                 (Plane *plane,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = (plane->m_Normal).x;
  uVar4 = (plane->m_Normal).y;
  return (double)((float)((uint)((float)uVar4 * planeOrigin->y + (float)uVar3 * planeOrigin->x +
                                (plane->m_Normal).z * planeOrigin->z) ^ _UNK_?) +
                 (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 +
                 point->z * (plane->m_Normal).z);
}


/* Double SignedDistanceTo(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo_1
                 (Vector3 *planeNormal,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = planeNormal->x;
  uVar4 = planeNormal->y;
  return (double)((float)((uint)(planeNormal->y * planeOrigin->y + planeNormal->x * planeOrigin->x +
                                planeNormal->z * planeOrigin->z) ^ _UNK_?) +
                 (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 +
                 point->z * planeNormal->z);
}


/* Single SignedYawFromLocalDirection(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedYawFromLocalDirection
                (Vector3 *localDirection,MethodInfo *method)

{
  fVar1 = localDirection->x;
  fVar2 = localDirection->z;
  uStack_3 = (ulonglong)(uint)fVar1;
  fStack_4 = fVar2;
  fVar5 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar5) {
    fVar2 = fVar2 / fVar5;
    uStack_3 = CONCAT44(0.0 / fVar5,fVar1 / fVar5);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar6->zeroVector).x;
    uStack_3._4_4_ = (pVVar6->zeroVector).y;
    fVar2 = (pVVar6->zeroVector).z;
  }
  uVar7 = uStack_3;
  fVar1 = (float)uStack_3;
  fVar5 = uStack_3._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar6->forwardVector).x;
  uStack_8._4_4_ = (pVVar6->forwardVector).y;
  fStack_9 = (pVVar6->forwardVector).z;
  uStack_3 = uVar7;
  fStack_4 = fVar2;
  fVar10 = (float)FUN_?(&uStack_8,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar6->rightVector).x;
  uVar12 = (pVVar6->rightVector).y;
  if (fVar5 * (float)uVar12 + fVar1 * (float)uVar11 + fVar2 * (pVVar6->rightVector).z < 0.0) {
    fVar10 = (float)((uint)fVar10 ^ _UNK_?);
  }
  return fVar10;
}


/* Single SmoothInverseLerp(Single, Single, Single) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SmoothInverseLerp
                (float a,float b,float value,MethodInfo *method)

{
  if ((a == b) || (fVar1 = (value - a) / (b - a), fVar1 < 0.0)) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  fVar1 = fVar1 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                  ._0_4_ * fVar1 * fVar1 + fVar1 * _UNK_? * fVar1;
  if ((a == b) || (fVar1 = (((_UNK_? - fVar1) * a + fVar1 * b) - a) / (b - a), fVar1 < 0.0))
  {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    return _UNK_?;
  }
  return fVar1;
}


/* Single[] ToFloatArray(Vector3) */

Single__Array *
Assembly-CSharp.dll::MathFunctions::MathFunctions_ToFloatArray(Vector3 *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)FUN_?(TypeInfo__System__Single,3);
  if (pSVar1 != (Single__Array *)0x0) {
    if ((((int)pSVar1->max_length != 0) && (pSVar1->vector[0] = v->x, 1 < (uint)pSVar1->max_length))
       && (pSVar1->vector[1] = v->y, 2 < (uint)pSVar1->max_length)) {
      pSVar1->vector[2] = v->z;
      return pSVar1;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar1 = (Single__Array *)(*pcVar2)();
    return pSVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (Single__Array *)(*pcVar2)();
  return pSVar1;
}


/* IntVector ToIntVector(Vector3) */

IntVector *
Assembly-CSharp.dll::MathFunctions::MathFunctions_ToIntVector
          (IntVector *__return_storage_ptr__,Vector3 *v,MethodInfo *method)

{
  __return_storage_ptr__->x = (int16_t)(int)v->x;
  __return_storage_ptr__->y = (int16_t)(int)v->y;
  __return_storage_ptr__->z = (int16_t)(int)v->z;
  return __return_storage_ptr__;
}


/* Double Truncate(Double, Int32) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_Truncate
                 (double number,int32_t digits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar1 = mscorlib.dll::System::Math::Math_Pow(_UNK_?,(double)digits,(MethodInfo *)0x0);
  return (double)(int)(dVar1 * number) / dVar1;
}


/* Vector3 TruncateVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_TruncateVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vector,int32_t digits,
                    MethodInfo *method)

{
  dVar1 = MathFunctions_Truncate((double)vector->x,digits,(MethodInfo *)0x0);
  dVar2 = MathFunctions_Truncate((double)vector->y,digits,(MethodInfo *)0x0);
  dVar3 = MathFunctions_Truncate((double)vector->z,digits,(MethodInfo *)0x0);
  vector->z = (float)dVar3;
  __return_storage_ptr__->x = (float)dVar1;
  __return_storage_ptr__->y = (float)dVar2;
  vector->x = (float)dVar1;
  vector->y = (float)dVar2;
  __return_storage_ptr__->z = vector->z;
  return __return_storage_ptr__;
}


/* Void Vector2ToVector3(Vector2 ByRef, Vector3 ByRef, Int32, Single) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector2ToVector3
               (Vector2 *from,Vector3 *to,int32_t addAxis,float addValue,MethodInfo *method)

{
  index_00 = 0;
  index = 0;
  iVar1 = addAxis;
  do {
    if (index == addAxis) {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(to,index,addValue,in_R9);
    }
    else {
      value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_Item
                        (from,index_00,(MethodInfo *)CONCAT44(in_register_00000084,iVar1));
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(to,index,value,in_R9);
      index_00 = index_00 + 1;
    }
    index = index + 1;
  } while (index < 3);
  if (addAxis == 2) {
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(to,2,addValue,in_R9);
  }
  return;
}


/* Void Vector3ToVector2(Vector3 ByRef, Vector2 ByRef, Int32) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector3ToVector2
               (Vector3 *from,Vector2 *to,int32_t ignoreAxis,MethodInfo *method)

{
  if (ignoreAxis == 2) {
    fVar1 = from->y;
    to->x = from->x;
    to->y = fVar1;
  }
  index_00 = 0;
  index = 0;
  iVar2 = ignoreAxis;
  do {
    if (index != ignoreAxis) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (from,index,(MethodInfo *)CONCAT44(in_register_00000084,iVar2));
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_set_Item(to,index_00,fVar1,method);
      index_00 = index_00 + 1;
    }
    index = index + 1;
  } while (index < 3);
  return;
}


/* Boolean VectorIsFinite(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsFinite
               (Vector3 *vector,MethodInfo *method)

{
  if ((ABS(vector->x) != INFINITY) && (ABS(vector->y) != INFINITY)) {
    return ABS(vector->z) != INFINITY;
  }
  return 0;
}


/* Boolean VectorIsNan(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsNan
               (Vector3 *vector,MethodInfo *method)

{
  if (((uint)ABS(vector->x) < 0x7f800001) && ((uint)ABS(vector->y) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(vector->z);
  }
  return 1;
}


/* Single Yaw(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Yaw(Vector3 *dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = dir->x;
  fVar2 = (float)(uVar1 ^ _UNK_?);
  fVar3 = (float)((uint)dir->y ^ _UNK_?);
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (float)((uint)dir->z ^ _UNK_?);
  uVar6 = (pVVar4->forwardVector).x;
  uVar7 = (pVVar4->forwardVector).y;
  fVar8 = (pVVar4->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar4->upVector).x;
  uVar10 = (pVVar4->upVector).y;
  fVar8 = (float)func_?(((float)uVar7 * fVar5 - fVar8 * fVar3) * (float)uVar9 +
                                     (fVar2 * fVar8 - (float)uVar6 * fVar5) * (float)uVar10 +
                                     ((float)uVar6 * fVar3 - fVar2 * (float)uVar7) *
                                     (pVVar4->upVector).z,
                                     fVar2 * (float)uVar6 + (float)uVar7 * fVar3 + fVar8 * fVar5);
  return (fVar8 + _UNK_?) * _UNK_?;
}

