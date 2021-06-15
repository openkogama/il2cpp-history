
/* Matrix4x4 AbsMatrix(Matrix4x4) */

Matrix4x4 *
Assembly-CSharp.dll::MathFunctions::MathFunctions_AbsMatrix
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 m,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      fVar4 = (float10)func_?(&m,iVar3,iVar2,0);
      fStack_5 = (float)fVar4;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      func_?(&fStack_1,iVar3,iVar2,
                      (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_5 >> 0x20) &
                                              _UNK_?,
                                              SUB84((double)fStack_5,0) & _UNK_?),0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  __return_storage_ptr__->m00 = fStack_1;
  __return_storage_ptr__->m10 = fStack_6;
  __return_storage_ptr__->m20 = fStack_7;
  __return_storage_ptr__->m30 = fStack_8;
  __return_storage_ptr__->m01 = fStack_9;
  __return_storage_ptr__->m11 = fStack_10;
  __return_storage_ptr__->m21 = fStack_11;
  __return_storage_ptr__->m31 = fStack_12;
  __return_storage_ptr__->m02 = fStack_13;
  __return_storage_ptr__->m12 = fStack_14;
  __return_storage_ptr__->m22 = fStack_15;
  __return_storage_ptr__->m32 = fStack_16;
  __return_storage_ptr__->m03 = fStack_17;
  __return_storage_ptr__->m13 = fStack_18;
  __return_storage_ptr__->m23 = fStack_19;
  __return_storage_ptr__->m33 = fStack_20;
  return __return_storage_ptr__;
}


