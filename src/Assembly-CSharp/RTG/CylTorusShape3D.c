
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
  this_01 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_01 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireCircleXY(this_01,(MethodInfo *)0x0);
    fVar1 = (this->fields)._hrzRadius + (this->fields)._coreRadius;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = (float)_UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff80,euler,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    fVar7 = (this->fields)._center.z;
    uVar8 = (this->fields)._center.x;
    uVar9 = (this->fields)._center.y;
    pVVar10 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                       ((Vector3 *)&stack0xffffffa0,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    fVar11 = (this->fields)._vertRadius;
    uVar12 = pVVar10->x;
    uVar13 = pVVar10->y;
    fVar14 = (this->fields)._rotation.x;
    fVar15 = (this->fields)._rotation.y;
    fVar16 = (this->fields)._rotation.z;
    fVar17 = (this->fields)._rotation.w;
    pos_00.y = (float)uVar9 - fVar11 * (float)uVar13;
    pos_00.x = (float)uVar8 - fVar11 * (float)uVar12;
    pos_00.z = fVar7 - fVar11 * pVVar10->z;
    q_00.y = (fVar6 * fVar15 + fVar4 * fVar17 + fVar3 * fVar16) - fVar5 * fVar14;
    q_00.x = (fVar6 * fVar14 + fVar3 * fVar17 + fVar5 * fVar15) - fVar4 * fVar16;
    q_00.z = (fVar6 * fVar16 + fVar5 * fVar17 + fVar4 * fVar14) - fVar3 * fVar15;
    q_00.w = ((fVar6 * fVar17 - fVar3 * fVar14) - fVar4 * fVar15) - fVar5 * fVar16;
    s_01.y = fVar1;
    s_01.x = fVar1;
    s_01.z = 1.0;
    pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffef0,pos_00,q_00,s_01,(MethodInfo *)0x0);
    fVar19 = pMVar18->m00;
    fVar20 = pMVar18->m10;
    fVar21 = pMVar18->m20;
    fVar22 = pMVar18->m30;
    fVar11 = pMVar18->m01;
    fVar7 = pMVar18->m11;
    fVar14 = pMVar18->m21;
    fVar15 = pMVar18->m31;
    fVar16 = pMVar18->m02;
    fVar17 = pMVar18->m12;
    fVar1 = pMVar18->m22;
    fVar23 = pMVar18->m32;
    fVar24 = pMVar18->m03;
    fVar25 = pMVar18->m13;
    fVar26 = pMVar18->m23;
    fVar27 = pMVar18->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    matrix.m10 = fVar20;
    matrix.m00 = fVar19;
    matrix.m20 = fVar21;
    matrix.m30 = fVar22;
    matrix.m01 = fVar11;
    matrix.m11 = fVar7;
    matrix.m21 = fVar14;
    matrix.m31 = fVar15;
    matrix.m02 = fVar16;
    matrix.m12 = fVar17;
    matrix.m22 = fVar1;
    matrix.m32 = fVar23;
    matrix.m03 = fVar24;
    matrix.m13 = fVar25;
    matrix.m23 = fVar26;
    matrix.m33 = fVar27;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    fVar14 = (this->fields)._center.z;
    fVar7 = (this->fields)._center.x;
    fVar15 = (this->fields)._center.y;
    pVVar10 = (Vector3 *)&stack0xffffffa0;
    pCVar28 = this;
    pVVar29 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                        (pVVar10,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    uVar30 = pVVar29->x;
    uVar31 = pVVar29->y;
    fVar11 = (this->fields)._vertRadius;
    fVar16 = (this->fields)._rotation.x;
    fVar17 = (this->fields)._rotation.y;
    fVar1 = (this->fields)._rotation.z;
    fVar23 = (this->fields)._rotation.w;
    fVar27 = (fVar6 * fVar16 + fVar3 * fVar23 + fVar5 * fVar17) - fVar4 * fVar1;
    pMVar18 = (Matrix4x4 *)&stack0xfffffef0;
    pos_01.y = fVar11 * (float)uVar31 + fVar15;
    pos_01.x = fVar11 * (float)uVar30 + fVar7;
    pos_01.z = fVar11 * pVVar29->z + fVar14;
    q_01.y = (fVar6 * fVar17 + fVar4 * fVar23 + fVar3 * fVar1) - fVar5 * fVar16;
    q_01.x = fVar27;
    q_01.z = (fVar6 * fVar1 + fVar5 * fVar23 + fVar4 * fVar16) - fVar3 * fVar17;
    q_01.w = ((fVar6 * fVar23 - fVar3 * fVar16) - fVar4 * fVar17) - fVar5 * fVar1;
    s_02.y = (float)pCVar28;
    s_02.x = (float)pVVar10;
    s_02.z = 1.0;
    pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        (pMVar18,pos_01,q_01,s_02,(MethodInfo *)0x0);
    fVar24 = pMVar32->m10;
    mesh_00 = (Mesh *)pMVar32->m02;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar32,(MethodInfo *)0x0);
    fVar26 = (this->fields)._coreRadius - (this->fields)._hrzRadius;
    method_00 = (MethodInfo *)(this->fields)._center.z;
    pVVar10 = (Vector3 *)(this->fields)._center.x;
    this_00 = (TriangPrismShape3D *)(this->fields)._center.y;
    pVVar29 = TriangPrismShape3D::TriangPrismShape3D_get_Up(pVVar10,this_00,method_00);
    fVar11 = (this->fields)._vertRadius;
    uVar33 = pVVar29->x;
    uVar34 = pVVar29->y;
    fVar7 = (this->fields)._rotation.x;
    fVar14 = (this->fields)._rotation.y;
    fVar15 = (this->fields)._rotation.z;
    fVar16 = (this->fields)._rotation.w;
    fStack35 = 1.0;
    q_02.y = (fVar24 * fVar14 + fVar27 * fVar16 + fVar3 * fVar15) - (float)pMVar18 * fVar7;
    q_02.x = (fVar24 * fVar7 + fVar3 * fVar16 + (float)pMVar18 * fVar14) - fVar27 * fVar15;
    q_02.z = (fVar24 * fVar15 + (float)pMVar18 * fVar16 + fVar27 * fVar7) - fVar3 * fVar14;
    pos_02.y = (float)this_00 - fVar11 * (float)uVar34;
    pos_02.x = (float)pVVar10 - fVar11 * (float)uVar33;
    pos_02.z = (float)method_00 - fVar11 * pVVar29->z;
    q_02.w = ((fVar24 * fVar16 - fVar3 * fVar7) - fVar27 * fVar14) - (float)pMVar18 * fVar15;
    s.y = fVar26;
    s.x = fVar26;
    s.z = 1.0;
    fVar25 = fVar26;
    pMVar32 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffef0,pos_02,q_02,s,(MethodInfo *)0x0);
    fStack35 = pMVar32->m30;
    fStack36 = pMVar32->m11;
    fStack37 = pMVar32->m21;
    fStack38 = pMVar32->m31;
    fStack39 = pMVar32->m02;
    fStack40 = pMVar32->m12;
    fStack41 = pMVar32->m22;
    fStack42 = pMVar32->m32;
    fStack43 = pMVar32->m03;
    puStack44 = (undefined *)pMVar32->m13;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar32,(MethodInfo *)0x0);
    fVar7 = (this->fields)._center.z;
    fVar14 = (this->fields)._center.x;
    fVar16 = (this->fields)._center.y;
    pVVar10 = TriangPrismShape3D::TriangPrismShape3D_get_Up
                       ((Vector3 *)&stack0xffffffa0,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
    fVar11 = (this->fields)._vertRadius;
    uVar45 = pVVar10->x;
    uVar46 = pVVar10->y;
    fVar15 = (this->fields)._rotation.x;
    fVar17 = (this->fields)._rotation.y;
    fVar1 = (this->fields)._rotation.z;
    fVar23 = (this->fields)._rotation.w;
    pos.y = fVar16 + fVar11 * (float)uVar46;
    pos.x = fVar14 + fVar11 * (float)uVar45;
    pos.z = fVar7 + fVar11 * pVVar10->z;
    q.y = (fVar24 * fVar17 + fVar27 * fVar23 + fVar3 * fVar1) - (float)pMVar18 * fVar15;
    q.x = (fVar24 * fVar15 + fVar3 * fVar23 + (float)pMVar18 * fVar17) - fVar27 * fVar1;
    q.z = (fVar24 * fVar1 + (float)pMVar18 * fVar23 + fVar27 * fVar15) - fVar3 * fVar17;
    q.w = ((fVar24 * fVar23 - fVar3 * fVar15) - fVar27 * fVar17) - (float)pMVar18 * fVar1;
    s_00.y = fVar25;
    s_00.x = fVar26;
    s_00.z = 1.0;
    pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffef0,pos,q,s_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar18,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
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

