
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignNormal
               (CircleShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                      (aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Right
                      (aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar5 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar6 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar5->x;
  fVar11 = pQVar5->y;
  fVar12 = pQVar5->z;
  fVar13 = pQVar5->w;
  fVar14 = pQVar5->x;
  fVar4 = pQVar5->x;
  fVar15 = (this->fields)._rotation.x;
  fVar16 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar13 * fVar6 + fVar10 * fVar9 + fVar8 * fVar11) - fVar7 * fVar12;
  (this->fields)._rotation.y = (fVar7 * fVar13 + fVar9 * fVar11 + fVar12 * fVar6) - fVar8 * fVar14;
  (this->fields)._rotation.z = (fVar8 * fVar13 + fVar12 * fVar9 + fVar7 * fVar4) - fVar15 * fVar11;
  (this->fields)._rotation.w = ((fVar13 * fVar9 - fVar16 * fVar10) - fVar7 * fVar11) - fVar12 * fVar8;
  return;
}


/* Void AlignRight(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignRight
               (CircleShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Right
                      (aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar5 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar6 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar5->x;
  fVar11 = pQVar5->y;
  fVar12 = pQVar5->z;
  fVar13 = pQVar5->w;
  fVar14 = pQVar5->x;
  fVar4 = pQVar5->x;
  fVar15 = (this->fields)._rotation.x;
  fVar16 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar13 * fVar6 + fVar10 * fVar9 + fVar8 * fVar11) - fVar7 * fVar12;
  (this->fields)._rotation.y = (fVar7 * fVar13 + fVar9 * fVar11 + fVar12 * fVar6) - fVar8 * fVar14;
  (this->fields)._rotation.z = (fVar8 * fVar13 + fVar12 * fVar9 + fVar7 * fVar4) - fVar15 * fVar11;
  (this->fields)._rotation.w = ((fVar13 * fVar9 - fVar16 * fVar10) - fVar7 * fVar11) - fVar12 * fVar8;
  return;
}


/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_AlignUp
               (CircleShape3D *this,Vector3 axis,MethodInfo *method)

{
  pVVar1 = SphereShape3D::SphereShape3D_get_Up(aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                      (aVStack_2,(SphereShape3D *)this,(MethodInfo *)0x0);
  from.z = fVar4;
  from.x = (float)(undefined4)uStack_3;
  from.y = (float)uStack_3._4_4_;
  pQVar5 = QuaternionEx::QuaternionEx_FromToRotation3D
                      ((Quaternion *)&stack0xffffffb0,from,axis,*pVVar1,(MethodInfo *)0x0);
  fVar6 = (this->fields)._rotation.x;
  fVar7 = (this->fields)._rotation.y;
  fVar8 = (this->fields)._rotation.z;
  fVar9 = (this->fields)._rotation.w;
  fVar10 = pQVar5->x;
  fVar11 = pQVar5->y;
  fVar12 = pQVar5->z;
  fVar13 = pQVar5->w;
  fVar14 = pQVar5->x;
  fVar4 = pQVar5->x;
  fVar15 = (this->fields)._rotation.x;
  fVar16 = (this->fields)._rotation.x;
  (this->fields)._rotation.x = (fVar13 * fVar6 + fVar10 * fVar9 + fVar8 * fVar11) - fVar7 * fVar12;
  (this->fields)._rotation.y = (fVar7 * fVar13 + fVar9 * fVar11 + fVar12 * fVar6) - fVar8 * fVar14;
  (this->fields)._rotation.z = (fVar8 * fVar13 + fVar12 * fVar9 + fVar7 * fVar4) - fVar15 * fVar11;
  (this->fields)._rotation.w = ((fVar13 * fVar9 - fVar16 * fVar10) - fVar7 * fVar11) - fVar12 * fVar8;
  return;
}


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_ContainsPoint
               (CircleShape3D *this,Vector3 point,bool checkOnPlane,MethodInfo *method)

{
  circleCenter = (this->fields)._center;
  circleRadius = (this->fields)._radius;
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                     ((Vector3 *)&stack0xffffffe8,(SphereShape3D *)this,(MethodInfo *)0x0);
  bVar2 = CircleMath::CircleMath_Contains3DPoint
                    (point,checkOnPlane,circleCenter,circleRadius,*pVVar1,(this->fields)._epsilon,
                     (MethodInfo *)0x0);
  return bVar2;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_GetAABB
                 (AABB *__return_storage_ptr__,CircleShape3D *this,MethodInfo *method)

{
  pointCloud = CircleMath::CircleMath_Calc3DExtentPoints
                         ((this->fields)._center,(this->fields)._radius,(this->fields)._rotation,
                          (MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
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
  pLVar1 = CircleMath::CircleMath_Calc3DExtentPoints
                     ((this->fields)._center,(this->fields)._radius,(this->fields)._rotation,
                      (MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_Raycast
               (CircleShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  circleCenter_00 = (this->fields)._center;
  circleCenter = (this->fields)._center;
  circleRadius = (this->fields)._radius;
  if ((this->fields)._raycastMode != 0) {
    pVVar1 = SphereShape3D::SphereShape3D_get_Look
                       ((Vector3 *)&stack0xffffffe8,(SphereShape3D *)this,(MethodInfo *)0x0);
    bVar2 = CircleMath::CircleMath_RaycastWire
                      (ray,t,circleCenter,circleRadius,*pVVar1,(this->fields)._epsilon,
                       (MethodInfo *)0x0);
    return bVar2;
  }
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                     ((Vector3 *)&stack0xffffffe8,(SphereShape3D *)this,(MethodInfo *)0x0);
  bVar2 = CircleMath::CircleMath_Raycast
                    (ray,t,circleCenter_00,circleRadius,*pVVar1,(this->fields)._epsilon,
                     (MethodInfo *)0x0);
  return bVar2;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RaycastWire
               (CircleShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  circleCenter = (this->fields)._center;
  circleRadius = (this->fields)._radius;
  pVVar1 = SphereShape3D::SphereShape3D_get_Look
                     ((Vector3 *)&stack0xffffffe8,(SphereShape3D *)this,(MethodInfo *)0x0);
  bVar2 = CircleMath::CircleMath_RaycastWire
                    (ray,t,circleCenter,circleRadius,*pVVar1,(this->fields)._epsilon,
                     (MethodInfo *)0x0);
  return bVar2;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RenderSolid
               (CircleShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitCircleXY(this_00,(MethodInfo *)0x0);
    uStack_1._0_4_ = (this->fields)._center.x;
    uStack_1._4_4_ = (this->fields)._center.y;
    fVar2 = (this->fields)._center.z;
    q = (this->fields)._rotation;
    pVVar3 = Vector3Ex::Vector3Ex_FromValue(&VStack_4,(this->fields)._radius,(MethodInfo *)0x0);
    pos.z = fVar2;
    pos.x = (float)uStack_1;
    pos.y = uStack_1._4_4_;
    pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff7c,pos,q,*pVVar3,(MethodInfo *)0x0);
    uVar6 = pMVar5->m00;
    uVar7 = pMVar5->m10;
    uVar8 = pMVar5->m20;
    uVar9 = pMVar5->m30;
    uVar10 = pMVar5->m01;
    matrix.m01 = (float)uVar10;
    matrix.m30 = (float)uVar9;
    matrix.m20 = (float)uVar8;
    matrix.m10 = (float)uVar7;
    matrix.m00 = (float)uVar6;
    VStack_4.x = pMVar5->m11;
    VStack_4.y = pMVar5->m21;
    VStack_4.z = pMVar5->m31;
    fStack_11 = pMVar5->m02;
    fStack_12 = pMVar5->m12;
    uStack_1._0_4_ = pMVar5->m22;
    uStack_1._4_4_ = pMVar5->m32;
    fVar2 = pMVar5->m03;
    fVar13 = pMVar5->m13;
    fVar14 = pMVar5->m23;
    fVar15 = pMVar5->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    matrix.m11 = VStack_4.x;
    matrix.m21 = VStack_4.y;
    matrix.m31 = VStack_4.z;
    matrix.m02 = fStack_11;
    matrix.m12 = fStack_12;
    matrix.m22 = (float)uStack_1;
    matrix.m32 = uStack_1._4_4_;
    matrix.m03 = fVar2;
    matrix.m13 = fVar13;
    matrix.m23 = fVar14;
    matrix.m33 = fVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_RenderWire
               (CircleShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
    uStack_1._0_4_ = (this->fields)._center.x;
    uStack_1._4_4_ = (this->fields)._center.y;
    fVar2 = (this->fields)._center.z;
    q = (this->fields)._rotation;
    pVVar3 = Vector3Ex::Vector3Ex_FromValue(&VStack_4,(this->fields)._radius,(MethodInfo *)0x0);
    pos.z = fVar2;
    pos.x = (float)uStack_1;
    pos.y = uStack_1._4_4_;
    pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff7c,pos,q,*pVVar3,(MethodInfo *)0x0);
    uVar6 = pMVar5->m00;
    uVar7 = pMVar5->m10;
    uVar8 = pMVar5->m20;
    uVar9 = pMVar5->m30;
    uVar10 = pMVar5->m01;
    matrix.m01 = (float)uVar10;
    matrix.m30 = (float)uVar9;
    matrix.m20 = (float)uVar8;
    matrix.m10 = (float)uVar7;
    matrix.m00 = (float)uVar6;
    VStack_4.x = pMVar5->m11;
    VStack_4.y = pMVar5->m21;
    VStack_4.z = pMVar5->m31;
    fStack_11 = pMVar5->m02;
    fStack_12 = pMVar5->m12;
    uStack_1._0_4_ = pMVar5->m22;
    uStack_1._4_4_ = pMVar5->m32;
    fVar2 = pMVar5->m03;
    fVar13 = pMVar5->m13;
    fVar14 = pMVar5->m23;
    fVar15 = pMVar5->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    matrix.m11 = VStack_4.x;
    matrix.m21 = VStack_4.y;
    matrix.m31 = VStack_4.z;
    matrix.m02 = fStack_11;
    matrix.m12 = fStack_12;
    matrix.m22 = (float)uStack_1;
    matrix.m32 = uStack_1._4_4_;
    matrix.m03 = fVar2;
    matrix.m13 = fVar13;
    matrix.m23 = fVar14;
    matrix.m33 = fVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* CircleShape3D() */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D__ctor
               (CircleShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._center.x = (pVVar1->zeroVector).x;
  (this->fields)._center.y = fVar2;
  (this->fields)._center.z = fVar3;
  (this->fields)._radius = 1.0;
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


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::CircleShape3D::CircleShape3D_set_ExtrudeEps
               (CircleShape3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