/* Vector3 AbsVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_AbsVector
                    (Vector3 *__return_storage_ptr__,Vector3 vec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  uVar1 = _UNK_?;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  uVar2 = (uint)uVar1;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  func_?(__return_storage_ptr__,
                  (float)(double)CONCAT44((uint)((ulonglong)(double)vec.x >> 0x20) & uVar3,
                                          SUB84((double)vec.x,0) & uVar2),
                  (float)(double)CONCAT44((uint)((ulonglong)(double)vec.y >> 0x20) & uVar3,
                                          SUB84((double)vec.y,0) & uVar2),
                  (float)(double)CONCAT44((uint)((ulonglong)(double)vec.z >> 0x20) & uVar3,
                                          SUB84((double)vec.z,0) & uVar2),0);
  return __return_storage_ptr__;
}


/* Vector3 CeilVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_CeilVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
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


/* Void ClampIntVector(IntVector ByRef, IntVector, IntVector) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampIntVector
               (IntVector *target,IntVector min,IntVector max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  do {
    sVar2 = func_?(target,iVar1,0);
    sVar3 = func_?(&min,iVar1,0);
    sVar4 = func_?(&max,iVar1,0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                      ((int)sVar2,(int)sVar3,(int)sVar4,(MethodInfo *)0x0);
    func_?(target,iVar1,iVar5,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


/* Void ClampVector(Vector3 ByRef, Single, Single) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampVector
               (Vector3 *v,float min,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = v->x;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,min,max,(MethodInfo *)0x0);
  v->x = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (v->y,min,max,(MethodInfo *)0x0);
  v->y = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (v->z,min,max,(MethodInfo *)0x0);
  v->z = fVar1;
  return;
}


/* Void ClampVector(Vector3 ByRef, Vector3, Vector3) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_ClampVector_1
               (Vector3 *v,Vector3 min,Vector3 max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = v->x;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,min.x,max.x,(MethodInfo *)0x0);
  v->x = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (v->y,min.y,max.y,(MethodInfo *)0x0);
  v->y = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (v->z,max.z,max.z,(MethodInfo *)0x0);
  v->z = fVar1;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  _puStack_10 = 0;
  intersection->x = 0.0;
  intersection->y = 0.0;
  intersection->z = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = lineEnd.z;
  fVar2 = lineStart.z;
  VVar3.y = lineEnd.y;
  VVar3.x = lineEnd.x;
  VVar3.z = lineEnd.z;
  b.y = lineStart.y;
  b.x = lineStart.x;
  b.z = lineStart.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffd8,VVar3,b,(MethodInfo *)0x0);
  puStack_5 = pVVar4->x;
  unique0x0000a404 = pVVar4->y;
  fVar6 = (float10)func_?(&puStack_5,0);
  fVar7 = ((lineEnd.y - lineStart.y) * (point.y - lineStart.y) +
           (lineEnd.x - lineStart.x) * (point.x - lineStart.x) +
          (lineEnd.z - lineStart.z) * (point.z - lineStart.z)) / ((float)fVar6 * (float)fVar6);
  if ((0.0 <= fVar7) && (fVar7 <= _UNK_?)) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b_00.y = lineStart.y;
    b_00.x = lineStart.x;
    a_01.y = lineEnd.y;
    a_01.x = lineEnd.x;
    a_01.z = fVar1;
    b_00.z = fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&lineEnd,a_01,b_00,(MethodInfo *)0x0);
    uVar8 = pVVar4->x;
    uVar9 = pVVar4->y;
    _puStack_10 = CONCAT44(&lineEnd,&UNK_?);
    point.x = pVVar4->z;
    fVar10 = (float)uVar9;
    VVar3.x = (float)uVar8;
    VVar3 = (Vector3)CONCAT84(VVar3._0_8_,VVar3.x);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       (&lineEnd,fVar7,VVar3,(MethodInfo *)0x0);
    fVar7 = lineStart.x;
    uVar11 = pVVar4->x;
    uVar12 = pVVar4->y;
    lineEnd.x = pVVar4->z;
    lineEnd.y = 0.0;
    lineStart.x = fVar2;
    a.y = (float)uVar11;
    a.x = fVar7;
    a.z = fVar2;
    lineStart.y = (float)uVar11;
    lineStart.z = (float)uVar12;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&lineStart,a,*pVVar4,(MethodInfo *)0x0);
    fVar1 = pVVar4->y;
    fVar2 = pVVar4->z;
    VVar3 = *pVVar4;
    intersection->x = pVVar4->x;
    intersection->y = fVar1;
    intersection->z = fVar2;
    lineEnd.z = (float)&lineStart;
    lineEnd.y = (float)&UNK_?;
    a_00.y = fVar7;
    a_00.x = (float)&lineStart;
    a_00.z = (float)uVar11;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)lineEnd.z,a_00,VVar3,(MethodInfo *)0x0);
    func_?();
    return 1;
  }
  return 0;
}


/* Void DistancePointLine(Vector3, Vector3, Vector3, Single ByRef, Vector3 ByRef, Single ByRef) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_DistancePointLine_2
               (Vector3 point,Vector3 lineStart,Vector3 lineEnd,float *distance,
               Vector3 *intersection,float *u,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = lineEnd.z;
  fVar2 = lineStart.z;
  a_00.y = lineEnd.y;
  a_00.x = lineEnd.x;
  a_00.z = lineEnd.z;
  b.y = lineStart.y;
  b.x = lineStart.x;
  b.z = lineStart.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffec,a_00,b,(MethodInfo *)0x0);
  fVar3 = (float10)func_?(&stack0xffffffe0,0);
  _puStack_10 = (ulonglong)(uint)point.x;
  *u = ((lineEnd.y - lineStart.y) * (point.y - lineStart.y) +
        (lineEnd.x - lineStart.x) * (point.x - lineStart.x) +
       (lineEnd.z - lineStart.z) * (point.z - lineStart.z)) / ((float)fVar3 * (float)fVar3);
  a_01.y = lineEnd.y;
  a_01.x = lineEnd.x;
  a_01.z = fVar1;
  b_00.y = lineStart.y;
  b_00.x = lineStart.x;
  b_00.z = fVar2;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&lineEnd,a_01,b_00,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  stack0xfffffff4 = (float)&lineEnd;
  point.x = pVVar4->z;
  fVar7 = (float)uVar6;
  VVar8.x = (float)uVar5;
  VVar8 = (Vector3)CONCAT84(VVar8._0_8_,VVar8.x);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     (&lineEnd,(float)&stack0xfffffffc,VVar8,(MethodInfo *)0x0);
  fVar1 = lineStart.x;
  lineEnd.y = 0.0;
  uVar9 = pVVar4->x;
  uVar10 = pVVar4->y;
  lineEnd.x = pVVar4->z;
  lineStart.x = fVar2;
  VVar8.y = (float)uVar9;
  VVar8.x = fVar1;
  VVar8.z = fVar2;
  lineStart.y = (float)uVar9;
  lineStart.z = (float)uVar10;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&lineStart,VVar8,*pVVar4,(MethodInfo *)0x0);
  uVar11 = pVVar4->x;
  uVar12 = pVVar4->y;
  puStack13 = (undefined1 *)pVVar4->z;
  VVar8 = *pVVar4;
  intersection->x = (float)uVar11;
  intersection->y = (float)uVar12;
  intersection->z = (float)puStack13;
  pfVar14 = (float *)_puStack_10;
  lineEnd.z = (float)&lineStart;
  lineEnd.y = (float)&UNK_?;
  a.y = fVar1;
  a.x = (float)pfVar14;
  a.z = (float)uVar9;
  puStack15 = (undefined *)uVar12;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)lineEnd.z,a,VVar8,(MethodInfo *)0x0);
  puStack13 = &stack0xffffffd4;
  fVar3 = (float10)func_?();
  *pfVar14 = (float)fVar3;
  return;
}


/* Vector3 DivideVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_DivideVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  fVar1 = vec0->z;
  fVar2 = vec1->z;
  fVar3 = vec0->y;
  fVar4 = vec1->y;
  fVar5 = vec0->x;
  fVar6 = vec1->x;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,fVar5 / fVar6,fVar3 / fVar4,fVar1 / fVar2,0);
  return __return_storage_ptr__;
}


/* Boolean DoLinesIntersect(Vector2, Vector2, Vector2, Vector2, Vector2 ByRef) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_DoLinesIntersect
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,Vector2 *ptIntersection,
               MethodInfo *method)

{
  fVar1 = p1.x - p0.x;
  fVar2 = p1.y - p0.y;
  dVar3 = (double)((p3.y - p2.y) * fVar1 - (p3.x - p2.x) * fVar2);
  dVar4 = (double)((p0.y - p2.y) * (p3.x - p2.x) - (p0.x - p2.x) * (p3.y - p2.y));
  dVar5 = (double)((p0.y - p2.y) * fVar1 - (p0.x - p2.x) * fVar2);
  uVar6 = (uint)((ulonglong)_UNK_? >> 0x20);
  if (((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar6,
                        SUB84(dVar4,0) & (uint)_UNK_?) < _UNK_?) &&
     ((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar6,SUB84(dVar5,0) & (uint)_UNK_?
                      ) < _UNK_?)) {
    bVar7 = MathFunctions_IsCoincidentalLineSegmentsOverlapping(p0,p1,p2,p3,(MethodInfo *)0x0);
    return bVar7 != 0;
  }
  if (((dVar3 != 0.0) &&
      (((dVar4 = dVar4 / dVar3, 0.0 <= dVar4 && (dVar4 <= _UNK_?)) && (0.0 <= dVar5 / dVar3))
      )) && (dVar5 / dVar3 <= _UNK_?)) {
    ptIntersection->x = (float)((double)fVar1 * dVar4 + (double)p0.x);
    ptIntersection->y = (float)((double)fVar2 * dVar4 + (double)p0.y);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      fVar3 = (float10)func_?(&stack0xffffff18,iVar2,iVar1,0);
      VStack_4.z = (float)fVar3;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      func_?(auStack_5,iVar2,iVar1,
                      (float)(double)CONCAT44((uint)((ulonglong)(double)VStack_4.z >> 0x20) &
                                              _UNK_?,
                                              SUB84((double)VStack_4.z,0) & _UNK_?),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  puVar6 = (undefined8 *)func_?();
  puVar6 = (undefined8 *)func_?(&VStack_4,&m,*puVar6,*(undefined4 *)(puVar6 + 1),0);
  uStack_7 = *puVar6;
  InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
            (&VStack_4,(InputToPlayerMovementAndroid *)&b,(MethodInfo *)0x0);
  puVar6 = (undefined8 *)func_?();
  VStack_4._4_8_ = *puVar6;
  fVar8 = *(float *)(puVar6 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar8;
  a.x = VStack_4.y;
  a.y = VStack_4.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
            (&VStack_9,2.0,a,(MethodInfo *)0x0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] FlipPolygon(List`1[UnityEngine.Vector2]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::MathFunctions::MathFunctions_FlipPolygon
          (List_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
            (this,(IEnumerable_1_VoxelHit_ *)points,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector2>_
            );
  index = (undefined1 *)0x0;
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    while( true ) {
      puVar1 = index;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)points,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                         );
      if ((int)pOVar2 / 2 <= (int)puVar1) {
        return (List_1_UnityEngine_Vector2_ *)this;
      }
      if (this == (List_1_VoxelHit_ *)0x0) break;
      value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        ((List_1_UnityEngine_Vector2_ *)this,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                         );
      value_00 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                 List_1_UnityEngine_Vector2__get_Item
                           ((List_1_UnityEngine_Vector2_ *)this,
                            (int)pOVar2 +
                            (-1 - (int)
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            ),
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                           );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                ((List_1_UnityEngine_Vector2_ *)this,
                 (int32_t)
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                 ,value_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                         );
      pMVar3 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                ((List_1_UnityEngine_Vector2_ *)this,
                 (int)pOVar2 +
                 (-1 - (int)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                 ),value,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      index = (undefined1 *)((int)&pMVar3->methodPointer + 1);
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_UnityEngine_Vector2_ *)(*pcVar4)();
  return pLVar5;
}


/* Vector3 FloorVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_FloorVector
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


/* Vector3 GetMaxVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMaxVector
                    (Vector3 *__return_storage_ptr__,Vector3 max0,Vector3 max1,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  iVar3 = 0;
  do {
    fVar4 = (float10)func_?(&max0,iVar3,0);
    fStack_5 = (float)fVar4;
    fVar4 = (float10)func_?(&max1,iVar3,0);
    fStack_6 = (float)fVar4;
    pVVar7 = &max1;
    if (fStack_6 < fStack_5) {
      pVVar7 = &max0;
    }
    fVar4 = (float10)func_?(pVVar7,iVar3,0);
    fStack_5 = (float)fVar4;
    func_?(&uStack_2,iVar3,fStack_5,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_2;
  __return_storage_ptr__->y = (float)uStack_2._4_4_;
  __return_storage_ptr__->z = fStack_1;
  return __return_storage_ptr__;
}


/* Vector3 GetMinVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetMinVector
                    (Vector3 *__return_storage_ptr__,Vector3 min0,Vector3 min1,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  iVar3 = 0;
  do {
    fVar4 = (float10)func_?(&min0,iVar3,0);
    fStack_5 = (float)fVar4;
    fVar4 = (float10)func_?(&min1,iVar3,0);
    fStack_6 = (float)fVar4;
    pVVar7 = &min1;
    if (fStack_5 < fStack_6) {
      pVVar7 = &min0;
    }
    fVar4 = (float10)func_?(pVVar7,iVar3,0);
    fStack_6 = (float)fVar4;
    func_?(&uStack_2,iVar3,fStack_6,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_2;
  __return_storage_ptr__->y = (float)uStack_2._4_4_;
  __return_storage_ptr__->z = fStack_1;
  return __return_storage_ptr__;
}


/* Vector3 GetNormal(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 pa,Vector3 pb,Vector3 pc,
                    MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_1,(pc.z - pa.z) * (pb.y - pa.y) - (pb.z - pa.z) * (pc.y - pa.y),
                  (pb.z - pa.z) * (pc.x - pa.x) - (pc.z - pa.z) * (pb.x - pa.x),
                  (pc.y - pa.y) * (pb.x - pa.x) - (pb.y - pa.y) * (pc.x - pa.x),0);
  puVar3 = (undefined8 *)func_?(&pb,&uStack_1,0);
  uVar4 = *puVar3;
  fVar5 = *(float *)(puVar3 + 1);
  __return_storage_ptr__->x = (float)(int)uVar4;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Quaternion InertiaX(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaX
          (Quaternion *__return_storage_ptr__,Vector3 eulerFrom,Vector3 eulerTo,float speed,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = eulerFrom.x;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffdc,euler,(MethodInfo *)0x0);
  fVar2 = 0.0;
  euler_00.y = 0.0;
  euler_00.z = 0.0;
  euler_00.x = eulerTo.x;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffec,euler_00,(MethodInfo *)pQVar1->w);
  fVar3 = 0.0;
  fVar4 = pQVar1->x;
  fVar5 = pQVar1->y;
  fVar6 = pQVar1->z;
  fVar7 = pQVar1->w;
  puVar8 = &UNK_?;
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  a.y = fVar2;
  a.x = eulerTo.x;
  a.z = (float)puVar8;
  a.w = fVar3;
  b.y = fVar5;
  b.x = fVar4;
  b.z = fVar6;
  b.w = fVar7;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffdc,a,b,fVar9 * speed,(MethodInfo *)0x0);
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* Quaternion InertiaY(Vector3, Vector3, Single) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_InertiaY
          (Quaternion *__return_storage_ptr__,Vector3 eulerFrom,Vector3 eulerTo,float speed,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  auVar1._4_8_ = 0;
  auVar1._0_4_ = eulerFrom.y;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffdc,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
  fVar3 = 0.0;
  auVar4._4_8_ = 0;
  auVar4._0_4_ = eulerTo.y;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&stack0xffffffec,(Vector3)(auVar4 << 0x20),
                      (MethodInfo *)pQVar2->w);
  fVar5 = 0.0;
  fVar6 = pQVar2->x;
  fVar7 = pQVar2->y;
  fVar8 = pQVar2->z;
  fVar9 = pQVar2->w;
  puVar10 = &UNK_?;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  a.y = eulerTo.y;
  a.x = fVar3;
  a.z = (float)puVar10;
  a.w = fVar5;
  b.y = fVar7;
  b.x = fVar6;
  b.z = fVar8;
  b.w = fVar9;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                     ((Quaternion *)&stack0xffffffdc,a,b,fVar11 * speed,(MethodInfo *)0x0);
  fVar6 = pQVar2->y;
  fVar7 = pQVar2->z;
  fVar8 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
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
  fVar1 = p1.x - p0.x;
  fVar2 = p1.y - p0.y;
  fVar3 = (p3.y - p2.y) * fVar1 - (p3.x - p2.x) * fVar2;
  fVar4 = (p0.y - p2.y) * fVar1 - (p0.x - p2.x) * fVar2;
  fVar5 = (p0.y - p2.y) * (p3.x - p2.x) - (p0.x - p2.x) * (p3.y - p2.y);
  if (fVar3 == 0.0) {
    if ((fVar5 == 0.0) && (fVar4 == 0.0)) {
      return MathFunctions_IntersectResult__Enum_COINCIDENT;
    }
    return MathFunctions_IntersectResult__Enum_PARALLEL;
  }
  fVar5 = fVar5 / fVar3;
  if ((((0.0 <= fVar5) && (fVar5 <= _UNK_?)) && (fVar4 = fVar4 / fVar3, 0.0 <= fVar4)) &&
     (fVar4 <= _UNK_?)) {
    ptIntersection->x = fVar1 * fVar5 + p0.x;
    ptIntersection->y = fVar2 * fVar5 + p0.y;
    return MathFunctions_IntersectResult__Enum_INTERESECTING;
  }
  return MathFunctions_IntersectResult__Enum_NOT_INTERESECTING;
}


/* Boolean IsCoincidentalLineSegmentsOverlapping(Vector2, Vector2, Vector2, Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsCoincidentalLineSegmentsOverlapping
               (Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__System__Single,4);
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction(p0,p2,(MethodInfo *)0x0);
  fVar2 = (float10)func_?(&stack0xfffffff0,0);
  if (iVar1 == 0) {
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    pfVar3 = (float *)(iVar1 + 0x10);
    *pfVar3 = (float)fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
              (p0,p3,(MethodInfo *)0x0);
    fVar2 = (float10)func_?();
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(float *)(iVar1 + 0x14) = (float)fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
              (p1,p2,(MethodInfo *)0x0);
    fVar2 = (float10)func_?();
    if (2 < *(uint *)(iVar1 + 0xc)) {
      *(float *)(iVar1 + 0x18) = (float)fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
                (p1,p3,(MethodInfo *)0x0);
      fVar2 = (float10)func_?();
      if (*(uint *)(iVar1 + 0xc) < 4) goto code_?;
      fVar4 = 0.0;
      *(float *)(iVar1 + 0x1c) = (float)fVar2;
      uVar5 = 0;
      fStack_6 = 0.0;
      while( true ) {
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
          if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
                    (p0,p1,(MethodInfo *)0x0);
          fVar2 = (float10)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
                    (p2,p3,(MethodInfo *)0x0);
          fVar7 = (float10)func_?();
          return fStack_6 < (float)(fVar7 + (float10)(float)fVar2);
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) break;
        fVar8 = *pfVar3;
        if (fVar4 < fVar8) {
          fVar4 = fVar8;
          fStack_6 = fVar8;
        }
        uVar5 = uVar5 + 1;
        pfVar3 = pfVar3 + 1;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean IsFloatValid(Single) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsFloatValid
               (float floatToValidate,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(floatToValidate,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(floatToValidate,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Int32 IsLineSegmentIntersectingShape(Vector2, Vector2, List`1[UnityEngine.Vector2], Boolean) */

