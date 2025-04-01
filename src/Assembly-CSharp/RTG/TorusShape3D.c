
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_GetAABB
                 (AABB *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

{
  fVar1 = TorusMath::TorusMath_CalcSphereRadius
                    ((this->fields)._coreRadius,(this->fields)._tubeRadius,(MethodInfo *)0x0);
  uVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  pVVar4 = Vector3Ex::Vector3Ex_FromValue
                     ((Vector3 *)&stack0xffffffe8,fVar1 * _UNK_?,(MethodInfo *)0x0);
  size = *pVVar4;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = uVar2;
  auVar5._8_4_ = 0;
  AABB::AABB__ctor(__return_storage_ptr__,(Vector3)(auVar5 << 0x20),size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetHrzExtents() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_GetHrzExtents
          (TorusShape3D *this,MethodInfo *method)

{
  pLVar1 = TorusMath::TorusMath_Calc3DHrzExtentPoints
                     ((this->fields)._center,(this->fields)._coreRadius,(this->fields)._tubeRadius,
                      (this->fields)._rotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_Raycast
               (TorusShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = TorusMath::TorusMath_Raycast
                    (ray,t,(this->fields)._center,(this->fields)._coreRadius,
                     (this->fields)._tubeRadius,(this->fields)._rotation,(this->fields)._epsilon,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_RenderSolid
               (TorusShape3D *this,MethodInfo *method)

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
    mesh = MeshPool::MeshPool_get_UnitTorus(this_00,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_RenderWire
               (TorusShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    pMStack_4 = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
    pTVar5 = (this->fields)._wireRenderDesc;
    if (pTVar5 != (TorusShape3D_WireRenderDescriptor *)0x0) {
      if (((pTVar5->fields)._numTubeSlices == 0) || (((pTVar5->fields)._wireFlags & 1) == 0)) {
code_?:
        pTVar5 = (this->fields)._wireRenderDesc;
        if (pTVar5 != (TorusShape3D_WireRenderDescriptor *)0x0) {
          if (((pTVar5->fields)._numAxialSlices == 0) || (((pTVar5->fields)._wireFlags & 2) == 0)) {
            return;
          }
          VStack_6.x = (this->fields)._rotation.x;
          VStack_6.y = (this->fields)._rotation.y;
          VStack_6.z = (this->fields)._rotation.z;
          fStack_7 = (this->fields)._rotation.w;
          fStack_8 = 0.0;
          euler.y = 0.0;
          euler.z = 0.0;
          euler.x = (float)_UNK_?;
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                   Quaternion_Internal_FromEulerRad(&QStack_10,euler,(MethodInfo *)0x0);
          fVar11 = pQVar9->y;
          fVar12 = pQVar9->z;
          fVar13 = pQVar9->w;
          fStack_14 = fStack_7;
          fStack_15 = fStack_7;
          fStack_16 = fStack_7;
          fStack_17 = fStack_7;
          VStack_18.x = (fVar13 * VStack_6.x + pQVar9->x * fStack_7 + fVar12 * VStack_6.y) -
                        fVar11 * VStack_6.z;
          VStack_18.y = (fVar13 * VStack_6.y + fVar11 * fStack_7 + pQVar9->x * VStack_6.z) -
                        fVar12 * VStack_6.x;
          VStack_18.z = (fVar13 * VStack_6.z + fVar12 * fStack_7 + fVar11 * VStack_6.x) -
                        pQVar9->x * VStack_6.y;
          fStack_19 = ((fVar13 * fStack_7 - pQVar9->x * VStack_6.x) - fVar11 * VStack_6.y) -
                      fVar12 * VStack_6.z;
          pTVar5 = (this->fields)._wireRenderDesc;
          fStack_20 = VStack_18.x;
          if (pTVar5 != (TorusShape3D_WireRenderDescriptor *)0x0) {
            iVar21 = 0;
            fVar11 = _UNK_? / (float)(pTVar5->fields)._numAxialSlices;
            uStack_22 = CONCAT44(fVar11,(float)uStack_22);
            do {
              if ((pTVar5->fields)._numAxialSlices <= iVar21) {
                return;
              }
              fStack_20 = (float)iVar21 * fVar11 * _UNK_?;
              dVar23 = (double)fStack_20;
              func_?();
              fStack_24 = (this->fields)._coreRadius - (float)dVar23 * (this->fields)._tubeRadius;
              dVar23 = (double)fStack_20;
              func_?();
              fStack_25 = (this->fields)._center.z;
              fStack_3 = 1.0;
              fStack_20 = (float)dVar23 * (this->fields)._tubeRadius;
              fStack_1 = fStack_24;
              fStack_2 = fStack_24;
              uStack_26._0_4_ = (this->fields)._center.x;
              uStack_26._4_4_ = (this->fields)._center.y;
              fStack_14 = (this->fields)._rotation.x;
              fStack_15 = (this->fields)._rotation.y;
              fStack_16 = (this->fields)._rotation.z;
              fStack_17 = (this->fields)._rotation.w;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              rotation_03.y = fStack_15;
              rotation_03.x = fStack_14;
              rotation_03.z = fStack_16;
              rotation_03.w = fStack_17;
              pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                 (&VStack_6,rotation_03,
                                  TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                  (MethodInfo *)0x0);
              uStack_28._0_4_ = pVVar27->x;
              uStack_28._4_4_ = pVVar27->y;
              fStack_29 = pVVar27->z;
              fStack_8 = fStack_25 + fStack_29 * fStack_20;
              pos_00.y = uStack_26._4_4_ + (float)uStack_28._4_4_ * fStack_20;
              pos_00.x = (float)uStack_26 + (float)(undefined4)uStack_28 * fStack_20;
              pos_00.z = fStack_8;
              q.y = VStack_18.y;
              q.x = VStack_18.x;
              q.z = VStack_18.z;
              q.w = fStack_19;
              s_00.y = fStack_2;
              s_00.x = fStack_1;
              s_00.z = fStack_3;
              pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                 (&MStack_31,pos_00,q,s_00,(MethodInfo *)0x0);
              fStack_14 = pMVar30->m00;
              fStack_15 = pMVar30->m10;
              fStack_16 = pMVar30->m20;
              fStack_17 = pMVar30->m30;
              fStack_32 = pMVar30->m01;
              fStack_33 = pMVar30->m11;
              fStack_34 = pMVar30->m21;
              fStack_35 = pMVar30->m31;
              fStack_36 = pMVar30->m02;
              fStack_37 = pMVar30->m12;
              fStack_38 = pMVar30->m22;
              fStack_39 = pMVar30->m32;
              VStack_40.x = pMVar30->m03;
              VStack_40.y = pMVar30->m13;
              VStack_40.z = pMVar30->m23;
              fStack_41 = pMVar30->m33;
              if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Graphics);
              }
              matrix_00.m10 = fStack_15;
              matrix_00.m00 = fStack_14;
              matrix_00.m20 = fStack_16;
              matrix_00.m30 = fStack_17;
              matrix_00.m01 = fStack_32;
              matrix_00.m11 = fStack_33;
              matrix_00.m21 = fStack_34;
              matrix_00.m31 = fStack_35;
              matrix_00.m02 = fStack_36;
              matrix_00.m12 = fStack_37;
              matrix_00.m22 = fStack_38;
              matrix_00.m32 = fStack_39;
              matrix_00.m03 = VStack_40.x;
              matrix_00.m13 = VStack_40.y;
              matrix_00.m23 = VStack_40.z;
              matrix_00.m33 = fStack_41;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                        (pMStack_4,matrix_00,(MethodInfo *)0x0);
              pTVar5 = (this->fields)._wireRenderDesc;
              iVar21 = iVar21 + 1;
              fVar11 = uStack_22._4_4_;
            } while (pTVar5 != (TorusShape3D_WireRenderDescriptor *)0x0);
          }
        }
      }
      else {
        fVar11 = (this->fields)._tubeRadius;
        iVar21 = 0;
        uStack_26 = CONCAT44(fVar11,fVar11);
        fStack_25 = 1.0;
        fStack_20 = _UNK_? / (float)(pTVar5->fields)._numTubeSlices;
        do {
          if ((pTVar5->fields)._numTubeSlices <= iVar21) goto code_?;
          fStack_42 = (float)iVar21 * fStack_20 * _UNK_?;
          dVar23 = (double)fStack_42;
          func_?();
          fStack_43 = (float)dVar23;
          dVar23 = (double)fStack_42;
          func_?();
          fStack_44 = (this->fields)._center.z;
          fStack_42 = (float)dVar23;
          uStack_45._0_4_ = (this->fields)._center.x;
          uStack_45._4_4_ = (this->fields)._center.y;
          fStack_46 = (this->fields)._rotation.x;
          fStack_47 = (this->fields)._rotation.y;
          uStack_22._0_4_ = (this->fields)._rotation.z;
          uStack_22._4_4_ = (this->fields)._rotation.w;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          rotation.y = fStack_47;
          rotation.x = fStack_46;
          rotation.z = (float)uStack_22;
          rotation.w = uStack_22._4_4_;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_48,rotation,
                              TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                              (MethodInfo *)0x0);
          uStack_49._0_4_ = pVVar27->x;
          uStack_49._4_4_ = pVVar27->y;
          fStack_50 = pVVar27->z;
          fVar12 = (float)uStack_49._4_4_ * fStack_43;
          fVar13 = fStack_50 * fStack_43;
          fVar11 = (this->fields)._coreRadius;
          fStack_43 = (float)uStack_45 + (float)(undefined4)uStack_49 * fStack_43 * fVar11;
          uStack_22._4_4_ = uStack_45._4_4_ + fVar12 * fVar11;
          fStack_24 = fStack_44 + fVar13 * fVar11;
          fStack_36 = (this->fields)._rotation.x;
          fStack_37 = (this->fields)._rotation.y;
          fStack_38 = (this->fields)._rotation.z;
          fStack_39 = (this->fields)._rotation.w;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          rotation_00.y = fStack_37;
          rotation_00.x = fStack_36;
          rotation_00.z = fStack_38;
          rotation_00.w = fStack_39;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_51,rotation_00,
                              TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                              (MethodInfo *)0x0);
          uStack_52._0_4_ = pVVar27->x;
          uStack_52._4_4_ = pVVar27->y;
          fStack_53 = pVVar27->z;
          fVar11 = (this->fields)._coreRadius;
          fStack_43 = (float)(undefined4)uStack_52 * fStack_42 * fVar11 + fStack_43;
          uStack_22._4_4_ = (float)uStack_52._4_4_ * fStack_42 * fVar11 + uStack_22._4_4_;
          fStack_29 = fStack_53 * fStack_42 * fVar11 + fStack_24;
          uStack_28 = CONCAT44(uStack_22._4_4_,fStack_43);
          uStack_54._0_4_ = (this->fields)._center.x;
          uStack_54._4_4_ = (this->fields)._center.y;
          fStack_55 = (this->fields)._center.z;
          fStack_43 = fStack_43 - (float)(undefined4)uStack_54;
          fStack_24 = uStack_22._4_4_ - (float)uStack_54._4_4_;
          uStack_22._4_4_ = fStack_29 - fStack_55;
          fStack_36 = (this->fields)._rotation.x;
          fStack_37 = (this->fields)._rotation.y;
          fStack_38 = (this->fields)._rotation.z;
          fStack_39 = (this->fields)._rotation.w;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          rotation_01.y = fStack_37;
          rotation_01.x = fStack_36;
          rotation_01.z = fStack_38;
          rotation_01.w = fStack_39;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_40,rotation_01,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          uStack_56._0_4_ = pVVar27->x;
          uStack_56._4_4_ = pVVar27->y;
          fStack_57 = pVVar27->z;
          fStack_8 = (float)uStack_56._4_4_ * fStack_43 - (float)(undefined4)uStack_56 * fStack_24;
          value.y = (float)(undefined4)uStack_56 * uStack_22._4_4_ - fStack_57 * fStack_43;
          value.x = fStack_57 * fStack_24 - (float)uStack_56._4_4_ * uStack_22._4_4_;
          value.z = fStack_8;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             (&VStack_18,value,(MethodInfo *)0x0);
          uStack_22._0_4_ = pVVar27->x;
          uStack_22._4_4_ = pVVar27->y;
          fStack_24 = pVVar27->z;
          fStack_36 = (this->fields)._rotation.x;
          fStack_37 = (this->fields)._rotation.y;
          fStack_38 = (this->fields)._rotation.z;
          fStack_39 = (this->fields)._rotation.w;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          rotation_02.y = fStack_37;
          rotation_02.x = fStack_36;
          rotation_02.z = fStack_38;
          rotation_02.w = fStack_39;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_6,rotation_02,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          forward.z = fStack_24;
          forward.x = (float)uStack_22;
          forward.y = uStack_22._4_4_;
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             (&QStack_10,forward,*pVVar27,(MethodInfo *)0x0);
          pos.z = fStack_29;
          pos.x = (float)(undefined4)uStack_28;
          pos.y = (float)uStack_28._4_4_;
          s.z = fStack_25;
          s.x = (float)uStack_26;
          s.y = uStack_26._4_4_;
          pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             (&MStack_31,pos,*pQVar9,s,(MethodInfo *)0x0);
          fStack_36 = pMVar30->m00;
          fStack_37 = pMVar30->m10;
          fStack_38 = pMVar30->m20;
          fStack_39 = pMVar30->m30;
          fStack_46 = pMVar30->m01;
          fStack_47 = pMVar30->m11;
          uStack_22._0_4_ = pMVar30->m21;
          uStack_22._4_4_ = pMVar30->m31;
          fStack_32 = pMVar30->m02;
          fStack_33 = pMVar30->m12;
          fStack_34 = pMVar30->m22;
          fStack_35 = pMVar30->m32;
          fStack_14 = pMVar30->m03;
          fStack_15 = pMVar30->m13;
          fStack_16 = pMVar30->m23;
          fStack_17 = pMVar30->m33;
          fVar11 = pMVar30->m21;
          fVar12 = pMVar30->m31;
          if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Graphics);
            fVar11 = (float)uStack_22;
            fVar12 = uStack_22._4_4_;
          }
          matrix.m10 = fStack_37;
          matrix.m00 = fStack_36;
          matrix.m20 = fStack_38;
          matrix.m30 = fStack_39;
          matrix.m01 = fStack_46;
          matrix.m11 = fStack_47;
          matrix.m21 = fVar11;
          matrix.m31 = fVar12;
          matrix.m02 = fStack_32;
          matrix.m12 = fStack_33;
          matrix.m22 = fStack_34;
          matrix.m32 = fStack_35;
          matrix.m03 = fStack_14;
          matrix.m13 = fStack_15;
          matrix.m23 = fStack_16;
          matrix.m33 = fStack_17;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                    (pMStack_4,matrix,(MethodInfo *)0x0);
          pTVar5 = (this->fields)._wireRenderDesc;
          iVar21 = iVar21 + 1;
        } while (pTVar5 != (TorusShape3D_WireRenderDescriptor *)0x0);
      }
    }
  }
  func_?();
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* TorusShape3D() */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D__ctor
               (TorusShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TorusShape3D__WireRenderDescriptor);
    cRam_? = '\x01';
  }
  (this->fields)._coreRadius = 1.0;
  (this->fields)._tubeRadius = 1.0;
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
  method_01 = TypeInfo__RTG__TorusShape3D__WireRenderDescriptor;
  value = (TorusShape3D_WireRenderDescriptor *)func_?();
  (value->fields)._wireFlags = 2;
  (value->fields)._numTubeSlices = 0x1e;
  (value->fields)._numAxialSlices = 0x1e;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._wireRenderDesc;
  *(TorusShape3D_WireRenderDescriptor **)method_00 = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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
Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Rotation
          (Quaternion *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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


/* Void set_CoreRadius(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_CoreRadius
               (TorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._coreRadius = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_Rotation
               (TorusShape3D *this,Quaternion value,MethodInfo *method)

{
  (this->fields)._rotation.x = value.x;
  (this->fields)._rotation.y = value.y;
  (this->fields)._rotation.z = value.z;
  (this->fields)._rotation.w = value.w;
  return;
}


/* Void set_TubeRadius(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_TubeRadius
               (TorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._tubeRadius = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_TubeRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_TubeRadiusEps
               (TorusShape3D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}

