
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_ContainsPoint
               (PyramidShape3D *this,Vector3 point,MethodInfo *method)

{
  bVar1 = PyramidMath::PyramidMath_ContainsPoint
                    (point,(this->fields)._baseCenter,(this->fields)._baseWidth,
                     (this->fields)._baseDepth,(this->fields)._height,(this->fields)._rotation,
                     (PyramidEpsilon)(this->fields)._epsilon._ptContainEps,(MethodInfo *)0x0);
  return bVar1;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_GetAABB
                 (AABB *__return_storage_ptr__,PyramidShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  pointCloud = PyramidMath::PyramidMath_CalcBaseCornerPoints
                         ((this->fields)._baseCenter,(this->fields)._baseWidth,
                          (this->fields)._baseDepth,(this->fields)._rotation,(MethodInfo *)0x0);
  TriangPrismShape3D::TriangPrismShape3D_get_Up
            (&VStack_1,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  if (pointCloud != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    (__return_storage_ptr__->_size).z = 0.0;
    (__return_storage_ptr__->_center).x = 0.0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
    VStack_1.z = (float)&UNK_?;
    AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                       (MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AABB *)(*pcVar2)();
  return pAVar3;
}


/* List`1[UnityEngine.Vector3] GetBaseCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_GetBaseCornerPoints
          (PyramidShape3D *this,MethodInfo *method)

{
  pLVar1 = PyramidMath::PyramidMath_CalcBaseCornerPoints
                     ((this->fields)._baseCenter,(this->fields)._baseWidth,(this->fields)._baseDepth
                      ,(this->fields)._rotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* Void PointTipAlongAxis(Vector3) */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_PointTipAlongAxis
               (PyramidShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                      (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  VStack_2.x = (this->fields)._rotation.x;
  VStack_2.y = (this->fields)._rotation.y;
  VStack_2.z = (this->fields)._rotation.z;
  fStack_5 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.y;
  rotation.x = VStack_2.x;
  rotation.z = VStack_2.z;
  rotation.w = fStack_5;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&VStack_2,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar6 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar7 = (this->fields)._rotation.x;
  fVar8 = (this->fields)._rotation.y;
  fVar9 = (this->fields)._rotation.z;
  fVar10 = (this->fields)._rotation.w;
  fVar11 = pQVar6->x;
  fVar12 = pQVar6->y;
  fVar13 = pQVar6->z;
  fVar14 = pQVar6->w;
  fVar15 = pQVar6->x;
  fVar4 = pQVar6->x;
  fVar16 = (this->fields)._rotation.x;
  fVar17 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar14 * fVar7 + fVar11 * fVar10 + fVar9 * fVar12) - fVar8 * fVar13;
  (this->fields)._rotation.y = (fVar8 * fVar14 + fVar10 * fVar12 + fVar13 * fVar7) - fVar9 * fVar15;
  (this->fields)._rotation.z = (fVar9 * fVar14 + fVar13 * fVar10 + fVar8 * fVar4) - fVar16 * fVar12;
  (this->fields)._rotation.w = ((fVar14 * fVar10 - fVar17 * fVar11) - fVar8 * fVar12) - fVar13 * fVar9;
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_Raycast
               (PyramidShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = PyramidMath::PyramidMath_Raycast
                    (ray,t,(this->fields)._baseCenter,(this->fields)._baseWidth,
                     (this->fields)._baseDepth,(this->fields)._height,(this->fields)._rotation,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_RenderSolid
               (PyramidShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitPyramid(this_00,(MethodInfo *)0x0);
    s.y = (this->fields)._height;
    s.x = (this->fields)._baseWidth;
    s.z = (this->fields)._baseDepth;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._baseCenter,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar1;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_RenderWire
               (PyramidShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWirePyramid(this_00,(MethodInfo *)0x0);
    s.y = (this->fields)._height;
    s.x = (this->fields)._baseWidth;
    s.z = (this->fields)._baseDepth;
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,(this->fields)._baseCenter,
                        (this->fields)._rotation,s,(MethodInfo *)0x0);
    matrix = *pMVar1;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 get_Tip() */

Vector3 * Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_get_Tip
                    (Vector3 *__return_storage_ptr__,PyramidShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._height;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ + (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* Void set_Tip(Vector3) */

void Assembly-CSharp.dll::RTG::PyramidShape3D::PyramidShape3D_set_Tip
               (PyramidShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._height;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar6;
  (this->fields)._baseCenter.y = value.y - (float)uVar4 * fVar6;
  (this->fields)._baseCenter.z = value.z - fVar5 * fVar6;
  return;
}

