
/* Matrix4x4 AbsMatrix(Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::MathFunctions::MathFunctions_AbsMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 m,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x40);
  iStack_1 = 0;
  do {
    iVar2 = 3;
    index = iStack_1;
    do {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        (&m,index,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,index,(float)((uint)fVar3 & _UNK_?),(MethodInfo *)0x0
                );
      index = index + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iStack_1 = iStack_1 + 4;
  } while (iStack_1 < 0xc);
  return __return_storage_ptr__;
}


/* Vector3 AbsVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_AbsVector
                    (Vector3 *__return_storage_ptr__,Vector3 vec,MethodInfo *method)

{
  uVar1 = _UNK_?;
  __return_storage_ptr__->x = (float)((uint)vec.x & _UNK_?);
  __return_storage_ptr__->y = (float)((uint)vec.y & uVar1);
  __return_storage_ptr__->z = (float)((uint)vec.z & uVar1);
  return __return_storage_ptr__;
}


/* Vector3 CeilVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_CeilVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)vector.x);
  fVar2 = (float10)func_?((double)vector.y);
  fVar3 = (float10)func_?((double)vector.z);
  __return_storage_ptr__->x = (float)fVar1;
  __return_storage_ptr__->y = (float)fVar2;
  __return_storage_ptr__->z = (float)fVar3;
  return __return_storage_ptr__;
}


/* Void ClampIntVector(IntVector ByRef, IntVector, IntVector) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampIntVector
               (IntVector *target,IntVector min,IntVector max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  key = 0;
  do {
    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    iVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                      (target,key,(MethodInfo *)0x0);
    iVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                      (&min,key,(MethodInfo *)0x0);
    iVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_get_Item
                      (&max,key,(MethodInfo *)0x0);
    iVar4 = (int)iVar2;
    iVar5 = (int)iVar1;
    if ((iVar4 <= iVar5) && (iVar4 = iVar5, iVar3 < iVar5)) {
      iVar4 = (int)iVar3;
    }
    max.x = 0;
    max.y = 0;
    min.z = (int16_t)iVar4;
    in_stack_6 = (undefined2)((uint)iVar4 >> 0x10);
    min._0_4_ = key;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_set_Item
              (target,key,min.z,(MethodInfo *)0x0);
    key = key + 1;
  } while (key < 3);
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
  v->y = fVar2;
  fVar1 = v->z;
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
               (Vector3 *v,Vector3 min,Vector3 max,MethodInfo *method)

{
  fVar1 = v->x;
  if ((fVar1 < min.x) || (min.x = max.x, max.x < fVar1)) {
    fVar1 = min.x;
  }
  v->x = fVar1;
  fVar1 = v->y;
  if ((fVar1 < min.y) || (min.y = max.y, max.y < fVar1)) {
    fVar1 = min.y;
  }
  v->y = fVar1;
  fVar1 = v->z;
  if ((min.z <= fVar1) && (min.z = max.z, fVar1 <= max.z)) {
    v->z = fVar1;
    return;
  }
  v->z = min.z;
  return;
}


/* Boolean DistancePointLine(Vector3, Vector3, Vector3, Single ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine
               (Vector3 point,Vector3 lineStart,Vector3 lineEnd,float *distance,MethodInfo *method)

{
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  bVar2 = MathFunctions_DistancePointLine_1
                    (point,lineStart,lineEnd,distance,&VStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean DistancePointLine(Vector3, Vector3, Vector3, Single ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine_1
               (Vector3 point,Vector3 lineStart,Vector3 lineEnd,float *distance,
               Vector3 *intersection,MethodInfo *method)

{
  intersection->x = 0.0;
  intersection->y = 0.0;
  fStack_1 = lineEnd.z - lineStart.z;
  intersection->z = 0.0;
  uStack_2 = CONCAT44(lineEnd.y - lineStart.y,lineEnd.x - lineStart.x);
  fVar3 = (float10)func_?(&uStack_2,0);
  fStack_4 = (float)fVar3;
  fVar5 = ((lineEnd.y - lineStart.y) * (point.y - lineStart.y) +
           (lineEnd.x - lineStart.x) * (point.x - lineStart.x) +
          (lineEnd.z - lineStart.z) * (point.z - lineStart.z)) / (fStack_4 * fStack_4);
  if ((0.0 <= fVar5) && (fVar5 <= _UNK_?)) {
    fVar6 = lineStart.z + (lineEnd.z - lineStart.z) * fVar5;
    fVar7 = lineStart.x + (lineEnd.x - lineStart.x) * fVar5;
    fVar5 = lineStart.y + (lineEnd.y - lineStart.y) * fVar5;
    fStack_1 = point.z - fVar6;
    intersection->x = fVar7;
    intersection->y = fVar5;
    intersection->z = fVar6;
    uStack_2 = CONCAT44(point.y - fVar5,point.x - fVar7);
    fVar3 = (float10)func_?(&uStack_2,0);
    *distance = (float)fVar3;
    return 1;
  }
  return 0;
}


/* Void DistancePointLine(Vector3, Vector3, Vector3, Single ByRef, Vector3 ByRef, Single ByRef) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine_2
               (Vector3 point,Vector3 lineStart,Vector3 lineEnd,float *distance,
               Vector3 *intersection,float *u,MethodInfo *method)

{
  fStack_1 = lineEnd.z - lineStart.z;
  uStack_2 = CONCAT44(lineEnd.y - lineStart.y,lineEnd.x - lineStart.x);
  fVar3 = (float10)func_?(&uStack_2,0);
  fStack_4 = (float)fVar3;
  fVar5 = ((lineEnd.y - lineStart.y) * (point.y - lineStart.y) +
           (lineEnd.x - lineStart.x) * (point.x - lineStart.x) +
          (lineEnd.z - lineStart.z) * (point.z - lineStart.z)) / (fStack_4 * fStack_4);
  *u = fVar5;
  fVar6 = lineStart.y + fVar5 * (lineEnd.y - lineStart.y);
  fVar7 = lineStart.x + fVar5 * (lineEnd.x - lineStart.x);
  fVar5 = lineStart.z + fVar5 * (lineEnd.z - lineStart.z);
  fStack_1 = point.z - fVar5;
  intersection->x = fVar7;
  intersection->y = fVar6;
  intersection->z = fVar5;
  uStack_2 = CONCAT44(point.y - fVar6,point.x - fVar7);
  fVar3 = (float10)func_?(&uStack_2,0);
  *distance = (float)fVar3;
  return;
}


/* Vector3 DivideVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_DivideVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  __return_storage_ptr__->x = vec0->x / vec1->x;
  __return_storage_ptr__->y = vec0->y / vec1->y;
  __return_storage_ptr__->z = vec0->z / vec1->z;
  return __return_storage_ptr__;
}


/* Boolean DoLinesIntersect(Vector2, Vector2, Vector2, Vector2, Vector2 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DoLinesIntersect
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,Vector2 *ptIntersection,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  dVar1 = (double)((p1.x - p0.x) * (p3.y - p2.y) - (p1.y - p0.y) * (p3.x - p2.x));
  dVar2 = (double)((p3.x - p2.x) * (p0.y - p2.y) - (p0.x - p2.x) * (p3.y - p2.y));
  dVar3 = (double)((p0.y - p2.y) * (p1.x - p0.x) - (p1.y - p0.y) * (p0.x - p2.x));
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & (uint)((ulonglong)_UNK_? >> 0x20),
                       SUB84(dVar2,0) & (uint)_UNK_?) < _UNK_?) {
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & (uint)((ulonglong)_UNK_? >> 0x20)
                         ,SUB84(dVar3,0) & (uint)_UNK_?) < _UNK_?) {
      bVar4 = MathFunctions_IsCoincidentalLineSegmentsOverlapping(p0,p1,p2,p3,(MethodInfo *)0x0);
      return bVar4 != 0;
    }
  }
  if ((((dVar1 != 0.0) && (dVar2 = dVar2 / dVar1, 0.0 <= dVar2)) && (dVar2 <= _UNK_?)) &&
     ((0.0 <= dVar3 / dVar1 && (dVar3 / dVar1 <= _UNK_?)))) {
    ptIntersection->x = (float)((double)(p1.x - p0.x) * dVar2 + (double)p0.x);
    ptIntersection->y = (float)((double)(p1.y - p0.y) * dVar2 + (double)p0.y);
    return 1;
  }
  return 0;
}


/* Single DotProduct(Vector3 ByRef, Vector3 ByRef) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_DotProduct
                (Vector3 *a,Vector3 *b,MethodInfo *method)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}


/* Bounds FastAABBTransform(Matrix4x4, Bounds) */

