
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_ContainsPoint
               (PyramidShape3D *this,Vector3 *point,MethodInfo *method)

{
  VStack_1.z = (this->fields)._baseCenter.z;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_3.z = point->z;
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  VStack_3.x = point->x;
  VStack_3.y = point->y;
  bVar4 = PyramidMath::PyramidMath_ContainsPoint
                    (&VStack_3,&VStack_1,(this->fields)._baseWidth,(this->fields)._baseDepth,
                     (this->fields)._height,&QStack_2,
                     (PyramidEpsilon)(this->fields)._epsilon._ptContainEps,(MethodInfo *)0x0);
  return bVar4;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_GetAABB
                 (AABB *__return_storage_ptr__,PyramidShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_1.Quadrant = (int32_t)(this->fields)._baseCenter.x;
  PStack_1.FirstAxisSign = (int32_t)(this->fields)._baseCenter.y;
  aQStack_2[0].x = (this->fields)._rotation.x;
  aQStack_2[0].y = (this->fields)._rotation.y;
  aQStack_2[0].z = (this->fields)._rotation.z;
  aQStack_2[0].w = (this->fields)._rotation.w;
  PStack_1.SecondAxisSign = (int32_t)(this->fields)._baseCenter.z;
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            PyramidMath::PyramidMath_CalcBaseCornerPoints
                      ((Vector3 *)&PStack_1,(this->fields)._baseWidth,(this->fields)._baseDepth,
                       aQStack_2,(MethodInfo *)0x0);
  uVar3 = (this->fields)._baseCenter.x;
  uVar4 = (this->fields)._baseCenter.y;
  fVar5 = (this->fields)._baseCenter.z;
  pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                      ((Vector3 *)&PStack_1,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  pMVar7 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  fVar8 = (this->fields)._height;
  uVar9 = pVVar6->x;
  uVar10 = pVVar6->y;
  fVar11 = fVar8 * (float)uVar9 + (float)uVar3;
  fVar12 = fVar8 * (float)uVar10 + (float)uVar4;
  fVar5 = fVar8 * pVVar6->z + fVar5;
  if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar13 = &(this_00->fields)._version;
    *piVar13 = *piVar13 + 1;
    pPVar14 = (this_00->fields)._items;
    if (pPVar14 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar15 = (this_00->fields)._size;
      if (uVar15 < (uint)pPVar14->max_length) {
        (this_00->fields)._size = uVar15 + 1;
        if ((uint)pPVar14->max_length <= uVar15) {
          FUN_?();
          pcVar16 = (code *)swi(3);
          pAVar17 = (AABB *)(*pcVar16)();
          return pAVar17;
        }
        pPVar14->vector[(int)uVar15].Quadrant = (int32_t)fVar11;
        pPVar14->vector[(int)uVar15].FirstAxisSign = (int32_t)fVar12;
        pPVar14->vector[(int)uVar15].SecondAxisSign = (int32_t)fVar5;
      }
      else {
        PStack_1.FirstAxisSign = (int32_t)fVar12;
        PStack_1.Quadrant = (int32_t)fVar11;
        PStack_1.SecondAxisSign = (int32_t)fVar5;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_1,pMVar7->klass->rgctx_data[0xe].method);
      }
      (__return_storage_ptr__->_size).x = 0.0;
      (__return_storage_ptr__->_size).y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
      (__return_storage_ptr__->_center).y = 0.0;
      (__return_storage_ptr__->_center).z = 0.0;
      *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
      AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)this_00,
                         (MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  pAVar17 = (AABB *)(*pcVar16)();
  return pAVar17;
}


/* List`1[UnityEngine.Vector3] GetBaseCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_GetBaseCornerPoints
          (PyramidShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._baseCenter.z;
  pLVar3 = PyramidMath::PyramidMath_CalcBaseCornerPoints
                     (&VStack_1,(this->fields)._baseWidth,(this->fields)._baseDepth,&QStack_2,
                      (MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_Raycast
               (PyramidShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._baseCenter.z;
  VStack_2.x = (this->fields)._baseCenter.x;
  VStack_2.y = (this->fields)._baseCenter.y;
  RStack_3.m_Origin.x = (ray->m_Origin).x;
  RStack_3.m_Origin.y = (ray->m_Origin).y;
  RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_3.m_Direction.y = (ray->m_Direction).y;
  RStack_3.m_Direction.z = (ray->m_Direction).z;
  bVar4 = PyramidMath::PyramidMath_Raycast
                    (&RStack_3,t,&VStack_2,(this->fields)._baseWidth,(this->fields)._baseDepth,
                     (this->fields)._height,&QStack_1,(MethodInfo *)0x0);
  return bVar4;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_RenderSolid
               (PyramidShape3D *this,MethodInfo *method)

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
  pOVar3 = pOVar1[3].klass;
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
           PyramidMesh::PyramidMesh_CreatePyramid
                     (&VStack_6,_UNK_?,_UNK_?,_UNK_?,&CStack_4,
                      (MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  pOVar1[3].klass = pOVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar1 + 3) >> 0xc);
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
  VStack_6.z = (this->fields)._baseDepth;
  pOVar3 = pOVar1[3].klass;
  VStack_6.y = (this->fields)._height;
  VStack_6.x = (this->fields)._baseWidth;
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

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_RenderWire
               (PyramidShape3D *this,MethodInfo *method)

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
  pMVar3 = pOVar1[3].monitor;
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
  pMVar7 = PyramidMesh::PyramidMesh_CreateWirePyramid
                     (&VStack_6,_UNK_?,_UNK_?,_UNK_?,&CStack_4,
                      (MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  pOVar1[3].monitor = (MonitorData *)pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&pOVar1[3].monitor >> 0xc);
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
  VStack_6.z = (this->fields)._baseDepth;
  pMVar7 = (Mesh *)pOVar1[3].monitor;
  VStack_6.y = (this->fields)._height;
  VStack_6.x = (this->fields)._baseWidth;
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


/* Vector3 get_Tip() */

Vector3 * Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_get_Tip
                    (Vector3 *__return_storage_ptr__,PyramidShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (aVStack_5,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Void set_Tip(Vector3) */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_set_Tip
               (PyramidShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (aVStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
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

