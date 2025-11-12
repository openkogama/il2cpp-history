
/* Void CalculateEndPoint() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_CalculateEndPoint
               (ArcShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  uVar3 = (this->fields)._origin.x;
  uVar4 = (this->fields)._origin.y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = (this->fields)._startPoint.z - (this->fields)._origin.z;
  fVar7 = (float)uVar2 - (float)uVar4;
  fVar8 = (this->fields)._origin.z;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)();
  fVar11 = _UNK_? - 0.0;
  fVar12 = _UNK_? - 0.0;
  (this->fields)._endPoint.x =
       (_UNK_? - 0.0) * fVar5 + fVar7 * 0.0 + fVar6 * 0.0 + (float)uVar3;
  (this->fields)._endPoint.y = fVar11 * fVar7 + fVar5 * 0.0 + fVar6 * 0.0 + (float)uVar4;
  (this->fields)._endPoint.z = fVar7 * 0.0 + fVar5 * 0.0 + fVar12 * fVar6 + fVar8;
  return;
}


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_ContainsPoint
               (ArcShape3D *this,Vector3 *point,bool checkOnPlane,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    AStack_1._wireEps = (this->fields)._epsilon._wireEps;
    AStack_1._areaEps = (this->fields)._epsilon._areaEps;
    AStack_1._extrudeEps = (this->fields)._epsilon._extrudeEps;
    VStack_2.z = (this->fields)._plane.m_Normal.z;
    VStack_2.x = (this->fields)._plane.m_Normal.x;
    VStack_2.y = (this->fields)._plane.m_Normal.y;
    VStack_3.z = (this->fields)._startPoint.z;
    VStack_3.x = (this->fields)._startPoint.x;
    VStack_3.y = (this->fields)._startPoint.y;
    VStack_4.z = (this->fields)._origin.z;
    VStack_4.x = (this->fields)._origin.x;
    VStack_4.y = (this->fields)._origin.y;
    AStack_5._wireEps = point->z;
    AStack_5._areaEps = point->x;
    AStack_5._extrudeEps = point->y;
    bVar6 = ArcMath::ArcMath_LgArcContains3DPoint
                      ((Vector3 *)&AStack_5,checkOnPlane,&VStack_4,&VStack_3,&VStack_2,
                       (this->fields)._degreeAngleFromStart,&AStack_1,(MethodInfo *)0x0);
    return bVar6;
  }
  AStack_5._wireEps = (this->fields)._epsilon._wireEps;
  AStack_5._areaEps = (this->fields)._epsilon._areaEps;
  AStack_5._extrudeEps = (this->fields)._epsilon._extrudeEps;
  VStack_4.z = (this->fields)._plane.m_Normal.z;
  VStack_4.x = (this->fields)._plane.m_Normal.x;
  VStack_4.y = (this->fields)._plane.m_Normal.y;
  VStack_3.z = (this->fields)._startPoint.z;
  VStack_3.x = (this->fields)._startPoint.x;
  VStack_3.y = (this->fields)._startPoint.y;
  VStack_2.z = (this->fields)._origin.z;
  VStack_2.x = (this->fields)._origin.x;
  VStack_2.y = (this->fields)._origin.y;
  AStack_1._wireEps = point->z;
  AStack_1._areaEps = point->x;
  AStack_1._extrudeEps = point->y;
  bVar6 = ArcMath::ArcMath_ShArcContains3DPoint
                    ((Vector3 *)&AStack_1,checkOnPlane,&VStack_2,&VStack_3,&VStack_4,
                     (this->fields)._degreeAngleFromStart,&AStack_5,(MethodInfo *)0x0);
  return bVar6;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_GetAABB
                 (AABB *__return_storage_ptr__,ArcShape3D *this,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  bVar1 = (this->fields)._aabb._isValid;
  uVar2 = *(undefined3 *)&(this->fields)._aabb.field_0x19;
  fVar3 = (this->fields)._aabb._size.y;
  uVar4 = *(undefined8 *)&(this->fields)._aabb._size.z;
  fVar5 = (this->fields)._aabb._center.y;
  fVar6 = (this->fields)._aabb._center.z;
  (__return_storage_ptr__->_size).x = (this->fields)._aabb._size.x;
  (__return_storage_ptr__->_size).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar4;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  __return_storage_ptr__->_isValid = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar2;
  return __return_storage_ptr__;
}


/* Void OnBorderPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_OnBorderPointsFoundDirty
               (ArcShape3D *this,MethodInfo *method)

{
  VStack_1.z = (this->fields)._startPoint.z;
  AStack_2._size.x = (this->fields)._plane.m_Normal.x;
  AStack_2._size.y = (this->fields)._plane.m_Normal.y;
  AStack_2._8_8_ = *(undefined8 *)&(this->fields)._plane.m_Normal.z;
  VStack_1.x = (this->fields)._startPoint.x;
  VStack_1.y = (this->fields)._startPoint.y;
  VStack_3.z = (this->fields)._origin.z;
  VStack_3.x = (this->fields)._origin.x;
  VStack_3.y = (this->fields)._origin.y;
  pLVar4 = PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
                     (&VStack_3,&VStack_1,(Plane *)&AStack_2,(this->fields)._degreeAngleFromStart
                      ,(this->fields)._forceShortestArc,(this->fields)._numBorderPoints,
                      (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields)._borderPoints = pLVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._borderPoints >> 0xc);
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
  AStack_2._center.y = 0.0;
  AStack_2._center.z = 0.0;
  AStack_2._size.x = 0.0;
  AStack_2._size.y = 0.0;
  AStack_2._size.z = 0.0;
  AStack_2._center.x = 0.0;
  AStack_2._isValid = 0;
  AStack_2._25_3_ = 0;
  AABB::AABB__ctor_2(&AStack_2,(IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._borderPoints,
                     (MethodInfo *)0x0);
  (this->fields)._aabb._size.x = AStack_2._size.x;
  (this->fields)._aabb._size.y = AStack_2._size.y;
  *(undefined8 *)&(this->fields)._aabb._size.z = AStack_2._8_8_;
  VStack_3.x = (this->fields)._origin.x;
  VStack_3.y = (this->fields)._origin.y;
  (this->fields)._aabb._center.y = AStack_2._center.y;
  (this->fields)._aabb._center.z = AStack_2._center.z;
  (this->fields)._aabb._isValid = AStack_2._isValid;
  *(undefined3 *)&(this->fields)._aabb.field_0x19 = AStack_2._25_3_;
  VStack_3.z = (this->fields)._origin.z;
  AABB::AABB_Encapsulate(&(this->fields)._aabb,&VStack_3,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 0;
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_Raycast
               (ArcShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  bVar1 = (this->fields)._forceShortestArc;
  if ((this->fields)._raycastMode == 0) {
    if ((bVar1 == 0) &&
       (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
      VStack_2.x = (this->fields)._plane.m_Normal.x;
      VStack_2.y = (this->fields)._plane.m_Normal.y;
      AStack_3._wireEps = (this->fields)._epsilon._wireEps;
      AStack_3._areaEps = (this->fields)._epsilon._areaEps;
      AStack_3._extrudeEps = (this->fields)._epsilon._extrudeEps;
      VStack_4.x = (this->fields)._startPoint.x;
      VStack_4.y = (this->fields)._startPoint.y;
      VStack_4.z = (this->fields)._startPoint.z;
      AStack_5._areaEps = (this->fields)._origin.x;
      AStack_5._extrudeEps = (this->fields)._origin.y;
      AStack_5._wireEps = (this->fields)._origin.z;
      RStack_6.m_Origin.x = (ray->m_Origin).x;
      RStack_6.m_Origin.y = (ray->m_Origin).y;
      RStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      VStack_2.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
      RStack_6.m_Direction.y = (ray->m_Direction).y;
      RStack_6.m_Direction.z = (ray->m_Direction).z;
      bVar1 = ArcMath::ArcMath_RaycastLgArc
                        (&RStack_6,t,(Vector3 *)&AStack_5,&VStack_4,&VStack_2,
                         (this->fields)._degreeAngleFromStart,&AStack_3,(MethodInfo *)0x0);
      return bVar1;
    }
    VStack_2.x = (this->fields)._plane.m_Normal.x;
    VStack_2.y = (this->fields)._plane.m_Normal.y;
    AStack_3._wireEps = (this->fields)._epsilon._wireEps;
    AStack_3._areaEps = (this->fields)._epsilon._areaEps;
    AStack_3._extrudeEps = (this->fields)._epsilon._extrudeEps;
    VStack_4.x = (this->fields)._startPoint.x;
    VStack_4.y = (this->fields)._startPoint.y;
    VStack_4.z = (this->fields)._startPoint.z;
    AStack_5._areaEps = (this->fields)._origin.x;
    AStack_5._extrudeEps = (this->fields)._origin.y;
    AStack_5._wireEps = (this->fields)._origin.z;
    RStack_6.m_Origin.x = (ray->m_Origin).x;
    RStack_6.m_Origin.y = (ray->m_Origin).y;
    RStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_2.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
    RStack_6.m_Direction.y = (ray->m_Direction).y;
    RStack_6.m_Direction.z = (ray->m_Direction).z;
    bVar1 = ArcMath::ArcMath_RaycastShArc
                      (&RStack_6,t,(Vector3 *)&AStack_5,&VStack_4,&VStack_2,
                       (this->fields)._degreeAngleFromStart,&AStack_3,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((bVar1 == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    VStack_4.x = (this->fields)._plane.m_Normal.x;
    VStack_4.y = (this->fields)._plane.m_Normal.y;
    AStack_5._wireEps = (this->fields)._epsilon._wireEps;
    AStack_5._areaEps = (this->fields)._epsilon._areaEps;
    AStack_5._extrudeEps = (this->fields)._epsilon._extrudeEps;
    VStack_2.x = (this->fields)._startPoint.x;
    VStack_2.y = (this->fields)._startPoint.y;
    VStack_2.z = (this->fields)._startPoint.z;
    AStack_3._areaEps = (this->fields)._origin.x;
    AStack_3._extrudeEps = (this->fields)._origin.y;
    AStack_3._wireEps = (this->fields)._origin.z;
    RStack_6.m_Origin.x = (ray->m_Origin).x;
    RStack_6.m_Origin.y = (ray->m_Origin).y;
    RStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_4.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
    RStack_6.m_Direction.y = (ray->m_Direction).y;
    RStack_6.m_Direction.z = (ray->m_Direction).z;
    bVar1 = ArcMath::ArcMath_RaycastLgArcWire
                      (&RStack_6,t,(Vector3 *)&AStack_3,&VStack_2,&VStack_4,
                       (this->fields)._degreeAngleFromStart,&AStack_5,(MethodInfo *)0x0);
    return bVar1;
  }
  VStack_2.x = (this->fields)._plane.m_Normal.x;
  VStack_2.y = (this->fields)._plane.m_Normal.y;
  AStack_3._wireEps = (this->fields)._epsilon._wireEps;
  AStack_3._areaEps = (this->fields)._epsilon._areaEps;
  AStack_3._extrudeEps = (this->fields)._epsilon._extrudeEps;
  VStack_4.x = (this->fields)._startPoint.x;
  VStack_4.y = (this->fields)._startPoint.y;
  VStack_4.z = (this->fields)._startPoint.z;
  AStack_5._areaEps = (this->fields)._origin.x;
  AStack_5._extrudeEps = (this->fields)._origin.y;
  AStack_5._wireEps = (this->fields)._origin.z;
  RStack_6.m_Origin.x = (ray->m_Origin).x;
  RStack_6.m_Origin.y = (ray->m_Origin).y;
  RStack_6._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_2.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
  RStack_6.m_Direction.y = (ray->m_Direction).y;
  RStack_6.m_Direction.z = (ray->m_Direction).z;
  bVar1 = ArcMath::ArcMath_RaycastShArcWire
                    (&RStack_6,t,(Vector3 *)&AStack_5,&VStack_4,&VStack_2,
                     (this->fields)._degreeAngleFromStart,&AStack_3,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RaycastWire
               (ArcShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (((this->fields)._forceShortestArc == 0) &&
     (_UNK_? < (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?))) {
    VStack_1.x = (this->fields)._plane.m_Normal.x;
    VStack_1.y = (this->fields)._plane.m_Normal.y;
    AStack_2._wireEps = (this->fields)._epsilon._wireEps;
    AStack_2._areaEps = (this->fields)._epsilon._areaEps;
    AStack_2._extrudeEps = (this->fields)._epsilon._extrudeEps;
    VStack_3.x = (this->fields)._startPoint.x;
    VStack_3.y = (this->fields)._startPoint.y;
    VStack_3.z = (this->fields)._startPoint.z;
    AStack_4._areaEps = (this->fields)._origin.x;
    AStack_4._extrudeEps = (this->fields)._origin.y;
    AStack_4._wireEps = (this->fields)._origin.z;
    RStack_5.m_Origin.x = (ray->m_Origin).x;
    RStack_5.m_Origin.y = (ray->m_Origin).y;
    RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    VStack_1.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
    RStack_5.m_Direction.y = (ray->m_Direction).y;
    RStack_5.m_Direction.z = (ray->m_Direction).z;
    bVar6 = ArcMath::ArcMath_RaycastLgArcWire
                      (&RStack_5,t,(Vector3 *)&AStack_4,&VStack_3,&VStack_1,
                       (this->fields)._degreeAngleFromStart,&AStack_2,(MethodInfo *)0x0);
    return bVar6;
  }
  VStack_3.x = (this->fields)._plane.m_Normal.x;
  VStack_3.y = (this->fields)._plane.m_Normal.y;
  AStack_4._wireEps = (this->fields)._epsilon._wireEps;
  AStack_4._areaEps = (this->fields)._epsilon._areaEps;
  AStack_4._extrudeEps = (this->fields)._epsilon._extrudeEps;
  VStack_1.x = (this->fields)._startPoint.x;
  VStack_1.y = (this->fields)._startPoint.y;
  VStack_1.z = (this->fields)._startPoint.z;
  AStack_2._areaEps = (this->fields)._origin.x;
  AStack_2._extrudeEps = (this->fields)._origin.y;
  AStack_2._wireEps = (this->fields)._origin.z;
  RStack_5.m_Origin.x = (ray->m_Origin).x;
  RStack_5.m_Origin.y = (ray->m_Origin).y;
  RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_3.z = (float)*(undefined8 *)&(this->fields)._plane.m_Normal.z;
  RStack_5.m_Direction.y = (ray->m_Direction).y;
  RStack_5.m_Direction.z = (ray->m_Direction).z;
  bVar6 = ArcMath::ArcMath_RaycastShArcWire
                    (&RStack_5,t,(Vector3 *)&AStack_2,&VStack_1,&VStack_3,
                     (this->fields)._degreeAngleFromStart,&AStack_4,(MethodInfo *)0x0);
  return bVar6;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RenderSolid
               (ArcShape3D *this,MethodInfo *method)

{
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  VStack_1.x = (this->fields)._origin.x;
  VStack_1.y = (this->fields)._origin.y;
  VStack_1.z = (this->fields)._origin.z;
  GLRenderer::GLRenderer_DrawTriangleFan3D_1
            (&VStack_1,(this->fields)._borderPoints,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_RenderWire
               (ArcShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._areBorderPointsDirty != 0) {
    ArcShape3D_OnBorderPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields)._wireRenderDesc;
  if (pAVar1 != (ArcShape3D_WireRenderDescriptor *)0x0) {
    if (((pAVar1->fields)._wireFlags & 2) != 0) {
      GLRenderer::GLRenderer_DrawLines3D((this->fields)._borderPoints,(MethodInfo *)0x0);
    }
    pAVar1 = (this->fields)._wireRenderDesc;
    if (pAVar1 == (ArcShape3D_WireRenderDescriptor *)0x0) goto code_?;
    if (((pAVar1->fields)._wireFlags & 1) != 0) {
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      FUN_?(this_00,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      uVar3._0_4_ = (int32_t)(this->fields)._origin.x;
      uVar3._4_4_ = (int32_t)(this->fields)._origin.y;
      fVar4 = (this->fields)._origin.z;
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pPVar6 = (this_00->fields)._items;
      if (pPVar6 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar7 = (this_00->fields)._size;
      if (uVar7 < (uint)pPVar6->max_length) {
        (this_00->fields)._size = uVar7 + 1;
        if ((uint)pPVar6->max_length <= uVar7) goto code_?;
        pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar3;
        pPVar6->vector[(int)uVar7].FirstAxisSign = uVar3._4_4_;
        pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
      }
      else {
        PStack_8._0_8_ = uVar3;
        PStack_8.SecondAxisSign = (int32_t)fVar4;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_8,pMVar2->klass->rgctx_data[0xe].method);
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uVar9._0_4_ = (int32_t)(this->fields)._startPoint.x;
      uVar9._4_4_ = (int32_t)(this->fields)._startPoint.y;
      fVar4 = (this->fields)._startPoint.z;
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pPVar6 = (this_00->fields)._items;
      if (pPVar6 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar7 = (this_00->fields)._size;
      if (uVar7 < (uint)pPVar6->max_length) {
        (this_00->fields)._size = uVar7 + 1;
        if ((uint)pPVar6->max_length <= uVar7) goto code_?;
        pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar9;
        pPVar6->vector[(int)uVar7].FirstAxisSign = uVar9._4_4_;
        pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
      }
      else {
        PStack_8._0_8_ = uVar9;
        PStack_8.SecondAxisSign = (int32_t)fVar4;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_8,pMVar2->klass->rgctx_data[0xe].method);
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uVar10._0_4_ = (int32_t)(this->fields)._origin.x;
      uVar10._4_4_ = (int32_t)(this->fields)._origin.y;
      fVar4 = (this->fields)._origin.z;
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pPVar6 = (this_00->fields)._items;
      if (pPVar6 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar7 = (this_00->fields)._size;
      if (uVar7 < (uint)pPVar6->max_length) {
        (this_00->fields)._size = uVar7 + 1;
        if ((uint)pPVar6->max_length <= uVar7) goto code_?;
        pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar10;
        pPVar6->vector[(int)uVar7].FirstAxisSign = uVar10._4_4_;
        pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
      }
      else {
        PStack_8._0_8_ = uVar10;
        PStack_8.SecondAxisSign = (int32_t)fVar4;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_8,pMVar2->klass->rgctx_data[0xe].method);
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      uVar11._0_4_ = (int32_t)(this->fields)._endPoint.x;
      uVar11._4_4_ = (int32_t)(this->fields)._endPoint.y;
      fVar4 = (this->fields)._endPoint.z;
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pPVar6 = (this_00->fields)._items;
      if (pPVar6 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar7 = (this_00->fields)._size;
      if (uVar7 < (uint)pPVar6->max_length) {
        (this_00->fields)._size = uVar7 + 1;
        if ((uint)pPVar6->max_length <= uVar7) {
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar11;
        pPVar6->vector[(int)uVar7].FirstAxisSign = uVar11._4_4_;
        pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
      }
      else {
        PStack_8._0_8_ = uVar11;
        PStack_8.SecondAxisSign = (int32_t)fVar4;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_8,pMVar2->klass->rgctx_data[0xe].method);
      }
      GLRenderer::GLRenderer_DrawLines3D((List_1_UnityEngine_Vector3_ *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetArcData(Plane, Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_SetArcData
               (ArcShape3D *this,Plane *plane,Vector3 *origin,Vector3 *startPoint,float radius,
               MethodInfo *method)

{
  fVar1 = (plane->m_Normal).x;
  fVar2 = (plane->m_Normal).y;
  fVar3 = (plane->m_Normal).z;
  fVar4 = plane->m_Distance;
  uVar5 = origin->x;
  uVar6 = origin->y;
  (this->fields)._plane.m_Normal.x = fVar1;
  (this->fields)._plane.m_Normal.y = fVar2;
  (this->fields)._plane.m_Normal.z = fVar3;
  (this->fields)._plane.m_Distance = fVar4;
  fVar4 = fVar2 * (float)uVar6 + fVar1 * (float)uVar5 + fVar3 * origin->z + fVar4;
  fVar7 = origin->z;
  uVar8 = origin->x;
  fVar9 = origin->y;
  fVar10 = (plane->m_Normal).x;
  fVar11 = (plane->m_Normal).y;
  fVar12 = (plane->m_Normal).z;
  fVar13 = plane->m_Distance;
  (this->fields)._origin.x = (float)uVar8 - fVar4 * fVar1;
  (this->fields)._origin.y = fVar9 - fVar4 * fVar2;
  (this->fields)._origin.z = fVar7 - fVar4 * fVar3;
  uVar14 = startPoint->x;
  uVar15 = startPoint->y;
  fVar13 = fVar10 * (float)uVar14 + fVar11 * (float)uVar15 + fVar12 * startPoint->z + fVar13;
  fVar7 = startPoint->z;
  (this->fields)._startPoint.x = (float)uVar14 - fVar10 * fVar13;
  (this->fields)._startPoint.y = (float)uVar15 - fVar11 * fVar13;
  (this->fields)._startPoint.z = fVar7 - fVar12 * fVar13;
  uStack_16._0_4_ = (this->fields)._origin.x;
  uStack_16._4_4_ = (this->fields)._origin.y;
  fVar7 = (this->fields)._origin.z;
  fVar9 = (this->fields)._startPoint.z - (this->fields)._origin.z;
  (this->fields)._radius = radius;
  uVar17 = (this->fields)._startPoint.x;
  uVar18 = (this->fields)._startPoint.y;
  fVar3 = (float)uVar17 - (float)uStack_16;
  fVar2 = (float)uVar18 - uStack_16._4_4_;
  uStack_19 = CONCAT44(fVar2,fVar3);
  fStack_20 = fVar9;
  fVar1 = (float)FUN_?(&uStack_19,plane,0);
  if (_UNK_? < fVar1) {
    fVar9 = fVar9 / fVar1;
    uStack_19 = CONCAT44(fVar2 / fVar1,fVar3 / fVar1);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_19._0_4_ = (pVVar21->zeroVector).x;
    uStack_19._4_4_ = (pVVar21->zeroVector).y;
    fVar9 = (pVVar21->zeroVector).z;
  }
  fVar1 = (this->fields)._radius;
  (this->fields)._startPoint.x = fVar1 * (float)uStack_19 + (float)uStack_16;
  (this->fields)._startPoint.y = fVar1 * uStack_19._4_4_ + uStack_16._4_4_;
  (this->fields)._startPoint.z = fVar1 * fVar9 + fVar7;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* ArcShape3D() */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D__ctor(ArcShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ArcShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (ArcShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__ArcShape3D__WireRenderDescriptor);
  bVar2 = iRam_? != 0;
  (pAVar1->fields)._wireFlags = 3;
  (this->fields)._wireRenderDesc = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  (this->fields)._areBorderPointsDirty = 1;
  (this->fields)._numBorderPoints = 100;
  return;
}


