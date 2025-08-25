
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_GetAABB
                 (AABB *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  pAVar1 = TorusMath::TorusMath_CalcCylAABB
                     (&AStack_2,(this->fields)._center,(this->fields)._coreRadius,
                      (this->fields)._hrzRadius,(this->fields)._vertRadius,(this->fields)._rotation,
                      (MethodInfo *)0x0);
  fVar3 = (pAVar1->_size).y;
  fVar4 = (pAVar1->_size).z;
  fVar5 = (pAVar1->_center).x;
  bVar6 = pAVar1->_isValid;
  uVar7 = *(undefined3 *)&pAVar1->field_0x19;
  (__return_storage_ptr__->_size).x = (pAVar1->_size).x;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = fVar5;
  fVar3 = (pAVar1->_center).z;
  (__return_storage_ptr__->_center).y = (pAVar1->_center).y;
  (__return_storage_ptr__->_center).z = fVar3;
  __return_storage_ptr__->_isValid = bVar6;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar7;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetHrzExtents() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_GetHrzExtents
          (CylTorusShape3D *this,MethodInfo *method)

{
  pLVar1 = TorusMath::TorusMath_Calc3DHrzExtentPoints
                     ((this->fields)._center,(this->fields)._coreRadius,(this->fields)._hrzRadius,
                      (this->fields)._rotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_Raycast
               (CylTorusShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = TorusMath::TorusMath_RaycastCylindrical
                    (ray,t,(this->fields)._center,(this->fields)._coreRadius,
                     (this->fields)._hrzRadius,(this->fields)._vertRadius,(this->fields)._rotation,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_RenderSolid
               (CylTorusShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitCylindricalTorus(this_00,(MethodInfo *)0x0);
    pos = (this->fields)._center;
    q = (this->fields)._rotation;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xffffff7c,pos,q,
                        TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_RenderWire
               (CylTorusShape3D *this,MethodInfo *method)

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
    fVar1 = (this->fields)._hrzRadius + (this->fields)._coreRadius;
    fVar2 = (this->fields)._hrzRadius;
    fVar3 = (this->fields)._coreRadius;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = (float)_UNK_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff80,euler,(MethodInfo *)0x0);
    fVar5 = pQVar4->x;
    fVar6 = pQVar4->y;
    fVar7 = pQVar4->z;
    fVar8 = pQVar4->w;
    fVar9 = (this->fields)._center.z;
    fVar10 = (this->fields)._center.x;
    fVar11 = (this->fields)._center.y;
    pVVar12 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                        ((Vector3 *)&stack0xffffffa0,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    fVar13 = (this->fields)._vertRadius;
    uVar14 = pVVar12->x;
    uVar15 = pVVar12->y;
    fVar16 = (this->fields)._rotation.x;
    fVar17 = (this->fields)._rotation.y;
    fVar18 = (this->fields)._rotation.z;
    fVar19 = (this->fields)._rotation.w;
    pos_00.y = fVar11 - fVar13 * (float)uVar15;
    pos_00.x = fVar10 - fVar13 * (float)uVar14;
    pos_00.z = fVar9 - fVar13 * pVVar12->z;
    q_00.y = (fVar8 * fVar17 + fVar6 * fVar19 + fVar5 * fVar18) - fVar7 * fVar16;
    q_00.x = (fVar8 * fVar16 + fVar5 * fVar19 + fVar7 * fVar17) - fVar6 * fVar18;
    q_00.z = (fVar8 * fVar18 + fVar7 * fVar19 + fVar6 * fVar16) - fVar5 * fVar17;
    q_00.w = ((fVar8 * fVar19 - fVar5 * fVar16) - fVar6 * fVar17) - fVar7 * fVar18;
    s_00.y = fVar2 + fVar3;
    s_00.x = fVar1;
    s_00.z = 1.0;
    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffee0,pos_00,q_00,s_00,(MethodInfo *)0x0);
    fVar21 = pMVar20->m00;
    fVar22 = pMVar20->m10;
    fVar23 = pMVar20->m20;
    fVar24 = pMVar20->m30;
    fVar2 = pMVar20->m01;
    fVar3 = pMVar20->m11;
    fVar13 = pMVar20->m21;
    fVar10 = pMVar20->m31;
    fVar11 = pMVar20->m02;
    fVar9 = pMVar20->m12;
    fVar16 = pMVar20->m22;
    fVar17 = pMVar20->m32;
    fVar18 = pMVar20->m03;
    fVar19 = pMVar20->m13;
    fVar1 = pMVar20->m23;
    fVar25 = pMVar20->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    matrix.m10 = fVar22;
    matrix.m00 = fVar21;
    matrix.m20 = fVar23;
    matrix.m30 = fVar24;
    matrix.m01 = fVar2;
    matrix.m11 = fVar3;
    matrix.m21 = fVar13;
    matrix.m31 = fVar10;
    matrix.m02 = fVar11;
    matrix.m12 = fVar9;
    matrix.m22 = fVar16;
    matrix.m32 = fVar17;
    matrix.m03 = fVar18;
    matrix.m13 = fVar19;
    matrix.m23 = fVar1;
    matrix.m33 = fVar25;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    fVar3 = (this->fields)._center.z;
    uVar26 = (this->fields)._center.x;
    uVar27 = (this->fields)._center.y;
    pVVar12 = (Vector3 *)&stack0xffffffa0;
    pCVar28 = this;
    pVVar29 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                        (pVVar12,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    fVar2 = (this->fields)._vertRadius;
    uVar30 = pVVar29->x;
    uVar31 = pVVar29->y;
    fVar13 = (this->fields)._rotation.x;
    fVar10 = (this->fields)._rotation.y;
    fVar11 = (this->fields)._rotation.z;
    fVar9 = (this->fields)._rotation.w;
    fVar1 = (fVar8 * fVar13 + fVar5 * fVar9 + fVar7 * fVar10) - fVar6 * fVar11;
    pMVar20 = (Matrix4x4 *)&stack0xfffffee0;
    pos_01.y = (float)uVar27 + fVar2 * (float)uVar31;
    pos_01.x = (float)uVar26 + fVar2 * (float)uVar30;
    pos_01.z = fVar3 + fVar2 * pVVar29->z;
    q_01.y = (fVar8 * fVar10 + fVar6 * fVar9 + fVar5 * fVar11) - fVar7 * fVar13;
    q_01.x = fVar1;
    q_01.z = (fVar8 * fVar11 + fVar7 * fVar9 + fVar6 * fVar13) - fVar5 * fVar10;
    q_01.w = ((fVar8 * fVar9 - fVar5 * fVar13) - fVar6 * fVar10) - fVar7 * fVar11;
    s_01.y = (float)pCVar28;
    s_01.x = (float)pVVar12;
    s_01.z = 1.0;
    pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        (pMVar20,pos_01,q_01,s_01,(MethodInfo *)0x0);
    fVar16 = pMVar32->m10;
    fVar17 = pMVar32->m11;
    mesh_00 = (Mesh *)pMVar32->m03;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar32,(MethodInfo *)0x0);
    fVar19 = (this->fields)._coreRadius - (this->fields)._hrzRadius;
    fVar3 = (this->fields)._center.z;
    uVar33 = (this->fields)._center.x;
    uVar34 = (this->fields)._center.y;
    pVVar12 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                        ((Vector3 *)&stack0xffffffa0,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    fVar2 = (this->fields)._vertRadius;
    uVar35 = pVVar12->x;
    uVar36 = pVVar12->y;
    fVar13 = (this->fields)._rotation.x;
    fVar10 = (this->fields)._rotation.y;
    fVar11 = (this->fields)._rotation.z;
    fVar9 = (this->fields)._rotation.w;
    pos_02.y = (float)uVar34 - fVar2 * (float)uVar36;
    pos_02.x = (float)uVar33 - fVar2 * (float)uVar35;
    pos_02.z = fVar3 - fVar2 * pVVar12->z;
    q_02.y = (fVar17 * fVar10 + fVar16 * fVar9 + (float)pMVar20 * fVar11) - fVar1 * fVar13;
    q_02.x = (fVar17 * fVar13 + (float)pMVar20 * fVar9 + fVar1 * fVar10) - fVar16 * fVar11;
    q_02.z = (fVar17 * fVar11 + fVar1 * fVar9 + fVar16 * fVar13) - (float)pMVar20 * fVar10;
    q_02.w = ((fVar17 * fVar9 - (float)pMVar20 * fVar13) - fVar16 * fVar10) - fVar1 * fVar11;
    s_02.y = fVar19;
    s_02.x = fVar19;
    s_02.z = 1.0;
    fVar18 = fVar19;
    pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffee0,pos_02,q_02,s_02,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar32,(MethodInfo *)0x0);
    fVar3 = (this->fields)._center.z;
    uVar37 = (this->fields)._center.x;
    uVar38 = (this->fields)._center.y;
    pVVar12 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                        ((Vector3 *)&stack0xffffffa0,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    uVar39 = pVVar12->x;
    uVar40 = pVVar12->y;
    fVar2 = (this->fields)._vertRadius;
    fVar13 = (this->fields)._rotation.x;
    fVar10 = (this->fields)._rotation.y;
    fVar11 = (this->fields)._rotation.z;
    fVar9 = (this->fields)._rotation.w;
    pos.y = fVar2 * (float)uVar40 + (float)uVar38;
    pos.x = fVar2 * (float)uVar39 + (float)uVar37;
    pos.z = fVar2 * pVVar12->z + fVar3;
    q.y = (fVar17 * fVar10 + fVar16 * fVar9 + (float)pMVar20 * fVar11) - fVar1 * fVar13;
    q.x = (fVar17 * fVar13 + (float)pMVar20 * fVar9 + fVar1 * fVar10) - fVar16 * fVar11;
    q.z = (fVar17 * fVar11 + fVar1 * fVar9 + fVar16 * fVar13) - (float)pMVar20 * fVar10;
    q.w = ((fVar17 * fVar9 - (float)pMVar20 * fVar13) - fVar16 * fVar10) - fVar1 * fVar11;
    s.y = fVar18;
    s.x = fVar19;
    s.z = 1.0;
    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffee0,pos,q,s,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar20,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* CylTorusShape3D() */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D__ctor
               (CylTorusShape3D *this,MethodInfo *method)

{
  (this->fields)._coreRadius = 1.0;
  (this->fields)._hrzRadius = 1.0;
  (this->fields)._vertRadius = 1.0;
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


/* Vector3 get_Bottom() */

Vector3 * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_get_Bottom
                    (Vector3 *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._center.z;
  uStack_2._0_4_ = (this->fields)._center.x;
  uStack_2._4_4_ = (this->fields)._center.y;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._vertRadius;
  __return_storage_ptr__->x = (float)uStack_2 - (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ - (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 - fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* TorusEpsilon get_Epsilon() */

TorusEpsilon *
Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_get_Epsilon
          (TorusEpsilon *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._cylHrzRadius;
  fVar2 = (this->fields)._epsilon._cylVertRadius;
  __return_storage_ptr__->_tubeRadiusEps = (this->fields)._epsilon._tubeRadiusEps;
  __return_storage_ptr__->_cylHrzRadius = fVar1;
  __return_storage_ptr__->_cylVertRadius = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 get_Top() */

Vector3 * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_get_Top
                    (Vector3 *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._center.z;
  uStack_2._0_4_ = (this->fields)._center.x;
  uStack_2._4_4_ = (this->fields)._center.y;
  pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_4,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fVar7 = pVVar3->z;
  fVar8 = (this->fields)._vertRadius;
  __return_storage_ptr__->x = (float)uStack_2 + (float)uVar5 * fVar8;
  __return_storage_ptr__->y = uStack_2._4_4_ + (float)uVar6 * fVar8;
  __return_storage_ptr__->z = fStack_1 + fVar7 * fVar8;
  return __return_storage_ptr__;
}


/* Void set_Bottom(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Bottom
               (CylTorusShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._vertRadius;
  (this->fields)._center.x = value.x + (float)uVar3 * fVar6;
  (this->fields)._center.y = value.y + (float)uVar4 * fVar6;
  (this->fields)._center.z = value.z + fVar5 * fVar6;
  return;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Center
               (CylTorusShape3D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._center.x = value.x;
  (this->fields)._center.y = value.y;
  (this->fields)._center.z = value.z;
  return;
}


/* Void set_CylHrzRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_CylHrzRadiusEps
               (CylTorusShape3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            (&(this->fields)._epsilon,(float)((uint)value & _UNK_?),(MethodInfo *)0x0);
  return;
}


/* Void set_CylVertRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_CylVertRadiusEps
               (CylTorusShape3D *this,float value,MethodInfo *method)

{
  TorusShape3D::TorusShape3D_set_CoreRadius
            ((TorusShape3D *)&(this->fields)._epsilon,(float)((uint)value & _UNK_?),
             (MethodInfo *)0x0);
  return;
}


/* Void set_Epsilon(TorusEpsilon) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Epsilon
               (CylTorusShape3D *this,TorusEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon._tubeRadiusEps = value._tubeRadiusEps;
  (this->fields)._epsilon._cylHrzRadius = value._cylHrzRadius;
  (this->fields)._epsilon._cylVertRadius = value._cylVertRadius;
  return;
}


/* Void set_Top(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Top
               (CylTorusShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                     (&VStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = (this->fields)._vertRadius;
  (this->fields)._center.x = value.x - (float)uVar3 * fVar6;
  (this->fields)._center.y = value.y - (float)uVar4 * fVar6;
  (this->fields)._center.z = value.z - fVar5 * fVar6;
  return;
}

