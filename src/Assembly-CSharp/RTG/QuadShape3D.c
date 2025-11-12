
/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_AlignUp
               (QuadShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                      (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                      (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_ContainsPoint
               (QuadShape3D *this,Vector3 *point,bool checkOnPlane,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2._0_4_ = (this->fields)._center.x;
  uVar2._4_4_ = (this->fields)._center.y;
  quadHeight = (this->fields)._size.y;
  quadWidth = (this->fields)._size.x;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar3->x;
  uVar5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  aQStack_7[0]._sizeEps = (this->fields)._epsilon._sizeEps;
  aQStack_7[0]._extrudeEps = (this->fields)._epsilon._extrudeEps;
  aQStack_7[0]._wireEps = (this->fields)._epsilon._wireEps;
  VStack_8.x = pVVar3->x;
  VStack_8.y = pVVar3->y;
  VStack_8.z = pVVar3->z;
  VStack_4.z = point->z;
  VStack_4.x = point->x;
  VStack_4.y = point->y;
  VStack_9._0_8_ = uVar5;
  VStack_9.z = fVar6;
  VStack_10._0_8_ = uVar2;
  VStack_10.z = fVar1;
  bVar11 = QuadMath::QuadMath_Contains3DPoint
                    (&VStack_4,checkOnPlane,&VStack_10,quadWidth,quadHeight,&VStack_9,&VStack_8,
                     aQStack_7,(MethodInfo *)0x0);
  return bVar11;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetAABB
                 (AABB *__return_storage_ptr__,QuadShape3D *this,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._center.z;
  VStack_2.x = (this->fields)._center.x;
  VStack_2.y = (this->fields)._center.y;
  pointCloud = QuadMath::QuadMath_Calc3DQuadCornerPoints
                         (&VStack_2,(this->fields)._size,&QStack_1,(MethodInfo *)0x0);
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


/* Vector3 GetCornerPosition(QuadCorner) */

Vector3 * Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetCornerPosition
                    (Vector3 *__return_storage_ptr__,QuadShape3D *this,QuadCorner__Enum quadCorner,
                    MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._center.z;
  VStack_2.x = (this->fields)._center.x;
  VStack_2.y = (this->fields)._center.y;
  pVVar3 = QuadMath::QuadMath_Calc3DQuadCorner
                     (&VStack_4,&VStack_2,(this->fields)._size,&QStack_1,quadCorner,
                      (MethodInfo *)0x0);
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetCorners() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_GetCorners(QuadShape3D *this,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._center.z;
  VStack_2.x = (this->fields)._center.x;
  VStack_2.y = (this->fields)._center.y;
  pLVar3 = QuadMath::QuadMath_Calc3DQuadCornerPoints
                     (&VStack_2,(this->fields)._size,&QStack_1,(MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_Raycast
               (QuadShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if ((this->fields)._raycastMode == 0) {
    fVar1 = (this->fields)._center.z;
    uVar2._0_4_ = (this->fields)._center.x;
    uVar2._4_4_ = (this->fields)._center.y;
    quadHeight = (this->fields)._size.y;
    quadWidth = (this->fields)._size.x;
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                       (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                       (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    QStack_7._sizeEps = (this->fields)._epsilon._sizeEps;
    QStack_7._extrudeEps = (this->fields)._epsilon._extrudeEps;
    QStack_7._wireEps = (this->fields)._epsilon._wireEps;
    VStack_8.x = pVVar3->x;
    VStack_8.y = pVVar3->y;
    VStack_8.z = pVVar3->z;
    aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
    VStack_10._0_8_ = uVar5;
    VStack_10.z = fVar6;
    VStack_4._0_8_ = uVar2;
    VStack_4.z = fVar1;
    bVar11 = QuadMath::QuadMath_Raycast
                      (aRStack_9,t,&VStack_4,quadWidth,quadHeight,&VStack_10,&VStack_8,&QStack_7
                       ,(MethodInfo *)0x0);
  }
  else {
    QStack_7._sizeEps.x = (ray->m_Origin).x;
    QStack_7._sizeEps.y = (ray->m_Origin).y;
    QStack_7._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    uStack_12._0_4_ = (ray->m_Direction).y;
    uStack_12._4_4_ = (ray->m_Direction).z;
    bVar11 = (*(this->klass->vtable).RaycastWire.methodPtr)
                      ((ray->m_Origin).x,&QStack_7,t,(this->klass->vtable).RaycastWire.method);
  }
  return bVar11;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RaycastWire
               (QuadShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2._0_4_ = (this->fields)._center.x;
  uVar2._4_4_ = (this->fields)._center.y;
  quadHeight = (this->fields)._size.y;
  quadWidth = (this->fields)._size.x;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Right
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar3->x;
  uVar5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  QStack_7._sizeEps = (this->fields)._epsilon._sizeEps;
  QStack_7._extrudeEps = (this->fields)._epsilon._extrudeEps;
  QStack_7._wireEps = (this->fields)._epsilon._wireEps;
  VStack_8.x = pVVar3->x;
  VStack_8.y = pVVar3->y;
  VStack_8.z = pVVar3->z;
  aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
  VStack_10._0_8_ = uVar5;
  VStack_10.z = fVar6;
  VStack_4._0_8_ = uVar2;
  VStack_4.z = fVar1;
  bVar11 = QuadMath::QuadMath_RaycastWire
                    (aRStack_9,t,&VStack_4,quadWidth,quadHeight,&VStack_10,&VStack_8,&QStack_7,
                     (MethodInfo *)0x0);
  return bVar11;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RenderSolid
               (QuadShape3D *this,MethodInfo *method)

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
  mesh = MeshPool::MeshPool_get_UnitQuadXY(this_00,(MethodInfo *)0x0);
  fStack_2 = (this->fields)._center.z;
  VStack_3 = (this->fields)._size;
  uStack_4._0_4_ = (this->fields)._center.x;
  uStack_4._4_4_ = (this->fields)._center.y;
  uStack_5._0_4_ = (this->fields)._rotation.x;
  uStack_5._4_4_ = (this->fields)._rotation.y;
  uStack_6._0_4_ = (this->fields)._rotation.z;
  uStack_6._4_4_ = (this->fields)._rotation.w;
  uStack_7 = _UNK_?;
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
  (*pcRam_?)(&uStack_4,&uStack_5,&VStack_3);
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


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_RenderWire
               (QuadShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
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
  pQVar1 = (this->fields)._wireRenderDesc;
  if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
    if ((pQVar1->fields)._wireEdgeFlags == 0xf) {
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireQuadXY(this_00,(MethodInfo *)0x0);
        VStack_2.z = (this->fields)._center.z;
        QStack_3._0_8_ = (this->fields)._size;
        VStack_2.x = (this->fields)._center.x;
        VStack_2.y = (this->fields)._center.y;
        uStack_4._0_4_ = (this->fields)._rotation.x;
        uStack_4._4_4_ = (this->fields)._rotation.y;
        uStack_5._0_4_ = (this->fields)._rotation.z;
        uStack_5._4_4_ = (this->fields)._rotation.w;
        QStack_3.z = _UNK_?;
        MStack_6.m00 = 0.0;
        MStack_6.m10 = 0.0;
        MStack_6.m20 = 0.0;
        MStack_6.m30 = 0.0;
        MStack_6.m01 = 0.0;
        MStack_6.m11 = 0.0;
        MStack_6.m21 = 0.0;
        MStack_6.m31 = 0.0;
        MStack_6.m02 = 0.0;
        MStack_6.m12 = 0.0;
        MStack_6.m22 = 0.0;
        MStack_6.m32 = 0.0;
        MStack_6.m03 = 0.0;
        MStack_6.m13 = 0.0;
        MStack_6.m23 = 0.0;
        MStack_6.m33 = 0.0;
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(&VStack_2,&uStack_4,(Vector2 *)&QStack_3);
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
        MStack_9.m00 = MStack_6.m00;
        MStack_9.m10 = MStack_6.m10;
        MStack_9.m20 = MStack_6.m20;
        MStack_9.m30 = MStack_6.m30;
        MStack_9.m01 = MStack_6.m01;
        MStack_9.m11 = MStack_6.m11;
        MStack_9.m21 = MStack_6.m21;
        MStack_9.m31 = MStack_6.m31;
        MStack_9.m02 = MStack_6.m02;
        MStack_9.m12 = MStack_6.m12;
        MStack_9.m22 = MStack_6.m22;
        MStack_9.m32 = MStack_6.m32;
        MStack_9.m03 = MStack_6.m03;
        MStack_9.m13 = MStack_6.m13;
        MStack_9.m23 = MStack_6.m23;
        MStack_9.m33 = MStack_6.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                  (mesh,&MStack_9,-1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    QStack_3.x = (this->fields)._rotation.x;
    QStack_3.y = (this->fields)._rotation.y;
    QStack_3.z = (this->fields)._rotation.z;
    QStack_3.w = (this->fields)._rotation.w;
    VStack_2.z = (this->fields)._center.z;
    VStack_2.x = (this->fields)._center.x;
    VStack_2.y = (this->fields)._center.y;
    pLVar10 = QuadMath::QuadMath_Calc3DQuadCornerPoints
                       (&VStack_2,(this->fields)._size,&QStack_3,(MethodInfo *)0x0);
    pQVar1 = (this->fields)._wireRenderDesc;
    if (pQVar1 == (QuadShape3D_WireRenderDescriptor *)0x0) goto code_?;
    if (((pQVar1->fields)._wireEdgeFlags & 1) != 0) {
      if (pLVar10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar10->fields)._size == 0) goto code_?;
      pVVar11 = (pLVar10->fields)._items;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar11->max_length == 0) goto code_?;
      if ((uint)(pLVar10->fields)._size < 2) goto code_?;
      if ((uint)pVVar11->max_length < 2) goto code_?;
      QStack_3._0_8_ = *(Vector2 *)(pVVar11->vector + 1);
      fVar12 = pVVar11->vector[1].z;
      fVar13 = pVVar11->vector[0].z;
      VStack_2.x = pVVar11->vector[0].x;
      VStack_2.y = pVVar11->vector[0].y;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (VStack_2.x,VStack_2.y,fVar13,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (QStack_3.x,QStack_3.y,fVar12,(MethodInfo *)0x0);
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
    }
    pQVar1 = (this->fields)._wireRenderDesc;
    if (pQVar1 == (QuadShape3D_WireRenderDescriptor *)0x0) goto code_?;
    if (((pQVar1->fields)._wireEdgeFlags & 2) != 0) {
      if (pLVar10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((uint)(pLVar10->fields)._size < 2) goto code_?;
      pVVar11 = (pLVar10->fields)._items;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar11->max_length < 2) goto code_?;
      if ((uint)(pLVar10->fields)._size < 3) goto code_?;
      if ((uint)pVVar11->max_length < 3) goto code_?;
      VStack_2.x = pVVar11->vector[2].x;
      VStack_2.y = pVVar11->vector[2].y;
      fVar12 = pVVar11->vector[2].z;
      fVar13 = pVVar11->vector[1].z;
      QStack_3._0_8_ = *(Vector2 *)(pVVar11->vector + 1);
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (QStack_3.x,QStack_3.y,fVar13,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (VStack_2.x,VStack_2.y,fVar12,(MethodInfo *)0x0);
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
    }
    pQVar1 = (this->fields)._wireRenderDesc;
    if (pQVar1 == (QuadShape3D_WireRenderDescriptor *)0x0) goto code_?;
    if (((pQVar1->fields)._wireEdgeFlags & 4) != 0) {
      if (pLVar10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((uint)(pLVar10->fields)._size < 3) goto code_?;
      pVVar11 = (pLVar10->fields)._items;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar11->max_length < 3) goto code_?;
      if ((uint)(pLVar10->fields)._size < 4) goto code_?;
      if ((uint)pVVar11->max_length < 4) goto code_?;
      VStack_2.x = pVVar11->vector[3].x;
      VStack_2.y = pVVar11->vector[3].y;
      fVar12 = pVVar11->vector[3].z;
      fVar13 = pVVar11->vector[2].z;
      QStack_3._0_8_ = *(Vector2 *)(pVVar11->vector + 2);
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (QStack_3.x,QStack_3.y,fVar13,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                (VStack_2.x,VStack_2.y,fVar12,(MethodInfo *)0x0);
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)();
    }
    pQVar1 = (this->fields)._wireRenderDesc;
    if (pQVar1 != (QuadShape3D_WireRenderDescriptor *)0x0) {
      if (((pQVar1->fields)._wireEdgeFlags & 8) == 0) {
        return;
      }
      if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
        if ((uint)(pLVar10->fields)._size < 4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pVVar11 = (pLVar10->fields)._items;
        if (pVVar11 != (Vector3__Array *)0x0) {
          if (3 < (uint)pVVar11->max_length) {
            VStack_2.x = pVVar11->vector[0].x;
            VStack_2.y = pVVar11->vector[0].y;
            fVar12 = pVVar11->vector[0].z;
            fVar13 = pVVar11->vector[3].z;
            QStack_3._0_8_ = *(Vector2 *)(pVVar11->vector + 3);
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(1);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                      (QStack_3.x,QStack_3.y,fVar13,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                      (VStack_2.x,VStack_2.y,fVar12,(MethodInfo *)0x0);
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)();
            return;
          }
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetCornerPointPosition(QuadCorner, Vector3) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_SetCornerPointPosition
               (QuadShape3D *this,QuadCorner__Enum quadCorner,Vector3 *position,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._center.z;
  VStack_2.x = (this->fields)._center.x;
  VStack_2.y = (this->fields)._center.y;
  pVVar3 = QuadMath::QuadMath_Calc3DQuadCorner
                      (&VStack_4,&VStack_2,(this->fields)._size,&QStack_1,quadCorner,
                       (MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  uVar7 = position->x;
  uVar8 = position->y;
  uVar9 = (this->fields)._center.x;
  fVar10 = (this->fields)._center.y;
  fVar11 = (this->fields)._center.z;
  fVar12 = pVVar3->z;
  fVar13 = position->z;
  (this->fields)._center.x = ((float)uVar9 - (float)uVar5) + (float)uVar7;
  (this->fields)._center.y = (fVar10 - (float)uVar6) + (float)uVar8;
  (this->fields)._center.z = (fVar11 - fVar12) + fVar13;
  return;
}


/* QuadShape3D() */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D__ctor(QuadShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__QuadShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y;
  bVar1 = cRam_? == '\0';
  (this->fields)._size.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x;
  (this->fields)._size.y = fVar4;
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
  pQVar7 = (QuadShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__QuadShape3D__WireRenderDescriptor);
  bVar1 = iRam_? != 0;
  (pQVar7->fields)._wireEdgeFlags = 0xf;
  (this->fields)._wireRenderDesc = pQVar7;
  if (bVar1) {
    uVar8 = (uint)((ulonglong)&(this->fields)._wireRenderDesc >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_get_Normal
                    (Vector3 *__return_storage_ptr__,QuadShape3D *this,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Look
                     (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_Size(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_Size
               (QuadShape3D *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  (this->fields)._size.x = (float)((uint)fStackX_8 & _UNK_?);
  fStackX_c = value.y;
  (this->fields)._size.y = (float)((uint)fStackX_c & _UNK_?);
  return;
}


/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape3D::QuadShape3D_set_SizeEps
               (QuadShape3D *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  (this->fields)._epsilon._sizeEps.x = (float)((uint)fStackX_8 & _UNK_?);
  fStackX_c = value.y;
  (this->fields)._epsilon._sizeEps.y = (float)((uint)fStackX_c & _UNK_?);
  return;
}