int32_t Assembly-CSharp.dll::MathFunctions::MathFunctions_IsLineSegmentIntersectingShape
                  (Vector2 p0,Vector2 p1,List_1_UnityEngine_Vector2_ *points,bool isOpen,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (points == (List_1_UnityEngine_Vector2_ *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)points,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                     );
  if (isOpen != 0) {
    pOVar4 = (Object *)((int)&pOVar4[-1].monitor + 3);
  }
  func_?(&uStack_1,0xbf800000,0xbf800000,0);
  fVar5 = 0.0;
  if (0 < (int)pOVar4) {
    puVar6 = (undefined1 *)(p1.x - p0.x);
    fVar7 = p1.y - p0.y;
    do {
      fVar8 = in_stack_9.x;
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)points,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                         );
      VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__get_Item
                         (points,(int)fVar5 % (int)pOVar10,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                         );
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)points,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                         );
      fVar12 = (float)((int)fVar5 + 1);
      in_stack_9 =
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
           List_1_UnityEngine_Vector2__get_Item
                     (points,(int)fVar12 % (int)pOVar10,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                     );
      fVar13 = VVar11.y;
      fVar8 = fVar8 - VVar11.x;
      fVar14 = p0.x - VVar11.x;
      fVar15 = in_stack_9.y - fVar13;
      dVar16 = (double)(fVar15 * (float)puVar6 - fVar8 * fVar7);
      dVar17 = (double)((p0.y - fVar13) * fVar8 - fVar14 * fVar15);
      dVar18 = (double)((p0.y - fVar13) * (float)puVar6 - fVar14 * fVar7);
      uVar19 = (uint)((ulonglong)_UNK_? >> 0x20);
      if ((_UNK_? <=
           (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar19,
                            SUB84(dVar17,0) & (uint)_UNK_?)) ||
         (_UNK_? <=
          (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar19,
                           SUB84(dVar18,0) & (uint)_UNK_?))) {
        if ((dVar16 != 0.0) &&
           ((((dVar17 = dVar17 / dVar16, 0.0 <= dVar17 && (dVar17 <= _UNK_?)) &&
             (0.0 <= dVar18 / dVar16)) && (dVar18 / dVar16 <= _UNK_?)))) {
          fVar14 = (float)((double)(float)puVar6 * dVar17 + (double)p0.x);
          fVar12 = (float)((double)fVar7 * dVar17 + (double)p0.y);
          uStack_1 = CONCAT44(fVar12,fVar14);
          goto code_?;
        }
      }
      else {
        p0_00.y = in_stack_9.x;
        p0_00.x = fVar13;
        p1_00.y = 0.0;
        p1_00.x = in_stack_9.y;
        bVar20 = MathFunctions_IsCoincidentalLineSegmentsOverlapping
                          (p0_00,p1_00,VVar11,in_stack_9,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          fVar12 = uStack_1._4_4_;
          fVar14 = (float)uStack_1;
code_?:
          if ((fVar14 == _UNK_?) && (fVar12 == _UNK_?)) {
            return (int32_t)fVar5;
          }
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)points,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                             );
          puVar6 = (undefined1 *)((int)&pOVar4[-1].monitor + 3);
          in_stack_9.y = (float)puVar6;
          in_stack_9.x = (float)points;
          uStack_1 = CONCAT44(&UNK_?,(float)uStack_1);
          VVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                   List_1_UnityEngine_Vector2__get_Item
                             (points,(int32_t)puVar6,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                             );
          if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
            func_?();
          }
          a.y = fVar12;
          a.x = fVar14;
          UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
                    (a,VVar11,(MethodInfo *)0x0);
          puVar6 = &stack0xffffffa0;
          pOVar4 = (Object *)0x0;
          puVar21 = &UNK_?;
          fVar22 = (float10)func_?();
          if (_UNK_? < (double)fVar22) {
            return (int32_t)puVar21;
          }
        }
      }
      fVar5 = fVar12;
    } while ((int)fVar5 < (int)pOVar4);
  }
  return -1;
}


