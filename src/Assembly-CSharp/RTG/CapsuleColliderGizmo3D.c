
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
  (this->fields)._leftTick = pGVar3;
  func_?(&(this->fields)._leftTick,pGVar3);
  pGVar3 = (this->fields)._leftTick;
  if ((pGVar3 == (GizmoCap2D *)0x0) ||
     (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) {
code_?:
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
  else {
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    pMVar7 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?(pMVar7,pGVar6);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
             Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,pMVar7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._rightTick = pGVar3;
    func_?(&(this->fields)._rightTick,pGVar3);
    pGVar3 = (this->fields)._rightTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    pMVar7 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?(pMVar7,pGVar6);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
             Datatype_base64Binary_get_TypeCode((Datatype_base64Binary *)0x0,pMVar7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._topTick = pGVar3;
    func_?(&(this->fields)._topTick,pGVar3);
    pGVar3 = (this->fields)._topTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    pMVar7 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?(pMVar7,pGVar6);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::Datatype_NOTATION_get_TypeCode
                       ((Datatype_NOTATION *)0x0,pMVar7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._bottomTick = pGVar3;
    func_?(&(this->fields)._bottomTick,pGVar3);
    pGVar3 = (this->fields)._bottomTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    pMVar7 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?(pMVar7,pGVar6);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_normalizedStringV1Compat::
             Datatype_normalizedStringV1Compat_get_TypeCode
                       ((Datatype_normalizedStringV1Compat *)0x0,pMVar7);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._backTick = pGVar3;
    func_?(&(this->fields)._backTick,pGVar3);
    pGVar3 = (this->fields)._backTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    func_?(&(pGVar4->fields)._DragSession_k__BackingField,pGVar6);
    pGVar1 = (this->fields)._._gizmo;
    handleId = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,handleId,(MethodInfo *)0x0);
    (this->fields)._frontTick = pGVar3;
    pMVar7 = (MethodInfo *)&UNK_?;
    func_?(&(this->fields)._frontTick,pGVar3);
    pGVar3 = (this->fields)._frontTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    func_?(&(pGVar4->fields)._DragSession_k__BackingField,pGVar6);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 3) goto code_?;
    pCVar8->vector[2] = pCVar9;
    func_?(pCVar8->vector + 2,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 3) goto code_?;
    pCVar9 = pCVar8->vector[2];
    pGVar3 = (this->fields)._leftTick;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 4) goto code_?;
    pCVar8->vector[3] = pCVar9;
    func_?(pCVar8->vector + 3,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 4) goto code_?;
    pCVar9 = pCVar8->vector[3];
    pGVar3 = (this->fields)._rightTick;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 6) goto code_?;
    pCVar8->vector[5] = pCVar9;
    func_?(pCVar8->vector + 5,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 6) goto code_?;
    pCVar9 = pCVar8->vector[5];
    pGVar3 = (this->fields)._topTick;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 5) goto code_?;
    pCVar8->vector[4] = pCVar9;
    func_?(pCVar8->vector + 4,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 5) goto code_?;
    pCVar9 = pCVar8->vector[4];
    pGVar3 = (this->fields)._bottomTick;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length == 0) goto code_?;
    pCVar8->vector[0] = pCVar9;
    func_?(pCVar8->vector,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length == 0) goto code_?;
    pCVar9 = pCVar8->vector[0];
    pGVar3 = (this->fields)._frontTick;
    if (pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CapsuleColliderGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CapsuleColliderGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar9,ExceptionArgument__Enum_obj,pMVar7);
    if (pCVar8 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) ||
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 != 0)) {
      if (pCVar8->max_length < 2) goto code_?;
      pCVar8->vector[1] = pCVar9;
      func_?(pCVar8->vector + 1,pCVar9);
      pCVar8 = (this->fields)._extentTicks;
      if (pCVar8 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
        if (pCVar8->max_length < 2) goto code_?;
        pCVar9 = pCVar8->vector[1];
        pGVar3 = (this->fields)._backTick;
        if (pCVar9 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
          (pCVar9->fields).Tick = pGVar3;
          func_?(&(pCVar9->fields).Tick,pGVar3);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar5 = (pVVar11->zeroVector).x;
          uVar12 = (pVVar11->zeroVector).y;
          fVar13 = (pVVar11->zeroVector).z;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          uVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
          uVar15 = uVar14 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
          uVar16 = (uint)(TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z ^
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffdc,
                               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                               (MethodInfo *)0x0);
          VVar18.y = (float)uVar12;
          VVar18.x = (float)uVar5;
          VVar18.z = fVar13;
          auVar19._4_4_ = uVar16;
          auVar19._0_4_ = uVar15;
          auVar19._8_4_ = 0;
          arcPlane.m_Distance = 0.0;
          arcPlane.m_Normal = *pVVar17;
          pLVar20 = PrimitiveFactory::PrimitiveFactory_Generate3DArcBorderPoints
                              (VVar18,(Vector3)(auVar19 << 0x20),arcPlane,-180.0,0,100,
                               (MethodInfo *)0x0);
          (this->fields)._semiCirclePts = pLVar20;
          func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          VVar18 = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar21 = (pVVar11->rightVector).x;
          uVar22 = (pVVar11->rightVector).y;
          fVar13 = (pVVar11->rightVector).z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          circleRight.y = (float)uVar22;
          circleRight.x = (float)uVar21;
          circleRight.z = fVar13;
          fStack23 = fVar13;
          pLVar20 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                              (VVar18,1.0,circleRight,
                               TypeInfo__UnityEngine__Vector3->static_fields->upVector,100,
                               (MethodInfo *)0x0);
          (this->fields)._circlePts = pLVar20;
          func_?();
          CapsuleColliderGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?(0);
  func_?(uVar5);
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
  if ((this->fields)._sharedSettings == (CapsuleColliderGizmo3DSettings *)0x0) {
    pCVar7 = (this->fields)._settings;
    if (pCVar7 == (CapsuleColliderGizmo3DSettings *)0x0) goto code_?;
  }
  else {
    pCVar7 = (this->fields)._sharedSettings;
  }
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
    fVar19 = fVar6;
    fVar3 = stack0xffffffc8;
    puVar22 = puStack_5;
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
               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
      fVar15 = (float)((uint)fVar19 ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)((uint)puVar22 ^
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
      (value_00->_0).name = (char *)method_00->invoker_method;
      func_?(&(value_00->_0).name);
      pIVar3 = method_00->klass;
      pIVar4 = method_00->return_type;
      (value_00->_0).namespaze = method_00->name;
      (value_00->_0).byval_arg.data = (_union_86)pIVar3;
      *(Il2CppType **)&(value_00->_0).byval_arg.attrs = pIVar4;
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
        pMVar5 = (MonitorData *)(pCVar2->fields)._localCenter.z;
        *(undefined8 *)&value_01[1].monitor = *(undefined8 *)&(pCVar2->fields)._localCenter;
        value_01[2].monitor = pMVar5;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    if ((this->fields)._sharedHotkeys == (CapsuleColliderGizmo3DHotkeys *)0x0) {
      pCVar3 = (this->fields)._hotkeys;
      if (pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) goto code_?;
    }
    else {
      pCVar3 = (this->fields)._sharedHotkeys;
    }
    pHVar4 = (pCVar3->fields)._enableSnapping;
    if (pHVar4 == (Hotkeys *)0x0) goto code_?;
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
        if (pGVar8 == (Gizmo *)0x0) goto code_?;
        pVVar10 = Gizmo::Gizmo_get_RelativeDragOffset
                            ((Vector3 *)&stack0xffffffd8,pGVar8,(MethodInfo *)0x0);
        uVar11._0_4_ = pVVar10->x;
        uVar11._4_4_ = pVVar10->y;
        fVar12 = pVVar10->z;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
        pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                            ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
        uVar13 = pVVar10->x;
        uVar14 = pVVar10->y;
        fVar15 = _UNK_?;
        if (0.0 <= (float)uVar14 * SUB84(uVar11,4) + (float)uVar13 * (float)uVar11 +
                   pVVar10->z * fVar12) {
          fVar15 = _UNK_?;
        }
        fVar7 = fVar15 * (float)fVar9 + fVar7;
        fVar12 = 0.0;
        if (0.0 <= fVar7) {
          fVar12 = fVar7;
        }
        pVVar10 = CapsuleColliderGizmo3D_CalcScalePivot
                            ((Vector3 *)&stack0xffffffc0,this,handleId,(MethodInfo *)0x0);
        uVar16._0_4_ = pVVar10->x;
        uVar16._4_4_ = pVVar10->y;
        fVar7 = pVVar10->z;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 == (GizmoSglAxisOffsetDrag3D *)0x0) goto code_?;
        pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                            ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
        uVar17 = pVVar10->x;
        uVar18 = pVVar10->y;
        fVar7 = fVar7 + pVVar10->z * fVar12;
        uVar19._4_4_ = SUB84(uVar16,4) + (float)uVar18 * fVar12;
        uVar19._0_4_ = (float)uVar16 + (float)uVar17 * fVar12;
        if ((this->fields)._sharedHotkeys == (CapsuleColliderGizmo3DHotkeys *)0x0) {
          pCVar3 = (this->fields)._hotkeys;
          if (pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) goto code_?;
        }
        else {
          pCVar3 = (this->fields)._sharedHotkeys;
        }
        pHVar4 = (pCVar3->fields)._scaleFromCenter;
        if (pHVar4 == (Hotkeys *)0x0) goto code_?;
        bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
        if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
          pCVar20 = (this->fields)._targetCollider;
          if ((pCVar20 == (CapsuleCollider *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar20,(MethodInfo *)0x0),
             pTVar21 == (Transform *)0x0)) goto code_?;
          position_00.z = fVar7;
          position_00.x = (float)uVar19;
          position_00.y = SUB84(uVar19,4);
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&stack0xffffffc0,pTVar21,position_00,(MethodInfo *)0x0);
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_center
                    (pCVar20,*pVVar10,(MethodInfo *)0x0);
        }
        pCVar20 = (this->fields)._targetCollider;
        fVar7 = CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
        if (pCVar20 == (CapsuleCollider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_radius
                  (pCVar20,fVar12 / fVar7,(MethodInfo *)0x0);
        pCVar20 = (this->fields)._targetCollider;
        if (pCVar20 == (CapsuleCollider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                  (pCVar20,(this->fields)._heightOnDragBegin,(MethodInfo *)0x0);
        pCVar20 = (this->fields)._targetCollider;
        if (pCVar20 == (CapsuleCollider *)0x0) goto code_?;
        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_height(pCVar20,(MethodInfo *)0x0);
        pCVar20 = (this->fields)._targetCollider;
        if (pCVar20 == (CapsuleCollider *)0x0) goto code_?;
        fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_radius(pCVar20,(MethodInfo *)0x0);
        if (fVar7 < fVar12 + fVar12) {
          pCVar20 = (this->fields)._targetCollider;
          if (pCVar20 != (CapsuleCollider *)0x0) {
            fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                     CapsuleCollider_get_radius(pCVar20,(MethodInfo *)0x0);
            UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_set_height
                      (pCVar20,fVar7 + fVar7,(MethodInfo *)0x0);
            CapsuleColliderGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    pCVar20 = (this->fields)._targetCollider;
    if (pCVar20 != (CapsuleCollider *)0x0) {
      fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
               CapsuleCollider_get_height(pCVar20,(MethodInfo *)0x0);
      fVar12 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._._gizmo;
      if (pGVar8 != (Gizmo *)0x0) {
        Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&stack0xffffffc0,pGVar8,(MethodInfo *)0x0);
        fVar9 = (float10)func_?();
        pGVar8 = (this->fields)._._gizmo;
        fVar15 = (float)fVar9;
        if (pGVar8 != (Gizmo *)0x0) {
          pVVar10 = Gizmo::Gizmo_get_RelativeDragOffset
                              ((Vector3 *)&stack0xffffffc0,pGVar8,(MethodInfo *)0x0);
          uVar22._0_4_ = pVVar10->x;
          uVar22._4_4_ = pVVar10->y;
          fVar23 = pVVar10->z;
          pGVar2 = (this->fields)._offsetDrag;
          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
            pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
            uVar24 = pVVar10->x;
            uVar25 = pVVar10->y;
            fVar26 = _UNK_?;
            if (0.0 <= (float)uVar25 * SUB84(uVar22,4) + (float)uVar24 * (float)uVar22 +
                       pVVar10->z * fVar23) {
              fVar26 = _UNK_?;
            }
            fVar12 = fVar26 * fVar15 + fVar12 * fVar7;
            fVar7 = 0.0;
            if (0.0 <= fVar12) {
              fVar7 = fVar12;
            }
            fVar15 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
            fVar15 = fVar7 / fVar15;
            pVVar10 = CapsuleColliderGizmo3D_CalcScalePivot
                                ((Vector3 *)&stack0xffffffc0,this,handleId,(MethodInfo *)0x0);
            uVar27._0_4_ = pVVar10->x;
            uVar27._4_4_ = pVVar10->y;
            fVar12 = pVVar10->z;
            pGVar2 = (this->fields)._offsetDrag;
            if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                  ((Vector3 *)&stack0xffffffc0,pGVar2,(MethodInfo *)0x0);
              uVar28 = pVVar10->x;
              uVar29 = pVVar10->y;
              fVar12 = fVar12 + pVVar10->z * fVar7 * _UNK_?;
              uVar30._4_4_ = SUB84(uVar27,4) + (float)uVar29 * fVar7 * _UNK_?;
              uVar30._0_4_ = (float)uVar27 + (float)uVar28 * fVar7 * _UNK_?;
              if ((this->fields)._sharedHotkeys == (CapsuleColliderGizmo3DHotkeys *)0x0) {
                pCVar3 = (this->fields)._hotkeys;
                if (pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) goto code_?;
              }
              else {
                pCVar3 = (this->fields)._sharedHotkeys;
              }
              pHVar4 = (pCVar3->fields)._scaleFromCenter;
              if (pHVar4 != (Hotkeys *)0x0) {
                bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                  pCVar20 = (this->fields)._targetCollider;
                  if ((pCVar20 == (CapsuleCollider *)0x0) ||
                     (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar20,(MethodInfo *)0x0),
                     pTVar21 == (Transform *)0x0)) goto code_?;
                  position_01.z = fVar12;
                  position_01.x = (float)uVar30;
                  position_01.y = SUB84(uVar30,4);
                  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_InverseTransformPoint
                                      ((Vector3 *)&stack0xffffffc0,pTVar21,position_01,
                                       (MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_center(pCVar20,*pVVar10,(MethodInfo *)0x0);
                }
                pCVar20 = (this->fields)._targetCollider;
                if (pCVar20 != (CapsuleCollider *)0x0) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_set_height(pCVar20,fVar15,(MethodInfo *)0x0);
                  pCVar20 = (this->fields)._targetCollider;
                  if (pCVar20 != (CapsuleCollider *)0x0) {
                    fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                             CapsuleCollider_get_height(pCVar20,(MethodInfo *)0x0);
                    pCVar20 = (this->fields)._targetCollider;
                    if (pCVar20 != (CapsuleCollider *)0x0) {
                      fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                               CapsuleCollider_get_radius(pCVar20,(MethodInfo *)0x0);
                      if (fVar12 + fVar12 <= fVar7) goto code_?;
                      pCVar20 = (this->fields)._targetCollider;
                      if (pCVar20 != (CapsuleCollider *)0x0) {
                        puVar31 = &UNK_?;
                        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                 CapsuleCollider_get_radius(pCVar20,(MethodInfo *)0x0);
                        puVar32 = &UNK_?;
                        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                        CapsuleCollider_set_height(pCVar20,fVar7 + fVar7,(MethodInfo *)0x0);
                        this_00 = (this->fields)._targetCollider;
                        if (this_00 != (CapsuleCollider *)0x0) {
                          fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                   CapsuleCollider_get_height(this_00,(MethodInfo *)0x0);
                          fVar7 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
                          fVar7 = fVar7 * fVar12;
                          pGVar2 = (this->fields)._offsetDrag;
                          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                            pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                                ((Vector3 *)&stack0xffffffc0,pGVar2,
                                                 (MethodInfo *)0x0);
                            uVar33 = pVVar10->x;
                            uVar34 = pVVar10->y;
                            fVar7 = fVar7 - 4.167488e-29;
                            fVar12 = (float)puVar31 + pVVar10->z * fVar7 * _UNK_?;
                            uVar35._4_4_ = (float)puVar32 + (float)uVar34 * fVar7 * _UNK_?;
                            uVar35._0_4_ = (float)pCVar20 + (float)uVar33 * fVar7 * _UNK_?;
                            if ((this->fields)._sharedHotkeys ==
                                (CapsuleColliderGizmo3DHotkeys *)0x0) {
                              pCVar3 = (this->fields)._hotkeys;
                              if (pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0)
                              goto code_?;
                            }
                            else {
                              pCVar3 = (this->fields)._sharedHotkeys;
                            }
                            pHVar4 = (pCVar3->fields)._scaleFromCenter;
                            if (pHVar4 != (Hotkeys *)0x0) {
                              bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                              if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                                pCVar20 = (this->fields)._targetCollider;
                                if ((pCVar20 == (CapsuleCollider *)0x0) ||
                                   (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)pCVar20,(MethodInfo *)0x0),
                                   pTVar21 == (Transform *)0x0)) goto code_?;
                                position.z = fVar12;
                                position.x = (float)uVar35;
                                position.y = SUB84(uVar35,4);
                                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_InverseTransformPoint
                                                    ((Vector3 *)&stack0xffffffc0,pTVar21,position,
                                                     (MethodInfo *)0x0);
                                UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                CapsuleCollider_set_center(pCVar20,*pVVar10,(MethodInfo *)0x0);
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
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
    pVVar3 = CapsuleColliderGizmo3D_CalcWorldCenter
                        ((Vector3 *)&stack0xffffffc8,this,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    pCVar7 = (this->fields)._targetCollider;
    if (pCVar7 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                (pCVar7,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar7 = (this->fields)._targetCollider;
      if (pCVar7 != (CapsuleCollider *)0x0) {
        fVar8 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_height(pCVar7,(MethodInfo *)0x0);
        fVar9 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        fVar9 = fVar9 * fVar8;
        pQVar10 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff10,this,(MethodInfo *)0x0);
        fVar8 = pQVar10->x;
        fVar11 = pQVar10->y;
        puVar12 = (undefined *)pQVar10->z;
        uVar13 = pQVar10->x;
        uVar14 = pQVar10->y;
        uVar15 = pQVar10->z;
        q.z = (float)uVar15;
        q.y = (float)uVar14;
        q.x = (float)uVar13;
        fVar16 = pQVar10->w;
        QVar17 = *pQVar10;
        QVar18 = *pQVar10;
        fVar19 = pQVar10->x;
        fVar20 = pQVar10->z;
        fVar21 = pQVar10->w;
        pCVar7 = (this->fields)._targetCollider;
        if ((pCVar7 != (CapsuleCollider *)0x0) &&
           (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar7,(MethodInfo *)0x0), pTVar22 != (Transform *)0x0
           )) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xffffffc8,pTVar22,(MethodInfo *)0x0);
          rotation.y = 0.0;
          rotation.x = fVar19;
          rotation.z = fVar20;
          rotation.w = fVar21;
          UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                    ((Vector3 *)&stack0xffffffc8,rotation,*pVVar3,(MethodInfo *)0x0);
          pCVar7 = (this->fields)._targetCollider;
          if ((pCVar7 != (CapsuleCollider *)0x0) &&
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar7,(MethodInfo *)0x0),
             pTVar22 != (Transform *)0x0)) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffc8,pTVar22,(MethodInfo *)0x0);
            fVar21 = fVar8;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffc8,QVar18,*pVVar3,(MethodInfo *)0x0);
            puVar23 = (undefined *)pVVar3->x;
            fVar19 = pVVar3->y;
            fVar20 = pVVar3->z;
            pCVar7 = (this->fields)._targetCollider;
            if ((pCVar7 != (CapsuleCollider *)0x0) &&
               (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar7,(MethodInfo *)0x0),
               pTVar22 != (Transform *)0x0)) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)&stack0xffffffc8,pTVar22,(MethodInfo *)0x0);
              fVar24 = pVVar3->x;
              fVar25 = pVVar3->y;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_op_Multiply_1
                                  ((Vector3 *)&stack0xffffffc8,QVar17,*pVVar3,(MethodInfo *)0x0);
              uVar26 = pVVar3->x;
              uVar27 = pVVar3->y;
              fVar28 = pVVar3->z;
              if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              this_01 = (GizmoLineMaterial *)
                        Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                  (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
              if (this_01 != (GizmoLineMaterial *)0x0) {
                GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                          (this_01,(MethodInfo *)0x0);
                if ((this->fields)._sharedLookAndFeel == (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
                  pCVar29 = (this->fields)._lookAndFeel;
                  if (pCVar29 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pCVar29 = (this->fields)._sharedLookAndFeel;
                }
                GizmoLineMaterial::GizmoLineMaterial_SetColor
                          (this_01,(pCVar29->fields)._wireColor,(MethodInfo *)0x0);
                GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                fVar30 = fVar9 - (fVar21 + fVar21);
                fVar31 = fVar5;
                fVar32 = fVar6;
                fVar33 = fVar19;
                fVar34 = fVar20;
                if (0.0 < fVar30) {
                  fVar31 = (fVar4 - fVar16 * fVar21) - (float)puVar23 * fVar30 * _UNK_?;
                  fVar32 = (fVar5 - fVar24 * fVar21) - fVar19 * fVar30 * _UNK_?;
                  fVar5 = (fVar5 - fVar24 * fVar21) + fVar19 * fVar30 * _UNK_?;
                  fVar35 = 0.0;
                  startPoint.y = fVar32;
                  startPoint.x = fVar31;
                  startPoint.z = fVar5;
                  endPoint_01.y = fVar5;
                  endPoint_01.x = (fVar4 - fVar16 * fVar21) + (float)puVar23 * fVar30 * _UNK_?
                  ;
                  endPoint_01.z = (fVar6 - fVar25 * fVar21) + fVar20 * fVar30 * _UNK_?;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint_01,(MethodInfo *)0x0);
                  fVar9 = (fVar32 + fVar25 * fVar21) - fVar20 * fVar30 * _UNK_?;
                  fVar33 = (fVar4 + fVar16 * fVar21) - fVar35 * fVar30 * _UNK_?;
                  fVar34 = (fVar31 + fVar24 * fVar21) - fVar19 * fVar30 * _UNK_?;
                  fVar5 = fVar24 * fVar21 + fVar31 + fVar19 * fVar30 * _UNK_?;
                  puVar23 = &UNK_?;
                  startPoint_00.y = fVar34;
                  startPoint_00.x = fVar33;
                  startPoint_00.z = fVar9;
                  endPoint_02.y = fVar5;
                  endPoint_02.x = fVar16 * fVar21 + fVar4 + fVar35 * fVar30 * _UNK_?;
                  endPoint_02.z = fVar25 * fVar21 + fVar32 + fVar20 * fVar30 * _UNK_?;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_02,(MethodInfo *)0x0);
                  this = (CapsuleColliderGizmo3D *)
                         ((fVar4 - (float)uVar26 * fVar21) + (float)puVar23 * fVar5 * _UNK_?);
                  camera = (Camera *)
                           ((fVar31 - (float)uVar27 * fVar21) + fVar33 * fVar5 * _UNK_?);
                  stack0xfffffffc =
                       (fVar31 - (float)uVar27 * fVar21) - fVar33 * fVar5 * _UNK_?;
                  fStack_36 = (fVar4 - (float)uVar26 * fVar21) - (float)puVar23 * fVar5 * _UNK_?
                  ;
                  VVar37.z = (fVar32 - fVar28 * fVar21) - fVar34 * fVar5 * _UNK_?;
                  VVar37 = (Vector3)CONCAT48(VVar37.z,uVar38);
                  endPoint.y = (float)camera;
                  endPoint.x = (float)this;
                  endPoint.z = (fVar32 - fVar28 * fVar21) + fVar34 * fVar5 * _UNK_?;
                  GLRenderer::GLRenderer_DrawLine3D(VVar37,endPoint,(MethodInfo *)0x0);
                  VVar37.y = (fVar31 + (float)uVar27 * fVar21) - fVar33 * fVar5 * _UNK_?;
                  VVar37.x = (fVar4 + (float)uVar26 * fVar21) - (float)puVar23 * fVar5 * _UNK_?
                  ;
                  VVar37.z = (fVar32 + fVar28 * fVar21) - fVar34 * fVar5 * _UNK_?;
                  endPoint_00.y = fVar31 + (float)uVar27 * fVar21 + fVar33 * fVar5 * _UNK_?;
                  endPoint_00.x =
                       fVar4 + (float)uVar26 * fVar21 + (float)puVar23 * fVar5 * _UNK_?;
                  endPoint_00.z = fVar32 + fVar28 * fVar21 + fVar34 * fVar5 * _UNK_?;
                  GLRenderer::GLRenderer_DrawLine3D(VVar37,endPoint_00,(MethodInfo *)0x0);
                }
                fVar39 = 1.0;
                fVar5 = fVar9 * _UNK_? - fVar21;
                fVar28 = fVar4 + (float)puVar23 * fVar5;
                fVar30 = fVar31 + fVar33 * fVar5;
                fVar35 = fVar32 + fVar34 * fVar5;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                pos.y = fVar30;
                pos.x = fVar28;
                pos.z = fVar35;
                q.w = (float)&UNK_?;
                s.y = fVar21;
                s.x = fVar21;
                s.z = fVar39;
                fVar20 = fVar21;
                fVar25 = fVar21;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos,q,s,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                auVar41._4_8_ = 0;
                auVar41._0_4_ = _UNK_?;
                fVar24 = _UNK_?;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&puStack_42,(Vector3)(auVar41 << 0x20),
                                     (MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar16 = pQVar10->z;
                fVar19 = pQVar10->w;
                puVar43 = &UNK_?;
                pos_00.y = fVar30;
                pos_00.x = fVar28;
                pos_00.z = fVar35;
                QVar18.y = (fVar6 * 4.167812e-29 + fVar19 * fVar11 + fVar5 * (float)puVar12) -
                           fVar8 * fVar16;
                QVar18.x = (fVar8 * fVar19 + fVar5 * 4.167812e-29 + fVar16 * fVar11) -
                           fVar6 * (float)puVar12;
                QVar18.z = (fVar16 * 4.167812e-29 + fVar19 * (float)puVar12 + fVar8 * fVar6) -
                           fVar5 * fVar11;
                QVar18.w = ((fVar19 * 4.167812e-29 - fVar8 * fVar5) - fVar6 * fVar11) -
                           fVar16 * (float)puVar12;
                s_00.y = fVar20;
                s_00.x = fVar21;
                s_00.z = fVar39;
                puStack_42 = puVar12;
                puStack_44 = puVar12;
                puStack_45 = puVar12;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos_00,QVar18,s_00,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                euler.y = 0.0;
                euler.z = 0.0;
                euler.x = fVar24;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffc8,euler,(MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar16 = pQVar10->z;
                fVar19 = pQVar10->w;
                pos_01.y = fVar30;
                pos_01.x = fVar28;
                pos_01.z = fVar35;
                QVar17.y = ((float)puVar43 * fVar6 + fVar19 * fVar11 + fVar5 * (float)puStack_42) -
                           fVar8 * fVar16;
                QVar17.x = (fVar8 * fVar19 + (float)puVar43 * fVar5 + fVar16 * fVar11) -
                           fVar6 * (float)puStack_42;
                QVar17.z = ((float)puVar43 * fVar16 + fVar19 * (float)puStack_42 + fVar8 * fVar6) -
                           fVar5 * fVar11;
                QVar17.w = (((float)puVar43 * fVar19 - fVar8 * fVar5) - fVar6 * fVar11) -
                           fVar16 * (float)puStack_42;
                s_01.y = fVar25;
                s_01.x = fVar25;
                s_01.z = fVar25;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos_01,QVar17,s_01,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                fVar5 = fVar9 * _UNK_? - fVar25;
                fVar4 = fVar4 - (float)puVar23 * fVar5;
                fVar31 = fVar31 - fVar33 * fVar5;
                fVar32 = fVar32 - fVar34 * fVar5;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffa0,
                                     (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar9 = pQVar10->z;
                fVar16 = pQVar10->w;
                pos_02.y = fVar31;
                pos_02.x = fVar4;
                pos_02.z = fVar32;
                q_00.y = ((float)puVar43 * fVar6 + fVar16 * fVar11 + fVar5 * (float)puStack_42) -
                         fVar8 * fVar9;
                q_00.x = (fVar8 * fVar16 + (float)puVar43 * fVar5 + fVar9 * fVar11) -
                         fVar6 * (float)puStack_42;
                q_00.z = ((float)puVar43 * fVar9 + fVar16 * (float)puStack_42 + fVar8 * fVar6) -
                         fVar5 * fVar11;
                q_00.w = (((float)puVar43 * fVar16 - fVar8 * fVar5) - fVar6 * fVar11) -
                         fVar9 * (float)puStack_42;
                s_02.y = fVar20;
                s_02.x = fVar21;
                s_02.z = fVar39;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos_02,q_00,s_02,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                auVar46._4_8_ = 0;
                auVar46._0_4_ = fVar24;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar46 << 0x20),
                                     (MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar9 = pQVar10->z;
                fVar16 = pQVar10->w;
                fVar19 = (fVar8 * fVar16 + (float)puVar43 * fVar5 + fVar9 * fVar11) -
                        fVar6 * (float)puStack_42;
                fVar28 = ((float)puVar43 * fVar6 + fVar16 * fVar11 + fVar5 * (float)puStack_42) -
                         fVar8 * fVar9;
                fVar33 = ((float)puVar43 * fVar9 + fVar16 * (float)puStack_42 + fVar8 * fVar6) -
                         fVar5 * fVar11;
                fVar34 = (((float)puVar43 * fVar16 - fVar8 * fVar5) - fVar6 * fVar11) -
                         fVar9 * (float)puStack_42;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffa0,
                                     (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar9 = pQVar10->z;
                fVar16 = pQVar10->w;
                pos_03.y = fVar31;
                pos_03.x = fVar4;
                pos_03.z = fVar32;
                q_01.y = (fVar16 * fVar28 + fVar6 * fVar34 + fVar5 * fVar33) - fVar9 * fVar19;
                q_01.x = (fVar16 * fVar19 + fVar5 * fVar34 + fVar9 * fVar28) - fVar6 * fVar33;
                q_01.z = (fVar16 * fVar33 + fVar9 * fVar34 + fVar6 * fVar19) - fVar5 * fVar28;
                q_01.w = ((fVar16 * fVar34 - fVar5 * fVar19) - fVar6 * fVar28) - fVar9 * fVar33;
                s_03.y = fVar20;
                s_03.x = fVar21;
                s_03.z = fVar39;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos_03,q_01,s_03,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                euler_00.y = 0.0;
                euler_00.z = 0.0;
                euler_00.x = fVar24;
                pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff10,euler_00,(MethodInfo *)0x0);
                fVar5 = pQVar10->x;
                fVar6 = pQVar10->y;
                fVar9 = pQVar10->z;
                fVar16 = pQVar10->w;
                pos_04.y = fVar31;
                pos_04.x = fVar4;
                pos_04.z = fVar32;
                q_02.y = ((float)puVar43 * fVar6 + fVar16 * fVar11 + fVar5 * (float)puStack_42) -
                         fVar8 * fVar9;
                q_02.x = (fVar8 * fVar16 + (float)puVar43 * fVar5 + fVar9 * fVar11) -
                         fVar6 * (float)puStack_42;
                q_02.z = ((float)puVar43 * fVar9 + fVar16 * (float)puStack_42 + fVar8 * fVar6) -
                         fVar5 * fVar11;
                q_02.w = (((float)puVar43 * fVar16 - fVar8 * fVar5) - fVar6 * fVar11) -
                         fVar9 * (float)puStack_42;
                s_04.y = fVar25;
                s_04.x = fVar25;
                s_04.z = fVar25;
                pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffec0,pos_04,q_02,s_04,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar40,(MethodInfo *)0x0);
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
code_?:
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


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_SetupSharedLookAndFeel
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
    pCVar1 = (this->fields)._lookAndFeel;
    if (pCVar1 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pCVar1 = (this->fields)._sharedLookAndFeel;
  }
  pGVar2 = (pCVar1->fields)._tickLookAndFeel;
  pGVar3 = (this->fields)._rightTick;
  if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      func_?();
    }
    else {
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoCap2D *)0x0) {
        (pGVar3->fields)._sharedLookAndFeel = pGVar4;
        ppGVar5 = &(pGVar3->fields)._sharedLookAndFeel;
        func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_UpdateHandles
               (CapsuleColliderGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  fVar1 = VStack_2.z;
  fVar3 = VStack_4.z;
  if (this_00 != (Gizmo *)0x0) {
    pCVar5 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    CapsuleColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
    pCVar6 = (this->fields)._targetCollider;
    fVar1 = VStack_2.z;
    fVar3 = VStack_4.z;
    if (pCVar6 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                (pCVar6,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar6 = (this->fields)._targetCollider;
      fVar1 = VStack_2.z;
      fVar3 = VStack_4.z;
      if (pCVar6 != (CapsuleCollider *)0x0) {
        fVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                 CapsuleCollider_get_height(pCVar6,(MethodInfo *)0x0);
        fVar7 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        fVar7 = fVar7 * fVar1;
        pQVar8 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff60,this,(MethodInfo *)0x0);
        VStack_2.x = pQVar8->x;
        VStack_2.y = pQVar8->y;
        VStack_2.z = pQVar8->z;
        puStack_9 = (undefined *)pQVar8->w;
        pCVar6 = (this->fields)._targetCollider;
        fVar1 = VStack_2.z;
        fVar3 = VStack_4.z;
        if (pCVar6 != (CapsuleCollider *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar6,(MethodInfo *)0x0);
          fVar1 = VStack_2.z;
          fVar3 = VStack_4.z;
          if (pTVar10 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&stack0xffffffe0,pTVar10,(MethodInfo *)0x0);
            rotation.y = VStack_2.y;
            rotation.x = VStack_2.x;
            rotation.z = VStack_2.z;
            rotation.w = (float)puStack_9;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffe0,rotation,*pVVar11,(MethodInfo *)0x0);
            uVar12._0_4_ = pVVar11->x;
            fStack_13 = pVVar11->y;
            fVar14 = pVVar11->z;
            pCVar6 = (this->fields)._targetCollider;
            fVar1 = VStack_2.z;
            VStack_4._0_8_ = uVar12;
            fVar3 = fVar14;
            if (pCVar6 != (CapsuleCollider *)0x0) {
              VStack_4.z = fVar14;
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar6,(MethodInfo *)0x0);
              fVar1 = VStack_2.z;
              fVar3 = VStack_4.z;
              if (pTVar10 != (Transform *)0x0) {
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)&stack0xffffffe0,pTVar10,(MethodInfo *)0x0);
                puVar15 = puStack_9;
                fVar16 = pVVar11->x;
                rotation_00.y = VStack_2.y;
                rotation_00.x = VStack_2.x;
                rotation_00.z = VStack_2.z;
                rotation_00.w = (float)puVar15;
                fVar17 = VStack_2.x;
                pCVar18 = (Camera *)VStack_2.y;
                fVar19 = VStack_2.z;
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffe0,rotation_00,*pVVar11,
                                     (MethodInfo *)0x0);
                uVar20._0_4_ = pVVar11->x;
                uVar20._4_4_ = pVVar11->y;
                fVar21 = pVVar11->z;
                pCVar6 = (this->fields)._targetCollider;
                fVar1 = VStack_2.z;
                fVar3 = VStack_4.z;
                if (pCVar6 != (CapsuleCollider *)0x0) {
                  fVar22 = (float)(undefined4)uVar20;
                  fVar23 = (float)uVar20._4_4_;
                  fVar24 = fVar21;
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar6,(MethodInfo *)0x0);
                  fVar1 = VStack_2.z;
                  fVar3 = VStack_4.z;
                  if (pTVar10 != (Transform *)0x0) {
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward
                                        ((Vector3 *)&stack0xffffffe0,pTVar10,(MethodInfo *)0x0);
                    rotation_01.y = VStack_2.y;
                    rotation_01.x = VStack_2.x;
                    rotation_01.z = VStack_2.z;
                    rotation_01.w = (float)puStack_9;
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        ((Vector3 *)&stack0xffffffe0,rotation_01,*pVVar11,
                                         (MethodInfo *)0x0);
                    uVar25 = pVVar11->x;
                    uVar26 = pVVar11->y;
                    puVar27 = (undefined *)pVVar11->z;
                    fVar28 = fVar19 - VStack_4.x * fVar17;
                    fVar29 = (float)puVar15 - VStack_4.y * fVar17;
                    fVar30 = fVar16 - VStack_4.z * fVar17;
                    pGVar31 = (this->fields)._leftTick;
                    VStack_2.y = (float)uVar25;
                    fVar1 = (float)uVar26;
                    puStack_9 = puVar27;
                    fVar3 = VStack_4.z;
                    if (pCVar5 != (Camera *)0x0) {
                      position.y = fVar29;
                      position.x = fVar28;
                      position.z = fVar30;
                      VStack_2.z = (float)uVar26;
                      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffd0,pCVar18,position,
                                           (MethodInfo *)0x0);
                      value.x = pVVar11->x;
                      value.y = pVVar11->y;
                      fVar1 = VStack_2.z;
                      fVar3 = VStack_4.z;
                      if ((pGVar31 != (GizmoCap2D *)0x0) &&
                         (pGVar32 = (pGVar31->fields)._transform, pGVar32 != (GizmoTransform *)0x0)) {
                        GizmoTransform::GizmoTransform_set_Position2D
                                  (pGVar32,value,(MethodInfo *)0x0);
                        pCVar33 = (this->fields)._extentTicks;
                        fVar1 = VStack_2.z;
                        fVar3 = VStack_4.z;
                        if (pCVar33 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                          if (pCVar33->max_length < 3) goto code_?;
                          pCVar34 = pCVar33->vector[2];
                          if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                            (pCVar34->fields).Position.x = fVar28;
                            (pCVar34->fields).Position.y = fVar29;
                            (pCVar34->fields).Position.z = fVar30;
                            pCVar33 = (this->fields)._extentTicks;
                            if (pCVar33 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                              if (pCVar33->max_length < 3) goto code_?;
                              fVar30 = VStack_4.x;
                              fVar29 = VStack_4.y;
                              pCVar34 = pCVar33->vector[2];
                              VStack_4.x = (float)((uint)VStack_4.x ^
                                                                                                      
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                              VStack_4.y = (float)((uint)VStack_4.y ^
                                                                                                      
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                              fVar3 = (float)((uint)VStack_4.z ^
                                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                              );
                              if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                (pCVar34->fields).Normal.x = VStack_4.x;
                                (pCVar34->fields).Normal.y = VStack_4.y;
                                (pCVar34->fields).Normal.z = fVar3;
                                fVar28 = fVar19 + fVar30 * fVar17;
                                fVar29 = (float)puVar15 + fVar29 * fVar17;
                                fVar30 = fVar16 + VStack_4.z * fVar17;
                                pGVar31 = (this->fields)._rightTick;
                                position_00.y = fVar29;
                                position_00.x = fVar28;
                                position_00.z = fVar30;
                                VStack_4.z = fVar3;
                                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_WorldToScreenPoint_1
                                                    (&VStack_4,pCVar18,position_00,
                                                     (MethodInfo *)0x0);
                                value_00.x = pVVar11->x;
                                value_00.y = pVVar11->y;
                                fVar1 = VStack_2.z;
                                fVar3 = VStack_4.z;
                                if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                   (pGVar32 = (pGVar31->fields)._transform,
                                   pGVar32 != (GizmoTransform *)0x0)) {
                                  GizmoTransform::GizmoTransform_set_Position2D
                                            (pGVar32,value_00,(MethodInfo *)0x0);
                                  pCVar33 = (this->fields)._extentTicks;
                                  fVar1 = VStack_2.z;
                                  fVar3 = VStack_4.z;
                                  if (pCVar33 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                    if (pCVar33->max_length < 4) goto code_?;
                                    pCVar34 = pCVar33->vector[3];
                                    if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                      (pCVar34->fields).Position.x = fVar28;
                                      (pCVar34->fields).Position.y = fVar29;
                                      (pCVar34->fields).Position.z = fVar30;
                                      pCVar33 = (this->fields)._extentTicks;
                                      if (pCVar33 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0)
                                      {
                                        if (pCVar33->max_length < 4) goto code_?;
                                        pCVar34 = pCVar33->vector[3];
                                        if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                          (pCVar34->fields).Normal.x = (float)uVar12;
                                          (pCVar34->fields).Normal.y = fStack_13;
                                          (pCVar34->fields).Normal.z = fVar14;
                                          fVar30 = (float)puVar15 + fVar23 * fVar7 * _UNK_?;
                                          fVar14 = fVar19 + fVar22 * fVar7 * _UNK_?;
                                          uVar12._0_4_ = fVar16 + fVar21 * fVar7 * _UNK_?;
                                          pGVar31 = (this->fields)._topTick;
                                          position_01.y = fVar30;
                                          position_01.x = fVar14;
                                          position_01.z = (float)uVar12;
                                          pCVar5 = pCVar18;
                                          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera
                                                    ::Camera_WorldToScreenPoint_1
                                                              (&VStack_4,pCVar18,position_01,
                                                               (MethodInfo *)0x0);
                                          value_01.x = pVVar11->x;
                                          value_01.y = pVVar11->y;
                                          fVar1 = VStack_2.z;
                                          fVar3 = VStack_4.z;
                                          if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                             (pGVar32 = (pGVar31->fields)._transform,
                                             pGVar32 != (GizmoTransform *)0x0)) {
                                            GizmoTransform::GizmoTransform_set_Position2D
                                                      (pGVar32,value_01,(MethodInfo *)0x0);
                                            pCVar33 = (this->fields)._extentTicks;
                                            fVar1 = VStack_2.z;
                                            fVar3 = VStack_4.z;
                                            if (pCVar33 != (CapsuleColliderGizmo3D_ExtentTick__Array
                                                           *)0x0) {
                                              if (pCVar33->max_length < 6) goto code_?;
                                              pCVar34 = pCVar33->vector[5];
                                              if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *)0x0
                                                 ) {
                                                (pCVar34->fields).Position.x = fVar14;
                                                (pCVar34->fields).Position.y = fVar30;
                                                (pCVar34->fields).Position.z = (float)uVar12;
                                                pCVar33 = (this->fields)._extentTicks;
                                                if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                  if (pCVar33->max_length < 6) goto code_?;
                                                  pCVar34 = pCVar33->vector[5];
                                                  if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar34->fields).Normal.x = (float)(int)uVar20;
                                                    (pCVar34->fields).Normal.y =
                                                         (float)(int)((ulonglong)uVar20 >> 0x20);
                                                    (pCVar34->fields).Normal.z = fVar24;
                                                    fVar14 = fVar19 - fVar22 * fVar7 *
                                                                      _UNK_?;
                                                    uVar12._0_4_ = (float)puVar15 -
                                                                   fVar23 * fVar7 * _UNK_?;
                                                    fVar7 = fVar16 - fVar21 * fVar7 * _UNK_?
                                                    ;
                                                    pGVar31 = (this->fields)._bottomTick;
                                                    position_02.y = (float)uVar12;
                                                    position_02.x = fVar14;
                                                    position_02.z = fVar7;
                                                    pVVar11 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_4,pCVar18,
                                                                         position_02,
                                                                         (MethodInfo *)0x0);
                                                    value_02.x = pVVar11->x;
                                                    value_02.y = pVVar11->y;
                                                    fVar1 = VStack_2.z;
                                                    fVar3 = VStack_4.z;
                                                    if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                       (pGVar32 = (pGVar31->fields)._transform,
                                                       pGVar32 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar32,value_02,(MethodInfo *)0x0);
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      fVar1 = VStack_2.z;
                                                      fVar3 = VStack_4.z;
                                                      if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length < 5)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[4];
                                                    if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar34->fields).Position.x = fVar14;
                                                      (pCVar34->fields).Position.y = (float)uVar12;
                                                      (pCVar34->fields).Position.z = fVar7;
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length < 5)
                                                    goto code_?;
                                                    VStack_4.y = (float)((uint)fVar23 ^
                                                                                                                                                  
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  pCVar34 = pCVar33->vector[4];
                                                  VStack_4.z = (float)((uint)fVar21 ^
                                                                                                                                              
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  VStack_4.x = (float)((uint)fVar22 ^
                                                                                                                                              
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  fVar3 = VStack_4.z;
                                                  if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar34->fields).Normal.x =
                                                         (float)((uint)fVar22 ^
                                                                                                                                
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  (pCVar34->fields).Normal.y = VStack_4.y;
                                                  (pCVar34->fields).Normal.z = VStack_4.z;
                                                  fVar14 = (float)puVar15 - VStack_2.z * fVar17;
                                                  uVar12._0_4_ = fVar19 - VStack_2.y * fVar17;
                                                  fVar7 = fVar16 - (float)puStack_9 * fVar17;
                                                  pGVar31 = (this->fields)._frontTick;
                                                  position_03.y = fVar14;
                                                  position_03.x = (float)uVar12;
                                                  position_03.z = fVar7;
                                                  pCVar18 = (Camera *)VStack_2.y;
                                                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      (&VStack_4,pCVar5,
                                                                       position_03,(MethodInfo *)0x0
                                                                      );
                                                  value_03.x = pVVar11->x;
                                                  value_03.y = pVVar11->y;
                                                  fVar1 = VStack_2.z;
                                                  fVar3 = VStack_4.z;
                                                  if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                     (pGVar32 = (pGVar31->fields)._transform,
                                                     pGVar32 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar32,value_03,(MethodInfo *)0x0);
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    fVar1 = VStack_2.z;
                                                    fVar3 = VStack_4.z;
                                                    if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length == 0)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[0];
                                                    if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar34->fields).Position.x = (float)uVar12;
                                                      (pCVar34->fields).Position.y = fVar14;
                                                      (pCVar34->fields).Position.z = fVar7;
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length == 0)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[0];
                                                    VStack_2.x = (float)((uint)pCVar18 ^
                                                                                                                                                  
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  VStack_2.y = (float)((uint)VStack_2.z ^
                                                                                                                                              
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  fVar1 = (float)((uint)puStack_9 ^
                                                                                                                                    
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick *
                                                                )0x0) {
                                                    (pCVar34->fields).Normal.x = VStack_2.x;
                                                    (pCVar34->fields).Normal.y = VStack_2.y;
                                                    (pCVar34->fields).Normal.z = fVar1;
                                                    fVar19 = (float)pCVar18 * fVar17 + fVar19;
                                                    fVar7 = VStack_2.z * fVar17 + (float)puVar15;
                                                    fVar16 = (float)puStack_9 * fVar17 + fVar16;
                                                    pGVar31 = (this->fields)._backTick;
                                                    position_04.y = fVar7;
                                                    position_04.x = fVar19;
                                                    position_04.z = fVar16;
                                                    VStack_2.z = fVar1;
                                                    pVVar11 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_2,pCVar5,
                                                                         position_04,
                                                                         (MethodInfo *)0x0);
                                                    value_04.x = pVVar11->x;
                                                    value_04.y = pVVar11->y;
                                                    fVar1 = VStack_2.z;
                                                    fVar3 = VStack_4.z;
                                                    if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                       (pGVar32 = (pGVar31->fields)._transform,
                                                       pGVar32 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar32,value_04,(MethodInfo *)0x0);
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      fVar1 = VStack_2.z;
                                                      fVar3 = VStack_4.z;
                                                      if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length < 2)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[1];
                                                    if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar34->fields).Position.x = fVar19;
                                                      (pCVar34->fields).Position.y = fVar7;
                                                      (pCVar34->fields).Position.z = fVar16;
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      if (pCVar33 != (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar33->max_length < 2)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[1];
                                                    if (pCVar34 != (CapsuleColliderGizmo3D_ExtentTick
                                                                   *)0x0) {
                                                      (pCVar34->fields).Normal.x = (float)uVar25;
                                                      (pCVar34->fields).Normal.y = (float)uVar26;
                                                      (pCVar34->fields).Normal.z = (float)puVar27;
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
  VStack_4.z = fVar3;
  VStack_2.z = fVar1;
  func_?();
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
  if (pCVar2 == (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) goto code_?;
  if (pCVar2->max_length < 3) goto code_?;
  pCVar3 = (this->fields)._extentTicks;
  pCVar4 = pCVar2->vector[2];
  if (pCVar3->max_length < 4) goto code_?;
  pCVar5 = pCVar3->vector[3];
  if ((((pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
       (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
      (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
     (((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
       ((pPVar8->fields)._priority = 0, pCVar5 != (CapsuleColliderGizmo3D_ExtentTick *)0x0)) &&
      ((pGVar6 = (pCVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0 &&
       ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
        (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0)))))))) {
    (pPVar8->fields)._priority = 0;
    fVar9 = (pCVar4->fields).Position.z;
    uVar10._0_4_ = (pCVar4->fields).Position.x;
    uVar10._4_4_ = (pCVar4->fields).Position.y;
    VVar11 = (pCVar4->fields).Normal;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    point.z = fVar9;
    point.x = (float)(int)uVar10;
    point.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    bVar12 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar11,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      pGVar6 = (pCVar5->fields).Tick;
      if ((pGVar6 != (GizmoCap2D *)0x0) &&
         (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
        pGVar6 = (pCVar4->fields).Tick;
code_?:
        pPVar8 = (pGVar7->fields)._hoverPriority2D;
        if (((pGVar6 != (GizmoCap2D *)0x0) &&
            (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
           (pPVar8 != (Priority *)0x0)) {
          Priority::Priority_MakeHigherThan
                    (pPVar8,(pGVar7->fields)._hoverPriority2D,(MethodInfo *)0x0);
          pCVar2 = (this->fields)._extentTicks;
          if (pCVar2 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
            if (pCVar2->max_length < 6) goto code_?;
            pCVar3 = (this->fields)._extentTicks;
            pCVar4 = pCVar2->vector[5];
            if (pCVar3->max_length < 5) goto code_?;
            pCVar5 = pCVar3->vector[4];
            if (((((pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
                  (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                 ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                  ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
                   ((pPVar8->fields)._priority = 2,
                   pCVar5 != (CapsuleColliderGizmo3D_ExtentTick *)0x0)))))) &&
                (pGVar6 = (pCVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
               ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0)))) {
              (pPVar8->fields)._priority = 2;
              fVar9 = (pCVar4->fields).Position.z;
              uVar13 = (pCVar4->fields).Position.x;
              uVar14 = (pCVar4->fields).Position.y;
              VVar11.y = (float)uVar14;
              VVar11.x = (float)uVar13;
              uVar15._0_4_ = (pCVar4->fields).Normal.x;
              uVar15._4_4_ = (pCVar4->fields).Normal.y;
              this = (CapsuleColliderGizmo3D *)(pCVar4->fields).Normal.z;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                this = (CapsuleColliderGizmo3D *)TypeInfo__RTG__CameraEx;
                func_?();
              }
              VVar11.z = fVar9;
              pointNormal.z = (float)this;
              pointNormal.x = (float)(int)uVar15;
              pointNormal.y = (float)(int)((ulonglong)uVar15 >> 0x20);
              bVar12 = CameraEx::CameraEx_IsPointFacingCamera
                                 (camera,VVar11,pointNormal,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                pGVar6 = (pCVar5->fields).Tick;
                if ((pGVar6 != (GizmoCap2D *)0x0) &&
                   (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
                  pGVar6 = (pCVar4->fields).Tick;
code_?:
                  pPVar8 = (pGVar7->fields)._hoverPriority2D;
                  if (((pGVar6 != (GizmoCap2D *)0x0) &&
                      (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
                     (pPVar8 != (Priority *)0x0)) {
                    Priority::Priority_MakeHigherThan
                              (pPVar8,(pGVar7->fields)._hoverPriority2D,(MethodInfo *)0x0);
                    pCVar2 = (pCVar1->fields)._extentTicks;
                    if (pCVar2 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                      if (pCVar2->max_length == 0) goto code_?;
                      pCVar3 = (pCVar1->fields)._extentTicks;
                      pCVar4 = pCVar2->vector[0];
                      if (pCVar3->max_length < 2) goto code_?;
                      pCVar5 = pCVar3->vector[1];
                      if ((((pCVar4 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) &&
                           (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                          ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                           ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0
                            && ((pPVar8->fields)._priority = 4,
                               pCVar5 != (CapsuleColliderGizmo3D_ExtentTick *)0x0)))))) &&
                         ((pGVar6 = (pCVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0 &&
                          ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                           (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0))
                          )))) {
                        (pPVar8->fields)._priority = 4;
                        fVar9 = (pCVar4->fields).Normal.z;
                        uVar16._0_4_ = (pCVar4->fields).Normal.x;
                        uVar16._4_4_ = (pCVar4->fields).Normal.y;
                        VVar11 = (pCVar4->fields).Position;
                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__RTG__CameraEx);
                        }
                        pointNormal_00.z = fVar9;
                        pointNormal_00.x = (float)(int)uVar16;
                        pointNormal_00.y = (float)(int)((ulonglong)uVar16 >> 0x20);
                        bVar12 = CameraEx::CameraEx_IsPointFacingCamera
                                           (camera,VVar11,pointNormal_00,(MethodInfo *)0x0);
                        if (bVar12 == 0) {
                          pGVar6 = (pCVar5->fields).Tick;
                          if ((pGVar6 != (GizmoCap2D *)0x0) &&
                             (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0))
                          {
                            pGVar6 = (pCVar4->fields).Tick;
code_?:
                            if (((pGVar6 != (GizmoCap2D *)0x0) &&
                                (pGVar17 = (pGVar6->fields)._._handle, pGVar17 != (GizmoHandle *)0x0)
                                ) && (pPVar8 = (pGVar7->fields)._hoverPriority2D,
                                     pPVar8 != (Priority *)0x0)) {
                              Priority::Priority_MakeHigherThan
                                        (pPVar8,(pGVar17->fields)._hoverPriority2D,(MethodInfo *)0x0)
                              ;
                              return;
                            }
                          }
                        }
                        else {
                          pGVar6 = (pCVar4->fields).Tick;
                          if ((pGVar6 != (GizmoCap2D *)0x0) &&
                             (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0))
                          {
                            pGVar6 = (pCVar5->fields).Tick;
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pGVar6 = (pCVar4->fields).Tick;
                if ((pGVar6 != (GizmoCap2D *)0x0) &&
                   (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
                  pGVar6 = (pCVar5->fields).Tick;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else {
      pGVar6 = (pCVar4->fields).Tick;
      if ((pGVar6 != (GizmoCap2D *)0x0) &&
         (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
        pGVar6 = (pCVar5->fields).Tick;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
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
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_16 = (float)uVar11;
      fStack_17 = (float)uVar12;
      fStack_18 = fVar5;
      if (pCVar14 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
        ppCStack_19 = pCVar14->vector;
        do {
          if ((int)pCVar14->max_length <= (int)uStack_13) {
            return;
          }
          if (pCVar14->max_length <= uStack_13) goto code_?;
          pCStack_20 = *ppCStack_19;
          if (pCStack_20 == (CapsuleColliderGizmo3D_ExtentTick *)0x0) break;
          this_00 = (pCStack_20->fields).Tick;
          this_01 = (this->fields)._._gizmo;
          if (((this_01 == (Gizmo *)0x0) ||
              (iVar21 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                        PointerCaptureEventBase`1[System::Object]::
                        PointerCaptureEventBase_1_System_Object__get_pointerId
                                  ((PointerCaptureEventBase_1_System_Object_ *)this_01,
                                   (MethodInfo *)0x0), this_00 == (GizmoCap2D *)0x0)) ||
             (pGVar22 = (this_00->fields)._._handle, pGVar22 == (GizmoHandle *)0x0)) break;
          if (iVar21 == (pGVar22->fields)._id) {
code_?:
            pGVar23 = (this_00->fields)._overrideFillColor;
            if (pGVar23 == (GizmoOverrideColor *)0x0) break;
            (pGVar23->fields)._isActive = 0;
            pGVar23 = (this_00->fields)._overrideBorderColor;
            if (pGVar23 == (GizmoOverrideColor *)0x0) break;
            (pGVar23->fields)._isActive = 0;
          }
          else {
            uVar24._0_4_ = (pCStack_20->fields).Position.x;
            uVar24._4_4_ = (pCStack_20->fields).Position.y;
            fStack_25 = (pCStack_20->fields).Position.z;
            uVar26._0_4_ = (pCStack_20->fields).Normal.x;
            uVar26._4_4_ = (pCStack_20->fields).Normal.y;
            pGStack_27 = (GizmoOverrideColor *)(pCStack_20->fields).Normal.z;
            fStack_10 = (float)(undefined4)uVar26;
            fStack_8 = (float)uVar26._4_4_;
            fStack_17 = (float)(undefined4)uVar24;
            fStack_18 = (float)uVar24._4_4_;
            if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__CameraEx);
              uVar24 = CONCAT44(fStack_18,fStack_17);
              uVar26 = CONCAT44(fStack_8,fStack_10);
            }
            point.z = fStack_25;
            point.x = (float)(int)uVar24;
            point.y = (float)(int)((ulonglong)uVar24 >> 0x20);
            pointNormal.z = (float)pGStack_27;
            pointNormal.x = (float)(int)uVar26;
            pointNormal.y = (float)(int)((ulonglong)uVar26 >> 0x20);
            bVar28 = CameraEx::CameraEx_IsPointFacingCamera
                               (camera,point,pointNormal,(MethodInfo *)0x0);
            if (bVar28 != 0) goto code_?;
            pGVar23 = (this_00->fields)._overrideFillColor;
            if (pGVar23 == (GizmoOverrideColor *)0x0) break;
            (pGVar23->fields)._isActive = 1;
            pGVar23 = (this_00->fields)._overrideBorderColor;
            if (pGVar23 == (GizmoOverrideColor *)0x0) break;
            (pGVar23->fields)._isActive = 1;
            pGVar29 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar29 == (GizmoCap2DLookAndFeel *)0x0) break;
            fStack_30 = (pGVar29->fields)._color.r;
            fStack_9 = (pGVar29->fields)._color.g;
            fStack_10 = (pGVar29->fields)._color.b;
            fStack_8 = (pGVar29->fields)._color.a;
            pGStack_27 = (this_00->fields)._overrideFillColor;
            if ((this->fields)._sharedLookAndFeel == (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
              pCVar31 = (this->fields)._lookAndFeel;
              if (pCVar31 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pCVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar29->fields)._color,
                                 fStack_8 * (pCVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
                                );
            fVar33 = pCVar32->g;
            fVar34 = pCVar32->b;
            fVar35 = pCVar32->a;
            if (pGStack_27 == (GizmoOverrideColor *)0x0) break;
            (pGStack_27->fields)._color.r = pCVar32->r;
            (pGStack_27->fields)._color.g = fVar33;
            (pGStack_27->fields)._color.b = fVar34;
            (pGStack_27->fields)._color.a = fVar35;
            pGVar29 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar29 == (GizmoCap2DLookAndFeel *)0x0) break;
            fStack_30 = (pGVar29->fields)._borderColor.r;
            fStack_9 = (pGVar29->fields)._borderColor.g;
            fStack_10 = (pGVar29->fields)._borderColor.b;
            fStack_8 = (pGVar29->fields)._borderColor.a;
            pGStack_27 = (this_00->fields)._overrideBorderColor;
            if ((this->fields)._sharedLookAndFeel == (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
              pCVar31 = (this->fields)._lookAndFeel;
              if (pCVar31 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pCVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar29->fields)._borderColor,
                                 fStack_8 * (pCVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
                                );
            fVar33 = pCVar32->g;
            fVar34 = pCVar32->b;
            fVar35 = pCVar32->a;
            if (pGStack_27 == (GizmoOverrideColor *)0x0) break;
            (pGStack_27->fields)._color.r = pCVar32->r;
            (pGStack_27->fields)._color.g = fVar33;
            (pGStack_27->fields)._color.b = fVar34;
            (pGStack_27->fields)._color.a = fVar35;
          }
          VStack_3.x = (pCStack_20->fields).Position.x;
          VStack_3.y = (pCStack_20->fields).Position.y;
          VStack_3.z = (pCStack_20->fields).Position.z;
          isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                            fVar5 * VStack_3.z + fStack_15;
          _bStack_20 = CONCAT31(uStack_36,isVisible);
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_00,isVisible,(MethodInfo *)0x0);
          uStack_13 = uStack_13 + 1;
          ppCStack_19 = ppCStack_19 + 1;
          pCVar14 = uStack_4._4_4_;
        } while( true );
      }
    }
  }
  func_?();
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
  (this->fields)._extentTicks = pCVar1;
  func_?(&(this->fields)._extentTicks,pCVar1);
  pLVar2 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._semiCirclePts = pLVar2;
  func_?(&(this->fields)._semiCirclePts,pLVar2);
  pLVar2 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._circlePts = pLVar2;
  func_?(&(this->fields)._circlePts,pLVar2);
  pCVar3 = TypeInfo__RTG__CapsuleCollider3DSnapshot;
  pCVar4 = (CapsuleCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar3);
  (this->fields)._preChangeColliderSnapshot = pCVar4;
  func_?();
  pCVar3 = TypeInfo__RTG__CapsuleCollider3DSnapshot;
  pCVar4 = (CapsuleCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar3);
  (this->fields)._postChangeColliderSnapshot = pCVar4;
  func_?(&(this->fields)._postChangeColliderSnapshot,pCVar4);
  this_00 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_00;
  func_?(&(this->fields)._offsetDrag,this_00);
  this_01 = (CapsuleColliderGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__CapsuleColliderGizmo3DLookAndFeel);
  CapsuleColliderGizmo3DLookAndFeel::CapsuleColliderGizmo3DLookAndFeel__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_01;
  func_?(&(this->fields)._lookAndFeel,this_01);
  method_00 = TypeInfo__RTG__CapsuleColliderGizmo3DSettings;
  value = (CapsuleColliderGizmo3DSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  (value->fields)._heightSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._settings = value;
  func_?();
  pCStack5 = TypeInfo__RTG__CapsuleColliderGizmo3DHotkeys;
  value_00 = (CapsuleColliderGizmo3DHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar6 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar6,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar6 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar6->fields)._lCtrl = 1;
    (value_00->fields)._enableSnapping = pHVar6;
    func_?();
    pHVar6 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar6,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar6 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar6,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar6->fields)._lShift = 1;
      (value_00->fields)._scaleFromCenter = pHVar6;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value_00,ExceptionArgument__Enum_obj,
                 (MethodInfo *)&(value_00->fields)._scaleFromCenter);
      (this->fields)._hotkeys = value_00;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_SharedLookAndFeel(CapsuleColliderGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::CapsuleColliderGizmo3D::CapsuleColliderGizmo3D_set_SharedLookAndFeel
               (CapsuleColliderGizmo3D *this,CapsuleColliderGizmo3DLookAndFeel *value,
               MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  CapsuleColliderGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

