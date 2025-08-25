
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
  pCVar7 = (&(this->fields)._settings)
           [(this->fields)._sharedSettings != (CapsuleColliderGizmo3DSettings *)0x0];
  if (pCVar7 == (CapsuleColliderGizmo3DSettings *)0x0) goto code_?;
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
    pCVar3 = (&(this->fields)._hotkeys)
              [(this->fields)._sharedHotkeys != (CapsuleColliderGizmo3DHotkeys *)0x0];
    if ((pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) ||
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
        fVar7 = pVVar10->z * fVar12 + fVar7;
        uVar19._4_4_ = (float)uVar18 * fVar12 + SUB84(uVar16,4);
        uVar19._0_4_ = (float)uVar17 * fVar12 + (float)uVar16;
        pCVar3 = (&(this->fields)._hotkeys)
                  [(this->fields)._sharedHotkeys != (CapsuleColliderGizmo3DHotkeys *)0x0];
        if ((pCVar3 == (CapsuleColliderGizmo3DHotkeys *)0x0) ||
           (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 == (Hotkeys *)0x0))
        goto code_?;
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
              fVar12 = pVVar10->z * fVar7 * _UNK_? + fVar12;
              uVar30._4_4_ = (float)uVar29 * fVar7 * _UNK_? + SUB84(uVar27,4);
              uVar30._0_4_ = (float)uVar28 * fVar7 * _UNK_? + (float)uVar27;
              pCVar3 = (&(this->fields)._hotkeys)
                        [(this->fields)._sharedHotkeys != (CapsuleColliderGizmo3DHotkeys *)0x0];
              if ((pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0) &&
                 (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
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
                          fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                                   CapsuleCollider_get_height(this_00,(MethodInfo *)0x0);
                          fVar12 = CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
                          pGVar2 = (this->fields)._offsetDrag;
                          fVar7 = fVar12 * fVar7 - 4.1711965e-29;
                          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                            pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                                ((Vector3 *)&stack0xffffffc0,pGVar2,
                                                 (MethodInfo *)0x0);
                            uVar33 = pVVar10->x;
                            uVar34 = pVVar10->y;
                            fVar12 = pVVar10->z * fVar7 * _UNK_? + (float)puVar31;
                            uVar35._4_4_ = (float)uVar34 * fVar7 * _UNK_? + (float)puVar32;
                            uVar35._0_4_ = (float)uVar33 * fVar7 * _UNK_? + (float)pCVar20;
                            pCVar3 = (&(this->fields)._hotkeys)
                                      [(this->fields)._sharedHotkeys !=
                                       (CapsuleColliderGizmo3DHotkeys *)0x0];
                            if ((pCVar3 != (CapsuleColliderGizmo3DHotkeys *)0x0) &&
                               (pHVar4 = (pCVar3->fields)._scaleFromCenter,
                               pHVar4 != (Hotkeys *)0x0)) {
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
    CapsuleColliderGizmo3D_CalcWorldCenter((Vector3 *)&fStack_3,this,(MethodInfo *)0x0);
    pCVar4 = (this->fields)._targetCollider;
    if (pCVar4 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                (pCVar4,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._targetCollider;
      if (pCVar4 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                  (pCVar4,(MethodInfo *)0x0);
        CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        pQVar5 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff20,this,(MethodInfo *)0x0);
        puVar6 = (undefined *)pQVar5->x;
        fVar7 = pQVar5->y;
        fVar8 = pQVar5->z;
        fVar9 = pQVar5->w;
        fVar10 = pQVar5->x;
        fVar11 = pQVar5->z;
        fVar12 = pQVar5->w;
        pCVar4 = (this->fields)._targetCollider;
        if ((pCVar4 != (CapsuleCollider *)0x0) &&
           (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar4,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0
           )) {
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&fStack_3,pTVar13,(MethodInfo *)0x0);
          rotation.y = 0.0;
          rotation.x = fVar10;
          rotation.z = fVar11;
          rotation.w = fVar12;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&fStack_3,rotation,*pVVar14,(MethodInfo *)0x0);
          uVar15 = pVVar14->y;
          fVar10 = pVVar14->z;
          pCVar4 = (this->fields)._targetCollider;
          if ((pCVar4 != (CapsuleCollider *)0x0) &&
             (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar4,(MethodInfo *)0x0),
             pTVar13 != (Transform *)0x0)) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&fStack_3,pTVar13,(MethodInfo *)0x0);
            rotation_00.y = fVar7;
            rotation_00.x = (float)puVar6;
            rotation_00.z = fVar8;
            rotation_00.w = fVar9;
            puVar16 = puVar6;
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&fStack_3,rotation_00,*pVVar14,(MethodInfo *)0x0);
            fVar8 = pVVar14->x;
            fVar9 = pVVar14->y;
            fVar11 = pVVar14->z;
            pCVar4 = (this->fields)._targetCollider;
            if (pCVar4 != (CapsuleCollider *)0x0) {
              puVar17 = &UNK_?;
              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar4,(MethodInfo *)0x0);
              if (pTVar13 != (Transform *)0x0) {
                puVar18 = &UNK_?;
                pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&fStack_3,pTVar13,(MethodInfo *)0x0);
                pVVar14 = (Vector3 *)&fStack_3;
                rotation_01.y = fVar7;
                rotation_01.x = (float)puVar6;
                rotation_01.z = (float)puVar17;
                rotation_01.w = (float)puVar18;
                pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1(pVVar14,rotation_01,*pVVar19,(MethodInfo *)0x0);
                uVar20 = pVVar19->x;
                uVar21 = pVVar19->y;
                if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_01 = (GizmoLineMaterial *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
                if (this_01 != (GizmoLineMaterial *)0x0) {
                  GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                            (this_01,(MethodInfo *)0x0);
                  pCVar22 = (&(this->fields)._lookAndFeel)
                           [(this->fields)._sharedLookAndFeel !=
                            (CapsuleColliderGizmo3DLookAndFeel *)0x0];
                  if (pCVar22 != (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
                    GizmoLineMaterial::GizmoLineMaterial_SetColor
                              (this_01,(pCVar22->fields)._wireColor,(MethodInfo *)0x0);
                    fVar23 = 0.0;
                    fVar12 = 0.0;
                    puVar17 = &UNK_?;
                    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                    fVar24 = fVar23 - ((float)puVar16 + (float)puVar16);
                    if (0.0 < fVar24) {
                      fVar25 = fVar8 * fVar24;
                      fVar26 = fVar9 * fVar24;
                      fVar27 = fVar11 * fVar24;
                      fVar11 = fVar11 * fVar24 * _UNK_? + (fVar12 - fVar10 * (float)puVar16);
                      fVar8 = fVar8 * fVar24 * _UNK_? +
                              ((float)puVar17 - (float)puVar16 * 0.0);
                      fVar9 = fVar9 * fVar24 * _UNK_? +
                              ((float)this_01 - (float)uVar15 * (float)puVar16);
                      startPoint_01.y =
                           ((float)this_01 - (float)uVar15 * (float)puVar16) - fVar26 * _UNK_?
                      ;
                      startPoint_01.x =
                           ((float)puVar17 - (float)puVar16 * 0.0) - fVar25 * _UNK_?;
                      startPoint_01.z = (fVar12 - fVar10 * (float)puVar16) - fVar27 * _UNK_?;
                      endPoint_01.y = fVar9;
                      endPoint_01.x = fVar8;
                      endPoint_01.z = fVar11;
                      GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0)
                      ;
                      fVar25 = ((float)puVar16 * 0.0 + (float)puVar17) -
                               fVar8 * fVar24 * _UNK_?;
                      endPoint_02.y =
                           fVar9 * fVar24 * _UNK_? +
                           (float)uVar15 * (float)puVar16 + (float)this_01;
                      endPoint_02.x =
                           fVar8 * fVar24 * _UNK_? + (float)puVar16 * 0.0 + (float)puVar17;
                      startPoint_02.y =
                           ((float)uVar15 * (float)puVar16 + (float)this_01) -
                           fVar9 * fVar24 * _UNK_?;
                      startPoint_02.x = fVar25;
                      startPoint_02.z =
                           (fVar10 * (float)puVar16 + fVar12) - fVar11 * fVar24 * _UNK_?;
                      endPoint_02.z =
                           fVar11 * fVar24 * _UNK_? + fVar10 * (float)puVar16 + fVar12;
                      GLRenderer::GLRenderer_DrawLine3D(startPoint_02,endPoint_02,(MethodInfo *)0x0)
                      ;
                      camera = (Camera *)
                               (((float)puVar17 - (float)uVar20 * (float)puVar16) -
                               fVar8 * fVar25 * _UNK_?);
                      endPoint.y = fVar9 * fVar25 * _UNK_? +
                                   ((float)this_01 - (float)uVar21 * (float)puVar16);
                      endPoint.x = fVar8 * fVar25 * _UNK_? +
                                   ((float)puVar17 - (float)uVar20 * (float)puVar16);
                      this = (CapsuleColliderGizmo3D *)&UNK_?;
                      startPoint.y = ((float)this_01 - (float)uVar21 * (float)puVar16) -
                                     fVar9 * fVar25 * _UNK_?;
                      startPoint.x = (float)camera;
                      startPoint.z = (fVar12 - (float)puVar16 * 4.1715158e-29) -
                                     fVar11 * fVar25 * _UNK_?;
                      endPoint.z = fVar11 * fVar25 * _UNK_? +
                                   (fVar12 - (float)puVar16 * 4.1715158e-29);
                      GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
                      startPoint_00.y =
                           ((float)uVar21 * (float)puVar16 + (float)this_01) -
                           fVar9 * fVar25 * _UNK_?;
                      startPoint_00.x =
                           ((float)uVar20 * (float)puVar16 + (float)puVar17) -
                           fVar8 * fVar25 * _UNK_?;
                      startPoint_00.z =
                           ((float)puVar16 * 4.1715158e-29 + fVar12) -
                           fVar11 * fVar25 * _UNK_?;
                      endPoint_00.y =
                           fVar9 * fVar25 * _UNK_? +
                           (float)uVar21 * (float)puVar16 + (float)this_01;
                      endPoint_00.x =
                           fVar8 * fVar25 * _UNK_? +
                           (float)uVar20 * (float)puVar16 + (float)puVar17;
                      endPoint_00.z =
                           fVar11 * fVar25 * _UNK_? + (float)puVar16 * 4.1715158e-29 + fVar12
                      ;
                      GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0)
                      ;
                    }
                    fVar28 = 1.0;
                    fVar10 = fVar23 * _UNK_? - (float)puVar16;
                    fVar29 = fVar10 * fVar9 + (float)this_01;
                    fVar30 = fVar10 * fVar11 + fVar12;
                    fVar31 = fVar10 * fVar8 + (float)puVar17;
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    pos.y = fVar29;
                    pos.x = fVar31;
                    pos.z = fVar30;
                    q.y = (float)pVVar14;
                    q.x = (float)&UNK_?;
                    q.z = (float)puVar6;
                    q.w = fVar7;
                    s.y = (float)puVar16;
                    s.x = (float)puVar16;
                    s.z = fVar28;
                    puVar18 = puVar16;
                    puVar32 = puVar16;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos,q,s,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D
                              ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    auVar34._4_8_ = 0;
                    auVar34._0_4_ = _UNK_?;
                    fVar27 = _UNK_?;
                    puStack_35 = puVar6;
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&puStack_35,(Vector3)(auVar34 << 0x20),
                                         (MethodInfo *)0x0);
                    fVar10 = pQVar5->x;
                    fVar24 = pQVar5->y;
                    fVar25 = pQVar5->z;
                    fVar26 = pQVar5->w;
                    fStack_3 = (fVar26 * 4.17148e-29 + fVar10 * fVar7 + fVar25 * (float)pVVar14) -
                                fVar24 * (float)puStack_35;
                    puStack_36 = (undefined *)
                                 ((fVar24 * fVar7 + fVar26 * (float)pVVar14 +
                                  fVar10 * (float)puStack_35) - fVar25 * 4.17148e-29);
                    pos_00.y = fVar29;
                    pos_00.x = fVar31;
                    pos_00.z = fVar30;
                    q_00.y = (float)puStack_36;
                    q_00.x = fStack_3;
                    q_00.z = (fVar26 * (float)puStack_35 + fVar25 * fVar7 + fVar24 * 4.17148e-29) -
                             fVar10 * (float)pVVar14;
                    q_00.w = ((fVar26 * fVar7 - fVar10 * 4.17148e-29) - fVar24 * (float)pVVar14) -
                             fVar25 * (float)puStack_35;
                    s_00.y = (float)puVar18;
                    s_00.x = (float)puVar16;
                    s_00.z = fVar28;
                    puStack_37 = puStack_35;
                    puStack_38 = puStack_35;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos_00,q_00,s_00,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D
                              ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    euler.y = 0.0;
                    euler.z = 0.0;
                    euler.x = fVar27;
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&fStack_3,euler,(MethodInfo *)0x0);
                    fVar10 = pQVar5->x;
                    fVar24 = pQVar5->y;
                    fVar25 = pQVar5->z;
                    fVar26 = pQVar5->w;
                    pos_01.y = fVar29;
                    pos_01.x = fVar31;
                    pos_01.z = fVar30;
                    q_01.y = (fVar24 * fVar7 + fVar26 * (float)pVVar14 + fVar10 * (float)puStack_35
                             ) - fVar25 * 4.17148e-29;
                    q_01.x = (fVar26 * 4.17148e-29 + fVar10 * fVar7 + fVar25 * (float)pVVar14) -
                             fVar24 * (float)puStack_35;
                    q_01.z = (fVar26 * (float)puStack_35 + fVar25 * fVar7 + fVar24 * 4.17148e-29) -
                             fVar10 * (float)pVVar14;
                    q_01.w = ((fVar26 * fVar7 - fVar10 * 4.17148e-29) - fVar24 * (float)pVVar14) -
                             fVar25 * (float)puStack_35;
                    s_01.y = (float)puVar32;
                    s_01.x = (float)puVar32;
                    s_01.z = (float)puVar32;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos_01,q_01,s_01,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    fVar10 = fVar23 * _UNK_? - (float)puVar32;
                    fVar23 = (float)puVar17 - fVar10 * fVar8;
                    fVar24 = (float)this_01 - fVar10 * fVar9;
                    fVar12 = fVar12 - fVar10 * fVar11;
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&stack0xffffff80,
                                         (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                    fVar8 = pQVar5->x;
                    fVar9 = pQVar5->y;
                    fVar10 = pQVar5->z;
                    fVar11 = pQVar5->w;
                    pos_02.y = fVar24;
                    pos_02.x = fVar23;
                    pos_02.z = fVar12;
                    q_02.y = (fVar9 * fVar7 + fVar11 * (float)pVVar14 + fVar8 * (float)puStack_35)
                             - fVar10 * 4.17148e-29;
                    q_02.x = (fVar11 * 4.17148e-29 + fVar8 * fVar7 + fVar10 * (float)pVVar14) -
                             fVar9 * (float)puStack_35;
                    q_02.z = (fVar11 * (float)puStack_35 + fVar10 * fVar7 + fVar9 * 4.17148e-29) -
                             fVar8 * (float)pVVar14;
                    q_02.w = ((fVar11 * fVar7 - fVar8 * 4.17148e-29) - fVar9 * (float)pVVar14) -
                             fVar10 * (float)puStack_35;
                    s_02.y = (float)puVar18;
                    s_02.x = (float)puVar16;
                    s_02.z = fVar28;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos_02,q_02,s_02,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D
                              ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    auVar39._4_8_ = 0;
                    auVar39._0_4_ = fVar27;
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&stack0xffffff80,(Vector3)(auVar39 << 0x20),
                                         (MethodInfo *)0x0);
                    fVar8 = pQVar5->x;
                    fVar9 = pQVar5->y;
                    fVar10 = pQVar5->z;
                    fVar11 = pQVar5->w;
                    fVar25 = (fVar11 * 4.17148e-29 + fVar8 * fVar7 + fVar10 * (float)pVVar14) -
                             fVar9 * (float)puStack_35;
                    fVar26 = (fVar9 * fVar7 + fVar11 * (float)pVVar14 + fVar8 * (float)puStack_35)
                             - fVar10 * 4.17148e-29;
                    fVar30 = (fVar11 * (float)puStack_35 + fVar10 * fVar7 + fVar9 * 4.17148e-29) -
                             fVar8 * (float)pVVar14;
                    fVar29 = ((fVar11 * fVar7 - fVar8 * 4.17148e-29) - fVar9 * (float)pVVar14) -
                             fVar10 * (float)puStack_35;
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&fStack_3,
                                         (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                    fVar8 = pQVar5->x;
                    fVar9 = pQVar5->y;
                    fVar10 = pQVar5->z;
                    fVar11 = pQVar5->w;
                    pos_03.y = fVar24;
                    pos_03.x = fVar23;
                    pos_03.z = fVar12;
                    q_03.y = (fVar9 * fVar29 + fVar11 * fVar26 + fVar8 * fVar30) - fVar10 * fVar25;
                    q_03.x = (fVar8 * fVar29 + fVar11 * fVar25 + fVar10 * fVar26) - fVar9 * fVar30;
                    q_03.z = (fVar10 * fVar29 + fVar11 * fVar30 + fVar9 * fVar25) - fVar8 * fVar26;
                    q_03.w = ((fVar11 * fVar29 - fVar8 * fVar25) - fVar9 * fVar26) - fVar10 * fVar30
                    ;
                    s_03.y = (float)puVar18;
                    s_03.x = (float)puVar16;
                    s_03.z = fVar28;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos_03,q_03,s_03,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D
                              ((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                    euler_00.y = 0.0;
                    euler_00.z = 0.0;
                    euler_00.x = fVar27;
                    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_Internal_FromEulerRad
                                        ((Quaternion *)&stack0xffffff20,euler_00,(MethodInfo *)0x0);
                    fVar8 = pQVar5->x;
                    fVar9 = pQVar5->y;
                    fVar10 = pQVar5->z;
                    fVar11 = pQVar5->w;
                    pos_04.y = fVar24;
                    pos_04.x = fVar23;
                    pos_04.z = fVar12;
                    q_04.y = (fVar9 * fVar7 + fVar11 * (float)pVVar14 + fVar8 * (float)puStack_35)
                             - fVar10 * 4.17148e-29;
                    q_04.x = (fVar11 * 4.17148e-29 + fVar8 * fVar7 + fVar10 * (float)pVVar14) -
                             fVar9 * (float)puStack_35;
                    q_04.z = (fVar11 * (float)puStack_35 + fVar10 * fVar7 + fVar9 * 4.17148e-29) -
                             fVar8 * (float)pVVar14;
                    q_04.w = ((fVar11 * fVar7 - fVar8 * 4.17148e-29) - fVar9 * (float)pVVar14) -
                             fVar10 * (float)puStack_35;
                    s_04.y = (float)puVar32;
                    s_04.x = (float)puVar32;
                    s_04.z = (float)puVar32;
                    pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xfffffed0,pos_04,q_04,s_04,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar33,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    CapsuleColliderGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
                    pGVar40 = (this->fields)._leftTick;
                    if (pGVar40 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar40->klass->vtable).Render_1.method)();
                      pGVar40 = (this->fields)._rightTick;
                      if (pGVar40 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar40->klass->vtable).Render_1.method)();
                        pGVar40 = (this->fields)._topTick;
                        if (pGVar40 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar40->klass->vtable).Render_1.method)();
                          pGVar40 = (this->fields)._bottomTick;
                          if (pGVar40 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar40->klass->vtable).Render_1.method)();
                            pGVar40 = (this->fields)._frontTick;
                            if (pGVar40 != (GizmoCap2D *)0x0) {
                              (*(code *)(pGVar40->klass->vtable).Render_1.method)();
                              pGVar40 = (this->fields)._backTick;
                              if (pGVar40 != (GizmoCap2D *)0x0) {
                                (*(code *)(pGVar40->klass->vtable).Render_1.method)();
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
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
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
  pCVar1 = (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (CapsuleColliderGizmo3DLookAndFeel *)0x0];
  if (pCVar1 != (CapsuleColliderGizmo3DLookAndFeel *)0x0) {
    pGVar2 = (pCVar1->fields)._tickLookAndFeel;
    pGVar3 = (this->fields)._rightTick;
    if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoCap2D *)0x0) {
        (pGVar3->fields)._sharedLookAndFeel = pGVar4;
        ppGVar5 = &(pGVar3->fields)._sharedLookAndFeel;
        func_?(ppGVar5,&stack0xfffffffc,&UNK_?,ppGVar5,pGVar4);
        return;
      }
    }
  }
  func_?();
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
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    CapsuleColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._targetCollider;
    if (pCVar1 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                (pCVar1,(MethodInfo *)0x0);
      CapsuleColliderGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._targetCollider;
      if (pCVar1 != (CapsuleCollider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                  (pCVar1,(MethodInfo *)0x0);
        CapsuleColliderGizmo3D_CalcHeightScale(this,(MethodInfo *)0x0);
        pQVar2 = CapsuleColliderGizmo3D_CalcRotationByDirection
                            ((Quaternion *)&stack0xffffff50,this,(MethodInfo *)0x0);
        fVar3 = pQVar2->w;
        pCVar1 = (this->fields)._targetCollider;
        if (pCVar1 != (CapsuleCollider *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar1,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
            fVar6 = pVVar5->x;
            uVar7 = pVVar5->y;
            fVar8 = pVVar5->z;
            rotation.y = fVar6;
            rotation.x = (float)pTVar4;
            rotation.z = (float)uVar7;
            rotation.w = fVar3;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffe0,rotation,*pVVar5,(MethodInfo *)0x0);
            uVar9._0_4_ = pVVar5->x;
            uStack_10 = pVVar5->y;
            pCVar1 = (this->fields)._targetCollider;
            if (pCVar1 != (CapsuleCollider *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar1,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                fVar11 = pVVar5->x;
                fVar12 = pVVar5->y;
                fVar13 = pVVar5->z;
                fVar14 = 0.0;
                rotation_00.y = fVar6;
                rotation_00.x = fVar3;
                rotation_00.z = (float)uVar7;
                rotation_00.w = fVar8;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffe0,rotation_00,*pVVar5,
                                     (MethodInfo *)0x0);
                uVar15._0_4_ = pVVar5->x;
                uVar15._4_4_ = pVVar5->y;
                fVar16 = pVVar5->z;
                pCVar1 = (this->fields)._targetCollider;
                if (pCVar1 != (CapsuleCollider *)0x0) {
                  uVar17 = uVar15;
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0);
                  if (pTVar4 != (Transform *)0x0) {
                    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward
                                        ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                    pVVar5 = (Vector3 *)&stack0xffffffe0;
                    rotation_01.y = fVar6;
                    rotation_01.x = fVar3;
                    rotation_01.z = (float)uVar7;
                    rotation_01.w = fVar8;
                    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        (pVVar5,rotation_01,*pVVar18,(MethodInfo *)0x0);
                    uVar19 = pVVar18->x;
                    uVar20 = pVVar18->y;
                    fVar8 = pVVar18->z;
                    fVar21 = fVar11 - (float)pVVar5 * fVar14;
                    fVar22 = fVar12 - fVar3 * fVar14;
                    fVar23 = fVar13 - fVar6 * fVar14;
                    pGVar24 = (this->fields)._leftTick;
                    if (this_01 != (Camera *)0x0) {
                      position_04.y = fVar22;
                      position_04.x = fVar21;
                      position_04.z = fVar23;
                      fVar25 = (float)uVar19;
                      fVar26 = (float)uVar20;
                      fVar27 = fVar8;
                      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffd0,this_01,position_04,
                                           (MethodInfo *)0x0);
                      value.x = pVVar18->x;
                      value.y = pVVar18->y;
                      if ((pGVar24 != (GizmoCap2D *)0x0) &&
                         (pGVar28 = (pGVar24->fields)._transform, pGVar28 != (GizmoTransform *)0x0))
                      {
                        GizmoTransform::GizmoTransform_set_Position2D
                                  (pGVar28,value,(MethodInfo *)0x0);
                        pCVar29 = (this->fields)._extentTicks;
                        if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                          if (pCVar29->max_length < 3) goto code_?;
                          pCVar30 = pCVar29->vector[2];
                          if (pCVar30 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                            (pCVar30->fields).Position.x = fVar21;
                            (pCVar30->fields).Position.y = fVar22;
                            (pCVar30->fields).Position.z = fVar23;
                            pCVar29 = (this->fields)._extentTicks;
                            if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                              if (pCVar29->max_length < 3) goto code_?;
                              pCVar30 = pCVar29->vector[2];
                              uVar31 = (uint)fVar3 ^
                                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              ;
                              fVar23 = (float)((uint)fVar6 ^
                                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                              );
                              if (pCVar30 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                (pCVar30->fields).Normal.x =
                                     (float)((uint)pVVar5 ^
                                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                            );
                                (pCVar30->fields).Normal.y = (float)uVar31;
                                (pCVar30->fields).Normal.z = fVar23;
                                fVar23 = fVar11 + (float)pVVar5 * fVar14;
                                fVar6 = fVar6 * fVar14 + fVar13;
                                fVar3 = fVar12 + fVar3 * fVar14;
                                pGVar24 = (this->fields)._rightTick;
                                position.y = fVar3;
                                position.x = fVar23;
                                position.z = fVar6;
                                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_WorldToScreenPoint_1
                                                    ((Vector3 *)&stack0xffffffc0,this_01,position,
                                                     (MethodInfo *)0x0);
                                value_00.x = pVVar5->x;
                                value_00.y = pVVar5->y;
                                if ((pGVar24 != (GizmoCap2D *)0x0) &&
                                   (pGVar28 = (pGVar24->fields)._transform,
                                   pGVar28 != (GizmoTransform *)0x0)) {
                                  GizmoTransform::GizmoTransform_set_Position2D
                                            (pGVar28,value_00,(MethodInfo *)0x0);
                                  pCVar29 = (this->fields)._extentTicks;
                                  if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                    if (pCVar29->max_length < 4) goto code_?;
                                    pCVar30 = pCVar29->vector[3];
                                    if (pCVar30 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                      (pCVar30->fields).Position.x = fVar23;
                                      (pCVar30->fields).Position.y = fVar3;
                                      (pCVar30->fields).Position.z = fVar6;
                                      pCVar29 = (this->fields)._extentTicks;
                                      if (pCVar29 != (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0
                                         ) {
                                        if (pCVar29->max_length < 4) goto code_?;
                                        pCVar30 = pCVar29->vector[3];
                                        if (pCVar30 != (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                          uStack_10 = (undefined4)((ulonglong)uVar9 >> 0x20);
                                          (pCVar30->fields).Normal.x = (float)(undefined4)uVar9;
                                          (pCVar30->fields).Normal.y = (float)uStack_10;
                                          (pCVar30->fields).Normal.z = (float)&UNK_?;
                                          fVar6 = fVar16 * 4.1731742e-29 * _UNK_? + fVar13;
                                          fVar23 = fVar11 + (float)(undefined4)uVar15 * 4.1731742e-29
                                                           * _UNK_?;
                                          fVar3 = fVar12 + (float)uVar15._4_4_ * 4.1731742e-29 *
                                                           _UNK_?;
                                          pGVar24 = (this->fields)._topTick;
                                          position_00.y = fVar3;
                                          position_00.x = fVar23;
                                          position_00.z = fVar6;
                                          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera
                                                    ::Camera_WorldToScreenPoint_1
                                                              ((Vector3 *)&stack0xffffffc0,this_01,
                                                               position_00,(MethodInfo *)0x0);
                                          value_01.x = pVVar5->x;
                                          value_01.y = pVVar5->y;
                                          if ((pGVar24 != (GizmoCap2D *)0x0) &&
                                             (pGVar28 = (pGVar24->fields)._transform,
                                             pGVar28 != (GizmoTransform *)0x0)) {
                                            GizmoTransform::GizmoTransform_set_Position2D
                                                      (pGVar28,value_01,(MethodInfo *)0x0);
                                            pCVar29 = (this->fields)._extentTicks;
                                            if (pCVar29 !=
                                                (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                              if (pCVar29->max_length < 6) goto code_?;
                                              pCVar30 = pCVar29->vector[5];
                                              if (pCVar30 !=
                                                  (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                                (pCVar30->fields).Position.x = fVar23;
                                                (pCVar30->fields).Position.y = fVar3;
                                                (pCVar30->fields).Position.z = fVar6;
                                                pCVar29 = (this->fields)._extentTicks;
                                                if (pCVar29 !=
                                                    (CapsuleColliderGizmo3D_ExtentTick__Array *)0x0)
                                                {
                                                  if (pCVar29->max_length < 6)
                                                  goto code_?;
                                                  pCVar30 = pCVar29->vector[5];
                                                  if (pCVar30 !=
                                                      (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x = (float)(int)uVar17;
                                                    (pCVar30->fields).Normal.y =
                                                         (float)(int)((ulonglong)uVar17 >> 0x20);
                                                    (pCVar30->fields).Normal.z = fVar16;
                                                    fVar23 = fVar11 - (float)(undefined4)uVar15 *
                                                                     4.1731742e-29 * _UNK_?;
                                                    fVar6 = fVar12 - (float)uVar15._4_4_ *
                                                                    4.1731742e-29 * _UNK_?;
                                                    fVar3 = fVar13 - fVar16 * 4.1731742e-29 *
                                                                      _UNK_?;
                                                    pGVar24 = (this->fields)._bottomTick;
                                                    position_01.y = fVar6;
                                                    position_01.x = fVar23;
                                                    position_01.z = fVar3;
                                                    pVVar5 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        ((Vector3 *)&stack0xffffffc0
                                                                         ,this_01,position_01,
                                                                         (MethodInfo *)0x0);
                                                    value_02.x = pVVar5->x;
                                                    value_02.y = pVVar5->y;
                                                    if ((pGVar24 != (GizmoCap2D *)0x0) &&
                                                       (pGVar28 = (pGVar24->fields)._transform,
                                                       pGVar28 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar28,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pCVar29 = (this->fields)._extentTicks;
                                                      if (pCVar29 !=
                                                          (CapsuleColliderGizmo3D_ExtentTick__Array
                                                           *)0x0) {
                                                        if (pCVar29->max_length < 5)
                                                        goto code_?;
                                                        pCVar30 = pCVar29->vector[4];
                                                        if (pCVar30 !=
                                                            (CapsuleColliderGizmo3D_ExtentTick *)0x0
                                                           ) {
                                                          (pCVar30->fields).Position.x = fVar23;
                                                          (pCVar30->fields).Position.y = fVar6;
                                                          (pCVar30->fields).Position.z = fVar3;
                                                          pCVar29 = (this->fields)._extentTicks;
                                                          if (pCVar29 !=
                                                              (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar29->max_length < 5)
                                                    goto code_?;
                                                    uVar31 = uVar15._4_4_ ^
                                                                                                                          
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  ;
                                                  pCVar30 = pCVar29->vector[4];
                                                  fVar16 = (float)((uint)fVar16 ^
                                                                                                                                    
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  if (pCVar30 !=
                                                      (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x =
                                                         (float)((undefined4)uVar15 ^
                                                                                                                                
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  (pCVar30->fields).Normal.y = (float)uVar31;
                                                  (pCVar30->fields).Normal.z = fVar16;
                                                  fVar16 = fVar11 - fVar25 * fVar14;
                                                  fVar6 = fVar12 - fVar26 * fVar14;
                                                  fVar3 = fVar13 - fVar27 * fVar14;
                                                  pGVar24 = (this->fields)._frontTick;
                                                  position_02.y = fVar6;
                                                  position_02.x = fVar16;
                                                  position_02.z = fVar3;
                                                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&stack0xffffffc0,
                                                                       this_01,position_02,
                                                                       (MethodInfo *)0x0);
                                                  value_03.x = pVVar5->x;
                                                  value_03.y = pVVar5->y;
                                                  if ((pGVar24 != (GizmoCap2D *)0x0) &&
                                                     (pGVar28 = (pGVar24->fields)._transform,
                                                     pGVar28 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar28,value_03,(MethodInfo *)0x0);
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 !=
                                                        (CapsuleColliderGizmo3D_ExtentTick__Array *)
                                                        0x0) {
                                                      if (pCVar29->max_length == 0)
                                                      goto code_?;
                                                      pCVar30 = pCVar29->vector[0];
                                                      if (pCVar30 !=
                                                          (CapsuleColliderGizmo3D_ExtentTick *)0x0)
                                                      {
                                                        (pCVar30->fields).Position.x = fVar16;
                                                        (pCVar30->fields).Position.y = fVar6;
                                                        (pCVar30->fields).Position.z = fVar3;
                                                        pCVar29 = (this->fields)._extentTicks;
                                                        if (pCVar29 !=
                                                            (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar29->max_length == 0)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[0];
                                                    uVar31 = (uint)fVar26 ^
                                                                                                                          
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  ;
                                                  fVar3 = (float)((uint)fVar27 ^
                                                                                                                                    
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  if (pCVar30 !=
                                                      (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x =
                                                         (float)((uint)fVar25 ^
                                                                                                                                
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  (pCVar30->fields).Normal.y = (float)uVar31;
                                                  (pCVar30->fields).Normal.z = fVar3;
                                                  fVar11 = fVar11 + fVar25 * fVar14;
                                                  fVar12 = fVar12 + fVar26 * fVar14;
                                                  fVar13 = fVar13 + fVar27 * fVar14;
                                                  pGVar24 = (this->fields)._backTick;
                                                  position_03.y = fVar12;
                                                  position_03.x = fVar11;
                                                  position_03.z = fVar13;
                                                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&stack0xffffff88,
                                                                       this_01,position_03,
                                                                       (MethodInfo *)0x0);
                                                  value_04.x = pVVar5->x;
                                                  value_04.y = pVVar5->y;
                                                  if ((pGVar24 != (GizmoCap2D *)0x0) &&
                                                     (pGVar28 = (pGVar24->fields)._transform,
                                                     pGVar28 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar28,value_04,(MethodInfo *)0x0);
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 !=
                                                        (CapsuleColliderGizmo3D_ExtentTick__Array *)
                                                        0x0) {
                                                      if (pCVar29->max_length < 2)
                                                      goto code_?;
                                                      pCVar30 = pCVar29->vector[1];
                                                      if (pCVar30 !=
                                                          (CapsuleColliderGizmo3D_ExtentTick *)0x0)
                                                      {
                                                        (pCVar30->fields).Position.x = fVar11;
                                                        (pCVar30->fields).Position.y = fVar12;
                                                        (pCVar30->fields).Position.z = fVar13;
                                                        pCVar29 = (this->fields)._extentTicks;
                                                        if (pCVar29 !=
                                                            (
                                                  CapsuleColliderGizmo3D_ExtentTick__Array *)0x0) {
                                                    if (pCVar29->max_length < 2)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[1];
                                                    if (pCVar30 !=
                                                        (CapsuleColliderGizmo3D_ExtentTick *)0x0) {
                                                      (pCVar30->fields).Normal.x = (float)uVar19;
                                                      (pCVar30->fields).Normal.y = (float)uVar20;
                                                      (pCVar30->fields).Normal.z = fVar8;
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
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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
            pCVar4 = pCVar2->vector[5];
            pCVar5 = ((this->fields)._extentTicks)->vector[4];
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
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
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
              pGStack_24 = (this_01->fields)._overrideFillColor;
              fStack_30 = (pGVar29->fields)._color.r;
              fStack_9 = (pGVar29->fields)._color.g;
              fStack_10 = (pGVar29->fields)._color.b;
              fStack_8 = (pGVar29->fields)._color.a;
              pCVar31 = (&(this->fields)._lookAndFeel)
                        [(this->fields)._sharedLookAndFeel !=
                         (CapsuleColliderGizmo3DLookAndFeel *)0x0];
              if (pCVar31 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) goto code_?;
              pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff94,(pGVar29->fields)._color,
                                   fStack_8 * (pCVar31->fields)._tickCullAlphaScale,
                                   (MethodInfo *)0x0);
              fVar33 = pCVar32->g;
              fVar34 = pCVar32->b;
              fVar35 = pCVar32->a;
              if (pGStack_24 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGStack_24->fields)._color.r = pCVar32->r;
              (pGStack_24->fields)._color.g = fVar33;
              (pGStack_24->fields)._color.b = fVar34;
              (pGStack_24->fields)._color.a = fVar35;
              pGVar29 = (this_01->fields)._sharedLookAndFeel;
              if (pGVar29 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              pGStack_24 = (this_01->fields)._overrideBorderColor;
              fStack_30 = (pGVar29->fields)._borderColor.r;
              fStack_9 = (pGVar29->fields)._borderColor.g;
              fStack_10 = (pGVar29->fields)._borderColor.b;
              fStack_8 = (pGVar29->fields)._borderColor.a;
              pCVar31 = (&(this->fields)._lookAndFeel)
                        [(this->fields)._sharedLookAndFeel !=
                         (CapsuleColliderGizmo3DLookAndFeel *)0x0];
              if (pCVar31 == (CapsuleColliderGizmo3DLookAndFeel *)0x0) goto code_?;
              pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff84,(pGVar29->fields)._borderColor,
                                   fStack_8 * (pCVar31->fields)._tickCullAlphaScale,
                                   (MethodInfo *)0x0);
              fVar33 = pCVar32->g;
              fVar34 = pCVar32->b;
              fVar35 = pCVar32->a;
              if (pGStack_24 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGStack_24->fields)._color.r = pCVar32->r;
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