/* Boolean IsPointInShape(IList`1[UnityEngine.Vector2], Vector2) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_IsPointInShape
               (IList_1_UnityEngine_Vector2_ *shapePoints,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_1 = false;
  if (shapePoints == (IList_1_UnityEngine_Vector2_ *)0x0) {
    func_?(0);
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
          ppMVar10 = &(&(shapePoints->klass->vtable).IndexOf)
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
                              TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,3)
    ;
code_?:
    (*(code *)*ppMVar10)(shapePoints,iVar4,ppMVar10[1]);
    if (point.y < extraout_EDX) {
code_?:
      func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      if (extraout_EDX_01 <= point.y) {
        func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                        shapePoints,iVar4);
        if (point.y < extraout_EDX_02) goto code_?;
      }
    }
    else {
      func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      if (extraout_EDX_00 <= point.y) goto code_?;
code_?:
      fVar11 = (float)func_?(3,
                                     TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                     ,shapePoints,iStack_6);
      fVar12 = (float)func_?(3,
                                      TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                      ,shapePoints,iVar4);
      func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iVar4);
      func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iStack_6);
      func_?(3,TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>,
                      shapePoints,iVar4);
      fVar13 = (float)func_?(3,
                                      TypeInfo__System__Collections__Generic__IList<UnityEngine::Vector2>
                                      ,shapePoints,iVar4);
      if (point.x < ((fVar11 - fVar12) * (point.y - extraout_EDX_03)) /
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
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.w,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(quaternion.z,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(3.6029804e-29,(MethodInfo *)0x0)
            ;
            if (bVar1 == 0) {
              bVar1 = mscorlib.dll::System::Single::Single_IsInfinity
                                (quaternion.w,(MethodInfo *)0x0);
              if (bVar1 == 0) {
                bVar1 = mscorlib.dll::System::Single::Single_IsInfinity
                                  (3.602988e-29,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  return 1;
                }
              }
            }
          }
          return 0;
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
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(vector.z,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(3.6030502e-29,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(vector.z,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              return 1;
            }
          }
        }
        return 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = (pb.y - pa.y) * (pc.z - pa.z) - (pc.y - pa.y) * (pb.z - pa.z);
  fStack_6 = (pc.x - pa.x) * (pb.z - pa.z) - (pb.x - pa.x) * (pc.z - pa.z);
  fStack_7 = (pb.x - pa.x) * (pc.y - pa.y) - (pc.x - pa.x) * (pb.y - pa.y);
  func_?(&fStack_5,0);
  fStack_8 = p2.y - p1.y;
  fStack_9 = ((float)((uint)fStack_5 ^ _UNK_?) * pa.x - fStack_6 * pa.y) -
              fStack_7 * pa.z;
  fStack_10 = p2.x - p1.x;
  fStack_11 = fStack_8 * fStack_6 + fStack_10 * fStack_5 + (p2.z - p1.z) * fStack_7;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
      (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_11 >> 0x20) & _UNK_?,
                              SUB84((double)fStack_11,0) & _UNK_?)) {
    fVar12 = (float)((uint)(p1.x * fStack_5 + fStack_9 + p1.y * fStack_6 + p1.z * fStack_7) ^
                   _UNK_?) / fStack_11;
    fStack_13 = fStack_10 * fVar12 + p1.x;
    fStack_14 = fStack_8 * fVar12 + p1.y;
    fStack_15 = (p2.z - p1.z) * fVar12 + p1.z;
    p->x = fStack_13;
    p->y = fStack_14;
    p->z = fStack_15;
    if ((0.0 <= fVar12) && (fVar12 <= _UNK_?)) {
      fStack_13 = pa.x - fStack_13;
      fStack_14 = pa.y - fStack_14;
      fStack_15 = pa.z - fStack_15;
      func_?(&fStack_13,0);
      uStack_1._0_4_ = pb.x - p->x;
      uStack_1._4_4_ = pb.y - p->y;
      fStack_3 = pb.z - p->z;
      func_?(&uStack_1,0);
      uStack_2._0_4_ = pc.x - p->x;
      uStack_2._4_4_ = pc.y - p->y;
      fStack_4 = pc.z - p->z;
      func_?(&uStack_2,0);
      fVar16 = uStack_2._4_4_ * fStack_14;
      fVar17 = uStack_2._4_4_ * uStack_1._4_4_;
      fVar18 = (float)uStack_2 * fStack_13;
      fVar12 = (float)uStack_2 * (float)uStack_1;
      fVar19 = (float)uStack_1 * fStack_13;
      fVar20 = fStack_4 * fStack_15;
      fVar21 = fStack_4 * fStack_3;
      fVar22 = fStack_3 * fStack_15;
      fVar23 = uStack_1._4_4_ * fStack_14;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      dVar24 = (double)(fVar23 + fVar19 + fVar22);
      func_?();
      dVar25 = (double)(fVar17 + fVar12 + fVar21);
      func_?();
      dVar26 = (double)(fVar16 + fVar18 + fVar20);
      func_?();
      dVar24 = (double)(((float)dVar24 + (float)dVar25 + (float)dVar26) * _UNK_? - _UNK_?)
      ;
      if ((float)(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_?,
                                  SUB84(dVar24,0) & _UNK_?) <= _UNK_?) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  func_?(&uStack_3,(pc.z - pa.z) * (pb.y - pa.y) - (pb.z - pa.z) * (pc.y - pa.y),
                  (pb.z - pa.z) * (pc.x - pa.x) - (pc.z - pa.z) * (pb.x - pa.x),
                  (pc.y - pa.y) * (pb.x - pa.x) - (pc.x - pa.x) * (pb.y - pa.y),0);
  puVar7 = (undefined8 *)func_?(&puStack_8,&uStack_3,0);
  uStack_9 = *puVar7;
  fVar10 = *(float *)(puVar7 + 1);
  n->x = (float)(int)uStack_9;
  n->y = (float)(int)((ulonglong)uStack_9 >> 0x20);
  n->z = fVar10;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  lhs.z = fVar10;
  lhs.x = (float)(undefined4)uStack_9;
  lhs.y = uStack_9._4_4_;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                     (lhs,lineDir,(MethodInfo *)0x0);
  if (fVar10 <= _UNK_?) {
    fVar11 = (float)((uint)n->x ^ _UNK_?);
    fVar10 = n->y;
    fVar12 = n->z;
    fVar13 = p2.y - p1.y;
    fStack_14 = p2.x - p1.x;
    fStack_15 = fVar13 * n->y + fStack_14 * n->x + (p2.z - p1.z) * n->z;
    uStack_9._4_4_ = fVar13;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      uStack_3 = CONCAT44(TypeInfo__UnityEngine__Mathf,&UNK_?);
      func_?();
    }
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
        (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_15 >> 0x20) & _UNK_?,
                                SUB84((double)fStack_15,0) & _UNK_?)) {
      fVar10 = (float)((uint)(p1.x * n->x + ((fVar11 * pa.x - fVar10 * pa.y) - fVar12 * pa.z) +
                              p1.y * n->y + p1.z * n->z) ^ _UNK_?) / fStack_15;
      fStack_16 = fStack_14 * fVar10 + p1.x;
      fStack_17 = uStack_9._4_4_ * fVar10 + p1.y;
      fStack_18 = (p2.z - p1.z) * fVar10 + p1.z;
      p->x = fStack_16;
      p->y = fStack_17;
      p->z = fStack_18;
      if ((0.0 <= fVar10) && (fVar10 <= _UNK_?)) {
        fStack_16 = pa.x - fStack_16;
        uStack_3 = ZEXT48(&fStack_16);
        fStack_17 = pa.y - fStack_17;
        fStack_18 = pa.z - fStack_18;
        func_?();
        puStack_19 = &uStack_1;
        uStack_1._0_4_ = pb.x - p->x;
        puStack_20 = (undefined *)0x0;
        uStack_1._4_4_ = pb.y - p->y;
        fStack_4 = pb.z - p->z;
        func_?();
        uStack_2._0_4_ = pc.x - p->x;
        puStack_8 = (undefined *)0x0;
        uStack_2._4_4_ = pc.y - p->y;
        fStack_5 = pc.z - p->z;
        func_?(&uStack_2);
        fVar21 = uStack_2._4_4_ * fStack_17;
        fVar11 = uStack_2._4_4_ * uStack_1._4_4_;
        fVar22 = (float)uStack_2 * fStack_16;
        fVar10 = (float)uStack_2 * (float)uStack_1;
        fVar23 = (float)uStack_1 * fStack_16;
        fVar13 = fStack_5 * fStack_18;
        fVar12 = fStack_5 * fStack_4;
        fVar24 = fStack_4 * fStack_18;
        fVar25 = uStack_1._4_4_ * fStack_17;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          uStack_3 = CONCAT44(TypeInfo__UnityEngine__Mathf,&UNK_?);
          func_?();
        }
        dVar26 = (double)(fVar25 + fVar23 + fVar24);
        uStack_3 = CONCAT44(&UNK_?,(undefined4)uStack_3);
        func_?();
        dVar27 = (double)(fVar11 + fVar10 + fVar12);
        uStack_3 = CONCAT44(&UNK_?,(undefined4)uStack_3);
        func_?();
        dVar28 = (double)(fVar21 + fVar22 + fVar13);
        uStack_3 = CONCAT44(&UNK_?,(undefined4)uStack_3);
        func_?();
        dVar26 = (double)(((float)dVar26 + (float)dVar27 + (float)dVar28) * _UNK_? -
                        _UNK_?);
        if ((float)(double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_?,
                                    SUB84(dVar26,0) & _UNK_?) <= _UNK_?) {
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,a.x * b.x,b.y * a.y,b.z * a.z,0);
  return __return_storage_ptr__;
}


/* Vector3 MultiplyVector(Vector3 ByRef, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_MultiplyVector
                    (Vector3 *__return_storage_ptr__,Vector3 *vec0,Vector3 *vec1,MethodInfo *method)

{
  fVar1 = vec0->z;
  fVar2 = vec1->z;
  fVar3 = vec0->y;
  fVar4 = vec1->y;
  fVar5 = vec0->x;
  fVar6 = vec1->x;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,fVar6 * fVar5,fVar4 * fVar3,fVar2 * fVar1,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  a.z = dir.z;
  a.x = dir.x;
  a.y = dir.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     (&dir,a,(MethodInfo *)0x0);
  v1.z = fVar2;
  v1.x = (float)(int)planeNormal._4_8_;
  v1.y = (float)(int)((ulonglong)planeNormal._4_8_ >> 0x20);
  fVar2 = MathFunctions_SignedAngle_1(v1,*pVVar1,planeNormal,(MethodInfo *)0x0);
  return (fVar2 + _UNK_?) * _UNK_?;
}


/* Single PitchFromLocalDirection(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_PitchFromLocalDirection
                (Vector3 localDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                    (*pVVar1,localDirection,(MethodInfo *)0x0);
  return fVar2 - _UNK_?;
}


/* Single Pow2(Single) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Pow2(float val,MethodInfo *method)

{
  return val * val;
}


/* Quaternion QuaternionFromAngleAndAxis(Single, Vector3) */