Bounds * Assembly-CSharp.dll::MathFunctions::MathFunctions_FastAABBTransform
                   (Bounds *__return_storage_ptr__,Matrix4x4 m,Bounds b,MethodInfo *method)

{
  MStack_1.m00 = m.m00;
  MStack_1.m10 = m.m10;
  MStack_1.m20 = m.m20;
  MStack_1.m30 = m.m30;
  MStack_1.m01 = m.m01;
  MStack_1.m11 = m.m11;
  MStack_1.m21 = m.m21;
  MStack_1.m31 = m.m31;
  MStack_1.m02 = m.m02;
  MStack_1.m12 = m.m12;
  MStack_1.m22 = m.m22;
  MStack_1.m32 = m.m32;
  MStack_1.m03 = m.m03;
  MStack_1.m13 = m.m13;
  MStack_1.m23 = m.m23;
  MStack_1.m33 = m.m33;
  func_?(&MStack_2,0,0x40);
  iStack_3 = 0;
  do {
    iVar4 = 3;
    index = iStack_3;
    do {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        (&MStack_1,index,(MethodInfo *)0x0);
      uStack_6 = CONCAT44(fVar5,(undefined4)uStack_6);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (&MStack_2,index,(float)((uint)fVar5 & _UNK_?),(MethodInfo *)0x0);
      index = index + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iStack_3 = iStack_3 + 4;
  } while (iStack_3 < 0xc);
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_8,&m,b.m_Center,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar7->x;
  uStack_6._4_4_ = pVVar7->y;
  fVar5 = pVVar7->z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&VStack_8,(Matrix4x4 *)&stack0xffffff24,b.m_Extents,(MethodInfo *)0x0);
  uVar9 = pVVar7->x;
  uVar10 = pVVar7->y;
  fVar11 = (float)uVar9 * _UNK_?;
  fVar12 = (float)uVar10 * _UNK_?;
  fVar13 = pVVar7->z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_6;
  fVar14 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = (float)uStack_6._4_4_;
  fVar13 = fVar13 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = fVar11 * fVar14;
  (__return_storage_ptr__->m_Extents).y = fVar12 * fVar14;
  (__return_storage_ptr__->m_Extents).z = fVar13;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] FlipPolygon(List`1[UnityEngine.Vector2]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::MathFunctions::MathFunctions_FlipPolygon
          (List_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
                   );
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
  List_1_UnityEngine_Vector2___ctor_1
            (pLVar1,(IEnumerable_1_UnityEngine_Vector2_ *)points,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
            );
  iStack_2 = 0;
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    while( true ) {
      if ((points->fields)._size / 2 <= iStack_2) {
        return pLVar1;
      }
      if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) break;
      value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (pLVar1,iStack_2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      value_00 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           (pLVar1,((pLVar1->fields)._size - iStack_2) + -1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (pLVar1,iStack_2,value_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (pLVar1,((pLVar1->fields)._size - iStack_2) + -1,value,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      iStack_2 = iStack_2 + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar3)();
  return pLVar1;
}


/* Vector3 FloorVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_FloorVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar1 = (float10)func_?((double)vector.x);
  fVar2 = (float10)func_?((double)vector.y);
  fVar3 = (float10)func_?((double)vector.z);
  __return_storage_ptr__->x = (float)fVar1;
  __return_storage_ptr__->y = (float)fVar2;
  __return_storage_ptr__->z = (float)fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetMaxVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMaxVector
                    (Vector3 *__return_storage_ptr__,Vector3 max0,Vector3 max1,MethodInfo *method)

{
  index = 0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  do {
    fVar1 = max0.x;
    fVar2 = max1.x;
    if (((index != 0) && (fVar1 = max0.y, fVar2 = max1.y, index != 1)) &&
       (fVar1 = max0.z, fVar2 = max1.z, index != 2)) {
      uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this = (IndexOutOfRangeException *)func_?(uVar3);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this,message,method_00);
      uVar3 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      func_?(this,uVar3);
      pcVar4 = (code *)swi(3);
      pVVar5 = (Vector3 *)(*pcVar4)();
      return pVVar5;
    }
    pVVar5 = &max1;
    if (fVar2 < fVar1) {
      pVVar5 = &max0;
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (pVVar5,index,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (__return_storage_ptr__,index,fVar1,(MethodInfo *)0x0);
    index = index + 1;
  } while (index < 3);
  return __return_storage_ptr__;
}


/* Vector3 GetMinVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMinVector
                    (Vector3 *__return_storage_ptr__,Vector3 min0,Vector3 min1,MethodInfo *method)

{
  index = 0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  do {
    fVar1 = min0.x;
    fVar2 = min1.x;
    if (((index != 0) && (fVar1 = min0.y, fVar2 = min1.y, index != 1)) &&
       (fVar1 = min0.z, fVar2 = min1.z, index != 2)) {
      uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this = (IndexOutOfRangeException *)func_?(uVar3);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this,message,method_00);
      uVar3 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
      func_?(this,uVar3);
      pcVar4 = (code *)swi(3);
      pVVar5 = (Vector3 *)(*pcVar4)();
      return pVVar5;
    }
    pVVar5 = &min1;
    if (fVar1 < fVar2) {
      pVVar5 = &min0;
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                      (pVVar5,index,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (__return_storage_ptr__,index,fVar1,(MethodInfo *)0x0);
    index = index + 1;
  } while (index < 3);
  return __return_storage_ptr__;
}


/* Vector3 GetNormal(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 pa,Vector3 pb,Vector3 pc,
                    MethodInfo *method)

{
  fStack_1 = (pc.z - pa.z) * (pb.y - pa.y) - (pb.z - pa.z) * (pc.y - pa.y);
  fStack_2 = (pb.x - pa.x) * (pc.y - pa.y) - (pc.x - pa.x) * (pb.y - pa.y);
  uStack_3 = CONCAT44((pc.x - pa.x) * (pb.z - pa.z) - (pb.x - pa.x) * (pc.z - pa.z),fStack_1);
  fStack_4 = fStack_2;
  puVar5 = (undefined8 *)func_?(auStack_6,&uStack_3,0);
  uVar7 = *puVar5;
  fVar8 = *(float *)(puVar5 + 1);
  __return_storage_ptr__->x = (float)(int)uVar7;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->z = fVar8;
  return __return_storage_ptr__;
}


/* Quaternion InertiaX(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaX
          (Quaternion *__return_storage_ptr__,Vector3 eulerFrom,Vector3 eulerTo,float speed,
          MethodInfo *method)

{
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = eulerFrom.x * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffdc,euler,(MethodInfo *)0x0);
  fVar1 = eulerTo.x * _UNK_?;
  fVar2 = 0.0;
  pQVar3 = (Quaternion *)&stack0xffffffec;
  euler_00.y = 0.0;
  euler_00.z = 0.0;
  euler_00.x = fVar1;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (pQVar3,euler_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar4->x;
  fVar5 = pQVar4->y;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  puVar8 = &UNK_?;
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
  a.y = fVar1;
  a.x = (float)pQVar3;
  a.z = fVar2;
  a.w = (float)puVar8;
  b.y = fVar5;
  b.x = (float)method_00;
  b.z = fVar6;
  b.w = fVar7;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffdc,a,b,fVar9 * speed,(MethodInfo *)0x0);
  fRam00000000 = pQVar3->x;
  fRam00000004 = pQVar3->y;
  fRam00000008 = pQVar3->z;
  fRam0000000c = pQVar3->w;
  return (Quaternion *)0x0;
}


/* Quaternion InertiaY(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaY
          (Quaternion *__return_storage_ptr__,Vector3 eulerFrom,Vector3 eulerTo,float speed,
          MethodInfo *method)

{
  fVar1 = 0.0;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = eulerFrom.y * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
            ((Quaternion *)&stack0xffffffb0,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  fVar3 = eulerTo.y * _UNK_?;
  pQVar4 = (Quaternion *)&stack0xffffffc0;
  euler.y = fVar3;
  euler.x = fVar1;
  euler.z = fVar1;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (pQVar4,euler,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar5->x;
  fVar6 = pQVar5->y;
  fVar7 = pQVar5->z;
  fVar8 = pQVar5->w;
  puVar9 = &UNK_?;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
  a.y = fVar1;
  a.x = (float)pQVar4;
  a.z = fVar3;
  a.w = (float)puVar9;
  b.y = fVar6;
  b.x = (float)method_00;
  b.z = fVar7;
  b.w = fVar8;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffb0,a,b,fVar10 * speed,(MethodInfo *)0x0);
  fVar6 = pQVar4->y;
  fVar7 = pQVar4->z;
  fVar8 = pQVar4->w;
  __return_storage_ptr__->x = pQVar4->x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* MathFunctions+IntersectResult Intersect(Vector2, Vector2, Vector2, Vector2, Vector2 ByRef) */

MathFunctions_IntersectResult__Enum
Assembly-CSharp.dll::MathFunctions::MathFunctions_Intersect
          (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,Vector2 *ptIntersection,MethodInfo *method)

{
  fVar1 = (p1.x - p0.x) * (p3.y - p2.y) - (p1.y - p0.y) * (p3.x - p2.x);
  fVar2 = (p3.x - p2.x) * (p0.y - p2.y) - (p0.x - p2.x) * (p3.y - p2.y);
  fVar3 = (p1.x - p0.x) * (p0.y - p2.y) - (p1.y - p0.y) * (p0.x - p2.x);
  if (fVar1 == 0.0) {
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      return MathFunctions_IntersectResult__Enum_COINCIDENT;
    }
    return MathFunctions_IntersectResult__Enum_PARALLEL;
  }
  fVar2 = fVar2 / fVar1;
  if ((((0.0 <= fVar2) && (fVar2 <= _UNK_?)) && (fVar3 = fVar3 / fVar1, 0.0 <= fVar3)) &&
     (fVar3 <= _UNK_?)) {
    ptIntersection->y = (p1.y - p0.y) * fVar2 + p0.y;
    ptIntersection->x = (p1.x - p0.x) * fVar2 + p0.x;
    return MathFunctions_IntersectResult__Enum_INTERESECTING;
  }
  return MathFunctions_IntersectResult__Enum_NOT_INTERESECTING;
}


/* Boolean IsCoincidentalLineSegmentsOverlapping(Vector2, Vector2, Vector2, Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsCoincidentalLineSegmentsOverlapping
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__System__Single,4);
  if (iVar1 == 0) {
    func_?();
  }
  else if (*(int *)(iVar1 + 0xc) != 0) {
    *(float *)(iVar1 + 0x10) = (p0.x - p2.x) * (p0.x - p2.x) + (p0.y - p2.y) * (p0.y - p2.y);
    if (1 < *(uint *)(iVar1 + 0xc)) {
      *(float *)(iVar1 + 0x14) = (p0.x - p3.x) * (p0.x - p3.x) + (p0.y - p3.y) * (p0.y - p3.y);
      if (2 < *(uint *)(iVar1 + 0xc)) {
        *(float *)(iVar1 + 0x18) = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
        if (3 < *(uint *)(iVar1 + 0xc)) {
          pfVar2 = (float *)(iVar1 + 0x10);
          uVar3 = 0;
          fVar4 = 0.0;
          *(float *)(iVar1 + 0x1c) = (p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y);
          while( true ) {
            if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar3) {
              return fVar4 < (p2.x - p3.x) * (p2.x - p3.x) + (p2.y - p3.y) * (p2.y - p3.y) +
                             (p0.x - p1.x) * (p0.x - p1.x) + (p0.y - p1.y) * (p0.y - p1.y);
            }
            if (*(uint *)(iVar1 + 0xc) <= uVar3) break;
            if (fVar4 < *pfVar2) {
              fVar4 = *pfVar2;
            }
            uVar3 = uVar3 + 1;
            pfVar2 = pfVar2 + 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (points->fields)._size;
    VStack_2.x = -1.0;
    iStack_3 = iVar1 + -1;
    if (isOpen == 0) {
      iStack_3 = iVar1;
    }
    VStack_2.y = -1.0;
    iVar1 = 0;
    if (0 < iStack_3) {
      do {
        p2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
             List_1_UnityEngine_Vector2__get_Item
                       (points,iVar1 % (points->fields)._size,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                       );
        p3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
             List_1_UnityEngine_Vector2__get_Item
                       (points,(iVar1 + 1) % (points->fields)._size,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                       );
        VVar4.y = p0.y;
        VVar4.x = p0.x;
        p1_00.y = p1.y;
        p1_00.x = p1.x;
        bVar5 = MathFunctions_DoLinesIntersect(VVar4,p1_00,p2,p3,&VStack_2,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          fStack_6 = VStack_2.x;
          fStack_7 = VStack_2.y;
          if ((VStack_2.x == _UNK_?) && (VStack_2.y == _UNK_?)) {
            return iVar1;
          }
          p1.y = (float)
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
          ;
          p1.x = (float)((points->fields)._size + -1);
          p0.y = (float)points;
          p0.x = (float)&UNK_?;
          VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            (points,(int32_t)p1.x,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
          fVar8 = fStack_6 - VStack_9.x;
          VStack_9.y = VVar4.y;
          fVar10 = fStack_7 - VStack_9.y;
          VStack_9 = VVar4;
          if (_UNK_? < (double)(fVar10 * fVar10 + fVar8 * fVar8)) {
            return iVar1;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_3);
    }
    return -1;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Boolean IsPointInShape(IList`1[UnityEngine.Vector2], Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsPointInShape
               (IList_1_UnityEngine_Vector2_ *shapePoints,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  bStack_1 = false;
  if (shapePoints == (IList_1_UnityEngine_Vector2_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = func_?(0,
                          TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>,
                          shapePoints);
  iVar5 = 0;
  iStack_6 = iVar4 + -1;
  do {
    iVar4 = iVar5;
    pIVar7 = shapePoints->klass;
    uVar8 = 0;
    uVar9._0_1_ = (pIVar7->_1).rank;
    uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
    if (uVar9 != 0) {
      do {
        if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>
           ) {
          ppMVar10 = &(&(shapePoints->klass->vtable).get_Item)
                     [shapePoints->klass->interfaceOffsets[uVar8].offset].method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    ppMVar10 = (MethodInfo **)
              func_?(shapePoints,
                              TypeInfo__System__Collections__Generic__ICollection<UnityEngine::Vector2>
                              ,0);
code_?:
    iVar5 = (*(code *)*ppMVar10)(shapePoints,ppMVar10[1]);
    if (iVar5 <= iVar4) {
      return bStack_1;
    }
    pIVar7 = shapePoints->klass;
    uVar9 = 0;
    uVar8._0_1_ = (pIVar7->_1).rank;
    uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
    if (uVar8 != 0) {
      do {
        if (pIVar7->interfaceOffsets[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>) {
          ppMVar10 = &(&(shapePoints->klass->vtable).get_Item)
                     [shapePoints->klass->interfaceOffsets[uVar9].offset].method;
          goto code_?;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    ppMVar10 = (MethodInfo **)
              func_?(shapePoints,
                              TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,0)
    ;
code_?:
    (*(code *)*ppMVar10)(shapePoints,iVar4,ppMVar10[1]);
    if (point.y < extraout_EDX) {
code_?:
      func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      if (extraout_EDX_01 <= point.y) {
        func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                        shapePoints,iVar4);
        if (point.y < extraout_EDX_02) goto code_?;
      }
    }
    else {
      func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      if (extraout_EDX_00 <= point.y) goto code_?;
code_?:
      fVar11 = (float)func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                     ,shapePoints,iStack_6);
      fVar12 = (float)func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                     ,shapePoints,iVar4);
      func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iVar4);
      func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      func_?(0,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iVar4);
      fVar13 = (float)func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                     ,shapePoints,iVar4);
      if (point.x < ((point.y - extraout_EDX_03) * (fVar11 - fVar12)) /
                    (extraout_EDX_04 - extraout_EDX_05) + fVar13) {
        bStack_1 = bStack_1 == false;
      }
    }
    iVar5 = iVar4 + 1;
    iStack_6 = iVar4;
  } while( true );
}


/* Boolean IsQuaternionFloatsValid(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsQuaternionFloatsValid
               (Quaternion quaternion,MethodInfo *method)

{
  if ((uint)ABS(quaternion.x) < 0x7f800001) {
    if ((uint)ABS(quaternion.y) < 0x7f800001) {
      if ((uint)ABS(quaternion.z) < 0x7f800001) {
        if (((((uint)ABS(quaternion.w) < 0x7f800001) && (ABS(quaternion.x) != INFINITY)) &&
            (ABS(quaternion.y) != INFINITY)) &&
           ((ABS(quaternion.z) != INFINITY && (ABS(quaternion.w) != INFINITY)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Boolean IsVectorFloatsValid(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsVectorFloatsValid
               (Vector3 vector,MethodInfo *method)

{
  if ((uint)ABS(vector.x) < 0x7f800001) {
    if ((uint)ABS(vector.y) < 0x7f800001) {
      if (((((uint)ABS(vector.z) < 0x7f800001) && (ABS(vector.x) != INFINITY)) &&
          (ABS(vector.y) != INFINITY)) && (ABS(vector.z) != INFINITY)) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean LineFacet(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_LineFacet
               (Vector3 p1,Vector3 p2,Vector3 pa,Vector3 pb,Vector3 pc,Vector3 *p,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar1 = (pc.z - pa.z) * (pb.y - pa.y) - (pb.z - pa.z) * (pc.y - pa.y);
  fVar2 = (pc.x - pa.x) * (pb.z - pa.z) - (pb.x - pa.x) * (pc.z - pa.z);
  fVar3 = (pb.x - pa.x) * (pc.y - pa.y) - (pc.x - pa.x) * (pb.y - pa.y);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar4 = (p2.y - p1.y) * fVar2 + (p2.x - p1.x) * fVar1 + (p2.z - p1.z) * fVar3;
  if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)((uint)fVar4 & _UNK_?))
  {
    fVar4 = (float)((uint)((((float)((uint)fVar1 ^
                                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                    ) * pa.x - pa.y * fVar2) - pa.z * fVar3) + p1.x * fVar1 +
                           p1.y * fVar2 + p1.z * fVar3) ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) / fVar4
    ;
    fVar2 = (p2.x - p1.x) * fVar4 + p1.x;
    fVar1 = (p2.y - p1.y) * fVar4 + p1.y;
    fVar3 = (p2.z - p1.z) * fVar4 + p1.z;
    p->x = fVar2;
    p->y = fVar1;
    p->z = fVar3;
    if ((0.0 <= fVar4) && (fVar4 <= _UNK_?)) {
      p2.z = pa.z - fVar3;
      p2.x = pa.x - fVar2;
      p2.y = pa.y - fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&p2,(MethodInfo *)0x0);
      pa.x = pb.x - p->x;
      pa.y = pb.y - p->y;
      pa.z = pb.z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&pa,(MethodInfo *)0x0);
      pb.x = pc.x - p->x;
      pb.y = pc.y - p->y;
      pb.z = pc.z - p->z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&pb,(MethodInfo *)0x0);
      dVar5 = (double)(pb.y * pa.y + pb.x * pa.x + pb.z * pa.z);
      func_?();
      dVar6 = (double)(pa.y * p2.y + pa.x * p2.x + pa.z * p2.z);
      func_?();
      dVar7 = (double)(pb.y * p2.y + pb.x * p2.x + pb.z * p2.z);
      func_?();
      if ((float)((uint)(((float)dVar5 + (float)dVar6 + (float)dVar7) * _UNK_? -
                        _UNK_?) & _UNK_?) <= _UNK_?) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean LineFacetCollision(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 ByRef,
   Vector3 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_LineFacetCollision
               (Vector3 p1,Vector3 p2,Vector3 pa,Vector3 pb,Vector3 pc,Vector3 lineDir,Vector3 *p,
               Vector3 *n,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  uStack_1 = CONCAT44((pb.z - pa.z) * (pc.x - pa.x) - (pc.z - pa.z) * (pb.x - pa.x),
                       (pc.z - pa.z) * (pb.y - pa.y) - (pb.z - pa.z) * (pc.y - pa.y));
  fStack_2 = (pc.y - pa.y) * (pb.x - pa.x) - (pc.x - pa.x) * (pb.y - pa.y);
  fStack_3 = fStack_2;
  puVar4 = (undefined8 *)func_?(auStack_5,&uStack_1,0);
  uVar6 = *puVar4;
  fStack_3 = *(float *)(puVar4 + 1);
  n->x = (float)(int)uVar6;
  n->y = (float)(int)((ulonglong)uVar6 >> 0x20);
  n->z = fStack_3;
  uStack_1._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  uStack_1._0_4_ = (float)uVar6;
  if ((float)uStack_1 * lineDir.x + uStack_1._4_4_ * lineDir.y + fStack_3 * lineDir.z <=
      _UNK_?) {
    fVar7 = (p2.y - p1.y) * n->y + (p2.x - p1.x) * n->x + (p2.z - p1.z) * n->z;
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)((uint)fVar7 & _UNK_?)
       ) {
      fVar7 = (float)((uint)((((float)((uint)n->x ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      ) * pa.x - pa.y * n->y) - pa.z * n->z) + p1.x * n->x +
                             p1.y * n->y + p1.z * n->z) ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) /
              fVar7;
      fVar8 = (p2.x - p1.x) * fVar7 + p1.x;
      fVar9 = (p2.y - p1.y) * fVar7 + p1.y;
      fVar10 = (p2.z - p1.z) * fVar7 + p1.z;
      p->x = fVar8;
      p->y = fVar9;
      p->z = fVar10;
      if ((0.0 <= fVar7) && (fVar7 <= _UNK_?)) {
        lineDir.x = pa.x - fVar8;
        lineDir.y = pa.y - fVar9;
        lineDir.z = pa.z - fVar10;
        uStack_1 = uVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&lineDir,(MethodInfo *)0x0);
        pa.x = pb.x - p->x;
        pa.y = pb.y - p->y;
        pa.z = pb.z - p->z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&pa,(MethodInfo *)0x0)
        ;
        pb.x = pc.x - p->x;
        pb.y = pc.y - p->y;
        pb.z = pc.z - p->z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&pb,(MethodInfo *)0x0)
        ;
        dVar11 = (double)(pb.y * pa.y + pb.x * pa.x + pb.z * pa.z);
        uStack_1 = CONCAT44(&UNK_?,(float)uStack_1);
        func_?();
        dVar12 = (double)(pa.y * lineDir.y + pa.x * lineDir.x + pa.z * lineDir.z);
        uStack_1 = CONCAT44(&UNK_?,(float)uStack_1);
        func_?();
        dVar13 = (double)(pb.y * lineDir.y + pb.x * lineDir.x + pb.z * lineDir.z);
        uStack_1 = CONCAT44(&UNK_?,(float)uStack_1);
        func_?();
        if ((float)((uint)(((float)dVar11 + (float)dVar12 + (float)dVar13) * _UNK_? -
                          _UNK_?) & _UNK_?) <= _UNK_?) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Vector3 Multiply(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_Multiply
                    (Vector3 *__return_storage_ptr__,Vector3 a,Vector3 b,MethodInfo *method)

{
  __return_storage_ptr__->x = a.x * b.x;
  __return_storage_ptr__->y = b.y * a.y;
  __return_storage_ptr__->z = b.z * a.z;
  return __return_storage_ptr__;
}


/* Vector3 MultiplyVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_MultiplyVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  __return_storage_ptr__->x = vec0->x * vec1->x;
  __return_storage_ptr__->y = vec0->y * vec1->y;
  __return_storage_ptr__->z = vec0->z * vec1->z;
  return __return_storage_ptr__;
}


/* Single NormalizeAngle(Single) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_NormalizeAngle
                (float degrees,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)degrees);
  degrees = (float)fVar1;
  if (degrees < 0.0) {
    degrees = degrees + _UNK_?;
  }
  return degrees;
}


/* Single Pitch(Vector3, Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Pitch
                (Vector3 dir,Vector3 planeNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (float10)func_?(uVar2,(pVVar1->upVector).z);
  return ((float)fVar3 + _UNK_?) * _UNK_?;
}


/* Quaternion QuaternionFromAngleAndAxis(Single, Vector3) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
          (Quaternion *__return_storage_ptr__,float angle,Vector3 AxisVector,MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_2,angle,AxisVector,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Boolean QuaternionIsFinite(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionIsFinite
               (Quaternion quaternion,MethodInfo *method)

{
  if (((ABS(quaternion.x) != INFINITY) && (ABS(quaternion.y) != INFINITY)) &&
     (ABS(quaternion.z) != INFINITY)) {
    return ABS(quaternion.w) != INFINITY;
  }
  return 0;
}


/* Boolean QuaternionIsNan(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionIsNan
               (Quaternion quaternion,MethodInfo *method)

{
  if ((((uint)ABS(quaternion.x) < 0x7f800001) && ((uint)ABS(quaternion.y) < 0x7f800001)) &&
     ((uint)ABS(quaternion.z) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(quaternion.w);
  }
  return 1;
}


/* Vector3 RoundVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_RoundVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,int32_t decimals,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  mscorlib.dll::System::Math::Math_Round_5
            ((double)vector.x,decimals,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Math::Math_Round_5
            ((double)vector.y,decimals,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  vector.y = SUB84((double)vector.z,0);
  dVar1 = mscorlib.dll::System::Math::Math_Round_5
                    ((double)vector.z,decimals,MidpointRounding__Enum_ToEven,(MethodInfo *)0x0);
  uRam_? = CONCAT44(vector.y,&UNK_?);
  fRam00000008 = (float)dVar1;
  return (Vector3 *)0x0;
}


/* Single SignedAngle(Vector2, Vector2) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle
                (Vector2 v1,Vector2 v2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar1 = (float10)func_?();
  return (float)fVar1;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle_1
                (Vector3 v1,Vector3 v2,Vector3 normal,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  return (float)fVar1;
}


/* Double SignedDistanceTo(Plane ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo
                 (Plane *plane,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  uVar1 = (plane->m_Normal).x;
  uVar2 = (plane->m_Normal).y;
  uVar3 = point->x;
  uVar4 = point->y;
  uVar5 = (plane->m_Normal).x;
  uVar6 = (plane->m_Normal).y;
  return (double)((float)((uint)((float)uVar6 * planeOrigin->y + (float)uVar5 * planeOrigin->x +
                                (plane->m_Normal).z * planeOrigin->z) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                 (float)uVar4 * (float)uVar2 + (float)uVar3 * (float)uVar1 +
                 point->z * (plane->m_Normal).z);
}


/* Double SignedDistanceTo(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo_1
                 (Vector3 *planeNormal,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  uVar1 = planeNormal->x;
  uVar2 = planeNormal->y;
  uVar3 = point->x;
  uVar4 = point->y;
  return (double)((float)((uint)(planeNormal->y * planeOrigin->y + planeNormal->x * planeOrigin->x +
                                planeNormal->z * planeOrigin->z) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                 (float)uVar4 * (float)uVar2 + (float)uVar3 * (float)uVar1 +
                 point->z * planeNormal->z);
}


/* Single SignedYawFromLocalDirection(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedYawFromLocalDirection
                (Vector3 localDirection,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?();
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  localDirection.y = (float)uVar2;
  localDirection.z = (float)((ulonglong)uVar2 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5._0_4_ = (pVVar4->forwardVector).x;
  uVar5._4_4_ = (pVVar4->forwardVector).y;
  fVar6 = (float10)func_?(uVar5,(pVVar4->forwardVector).z,uVar2,fVar3,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar4->rightVector).x;
  uVar8 = (pVVar4->rightVector).y;
  fVar9 = localDirection.z * (float)uVar8;
  localDirection.z = (float)fVar6;
  if (fVar9 + localDirection.y * (float)uVar7 + fVar3 * (pVVar4->rightVector).z < 0.0) {
    localDirection.z =
         (float)((uint)(float)fVar6 ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  }
  return localDirection.z;
}


/* IntVector ToIntVector(Vector3) */

IntVector Assembly-CSharp.dll::MathFunctions::MathFunctions_ToIntVector
                    (Vector3 v,MethodInfo *method)

{
  *(undefined4 *)v.x = 0;
  *(undefined2 *)((int)v.x + 4) = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)v.x,(int)v.y & 0xffff,(int)v.z & 0xffff,(int)(float)method & 0xffff,
             (MethodInfo *)0x0);
  IVar1.z = extraout_DX;
  IVar1._0_4_ = v.x;
  return IVar1;
}


/* Double Truncate(Double, Int32) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_Truncate
                 (double number,int32_t digits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = mscorlib.dll::System::Math::Math_Pow(_UNK_?,(double)digits,(MethodInfo *)0x0);
  return (double)(int)(dVar1 * number) / dVar1;
}


/* Vector3 TruncateVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_TruncateVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,int32_t digits,
                    MethodInfo *method)

{
  MathFunctions_Truncate((double)vector.x,digits,(MethodInfo *)0x0);
  MathFunctions_Truncate((double)vector.y,digits,(MethodInfo *)0x0);
  dVar1 = MathFunctions_Truncate((double)vector.z,digits,(MethodInfo *)0x0);
  _UNK_? = (double)vector.z;
  _UNK_? = (float)dVar1;
  return (Vector3 *)&UNK_?;
}


/* Void Vector2ToVector3(Vector2 ByRef, Vector3 ByRef, Int32, Single) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector2ToVector3
               (Vector2 *from,Vector3 *to,int32_t addAxis,float addValue,MethodInfo *method)

{
  index = 0;
  index_00 = 0;
  do {
    value = addValue;
    if (index_00 != addAxis) {
      value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_Item
                        (from,index,(MethodInfo *)0x0);
      index = index + 1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              (to,index_00,value,(MethodInfo *)0x0);
    index_00 = index_00 + 1;
  } while (index_00 < 3);
  if (addAxis == 2) {
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
              ((Vector3 *)0x0,2,addValue,(MethodInfo *)0x0);
  }
  return;
}


/* Void Vector3ToVector2(Vector3 ByRef, Vector2 ByRef, Int32) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector3ToVector2
               (Vector3 *from,Vector2 *to,int32_t ignoreAxis,MethodInfo *method)

{
  if (ignoreAxis == 2) {
    uVar1 = from->x;
    uVar2 = from->y;
    to->x = (float)uVar1;
    to->y = (float)uVar2;
  }
  index_00 = 0;
  index = 0;
  do {
    if (index != ignoreAxis) {
      value = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (from,index,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_set_Item
                (to,index_00,value,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
    }
    index = index + 1;
  } while (index < 3);
  return;
}


/* Boolean VectorIsFinite(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsFinite
               (Vector3 vector,MethodInfo *method)

{
  if ((ABS(vector.x) != INFINITY) && (ABS(vector.y) != INFINITY)) {
    return ABS(vector.z) != INFINITY;
  }
  return 0;
}


/* Boolean VectorIsNan(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsNan
               (Vector3 vector,MethodInfo *method)

{
  if (((uint)ABS(vector.x) < 0x7f800001) && ((uint)ABS(vector.y) < 0x7f800001)) {
    return 0x7f800000 < (uint)ABS(vector.z);
  }
  return 1;
}


/* Single Yaw(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Yaw(Vector3 dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  return ((float)fVar1 + _UNK_?) * _UNK_?;
}


/* Vector2 xy(Vector3) */

Vector2 Assembly-CSharp.dll::MathFunctions::MathFunctions_xy(Vector3 v,MethodInfo *method)

{
  return v._0_8_;
}

