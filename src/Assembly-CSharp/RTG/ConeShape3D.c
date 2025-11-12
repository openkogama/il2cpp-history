
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_ContainsPoint
               (ConeShape3D *this,Vector3 *point,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.x = (this->fields)._baseCenter.x;
  VStack_2.y = (this->fields)._baseCenter.y;
  VStack_2.z = (this->fields)._baseCenter.z;
  VStack_3.x = point->x;
  VStack_3.y = point->y;
  VStack_3.z = point->z;
  bVar4 = ConeMath::ConeMath_ContainsPoint
                    (&VStack_3,&VStack_2,(this->fields)._baseRadius,(this->fields)._height,
                     &QStack_1,(ConeEpsilon)0x0,(MethodInfo *)0x0);
  return bVar4;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_GetAABB
                 (AABB *__return_storage_ptr__,ConeShape3D *this,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  aQStack_2[0].x = (this->fields)._rotation.x;
  aQStack_2[0].y = (this->fields)._rotation.y;
  aQStack_2[0].z = (this->fields)._rotation.z;
  aQStack_2[0].w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._baseCenter.z;
  pointCloud = ConeMath::ConeMath_CalcConeBaseExtentPoints
                         (&VStack_1,(this->fields)._baseRadius,aQStack_2,(MethodInfo *)0x0);
  AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                     (MethodInfo *)0x0);
  uVar3 = (this->fields)._baseCenter.x;
  uVar4 = (this->fields)._baseCenter.y;
  fVar5 = (this->fields)._baseCenter.z;
  pVVar6 = TorusShape3D::TorusShape3D_get_Up(&VStack_1,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._height;
  uVar8 = pVVar6->x;
  uVar9 = pVVar6->y;
  VStack_1.z = fVar7 * pVVar6->z + fVar5;
  VStack_1.y = fVar7 * (float)uVar9 + (float)uVar4;
  VStack_1.x = fVar7 * (float)uVar8 + (float)uVar3;
  AABB::AABB_Encapsulate(__return_storage_ptr__,&VStack_1,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetBaseExtents() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_GetBaseExtents
          (ConeShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._baseCenter.z;
  pLVar3 = ConeMath::ConeMath_CalcConeBaseExtentPoints
                     (&VStack_1,(this->fields)._baseRadius,&QStack_2,(MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_Raycast
               (ConeShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  QStack_1.x = (this->fields)._rotation.x;
  QStack_1.y = (this->fields)._rotation.y;
  QStack_1.z = (this->fields)._rotation.z;
  QStack_1.w = (this->fields)._rotation.w;
  VStack_2.x = (this->fields)._baseCenter.x;
  VStack_2.y = (this->fields)._baseCenter.y;
  RStack_3.m_Origin.x = (ray->m_Origin).x;
  RStack_3.m_Origin.y = (ray->m_Origin).y;
  RStack_3._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_2.z = (this->fields)._baseCenter.z;
  RStack_3.m_Direction.y = (ray->m_Direction).y;
  RStack_3.m_Direction.z = (ray->m_Direction).z;
  bVar4 = ConeMath::ConeMath_Raycast
                    (&RStack_3,t,&VStack_2,(this->fields)._baseRadius,(this->fields)._height,
                     &QStack_1,(ConeEpsilon)0x0,(MethodInfo *)0x0);
  return bVar4;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_RenderSolid
               (ConeShape3D *this,MethodInfo *method)

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
  pOVar3 = pOVar1[5].klass;
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
           CylinderMesh::CylinderMesh_CreateCylinder
                     (_UNK_?,0.0,_UNK_?,0x1e,0x1e,1,1,&CStack_4,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  pOVar1[5].klass = pOVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)(pOVar1 + 5) >> 0xc);
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
  fStack_10 = (this->fields)._baseRadius;
  uStack_11._0_4_ = (this->fields)._baseRadius;
  uStack_11._4_4_ = (this->fields)._height;
  pOVar3 = pOVar1[5].klass;
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

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_RenderWire
               (ConeShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
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
  uVar1._0_4_ = (int32_t)(this->fields)._baseCenter.x;
  uVar1._4_4_ = (int32_t)(this->fields)._baseCenter.y;
  fVar2 = (this->fields)._baseCenter.z;
  pVVar3 = TorusShape3D::TorusShape3D_get_Up
                      ((Vector3 *)&QStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar5 = (this->fields)._height;
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  fVar8 = fVar5 * (float)uVar6 + (float)(int32_t)uVar1;
  fVar9 = fVar5 * (float)uVar7 + (float)uVar1._4_4_;
  fVar2 = fVar5 * pVVar3->z + fVar2;
  pCVar10 = (this->fields)._wireRenderDesc;
  PStack_11._0_8_ = uVar1;
  if (pCVar10 != (ConeShape3D_WireRenderDescriptor *)0x0) {
    if ((pCVar10->fields)._wireMode == 0) {
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar12 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar12 != (MeshPool *)0x0) {
        pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
        uVar14._0_4_ = (this->fields)._baseCenter.x;
        uVar14._4_4_ = (this->fields)._baseCenter.y;
        fVar5 = (this->fields)._baseCenter.z;
        fVar15 = (this->fields)._rotation.x;
        fVar16 = (this->fields)._rotation.y;
        fVar17 = (this->fields)._rotation.z;
        fVar18 = (this->fields)._rotation.w;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
        PStack_11.Quadrant = (int32_t)(pVVar19->rightVector).x;
        PStack_11.FirstAxisSign = (int32_t)(pVVar19->rightVector).y;
        PStack_11.SecondAxisSign = (int32_t)(pVVar19->rightVector).z;
        QStack_20.x = 0.0;
        QStack_20.y = 0.0;
        QStack_20.z = 0.0;
        QStack_20.w = 0.0;
        pcVar21 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        pcRam_? = pcVar21;
        (*pcRam_?)();
        fVar22 = (this->fields)._baseRadius;
        PStack_23.SecondAxisSign = (int32_t)_UNK_?;
        PStack_23.FirstAxisSign = (int32_t)fVar22;
        PStack_23.Quadrant = (int32_t)fVar22;
        QStack_4.y = (fVar18 * QStack_20.y + fVar16 * QStack_20.w + fVar17 * QStack_20.x) -
                       fVar15 * QStack_20.z;
        QStack_4.x = (fVar18 * QStack_20.x + fVar15 * QStack_20.w + fVar16 * QStack_20.z) -
                       fVar17 * QStack_20.y;
        QStack_4.w = ((fVar18 * QStack_20.w - fVar15 * QStack_20.x) - fVar16 * QStack_20.y) -
                       fVar17 * QStack_20.z;
        QStack_4.z = (fVar18 * QStack_20.z + fVar17 * QStack_20.w + fVar15 * QStack_20.y) -
                       fVar16 * QStack_20.x;
        MStack_24.m00 = 0.0;
        MStack_24.m10 = 0.0;
        MStack_24.m20 = 0.0;
        MStack_24.m30 = 0.0;
        MStack_24.m01 = 0.0;
        MStack_24.m11 = 0.0;
        MStack_24.m21 = 0.0;
        MStack_24.m31 = 0.0;
        MStack_24.m02 = 0.0;
        MStack_24.m12 = 0.0;
        MStack_24.m22 = 0.0;
        MStack_24.m32 = 0.0;
        MStack_24.m03 = 0.0;
        MStack_24.m13 = 0.0;
        MStack_24.m23 = 0.0;
        MStack_24.m33 = 0.0;
        pcVar21 = pcRam_?;
        uStack_25 = uVar14;
        fStack_26 = fVar5;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        pcRam_? = pcVar21;
        (*pcRam_?)(&uStack_25,&QStack_4,&PStack_23);
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
        aMStack_27[0].m00 = MStack_24.m00;
        aMStack_27[0].m10 = MStack_24.m10;
        aMStack_27[0].m20 = MStack_24.m20;
        aMStack_27[0].m30 = MStack_24.m30;
        aMStack_27[0].m01 = MStack_24.m01;
        aMStack_27[0].m11 = MStack_24.m11;
        aMStack_27[0].m21 = MStack_24.m21;
        aMStack_27[0].m31 = MStack_24.m31;
        aMStack_27[0].m02 = MStack_24.m02;
        aMStack_27[0].m12 = MStack_24.m12;
        aMStack_27[0].m22 = MStack_24.m22;
        aMStack_27[0].m32 = MStack_24.m32;
        aMStack_27[0].m03 = MStack_24.m03;
        aMStack_27[0].m13 = MStack_24.m13;
        aMStack_27[0].m23 = MStack_24.m23;
        aMStack_27[0].m33 = MStack_24.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                  (pMVar13,aMStack_27,-1,(MethodInfo *)0x0);
        PStack_11.Quadrant = (int32_t)(this->fields)._baseCenter.x;
        PStack_11.FirstAxisSign = (int32_t)(this->fields)._baseCenter.y;
        QStack_20.x = (this->fields)._rotation.x;
        QStack_20.y = (this->fields)._rotation.y;
        QStack_20.z = (this->fields)._rotation.z;
        QStack_20.w = (this->fields)._rotation.w;
        PStack_11.SecondAxisSign = (int32_t)(this->fields)._baseCenter.z;
        pLVar28 = ConeMath::ConeMath_CalcConeBaseExtentPoints
                            ((Vector3 *)&PStack_11,(this->fields)._baseRadius,&QStack_20,
                             (MethodInfo *)0x0);
        this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        FUN_?(this_00,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        pMVar29 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        if (pLVar28 != (List_1_UnityEngine_Vector3_ *)0x0) {
          if ((pLVar28->fields)._size == 0) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pVVar30 = (pLVar28->fields)._items;
          if (pVVar30 != (Vector3__Array *)0x0) {
            if ((int)pVVar30->max_length == 0) goto code_?;
            if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
              uVar31._0_4_ = (int32_t)pVVar30->vector[0].x;
              uVar31._4_4_ = (int32_t)pVVar30->vector[0].y;
              fVar5 = pVVar30->vector[0].z;
              piVar32 = &(this_00->fields)._version;
              *piVar32 = *piVar32 + 1;
              pPVar33 = (this_00->fields)._items;
              if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar34 = (this_00->fields)._size;
                if (uVar34 < (uint)pPVar33->max_length) {
                  (this_00->fields)._size = uVar34 + 1;
                  if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                  pPVar33->vector[(int)uVar34].Quadrant = (int32_t)uVar31;
                  pPVar33->vector[(int)uVar34].FirstAxisSign = uVar31._4_4_;
                  pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar5;
                }
                else {
                  PStack_11._0_8_ = uVar31;
                  PStack_11.SecondAxisSign = (int32_t)fVar5;
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method);
                }
                pMVar29 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                ;
                piVar32 = &(this_00->fields)._version;
                *piVar32 = *piVar32 + 1;
                pPVar33 = (this_00->fields)._items;
                if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                  uVar34 = (this_00->fields)._size;
                  if (uVar34 < (uint)pPVar33->max_length) {
                    (this_00->fields)._size = uVar34 + 1;
                    if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                    pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar8;
                    pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar9;
                    pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar2;
                  }
                  else {
                    PStack_11.FirstAxisSign = (int32_t)fVar9;
                    PStack_11.Quadrant = (int32_t)fVar8;
                    PStack_11.SecondAxisSign = (int32_t)fVar2;
                    mscorlib.dll::System::Collections::Generic::List`1[RTG::
                    PlaneIdHelper+PlaneQuadrantInfo]::
                    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                              (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method);
                  }
                  pMVar29 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                  ;
                  if ((uint)(pLVar28->fields)._size < 2) goto code_?;
                  pVVar30 = (pLVar28->fields)._items;
                  if (pVVar30 != (Vector3__Array *)0x0) {
                    if ((uint)pVVar30->max_length < 2) goto code_?;
                    uVar35._0_4_ = (int32_t)pVVar30->vector[1].x;
                    uVar35._4_4_ = (int32_t)pVVar30->vector[1].y;
                    fVar5 = pVVar30->vector[1].z;
                    piVar32 = &(this_00->fields)._version;
                    *piVar32 = *piVar32 + 1;
                    pPVar33 = (this_00->fields)._items;
                    if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      uVar34 = (this_00->fields)._size;
                      if (uVar34 < (uint)pPVar33->max_length) {
                        (this_00->fields)._size = uVar34 + 1;
                        if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                        pPVar33->vector[(int)uVar34].Quadrant = (int32_t)uVar35;
                        pPVar33->vector[(int)uVar34].FirstAxisSign = uVar35._4_4_;
                        pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar5;
                      }
                      else {
                        PStack_11._0_8_ = uVar35;
                        PStack_11.SecondAxisSign = (int32_t)fVar5;
                        mscorlib.dll::System::Collections::Generic::List`1[RTG::
                        PlaneIdHelper+PlaneQuadrantInfo]::
                        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                  (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method);
                      }
                      pMVar29 = 
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                      ;
                      piVar32 = &(this_00->fields)._version;
                      *piVar32 = *piVar32 + 1;
                      pPVar33 = (this_00->fields)._items;
                      if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar34 = (this_00->fields)._size;
                        if (uVar34 < (uint)pPVar33->max_length) {
                          (this_00->fields)._size = uVar34 + 1;
                          if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                          pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar8;
                          pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar9;
                          pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar2;
                        }
                        else {
                          PStack_11.FirstAxisSign = (int32_t)fVar9;
                          PStack_11.Quadrant = (int32_t)fVar8;
                          PStack_11.SecondAxisSign = (int32_t)fVar2;
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method);
                        }
                        pMVar29 = 
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                        ;
                        if ((uint)(pLVar28->fields)._size < 3) goto code_?;
                        pVVar30 = (pLVar28->fields)._items;
                        if (pVVar30 != (Vector3__Array *)0x0) {
                          if ((uint)pVVar30->max_length < 3) goto code_?;
                          uVar36._0_4_ = (int32_t)pVVar30->vector[2].x;
                          uVar36._4_4_ = (int32_t)pVVar30->vector[2].y;
                          fVar5 = pVVar30->vector[2].z;
                          piVar32 = &(this_00->fields)._version;
                          *piVar32 = *piVar32 + 1;
                          pPVar33 = (this_00->fields)._items;
                          if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar34 = (this_00->fields)._size;
                            if (uVar34 < (uint)pPVar33->max_length) {
                              (this_00->fields)._size = uVar34 + 1;
                              if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                              pPVar33->vector[(int)uVar34].Quadrant = (int32_t)uVar36;
                              pPVar33->vector[(int)uVar34].FirstAxisSign = uVar36._4_4_;
                              pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar5;
                            }
                            else {
                              PStack_11._0_8_ = uVar36;
                              PStack_11.SecondAxisSign = (int32_t)fVar5;
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method)
                              ;
                            }
                            pMVar29 = 
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                            ;
                            piVar32 = &(this_00->fields)._version;
                            *piVar32 = *piVar32 + 1;
                            pPVar33 = (this_00->fields)._items;
                            if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                              uVar34 = (this_00->fields)._size;
                              if (uVar34 < (uint)pPVar33->max_length) {
                                (this_00->fields)._size = uVar34 + 1;
                                if ((uint)pPVar33->max_length <= uVar34) goto code_?;
                                pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar8;
                                pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar9;
                                pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar2;
                              }
                              else {
                                PStack_11.FirstAxisSign = (int32_t)fVar9;
                                PStack_11.Quadrant = (int32_t)fVar8;
                                PStack_11.SecondAxisSign = (int32_t)fVar2;
                                mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                PlaneIdHelper+PlaneQuadrantInfo]::
                                List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                          (this_00,&PStack_11,
                                           pMVar29->klass->rgctx_data[0xe].method);
                              }
                              pMVar29 = 
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                              ;
                              if ((uint)(pLVar28->fields)._size < 4) goto code_?;
                              pVVar30 = (pLVar28->fields)._items;
                              if (pVVar30 != (Vector3__Array *)0x0) {
                                if ((uint)pVVar30->max_length < 4) {
code_?:
                                  FUN_?();
                                  pcVar21 = (code *)swi(3);
                                  (*pcVar21)();
                                  return;
                                }
                                uVar37._0_4_ = (int32_t)pVVar30->vector[3].x;
                                uVar37._4_4_ = (int32_t)pVVar30->vector[3].y;
                                fVar5 = pVVar30->vector[3].z;
                                piVar32 = &(this_00->fields)._version;
                                *piVar32 = *piVar32 + 1;
                                pPVar33 = (this_00->fields)._items;
                                if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                  uVar34 = (this_00->fields)._size;
                                  if (uVar34 < (uint)pPVar33->max_length) {
                                    (this_00->fields)._size = uVar34 + 1;
                                    if ((uint)pPVar33->max_length <= uVar34)
                                    goto code_?;
                                    pPVar33->vector[(int)uVar34].Quadrant = (int32_t)uVar37;
                                    pPVar33->vector[(int)uVar34].FirstAxisSign = uVar37._4_4_;
                                    pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar5;
                                  }
                                  else {
                                    PStack_11._0_8_ = uVar37;
                                    PStack_11.SecondAxisSign = (int32_t)fVar5;
                                    mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                    PlaneIdHelper+PlaneQuadrantInfo]::
                                    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                              (this_00,&PStack_11,
                                               pMVar29->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar29 = 
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                                  ;
                                  piVar32 = &(this_00->fields)._version;
                                  *piVar32 = *piVar32 + 1;
                                  pPVar33 = (this_00->fields)._items;
                                  if (pPVar33 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar34 = (this_00->fields)._size;
                                    if (uVar34 < (uint)pPVar33->max_length) {
                                      (this_00->fields)._size = uVar34 + 1;
                                      if ((uint)pPVar33->max_length <= uVar34)
                                      goto code_?;
                                      pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar8;
                                      pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar9;
                                      pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar2;
                                    }
                                    else {
                                      PStack_11.FirstAxisSign = (int32_t)fVar9;
                                      PStack_11.Quadrant = (int32_t)fVar8;
                                      PStack_11.SecondAxisSign = (int32_t)fVar2;
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (this_00,&PStack_11,
                                                 pMVar29->klass->rgctx_data[0xe].method);
                                    }
Assembly_CSharp_dll_RTG_GLRenderer_GLRenderer_DrawLines3D:
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                                                  ,0);
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (this_00 ==
                                        (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
                                      FUN_?();
                                      pcVar21 = (code *)swi(3);
                                      (*pcVar21)();
                                      return;
                                    }
                                    if (1 < (this_00->fields)._size) {
                                      pcVar21 = pcRam_?;
                                      if (pcRam_? == (code *)0x0) {
                                        pcVar21 = (code *)FUN_?(&UNK_?);
                                        if (pcVar21 == (code *)0x0) {
                                          uVar1 = func_?(&UNK_?);
                                          FUN_?(uVar1,0);
                                          pcVar21 = (code *)swi(3);
                                          (*pcVar21)();
                                          return;
                                        }
                                      }
                                      pcRam_? = pcVar21;
                                      (*pcRam_?)(1);
                                      uVar38 = 0;
                                      uVar39 = uVar38;
                                      while (uVar34 = (uint)uVar39,
                                            (int)uVar34 < (this_00->fields)._size + -1) {
                                        if ((uint)(this_00->fields)._size <= uVar34) {
code_?:
                                          mscorlib.dll::System::ThrowHelper::
                                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                                    ((MethodInfo *)0x0);
                                          pcVar21 = (code *)swi(3);
                                          (*pcVar21)();
                                          return;
                                        }
                                        pPVar33 = (this_00->fields)._items;
                                        if (pPVar33 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0
                                           ) goto code_?;
                                        if ((uint)pPVar33->max_length <= uVar34) {
code_?:
                                          FUN_?();
                                          pcVar21 = (code *)swi(3);
                                          (*pcVar21)();
                                          return;
                                        }
                                        if ((uint)(this_00->fields)._size <= uVar34 + 1)
                                        goto code_?;
                                        if ((uint)pPVar33->max_length <= uVar34 + 1)
                                        goto code_?;
                                        uVar1 = *(undefined8 *)
                                                  ((longlong)&pPVar33->vector[1].Quadrant + uVar38);
                                        fVar5 = *(float *)((longlong)
                                                           &pPVar33->vector[1].SecondAxisSign +
                                                          uVar38);
                                        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                                  ((float)*(undefined8 *)
                                                           ((longlong)&pPVar33->vector[0].Quadrant +
                                                           uVar38),
                                                   *(float *)((longlong)
                                                              &pPVar33->vector[0].FirstAxisSign +
                                                             uVar38),
                                                   *(float *)((longlong)
                                                              &pPVar33->vector[0].SecondAxisSign +
                                                             uVar38),(MethodInfo *)0x0);
                                        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                                  ((float)uVar1,(float)((ulonglong)uVar1 >> 0x20),
                                                   fVar5,(MethodInfo *)0x0);
                                        uVar38 = uVar38 + 0xc;
                                        uVar39 = (ulonglong)(uVar34 + 1);
                                      }
                                      pcVar21 = pcRam_?;
                                      if (pcRam_? == (code *)0x0) {
                                        pcVar21 = (code *)FUN_?(&UNK_?);
                                        if (pcVar21 == (code *)0x0) {
                                          uVar1 = func_?(&UNK_?);
                                          FUN_?(uVar1,0);
                                          pcVar21 = (code *)swi(3);
                                          (*pcVar21)();
                                          return;
                                        }
                                      }
                                      pcRam_? = pcVar21;
                                      (*pcRam_?)();
                                    }
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pVVar3 = TorusShape3D::TorusShape3D_get_Up
                          ((Vector3 *)&QStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
      uStack_40._0_4_ = pVVar3->x;
      uStack_40._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      uStack_41 = uStack_40;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_42._0_4_ = (pVVar19->rightVector).x;
      uStack_42._4_4_ = (pVVar19->rightVector).y;
      fStack_43 = (pVVar19->rightVector).z;
      QStack_20.x = 0.0;
      QStack_20.y = 0.0;
      QStack_20.z = 0.0;
      QStack_20.w = 0.0;
      pcVar21 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      (*pcRam_?)();
      pCVar10 = (this->fields)._wireRenderDesc;
      if (pCVar10 != (ConeShape3D_WireRenderDescriptor *)0x0) {
        iVar44 = 0;
        iVar45 = 0;
        fVar15 = (this->fields)._height;
        pCVar46 = (this->fields)._wireRenderDesc;
        fVar18 = (this->fields)._height / (float)((pCVar10->fields)._numDetailAxialRings + -1);
        fVar16 = (this->fields)._baseRadius;
        fVar17 = _UNK_?;
        if (_UNK_? < fVar16) {
          fVar17 = fVar16;
        }
        fVar22 = uStack_40._4_4_;
        fVar16 = (float)uStack_40;
        do {
          if ((pCVar46->fields)._numDetailAxialRings <= iVar45) {
            pCVar10 = (this->fields)._wireRenderDesc;
            if (pCVar10 != (ConeShape3D_WireRenderDescriptor *)0x0) {
              iVar45 = (pCVar10->fields)._numDetailAxialSegments;
              this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                     );
              FUN_?(this_00,iVar45 * 2,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                           );
              pCVar10 = (this->fields)._wireRenderDesc;
              if (pCVar10 != (ConeShape3D_WireRenderDescriptor *)0x0) {
                fStack_47 = _UNK_? / (float)(pCVar10->fields)._numDetailAxialSegments;
                goto code_?;
              }
            }
            break;
          }
          fVar48 = (float)iVar45;
          QStack_4.x = (this->fields)._baseCenter.x;
          QStack_4.y = (this->fields)._baseCenter.y;
          fVar49 = fVar16 * fVar18 * fVar48 + QStack_4.x;
          fVar50 = fVar22 * fVar18 * fVar48 + QStack_4.y;
          fVar48 = fVar5 * fVar18 * fVar48 + (this->fields)._baseCenter.z;
          fVar51 = ((this->fields)._height - (float)iVar45 * fVar18) / (fVar15 / fVar17);
          if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar12 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar12 == (MeshPool *)0x0) break;
          pMVar13 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar12,(MethodInfo *)0x0);
          uStack_40 = CONCAT44(fVar51,fVar51);
          fStack_52 = _UNK_?;
          uStack_42 = CONCAT44(fVar50,fVar49);
          QStack_4.x = QStack_20.x;
          QStack_4.y = QStack_20.y;
          QStack_4.z = QStack_20.z;
          QStack_4.w = QStack_20.w;
          MStack_24.m00 = 0.0;
          MStack_24.m10 = 0.0;
          MStack_24.m20 = 0.0;
          MStack_24.m30 = 0.0;
          MStack_24.m01 = 0.0;
          MStack_24.m11 = 0.0;
          MStack_24.m21 = 0.0;
          MStack_24.m31 = 0.0;
          MStack_24.m02 = 0.0;
          MStack_24.m12 = 0.0;
          MStack_24.m22 = 0.0;
          MStack_24.m32 = 0.0;
          MStack_24.m03 = 0.0;
          MStack_24.m13 = 0.0;
          MStack_24.m23 = 0.0;
          MStack_24.m33 = 0.0;
          pcVar21 = pcRam_?;
          fStack_43 = fVar48;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
            uVar1 = func_?(&UNK_?);
            FUN_?(uVar1,0);
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pcRam_? = pcVar21;
          (*pcRam_?)(&uStack_42,&QStack_4,&uStack_40);
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
          aMStack_27[0].m00 = MStack_24.m00;
          aMStack_27[0].m10 = MStack_24.m10;
          aMStack_27[0].m20 = MStack_24.m20;
          aMStack_27[0].m30 = MStack_24.m30;
          aMStack_27[0].m01 = MStack_24.m01;
          aMStack_27[0].m11 = MStack_24.m11;
          aMStack_27[0].m21 = MStack_24.m21;
          aMStack_27[0].m31 = MStack_24.m31;
          aMStack_27[0].m02 = MStack_24.m02;
          aMStack_27[0].m12 = MStack_24.m12;
          aMStack_27[0].m22 = MStack_24.m22;
          aMStack_27[0].m32 = MStack_24.m32;
          aMStack_27[0].m03 = MStack_24.m03;
          aMStack_27[0].m13 = MStack_24.m13;
          aMStack_27[0].m23 = MStack_24.m23;
          aMStack_27[0].m33 = MStack_24.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (pMVar13,aMStack_27,-1,(MethodInfo *)0x0);
          pCVar46 = (this->fields)._wireRenderDesc;
          iVar45 = iVar45 + 1;
        } while (pCVar46 != (ConeShape3D_WireRenderDescriptor *)0x0);
      }
    }
  }
  goto code_?;
  while( true ) {
    piVar32 = &(this_00->fields)._version;
    *piVar32 = *piVar32 + 1;
    pPVar33 = (this_00->fields)._items;
    if (pPVar33 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
    uVar34 = (this_00->fields)._size;
    if (uVar34 < (uint)pPVar33->max_length) {
      (this_00->fields)._size = uVar34 + 1;
      if ((uint)pPVar33->max_length <= uVar34) goto code_?;
      pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar17;
      pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar18;
      pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar15;
    }
    else {
      PStack_23.FirstAxisSign = (int32_t)fVar18;
      PStack_23.Quadrant = (int32_t)fVar17;
      PStack_23.SecondAxisSign = (int32_t)fVar15;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_23,pMVar29->klass->rgctx_data[0xe].method);
    }
    pMVar29 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar32 = &(this_00->fields)._version;
    *piVar32 = *piVar32 + 1;
    pPVar33 = (this_00->fields)._items;
    if (pPVar33 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) break;
    uVar34 = (this_00->fields)._size;
    if (uVar34 < (uint)pPVar33->max_length) {
      (this_00->fields)._size = uVar34 + 1;
      if ((uint)pPVar33->max_length <= uVar34) goto code_?;
      pPVar33->vector[(int)uVar34].Quadrant = (int32_t)fVar8;
      pPVar33->vector[(int)uVar34].FirstAxisSign = (int32_t)fVar9;
      pPVar33->vector[(int)uVar34].SecondAxisSign = (int32_t)fVar2;
    }
    else {
      PStack_11.FirstAxisSign = (int32_t)fVar9;
      PStack_11.Quadrant = (int32_t)fVar8;
      PStack_11.SecondAxisSign = (int32_t)fVar2;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this_00,&PStack_11,pMVar29->klass->rgctx_data[0xe].method);
    }
    pCVar10 = (this->fields)._wireRenderDesc;
    iVar44 = iVar44 + 1;
    if (pCVar10 == (ConeShape3D_WireRenderDescriptor *)0x0) break;
code_?:
    if ((pCVar10->fields)._numDetailAxialSegments <= iVar44)
    goto Assembly_CSharp_dll_RTG_GLRenderer_GLRenderer_DrawLines3D;
    uStack_40 = uStack_41;
    QStack_20.x = 0.0;
    QStack_20.y = 0.0;
    QStack_20.z = 0.0;
    QStack_20.w = 0.0;
    pcVar21 = pcRam_?;
    fStack_52 = fVar5;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcRam_? = pcVar21;
    (*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar16 = (QStack_20.y + QStack_20.y) * QStack_20.x;
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar17 = (QStack_20.z + QStack_20.z) * QStack_20.z;
    fVar18 = (QStack_20.z + QStack_20.z) * QStack_20.y;
    QStack_4.x = (pVVar19->rightVector).x;
    QStack_4.y = (pVVar19->rightVector).y;
    fVar15 = (pVVar19->rightVector).z;
    fVar51 = (QStack_20.x + QStack_20.x) * QStack_20.x;
    fVar53 = (QStack_20.z + QStack_20.z) * QStack_20.x;
    fVar22 = (QStack_20.z + QStack_20.z) * QStack_20.w;
    fVar49 = (QStack_20.y + QStack_20.y) * QStack_20.y;
    fVar50 = (QStack_20.x + QStack_20.x) * QStack_20.w;
    fVar48 = (QStack_20.y + QStack_20.y) * QStack_20.w;
    fVar54 = (_UNK_? - (fVar17 + fVar49)) * QStack_4.x + (fVar16 - fVar22) * QStack_4.y
             + (fVar48 + fVar53) * fVar15;
    fVar17 = (_UNK_? - (fVar17 + fVar51)) * QStack_4.y + (fVar22 + fVar16) * QStack_4.x
             + (fVar18 - fVar50) * fVar15;
    fVar15 = (fVar53 - fVar48) * QStack_4.x + (fVar50 + fVar18) * QStack_4.y +
             (_UNK_? - (fVar49 + fVar51)) * fVar15;
    uStack_25 = CONCAT44(fVar17,fVar54);
    fStack_26 = fVar15;
    fVar16 = (float)FUN_?(&uStack_25);
    if (_UNK_? < fVar16) {
      fVar15 = fVar15 / fVar16;
      uStack_42 = CONCAT44(fVar17 / fVar16,fVar54 / fVar16);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_42._0_4_ = (pVVar19->zeroVector).x;
      uStack_42._4_4_ = (pVVar19->zeroVector).y;
      fVar15 = (pVVar19->zeroVector).z;
    }
    pMVar29 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar16 = (this->fields)._baseRadius;
    QStack_20.x = (this->fields)._baseCenter.x;
    QStack_20.y = (this->fields)._baseCenter.y;
    fVar17 = (float)uStack_42 * fVar16 + QStack_20.x;
    fVar18 = uStack_42._4_4_ * fVar16 + QStack_20.y;
    fVar15 = fVar15 * fVar16 + (this->fields)._baseCenter.z;
    if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* ConeShape3D() */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D__ctor(ConeShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ConeShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ConeShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__ConeShape3D__WireRenderDescriptor);
  bVar2 = iRam_? != 0;
  (pCVar1->fields)._numDetailAxialRings = 0x14;
  (pCVar1->fields)._numDetailAxialSegments = 0x14;
  (this->fields)._wireRenderDesc = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  (this->fields)._baseCenter.x = (pVVar7->zeroVector).x;
  (this->fields)._baseCenter.y = fVar8;
  (this->fields)._baseCenter.z = fVar9;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar10->identityQuaternion).x;
  fVar8 = (pQVar10->identityQuaternion).y;
  fVar11 = (pQVar10->identityQuaternion).z;
  fVar12 = (pQVar10->identityQuaternion).w;
  (this->fields)._baseRadius = 1.0;
  (this->fields)._height = 1.0;
  (this->fields)._rotation.x = fVar9;
  (this->fields)._rotation.y = fVar8;
  (this->fields)._rotation.z = fVar11;
  (this->fields)._rotation.w = fVar12;
  return;
}


/* Vector3 get_CentralAxis() */

Vector3 * Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_get_CentralAxis
                    (Vector3 *__return_storage_ptr__,ConeShape3D *this,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* ConeEpsilon get_Epsilon() */

ConeEpsilon
Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_get_Epsilon(ConeShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon;
}


/* Vector3 get_Tip() */

Vector3 * Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_get_Tip
                    (Vector3 *__return_storage_ptr__,ConeShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TorusShape3D::TorusShape3D_get_Up(aVStack_5,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Void set_Epsilon(ConeEpsilon) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_set_Epsilon
               (ConeShape3D *this,ConeEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon = value;
  return;
}


/* Void set_Tip(Vector3) */

void Assembly-CSharp.dll::RTG::ConeShape3D::ConeShape3D_set_Tip
               (ConeShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(aVStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
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

