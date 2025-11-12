
/* Void AlignDepth(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignDepth
               (TriangPrismShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Void AlignHeight(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignHeight
               (TriangPrismShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Void AlignWidth(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_AlignWidth
               (TriangPrismShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_ContainsPoint
               (TriangPrismShape3D *this,Vector3 *point,MethodInfo *method)

{
  VStack_1.z = (this->fields)._baseCenter.z;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  VStack_3.x = point->x;
  VStack_3.y = point->y;
  VStack_3.z = point->z;
  baseWidth = (this->fields)._width;
  baseDepth = (this->fields)._depth;
  bVar4 = PrismMath::PrismMath_ContainsPoint
                    (&VStack_3,&VStack_1,baseWidth,baseDepth,baseWidth,baseDepth,
                     (this->fields)._height,&QStack_2,
                     (PrismEpsilon)(this->fields)._epsilon._ptContainEps,(MethodInfo *)0x0);
  return bVar4;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_GetAABB
                 (AABB *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._baseCenter.z;
  VStack_2.x = (this->fields)._baseCenter.x;
  VStack_2.y = (this->fields)._baseCenter.y;
  baseWidth = (this->fields)._width;
  pointCloud = PrismMath::PrismMath_CalcTriangPrismCornerPoints
                         (&VStack_2,baseWidth,(this->fields)._depth,baseWidth,(this->fields)._depth
                          ,(this->fields)._height,&QStack_1,(MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                     (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void MakeEquilateral(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_MakeEquilateral
               (TriangPrismShape3D *this,float sideLength,MethodInfo *method)

{
  (this->fields)._width = sideLength;
  fVar1 = sideLength * sideLength - sideLength * _UNK_? * sideLength * _UNK_?;
  if (0.0 <= fVar1) {
    (this->fields)._depth = SQRT(fVar1);
    return;
  }
  fVar1 = (float)FUN_?(fVar1);
  (this->fields)._depth = fVar1;
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_Raycast
               (TriangPrismShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._baseCenter.z;
  VStack_2.x = (this->fields)._baseCenter.x;
  VStack_2.y = (this->fields)._baseCenter.y;
  baseDepth = (this->fields)._depth;
  RStack_3.m_Origin.x = (ray->m_Origin).x;
  RStack_3.m_Origin.y = (ray->m_Origin).y;
  RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  baseWidth = (this->fields)._width;
  RStack_3.m_Direction.y = (ray->m_Direction).y;
  RStack_3.m_Direction.z = (ray->m_Direction).z;
  bVar4 = PrismMath::PrismMath_RaycastTriangular
                    (&RStack_3,t,&VStack_2,baseWidth,baseDepth,baseWidth,baseDepth,
                     (this->fields)._height,&QStack_1,(MethodInfo *)0x0);
  return bVar4;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_RenderSolid
               (TriangPrismShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[4].klass;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar3 != (Object__Class *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar3->_0).name != (char *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pOVar3 = (Object__Class *)
           PrismMesh::PrismMesh_CreateTriangularPrism
                     (&VStack_6,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                      _UNK_?,&CStack_4,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  pOVar1[4].klass = pOVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar1 + 4) >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
code_?:
  VStack_6.x = (this->fields)._width;
  VStack_6.y = (this->fields)._height;
  VStack_6.z = (this->fields)._depth;
  pOVar3 = pOVar1[4].klass;
  CStack_4.r = (this->fields)._baseCenter.x;
  CStack_4.g = (this->fields)._baseCenter.y;
  uStack_12._0_4_ = (this->fields)._rotation.x;
  uStack_12._4_4_ = (this->fields)._rotation.y;
  uStack_13._0_4_ = (this->fields)._rotation.z;
  uStack_13._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._baseCenter.z;
  MStack_14.m00 = 0.0;
  MStack_14.m10 = 0.0;
  MStack_14.m20 = 0.0;
  MStack_14.m30 = 0.0;
  MStack_14.m01 = 0.0;
  MStack_14.m11 = 0.0;
  MStack_14.m21 = 0.0;
  MStack_14.m31 = 0.0;
  MStack_14.m02 = 0.0;
  MStack_14.m12 = 0.0;
  MStack_14.m22 = 0.0;
  MStack_14.m32 = 0.0;
  MStack_14.m03 = 0.0;
  MStack_14.m13 = 0.0;
  MStack_14.m23 = 0.0;
  MStack_14.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_12,&VStack_6);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_16.m00 = MStack_14.m00;
  MStack_16.m10 = MStack_14.m10;
  MStack_16.m20 = MStack_14.m20;
  MStack_16.m30 = MStack_14.m30;
  MStack_16.m01 = MStack_14.m01;
  MStack_16.m11 = MStack_14.m11;
  MStack_16.m21 = MStack_14.m21;
  MStack_16.m31 = MStack_14.m31;
  MStack_16.m02 = MStack_14.m02;
  MStack_16.m12 = MStack_14.m12;
  MStack_16.m22 = MStack_14.m22;
  MStack_16.m32 = MStack_14.m32;
  MStack_16.m03 = MStack_14.m03;
  MStack_16.m13 = MStack_14.m13;
  MStack_16.m23 = MStack_14.m23;
  MStack_16.m33 = MStack_14.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            ((Mesh *)pOVar3,&MStack_16,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_RenderWire
               (TriangPrismShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = pOVar1[4].monitor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar3 != (MonitorData *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(pMVar3 + 0x10) != 0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pMVar7 = PrismMesh::PrismMesh_CreateWireTriangularPrism
                     (&VStack_6,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                      _UNK_?,&CStack_4,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  pOVar1[4].monitor = (MonitorData *)pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&pOVar1[4].monitor >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
code_?:
  VStack_6.x = (this->fields)._width;
  VStack_6.y = (this->fields)._height;
  VStack_6.z = (this->fields)._depth;
  pMVar7 = (Mesh *)pOVar1[4].monitor;
  CStack_4.r = (this->fields)._baseCenter.x;
  CStack_4.g = (this->fields)._baseCenter.y;
  uStack_13._0_4_ = (this->fields)._rotation.x;
  uStack_13._4_4_ = (this->fields)._rotation.y;
  uStack_14._0_4_ = (this->fields)._rotation.z;
  uStack_14._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._baseCenter.z;
  MStack_15.m00 = 0.0;
  MStack_15.m10 = 0.0;
  MStack_15.m20 = 0.0;
  MStack_15.m30 = 0.0;
  MStack_15.m01 = 0.0;
  MStack_15.m11 = 0.0;
  MStack_15.m21 = 0.0;
  MStack_15.m31 = 0.0;
  MStack_15.m02 = 0.0;
  MStack_15.m12 = 0.0;
  MStack_15.m22 = 0.0;
  MStack_15.m32 = 0.0;
  MStack_15.m03 = 0.0;
  MStack_15.m13 = 0.0;
  MStack_15.m23 = 0.0;
  MStack_15.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_13,&VStack_6);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_17.m00 = MStack_15.m00;
  MStack_17.m10 = MStack_15.m10;
  MStack_17.m20 = MStack_15.m20;
  MStack_17.m30 = MStack_15.m30;
  MStack_17.m01 = MStack_15.m01;
  MStack_17.m11 = MStack_15.m11;
  MStack_17.m21 = MStack_15.m21;
  MStack_17.m31 = MStack_15.m31;
  MStack_17.m02 = MStack_15.m02;
  MStack_17.m12 = MStack_15.m12;
  MStack_17.m22 = MStack_15.m22;
  MStack_17.m32 = MStack_15.m32;
  MStack_17.m03 = MStack_15.m03;
  MStack_17.m13 = MStack_15.m13;
  MStack_17.m23 = MStack_15.m23;
  MStack_17.m33 = MStack_15.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            (pMVar7,&MStack_17,-1,(MethodInfo *)0x0);
  return;
}


/* TriangPrismShape3D() */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D__ctor
               (TriangPrismShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._baseCenter.x = (pVVar2->zeroVector).x;
  (this->fields)._baseCenter.y = fVar3;
  (this->fields)._baseCenter.z = fVar4;
  (this->fields)._width = 1.0;
  (this->fields)._height = 1.0;
  (this->fields)._depth = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar5->identityQuaternion).x;
  (this->fields)._rotation.y = fVar4;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar6;
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Center
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TriangPrismShape3D_get_Up(aVStack_5,this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = fVar6 * (float)uVar8 * _UNK_?;
  fVar10 = fVar6 * pVVar4->z * _UNK_?;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 * _UNK_? + (float)uVar2;
  __return_storage_ptr__->y = fVar9 + (float)uVar3;
  __return_storage_ptr__->z = fVar10 + fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_FrontCenter() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_FrontCenter
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TriangPrismShape3D_get_Up(aVStack_5,this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  pVVar4 = TriangPrismShape3D_get_Look(aVStack_5,this,(MethodInfo *)0x0);
  fVar10 = (this->fields)._depth;
  uVar11 = pVVar4->x;
  uVar12 = pVVar4->y;
  fVar13 = fVar10 * pVVar4->z * _UNK_?;
  fVar14 = fVar10 * (float)uVar12 * _UNK_?;
  fVar15 = fVar6 * (float)uVar8 * _UNK_?;
  fVar9 = fVar6 * fVar9 * _UNK_?;
  __return_storage_ptr__->x =
       (fVar6 * (float)uVar7 * _UNK_? + (float)uVar2) -
       fVar10 * (float)uVar11 * _UNK_?;
  __return_storage_ptr__->y = (fVar15 + (float)uVar3) - fVar14;
  __return_storage_ptr__->z = (fVar9 + fVar1) - fVar13;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
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


/* Vector3 get_MidTip() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_MidTip
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TriangPrismShape3D_get_Up(aVStack_5,this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  pVVar4 = TriangPrismShape3D_get_Look(aVStack_5,this,(MethodInfo *)0x0);
  fVar10 = (this->fields)._depth;
  uVar11 = pVVar4->x;
  uVar12 = pVVar4->y;
  fVar13 = (fVar10 * (float)uVar12 + fVar6 * (float)uVar8) * _UNK_?;
  fVar9 = (fVar10 * pVVar4->z + fVar6 * fVar9) * _UNK_?;
  __return_storage_ptr__->x =
       (fVar10 * (float)uVar11 + fVar6 * (float)uVar7) * _UNK_? + (float)uVar2;
  __return_storage_ptr__->y = fVar13 + (float)uVar3;
  __return_storage_ptr__->z = fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelLook() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->forwardVector).y;
  fVar3 = (pVVar1->forwardVector).z;
  __return_storage_ptr__->x = (pVVar1->forwardVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelRight() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  __return_storage_ptr__->x = (pVVar1->rightVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_ModelUp() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  __return_storage_ptr__->x = (pVVar1->upVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
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


/* Vector3 get_TopCenter() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_TopCenter
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TriangPrismShape3D_get_Up(aVStack_5,this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,TriangPrismShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
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


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Center
               (TriangPrismShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._height;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  fVar7 = value->y;
  fVar8 = fVar3 * pVVar1->z * _UNK_?;
  fVar9 = value->z;
  fVar10 = fVar3 * (float)uVar5 * _UNK_?;
  (this->fields)._baseCenter.x = (float)uVar6 - fVar3 * (float)uVar4 * _UNK_?;
  (this->fields)._baseCenter.y = fVar7 - fVar10;
  (this->fields)._baseCenter.z = fVar9 - fVar8;
  return;
}


/* Void set_Depth(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Depth
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._depth = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_FrontCenter(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_FrontCenter
               (TriangPrismShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(aVStack_2,this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._depth;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._height;
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  uVar10 = value->x;
  uVar11 = value->y;
  fVar12 = (fVar3 * (float)uVar5 - fVar7 * (float)uVar9) * _UNK_?;
  fVar13 = (fVar3 * fVar6 - fVar7 * pVVar1->z) * _UNK_?;
  fVar6 = value->z;
  (this->fields)._baseCenter.x =
       (fVar3 * (float)uVar4 - fVar7 * (float)uVar8) * _UNK_? + (float)uVar10;
  (this->fields)._baseCenter.y = fVar12 + (float)uVar11;
  (this->fields)._baseCenter.z = fVar13 + fVar6;
  return;
}


/* Void set_Height(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Height
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._height = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_MidTip(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_MidTip
               (TriangPrismShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Look(aVStack_2,this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._depth;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._height;
  uVar8 = pVVar1->x;
  uVar9 = pVVar1->y;
  uVar10 = value->x;
  fVar11 = value->y;
  fVar12 = (fVar3 * fVar6 - fVar7 * pVVar1->z) * _UNK_?;
  fVar6 = value->z;
  fVar13 = (fVar3 * (float)uVar5 - fVar7 * (float)uVar9) * _UNK_?;
  (this->fields)._baseCenter.x =
       (float)uVar10 - (fVar3 * (float)uVar4 - fVar7 * (float)uVar8) * _UNK_?;
  (this->fields)._baseCenter.y = fVar11 - fVar13;
  (this->fields)._baseCenter.z = fVar6 - fVar12;
  return;
}


/* Void set_PtContainEps(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_PtContainEps
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._ptContainEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_TopCenter(Vector3) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_TopCenter
               (TriangPrismShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D_get_Up(aVStack_2,this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._height;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  fVar7 = value->y;
  fVar8 = pVVar1->z;
  fVar9 = value->z;
  (this->fields)._baseCenter.x = (float)uVar6 - fVar3 * (float)uVar4;
  (this->fields)._baseCenter.y = fVar7 - fVar3 * (float)uVar5;
  (this->fields)._baseCenter.z = fVar9 - fVar3 * fVar8;
  return;
}


/* Void set_Width(Single) */

void Assembly-CSharp.dll::RTG::TriangPrismShape3D::TriangPrismShape3D_set_Width
               (TriangPrismShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._width = (float)((uint)value & _UNK_?);
  return;
}

