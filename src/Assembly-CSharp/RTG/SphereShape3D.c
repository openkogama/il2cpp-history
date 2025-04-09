
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
    in_stack_1 = &TypeInfo__RTG__Singleton<RTG::MeshPool>;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  QStack_5.x = 0.0;
  QStack_5.y = 0.0;
  pSVar6 = (this->fields)._wireRenderDesc;
  QStack_5.w = 0.0;
  fStack_7 = 0.0;
  uStack_8 = 0;
  if (pSVar6 != (SphereShape3D_WireRenderDescriptor *)0x0) {
    fStack_9 = (pSVar6->fields)._radiusAdd + (this->fields)._radius;
    if ((pSVar6->fields)._wireMode == 0) {
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar10 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar10 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
        uVar11 = 0;
        pQVar12 = &(this->fields)._rotation;
        fVar13 = pQVar12->x;
        fVar14 = (this->fields)._rotation.y;
        fVar15 = (this->fields)._rotation.z;
        fVar16 = (this->fields)._rotation.w;
        fVar17 = (this->fields)._center.z;
        pVVar18 = &(this->fields)._center;
        fVar19 = pVVar18->x;
        fVar20 = pVVar18->y;
        pMVar21 = &MStack_22;
        pMVar23 = (Mesh *)&UNK_?;
        s_02.y = in_stack_24;
        s_02.x = in_stack_25;
        s_02.z = in_stack_26;
        pMVar27 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            (pMVar21,*pVVar18,*pQVar12,s_02,(MethodInfo *)0x0);
        MStack_22.m00 = pMVar27->m00;
        fVar28 = pMVar27->m10;
        fVar29 = pMVar27->m20;
        pMVar30 = (Mesh *)pMVar27->m30;
        pMVar31 = (Matrix4x4 *)pMVar27->m01;
        fVar32 = pMVar27->m11;
        fVar33 = pMVar27->m21;
        fVar34 = pMVar27->m31;
        fVar35 = pMVar27->m02;
        fVar36 = pMVar27->m12;
        fVar37 = pMVar27->m22;
        fVar38 = pMVar27->m32;
        fVar39 = pMVar27->m03;
        fVar40 = pMVar27->m13;
        fVar41 = pMVar27->m23;
        fVar42 = pMVar27->m33;
        fVar43 = MStack_22.m00;
        fStack_4 = fVar39;
        QStack_5.x = fVar40;
        QStack_5.y = fVar41;
        QStack_5.z = fVar42;
        MStack_22.m10 = fVar28;
        MStack_22.m20 = fVar29;
        MStack_22.m30 = (float)pMVar30;
        MStack_22.m01 = (float)pMVar31;
        MStack_22.m11 = fVar32;
        MStack_22.m21 = fVar33;
        MStack_22.m31 = fVar34;
        MStack_22.m02 = fVar35;
        MStack_22.m12 = fVar36;
        MStack_22.m22 = fVar37;
        MStack_22.m32 = fVar38;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          fVar38 = fVar16;
          fVar37 = fVar15;
          fVar36 = fVar14;
          fVar35 = fVar13;
          fVar34 = fVar17;
          fVar33 = fVar20;
          fVar32 = fVar19;
          pMVar31 = pMVar21;
          pMVar30 = pMVar23;
          fVar29 = in_stack_44;
          fVar28 = in_stack_45;
          fVar42 = in_stack_46;
          fVar41 = in_stack_47;
          fVar40 = in_stack_48;
          fVar39 = in_stack_49;
          fVar43 = fStack_50;
        }
        matrix.m10 = fVar28;
        matrix.m00 = fVar43;
        matrix.m20 = fVar29;
        matrix.m30 = (float)pMVar30;
        matrix.m01 = (float)pMVar31;
        matrix.m11 = fVar32;
        matrix.m21 = fVar33;
        matrix.m31 = fVar34;
        matrix.m02 = fVar35;
        matrix.m12 = fVar36;
        matrix.m22 = fVar37;
        matrix.m32 = fVar38;
        matrix.m03 = fVar39;
        matrix.m13 = fVar40;
        matrix.m23 = fVar41;
        matrix.m33 = fVar42;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        pMVar10 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar10 != (MeshPool *)0x0) {
          pMVar30 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
          fVar19 = (this->fields)._center.z;
          fVar33 = (this->fields)._rotation.z;
          fVar34 = (this->fields)._rotation.w;
          euler.y = in_stack_24;
          euler.x = (float)_UNK_?;
          euler.z = 0.0;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff00,euler,(MethodInfo *)0x0);
          fVar20 = pQVar12->y;
          fVar17 = pQVar12->z;
          fVar32 = pQVar12->w;
          pos_00.y = (float)uVar11;
          pos_00.x = in_stack_26;
          pos_00.z = fVar19;
          q_00.y = (fStack_51 * fVar32 + fVar20 * fStack_52 + fStack_53 * pQVar12->x) -
                   fVar17 * in_stack_54;
          q_00.x = (fVar32 * in_stack_54 + pQVar12->x * fStack_52 + fVar17 * fStack_51) -
                   fVar20 * fStack_53;
          q_00.z = (fStack_53 * fVar32 + fVar17 * fStack_52 + fVar20 * in_stack_54) -
                   fStack_51 * pQVar12->x;
          q_00.w = ((fVar32 * fStack_52 - in_stack_54 * pQVar12->x) - fVar20 * fStack_51) -
                   fStack_53 * fVar17;
          s_00.y = fVar34;
          s_00.x = fVar33;
          s_00.z = (float)in_stack_55;
          pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              ((Matrix4x4 *)(auStack_56 + 8),pos_00,q_00,s_00,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMVar30,*pMVar21,(MethodInfo *)0x0);
          pMVar10 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar10 != (MeshPool *)0x0) {
            pMVar30 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
            fStack_57 = (this->fields)._center.x;
            fStack_58 = (this->fields)._center.y;
            fVar19 = (this->fields)._center.z;
            fVar33 = (this->fields)._rotation.z;
            fVar34 = (this->fields)._rotation.w;
            euler_00.y = (float)_UNK_?;
            euler_00.x = QStack_5.x;
            euler_00.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad(&QStack_59,euler_00,(MethodInfo *)0x0);
            fVar20 = pQVar12->y;
            fVar17 = pQVar12->z;
            fVar32 = pQVar12->w;
            pMStack_60 = (Mesh *)((fVar32 * fStack_61 + pQVar12->x * fStack_62 + fVar17 * fStack_63)
                                 - fVar20 * fStack_64);
            pMStack_65 = (Matrix4x4 *)
                         ((fStack_63 * fVar32 + fVar20 * fStack_62 + fStack_64 * pQVar12->x) -
                         fVar17 * fStack_61);
            fStack_9 = (fStack_64 * fVar32 + fVar17 * fStack_62 + fVar20 * fStack_61) -
                        fStack_63 * pQVar12->x;
            fStack_66 = ((fVar32 * fStack_62 - fStack_61 * pQVar12->x) - fVar20 * fStack_63) -
                        fStack_64 * fVar17;
            pos_02.y = QStack_5.z;
            pos_02.x = QStack_5.y;
            pos_02.z = fVar19;
            q_02.y = (float)pMStack_65;
            q_02.x = (float)pMStack_60;
            q_02.z = fStack_9;
            q_02.w = fStack_66;
            s_03.y = fVar34;
            s_03.x = fVar33;
            s_03.z = in_stack_67;
            fStack_68 = (float)pMStack_60;
            pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                ((Matrix4x4 *)&MStack_22.m01,pos_02,q_02,s_03,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                      (pMVar30,*pMVar21,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if ((pSVar6->fields)._numDetailSliceRings == 0) {
code_?:
      fVar19 = (this->fields)._rotation.x;
      fVar20 = (this->fields)._rotation.y;
      fVar17 = (this->fields)._rotation.z;
      fVar32 = (this->fields)._rotation.w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          (&QStack_5,90.0,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      fStack_3 = pQVar12->x;
      fStack_4 = pQVar12->y;
      QStack_5.x = pQVar12->z;
      QStack_5.y = pQVar12->w;
      auStack_56._0_4_ =
           (fVar20 * QStack_5.y + fStack_4 * fVar32 + fVar17 * pQVar12->x) - QStack_5.x * fVar19;
      auStack_56._4_4_ =
           (fVar17 * QStack_5.y + QStack_5.x * fVar32 + fStack_4 * fVar19) - fVar20 * pQVar12->x;
      auStack_56._8_4_ =
           ((QStack_5.y * fVar32 - fVar19 * fStack_3) - fStack_4 * fVar20) - fVar17 * QStack_5.x;
      fStack_69 = (this->fields)._center.z;
      fStack_70 = (this->fields)._center.x;
      fStack_71 = (this->fields)._center.y;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar72 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar73 = (pVVar72->upVector).x;
      uVar74 = (pVVar72->upVector).y;
      fStack_66 = (pVVar72->upVector).z * fStack_9 + fStack_69;
      fVar20 = fStack_70 + (float)uVar73 * fStack_9;
      fVar19 = fStack_71 + (float)uVar74 * fStack_9;
      pSVar6 = (this->fields)._wireRenderDesc;
      if (pSVar6 != (SphereShape3D_WireRenderDescriptor *)0x0) {
        iVar75 = 0;
        fVar17 = (fStack_9 + fStack_9) / (float)(pSVar6->fields)._numDetailAxialRings;
        do {
          if ((pSVar6->fields)._numDetailAxialRings <= iVar75) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar72 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar33 = (pVVar72->upVector).x;
          uVar76 = (pVVar72->upVector).y;
          fVar34 = (float)iVar75;
          uVar77 = (this->fields)._center.x;
          uVar78 = (this->fields)._center.y;
          fVar35 = (fVar20 - fVar34 * fVar33 * fVar17) - (float)uVar77;
          fVar36 = (fVar19 - fVar34 * (float)uVar76 * fVar17) - (float)uVar78;
          fVar34 = (fStack_66 - fVar34 * (pVVar72->upVector).z * fVar17) - (this->fields)._center.z;
          dVar79 = (double)(fStack_9 * fStack_9 -
                           (fVar36 * fVar36 + fVar35 * fVar35 + fVar34 * fVar34));
          if (dVar79 < 0.0) {
            func_?();
          }
          else {
            dVar79 = SQRT(dVar79);
          }
          QStack_5.w = (float)dVar79;
          uStack_8 = 0x3f800000;
          fStack_7 = QStack_5.w;
          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pMVar10 = (MeshPool *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar10 == (MeshPool *)0x0) break;
          pMStack_60 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
          pos_01.y = (float)in_stack_80;
          pos_01.x = fVar32;
          pos_01.z = fVar33;
          q_01.y = fStack_70;
          q_01.x = (float)auStack_56._8_4_;
          q_01.z = fStack_71;
          q_01.w = fStack_69;
          s_01.z = fStack_81;
          s_01.x = (float)(undefined4)uStack_82;
          s_01.y = (float)uStack_82._4_4_;
          pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              (&MStack_22,pos_01,q_01,s_01,(MethodInfo *)0x0);
          fVar33 = pMVar21->m00;
          QStack_59.z = pMVar21->m10;
          QStack_59.w = pMVar21->m20;
          fStack_83 = pMVar21->m30;
          MStack_22.m02 = pMVar21->m01;
          MStack_22.m12 = pMVar21->m11;
          MStack_22.m22 = pMVar21->m21;
          MStack_22.m32 = pMVar21->m31;
          MStack_22.m01 = pMVar21->m02;
          MStack_22.m11 = pMVar21->m12;
          MStack_22.m21 = pMVar21->m22;
          MStack_22.m31 = pMVar21->m32;
          MStack_22.m00 = pMVar21->m03;
          MStack_22.m10 = pMVar21->m13;
          MStack_22.m20 = pMVar21->m23;
          MStack_22.m30 = pMVar21->m33;
          fVar34 = MStack_22.m02;
          fVar35 = MStack_22.m12;
          fVar36 = MStack_22.m22;
          fVar37 = MStack_22.m32;
          pMVar21 = (Matrix4x4 *)MStack_22.m01;
          fVar38 = MStack_22.m11;
          fVar39 = MStack_22.m21;
          fVar40 = MStack_22.m31;
          fVar41 = MStack_22.m00;
          fVar42 = MStack_22.m10;
          fVar13 = MStack_22.m20;
          pMVar30 = (Mesh *)MStack_22.m30;
          fVar14 = QStack_59.z;
          fVar15 = QStack_59.w;
          fVar16 = fStack_83;
          QStack_59.y = fVar33;
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            fVar33 = in_stack_67;
            fVar34 = fStack_57;
            fVar35 = fStack_58;
            fVar36 = fStack_3;
            fVar37 = fStack_4;
            pMVar21 = pMStack_65;
            fVar38 = fStack_9;
            fVar39 = fStack_66;
            fVar40 = fStack_68;
            fVar41 = fStack_70;
            fVar42 = fStack_71;
            fVar13 = fStack_69;
            pMVar30 = pMStack_60;
            fVar14 = fVar17;
            fVar15 = fVar19;
            fVar16 = fVar20;
            in_stack_67 = fVar33;
          }
          matrix_01.m10 = fVar14;
          matrix_01.m00 = fVar33;
          matrix_01.m20 = fVar15;
          matrix_01.m30 = fVar16;
          matrix_01.m01 = fVar34;
          matrix_01.m11 = fVar35;
          matrix_01.m21 = fVar36;
          matrix_01.m31 = fVar37;
          matrix_01.m02 = (float)pMVar21;
          matrix_01.m12 = fVar38;
          matrix_01.m22 = fVar39;
          matrix_01.m32 = fVar40;
          matrix_01.m03 = fVar41;
          matrix_01.m13 = fVar42;
          matrix_01.m23 = fVar13;
          matrix_01.m33 = (float)pMVar30;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (in_stack_80,matrix_01,(MethodInfo *)0x0);
          pSVar6 = (this->fields)._wireRenderDesc;
          iVar75 = iVar75 + 1;
        } while (pSVar6 != (SphereShape3D_WireRenderDescriptor *)0x0);
      }
    }
    else if (pSVar6 != (SphereShape3D_WireRenderDescriptor *)0x0) {
      iVar84 = (pSVar6->fields)._numDetailSliceRings + -1;
      iVar75 = 1;
      if (0 < iVar84) {
        iVar75 = iVar84;
      }
      iVar84 = 0;
      pSVar6 = (this->fields)._wireRenderDesc;
      fVar19 = _UNK_? / (float)iVar75;
      do {
        if ((pSVar6->fields)._numDetailSliceRings <= iVar84) goto code_?;
        fStack_70 = (this->fields)._center.x;
        fStack_71 = (this->fields)._center.y;
        fVar20 = (this->fields)._center.z;
        fVar17 = (this->fields)._rotation.w;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                            ((Quaternion *)&stack0xfffffee4,(float)in_stack_55,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        fVar32 = pQVar12->y;
        fVar33 = pQVar12->z;
        fVar34 = pQVar12->w;
        pos.y = in_stack_85;
        pos.x = in_stack_86;
        pos.z = fStack_50;
        q.y = (in_stack_87 * fVar34 + fVar32 * in_stack_88 +
              in_stack_89 * pQVar12->x) - fVar33 * in_stack_90;
        q.x = (fVar34 * in_stack_90 + pQVar12->x * in_stack_88 +
              fVar33 * in_stack_87) - fVar32 * in_stack_89;
        q.z = (in_stack_89 * fVar34 + fVar33 * in_stack_88 + fVar32 * in_stack_90)
              - in_stack_87 * pQVar12->x;
        q.w = ((fVar34 * in_stack_88 - in_stack_90 * pQVar12->x) -
              fVar32 * in_stack_87) - in_stack_89 * fVar33;
        s.y = in_stack_91;
        s.x = in_stack_92;
        s.z = in_stack_93;
        pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                            ((Matrix4x4 *)auStack_56,pos,q,s,(MethodInfo *)0x0);
        in_stack_67 = pMVar21->m30;
        fVar32 = pMVar21->m31;
        in_stack_89 = pMVar21->m32;
        in_stack_86 = pMVar21->m23;
        in_stack_91 = pMVar21->m33;
        in_stack_92 = in_stack_44;
        in_stack_93 = in_stack_94;
        in_stack_55 = in_stack_1;
        in_stack_90 = fVar34;
        in_stack_87 = fVar17;
        if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          in_stack_92 = in_stack_44;
          in_stack_93 = in_stack_94;
          in_stack_55 = in_stack_1;
          in_stack_90 = fVar34;
          in_stack_87 = fVar17;
        }
        pMVar10 = (MeshPool *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar10 == (MeshPool *)0x0) break;
        pMVar30 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar10,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        matrix_00.m10 = (float)iVar84 * fVar19;
        matrix_00.m00 = in_stack_67;
        matrix_00.m20 = fVar20;
        matrix_00.m30 = fVar19;
        matrix_00.m01 = fVar32;
        matrix_00.m11 = fVar33;
        matrix_00.m21 = in_stack_90;
        matrix_00.m31 = in_stack_87;
        matrix_00.m02 = in_stack_89;
        matrix_00.m12 = fStack_50;
        matrix_00.m22 = in_stack_45;
        matrix_00.m32 = in_stack_92;
        matrix_00.m03 = in_stack_91;
        matrix_00.m13 = in_stack_93;
        matrix_00.m23 = (float)in_stack_2;
        matrix_00.m33 = (float)in_stack_55;
        in_stack_88 = fStack_50;
        in_stack_44 = in_stack_92;
        in_stack_85 = in_stack_91;
        in_stack_94 = in_stack_93;
        in_stack_1 = in_stack_55;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (pMVar30,matrix_00,(MethodInfo *)0x0);
        pSVar6 = (this->fields)._wireRenderDesc;
        iVar84 = iVar84 + 1;
      } while (pSVar6 != (SphereShape3D_WireRenderDescriptor *)0x0);
    }
  }
  func_?();
  pcVar95 = (code *)swi(3);
  (*pcVar95)();
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

