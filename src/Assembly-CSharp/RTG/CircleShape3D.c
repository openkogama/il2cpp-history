
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignNormal
               (CircleShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                      (&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Right
                      (&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
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


/* Void AlignRight(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignRight
               (CircleShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Right
                      (&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
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


/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignUp
               (CircleShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                      (&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
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


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_ContainsPoint
               (CircleShape3D *this,Vector3 *point,bool checkOnPlane,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2._0_4_ = (this->fields)._center.x;
  uVar2._4_4_ = (this->fields)._center.y;
  circleRadius = (this->fields)._radius;
  pVVar3 = SphereShape3D::SphereShape3D_get_Look(aVStack_4,(SphereShape3D *)this,(MethodInfo *)0x0)
  ;
  CStack_5._radiusEps = (this->fields)._epsilon._radiusEps;
  CStack_5._extrudeEps = (this->fields)._epsilon._extrudeEps;
  CStack_5._wireEps = (this->fields)._epsilon._wireEps;
  VStack_6.x = pVVar3->x;
  VStack_6.y = pVVar3->y;
  VStack_6.z = pVVar3->z;
  aVStack_4[0].z = point->z;
  aVStack_4[0].x = point->x;
  aVStack_4[0].y = point->y;
  VStack_7._0_8_ = uVar2;
  VStack_7.z = fVar1;
  bVar8 = CircleMath::CircleMath_Contains3DPoint
                    (aVStack_4,checkOnPlane,&VStack_7,circleRadius,&VStack_6,&CStack_5,
                     (MethodInfo *)0x0);
  return bVar8;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_GetAABB
                 (AABB *__return_storage_ptr__,CircleShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._center.x;
  VStack_1.y = (this->fields)._center.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._center.z;
  pointCloud = CircleMath::CircleMath_Calc3DExtentPoints
                         (&VStack_1,(this->fields)._radius,&QStack_2,(MethodInfo *)0x0);
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


/* List`1[UnityEngine.Vector3] GetExtentPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_GetExtentPoints
          (CircleShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._center.x;
  VStack_1.y = (this->fields)._center.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._center.z;
  pLVar3 = CircleMath::CircleMath_Calc3DExtentPoints
                     (&VStack_1,(this->fields)._radius,&QStack_2,(MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_Raycast
               (CircleShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  uVar1._0_4_ = (this->fields)._center.x;
  uVar1._4_4_ = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  circleRadius = (this->fields)._radius;
  if ((this->fields)._raycastMode == 0) {
    pVVar3 = SphereShape3D::SphereShape3D_get_Look
                       ((Vector3 *)&CStack_4,(SphereShape3D *)this,(MethodInfo *)0x0);
    CStack_5._radiusEps = (this->fields)._epsilon._radiusEps;
    CStack_5._extrudeEps = (this->fields)._epsilon._extrudeEps;
    CStack_5._wireEps = (this->fields)._epsilon._wireEps;
    aRStack_6[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_6[0].m_Direction.z = (ray->m_Direction).z;
    VStack_7.x = pVVar3->x;
    VStack_7.y = pVVar3->y;
    VStack_7.z = pVVar3->z;
    aRStack_6[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_6[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_6[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    CStack_4._0_8_ = uVar1;
    CStack_4._wireEps = fVar2;
    bVar8 = CircleMath::CircleMath_Raycast
                      (aRStack_6,t,(Vector3 *)&CStack_4,circleRadius,&VStack_7,&CStack_5,
                       (MethodInfo *)0x0);
  }
  else {
    pVVar3 = SphereShape3D::SphereShape3D_get_Look
                       ((Vector3 *)&CStack_5,(SphereShape3D *)this,(MethodInfo *)0x0);
    CStack_4._radiusEps = (this->fields)._epsilon._radiusEps;
    CStack_4._extrudeEps = (this->fields)._epsilon._extrudeEps;
    CStack_4._wireEps = (this->fields)._epsilon._wireEps;
    aRStack_6[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_6[0].m_Direction.z = (ray->m_Direction).z;
    VStack_7.x = pVVar3->x;
    VStack_7.y = pVVar3->y;
    VStack_7.z = pVVar3->z;
    aRStack_6[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_6[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_6[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    CStack_5._0_8_ = uVar1;
    CStack_5._wireEps = fVar2;
    bVar8 = CircleMath::CircleMath_RaycastWire
                      (aRStack_6,t,(Vector3 *)&CStack_5,circleRadius,&VStack_7,&CStack_4,
                       (MethodInfo *)0x0);
  }
  return bVar8;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RaycastWire
               (CircleShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2._0_4_ = (this->fields)._center.x;
  uVar2._4_4_ = (this->fields)._center.y;
  circleRadius = (this->fields)._radius;
  pVVar3 = SphereShape3D::SphereShape3D_get_Look(&VStack_4,(SphereShape3D *)this,(MethodInfo *)0x0)
  ;
  CStack_5._radiusEps = (this->fields)._epsilon._radiusEps;
  CStack_5._extrudeEps = (this->fields)._epsilon._extrudeEps;
  CStack_5._wireEps = (this->fields)._epsilon._wireEps;
  aRStack_6[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_6[0].m_Direction.z = (ray->m_Direction).z;
  VStack_7.x = pVVar3->x;
  VStack_7.y = pVVar3->y;
  VStack_7.z = pVVar3->z;
  aRStack_6[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_6[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_6[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_4._0_8_ = uVar2;
  VStack_4.z = fVar1;
  bVar8 = CircleMath::CircleMath_RaycastWire
                    (aRStack_6,t,&VStack_4,circleRadius,&VStack_7,&CStack_5,(MethodInfo *)0x0);
  return bVar8;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RenderSolid
               (CircleShape3D *this,MethodInfo *method)

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
  pOVar3 = pOVar1[9].klass;
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
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pOVar3 = (Object__Class *)
           CircleMesh::CircleMesh_CreateCircleXY(_UNK_?,200,&CStack_4,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  pOVar1[9].klass = pOVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)(pOVar1 + 9) >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
code_?:
  fStack_10 = (this->fields)._radius;
  pOVar3 = pOVar1[9].klass;
  uStack_11 = CONCAT44(fStack_10,fStack_10);
  uStack_12._0_4_ = (this->fields)._rotation.x;
  uStack_12._4_4_ = (this->fields)._rotation.y;
  uStack_13._0_4_ = (this->fields)._rotation.z;
  uStack_13._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._center.z;
  CStack_4.r = (this->fields)._center.x;
  CStack_4.g = (this->fields)._center.y;
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
  (*pcRam_?)(&CStack_4,&uStack_12,&uStack_11);
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

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RenderWire
               (CircleShape3D *this,MethodInfo *method)

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
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 == (MeshPool *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mesh = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
  fStack_2 = (this->fields)._radius;
  fStack_3 = (this->fields)._center.z;
  uStack_4 = CONCAT44(fStack_2,fStack_2);
  uStack_5._0_4_ = (this->fields)._rotation.x;
  uStack_5._4_4_ = (this->fields)._rotation.y;
  uStack_6._0_4_ = (this->fields)._rotation.z;
  uStack_6._4_4_ = (this->fields)._rotation.w;
  uStack_7._0_4_ = (this->fields)._center.x;
  uStack_7._4_4_ = (this->fields)._center.y;
  MStack_8.m00 = 0.0;
  MStack_8.m10 = 0.0;
  MStack_8.m20 = 0.0;
  MStack_8.m30 = 0.0;
  MStack_8.m01 = 0.0;
  MStack_8.m11 = 0.0;
  MStack_8.m21 = 0.0;
  MStack_8.m31 = 0.0;
  MStack_8.m02 = 0.0;
  MStack_8.m12 = 0.0;
  MStack_8.m22 = 0.0;
  MStack_8.m32 = 0.0;
  MStack_8.m03 = 0.0;
  MStack_8.m13 = 0.0;
  MStack_8.m23 = 0.0;
  MStack_8.m33 = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_7,&uStack_5,&uStack_4);
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
  MStack_10.m00 = MStack_8.m00;
  MStack_10.m10 = MStack_8.m10;
  MStack_10.m20 = MStack_8.m20;
  MStack_10.m30 = MStack_8.m30;
  MStack_10.m01 = MStack_8.m01;
  MStack_10.m11 = MStack_8.m11;
  MStack_10.m21 = MStack_8.m21;
  MStack_10.m31 = MStack_8.m31;
  MStack_10.m02 = MStack_8.m02;
  MStack_10.m12 = MStack_8.m12;
  MStack_10.m22 = MStack_8.m22;
  MStack_10.m32 = MStack_8.m32;
  MStack_10.m03 = MStack_8.m03;
  MStack_10.m13 = MStack_8.m13;
  MStack_10.m23 = MStack_8.m23;
  MStack_10.m33 = MStack_8.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            (mesh,&MStack_10,-1,(MethodInfo *)0x0);
  return;
}


/* CircleShape3D() */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D__ctor
               (CircleShape3D *this,MethodInfo *method)

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
  (this->fields)._center.x = (pVVar2->zeroVector).x;
  (this->fields)._center.y = fVar3;
  (this->fields)._center.z = fVar4;
  (this->fields)._radius = 1.0;
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


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_get_Normal
                    (Vector3 *__return_storage_ptr__,CircleShape3D *this,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Look(&VStack_2,(SphereShape3D *)this,(MethodInfo *)0x0)
  ;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_Epsilon(CircleEpsilon) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_set_Epsilon
               (CircleShape3D *this,CircleEpsilon *value,MethodInfo *method)

{
  fVar1 = value->_extrudeEps;
  fVar2 = value->_wireEps;
  (this->fields)._epsilon._radiusEps = value->_radiusEps;
  (this->fields)._epsilon._extrudeEps = fVar1;
  (this->fields)._epsilon._wireEps = fVar2;
  return;
}