Quaternion *
Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
          (Quaternion *__return_storage_ptr__,float angle,Vector3 AxisVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
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
  bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(quaternion.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(quaternion.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(quaternion.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(quaternion.w,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* Boolean QuaternionIsNan(Quaternion) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_QuaternionIsNan
               (Quaternion quaternion,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Single::Single_IsNaN(quaternion.w,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


/* Vector3 RoundVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_RoundVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,int32_t decimals,
                    MethodInfo *method)

{
  mscorlib.dll::System::Math::Math_Round_4((double)vector.x,decimals,(MethodInfo *)0x0);
  dVar1 = mscorlib.dll::System::Math::Math_Round_4((double)vector.y,decimals,(MethodInfo *)0x0);
  dVar1 = mscorlib.dll::System::Math::Math_Round_4
                    ((double)vector.z,decimals,(MethodInfo *)(float)dVar1);
  _UNK_? = (double)vector.z;
  _UNK_? = (float)dVar1;
  return (Vector3 *)&UNK_?;
}


/* Single SignedAngle(Vector2, Vector2) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle
                (Vector2 v1,Vector2 v2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Dot(v1,v2,(MethodInfo *)0x0);
  fVar1 = (float10)func_?();
  return (float)fVar1;
}


/* Single SignedAngle(Vector3, Vector3, Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedAngle_1
                (Vector3 v1,Vector3 v2,Vector3 normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     ((Vector3 *)&stack0xfffffff0,v1,v2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(normal,*pVVar1,(MethodInfo *)0x0);
  auVar2._8_4_ = 0;
  auVar2._0_8_ = v1._4_8_;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
            ((Vector3)(auVar2 << 0x20),v2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    pMStack3 = TypeInfo__UnityEngine__Mathf;
    func_?();
  }
  fVar4 = (float10)func_?();
  return (float)fVar4;
}


/* Double SignedDistanceTo(Plane ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo
                 (Plane *plane,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,plane,0);
  uStack_3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  uVar5._0_4_ = point->x;
  uVar5._4_4_ = point->y;
  fVar6 = point->z;
  fStack_7 = (float)(undefined4)uVar5;
  uStack_8 = uVar5._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
    uVar5 = CONCAT44(uStack_8,fStack_7);
  }
  lhs.z = fVar4;
  lhs.x = (float)(undefined4)uStack_3;
  lhs.y = uStack_3._4_4_;
  rhs.z = fVar6;
  rhs.x = (float)(int)uVar5;
  rhs.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,rhs,(MethodInfo *)0x0);
  uStack_3._4_4_ = fVar4;
  puVar1 = (undefined8 *)func_?(auStack_2,plane,0);
  uStack_9 = *puVar1;
  fVar4 = planeOrigin->x;
  puVar1 = (undefined8 *)func_?(auStack_2,plane,0);
  uStack_10 = (undefined4)*puVar1;
  fStack_7 = (float)((ulonglong)*puVar1 >> 0x20);
  fVar6 = planeOrigin->y;
  iVar11 = func_?(auStack_12,plane,0);
  return (double)((float)((uint)(fStack_7 * fVar6 + (float)uStack_9 * fVar4 +
                                planeOrigin->z * *(float *)(iVar11 + 8)) ^ _UNK_?) +
                 uStack_3._4_4_);
}


/* Double SignedDistanceTo(Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedDistanceTo_1
                 (Vector3 *planeNormal,Vector3 *planeOrigin,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  rhs = *point;
  lhs = *planeNormal;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,rhs,(MethodInfo *)0x0);
  return (double)((float)((uint)(planeNormal->y * planeOrigin->y + planeNormal->x * planeOrigin->x +
                                planeNormal->z * planeOrigin->z) ^ _UNK_?) + fVar1);
}


/* Single SignedYawFromLocalDirection(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_SignedYawFromLocalDirection
                (Vector3 localDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffe8,localDirection.x,0,localDirection.z,0);
  puVar1 = (undefined8 *)func_?(&localDirection,&stack0xffffffe8,0);
  fVar2 = *(float *)(puVar1 + 1);
  uVar3 = (undefined4)*puVar1;
  uVar4 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     (&localDirection,(MethodInfo *)0x0);
  to.y = (float)uVar4;
  to.x = (float)uVar3;
  to.z = fVar2;
  localDirection.z =
       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(*pVVar5,to,(MethodInfo *)0x0)
  ;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  lhs.y = (float)uVar7;
  lhs.x = (float)uVar6;
  lhs.z = fVar2;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                    (lhs,*pVVar5,(MethodInfo *)0x0);
  if (fVar2 < 0.0) {
    localDirection.z = (float)((uint)localDirection.z ^ _UNK_?);
  }
  return localDirection.z;
}


/* IntVector ToIntVector(Vector3) */

IntVector Assembly-CSharp.dll::MathFunctions::MathFunctions_ToIntVector
                    (Vector3 v,MethodInfo *method)

{
  *(undefined4 *)v.x = 0;
  *(undefined2 *)((int)v.x + 4) = 0;
  func_?(v.x,(int)v.y & 0xffff,(int)v.z & 0xffff,(int)(float)method & 0xffff,0);
  IVar1.z = extraout_DX;
  IVar1._0_4_ = v.x;
  return IVar1;
}


/* Double Truncate(Double, Int32) */

double Assembly-CSharp.dll::MathFunctions::MathFunctions_Truncate
                 (double number,int32_t digits,MethodInfo *method)

{
  dVar1 = _UNK_?;
  func_?();
  return (double)(int)(dVar1 * number) / dVar1;
}


/* Vector3 TruncateVector(Vector3, Int32) */

Vector3 * Assembly-CSharp.dll::MathFunctions::MathFunctions_TruncateVector
                    (Vector3 *__return_storage_ptr__,Vector3 vector,int32_t digits,
                    MethodInfo *method)

{
  dVar1 = _UNK_?;
  func_?();
  __return_storage_ptr__->x = (float)((double)(int)((double)vector.x * dVar1) / dVar1);
  __return_storage_ptr__->y = (float)((double)(int)((double)vector.y * dVar1) / dVar1);
  __return_storage_ptr__->z = (float)((double)(int)((double)vector.z * dVar1) / dVar1);
  return __return_storage_ptr__;
}


/* Void Vector2ToVector3(Vector2 ByRef, Vector3 ByRef, Int32, Single) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector2ToVector3
               (Vector2 *from,Vector3 *to,int32_t addAxis,float addValue,MethodInfo *method)

{
  iVar1 = 0;
  iVar2 = 0;
  do {
    fVar3 = addValue;
    if (iVar2 != addAxis) {
      fVar4 = (float10)func_?(from,iVar1,0);
      iVar1 = iVar1 + 1;
      fVar3 = (float)fVar4;
    }
    func_?(to,iVar2,fVar3,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (addAxis == 2) {
    func_?(to,2,addValue,0);
  }
  return;
}


/* Void Vector3ToVector2(Vector3 ByRef, Vector2 ByRef, Int32) */

void Assembly-CSharp.dll::MathFunctions::MathFunctions_Vector3ToVector2
               (Vector3 *from,Vector2 *to,int32_t ignoreAxis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ignoreAxis == 2) {
    uVar1 = from->x;
    v = *from;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (v,(MethodInfo *)0x0);
    to->x = (float)uVar1;
    fStack_3 = VVar2.y;
    to->y = fStack_3;
  }
  iVar4 = 0;
  iVar5 = 0;
  do {
    if (iVar5 != ignoreAxis) {
      fVar6 = (float10)func_?(from,iVar5,0);
      func_?(to,iVar4,(float)fVar6,0);
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}


/* Boolean VectorIsFinite(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsFinite
               (Vector3 vector,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(vector.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(vector.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(vector.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean VectorIsNan(Vector3) */

bool Assembly-CSharp.dll::MathFunctions::MathFunctions_VectorIsNan
               (Vector3 vector,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsNaN(vector.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* Single Yaw(Vector3) */

float Assembly-CSharp.dll::MathFunctions::MathFunctions_Yaw(Vector3 dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     ((Vector3 *)&stack0xffffffe8,dir,(MethodInfo *)0x0);
  v2 = *pVVar1;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  v1.y = (float)uVar4;
  v1.x = (float)uVar3;
  v1.z = fVar2;
  fVar2 = MathFunctions_SignedAngle_1(v1,v2,*pVVar1,(MethodInfo *)0x0);
  return (fVar2 + _UNK_?) * _UNK_?;
}


/* Vector2 xy(Vector3) */

Vector2 Assembly-CSharp.dll::MathFunctions::MathFunctions_xy(Vector3 v,MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  func_?(&VStack_1,v.x,v.y,0);
  return VStack_1;
}

