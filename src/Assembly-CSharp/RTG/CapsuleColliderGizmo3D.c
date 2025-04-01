
/* Single CalcHeightScale() */

float Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcHeightScale
                (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._targetCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
            CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._targetCollider;
    if (iVar2 == 1) {
      if (pCVar1 != (CapsuleCollider *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar1,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
          return (float)((uint)pVVar4->y & _UNK_?);
        }
      }
    }
    else if (pCVar1 != (CapsuleCollider *)0x0) {
      iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
              CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._targetCollider;
      if (iVar2 == 0) {
        if (pCVar1 != (CapsuleCollider *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pCVar1,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                               ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
            return (float)((uint)pVVar4->x & _UNK_?);
          }
        }
      }
      else if (pCVar1 != (CapsuleCollider *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar1,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
          return (float)((uint)pVVar4->z & _UNK_?);
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single CalcRadiusScale() */

float Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcRadiusScale
                (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._targetCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
      pVVar2 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffe4,*pVVar2,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      pCVar1 = (this->fields)._targetCollider;
      if (pCVar1 != (CapsuleCollider *)0x0) {
        iVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
        if (iVar6 == 1) {
          if (fVar3 <= fVar5) {
            fVar3 = fVar5;
          }
          return fVar3;
        }
        pCVar1 = (this->fields)._targetCollider;
        if (pCVar1 != (CapsuleCollider *)0x0) {
          iVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
          if (iVar6 != 0) {
            if (fVar3 <= (float)uVar4) {
              fVar3 = (float)uVar4;
            }
            return fVar3;
          }
          fVar3 = (float)uVar4;
          if ((float)uVar4 <= fVar5) {
            fVar3 = fVar5;
          }
          return fVar3;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Quaternion CalcRotationByDirection() */

Quaternion *
Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcRotationByDirection
          (Quaternion *__return_storage_ptr__,CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._targetCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
            CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
    if (iVar2 == 1) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar4 = (pQVar3->identityQuaternion).y;
      fVar5 = (pQVar3->identityQuaternion).z;
      fVar6 = (pQVar3->identityQuaternion).w;
      __return_storage_ptr__->x = (pQVar3->identityQuaternion).x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      __return_storage_ptr__->w = fVar6;
      return __return_storage_ptr__;
    }
    pCVar1 = (this->fields)._targetCollider;
    if (pCVar1 != (CapsuleCollider *)0x0) {
      iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
              CapsuleCollider_get_direction(pCVar1,(MethodInfo *)0x0);
      if (iVar2 == 0) {
        fStack_7 = 1.5707964;
        uVar8 = 0;
      }
      else {
        fStack_7 = 0.0;
        uVar8 = _UNK_?;
      }
      euler.y = 0.0;
      euler.x = (float)uVar8;
      euler.z = fStack_7;
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
      fVar4 = pQVar9->y;
      fVar5 = pQVar9->z;
      fVar6 = pQVar9->w;
      __return_storage_ptr__->x = pQVar9->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      __return_storage_ptr__->w = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar10)();
  return pQVar9;
}


/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcScalePivot
                    (Vector3 *__return_storage_ptr__,CapsuleColliderGizmo3D *this,int32_t handleId,
                    MethodInfo *method)

{
  bVar1 = CharacterControllerGizmo3D::CharacterControllerGizmo3D_OwnsHandle
                    ((CharacterControllerGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      ppVStack2 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    unique0x00017200 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = unique0x00017200;
    return __return_storage_ptr__;
  }
  CapsuleColliderGizmo3D_CalcWorldCenter((Vector3 *)&uStack_5,this,(MethodInfo *)0x0);
  pCVar6 = (this->fields)._targetCollider;
  if (pCVar6 == (CapsuleCollider *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  fVar9 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                     (pCVar6,(MethodInfo *)0x0);
  fVar4 = CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
  fVar4 = fVar4 * fVar9;
  pCVar6 = (this->fields)._targetCollider;
  if (pCVar6 == (CapsuleCollider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
            (pCVar6,(MethodInfo *)0x0);
  CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
  pQVar10 = CapsuleColliderGizmo3D_CalcRotationByDirection
                     ((Quaternion *)&stack0xffffffb8,this,(MethodInfo *)0x0);
  fVar9 = pQVar10->x;
  fVar11 = pQVar10->y;
  fVar12 = pQVar10->z;
  fVar13 = pQVar10->w;
  pCVar6 = (this->fields)._targetCollider;
  if (pCVar6 == (CapsuleCollider *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar6,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                      ((Vector3 *)&uStack_5,pTVar14,(MethodInfo *)0x0);
  fVar15 = pVVar8->x;
  __return_storage_ptr__ = (Vector3 *)0x0;
  stack0xffffffe4 = (float)&puStack_16;
  rotation_01.y = fVar11;
  rotation_01.x = fVar9;
  rotation_01.z = fVar12;
  rotation_01.w = fVar13;
  fVar17 = fVar11;
  fVar18 = fVar12;
  fVar19 = fVar13;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&puStack_16,rotation_01,*pVVar8,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar8->x;
  fStack_20 = pVVar8->y;
  fStack_21 = pVVar8->z;
  pCVar6 = (this->fields)._targetCollider;
  if (pCVar6 == (CapsuleCollider *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar6,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&puStack_16,pTVar14,(MethodInfo *)0x0);
  rotation.y = fVar11;
  rotation.x = fVar9;
  rotation.z = fVar12;
  rotation.w = fVar13;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&puStack_22,rotation,*pVVar8,(MethodInfo *)0x0);
  puStack_16 = (undefined *)pVVar8->x;
  unique0x0000a404 = pVVar8->y;
  fVar23 = pVVar8->z;
  pCVar6 = (this->fields)._targetCollider;
  if (pCVar6 == (CapsuleCollider *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar6,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&puStack_22,pTVar14,(MethodInfo *)0x0);
  rotation_00.y = fVar11;
  rotation_00.x = fVar9;
  rotation_00.z = fVar12;
  rotation_00.w = fVar13;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&puStack_22,rotation_00,*pVVar8,(MethodInfo *)0x0);
  pGVar24 = (this->fields)._leftTick;
  if ((pGVar24 == (GizmoCap2D *)0x0) ||
     (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar25->fields)._id) {
code_?:
    fVar17 = fVar17 + (float)uStack_5 * fVar4;
    fRam00000008 = fVar19 + fStack_21 * fVar4;
    fVar18 = fVar18 + fStack_20 * fVar4;
  }
  else {
    pGVar24 = (this->fields)._rightTick;
    if ((pGVar24 == (GizmoCap2D *)0x0) ||
       (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId != (pGVar25->fields)._id) {
      pGVar24 = (this->fields)._topTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        uRam_? = CONCAT44(fVar18 - stack0xffffffe4 * fVar15 * _UNK_?,
                                fVar17 - (float)puStack_16 * fVar15 * _UNK_?);
        fRam00000008 = fVar19 - fVar23 * fVar15 * _UNK_?;
        return (Vector3 *)0x0;
      }
      pGVar24 = (this->fields)._bottomTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        uRam_? = CONCAT44(fVar18 + stack0xffffffe4 * fVar15 * _UNK_?,
                                fVar17 + (float)puStack_16 * fVar15 * _UNK_?);
        fRam00000008 = fVar19 + fVar23 * fVar15 * _UNK_?;
        return (Vector3 *)0x0;
      }
      pGVar24 = (this->fields)._frontTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        uStack_5._0_4_ = pVVar8->x;
        fStack_20 = pVVar8->y;
        fStack_21 = pVVar8->z;
        goto code_?;
      }
      pGVar24 = (this->fields)._backTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
      if (handleId != (pGVar25->fields)._id) goto code_?;
      uStack_5._0_4_ = pVVar8->x;
      fStack_20 = pVVar8->y;
      fStack_21 = pVVar8->z;
    }
    fVar17 = fVar17 - (float)uStack_5 * fVar4;
    fRam00000008 = fVar19 - fStack_21 * fVar4;
    fVar18 = fVar18 - fStack_20 * fVar4;
  }
  uRam_? = CONCAT44(fVar18,fVar17);
  return (Vector3 *)0x0;
}


/* Vector3 CalcWorldCenter() */

Vector3 * Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcWorldCenter
                    (Vector3 *__return_storage_ptr__,CapsuleColliderGizmo3D *this,MethodInfo *method
                    )

{
  pCVar1 = (this->fields)._targetCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._targetCollider;
    if (pCVar1 != (CapsuleCollider *)0x0) {
      pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
               CapsuleCollider_get_center((Vector3 *)&stack0xfffffff0,pCVar1,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                           ((Vector3 *)&stack0xfffffff0,this_00,*pVVar2,(MethodInfo *)0x0);
        fVar3 = pVVar2->y;
        fVar4 = pVVar2->z;
        __return_storage_ptr__->x = pVVar2->x;
        __return_storage_ptr__->y = fVar3;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar5)();
  return pVVar2;
}


/* Single CalcWorldHeight() */

float Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcWorldHeight
                (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetCollider;
  if (this_00 != (CapsuleCollider *)0x0) {
    fVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                      (this_00,(MethodInfo *)0x0);
    fVar2 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single CalcWorldRadius() */

float Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_CalcWorldRadius
                (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetCollider;
  if (this_00 != (CapsuleCollider *)0x0) {
    fVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                      (this_00,(MethodInfo *)0x0);
    fVar2 = CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_IsTargetReady
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._targetCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pCVar1 = (this->fields)._targetCollider;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    bVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_enabled
                      ((Collider *)pCVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pCVar1 = (this->fields)._targetCollider;
    if ((pCVar1 != (CapsuleCollider *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pCVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar2 = (*pcRam_?)();
      return bVar2;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_OnAttached
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_QName::Datatype_QName_get_TypeCode
                     ((Datatype_QName *)0x0,unaff_EDI);
  pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
  GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  ppGVar4 = &(this->fields)._leftTick;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  pGVar5 = (GizmoCap3D *)(this->fields)._leftTick;
  if (pGVar5 == (GizmoCap3D *)0x0) {
code_?:
    func_?();
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  else {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
             Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,in_stack_7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._rightTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pGVar5 = (GizmoCap3D *)(this->fields)._rightTick;
    if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
             Datatype_base64Binary_get_TypeCode((Datatype_base64Binary *)0x0,in_stack_7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._topTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pGVar5 = (GizmoCap3D *)(this->fields)._topTick;
    if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::Datatype_NOTATION_get_TypeCode
                       ((Datatype_NOTATION *)0x0,in_stack_7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._bottomTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pGVar5 = (GizmoCap3D *)(this->fields)._bottomTick;
    if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_normalizedStringV1Compat::
             Datatype_normalizedStringV1Compat_get_TypeCode
                       ((Datatype_normalizedStringV1Compat *)0x0,in_stack_7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    method_00 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._backTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pGVar5 = (GizmoCap3D *)(this->fields)._backTick;
    if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    handleId = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    pGVar8 = TypeInfo__RTG__GizmoCap2D;
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    method_01 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,handleId,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._frontTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pGVar5 = (GizmoCap3D *)(this->fields)._frontTick;
    if (pGVar5 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar5,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_00);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 3) goto code_?;
    pCVar9->vector[2] = pCVar10;
    func_?(pCVar9->vector + 2,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 3) goto code_?;
    pGVar3 = (this->fields)._leftTick;
    if (pCVar9->vector[2] == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[2]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 4) goto code_?;
    pCVar9->vector[3] = pCVar10;
    func_?(pCVar9->vector + 3,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 4) goto code_?;
    pGVar3 = (this->fields)._rightTick;
    if (pCVar9->vector[3] == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[3]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 6) goto code_?;
    pCVar9->vector[5] = pCVar10;
    func_?(pCVar9->vector + 5,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 6) goto code_?;
    pGVar3 = (this->fields)._topTick;
    if (pCVar9->vector[5] == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[5]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 5) goto code_?;
    pCVar9->vector[4] = pCVar10;
    func_?(pCVar9->vector + 4,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 5) goto code_?;
    pGVar3 = (this->fields)._bottomTick;
    if (pCVar9->vector[4] == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[4]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length == 0) goto code_?;
    pCVar9->vector[0] = pCVar10;
    func_?(pCVar9->vector,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length == 0) goto code_?;
    pGVar3 = (this->fields)._frontTick;
    if (pCVar9->vector[0] == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[0]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) ||
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 != 0)) {
      if (pCVar9->max_length < 2) goto code_?;
      pCVar9->vector[1] = pCVar10;
      func_?(pCVar9->vector + 1,pCVar10);
      pCVar9 = (this->fields)._extentTicks;
      if (pCVar9 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
        if (pCVar9->max_length < 2) goto code_?;
        pGVar3 = (this->fields)._backTick;
        if (pCVar9->vector[1] != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
          ppGVar4 = &(pCVar9->vector[1]->fields).Tick;
          *ppGVar4 = pGVar3;
          func_?(ppGVar4,pGVar3);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar6 = (pVVar12->zeroVector).x;
          uVar13 = (pVVar12->zeroVector).y;
          fVar14 = (pVVar12->zeroVector).z;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar15 = (pVVar12->rightVector).x;
          uVar16 = (pVVar12->rightVector).y;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3,pGVar8,
                            uVar15 ^ 
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ,uVar16 ^ 
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ,(uint)(pVVar12->rightVector).z ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                           );
            cRam_? = '\x01';
          }
          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffe8,
                               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                               (MethodInfo *)0x0);
          VVar18.y = (float)uVar13;
          VVar18.x = (float)uVar6;
          VVar18.z = fVar14;
          arcStartPoint.z = 1.4013e-43;
          arcStartPoint.x = -180.0;
          arcStartPoint.y = 0.0;
          arcPlane.m_Distance = 0.0;
          arcPlane.m_Normal = *pVVar17;
          pLVar19 = PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
                              (VVar18,arcStartPoint,arcPlane,-180.0,0,100,(MethodInfo *)0x0);
          ppLVar20 = &(this->fields)._semiCirclePts;
          *ppLVar20 = pLVar19;
          func_?(ppLVar20);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          VVar18 = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar21 = (pVVar12->rightVector).x;
          uVar22 = (pVVar12->rightVector).y;
          fVar14 = (pVVar12->rightVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          circleRight.y = (float)uVar22;
          circleRight.x = (float)uVar21;
          circleRight.z = fVar14;
          fStack23 = fVar14;
          pLVar19 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                              (VVar18,1.0,circleRight,
                               TypeInfo__UnityEngine__Vector3->static_fields->upVector,100,
                               (MethodInfo *)0x0);
          (this->fields)._circlePts = pLVar19;
          func_?();
          CharacterControllerGizmo3D::CharacterControllerGizmo3D_SetupSharedLookAndFeel
                    ((CharacterControllerGizmo3D *)this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::
     CapsuleColliderGizmo3D_OnGizmoAttemptHandleDragBegin
               (CapsuleColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = CapsuleColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._preChangeColliderSnapshot;
  if (this_00 == (CapsuleCollider3DSnapshot *)0x0) goto code_?;
  CapsuleCollider3DSnapshot::CapsuleCollider3DSnapshot_Snapshot
            (this_00,(this->fields)._targetCollider,(MethodInfo *)0x0);
  bVar1 = CharacterControllerGizmo3D::CharacterControllerGizmo3D_OwnsHandle
                     ((CharacterControllerGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pCVar2 = (this->fields)._targetCollider;
  if (pCVar2 == (CapsuleCollider *)0x0) goto code_?;
  fVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                    (pCVar2,(MethodInfo *)0x0);
  (this->fields)._heightOnDragBegin = fVar3;
  pVVar4 = CapsuleColliderGizmo3D_CalcWorldCenter((Vector3 *)&puStack_5,this,(MethodInfo *)0x0);
  fVar6 = pVVar4->y;
  fVar3 = pVVar4->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar4->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar6;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar3;
  pCVar7 = (this->fields)._sharedSettings;
  if ((pCVar7 == (CapsuleColliderGizmo3DSettings *)0x0) &&
     (pCVar7 = (this->fields)._settings, pCVar7 == (CapsuleColliderGizmo3DSettings *)0x0))
  goto code_?;
  (this->fields)._offsetDragWorkData.SnapStep = (pCVar7->fields)._radiusSnapStep;
  stack0xffffffc8 = (float)&fStack_8;
  pQVar9 = CapsuleColliderGizmo3D_CalcRotationByDirection
                      ((Quaternion *)&fStack_8,this,(MethodInfo *)0x0);
  fStack_8 = pQVar9->x;
  fStack_10 = pQVar9->y;
  puStack_11 = (undefined *)pQVar9->z;
  fVar3 = pQVar9->w;
  pCVar2 = (this->fields)._targetCollider;
  if ((pCVar2 == (CapsuleCollider *)0x0) ||
     (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar2,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                      ((Vector3 *)&puStack_5,pTVar12,(MethodInfo *)0x0);
  rotation_01.y = fStack_10;
  rotation_01.x = fStack_8;
  rotation_01.z = (float)puStack_11;
  rotation_01.w = fVar3;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffd0,rotation_01,*pVVar4,(MethodInfo *)0x0);
  puStack_5 = (undefined *)pVVar4->x;
  unique0x0000a404 = pVVar4->y;
  fVar6 = pVVar4->z;
  pCVar2 = (this->fields)._targetCollider;
  if ((pCVar2 == (CapsuleCollider *)0x0) ||
     (fVar13 = (float)puStack_5, fVar14 = unique0x0000a404, fVar15 = fVar6,
     pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pCVar2,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffd0,pTVar12,(MethodInfo *)0x0);
  rotation.y = fStack_10;
  rotation.x = fStack_8;
  rotation.z = (float)puStack_11;
  rotation.w = fVar3;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffb8,rotation,*pVVar4,(MethodInfo *)0x0);
  fVar16 = pVVar4->x;
  fVar17 = pVVar4->y;
  fVar18 = pVVar4->z;
  pCVar2 = (this->fields)._targetCollider;
  if ((pCVar2 == (CapsuleCollider *)0x0) ||
     (fVar19 = fVar18, fVar20 = fVar16, fVar21 = fVar17,
     pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pCVar2,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
  goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffb8,pTVar12,(MethodInfo *)0x0);
  rotation_00.y = fStack_10;
  rotation_00.x = fStack_8;
  rotation_00.z = (float)puStack_11;
  rotation_00.w = fVar3;
  puVar22 = (undefined *)fVar16;
  fVar3 = fVar17;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffb8,rotation_00,*pVVar4,(MethodInfo *)0x0);
  pGVar23 = (this->fields)._leftTick;
  fVar16 = pVVar4->z;
  fVar17 = pVVar4->y;
  if ((pGVar23 == (GizmoCap2D *)0x0) ||
     (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar24->fields)._id) {
    fVar3 = stack0xffffffc8;
    puVar22 = puStack_5;
    fVar19 = fVar6;
    goto code_?;
  }
  pGVar23 = (this->fields)._rightTick;
  if ((pGVar23 == (GizmoCap2D *)0x0) ||
     (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar24->fields)._id) {
    (this->fields)._offsetDragWorkData.Axis.x = fVar13;
    (this->fields)._offsetDragWorkData.Axis.y = fVar14;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar15;
  }
  else {
    pGVar23 = (this->fields)._topTick;
    if ((pGVar23 == (GizmoCap2D *)0x0) ||
       (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar24->fields)._id) {
      (this->fields)._offsetDragWorkData.Axis.x = fVar20;
      (this->fields)._offsetDragWorkData.Axis.y = fVar21;
      fVar15 = fVar18;
      goto code_?;
    }
    pGVar23 = (this->fields)._bottomTick;
    if ((pGVar23 == (GizmoCap2D *)0x0) ||
       (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar24->fields)._id) {
code_?:
      uVar25 = (uint)fVar3 ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar15 = (float)((uint)fVar19 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)((uint)puVar22 ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar25;
      goto code_?;
    }
    pGVar23 = (this->fields)._frontTick;
    if ((pGVar23 == (GizmoCap2D *)0x0) ||
       (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar24->fields)._id) {
      puVar22 = (undefined *)pVVar4->x;
      fVar3 = pVVar4->y;
      fVar19 = pVVar4->z;
      goto code_?;
    }
    pGVar23 = (this->fields)._backTick;
    if ((pGVar23 == (GizmoCap2D *)0x0) ||
       (pGVar24 = (pGVar23->fields)._._handle, pGVar24 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar24->fields)._id) {
      (this->fields)._offsetDragWorkData.Axis.x = pVVar4->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar17;
      fVar15 = fVar16;
      goto code_?;
    }
  }
  this_01 = (this->fields)._offsetDrag;
  if (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
              (this_01,(this->fields)._offsetDragWorkData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_OnGizmoDragEnd
               (CapsuleColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CapsuleCollider3DChangedAction);
    cRam_? = '\x01';
  }
  bVar1 = CharacterControllerGizmo3D::CharacterControllerGizmo3D_OwnsHandle
                    ((CharacterControllerGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  method_02 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
  if (method_02 != (MethodInfo *)0x0) {
    CapsuleCollider3DSnapshot::CapsuleCollider3DSnapshot_Snapshot
              ((CapsuleCollider3DSnapshot *)method_02,(this->fields)._targetCollider,
               (MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields)._preChangeColliderSnapshot;
    pCVar2 = (this->fields)._postChangeColliderSnapshot;
    value = (Object *)func_?(TypeInfo__RTG__CapsuleCollider3DChangedAction);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,method_00);
    value_00 = (Object__Class *)func_?();
    method_01 = value_00;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_02);
    if (method_00 != (MethodInfo *)0x0) {
      ppcVar3 = &(value_00->_0).name;
      *ppcVar3 = (char *)method_00->invoker_method;
      func_?(ppcVar3);
      pIVar4 = method_00->klass;
      pIVar5 = method_00->return_type;
      (value_00->_0).namespaze = method_00->name;
      (value_00->_0).byval_arg.data = (_union_86)pIVar4;
      *(Il2CppType **)&(value_00->_0).byval_arg.attrs = pIVar5;
      (value_00->_0).this_arg.data = (_union_86)method_00->parameters;
      *(_union_154 *)&(value_00->_0).this_arg.attrs = method_00->field7_0x1c;
      value[1].klass = value_00;
      func_?(value + 1,value_00);
      value_01 = (Object *)func_?(TypeInfo__RTG__CapsuleCollider3DSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (pCVar2 != (CapsuleCollider3DSnapshot *)0x0) {
        value_01[1].klass = (Object__Class *)(pCVar2->fields)._capsuleCollider;
        func_?(value_01 + 1);
        pMVar6 = (MonitorData *)(pCVar2->fields)._localCenter.z;
        *(undefined8 *)&value_01[1].monitor = *(undefined8 *)&(pCVar2->fields)._localCenter;
        value_01[2].monitor = pMVar6;
        value_01[3].klass = (Object__Class *)(pCVar2->fields)._localRadius;
        value_01[3].monitor = (MonitorData *)(pCVar2->fields)._localHeight;
        value[1].monitor = (MonitorData *)value_01;
        func_?(&value[1].monitor,value_01);
        if (cRam_? == '\0') {
          func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
          func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
          cRam_? = '\x01';
        }
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
        }
        this_00 = (RTUndoRedo *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
        if (this_00 != (RTUndoRedo *)0x0) {
          RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_OnGizmoDragUpdate
               (CapsuleColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = CapsuleColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = CharacterControllerGizmo3D::CharacterControllerGizmo3D_OwnsHandle
                     ((CharacterControllerGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._offsetDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    pCVar3 = (this->fields)._sharedHotkeys;
    if (((pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) &&
        (pCVar3 = (this->fields)._hotkeys, pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0)) ||
       (pHVar4 = (pCVar3->fields)._enableSnapping, pHVar4 == (Hotkeys *)0x0))
    goto code_?;
    bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    pGVar5 = (this->fields)._bottomTick;
    if ((pGVar5 == (GizmoCap2D *)0x0) ||
       (pGVar6 = (pGVar5->fields)._._handle, pGVar6 == (GizmoHandle *)0x0))
    goto code_?;
    if (handleId != (pGVar6->fields)._id) {
      pGVar5 = (this->fields)._topTick;
      if ((pGVar5 == (GizmoCap2D *)0x0) ||
         (pGVar6 = (pGVar5->fields)._._handle, pGVar6 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId != (pGVar6->fields)._id) {
        fVar7 = CapsuleColliderGizmo3D_CalcWorldRadius(this,(MethodInfo *)0x0);
        pGVar8 = (this->fields)._._gizmo;
        if (pGVar8 == (Gizmo *)0x0) goto code_?;
        Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&stack0xffffffcc,pGVar8,(MethodInfo *)0x0);
        fVar9 = (float10)func_?();
        pGVar8 = (this->fields)._._gizmo;
        fVar10 = (float)fVar9;
        if (pGVar8 == (Gizmo *)0x0) goto code_?;
        pVVar11 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffd8,pGVar8,(MethodInfo *)0x0);
        uVar12._0_4_ = pVVar11->x;
        uVar12._4_4_ = pVVar11->y;
        fVar13 = pVVar11->z;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
        pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                            ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
        uVar14 = pVVar11->x;
        uVar15 = pVVar11->y;
        fVar16 = _UNK_?;
        if (0.0 <= (float)uVar15 * SUB84(uVar12,4) + (float)uVar14 * (float)uVar12 +
                   pVVar11->z * fVar13) {
          fVar16 = _UNK_?;
        }
        fVar7 = fVar16 * fVar10 + fVar7;
        fVar10 = 0.0;
        if (0.0 <= fVar7) {
          fVar10 = fVar7;
        }
        pVVar11 = CapsuleColliderGizmo3D_CalcScalePivot
                            ((Vector3 *)&stack0xffffffc0,this,handleId,(MethodInfo *)0x0);
        uVar17._0_4_ = pVVar11->x;
        uVar17._4_4_ = pVVar11->y;
        fVar7 = pVVar11->z;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
        pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                            ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
        uVar18 = pVVar11->x;
        uVar19 = pVVar11->y;
        uVar20._4_4_ = SUB84(uVar17,4) + (float)uVar19 * fVar10;
        uVar20._0_4_ = (float)uVar17 + (float)uVar18 * fVar10;
        fVar7 = fVar7 + pVVar11->z * fVar10;
        pCVar3 = (this->fields)._sharedHotkeys;
        if (((pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) &&
            (pCVar3 = (this->fields)._hotkeys, pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0)) ||
           (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 == (Hotkeys *)0x0))
        goto code_?;
        bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
        if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
          pCVar21 = (this->fields)._targetCollider;
          if ((pCVar21 == (CapsuleCollider *)0x0) ||
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar21,(MethodInfo *)0x0),
             pTVar22 == (Transform *)0x0)) goto code_?;
          position_00.z = fVar7;
          position_00.x = (float)uVar20;
          position_00.y = SUB84(uVar20,4);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&stack0xffffffc0,pTVar22,position_00,(MethodInfo *)0x0);
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_center
                    (pCVar21,*pVVar11,(MethodInfo *)0x0);
        }
        pCVar21 = (this->fields)._targetCollider;
        fVar7 = CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
        if (pCVar21 == (CapsuleCollider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_radius
                  (pCVar21,fVar10 / fVar7,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetCollider;
        if (pCVar21 == (CapsuleCollider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                  (pCVar21,(this->fields)._heightOnDragBegin,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetCollider;
        if (pCVar21 == (CapsuleCollider *)0x0) goto code_?;
        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_height(pCVar21,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetCollider;
        if (pCVar21 == (CapsuleCollider *)0x0) goto code_?;
        fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_radius(pCVar21,(MethodInfo *)0x0);
        if (fVar7 < fVar10 + fVar10) {
          pCVar21 = (this->fields)._targetCollider;
          if (pCVar21 != (CapsuleCollider *)0x0) {
            fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                     CapsuleCollider_get_radius(pCVar21,(MethodInfo *)0x0);
            UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                      (pCVar21,fVar7 * _UNK_?,(MethodInfo *)0x0);
            CapsuleColliderGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    pCVar21 = (this->fields)._targetCollider;
    if (pCVar21 != (CapsuleCollider *)0x0) {
      fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
               CapsuleCollider_get_height(pCVar21,(MethodInfo *)0x0);
      fVar7 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
      fVar7 = fVar7 * fVar10;
      pGVar8 = (this->fields)._._gizmo;
      if (pGVar8 != (Gizmo *)0x0) {
        Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&stack0xffffffc0,pGVar8,(MethodInfo *)0x0);
        fVar9 = (float10)func_?();
        pGVar8 = (this->fields)._._gizmo;
        fVar10 = (float)fVar9;
        if (pGVar8 != (Gizmo *)0x0) {
          pVVar11 = Gizmo::Gizmo_get_RelativeDragOffset
                              ((Vector3 *)&stack0xffffffc0,pGVar8,(MethodInfo *)0x0);
          uVar23._0_4_ = pVVar11->x;
          uVar23._4_4_ = pVVar11->y;
          fVar13 = pVVar11->z;
          pGVar2 = (this->fields)._offsetDrag;
          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
            pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
            uVar24 = pVVar11->x;
            uVar25 = pVVar11->y;
            fVar16 = _UNK_?;
            if (0.0 <= (float)uVar25 * SUB84(uVar23,4) + (float)uVar24 * (float)uVar23 +
                       pVVar11->z * fVar13) {
              fVar16 = _UNK_?;
            }
            fVar7 = fVar16 * fVar10 + fVar7;
            fVar10 = 0.0;
            if (0.0 <= fVar7) {
              fVar10 = fVar7;
            }
            fVar13 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
            fVar13 = fVar10 / fVar13;
            pVVar11 = CapsuleColliderGizmo3D_CalcScalePivot
                                ((Vector3 *)&stack0xffffffc0,this,handleId,(MethodInfo *)0x0);
            uVar26._0_4_ = pVVar11->x;
            uVar26._4_4_ = pVVar11->y;
            fVar7 = pVVar11->z;
            pGVar2 = (this->fields)._offsetDrag;
            if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                  ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
              uVar27 = pVVar11->x;
              uVar28 = pVVar11->y;
              fVar29 = (float)uVar26 + (float)uVar27 * fVar10 * _UNK_?;
              fVar16 = SUB84(uVar26,4) + (float)uVar28 * fVar10 * _UNK_?;
              fVar7 = fVar7 + pVVar11->z * fVar10 * _UNK_?;
              pCVar3 = (this->fields)._sharedHotkeys;
              if (((pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0) ||
                  (pCVar3 = (this->fields)._hotkeys,
                  pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0)) &&
                 (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
                bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                  pCVar21 = (this->fields)._targetCollider;
                  if ((pCVar21 == (CapsuleCollider *)0x0) ||
                     (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar21,(MethodInfo *)0x0),
                     pTVar22 == (Transform *)0x0)) goto code_?;
                  position_01.y = fVar16;
                  position_01.x = fVar29;
                  position_01.z = fVar7;
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_InverseTransformPoint
                                      ((Vector3 *)&stack0xffffffc0,pTVar22,position_01,
                                       (MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_center(pCVar21,*pVVar11,(MethodInfo *)0x0);
                }
                pCVar21 = (this->fields)._targetCollider;
                if (pCVar21 != (CapsuleCollider *)0x0) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_height(pCVar21,fVar13,(MethodInfo *)0x0);
                  pCVar21 = (this->fields)._targetCollider;
                  if (pCVar21 != (CapsuleCollider *)0x0) {
                    fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                             CapsuleCollider_get_height(pCVar21,(MethodInfo *)0x0);
                    pCVar21 = (this->fields)._targetCollider;
                    if (pCVar21 != (CapsuleCollider *)0x0) {
                      fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                               CapsuleCollider_get_radius(pCVar21,(MethodInfo *)0x0);
                      if (fVar10 + fVar10 <= fVar7) goto code_?;
                      pCVar21 = (this->fields)._targetCollider;
                      if (pCVar21 != (CapsuleCollider *)0x0) {
                        puVar30 = &UNK_?;
                        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                 CapsuleCollider_get_radius(pCVar21,(MethodInfo *)0x0);
                        fVar7 = fVar7 * _UNK_?;
                        fVar10 = 0.0;
                        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                        CapsuleCollider_set_height(pCVar21,fVar7,(MethodInfo *)0x0);
                        pCVar21 = (this->fields)._targetCollider;
                        if (pCVar21 != (CapsuleCollider *)0x0) {
                          fVar16 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                   CapsuleCollider_get_height(pCVar21,(MethodInfo *)0x0);
                          fVar13 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
                          fVar13 = fVar13 * fVar16;
                          pGVar2 = (this->fields)._offsetDrag;
                          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                            pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                                ((Vector3 *)&stack0xffffffc0,pGVar2,
                                                 (MethodInfo *)0x0);
                            uVar31 = pVVar11->x;
                            uVar32 = pVVar11->y;
                            fVar13 = fVar13 - 4.1500883e-29;
                            fVar16 = pVVar11->z * fVar13 * _UNK_? + (float)puVar30;
                            uVar33._4_4_ = (float)uVar32 * fVar13 * _UNK_? + fVar7;
                            uVar33._0_4_ = (float)uVar31 * fVar13 * _UNK_? + fVar10;
                            pCVar3 = (this->fields)._sharedHotkeys;
                            if (((pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0) ||
                                (pCVar3 = (this->fields)._hotkeys,
                                pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0)) &&
                               (pHVar4 = (pCVar3->fields)._scaleFromCenter,
                               pHVar4 != (Hotkeys *)0x0)) {
                              bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                              if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                                pCVar21 = (this->fields)._targetCollider;
                                if ((pCVar21 == (CapsuleCollider *)0x0) ||
                                   (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)pCVar21,(MethodInfo *)0x0),
                                   pTVar22 == (Transform *)0x0)) goto code_?;
                                position.z = fVar16;
                                position.x = (float)uVar33;
                                position.y = SUB84(uVar33,4);
                                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_InverseTransformPoint
                                                    ((Vector3 *)&stack0xffffffc0,pTVar22,position,
                                                     (MethodInfo *)0x0);
                                UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                CapsuleCollider_set_center(pCVar21,*pVVar11,(MethodInfo *)0x0);
                              }
code_?:
                              CapsuleColliderGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_OnGizmoRender
               (CapsuleColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = CapsuleColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_00 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_00 != (RTGizmosEngine *)0x0) {
    iVar2 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_00,(MethodInfo *)0x0);
    if (1 < iVar2) {
      CapsuleColliderGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
    }
    pVVar3 = CapsuleColliderGizmo3D_CalcWorldCenter(&VStack_4,this,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fStack_6 = pVVar3->z;
    pCVar7 = (this->fields)._targetCollider;
    if (pCVar7 != (CapsuleCollider *)0x0) {
      fStack_8 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_get_radius(pCVar7,(MethodInfo *)0x0);
      fVar9 = CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      fVar9 = fVar9 * fStack_8;
      pCVar7 = (this->fields)._targetCollider;
      fStack_8 = fVar9;
      if (pCVar7 != (CapsuleCollider *)0x0) {
        fStack_8 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                    CapsuleCollider_get_height(pCVar7,(MethodInfo *)0x0);
        fVar10 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        fStack_8 = fVar10 * fStack_8;
        pQVar11 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff20,this,(MethodInfo *)0x0);
        pSStack_12 = (Singleton_1_GizmoLineMaterial___Class *)pQVar11->x;
        fStack_13 = pQVar11->y;
        fStack_14 = pQVar11->z;
        fStack_15 = pQVar11->w;
        fVar10 = pQVar11->x;
        fVar16 = pQVar11->y;
        fVar17 = pQVar11->z;
        fVar18 = pQVar11->w;
        pCVar7 = (this->fields)._targetCollider;
        if ((pCVar7 != (CapsuleCollider *)0x0) &&
           (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar7,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0
           )) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&VStack_4,pTVar19,(MethodInfo *)0x0);
          rotation.y = fVar16;
          rotation.x = fVar10;
          rotation.z = fVar17;
          rotation.w = fVar18;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&VStack_4,rotation,*pVVar3,(MethodInfo *)0x0);
          uStack_20._0_4_ = pVVar3->x;
          uStack_20._4_4_ = pVVar3->y;
          fStack_21 = pVVar3->z;
          pCVar7 = (this->fields)._targetCollider;
          if ((pCVar7 != (CapsuleCollider *)0x0) &&
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar7,(MethodInfo *)0x0),
             pTVar19 != (Transform *)0x0)) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (&VStack_4,pTVar19,(MethodInfo *)0x0);
            rotation_00.y = fStack_13;
            rotation_00.x = (float)pSStack_12;
            rotation_00.z = fStack_14;
            rotation_00.w = fStack_15;
            UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&VStack_4,rotation_00,*pVVar3,(MethodInfo *)0x0);
            pCVar7 = (this->fields)._targetCollider;
            if ((pCVar7 != (CapsuleCollider *)0x0) &&
               (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar7,(MethodInfo *)0x0),
               pTVar19 != (Transform *)0x0)) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  (&VStack_4,pTVar19,(MethodInfo *)0x0);
              rotation_01.y = fStack_13;
              rotation_01.x = (float)pSStack_12;
              rotation_01.z = fStack_14;
              rotation_01.w = fStack_15;
              pSVar22 = pSStack_12;
              fVar18 = fStack_13;
              fVar23 = fStack_14;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_op_Multiply_1(&VStack_4,rotation_01,*pVVar3,(MethodInfo *)0x0);
              fVar10 = pVVar3->x;
              fVar16 = pVVar3->y;
              fVar17 = pVVar3->z;
              if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor
                  == 0) {
                pSStack_12 = TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>;
                func_?();
              }
              pSStack_12 = (Singleton_1_GizmoLineMaterial___Class *)
                           MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__;
              this_01 = (GizmoLineMaterial *)func_?();
              if (this_01 != (GizmoLineMaterial *)0x0) {
                GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                          (this_01,(MethodInfo *)0x0);
                pCVar24 = (this->fields)._sharedLookAndFeel;
                if ((pCVar24 != (CapsuleColliderGizmo3DLookAndFeel *)0x0) ||
                   (pCVar24 = (this->fields)._lookAndFeel,
                   pCVar24 != (CapsuleColliderGizmo3DLookAndFeel *)0x0)) {
                  GizmoLineMaterial::GizmoLineMaterial_SetColor
                            (this_01,(pCVar24->fields)._wireColor,(MethodInfo *)0x0);
                  GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                  puStack_25 = (undefined *)(fStack_8 - (fVar9 + fVar9));
                  fVar26 = (float)uStack_5;
                  if (0.0 < (float)puStack_25) {
                    fStack_27 = (float)uStack_20 * fVar9;
                    fStack_28 = uStack_20._4_4_ * fVar9;
                    fStack_29 = fStack_21 * fVar9;
                    QStack_30.x = (float)pSVar22 * (float)puStack_25;
                    fStack_31 = fVar18 * (float)puStack_25;
                    fStack_32 = fVar23 * (float)puStack_25;
                    QStack_30.y = 0.0;
                    QStack_30.z = 0.0;
                    QStack_30.w = 0.0;
                    VStack_4.z = (fStack_6 - fStack_29) - fStack_32 * _UNK_?;
                    fStack_21 = fStack_32 * _UNK_? + (fStack_6 - fStack_29);
                    endPoint.y = fStack_31 * _UNK_? + (uStack_5._4_4_ - fStack_28);
                    endPoint.x = QStack_30.x * _UNK_? + ((float)uStack_5 - fStack_27);
                    startPoint.y = (uStack_5._4_4_ - fStack_28) - fStack_31 * _UNK_?;
                    startPoint.x = ((float)uStack_5 - fStack_27) - QStack_30.x * _UNK_?;
                    startPoint.z = VStack_4.z;
                    endPoint.z = fStack_21;
                    GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
                    fStack_21 = (fStack_6 + fStack_29) - fStack_32 * _UNK_?;
                    VStack_4.z = fStack_32 * _UNK_? + fStack_6 + fStack_29;
                    endPoint_00.y = fStack_31 * _UNK_? + uStack_5._4_4_ + fStack_28;
                    endPoint_00.x = QStack_30.x * _UNK_? + fVar26 + fStack_27;
                    startPoint_00.y = (uStack_5._4_4_ + fStack_28) - fStack_31 * _UNK_?;
                    startPoint_00.x = (fVar26 + fStack_27) - QStack_30.x * _UNK_?;
                    startPoint_00.z = fStack_21;
                    endPoint_00.z = VStack_4.z;
                    GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0);
                    puStack_25 = (undefined *)(fVar10 * fVar9);
                    fStack_28 = fVar16 * fVar9;
                    fStack_29 = fVar17 * fVar9;
                    VStack_4.z = fStack_32 * _UNK_? + (fStack_6 - fStack_29);
                    endPoint_01.y = fStack_31 * _UNK_? + (uStack_5._4_4_ - fStack_28);
                    endPoint_01.x = QStack_30.x * _UNK_? + (fVar26 - (float)puStack_25);
                    startPoint_01.y = (uStack_5._4_4_ - fStack_28) - fStack_31 * _UNK_?;
                    startPoint_01.x = (fVar26 - (float)puStack_25) - QStack_30.x * _UNK_?;
                    startPoint_01.z = (fStack_6 - fStack_29) - fStack_32 * _UNK_?;
                    endPoint_01.z = VStack_4.z;
                    GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0);
                    VStack_4.z = fStack_32 * _UNK_? + fStack_6 + fStack_29;
                    startPoint_02.y = (uStack_5._4_4_ + fStack_28) - fStack_31 * _UNK_?;
                    startPoint_02.x = (fVar26 + (float)puStack_25) - QStack_30.x * _UNK_?;
                    startPoint_02.z = (fStack_6 + fStack_29) - fStack_32 * _UNK_?;
                    endPoint_02.y = fStack_31 * _UNK_? + uStack_5._4_4_ + fStack_28;
                    endPoint_02.x = QStack_30.x * _UNK_? + fVar26 + (float)puStack_25;
                    endPoint_02.z = VStack_4.z;
                    GLRenderer::GLRenderer_DrawLine3D(startPoint_02,endPoint_02,(MethodInfo *)0x0);
                  }
                  VStack_4.z = 1.0;
                  fStack_27 = fStack_8 * _UNK_? - fVar9;
                  fVar33 = fVar26 + (float)pSVar22 * fStack_27;
                  fStack_28 = uStack_5._4_4_ + fVar18 * fStack_27;
                  fVar34 = fStack_6 + fVar23 * fStack_27;
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  fVar35 = VStack_4.z;
                  pos.y = fStack_28;
                  pos.x = fVar33;
                  pos.z = fVar34;
                  q.y = fStack_13;
                  q.x = (float)pSStack_12;
                  q.z = fStack_14;
                  q.w = fStack_15;
                  s.y = fVar9;
                  s.x = fVar9;
                  s.z = VStack_4.z;
                  fVar36 = fVar9;
                  fVar37 = fVar9;
                  fVar38 = fStack_28;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos,q,s,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D
                            ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  VStack_4.z = 0.0;
                  auVar40._4_8_ = 0;
                  auVar40._0_4_ = _UNK_?;
                  fVar41 = _UNK_?;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff30,(Vector3)(auVar40 << 0x20),
                                       (MethodInfo *)0x0);
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar42 = pQVar11->w;
                  fStack_43 = fStack_15;
                  uStack_20 = CONCAT44(fStack_15,fStack_15);
                  fStack_21 = fStack_15;
                  QStack_30.x = ((float)pSStack_12 * fVar42 + fStack_15 * fVar10 + fStack_13 * fVar17
                                ) - fStack_14 * fVar16;
                  QStack_30.y = (fStack_15 * fVar16 + fStack_13 * fVar42 + fStack_14 * fVar10) -
                                (float)pSStack_12 * fVar17;
                  QStack_30.z = (fStack_15 * fVar17 + fStack_14 * fVar42 + (float)pSStack_12 * fVar16
                                ) - fStack_13 * fVar10;
                  QStack_30.w = ((fStack_15 * fVar42 - (float)pSStack_12 * fVar10) -
                                fStack_13 * fVar16) - fStack_14 * fVar17;
                  pos_00.y = fVar38;
                  pos_00.x = fVar33;
                  pos_00.z = fVar34;
                  q_00.y = QStack_30.y;
                  q_00.x = QStack_30.x;
                  q_00.z = QStack_30.z;
                  q_00.w = QStack_30.w;
                  s_00.y = fVar37;
                  s_00.x = fVar36;
                  s_00.z = fVar35;
                  fVar44 = fStack_13;
                  fVar45 = fStack_14;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos_00,q_00,s_00,
                                       (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D
                            ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  VStack_4.z = 0.0;
                  euler.y = 0.0;
                  euler.z = 0.0;
                  euler.x = fVar41;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad(&QStack_30,euler,(MethodInfo *)0x0);
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar42 = pQVar11->w;
                  QStack_30.x = ((float)pSStack_12 * fVar42 + fStack_43 * fVar10 + fVar44 * fVar17) -
                                fVar45 * fVar16;
                  QStack_30.y = (fStack_43 * fVar16 + fVar44 * fVar42 + fVar45 * fVar10) -
                                (float)pSStack_12 * fVar17;
                  QStack_30.z = (fStack_43 * fVar17 + fVar45 * fVar42 + (float)pSStack_12 * fVar16) -
                                fVar44 * fVar10;
                  QStack_30.w = ((fStack_43 * fVar42 - (float)pSStack_12 * fVar10) - fVar44 * fVar16)
                                - fVar45 * fVar17;
                  pos_01.y = fVar38;
                  pos_01.x = fVar33;
                  pos_01.z = fVar34;
                  q_01.y = QStack_30.y;
                  q_01.x = QStack_30.x;
                  q_01.z = QStack_30.z;
                  q_01.w = QStack_30.w;
                  s_01.y = fVar9;
                  s_01.x = fVar9;
                  s_01.z = fVar9;
                  VStack_4.z = fVar9;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos_01,q_01,s_01,
                                       (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  fVar26 = fVar26 - (float)pSVar22 * fStack_27;
                  fStack_28 = uStack_5._4_4_ - fVar18 * fStack_27;
                  fVar42 = fStack_6 - fVar23 * fStack_27;
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  VStack_4.z = 3.1415927;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff70,
                                       (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                  fVar23 = fStack_28;
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar18 = pQVar11->w;
                  pos_02.y = fStack_28;
                  pos_02.x = fVar26;
                  pos_02.z = fVar42;
                  q_02.y = (fStack_43 * fVar16 + fVar44 * fVar18 + fVar45 * fVar10) -
                           (float)pSStack_12 * fVar17;
                  q_02.x = ((float)pSStack_12 * fVar18 + fStack_43 * fVar10 + fVar44 * fVar17) -
                           fVar45 * fVar16;
                  q_02.z = (fStack_43 * fVar17 + fVar45 * fVar18 + (float)pSStack_12 * fVar16) -
                           fVar44 * fVar10;
                  q_02.w = ((fStack_43 * fVar18 - (float)pSStack_12 * fVar10) - fVar44 * fVar16) -
                           fVar45 * fVar17;
                  s_02.y = fVar37;
                  s_02.x = fVar36;
                  s_02.z = fVar35;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos_02,q_02,s_02,
                                       (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D
                            ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  VStack_4.z = 0.0;
                  auVar46._4_8_ = 0;
                  auVar46._0_4_ = fVar41;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff70,(Vector3)(auVar46 << 0x20),
                                       (MethodInfo *)0x0);
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar18 = pQVar11->w;
                  fStack_32 = ((float)pSStack_12 * fVar18 + fStack_43 * fVar10 + fVar44 * fVar17) -
                              fVar45 * fVar16;
                  fStack_31 = (fStack_43 * fVar16 + fVar44 * fVar18 + fVar45 * fVar10) -
                              (float)pSStack_12 * fVar17;
                  fStack_27 = (fStack_43 * fVar17 + fVar45 * fVar18 + (float)pSStack_12 * fVar16) -
                              fVar44 * fVar10;
                  fStack_28 = ((fStack_43 * fVar18 - (float)pSStack_12 * fVar10) - fVar44 * fVar16) -
                              fVar45 * fVar17;
                  VStack_4.z = 3.1415927;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff70,
                                       (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar18 = pQVar11->w;
                  pos_03.y = fVar23;
                  pos_03.x = fVar26;
                  pos_03.z = fVar42;
                  q_03.y = (fVar16 * fStack_28 + fVar18 * fStack_31 + fVar10 * fStack_27) -
                           fVar17 * fStack_32;
                  q_03.x = (fVar10 * fStack_28 + fVar18 * fStack_32 + fVar17 * fStack_31) -
                           fVar16 * fStack_27;
                  q_03.z = (fVar17 * fStack_28 + fVar18 * fStack_27 + fVar16 * fStack_32) -
                           fVar10 * fStack_31;
                  q_03.w = ((fVar18 * fStack_28 - fVar10 * fStack_32) - fVar16 * fStack_31) -
                           fVar17 * fStack_27;
                  s_03.y = fVar37;
                  s_03.x = fVar36;
                  s_03.z = fVar35;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos_03,q_03,s_03,
                                       (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D
                            ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  VStack_4.z = 0.0;
                  euler_00.y = 0.0;
                  euler_00.z = 0.0;
                  euler_00.x = fVar41;
                  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff20,euler_00,(MethodInfo *)0x0);
                  fVar10 = pQVar11->x;
                  fVar16 = pQVar11->y;
                  fVar17 = pQVar11->z;
                  fVar18 = pQVar11->w;
                  pos_04.y = fVar23;
                  pos_04.x = fVar26;
                  pos_04.z = fVar42;
                  q_04.y = (fStack_43 * fVar16 + fVar44 * fVar18 + fVar45 * fVar10) -
                           (float)pSStack_12 * fVar17;
                  q_04.x = ((float)pSStack_12 * fVar18 + fStack_43 * fVar10 + fVar44 * fVar17) -
                           fVar45 * fVar16;
                  q_04.z = (fStack_43 * fVar17 + fVar45 * fVar18 + (float)pSStack_12 * fVar16) -
                           fVar44 * fVar10;
                  q_04.w = ((fStack_43 * fVar18 - (float)pSStack_12 * fVar10) - fVar44 * fVar16) -
                           fVar45 * fVar17;
                  s_04.y = fVar9;
                  s_04.x = fVar9;
                  s_04.z = fVar9;
                  VStack_4.z = fVar9;
                  pMVar39 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xfffffeb0,pos_04,q_04,s_04,
                                       (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar39,(MethodInfo *)0x0);
                  GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                  CapsuleColliderGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
                  pGVar47 = (this->fields)._leftTick;
                  if (pGVar47 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                    pGVar47 = (this->fields)._rightTick;
                    if (pGVar47 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                      pGVar47 = (this->fields)._topTick;
                      if (pGVar47 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                        pGVar47 = (this->fields)._bottomTick;
                        if (pGVar47 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                          pGVar47 = (this->fields)._frontTick;
                          if (pGVar47 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                            pGVar47 = (this->fields)._backTick;
                            if (pGVar47 != (GizmoCap2D *)0x0) {
                              (*(code *)(pGVar47->klass->vtable).Render_1.method)();
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_OnGizmoUpdateBegin
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  bVar1 = CapsuleColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    pVVar3 = CapsuleColliderGizmo3D_CalcWorldCenter
                       ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        CapsuleColliderGizmo3D_UpdateHoverPriorities(this,camera,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_UpdateHandles
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pVVar1 = CapsuleColliderGizmo3D_CalcWorldCenter
                        ((Vector3 *)&stack0xffffffd0,this,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pCVar5 = (this->fields)._targetCollider;
    if (pCVar5 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                (pCVar5,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar5 = (this->fields)._targetCollider;
      if (pCVar5 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                  (pCVar5,(MethodInfo *)0x0);
        CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        pQVar6 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff40,this,(MethodInfo *)0x0);
        fVar7 = pQVar6->w;
        pCVar5 = (this->fields)._targetCollider;
        if (pCVar5 != (CapsuleCollider *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar5,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
            fVar9 = pVVar1->x;
            fVar10 = pVVar1->y;
            fVar11 = pVVar1->z;
            rotation.y = fVar9;
            rotation.x = (float)pTVar8;
            rotation.z = fVar10;
            rotation.w = fVar7;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffd0,rotation,*pVVar1,(MethodInfo *)0x0);
            uVar12._0_4_ = pVVar1->x;
            uStack_13 = pVVar1->y;
            pCVar5 = (this->fields)._targetCollider;
            if (pCVar5 != (CapsuleCollider *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar5,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
                rotation_00.y = fVar9;
                rotation_00.x = fVar7;
                rotation_00.z = fVar10;
                rotation_00.w = fVar11;
                fVar14 = fVar9;
                fVar15 = fVar10;
                fVar16 = fVar11;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffd0,rotation_00,*pVVar1,
                                     (MethodInfo *)0x0);
                uVar17._0_4_ = pVVar1->x;
                uVar17._4_4_ = pVVar1->y;
                fVar18 = pVVar1->z;
                pCVar5 = (this->fields)._targetCollider;
                _fStack_90 = uVar17;
                if (pCVar5 != (CapsuleCollider *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar5,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward
                                        ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
                    pVVar1 = (Vector3 *)&stack0xffffffd0;
                    rotation_01.y = fVar9;
                    rotation_01.x = fVar7;
                    rotation_01.z = fVar10;
                    rotation_01.w = fVar11;
                    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        (pVVar1,rotation_01,*pVVar19,(MethodInfo *)0x0);
                    uVar20 = pVVar19->x;
                    uVar21 = pVVar19->y;
                    fVar10 = pVVar19->z;
                    fVar22 = fVar14 * 4.1520227e-29;
                    fVar23 = fVar15 * 4.1520227e-29;
                    fVar24 = fVar16 * 4.1520227e-29;
                    fVar11 = fVar2 - fVar22;
                    fVar25 = fVar4 - fVar24;
                    pGVar26 = (this->fields)._leftTick;
                    if (this_01 != (Camera *)0x0) {
                      position_04.y = (float)uVar3 - fVar23;
                      position_04.x = fVar11;
                      position_04.z = fVar25;
                      pCVar27 = this_01;
                      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffc0,this_01,position_04,
                                           (MethodInfo *)0x0);
                      value.x = pVVar19->x;
                      value.y = pVVar19->y;
                      if (pGVar26 != (GizmoCap2D *)0x0) {
                        GizmoCap2D::GizmoCap2D_set_Position(pGVar26,value,(MethodInfo *)0x0);
                        pCVar28 = (this->fields)._extentTicks;
                        if (pCVar28 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                          if (pCVar28->max_length < 3) goto code_?;
                          pCVar29 = pCVar28->vector[2];
                          if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                            (pCVar29->fields).Position.x = (float)pCVar27;
                            (pCVar29->fields).Position.y = fVar11;
                            (pCVar29->fields).Position.z = fVar25;
                            pCVar28 = (this->fields)._extentTicks;
                            if (pCVar28 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                              if (pCVar28->max_length < 3) goto code_?;
                              pCVar29 = pCVar28->vector[2];
                              uVar30 = (uint)fVar15 ^
                                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ;
                              fVar16 = (float)((uint)fVar16 ^
                                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                              );
                              if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                (pCVar29->fields).Normal.x =
                                     (float)((uint)fVar14 ^
                                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                            );
                                (pCVar29->fields).Normal.y = (float)uVar30;
                                (pCVar29->fields).Normal.z = fVar16;
                                fVar24 = fVar4 + fVar24;
                                fVar22 = fVar2 + fVar22;
                                fVar23 = (float)uVar3 + fVar23;
                                pGVar26 = (this->fields)._rightTick;
                                position.y = fVar23;
                                position.x = fVar22;
                                position.z = fVar24;
                                pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_WorldToScreenPoint_1
                                                    ((Vector3 *)&stack0xffffff80,this_01,position,
                                                     (MethodInfo *)0x0);
                                value_00.x = pVVar19->x;
                                value_00.y = pVVar19->y;
                                if (pGVar26 != (GizmoCap2D *)0x0) {
                                  GizmoCap2D::GizmoCap2D_set_Position
                                            (pGVar26,value_00,(MethodInfo *)0x0);
                                  pCVar28 = (this->fields)._extentTicks;
                                  if (pCVar28 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                    if (pCVar28->max_length < 4) goto code_?;
                                    pCVar29 = pCVar28->vector[3];
                                    if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                      (pCVar29->fields).Position.x = fVar22;
                                      (pCVar29->fields).Position.y = fVar23;
                                      (pCVar29->fields).Position.z = fVar24;
                                      pCVar28 = (this->fields)._extentTicks;
                                      if (pCVar28 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0)
                                      {
                                        if (pCVar28->max_length < 4) goto code_?;
                                        pCVar29 = pCVar28->vector[3];
                                        if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                          uStack_13 = (undefined4)((ulonglong)uVar12 >> 0x20);
                                          (pCVar29->fields).Normal.x = (float)(undefined4)uVar12;
                                          (pCVar29->fields).Normal.y = (float)uStack_13;
                                          fVar11 = fStack_31 * fVar7;
                                          (pCVar29->fields).Normal.z = fVar9;
                                          fVar16 = (float)puStack_32 * fVar7;
                                          fVar7 = fVar18 * fVar7;
                                          fVar15 = fVar2 + fVar11 * _UNK_?;
                                          fVar14 = (float)uVar3 + fVar16 * _UNK_?;
                                          fVar9 = fVar4 + fVar7 * _UNK_?;
                                          pGVar26 = (this->fields)._topTick;
                                          position_00.y = fVar14;
                                          position_00.x = fVar15;
                                          position_00.z = fVar9;
                                          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera
                                                    ::Camera_WorldToScreenPoint_1
                                                              ((Vector3 *)&stack0xffffff80,this_01,
                                                               position_00,(MethodInfo *)0x0);
                                          value_01.x = pVVar19->x;
                                          value_01.y = pVVar19->y;
                                          if (pGVar26 != (GizmoCap2D *)0x0) {
                                            GizmoCap2D::GizmoCap2D_set_Position
                                                      (pGVar26,value_01,(MethodInfo *)0x0);
                                            pCVar28 = (this->fields)._extentTicks;
                                            if (pCVar28 != (CapsuleColliderGizmo3D_ExtentTick__Array
                                                           *)0x0) {
                                              if (pCVar28->max_length < 6) goto code_?;
                                              pCVar29 = pCVar28->vector[5];
                                              if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *)0x0
                                                 ) {
                                                (pCVar29->fields).Position.x = fVar15;
                                                (pCVar29->fields).Position.y = fVar14;
                                                (pCVar29->fields).Position.z = fVar9;
                                                pCVar28 = (this->fields)._extentTicks;
                                                if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                  if (pCVar28->max_length < 6) goto code_?;
                                                  pCVar29 = pCVar28->vector[5];
                                                  if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar29->fields).Normal.x = (float)uVar17;
                                                    (pCVar29->fields).Normal.y = SUB84(uVar17,4);
                                                    (pCVar29->fields).Normal.z = (float)pVVar1;
                                                    fVar7 = fVar4 - fVar7 * _UNK_?;
                                                    fVar11 = fVar2 - fVar11 * _UNK_?;
                                                    fVar9 = (float)uVar3 - fVar16 * _UNK_?;
                                                    pGVar26 = (this->fields)._bottomTick;
                                                    position_01.y = fVar9;
                                                    position_01.x = fVar11;
                                                    position_01.z = fVar7;
                                                    pVVar1 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        ((Vector3 *)&stack0xffffff80
                                                                         ,this_01,position_01,
                                                                         (MethodInfo *)0x0);
                                                    value_02.x = pVVar1->x;
                                                    value_02.y = pVVar1->y;
                                                    if (pGVar26 != (GizmoCap2D *)0x0) {
                                                      GizmoCap2D::GizmoCap2D_set_Position
                                                                (pGVar26,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar28 = (this->fields)._extentTicks;
                                                      if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length < 5)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[4];
                                                    if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar29->fields).Position.x = fVar11;
                                                      (pCVar29->fields).Position.y = fVar9;
                                                      (pCVar29->fields).Position.z = fVar7;
                                                      pCVar28 = (this->fields)._extentTicks;
                                                      if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length < 5)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[4];
                                                    uVar30 = (uint)puStack_32 ^
                                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar18 = (float)((uint)fVar18 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar29->fields).Normal.x =
                                                         (float)((uint)fStack_31 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pCVar29->fields).Normal.y = (float)uVar30;
                                                  fVar7 = (float)uVar20 * 4.1520227e-29;
                                                  (pCVar29->fields).Normal.z = fVar18;
                                                  fVar14 = (float)uVar21 * 4.1520227e-29;
                                                  fVar15 = fVar10 * 4.1520227e-29;
                                                  fVar18 = fVar2 - fVar7;
                                                  fVar11 = (float)uVar3 - fVar14;
                                                  fVar9 = fVar4 - fVar15;
                                                  pGVar26 = (this->fields)._frontTick;
                                                  position_02.y = fVar11;
                                                  position_02.x = fVar18;
                                                  position_02.z = fVar9;
                                                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&fStack_31,this_01
                                                                       ,position_02,
                                                                       (MethodInfo *)0x0);
                                                  value_03.x = pVVar1->x;
                                                  value_03.y = pVVar1->y;
                                                  if (pGVar26 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar26,value_03,(MethodInfo *)0x0);
                                                    pCVar28 = (this->fields)._extentTicks;
                                                    if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length == 0)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[0];
                                                    if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar29->fields).Position.x = fVar18;
                                                      (pCVar29->fields).Position.y = fVar11;
                                                      (pCVar29->fields).Position.z = fVar9;
                                                      pCVar28 = (this->fields)._extentTicks;
                                                      if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length == 0)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[0];
                                                    uVar30 = uVar21 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar9 = (float)((uint)fVar10 ^
                                                                                                                                  
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar29->fields).Normal.x =
                                                         (float)(uVar20 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pCVar29->fields).Normal.y = (float)uVar30;
                                                  (pCVar29->fields).Normal.z = fVar9;
                                                  fVar4 = fVar4 + fVar15;
                                                  fVar2 = fVar2 + fVar7;
                                                  fVar14 = (float)uVar3 + fVar14;
                                                  pGVar26 = (this->fields)._backTick;
                                                  position_03.y = fVar14;
                                                  position_03.x = fVar2;
                                                  position_03.z = fVar4;
                                                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&stack0xffffff60,
                                                                       this_01,position_03,
                                                                       (MethodInfo *)0x0);
                                                  value_04.x = pVVar1->x;
                                                  value_04.y = pVVar1->y;
                                                  if (pGVar26 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar26,value_04,(MethodInfo *)0x0);
                                                    pCVar28 = (this->fields)._extentTicks;
                                                    if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length < 2)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[1];
                                                    if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar29->fields).Position.x = fVar2;
                                                      (pCVar29->fields).Position.y = fVar14;
                                                      (pCVar29->fields).Position.z = fVar4;
                                                      pCVar28 = (this->fields)._extentTicks;
                                                      if (pCVar28 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar28->max_length < 2)
                                                    goto code_?;
                                                    pCVar29 = pCVar28->vector[1];
                                                    if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar29->fields).Normal.x = (float)uVar20;
                                                      (pCVar29->fields).Normal.y = (float)uVar21;
                                                      (pCVar29->fields).Normal.z = fVar10;
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_UpdateHoverPriorities
               (CapsuleColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields)._extentTicks;
  if (pCVar2 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
    if ((pCVar2->max_length < 3) || (pCVar3 = pCVar2->vector[2], pCVar2->max_length < 4))
    goto code_?;
    pCVar4 = pCVar2->vector[3];
    if ((((pCVar3 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
         (((pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
          (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))) &&
        ((((pPVar7->fields)._priority = 0, pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0 &&
          (pGVar5 = (pCVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
         (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)))) &&
       (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)) {
      (pPVar7->fields)._priority = 0;
      fVar8 = (pCVar3->fields).Position.z;
      uVar9._0_4_ = (pCVar3->fields).Position.x;
      uVar9._4_4_ = (pCVar3->fields).Position.y;
      VVar10 = (pCVar3->fields).Normal;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      point.z = fVar8;
      point.x = (float)(int)uVar9;
      point.y = (float)(int)((ulonglong)uVar9 >> 0x20);
      bVar11 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar10,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        pGVar5 = (pCVar4->fields).Tick;
        if ((pGVar5 != (GizmoCap2D *)0x0) &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
          pGVar5 = (pCVar3->fields).Tick;
code_?:
          pPVar7 = (pGVar6->fields)._hoverPriority2D;
          if (((pGVar5 != (GizmoCap2D *)0x0) &&
              (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
             (pPVar7 != (Priority *)0x0)) {
            Priority::Priority_MakeHigherThan
                      (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
            pCVar2 = (this->fields)._extentTicks;
            if (pCVar2 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
              if (pCVar2->max_length < 6) goto code_?;
              pCVar3 = pCVar2->vector[5];
              pCVar4 = pCVar2->vector[4];
              if (((((pCVar3 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
                    (pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                   ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                    ((pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0 &&
                     ((pPVar7->fields)._priority = 2,
                     pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0)))))) &&
                  (pGVar5 = (pCVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                 ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                  (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))) {
                (pPVar7->fields)._priority = 2;
                fVar8 = (pCVar3->fields).Position.z;
                uVar12 = (pCVar3->fields).Position.x;
                uVar13 = (pCVar3->fields).Position.y;
                VVar10.y = (float)uVar13;
                VVar10.x = (float)uVar12;
                uVar14._0_4_ = (pCVar3->fields).Normal.x;
                uVar14._4_4_ = (pCVar3->fields).Normal.y;
                this = (CapsuleColliderGizmo3D *)(pCVar3->fields).Normal.z;
                if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                  this = (CapsuleColliderGizmo3D *)TypeInfo__RTG__CameraEx;
                  func_?();
                }
                VVar10.z = fVar8;
                pointNormal.z = (float)this;
                pointNormal.x = (float)(int)uVar14;
                pointNormal.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                   (camera,VVar10,pointNormal,(MethodInfo *)0x0);
                if (bVar11 == 0) {
                  pGVar5 = (pCVar4->fields).Tick;
                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                     (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                    pGVar5 = (pCVar3->fields).Tick;
code_?:
                    pPVar7 = (pGVar6->fields)._hoverPriority2D;
                    if (((pGVar5 != (GizmoCap2D *)0x0) &&
                        (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
                       (pPVar7 != (Priority *)0x0)) {
                      Priority::Priority_MakeHigherThan
                                (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
                      pCVar2 = (pCVar1->fields)._extentTicks;
                      if (pCVar2 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                        if ((pCVar2->max_length == 0) ||
                           (pCVar3 = pCVar2->vector[0], pCVar2->max_length < 2))
                        goto code_?;
                        pCVar4 = pCVar2->vector[1];
                        if (((pCVar3 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
                            ((pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
                             (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0))
                            )) && ((pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                   pPVar7 != (Priority *)0x0 &&
                                   (((((pPVar7->fields)._priority = 4,
                                      pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0 &&
                                      (pGVar5 = (pCVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0
                                      )) && (pGVar6 = (pGVar5->fields)._._handle,
                                            pGVar6 != (GizmoHandle *)0x0)) &&
                                    (pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                    pPVar7 != (Priority *)0x0)))))) {
                          (pPVar7->fields)._priority = 4;
                          fVar8 = (pCVar3->fields).Normal.z;
                          uVar15._0_4_ = (pCVar3->fields).Normal.x;
                          uVar15._4_4_ = (pCVar3->fields).Normal.y;
                          VVar10 = (pCVar3->fields).Position;
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          pointNormal_00.z = fVar8;
                          pointNormal_00.x = (float)(int)uVar15;
                          pointNormal_00.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                          bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                             (camera,VVar10,pointNormal_00,(MethodInfo *)0x0);
                          if (bVar11 == 0) {
                            pGVar5 = (pCVar4->fields).Tick;
                            if ((pGVar5 != (GizmoCap2D *)0x0) &&
                               (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0
                               )) {
                              pGVar5 = (pCVar3->fields).Tick;
code_?:
                              if (((pGVar5 != (GizmoCap2D *)0x0) &&
                                  (pGVar16 = (pGVar5->fields)._._handle,
                                  pGVar16 != (GizmoHandle *)0x0)) &&
                                 (pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                 pPVar7 != (Priority *)0x0)) {
                                Priority::Priority_MakeHigherThan
                                          (pPVar7,(pGVar16->fields)._hoverPriority2D,
                                           (MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                          else {
                            pGVar5 = (pCVar3->fields).Tick;
                            if ((pGVar5 != (GizmoCap2D *)0x0) &&
                               (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0
                               )) {
                              pGVar5 = (pCVar4->fields).Tick;
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pGVar5 = (pCVar3->fields).Tick;
                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                     (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                    pGVar5 = (pCVar4->fields).Tick;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pGVar5 = (pCVar3->fields).Tick;
        if ((pGVar5 != (GizmoCap2D *)0x0) &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
          pGVar5 = (pCVar4->fields).Tick;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateTickColors(Camera) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_UpdateTickColors
               (CapsuleColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_3,pTVar1,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar2->x;
      uStack_4._4_4_ = (CapsuleColliderGizmo3D_ExtentTick__Array *)pVVar2->y;
      fVar5 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_3,pTVar1,(MethodInfo *)0x0);
        uVar6 = pVVar2->x;
        uVar7 = pVVar2->y;
        fStack_8 = pVVar2->z;
        value.z = fVar5;
        value.x = (float)(undefined4)uStack_4;
        value.y = (float)uStack_4._4_4_;
        fStack_9 = (float)uVar6;
        fStack_10 = (float)uVar7;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_3,value,(MethodInfo *)0x0);
        uVar11 = pVVar2->x;
        uVar12 = pVVar2->y;
        fVar5 = pVVar2->z;
        uStack_13 = 0;
        pCVar14 = (this->fields)._extentTicks;
        uStack_4 = CONCAT44(pCVar14,(undefined4)uStack_4);
        fStack_15 = (float)((uint)(fStack_10 * (float)uVar12 + fStack_9 * (float)uVar11 +
                                  fStack_8 * fVar5) ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_16 = (float)uVar11;
        fStack_17 = (float)uVar12;
        fStack_18 = fVar5;
        if (pCVar14 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
          ppCStack_19 = pCVar14->vector;
          while( true ) {
            if ((int)pCVar14->max_length <= (int)uStack_13) {
              return;
            }
            if (pCVar14->max_length <= uStack_13) break;
            pCVar20 = *ppCStack_19;
            if (pCVar20 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
            this_00 = (this->fields)._._gizmo;
            this_01 = (pCVar20->fields).Tick;
            if (this_00 == (Gizmo *)0x0) goto code_?;
            iVar21 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                     PointerCaptureEventBase`1[System::Object]::
                     PointerCaptureEventBase_1_System_Object__get_pointerId
                               ((PointerCaptureEventBase_1_System_Object_ *)this_00,
                                (MethodInfo *)0x0);
            if ((this_01 == (GizmoCap2D *)0x0) ||
               (pGVar22 = (this_01->fields)._._handle, pGVar22 == (GizmoHandle *)0x0))
            goto code_?;
            if (iVar21 == (pGVar22->fields)._id) {
code_?:
              pGVar23 = (this_01->fields)._overrideFillColor;
              if (pGVar23 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar23->fields)._isActive = 0;
              pGVar23 = (this_01->fields)._overrideBorderColor;
              if (pGVar23 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar23->fields)._isActive = 0;
            }
            else {
              pGStack_24 = (GizmoOverrideColor *)(pCVar20->fields).Position.z;
              uVar25._0_4_ = (pCVar20->fields).Position.x;
              uVar25._4_4_ = (pCVar20->fields).Position.y;
              uVar26._0_4_ = (pCVar20->fields).Normal.x;
              uVar26._4_4_ = (pCVar20->fields).Normal.y;
              fStack_27 = (pCVar20->fields).Normal.z;
              fStack_10 = (float)(undefined4)uVar26;
              fStack_8 = (float)uVar26._4_4_;
              fStack_17 = (float)(undefined4)uVar25;
              fStack_18 = (float)uVar25._4_4_;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__CameraEx);
                uVar25 = CONCAT44(fStack_18,fStack_17);
                uVar26 = CONCAT44(fStack_8,fStack_10);
              }
              point.z = (float)pGStack_24;
              point.x = (float)(int)uVar25;
              point.y = (float)(int)((ulonglong)uVar25 >> 0x20);
              pointNormal.z = fStack_27;
              pointNormal.x = (float)(int)uVar26;
              pointNormal.y = (float)(int)((ulonglong)uVar26 >> 0x20);
              bVar28 = CameraEx::CameraEx_IsPointFacingCamera
                                 (camera,point,pointNormal,(MethodInfo *)0x0);
              if (bVar28 != 0) goto code_?;
              pGVar23 = (this_01->fields)._overrideFillColor;
              if (pGVar23 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar23->fields)._isActive = 1;
              pGVar23 = (this_01->fields)._overrideBorderColor;
              if (pGVar23 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar23->fields)._isActive = 1;
              pGVar29 = (this_01->fields)._sharedLookAndFeel;
              if (pGVar29 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              pCVar30 = &(pGVar29->fields)._color;
              fStack_31 = pCVar30->r;
              fStack_9 = (pGVar29->fields)._color.g;
              fStack_10 = (pGVar29->fields)._color.b;
              fStack_8 = (pGVar29->fields)._color.a;
              pGStack_24 = (this_01->fields)._overrideFillColor;
              pCVar32 = (this->fields)._sharedLookAndFeel;
              if ((pCVar32 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) &&
                 (pCVar32 = (this->fields)._lookAndFeel,
                 pCVar32 == (CapsuleColliderGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff94,*pCVar30,
                                   fStack_8 * (pCVar32->fields)._tickCullAlphaScale,
                                   (MethodInfo *)0x0);
              fVar33 = pCVar30->g;
              fVar34 = pCVar30->b;
              fVar35 = pCVar30->a;
              if (pGStack_24 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGStack_24->fields)._color.r = pCVar30->r;
              (pGStack_24->fields)._color.g = fVar33;
              (pGStack_24->fields)._color.b = fVar34;
              (pGStack_24->fields)._color.a = fVar35;
              pGVar29 = (this_01->fields)._sharedLookAndFeel;
              if (pGVar29 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              pCVar30 = &(pGVar29->fields)._borderColor;
              fStack_31 = pCVar30->r;
              fStack_9 = (pGVar29->fields)._borderColor.g;
              fStack_10 = (pGVar29->fields)._borderColor.b;
              fStack_8 = (pGVar29->fields)._borderColor.a;
              pGStack_24 = (this_01->fields)._overrideBorderColor;
              pCVar32 = (this->fields)._sharedLookAndFeel;
              if ((pCVar32 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) &&
                 (pCVar32 = (this->fields)._lookAndFeel,
                 pCVar32 == (CapsuleColliderGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff84,*pCVar30,
                                   fStack_8 * (pCVar32->fields)._tickCullAlphaScale,
                                   (MethodInfo *)0x0);
              fVar33 = pCVar30->g;
              fVar34 = pCVar30->b;
              fVar35 = pCVar30->a;
              if (pGStack_24 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGStack_24->fields)._color.r = pCVar30->r;
              (pGStack_24->fields)._color.g = fVar33;
              (pGStack_24->fields)._color.b = fVar34;
              (pGStack_24->fields)._color.a = fVar35;
            }
            VStack_3.x = (pCVar20->fields).Position.x;
            VStack_3.y = (pCVar20->fields).Position.y;
            VStack_3.z = (pCVar20->fields).Position.z;
            isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                              fVar5 * VStack_3.z + fStack_15;
            _bStack_1c = CONCAT31(uStack_36,isVisible);
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,isVisible,(MethodInfo *)0x0);
            uStack_13 = uStack_13 + 1;
            ppCStack_19 = ppCStack_19 + 1;
            pCVar14 = uStack_4._4_4_;
          }
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* CapsuleColliderGizmo3D() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D__ctor
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CapsuleCollider3DSnapshot);
    func_?(&TypeInfo__RTG__CapsuleColliderGizmo3DHotkeys);
    func_?(&TypeInfo__RTG__CapsuleColliderGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__CapsuleColliderGizmo3DSettings);
    func_?(&TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pCVar1 = (CapsuleColliderGizmo3D_ExtentTick__Array *)
           func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick,6);
  ppCVar2 = &(this->fields)._extentTicks;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pLVar3 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  ppLVar4 = &(this->fields)._semiCirclePts;
  *ppLVar4 = pLVar3;
  func_?(ppLVar4,pLVar3);
  pLVar3 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  ppLVar4 = &(this->fields)._circlePts;
  *ppLVar4 = pLVar3;
  func_?(ppLVar4,pLVar3);
  pCVar5 = TypeInfo__RTG__CapsuleCollider3DSnapshot;
  pCVar6 = (CapsuleCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar5);
  (this->fields)._preChangeColliderSnapshot = pCVar6;
  func_?();
  pCVar5 = TypeInfo__RTG__CapsuleCollider3DSnapshot;
  pCVar6 = (CapsuleCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar5);
  ppCVar7 = &(this->fields)._postChangeColliderSnapshot;
  *ppCVar7 = pCVar6;
  func_?(ppCVar7,pCVar6);
  this_00 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_00,(MethodInfo *)0x0);
  ppGVar8 = &(this->fields)._offsetDrag;
  *ppGVar8 = (GizmoSglAxisOffsetDrag3D *)this_00;
  func_?(ppGVar8,this_00);
  this_01 = (CapsuleColliderGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__CapsuleColliderGizmo3DLookAndFeel);
  CapsuleColliderGizmo3DLookAndFeel::CapsuleColliderGizmo3DLookAndFeel__ctor
            (this_01,(MethodInfo *)0x0);
  ppCVar9 = &(this->fields)._lookAndFeel;
  *ppCVar9 = this_01;
  func_?(ppCVar9,this_01);
  method_01 = TypeInfo__RTG__CapsuleColliderGizmo3DSettings;
  value = (CapsuleColliderGizmo3DSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  (value->fields)._heightSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields)._settings = value;
  func_?();
  pCStack10 = TypeInfo__RTG__CapsuleColliderGizmo3DHotkeys;
  value_00 = (CapsuleColliderGizmo3DHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar11 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar11,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar11 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar11,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar11->fields)._lCtrl = 1;
    (value_00->fields)._enableSnapping = pHVar11;
    func_?();
    pHVar11 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar11,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar11 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar11,KeyCode__Enum_None,(MethodInfo *)0x0);
      method_00 = &(value_00->fields)._scaleFromCenter;
      (pHVar11->fields)._lShift = 1;
      *method_00 = pHVar11;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields)._hotkeys = value_00;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

