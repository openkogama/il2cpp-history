
/* Void AlignCentralAxis(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_AlignCentralAxis
               (CylinderShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
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
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
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


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_ContainsPoint
               (CylinderShape3D *this,Vector3 point,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  pCVar2 = &this->fields;
  uVar3 = (pCVar2->_baseCenter).x;
  uVar4 = (pCVar2->_baseCenter).y;
  cylinderAxisPt0 = pCVar2->_baseCenter;
  pVVar5 = TorusShape3D::TorusShape3D_get_Up
                     ((Vector3 *)&stack0xffffffd0,(TorusShape3D *)this,(MethodInfo *)0x0);
  cylinderHeight = (this->fields)._height;
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  cylinderAxisPt1.y = (float)uVar4 + (float)uVar7 * cylinderHeight;
  cylinderAxisPt1.x = (float)uVar3 + (float)uVar6 * cylinderHeight;
  cylinderAxisPt1.z = fVar1 + pVVar5->z * cylinderHeight;
  bVar8 = CylinderMath::CylinderMath_ContainsPoint_1
                    (point,cylinderAxisPt0,cylinderAxisPt1,(this->fields)._radius,cylinderHeight,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar8;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetAABB
                 (AABB *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  fStack_1 = (this->fields)._radius;
  fStack_1 = fStack_1 + fStack_1;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar5->zeroVector).x;
  uStack_6._4_4_ = (pVVar5->zeroVector).y;
  fStack_7 = (pVVar5->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (this->fields)._height;
  uStack_9._0_4_ = (pVVar5->upVector).x;
  uStack_9._4_4_ = (pVVar5->upVector).y;
  fVar10 = (pVVar5->upVector).z * fVar8;
  fStack_11 = fStack_7 + fVar10 + fVar10;
  fStack_7 = fStack_1;
  AStack_12._size.x = 0.0;
  AStack_12._size.y = 0.0;
  AStack_12._size.z = 0.0;
  AStack_12._center.x = 0.0;
  AStack_12._isValid = 0;
  AStack_12._25_3_ = 0;
  AStack_12._center.y = 0.0;
  AStack_12._center.z = 0.0;
  center.y = uStack_6._4_4_ + (float)uStack_9._4_4_ * fVar8 + (float)uStack_9._4_4_ * fVar8;
  center.x = (float)uStack_6 +
             (float)(undefined4)uStack_9 * fVar8 + (float)(undefined4)uStack_9 * fVar8;
  center.z = fStack_11;
  size.y = fVar8;
  size.x = fStack_1;
  size.z = fStack_1;
  AABB::AABB__ctor(&AStack_12,center,size,(MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = AStack_12._size.x;
  (__return_storage_ptr__->_size).y = AStack_12._size.y;
  (__return_storage_ptr__->_size).z = AStack_12._size.z;
  (__return_storage_ptr__->_center).x = AStack_12._center.x;
  (__return_storage_ptr__->_center).y = AStack_12._center.y;
  (__return_storage_ptr__->_center).z = AStack_12._center.z;
  __return_storage_ptr__->_isValid = AStack_12._isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_12._25_3_;
  uStack_9._0_4_ = (this->fields)._baseCenter.x;
  uStack_9._4_4_ = (this->fields)._baseCenter.y;
  fStack_13 = (this->fields)._baseCenter.z;
  fStack_1 = (this->fields)._rotation.x;
  fStack_2 = (this->fields)._rotation.y;
  fStack_3 = (this->fields)._rotation.z;
  fStack_4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pos.z = fStack_13;
  pos.x = (float)(undefined4)uStack_9;
  pos.y = (float)uStack_9._4_4_;
  q.y = fStack_2;
  q.x = fStack_1;
  q.z = fStack_3;
  q.w = fStack_4;
  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff60,pos,q,
                      TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  AABB::AABB_Transform(__return_storage_ptr__,*pMVar14,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetBottomCapExtentPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetBottomCapExtentPoints
          (CylinderShape3D *this,MethodInfo *method)

{
  pLVar1 = CylinderMath::CylinderMath_CalcExtentPoints
                     ((this->fields)._baseCenter,(this->fields)._radius,(this->fields)._rotation,
                      (MethodInfo *)0x0);
  return pLVar1;
}


/* AABB GetModelAABB() */

