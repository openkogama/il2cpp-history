
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_GetAABB
                 (AABB *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

{
  fVar1 = TorusMath::TorusMath_CalcSphereRadius
                    ((this->fields)._coreRadius,(this->fields)._tubeRadius,(MethodInfo *)0x0);
  uVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  pVVar4 = Vector3Ex::Vector3Ex_FromValue
                     ((Vector3 *)&stack0xffffffe8,fVar1 + fVar1,(MethodInfo *)0x0);
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
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    pMStack_7 = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
    pTVar8 = (this->fields)._wireRenderDesc;
    if (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0) {
      if (((pTVar8->fields)._numTubeSlices == 0) || (((pTVar8->fields)._wireFlags & 1) == 0)) {
code_?:
        pTVar8 = (this->fields)._wireRenderDesc;
        if (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0) {
          if (((pTVar8->fields)._numAxialSlices == 0) || (((pTVar8->fields)._wireFlags & 2) == 0)) {
            return;
          }
          VStack_9.x = (this->fields)._rotation.x;
          VStack_9.y = (this->fields)._rotation.y;
          VStack_9.z = (this->fields)._rotation.z;
          fStack_10 = (this->fields)._rotation.w;
          fStack_11 = 0.0;
          euler.y = 0.0;
          euler.z = 0.0;
          euler.x = (float)_UNK_?;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                   Quaternion_Internal_FromEulerRad(&QStack_13,euler,(MethodInfo *)0x0);
          fVar14 = pQVar12->y;
          fVar15 = pQVar12->z;
          VStack_16.y = pQVar12->w;
          fStack_17 = fStack_10;
          fStack_18 = fStack_10;
          fStack_19 = fStack_10;
          fStack_20 = fStack_10;
          VStack_21.x = (VStack_16.y * VStack_9.x + pQVar12->x * fStack_10 + fVar15 * VStack_9.y) -
                         fVar14 * VStack_9.z;
          VStack_21.y = (VStack_9.y * VStack_16.y + fVar14 * fStack_10 + VStack_9.z * pQVar12->x) -
                         fVar15 * VStack_9.x;
          VStack_21.z = (VStack_9.z * VStack_16.y + fVar15 * fStack_10 + fVar14 * VStack_9.x) -
                         VStack_9.y * pQVar12->x;
          fStack_22 = ((VStack_16.y * fStack_10 - VStack_9.x * pQVar12->x) - fVar14 * VStack_9.y) -
                      VStack_9.z * fVar15;
          pTVar8 = (this->fields)._wireRenderDesc;
          VStack_16.x = fStack_22;
          VStack_16.z = VStack_16.y;
          fStack_23 = VStack_16.y;
          fStack_24 = VStack_21.x;
          if (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0) {
            iVar25 = 0;
            fVar14 = _UNK_? / (float)(pTVar8->fields)._numAxialSlices;
            uStack_26 = CONCAT44(fVar14,(float)uStack_26);
            do {
              if ((pTVar8->fields)._numAxialSlices <= iVar25) {
                return;
              }
              fStack_24 = (float)iVar25 * fVar14 * _UNK_?;
              dVar27 = (double)fStack_24;
              func_?();
              fStack_28 = (this->fields)._coreRadius - (float)dVar27 * (this->fields)._tubeRadius;
              dVar27 = (double)fStack_24;
              func_?();
              fStack_29 = (this->fields)._center.z;
              fStack_6 = 1.0;
              fStack_24 = (float)dVar27 * (this->fields)._tubeRadius;
              fStack_4 = fStack_28;
              fStack_5 = fStack_28;
              uStack_30._0_4_ = (this->fields)._center.x;
              uStack_30._4_4_ = (this->fields)._center.y;
              fStack_17 = (this->fields)._rotation.x;
              fStack_18 = (this->fields)._rotation.y;
              fStack_19 = (this->fields)._rotation.z;
              fStack_20 = (this->fields)._rotation.w;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              rotation_03.y = fStack_18;
              rotation_03.x = fStack_17;
              rotation_03.z = fStack_19;
              rotation_03.w = fStack_20;
              pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                 (&VStack_9,rotation_03,
                                  TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                  (MethodInfo *)0x0);
              uStack_32._0_4_ = pVVar31->x;
              uStack_32._4_4_ = pVVar31->y;
              fStack_33 = pVVar31->z;
              fStack_11 = fStack_33 * fStack_24 + fStack_29;
              pos_00.y = (float)uStack_32._4_4_ * fStack_24 + uStack_30._4_4_;
              pos_00.x = (float)(undefined4)uStack_32 * fStack_24 + (float)uStack_30;
              pos_00.z = fStack_11;
              q.y = VStack_21.y;
              q.x = VStack_21.x;
              q.z = VStack_21.z;
              q.w = fStack_22;
              s_00.y = fStack_5;
              s_00.x = fStack_4;
              s_00.z = fStack_6;
              pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                 (&MStack_35,pos_00,q,s_00,(MethodInfo *)0x0);
              fStack_17 = pMVar34->m00;
              fStack_18 = pMVar34->m10;
              fStack_19 = pMVar34->m20;
              fStack_20 = pMVar34->m30;
              fStack_36 = pMVar34->m01;
              fStack_37 = pMVar34->m11;
              fStack_38 = pMVar34->m21;
              fStack_39 = pMVar34->m31;
              fStack_40 = pMVar34->m02;
              fStack_41 = pMVar34->m12;
              fStack_42 = pMVar34->m22;
              fStack_43 = pMVar34->m32;
              VStack_16.x = pMVar34->m03;
              VStack_16.y = pMVar34->m13;
              VStack_16.z = pMVar34->m23;
              fStack_23 = pMVar34->m33;
              if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Graphics);
              }
              matrix_00.m10 = fStack_18;
              matrix_00.m00 = fStack_17;
              matrix_00.m20 = fStack_19;
              matrix_00.m30 = fStack_20;
              matrix_00.m01 = fStack_36;
              matrix_00.m11 = fStack_37;
              matrix_00.m21 = fStack_38;
              matrix_00.m31 = fStack_39;
              matrix_00.m02 = fStack_40;
              matrix_00.m12 = fStack_41;
              matrix_00.m22 = fStack_42;
              matrix_00.m32 = fStack_43;
              matrix_00.m03 = VStack_16.x;
              matrix_00.m13 = VStack_16.y;
              matrix_00.m23 = VStack_16.z;
              matrix_00.m33 = fStack_23;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                        (pMStack_7,matrix_00,(MethodInfo *)0x0);
              pTVar8 = (this->fields)._wireRenderDesc;
              iVar25 = iVar25 + 1;
              fVar14 = uStack_26._4_4_;
            } while (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0);
          }
        }
      }
      else {
        fStack_1 = (this->fields)._tubeRadius;
        fStack_3 = 1.0;
        fStack_2 = fStack_1;
        if (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0) {
          iVar25 = 0;
          fStack_24 = _UNK_? / (float)(pTVar8->fields)._numTubeSlices;
          do {
            if ((pTVar8->fields)._numTubeSlices <= iVar25) goto code_?;
            fVar14 = (float)iVar25 * fStack_24 * _UNK_?;
            dVar27 = (double)fVar14;
            uStack_26._4_4_ = fVar14;
            func_?();
            fStack_44 = (float)dVar27;
            dVar27 = (double)uStack_26._4_4_;
            func_?();
            fStack_45 = (this->fields)._center.z;
            fStack_28 = (float)dVar27;
            uStack_46._0_4_ = (this->fields)._center.x;
            uStack_46._4_4_ = (this->fields)._center.y;
            fStack_47 = (this->fields)._rotation.x;
            fStack_48 = (this->fields)._rotation.y;
            uStack_26._0_4_ = (this->fields)._rotation.z;
            uStack_26._4_4_ = (this->fields)._rotation.w;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            rotation.y = fStack_48;
            rotation.x = fStack_47;
            rotation.z = (float)uStack_26;
            rotation.w = uStack_26._4_4_;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               (&VStack_49,rotation,
                                TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                                (MethodInfo *)0x0);
            uStack_50._0_4_ = pVVar31->x;
            uStack_50._4_4_ = pVVar31->y;
            fStack_51 = pVVar31->z;
            fVar14 = (this->fields)._coreRadius;
            uStack_26._4_4_ = (float)uStack_46 + (float)(undefined4)uStack_50 * fStack_44 * fVar14;
            fStack_52 = uStack_46._4_4_ + (float)uStack_50._4_4_ * fStack_44 * fVar14;
            fStack_44 = fStack_45 + fStack_51 * fStack_44 * fVar14;
            fStack_40 = (this->fields)._rotation.x;
            fStack_41 = (this->fields)._rotation.y;
            fStack_42 = (this->fields)._rotation.z;
            fStack_43 = (this->fields)._rotation.w;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            rotation_00.y = fStack_41;
            rotation_00.x = fStack_40;
            rotation_00.z = fStack_42;
            rotation_00.w = fStack_43;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               (&VStack_53,rotation_00,
                                TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                (MethodInfo *)0x0);
            uStack_54._0_4_ = pVVar31->x;
            uStack_54._4_4_ = pVVar31->y;
            fStack_55 = pVVar31->z;
            fVar14 = (this->fields)._coreRadius;
            fVar15 = uStack_26._4_4_ + (float)(undefined4)uStack_54 * fStack_28 * fVar14;
            fStack_52 = fStack_52 + (float)uStack_54._4_4_ * fStack_28 * fVar14;
            fStack_33 = fStack_44 + fStack_55 * fStack_28 * fVar14;
            uStack_56._0_4_ = (this->fields)._center.x;
            uStack_56._4_4_ = (this->fields)._center.y;
            fStack_57 = (this->fields)._center.z;
            uStack_26._4_4_ = fVar15 - (float)(undefined4)uStack_56;
            uStack_32 = CONCAT44(fStack_52,fVar15);
            fStack_52 = fStack_52 - (float)uStack_56._4_4_;
            fStack_44 = fStack_33 - fStack_57;
            fStack_40 = (this->fields)._rotation.x;
            fStack_41 = (this->fields)._rotation.y;
            fStack_42 = (this->fields)._rotation.z;
            fStack_43 = (this->fields)._rotation.w;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            rotation_01.y = fStack_41;
            rotation_01.x = fStack_40;
            rotation_01.z = fStack_42;
            rotation_01.w = fStack_43;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               (&VStack_21,rotation_01,
                                TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                (MethodInfo *)0x0);
            uStack_30._0_4_ = pVVar31->x;
            uStack_30._4_4_ = pVVar31->y;
            fStack_29 = pVVar31->z;
            fStack_11 = uStack_30._4_4_ * uStack_26._4_4_ - (float)uStack_30 * fStack_52;
            value.y = (float)uStack_30 * fStack_44 - fStack_29 * uStack_26._4_4_;
            value.x = fStack_29 * fStack_52 - uStack_30._4_4_ * fStack_44;
            value.z = fStack_11;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                               (&VStack_16,value,(MethodInfo *)0x0);
            uStack_26._0_4_ = pVVar31->x;
            uStack_26._4_4_ = pVVar31->y;
            fStack_28 = pVVar31->z;
            fStack_40 = (this->fields)._rotation.x;
            fStack_41 = (this->fields)._rotation.y;
            fStack_42 = (this->fields)._rotation.z;
            fStack_43 = (this->fields)._rotation.w;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            rotation_02.y = fStack_41;
            rotation_02.x = fStack_40;
            rotation_02.z = fStack_42;
            rotation_02.w = fStack_43;
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               (&VStack_9,rotation_02,
                                TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                (MethodInfo *)0x0);
            forward.z = fStack_28;
            forward.x = (float)uStack_26;
            forward.y = uStack_26._4_4_;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                               (&QStack_13,forward,*pVVar31,(MethodInfo *)0x0);
            pos.z = fStack_33;
            pos.x = (float)(undefined4)uStack_32;
            pos.y = (float)uStack_32._4_4_;
            s.y = fStack_2;
            s.x = fStack_1;
            s.z = fStack_3;
            pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                               (&MStack_35,pos,*pQVar12,s,(MethodInfo *)0x0);
            fStack_40 = pMVar34->m00;
            fStack_41 = pMVar34->m10;
            fStack_42 = pMVar34->m20;
            fStack_43 = pMVar34->m30;
            fStack_47 = pMVar34->m01;
            fStack_48 = pMVar34->m11;
            uStack_26._0_4_ = pMVar34->m21;
            uStack_26._4_4_ = pMVar34->m31;
            fStack_36 = pMVar34->m02;
            fStack_37 = pMVar34->m12;
            fStack_38 = pMVar34->m22;
            fStack_39 = pMVar34->m32;
            fStack_17 = pMVar34->m03;
            fStack_18 = pMVar34->m13;
            fStack_19 = pMVar34->m23;
            fStack_20 = pMVar34->m33;
            fVar14 = pMVar34->m21;
            fVar15 = pMVar34->m31;
            if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Graphics);
              fVar14 = (float)uStack_26;
              fVar15 = uStack_26._4_4_;
            }
            matrix.m10 = fStack_41;
            matrix.m00 = fStack_40;
            matrix.m20 = fStack_42;
            matrix.m30 = fStack_43;
            matrix.m01 = fStack_47;
            matrix.m11 = fStack_48;
            matrix.m21 = fVar14;
            matrix.m31 = fVar15;
            matrix.m02 = fStack_36;
            matrix.m12 = fStack_37;
            matrix.m22 = fStack_38;
            matrix.m32 = fStack_39;
            matrix.m03 = fStack_17;
            matrix.m13 = fStack_18;
            matrix.m23 = fStack_19;
            matrix.m33 = fStack_20;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                      (pMStack_7,matrix,(MethodInfo *)0x0);
            pTVar8 = (this->fields)._wireRenderDesc;
            iVar25 = iVar25 + 1;
          } while (pTVar8 != (TorusShape3D_WireRenderDescriptor *)0x0);
        }
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
  (this->fields)._wireRenderDesc = value;
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

