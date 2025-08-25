
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_ContainsPoint
               (SphereShape3D *this,Vector3 point,MethodInfo *method)

{
  bVar1 = SphereMath::SphereMath_ContainsPoint
                    (point,(this->fields)._center,(this->fields)._radius,
                     (SphereEpsilon)(this->fields)._epsilon._radiusEps,(MethodInfo *)0x0);
  return bVar1;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_GetAABB
                 (AABB *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  center = (this->fields)._center;
  fVar1 = (this->fields)._radius;
  pVVar2 = Vector3Ex::Vector3Ex_FromValue
                     ((Vector3 *)&stack0xffffffe8,fVar1 + fVar1,(MethodInfo *)0x0);
  size = *pVVar2;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  AABB::AABB__ctor(__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_Raycast
               (SphereShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = SphereMath::SphereMath_Raycast_1
                    (ray,t,(this->fields)._center,(this->fields)._radius,
                     (SphereEpsilon)(this->fields)._epsilon._radiusEps,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_RenderSolid
               (SphereShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
    uStack_1._0_4_ = (this->fields)._center.x;
    uStack_1._4_4_ = (this->fields)._center.y;
    fVar2 = (this->fields)._center.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    q = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
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

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_RenderWire
               (SphereShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    in_stack_1 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  pSVar5 = (this->fields)._wireRenderDesc;
  if (pSVar5 != (SphereShape3D_WireRenderDescriptor *)0x0) {
    fVar6 = (pSVar5->fields)._radiusAdd + (this->fields)._radius;
    fStack_7 = fVar6;
    if ((pSVar5->fields)._wireMode == 0) {
      fVar8 = 1.0;
      fVar9 = fVar6;
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar10 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar10 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
        fVar11 = (this->fields)._rotation.y;
        fVar12 = (this->fields)._center.z;
        pVVar13 = &(this->fields)._center;
        pMVar14 = (Mesh *)pVVar13->x;
        fVar15 = pVVar13->y;
        pMVar16 = &MStack_17;
        puVar18 = &UNK_?;
        s_02.z = (float)auStack_19._4_4_;
        s_02.x = (float)uStack_20;
        s_02.y = (float)uStack_20._4_4_;
        pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            (pMVar16,*pVVar13,(this->fields)._rotation,s_02,(MethodInfo *)0x0);
        fVar22 = pMVar21->m00;
        fVar23 = pMVar21->m10;
        fVar24 = pMVar21->m20;
        fStack_25 = pMVar21->m30;
        MStack_17.m00 = pMVar21->m01;
        MStack_17.m10 = pMVar21->m11;
        MStack_17.m20 = pMVar21->m21;
        MStack_17.m30 = pMVar21->m31;
        pMVar26 = (Matrix4x4 *)pMVar21->m02;
        pMVar27 = (Mesh *)pMVar21->m12;
        fVar28 = pMVar21->m22;
        fVar29 = pMVar21->m32;
        MStack_17.m01 = pMVar21->m03;
        fVar30 = pMVar21->m13;
        fVar31 = pMVar21->m23;
        puVar32 = (undefined *)pMVar21->m33;
        fVar33 = MStack_17.m00;
        fVar34 = MStack_17.m10;
        fVar35 = MStack_17.m20;
        fVar36 = MStack_17.m30;
        fVar37 = MStack_17.m01;
        fVar38 = fStack_25;
        fStack_39 = fVar22;
        fStack_40 = fVar23;
        fStack_41 = fVar24;
        MStack_17.m11 = fVar30;
        MStack_17.m21 = fVar31;
        MStack_17.m31 = (float)puVar32;
        MStack_17.m02 = (float)pMVar26;
        MStack_17.m12 = (float)pMVar27;
        MStack_17.m22 = fVar28;
        MStack_17.m32 = fVar29;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          fVar29 = fVar12;
          fVar28 = fVar15;
          pMVar27 = pMVar14;
          pMVar26 = pMVar16;
          puVar32 = puVar18;
          fVar31 = in_stack_42;
          fVar30 = in_stack_43;
          fVar24 = in_stack_44;
          fVar23 = in_stack_45;
          fVar22 = in_stack_46;
          fVar33 = fStack_47;
          fVar34 = fStack_48;
          fVar35 = fStack_49;
          fVar36 = fStack_50;
          fVar37 = fStack_51;
          fVar38 = fStack_52;
          in_stack_46 = fVar22;
          in_stack_45 = fVar23;
          in_stack_43 = fVar30;
        }
        matrix.m10 = fVar23;
        matrix.m00 = fVar22;
        matrix.m20 = fVar24;
        matrix.m30 = fVar38;
        matrix.m01 = fVar33;
        matrix.m11 = fVar34;
        matrix.m21 = fVar35;
        matrix.m31 = fVar36;
        matrix.m02 = (float)pMVar26;
        matrix.m12 = (float)pMVar27;
        matrix.m22 = fVar28;
        matrix.m32 = fVar29;
        matrix.m03 = fVar37;
        matrix.m13 = fVar30;
        matrix.m23 = fVar31;
        matrix.m33 = (float)puVar32;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        pMVar10 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar10 != (MeshPool *)0x0) {
          pMVar14 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
          fVar15 = (this->fields)._center.z;
          euler.y = fVar11;
          euler.x = (float)_UNK_?;
          euler.z = 0.0;
          pQVar53 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                   Quaternion_Internal_FromEulerRad
                             ((Quaternion *)&stack0xfffffef0,euler,(MethodInfo *)0x0);
          fVar12 = pQVar53->y;
          fVar28 = pQVar53->z;
          fVar29 = pQVar53->w;
          pos_00.y = in_stack_43;
          pos_00.x = fStack_51;
          pos_00.z = fVar15;
          q_00.y = (in_stack_54 * fVar29 + fVar12 * in_stack_45 +
                   in_stack_46 * pQVar53->x) - fVar28 * in_stack_55;
          q_00.x = (fVar29 * in_stack_55 + pQVar53->x * in_stack_45 +
                   fVar28 * in_stack_54) - fVar12 * in_stack_46;
          q_00.z = (in_stack_46 * fVar29 + fVar28 * in_stack_45 +
                   fVar12 * in_stack_55) - in_stack_54 * pQVar53->x;
          q_00.w = ((fVar29 * in_stack_45 - in_stack_55 * pQVar53->x) -
                   fVar12 * in_stack_54) - in_stack_46 * fVar28;
          s_00.y = fStack_49;
          s_00.x = fStack_48;
          s_00.z = fStack_50;
          pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             ((Matrix4x4 *)((undefined1 *)((int)register0x00000010 + -0xd4) + 8),
                              pos_00,q_00,s_00,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar14,*pMVar16,(MethodInfo *)0x0);
          pMVar10 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar10 != (MeshPool *)0x0) {
            pMVar14 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
            auStack_19._4_4_ = (this->fields)._center.x;
            auStack_19._8_4_ = (this->fields)._center.y;
            fVar15 = (this->fields)._center.z;
            euler_00.y = (float)_UNK_?;
            euler_00.x = fStack_3;
            euler_00.z = 0.0;
            pQVar53 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                     Quaternion_Internal_FromEulerRad(&QStack_56,euler_00,(MethodInfo *)0x0);
            fVar12 = pQVar53->y;
            fVar28 = pQVar53->z;
            fVar29 = pQVar53->w;
            fStack_4 = (fVar29 * fVar6 + pQVar53->x * (float)uStack_20 + fVar28 * fVar9) -
                        fVar12 * fVar8;
            QStack_2.x = (fVar9 * fVar29 + fVar12 * (float)uStack_20 + fVar8 * pQVar53->x) -
                          fVar28 * fVar6;
            QStack_2.y = (fVar8 * fVar29 + fVar28 * (float)uStack_20 + fVar12 * fVar6) -
                          fVar9 * pQVar53->x;
            fVar6 = ((fVar29 * (float)uStack_20 - fVar6 * pQVar53->x) - fVar12 * fVar9) -
                     fVar8 * fVar28;
            puStack_57 = (undefined *)fStack_4;
            QStack_2.z = fVar6;
            pos_02.y = fStack_58;
            pos_02.x = fStack_59;
            pos_02.z = fVar15;
            q_02.y = QStack_2.x;
            q_02.x = fStack_4;
            q_02.z = QStack_2.y;
            q_02.w = fVar6;
            s_03.y = fStack_60;
            s_03.x = fStack_61;
            s_03.z = fStack_62;
            QStack_56.y = (float)uStack_20;
            QStack_56.z = (float)uStack_20;
            QStack_56.w = (float)uStack_20;
            fStack_63 = (float)uStack_20;
            pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                               ((Matrix4x4 *)&MStack_17.m01,pos_02,q_02,s_03,(MethodInfo *)0x0);
            uStack_20 = uStack_20 & 0xffffffff00000000;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                      (pMVar14,*pMVar16,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if ((pSVar5->fields)._numDetailSliceRings == 0) {
code_?:
      fVar6 = (this->fields)._rotation.x;
      fVar9 = (this->fields)._rotation.y;
      fVar8 = (this->fields)._rotation.z;
      fVar15 = (this->fields)._rotation.w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar53 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)((undefined1 *)((int)register0x00000010 + -0xd4) + 0x2c),
                          90.0,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                          (MethodInfo *)0x0);
      uStack_20._0_4_ = pQVar53->y;
      fVar12 = pQVar53->z;
      fVar28 = pQVar53->w;
      fStack_61 = (fVar28 * fVar6 + pQVar53->x * fVar15 + fVar12 * fVar9) - (float)uStack_20 * fVar8;
      fStack_60 = (fVar9 * fVar28 + (float)uStack_20 * fVar15 + fVar8 * pQVar53->x) - fVar12 * fVar6;
      fStack_62 = (fVar8 * fVar28 + fVar12 * fVar15 + (float)uStack_20 * fVar6) - fVar9 * pQVar53->x;
      fStack_59 = ((fVar28 * fVar15 - fVar6 * pQVar53->x) - (float)uStack_20 * fVar9) -
                  fVar8 * fVar12;
      uStack_20._0_4_ = (this->fields)._center.x;
      uStack_20._4_4_ = (this->fields)._center.y;
      auStack_19._4_4_ = (this->fields)._center.z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar64 = TypeInfo__UnityEngine__Vector3->static_fields;
      fStack_65 = (pVVar64->upVector).x;
      puStack_57 = (undefined *)(pVVar64->upVector).y;
      QStack_2.x = (pVVar64->upVector).z;
      pGVar66 = (Graphics__Class *)((float)uStack_20 + fStack_65 * fStack_7);
      puVar32 = (undefined *)((float)uStack_20._4_4_ + (float)puStack_57 * fStack_7);
      uStack_20._0_4_ = QStack_2.x * fStack_7 + (float)auStack_19._4_4_;
      pSVar5 = (this->fields)._wireRenderDesc;
      if (pSVar5 != (SphereShape3D_WireRenderDescriptor *)0x0) {
        iVar67 = 0;
        fVar6 = (fStack_7 + fStack_7) / (float)(pSVar5->fields)._numDetailAxialRings;
        do {
          if ((pSVar5->fields)._numDetailAxialRings <= iVar67) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar64 = TypeInfo__UnityEngine__Vector3->static_fields;
          QStack_2.z = (pVVar64->upVector).x;
          QStack_2.w = (pVVar64->upVector).y;
          fStack_3 = (pVVar64->upVector).z;
          fVar12 = (float)iVar67;
          fVar9 = (this->fields)._center.x;
          fVar8 = (this->fields)._center.y;
          pMVar14 = (Mesh *)(this->fields)._center.z;
          fVar28 = ((float)pGVar66 - QStack_2.z * fVar6 * fVar12) - fVar9;
          fVar29 = ((float)puVar32 - QStack_2.w * fVar6 * fVar12) - fVar8;
          fVar12 = ((float)uStack_20 - fStack_3 * fVar6 * fVar12) - (float)pMVar14;
          if (fStack_7 * fStack_7 - (fVar29 * fVar29 + fVar28 * fVar28 + fVar12 * fVar12) < 0.0) {
            func_?();
          }
          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar10 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar10 == (MeshPool *)0x0) break;
          QStack_2.y = (float)MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
          pos_01.y = fVar9;
          pos_01.x = fVar15;
          pos_01.z = fVar8;
          q_01.y = fStack_58;
          q_01.x = fStack_59;
          q_01.z = fStack_7;
          q_01.w = fStack_65;
          s_01.z = (float)auStack_19._4_4_;
          s_01.x = (float)uStack_20;
          s_01.y = (float)uStack_20._4_4_;
          pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             (&MStack_17,pos_01,q_01,s_01,(MethodInfo *)0x0);
          MStack_17.m01 = pMVar16->m00;
          MStack_17.m11 = pMVar16->m10;
          MStack_17.m21 = pMVar16->m20;
          MStack_17.m31 = pMVar16->m30;
          MStack_17.m02 = pMVar16->m01;
          MStack_17.m12 = pMVar16->m11;
          MStack_17.m22 = pMVar16->m21;
          MStack_17.m32 = pMVar16->m31;
          MStack_17.m00 = pMVar16->m02;
          MStack_17.m10 = pMVar16->m12;
          MStack_17.m20 = pMVar16->m22;
          MStack_17.m30 = pMVar16->m32;
          fStack_39 = pMVar16->m03;
          fStack_40 = pMVar16->m13;
          fStack_41 = pMVar16->m23;
          fStack_25 = pMVar16->m33;
          pMVar16 = (Matrix4x4 *)MStack_17.m02;
          pMVar27 = (Mesh *)MStack_17.m12;
          fVar9 = MStack_17.m22;
          fVar8 = MStack_17.m32;
          fVar12 = MStack_17.m00;
          fVar28 = MStack_17.m10;
          fVar29 = MStack_17.m20;
          fVar30 = MStack_17.m30;
          fVar31 = fStack_39;
          fVar11 = fStack_40;
          fVar22 = fStack_41;
          fVar23 = fStack_25;
          fVar24 = MStack_17.m01;
          fVar33 = MStack_17.m11;
          fVar34 = MStack_17.m21;
          puVar18 = (undefined *)MStack_17.m31;
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            puVar32 = &UNK_?;
            pGVar66 = TypeInfo__UnityEngine__Graphics;
            func_?();
            pMVar16 = (Matrix4x4 *)QStack_2.x;
            pMVar27 = (Mesh *)QStack_2.y;
            fVar9 = QStack_2.z;
            fVar8 = QStack_2.w;
            fVar12 = fStack_61;
            fVar28 = fStack_60;
            fVar29 = fStack_62;
            fVar30 = fStack_59;
            fVar31 = (float)uStack_20;
            fVar11 = (float)uStack_20._4_4_;
            fVar22 = (float)auStack_19._4_4_;
            fVar23 = (float)auStack_19._8_4_;
            fVar24 = fStack_58;
            fVar33 = fStack_7;
            fVar34 = fStack_65;
            puVar18 = puStack_57;
          }
          matrix_01.m10 = fVar33;
          matrix_01.m00 = fVar24;
          matrix_01.m20 = fVar34;
          matrix_01.m30 = (float)puVar18;
          matrix_01.m01 = (float)pMVar16;
          matrix_01.m11 = (float)pMVar27;
          matrix_01.m21 = fVar9;
          matrix_01.m31 = fVar8;
          matrix_01.m02 = fVar12;
          matrix_01.m12 = fVar28;
          matrix_01.m22 = fVar29;
          matrix_01.m32 = fVar30;
          matrix_01.m03 = fVar31;
          matrix_01.m13 = fVar11;
          matrix_01.m23 = fVar22;
          matrix_01.m33 = fVar23;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar14,matrix_01,(MethodInfo *)0x0);
          pSVar5 = (this->fields)._wireRenderDesc;
          iVar67 = iVar67 + 1;
        } while (pSVar5 != (SphereShape3D_WireRenderDescriptor *)0x0);
      }
    }
    else {
      uStack_20._4_4_ = fVar6;
      uStack_20._0_4_ = fVar6;
      auStack_19._4_4_ = 1.0;
      if (pSVar5 != (SphereShape3D_WireRenderDescriptor *)0x0) {
        iVar68 = (pSVar5->fields)._numDetailSliceRings + -1;
        iVar67 = 1;
        if (0 < iVar68) {
          iVar67 = iVar68;
        }
        iVar68 = 0;
        pSVar5 = (this->fields)._wireRenderDesc;
        fVar6 = _UNK_? / (float)iVar67;
        do {
          if ((pSVar5->fields)._numDetailSliceRings <= iVar68) goto code_?;
          fStack_65 = (this->fields)._center.x;
          puStack_57 = (undefined *)(this->fields)._center.y;
          fVar9 = (this->fields)._center.z;
          fVar8 = (this->fields)._rotation.y;
          fVar15 = (this->fields)._rotation.z;
          fVar12 = (float)iVar68 * fVar6;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pQVar53 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                             ((Quaternion *)&stack0xfffffed4,in_stack_69,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          fVar28 = pQVar53->y;
          fVar29 = pQVar53->z;
          fVar30 = pQVar53->w;
          pos.y = (float)in_stack_1;
          pos.x = (float)in_stack_70;
          pos.z = in_stack_45;
          q.y = (in_stack_71 * fVar30 + fVar28 * in_stack_72 +
                in_stack_69 * pQVar53->x) - fVar29 * in_stack_73;
          q.x = (fVar30 * in_stack_73 + pQVar53->x * in_stack_72 +
                fVar29 * in_stack_71) - fVar28 * in_stack_69;
          q.z = (in_stack_69 * fVar30 + fVar29 * in_stack_72 +
                fVar28 * in_stack_73) - in_stack_71 * pQVar53->x;
          q.w = ((fVar30 * in_stack_72 - in_stack_73 * pQVar53->x) -
                fVar28 * in_stack_71) - in_stack_69 * fVar29;
          s.y = fStack_50;
          s.x = fStack_49;
          s.z = fStack_51;
          pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             ((Matrix4x4 *)((int)register0x00000010 + -0xd4),pos,q,s,
                              (MethodInfo *)0x0);
          fVar28 = pMVar16->m30;
          fStack_49 = pMVar16->m21;
          fStack_50 = pMVar16->m31;
          fStack_51 = pMVar16->m02;
          in_stack_73 = pMVar16->m12;
          in_stack_71 = pMVar16->m22;
          in_stack_69 = pMVar16->m32;
          fVar31 = pMVar16->m03;
          fVar11 = pMVar16->m33;
          in_stack_72 = fVar29;
          in_stack_45 = fVar9;
          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            in_stack_72 = fVar29;
            in_stack_45 = fVar9;
          }
          pMVar10 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar10 == (MeshPool *)0x0) break;
          in_stack_70 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          matrix_00.m10 = fVar8;
          matrix_00.m00 = fVar28;
          matrix_00.m20 = fVar15;
          matrix_00.m30 = fVar31;
          matrix_00.m01 = fStack_50;
          matrix_00.m11 = fStack_51;
          matrix_00.m21 = in_stack_73;
          matrix_00.m31 = in_stack_71;
          matrix_00.m02 = in_stack_69;
          matrix_00.m12 = in_stack_72;
          matrix_00.m22 = fVar30;
          matrix_00.m32 = (float)in_stack_74;
          matrix_00.m03 = fVar11;
          matrix_00.m13 = (float)in_stack_75;
          matrix_00.m23 = fVar12;
          matrix_00.m33 = in_stack_45;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (in_stack_70,matrix_00,(MethodInfo *)0x0);
          pSVar5 = (this->fields)._wireRenderDesc;
          iVar68 = iVar68 + 1;
        } while (pSVar5 != (SphereShape3D_WireRenderDescriptor *)0x0);
      }
    }
  }
  func_?();
  pcVar76 = (code *)swi(3);
  (*pcVar76)();
  return;
}


/* SphereShape3D() */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D__ctor
               (SphereShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SphereShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  (this->fields)._radius = 1.0;
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
  method_01 = TypeInfo__RTG__SphereShape3D__WireRenderDescriptor;
  value = (SphereShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._numDetailAxialRings = 0x14;
  (value->fields)._numDetailSliceRings = 0x14;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._wireRenderDesc;
  (this->fields)._wireRenderDesc = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector
                      ,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Rotation
          (Quaternion *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.y;
  fVar2 = (this->fields)._rotation.z;
  fVar3 = (this->fields)._rotation.w;
  __return_storage_ptr__->x = (this->fields)._rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  VStack_2.x = (this->fields)._rotation.y;
  VStack_2.y = (this->fields)._rotation.z;
  VStack_2.z = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = VStack_2.x;
  rotation.x = fVar1;
  rotation.z = VStack_2.y;
  rotation.w = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,rotation,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                      (MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Single get_WireRadius() */

float Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_WireRadius
                (SphereShape3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields)._wireRenderDesc;
  if (pSVar2 != (SphereShape3D_WireRenderDescriptor *)0x0) {
    return (pSVar2->fields)._radiusAdd + (this->fields)._radius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_RadiusEps(Single) */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_set_RadiusEps
               (SphereShape3D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_set_Rotation
               (SphereShape3D *this,Quaternion value,MethodInfo *method)

{
  (this->fields)._rotation.x = value.x;
  (this->fields)._rotation.y = value.y;
  (this->fields)._rotation.z = value.z;
  (this->fields)._rotation.w = value.w;
  return;
}