AABB * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetModelAABB
                 (AABB *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._radius;
  fVar1 = fVar1 + fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->zeroVector).x;
  uVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (this->fields)._height;
  uVar7 = (pVVar2->upVector).x;
  uVar8 = (pVVar2->upVector).y;
  fVar9 = (pVVar2->upVector).z * fVar6;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  size.y = fVar6;
  size.x = fVar1;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  center.y = (float)uVar4 + (float)uVar8 * fVar6 + (float)uVar8 * fVar6;
  center.x = (float)uVar3 + (float)uVar7 * fVar6 + (float)uVar7 * fVar6;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  center.z = fVar5 + fVar9 + fVar9;
  size.z = fVar1;
  AABB::AABB__ctor(__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetTopCapExtentPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetTopCapExtentPoints
          (CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TorusShape3D::TorusShape3D_get_Up
                     ((Vector3 *)&stack0xffffffd8,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar7 = (this->fields)._height;
  center.y = (float)uVar3 + (float)uVar6 * fVar7;
  center.x = (float)uVar2 + (float)uVar5 * fVar7;
  center.z = fVar1 + pVVar4->z * fVar7;
  pLVar8 = CylinderMath::CylinderMath_CalcExtentPoints
                     (center,(this->fields)._radius,(this->fields)._rotation,(MethodInfo *)0x0);
  return pLVar8;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_Raycast
               (CylinderShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  pCVar2 = &this->fields;
  uVar3 = (pCVar2->_baseCenter).x;
  uVar4 = (pCVar2->_baseCenter).y;
  cylinderAxisPt0 = pCVar2->_baseCenter;
  pVVar5 = TorusShape3D::TorusShape3D_get_Up
                     ((Vector3 *)&stack0xffffffd0,(TorusShape3D *)this,(MethodInfo *)0x0);
  cylinderHeight = (this->fields)._height;
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  cylinderAxisPt1.y = (float)uVar4 + (float)uVar7 * cylinderHeight;
  cylinderAxisPt1.x = (float)uVar3 + (float)uVar6 * cylinderHeight;
  cylinderAxisPt1.z = fVar1 + pVVar5->z * cylinderHeight;
  bVar8 = CylinderMath::CylinderMath_Raycast_1
                    (ray,t,cylinderAxisPt0,cylinderAxisPt1,(this->fields)._radius,cylinderHeight,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar8;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_RenderSolid
               (CylinderShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  dVar5 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar6 = (float)dVar5;
  if (fVar6 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar1 = (pQVar7->identityQuaternion).x;
    fVar2 = (pQVar7->identityQuaternion).y;
    fVar3 = (pQVar7->identityQuaternion).z;
    fVar4 = (pQVar7->identityQuaternion).w;
  }
  else {
    auVar8._4_4_ = fVar2;
    auVar8._0_4_ = fVar1;
    auVar8._8_4_ = fVar3;
    auVar8._12_4_ = fVar4;
    auVar9._4_4_ = fVar6;
    auVar9._0_4_ = fVar6;
    auVar9._8_4_ = fVar6;
    auVar9._12_4_ = fVar6;
    auVar9 = divps(auVar8,auVar9);
    fVar1 = auVar9._0_4_;
    fVar2 = auVar9._4_4_;
    fVar3 = auVar9._8_4_;
    fVar4 = auVar9._12_4_;
  }
  (this->fields)._rotation.x = fVar1;
  (this->fields)._rotation.y = fVar2;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar4;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitCylinder(this_00,(MethodInfo *)0x0);
    uVar10 = (this->fields)._radius;
    uVar11 = (this->fields)._height;
    s.y = (float)uVar11;
    s.x = (float)uVar10;
    s.z = (this->fields)._radius;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&fStack_13,(this->fields)._baseCenter,(this->fields)._rotation
                         ,s,(MethodInfo *)0x0);
    uVar14 = pMVar12->m00;
    uVar15 = pMVar12->m10;
    uVar16 = pMVar12->m20;
    uVar17 = pMVar12->m30;
    matrix.m30 = (float)uVar17;
    matrix.m20 = (float)uVar16;
    matrix.m10 = (float)uVar15;
    matrix.m00 = (float)uVar14;
    fStack_13 = pMVar12->m01;
    fStack_18 = pMVar12->m11;
    fStack_19 = pMVar12->m21;
    fStack_20 = pMVar12->m31;
    fStack_21 = pMVar12->m02;
    fStack_22 = pMVar12->m12;
    fStack_23 = pMVar12->m22;
    fStack_24 = pMVar12->m32;
    fStack_25 = pMVar12->m03;
    fStack_26 = pMVar12->m13;
    fStack_27 = pMVar12->m23;
    fStack_28 = pMVar12->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Graphics);
    }
    matrix.m01 = fStack_13;
    matrix.m11 = fStack_18;
    matrix.m21 = fStack_19;
    matrix.m31 = fStack_20;
    matrix.m02 = fStack_21;
    matrix.m12 = fStack_22;
    matrix.m22 = fStack_23;
    matrix.m32 = fStack_24;
    matrix.m03 = fStack_25;
    matrix.m13 = fStack_26;
    matrix.m23 = fStack_27;
    matrix.m33 = fStack_28;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_RenderWire
               (CylinderShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._radius;
  fStack_2 = (this->fields)._rotation.x;
  puStack_3 = (undefined *)(this->fields)._rotation.y;
  fVar4 = (this->fields)._rotation.z;
  fVar5 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffff88,90.0,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  fVar7 = pQVar6->y;
  fVar8 = pQVar6->z;
  fVar9 = pQVar6->w;
  fVar10 = (fVar9 * fStack_2 + pQVar6->x * fVar5 + fVar8 * (float)puStack_3) - fVar7 * fVar4;
  fVar11 = ((float)puStack_3 * fVar9 + fVar7 * fVar5 + fVar4 * pQVar6->x) - fVar8 * fStack_2;
  fVar12 = (fVar4 * fVar9 + fVar8 * fVar5 + fVar7 * fStack_2) - (float)puStack_3 * pQVar6->x;
  fVar4 = ((fVar9 * fVar5 - fStack_2 * pQVar6->x) - fVar7 * (float)puStack_3) - fVar4 * fVar8;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar13 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pMVar13 != (MeshPool *)0x0) {
    pMVar14 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar13,(MethodInfo *)0x0);
    q.y = fVar11;
    q.x = fVar10;
    q.z = fVar12;
    q.w = fVar4;
    s.y = fVar1;
    s.x = fVar1;
    s.z = 1.0;
    pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff48,(this->fields)._baseCenter,q,s,
                         (MethodInfo *)0x0);
    fStack_2 = pMVar15->m00;
    puStack_3 = (undefined *)pMVar15->m10;
    fVar16 = pMVar15->m20;
    fVar17 = pMVar15->m30;
    pLVar18 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___Class *)pMVar15->m01;
    pSVar19 = (String *)pMVar15->m11;
    pVVar20 = (VisualTreeAsset_UsingEntry__Array *)pMVar15->m21;
    fVar5 = pMVar15->m31;
    fVar7 = pMVar15->m02;
    fVar8 = pMVar15->m12;
    fVar9 = pMVar15->m22;
    fVar21 = pMVar15->m32;
    fVar22 = pMVar15->m03;
    puVar23 = (undefined *)pMVar15->m13;
    pGVar24 = (Graphics__Class *)pMVar15->m23;
    fVar25 = pMVar15->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      puVar23 = &UNK_?;
      pGVar24 = TypeInfo__UnityEngine__Graphics;
      func_?();
    }
    matrix.m10 = (float)puStack_3;
    matrix.m00 = fStack_2;
    matrix.m20 = fVar16;
    matrix.m30 = fVar17;
    matrix.m01 = (float)pLVar18;
    matrix.m11 = (float)pSVar19;
    matrix.m21 = (float)pVVar20;
    matrix.m31 = fVar5;
    matrix.m02 = fVar7;
    matrix.m12 = fVar8;
    matrix.m22 = fVar9;
    matrix.m32 = fVar21;
    matrix.m03 = fVar22;
    matrix.m13 = (float)puVar23;
    matrix.m23 = (float)pGVar24;
    matrix.m33 = fVar25;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (pMVar14,matrix,(MethodInfo *)0x0);
    pMVar13 = (MeshPool *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    if (pMVar13 != (MeshPool *)0x0) {
      pMVar14 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar13,(MethodInfo *)0x0);
      pSVar19 = (String *)(this->fields)._baseCenter.x;
      pVVar20 = (VisualTreeAsset_UsingEntry__Array *)(this->fields)._baseCenter.y;
      pVVar26 = TorusShape3D::TorusShape3D_get_Up
                          ((Vector3 *)&fStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
      uVar27 = pVVar26->x;
      uVar28 = pVVar26->y;
      fVar5 = (this->fields)._height;
      pos.y = (float)pVVar20 + (float)uVar28 * fVar5;
      pos.x = (float)pSVar19 + (float)uVar27 * fVar5;
      pos.z = 1.0;
      q_00.y = fVar11;
      q_00.x = fVar10;
      q_00.z = fVar12;
      q_00.w = fVar4;
      s_00.y = fVar1;
      s_00.x = fVar1;
      s_00.z = 1.0;
      pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff48,pos,q_00,s_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                (pMVar14,*pMVar15,(MethodInfo *)0x0);
      pLVar29 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                CylinderMath::CylinderMath_CalcExtentPoints
                          ((this->fields)._baseCenter,(this->fields)._radius,
                           (this->fields)._rotation,(MethodInfo *)0x0);
      fVar4 = (this->fields)._baseCenter.x;
      fVar5 = (this->fields)._baseCenter.y;
      fVar7 = (this->fields)._baseCenter.z;
      pVVar26 = TorusShape3D::TorusShape3D_get_Up
                          ((Vector3 *)&fStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
      uVar30 = pVVar26->x;
      uVar31 = pVVar26->y;
      fVar1 = (this->fields)._height;
      center.y = fVar5 + (float)uVar31 * fVar1;
      center.x = fVar4 + (float)uVar30 * fVar1;
      center.z = fVar7 + pVVar26->z * fVar1;
      this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                CylinderMath::CylinderMath_CalcExtentPoints
                          (center,(this->fields)._radius,(this->fields)._rotation,(MethodInfo *)0x0)
      ;
      pairPoints = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pairPoints,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      if (pLVar29 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
        VisualTreeAsset+UsingEntry]::
        List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                  ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,pLVar29,0,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                  );
        if (pairPoints != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
          func_?();
          if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,this_00,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            pLVar29 = pairPoints;
            func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,pLVar29,1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            func_?();
            pLVar29 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)&stack0xffffffe0;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)pLVar29,this_00,1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,pLVar29,2,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,this_00,2,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            pMStack32 =
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,pLVar29,3,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            pMStack33 =
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            pMStack32 = (MethodInfo *)pairPoints;
            func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                      ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,this_00,3,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                      );
            pMStack33 = (MethodInfo *)pairPoints;
            func_?();
            GLRenderer::GLRenderer_DrawLinePairs3D
                      ((List_1_UnityEngine_Vector3_ *)pairPoints,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* CylinderShape3D() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D__ctor
               (CylinderShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._baseCenter.x = (pVVar1->zeroVector).x;
  (this->fields)._baseCenter.y = fVar2;
  (this->fields)._baseCenter.z = fVar3;
  (this->fields)._radius = 1.0;
  (this->fields)._height = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar4->identityQuaternion).x;
  (this->fields)._rotation.y = fVar3;
  (this->fields)._rotation.z = fVar2;
  (this->fields)._rotation.w = fVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_Center
                    (Vector3 *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TorusShape3D::TorusShape3D_get_Up(&VStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = (this->fields)._height;
  fVar8 = (float)uVar6 * fVar7 * _UNK_?;
  fVar9 = pVVar3->z * fVar7 * _UNK_?;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar7 * _UNK_?;
  __return_storage_ptr__->y = uStack_2._4_4_ + fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar9;
  return __return_storage_ptr__;
}


/* CylinderEpsilon get_Epsilon() */

CylinderEpsilon
Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_Epsilon
          (CylinderShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon;
}


/* Vector3 get_TopCenter() */

Vector3 * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_TopCenter
                    (Vector3 *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._baseCenter.z;
  uStack_2._0_4_ = (this->fields)._baseCenter.x;
  uStack_2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TorusShape3D::TorusShape3D_get_Up(&VStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._height;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ + (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_Center
               (CylinderShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = (this->fields)._height;
  fVar6 = (float)uVar4 * fVar5 * _UNK_?;
  fVar7 = pVVar1->z * fVar5 * _UNK_?;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar5 * _UNK_?;
  (this->fields)._baseCenter.y = value.y - fVar6;
  (this->fields)._baseCenter.z = value.z - fVar7;
  return;
}


/* Void set_Epsilon(CylinderEpsilon) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_Epsilon
               (CylinderShape3D *this,CylinderEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._hrzEps = value._hrzEps;
  (this->fields)._epsilon._vertEps = value._vertEps;
  return;
}


/* Void set_TopCenter(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_TopCenter
               (CylinderShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._height;
  (this->fields)._baseCenter.x = value.x - (float)uVar3 * fVar6;
  (this->fields)._baseCenter.y = value.y - (float)uVar4 * fVar6;
  (this->fields)._baseCenter.z = value.z - fVar5 * fVar6;
  return;
}


/* Void set_VertEps(Single) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_VertEps
               (CylinderShape3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