/* Single get_AbsDegreeAngleFromStart() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_AbsDegreeAngleFromStart
                (ArcShape3D *this,MethodInfo *method)

{
  return (float)((uint)(this->fields)._degreeAngleFromStart & _UNK_?);
}


/* Single get_AreaEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_AreaEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._areaEps;
}


/* ArcEpsilon get_Epsilon() */

ArcEpsilon *
Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_Epsilon
          (ArcEpsilon *__return_storage_ptr__,ArcShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._wireEps;
  fVar2 = (this->fields)._epsilon._extrudeEps;
  __return_storage_ptr__->_areaEps = (this->fields)._epsilon._areaEps;
  __return_storage_ptr__->_extrudeEps = fVar2;
  __return_storage_ptr__->_wireEps = fVar1;
  return __return_storage_ptr__;
}


/* Single get_ExtrudeEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_ExtrudeEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._extrudeEps;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_Normal
                    (Vector3 *__return_storage_ptr__,ArcShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._plane.m_Normal.z;
  fVar2 = (this->fields)._plane.m_Normal.y;
  __return_storage_ptr__->x = (this->fields)._plane.m_Normal.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Single get_WireEps() */

float Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_get_WireEps
                (ArcShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon._wireEps;
}


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_AreaEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._areaEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_DegreeAngleFromStart(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_DegreeAngleFromStart
               (ArcShape3D *this,float value,MethodInfo *method)

{
  fVar1 = (float)FUN_?(value,_UNK_?);
  (this->fields)._degreeAngleFromStart = fVar1;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Epsilon(ArcEpsilon) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Epsilon
               (ArcShape3D *this,ArcEpsilon *value,MethodInfo *method)

{
  fVar1 = value->_extrudeEps;
  fVar2 = value->_wireEps;
  (this->fields)._epsilon._areaEps = value->_areaEps;
  (this->fields)._epsilon._extrudeEps = fVar1;
  (this->fields)._epsilon._wireEps = fVar2;
  return;
}


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_ExtrudeEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._extrudeEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_ForceShortestArc(Boolean) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_ForceShortestArc
               (ArcShape3D *this,bool value,MethodInfo *method)

{
  (this->fields)._forceShortestArc = value;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_NumBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_NumBorderPoints
               (ArcShape3D *this,int32_t value,MethodInfo *method)

{
  (this->fields)._areBorderPointsDirty = 1;
  iVar1 = 3;
  if (2 < value) {
    iVar1 = value;
  }
  (this->fields)._numBorderPoints = iVar1;
  return;
}


/* Void set_Origin(Vector3) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Origin
               (ArcShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  uVar3 = (this->fields)._origin.x;
  uVar4 = (this->fields)._origin.y;
  fVar5 = (this->fields)._startPoint.z - (this->fields)._origin.z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,((float)uVar1 - (float)uVar3) / fVar8
                        );
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  uVar10 = value->x;
  uVar11 = value->y;
  fVar12 = value->z;
  fVar8 = (this->fields)._radius;
  (this->fields)._origin.x = (float)uVar10;
  (this->fields)._origin.y = (float)uVar11;
  (this->fields)._origin.z = fVar12;
  fVar12 = value->z;
  (this->fields)._startPoint.x = fVar8 * (float)uStack_6 + (float)uVar10;
  (this->fields)._startPoint.y = fVar8 * uStack_6._4_4_ + (float)uVar11;
  (this->fields)._startPoint.z = fVar8 * fVar5 + fVar12;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_Radius
               (ArcShape3D *this,float value,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields)._origin.x;
  uStack_1._4_4_ = (this->fields)._origin.y;
  fVar2 = (this->fields)._origin.z;
  fVar3 = (this->fields)._startPoint.z - (this->fields)._origin.z;
  (this->fields)._radius = value;
  uVar4 = (this->fields)._startPoint.x;
  uVar5 = (this->fields)._startPoint.y;
  fVar6 = (float)uVar4 - (float)uStack_1;
  fVar7 = (float)uVar5 - uStack_1._4_4_;
  uStack_8 = CONCAT44(fVar7,fVar6);
  fStack_9 = fVar3;
  fVar10 = (float)FUN_?(&uStack_8);
  if (_UNK_? < fVar10) {
    fVar3 = fVar3 / fVar10;
    uStack_8 = CONCAT44(fVar7 / fVar10,fVar6 / fVar10);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar11->zeroVector).x;
    uStack_8._4_4_ = (pVVar11->zeroVector).y;
    fVar3 = (pVVar11->zeroVector).z;
  }
  fVar10 = (this->fields)._radius;
  (this->fields)._startPoint.x = fVar10 * (float)uStack_8 + (float)uStack_1;
  (this->fields)._startPoint.y = fVar10 * uStack_8._4_4_ + uStack_1._4_4_;
  (this->fields)._startPoint.z = fVar10 * fVar3 + fVar2;
  ArcShape3D_CalculateEndPoint(this,(MethodInfo *)0x0);
  (this->fields)._areBorderPointsDirty = 1;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::ArcShape3D::ArcShape3D_set_WireEps
               (ArcShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._wireEps = (float)((uint)value & _UNK_?);
  return;
}

