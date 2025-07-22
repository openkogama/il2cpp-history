
/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_CalcScalePivot
                    (Vector3 *__return_storage_ptr__,BoxColliderGizmo3D *this,int32_t handleId,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  bVar1 = BoxColliderGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    __return_storage_ptr__->x = (pVVar2->zeroVector).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  pVVar5 = BoxColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  fVar4 = pVVar5->z;
  pVVar5 = BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
  fVar3 = pVVar5->z;
  this_00 = (this->fields)._targetCollider;
  if (this_00 != (BoxCollider *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      puVar6 = &UNK_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._leftTick;
      if ((pGVar8 != (GizmoCap2D *)0x0) &&
         (pGVar9 = (pGVar8->fields)._._handle, pGVar9 != (GizmoHandle *)0x0)) {
        if (handleId == (pGVar9->fields)._id) {
          fVar10 = pQVar7->x;
          fVar11 = pQVar7->y;
          fVar12 = pQVar7->z;
          fVar13 = pQVar7->w;
          if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          boxFace = BoxFace__Enum_Right;
        }
        else {
          pGVar8 = (this->fields)._rightTick;
          if ((pGVar8 == (GizmoCap2D *)0x0) ||
             (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
          goto code_?;
          if (handleId == (pGVar9->fields)._id) {
            fVar10 = pQVar7->x;
            fVar11 = pQVar7->y;
            fVar12 = pQVar7->z;
            fVar13 = pQVar7->w;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            boxFace = BoxFace__Enum_Left;
          }
          else {
            pGVar8 = (this->fields)._topTick;
            if ((pGVar8 == (GizmoCap2D *)0x0) ||
               (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
            goto code_?;
            if (handleId == (pGVar9->fields)._id) {
              fVar10 = pQVar7->x;
              fVar11 = pQVar7->y;
              fVar12 = pQVar7->z;
              fVar13 = pQVar7->w;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              boxFace = BoxFace__Enum_Bottom;
            }
            else {
              pGVar8 = (this->fields)._bottomTick;
              if ((pGVar8 == (GizmoCap2D *)0x0) ||
                 (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
              goto code_?;
              if (handleId == (pGVar9->fields)._id) {
                fVar10 = pQVar7->x;
                fVar11 = pQVar7->y;
                fVar12 = pQVar7->z;
                fVar13 = pQVar7->w;
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                boxFace = BoxFace__Enum_Top;
              }
              else {
                pGVar8 = (this->fields)._frontTick;
                if ((pGVar8 == (GizmoCap2D *)0x0) ||
                   (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
                goto code_?;
                if (handleId == (pGVar9->fields)._id) {
                  fVar10 = pQVar7->x;
                  fVar11 = pQVar7->y;
                  fVar12 = pQVar7->z;
                  fVar13 = pQVar7->w;
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  boxFace = BoxFace__Enum_Back;
                }
                else {
                  pGVar8 = (this->fields)._backTick;
                  if ((pGVar8 == (GizmoCap2D *)0x0) ||
                     (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
                  goto code_?;
                  if (handleId != (pGVar9->fields)._id) goto code_?;
                  fVar10 = pQVar7->x;
                  fVar11 = pQVar7->y;
                  fVar12 = pQVar7->z;
                  fVar13 = pQVar7->w;
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  boxFace = BoxFace__Enum_Front;
                }
              }
            }
          }
        }
        boxCenter.y = fVar10;
        boxCenter.x = (float)puVar6;
        boxCenter.z = fVar4;
        boxSize.y = fVar13;
        boxSize.x = fVar12;
        boxSize.z = fVar3;
        boxRotation.y = fVar11;
        boxRotation.x = fVar10;
        boxRotation.z = fVar12;
        boxRotation.w = fVar13;
        pVVar5 = BoxMath::BoxMath_CalcBoxFaceCenter
                           ((Vector3 *)&stack0xffffffdc,boxCenter,boxSize,boxRotation,boxFace,
                            (MethodInfo *)0x0);
        fVar3 = pVVar5->y;
        fVar4 = pVVar5->z;
        __return_storage_ptr__->x = pVVar5->x;
        __return_storage_ptr__->y = fVar3;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar14)();
  return pVVar5;
}


/* Vector3 CalcWorldCenter() */

Vector3 * Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_CalcWorldCenter
                    (Vector3 *__return_storage_ptr__,BoxColliderGizmo3D *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._targetCollider;
  if (pBVar1 != (BoxCollider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pBVar1,(MethodInfo *)0x0);
    pBVar1 = (this->fields)._targetCollider;
    if (pBVar1 != (BoxCollider *)0x0) {
      pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                         ((Vector3 *)&stack0xfffffff0,pBVar1,(MethodInfo *)0x0);
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


/* Vector3 CalcWorldSize() */

Vector3 * Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_CalcWorldSize
                    (Vector3 *__return_storage_ptr__,BoxColliderGizmo3D *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._targetCollider;
  if (pBVar1 != (BoxCollider *)0x0) {
    pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                       (&VStack_3,pBVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->z;
    pBVar1 = (this->fields)._targetCollider;
    if (pBVar1 != (BoxCollider *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pBVar1,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        fVar5 = 0.0;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&puStack_6,this_00,(MethodInfo *)0x0);
        uVar7 = pVVar2->x;
        uVar8 = pVVar2->y;
        fVar9 = pVVar2->z;
        __return_storage_ptr__->x = (float)this_00 * (float)uVar7;
        __return_storage_ptr__->y = fVar5 * (float)uVar8;
        __return_storage_ptr__->z = fVar9 * fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar10)();
  return pVVar2;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_IsTargetReady
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._targetCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pBVar1 = (this->fields)._targetCollider;
  if (pBVar1 != (BoxCollider *)0x0) {
    bVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_enabled
                      ((Collider *)pBVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pBVar1 = (this->fields)._targetCollider;
    if ((pBVar1 != (BoxCollider *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
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

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnAttached
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoCap3D);
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
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
  }
  else {
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    pMVar6 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::Datatype_hexBinary_get_TypeCode
                      ((Datatype_hexBinary *)0x0,pMVar6);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._rightTick = pGVar3;
    func_?(&(this->fields)._rightTick,pGVar3);
    pGVar3 = (this->fields)._rightTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    pMVar6 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
            Datatype_base64Binary_get_TypeCode((Datatype_base64Binary *)0x0,pMVar6);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._topTick = pGVar3;
    func_?(&(this->fields)._topTick,pGVar3);
    pGVar3 = (this->fields)._topTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    pMVar6 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::Datatype_NOTATION_get_TypeCode
                      ((Datatype_NOTATION *)0x0,pMVar6);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._bottomTick = pGVar3;
    func_?(&(this->fields)._bottomTick,pGVar3);
    pGVar3 = (this->fields)._bottomTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    pMVar6 = (MethodInfo *)&(pGVar4->fields)._DragSession_k__BackingField;
    func_?();
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_normalizedStringV1Compat::
            Datatype_normalizedStringV1Compat_get_TypeCode
                      ((Datatype_normalizedStringV1Compat *)0x0,pMVar6);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._backTick = pGVar3;
    func_?(&(this->fields)._backTick,pGVar3);
    pGVar3 = (this->fields)._backTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    func_?(&(pGVar4->fields)._DragSession_k__BackingField);
    pGVar1 = (this->fields)._._gizmo;
    iVar7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,iVar7,(MethodInfo *)0x0);
    (this->fields)._frontTick = pGVar3;
    pMVar6 = (MethodInfo *)&UNK_?;
    func_?(&(this->fields)._frontTick,pGVar3);
    pGVar3 = (this->fields)._frontTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)(this->fields)._offsetDrag;
    func_?(&(pGVar4->fields)._DragSession_k__BackingField);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
      iVar10 = func_?(pBVar9);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar8->max_length < 3) goto code_?;
    pBVar8->vector[2] = pBVar9;
    func_?(pBVar8->vector + 2);
    pBVar8 = (this->fields)._faceTicks;
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar8->max_length < 3) goto code_?;
    pBVar9 = pBVar8->vector[2];
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
    (pBVar9->fields).Tick = (this->fields)._leftTick;
    func_?(&(pBVar9->fields).Tick);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
      iVar10 = func_?(pBVar9);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar8->max_length < 4) goto code_?;
    pBVar8->vector[3] = pBVar9;
    func_?(pBVar8->vector + 3);
    pBVar8 = (this->fields)._faceTicks;
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar8->max_length < 4) goto code_?;
    pBVar9 = pBVar8->vector[3];
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
    (pBVar9->fields).Tick = (this->fields)._rightTick;
    func_?(&(pBVar9->fields).Tick);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
      iVar10 = func_?(pBVar9);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar8->max_length < 6) goto code_?;
    pBVar8->vector[5] = pBVar9;
    func_?(pBVar8->vector + 5);
    pBVar8 = (this->fields)._faceTicks;
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar8->max_length < 6) goto code_?;
    pBVar9 = pBVar8->vector[5];
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
    (pBVar9->fields).Tick = (this->fields)._topTick;
    func_?(&(pBVar9->fields).Tick);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
      iVar10 = func_?(pBVar9);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar8->max_length < 5) goto code_?;
    pBVar8->vector[4] = pBVar9;
    func_?(pBVar8->vector + 4);
    pBVar8 = (this->fields)._faceTicks;
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar8->max_length < 5) goto code_?;
    pBVar9 = pBVar8->vector[4];
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
    (pBVar9->fields).Tick = (this->fields)._bottomTick;
    func_?(&(pBVar9->fields).Tick);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
      iVar10 = func_?(pBVar9);
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pBVar8->max_length == 0) goto code_?;
    pBVar8->vector[0] = pBVar9;
    func_?(pBVar8->vector);
    pBVar8 = (this->fields)._faceTicks;
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar8->max_length == 0) goto code_?;
    pBVar9 = pBVar8->vector[0];
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
    (pBVar9->fields).Tick = (this->fields)._frontTick;
    func_?(&(pBVar9->fields).Tick);
    pBVar8 = (this->fields)._faceTicks;
    pBVar9 = (BoxColliderGizmo3D_FaceTick *)
             func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pBVar9,ExceptionArgument__Enum_obj,pMVar6);
    if (pBVar8 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
    if (pBVar9 == (BoxColliderGizmo3D_FaceTick *)0x0) {
code_?:
      if (pBVar8->max_length < 2) goto code_?;
      pBVar8->vector[1] = pBVar9;
      func_?(pBVar8->vector + 1);
      pBVar8 = (this->fields)._faceTicks;
      if (pBVar8 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
        if (pBVar8->max_length < 2) goto code_?;
        pBVar9 = pBVar8->vector[1];
        if (pBVar9 != (BoxColliderGizmo3D_FaceTick *)0x0) {
          (pBVar9->fields).Tick = (this->fields)._backTick;
          func_?(&(pBVar9->fields).Tick);
          pGVar1 = (this->fields)._._gizmo;
          iVar7 = GizmoHandleId::GizmoHandleId_get_MidScaleCap((MethodInfo *)0x0);
          pGVar11 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
          GizmoCap3D::GizmoCap3D__ctor(pGVar11,pGVar1,iVar7,(MethodInfo *)0x0);
          (this->fields)._midCap = pGVar11;
          func_?(&(this->fields)._midCap,pGVar11);
          pGVar11 = (this->fields)._midCap;
          if ((pGVar11 != (GizmoCap3D *)0x0) &&
             (pGVar4 = (pGVar11->fields)._._handle, pGVar4 != (GizmoHandle *)0x0)) {
            (pGVar4->fields)._DragSession_k__BackingField =
                 (IGizmoDragSession *)(this->fields)._uniScaleDrag;
            func_?(&(pGVar4->fields)._DragSession_k__BackingField);
            BoxColliderGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    iVar10 = func_?(pBVar9);
    if (iVar10 != 0) goto code_?;
  }
  uVar5 = func_?();
  func_?(uVar5);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoAttemptHandleDragBegin
               (BoxColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = BoxColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._preChangeColliderSnapshot;
  if (this_00 == (BoxCollider3DSnapshot *)0x0) goto code_?;
  BoxCollider3DSnapshot::BoxCollider3DSnapshot_Snapshot
            (this_00,(this->fields)._targetCollider,(MethodInfo *)0x0);
  bVar1 = BoxColliderGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._midCap;
  if ((pGVar2 == (GizmoCap3D *)0x0) ||
     (pGVar3 = (pGVar2->fields)._._handle, pGVar3 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar3->fields)._id) {
    pGVar4 = (this->fields)._._gizmo;
    if (((pGVar4 != (Gizmo *)0x0) &&
        (pCVar5 = Gizmo::Gizmo_GetWorkCamera(pGVar4,(MethodInfo *)0x0), pCVar5 != (Camera *)0x0))
       && (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0
          )) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      fVar9 = pVVar7->z;
      (this->fields)._uniScaleDragWorkData.CameraRight.x = pVVar7->x;
      (this->fields)._uniScaleDragWorkData.CameraRight.y = fVar8;
      (this->fields)._uniScaleDragWorkData.CameraRight.z = fVar9;
      pGVar4 = (this->fields)._._gizmo;
      if (((pGVar4 != (Gizmo *)0x0) &&
          (pCVar5 = Gizmo::Gizmo_GetWorkCamera(pGVar4,(MethodInfo *)0x0), pCVar5 != (Camera *)0x0
          )) && (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pCVar5,(MethodInfo *)0x0),
                pTVar6 != (Transform *)0x0)) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
        fVar8 = pVVar7->y;
        fVar9 = pVVar7->z;
        (this->fields)._uniScaleDragWorkData.CameraUp.x = pVVar7->x;
        (this->fields)._uniScaleDragWorkData.CameraUp.y = fVar8;
        (this->fields)._uniScaleDragWorkData.CameraUp.z = fVar9;
        pVVar7 = BoxColliderGizmo3D_CalcWorldCenter
                            ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
        fVar8 = pVVar7->y;
        fVar9 = pVVar7->z;
        (this->fields)._uniScaleDragWorkData.DragOrigin.x = pVVar7->x;
        (this->fields)._uniScaleDragWorkData.DragOrigin.y = fVar8;
        (this->fields)._uniScaleDragWorkData.DragOrigin.z = fVar9;
        if ((this->fields)._sharedSettings == (BoxColliderGizmo3DSettings *)0x0) {
          pBVar10 = (this->fields)._settings;
          if (pBVar10 == (BoxColliderGizmo3DSettings *)0x0) goto code_?;
        }
        else {
          pBVar10 = (this->fields)._sharedSettings;
        }
        (this->fields)._uniScaleDragWorkData.SnapStep = (pBVar10->fields)._uniformSizeSnapStep;
        this_02 = (this->fields)._uniScaleDrag;
        if (this_02 != (GizmoUniformScaleDrag3D *)0x0) {
          uVar11 = (this->fields)._uniScaleDragWorkData.CameraRight.x;
          uVar12 = (this->fields)._uniScaleDragWorkData.CameraRight.y;
          uVar13 = (this->fields)._uniScaleDragWorkData.CameraRight.z;
          workData.CameraRight.z = (float)uVar13;
          workData.CameraRight.y = (float)uVar12;
          workData.CameraRight.x = (float)uVar11;
          uVar14 = (this->fields)._uniScaleDragWorkData.CameraUp.x;
          uVar15 = (this->fields)._uniScaleDragWorkData.CameraUp.y;
          uVar16 = (this->fields)._uniScaleDragWorkData.CameraUp.z;
          workData.CameraUp.z = (float)uVar16;
          workData.CameraUp.y = (float)uVar15;
          workData.CameraUp.x = (float)uVar14;
          uVar17 = (this->fields)._uniScaleDragWorkData.DragOrigin.x;
          uVar18 = (this->fields)._uniScaleDragWorkData.DragOrigin.y;
          uVar19 = (this->fields)._uniScaleDragWorkData.DragOrigin.z;
          workData.DragOrigin.z = (float)uVar19;
          workData.DragOrigin.y = (float)uVar18;
          workData.DragOrigin.x = (float)uVar17;
          workData.SnapStep =
               (float)((ulonglong)*(undefined8 *)&(this->fields)._uniScaleDragWorkData.DragOrigin.z
                      >> 0x20);
          GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                    (this_02,workData,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto code_?;
  }
  pVVar7 = BoxColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar7->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar8;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar9;
  pVVar7 = BoxColliderGizmo3D_CalcScalePivot
                      ((Vector3 *)&stack0xfffffff0,this,handleId,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields)._scalePivot.x = pVVar7->x;
  (this->fields)._scalePivot.y = fVar8;
  (this->fields)._scalePivot.z = fVar9;
  pGVar20 = (this->fields)._leftTick;
  if ((pGVar20 == (GizmoCap2D *)0x0) ||
     (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar3->fields)._id) {
    pBVar21 = (this->fields)._targetCollider;
    if ((pBVar21 == (BoxCollider *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar21,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
    uVar22 = pVVar7->x;
    uVar23 = pVVar7->y;
    uVar24 = uVar23 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
    fVar9 = (float)((uint)pVVar7->z ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._offsetDragWorkData.Axis.x =
         (float)(uVar22 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._offsetDragWorkData.Axis.y = (float)uVar24;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar9;
    if ((this->fields)._sharedSettings == (BoxColliderGizmo3DSettings *)0x0) {
      pBVar10 = (this->fields)._settings;
      if (pBVar10 == (BoxColliderGizmo3DSettings *)0x0) goto code_?;
    }
    else {
      pBVar10 = (this->fields)._sharedSettings;
    }
    (this->fields)._offsetDragWorkData.SnapStep = (pBVar10->fields)._xSizeSnapStep;
    (this->fields)._dragAxisIndex = 0;
  }
  else {
    pGVar20 = (this->fields)._rightTick;
    if ((pGVar20 == (GizmoCap2D *)0x0) ||
       (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar3->fields)._id) {
      pBVar21 = (this->fields)._targetCollider;
      if ((pBVar21 == (BoxCollider *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pBVar21,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0)
         ) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      fVar9 = pVVar7->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar7->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar8;
      goto code_?;
    }
    pGVar20 = (this->fields)._topTick;
    if ((pGVar20 == (GizmoCap2D *)0x0) ||
       (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar3->fields)._id) {
      pBVar21 = (this->fields)._targetCollider;
      if ((pBVar21 == (BoxCollider *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pBVar21,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0)
         ) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
      fVar8 = pVVar7->y;
      fVar9 = pVVar7->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar7->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar8;
code_?:
      (this->fields)._offsetDragWorkData.Axis.z = fVar9;
      if ((this->fields)._sharedSettings == (BoxColliderGizmo3DSettings *)0x0) {
        pBVar10 = (this->fields)._settings;
        if (pBVar10 == (BoxColliderGizmo3DSettings *)0x0) goto code_?;
        (this->fields)._offsetDragWorkData.SnapStep = (pBVar10->fields)._ySizeSnapStep;
        (this->fields)._dragAxisIndex = 1;
      }
      else {
        (this->fields)._offsetDragWorkData.SnapStep =
             (((this->fields)._sharedSettings)->fields)._ySizeSnapStep;
        (this->fields)._dragAxisIndex = 1;
      }
    }
    else {
      pGVar20 = (this->fields)._bottomTick;
      if ((pGVar20 == (GizmoCap2D *)0x0) ||
         (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId == (pGVar3->fields)._id) {
        pBVar21 = (this->fields)._targetCollider;
        if ((pBVar21 == (BoxCollider *)0x0) ||
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pBVar21,(MethodInfo *)0x0),
           pTVar6 == (Transform *)0x0)) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
        uVar25 = pVVar7->x;
        uVar26 = pVVar7->y;
        uVar24 = uVar26 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        fVar9 = (float)((uint)pVVar7->z ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        (this->fields)._offsetDragWorkData.Axis.x =
             (float)(uVar25 ^ 
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        (this->fields)._offsetDragWorkData.Axis.y = (float)uVar24;
        goto code_?;
      }
      pGVar20 = (this->fields)._frontTick;
      if ((pGVar20 == (GizmoCap2D *)0x0) ||
         (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId == (pGVar3->fields)._id) {
        pBVar21 = (this->fields)._targetCollider;
        if ((pBVar21 == (BoxCollider *)0x0) ||
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pBVar21,(MethodInfo *)0x0),
           pTVar6 == (Transform *)0x0)) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
        uVar27 = pVVar7->x;
        uVar28 = pVVar7->y;
        uVar24 = uVar28 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        fVar9 = (float)((uint)pVVar7->z ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        (this->fields)._offsetDragWorkData.Axis.x =
             (float)(uVar27 ^ 
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        (this->fields)._offsetDragWorkData.Axis.y = (float)uVar24;
code_?:
        (this->fields)._offsetDragWorkData.Axis.z = fVar9;
        if ((this->fields)._sharedSettings == (BoxColliderGizmo3DSettings *)0x0) {
          pBVar10 = (this->fields)._settings;
          if (pBVar10 == (BoxColliderGizmo3DSettings *)0x0) goto code_?;
        }
        else {
          pBVar10 = (this->fields)._sharedSettings;
        }
        (this->fields)._offsetDragWorkData.SnapStep = (pBVar10->fields)._zSizeSnapStep;
        (this->fields)._dragAxisIndex = 2;
      }
      else {
        pGVar20 = (this->fields)._backTick;
        if ((pGVar20 == (GizmoCap2D *)0x0) ||
           (pGVar3 = (pGVar20->fields)._._handle, pGVar3 == (GizmoHandle *)0x0))
        goto code_?;
        if (handleId == (pGVar3->fields)._id) {
          pBVar21 = (this->fields)._targetCollider;
          if ((pBVar21 == (BoxCollider *)0x0) ||
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pBVar21,(MethodInfo *)0x0),
             pTVar6 == (Transform *)0x0)) goto code_?;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0);
          fVar8 = pVVar7->y;
          fVar9 = pVVar7->z;
          (this->fields)._offsetDragWorkData.Axis.x = pVVar7->x;
          (this->fields)._offsetDragWorkData.Axis.y = fVar8;
          goto code_?;
        }
      }
    }
  }
  this_01 = (this->fields)._offsetDrag;
  if (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    uVar29 = (this->fields)._offsetDragWorkData.Axis.z;
    uVar30 = (this->fields)._offsetDragWorkData.DragOrigin.x;
    uVar31 = (this->fields)._offsetDragWorkData.DragOrigin.y;
    uVar32 = (this->fields)._offsetDragWorkData.DragOrigin.z;
    workData_00.DragOrigin.z = (float)uVar32;
    workData_00.DragOrigin.y = (float)uVar31;
    workData_00.DragOrigin.x = (float)uVar30;
    uVar33 = (this->fields)._offsetDragWorkData.Axis.x;
    uVar34 = (this->fields)._offsetDragWorkData.Axis.y;
    workData_00.Axis.y = (float)uVar34;
    workData_00.Axis.x = (float)uVar33;
    workData_00.Axis.z = (float)uVar29;
    workData_00.SnapStep = (this->fields)._offsetDragWorkData.SnapStep;
    GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
              (this_01,workData_00,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoDragEnd
               (BoxColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxCollider3DChangedAction);
    cRam_? = '\x01';
  }
  bVar1 = BoxColliderGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  method_02 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
  if (method_02 != (MethodInfo *)0x0) {
    BoxCollider3DSnapshot::BoxCollider3DSnapshot_Snapshot
              ((BoxCollider3DSnapshot *)method_02,(this->fields)._targetCollider,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
    pBVar2 = (this->fields)._preChangeColliderSnapshot;
    value = (Object *)func_?(TypeInfo__RTG__BoxCollider3DChangedAction);
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
    if (pBVar2 != (BoxCollider3DSnapshot *)0x0) {
      (value_00->_0).name = (char *)(pBVar2->fields)._boxCollider;
      func_?(&(value_00->_0).name);
      fVar3 = (pBVar2->fields)._localCenter.y;
      fVar4 = (pBVar2->fields)._localCenter.z;
      (value_00->_0).namespaze = (char *)(pBVar2->fields)._localCenter.x;
      (value_00->_0).byval_arg.data = (_union_86)fVar3;
      *(float *)&(value_00->_0).byval_arg.attrs = fVar4;
      pIVar5 = (Il2CppClass *)(pBVar2->fields)._localSize.z;
      (value_00->_0).this_arg = *(Il2CppType *)&(pBVar2->fields)._localSize;
      (value_00->_0).element_class = pIVar5;
      value[1].klass = value_00;
      func_?(value + 1,value_00);
      value_01 = (Object *)func_?(TypeInfo__RTG__BoxCollider3DSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (method_00 != (MethodInfo *)0x0) {
        value_01[1].klass = (Object__Class *)method_00->invoker_method;
        func_?(value_01 + 1);
        pIVar6 = method_00->return_type;
        *(undefined8 *)&value_01[1].monitor = *(undefined8 *)&method_00->name;
        value_01[2].monitor = (MonitorData *)pIVar6;
        _Var8 = method_00->field7_0x1c;
        _Var5 = method_00->field8_0x20;
        value_01[3].klass = (Object__Class *)method_00->parameters;
        value_01[3].monitor = (MonitorData *)_Var8;
        *(_union_155 *)(value_01 + 4) = _Var5;
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

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoDragUpdate
               (BoxColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  bVar1 = BoxColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = BoxColliderGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  pGVar2 = (this->fields)._uniScaleDrag;
  bVar1 = BoxColliderGizmo3D_get_IsSnapEnabled(this,(MethodInfo *)0x0);
  if (pGVar2 != (GizmoUniformScaleDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    pGVar3 = (this->fields)._offsetDrag;
    bVar1 = BoxColliderGizmo3D_get_IsSnapEnabled(this,(MethodInfo *)0x0);
    if (pGVar3 != (GizmoSglAxisOffsetDrag3D *)0x0) {
      (pGVar3->fields)._._isSnapEnabled = bVar1;
      pGVar4 = (this->fields)._midCap;
      if ((pGVar4 != (GizmoCap3D *)0x0) &&
         (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
        if (handleId == (pGVar5->fields)._id) {
          pGVar6 = (this->fields)._._gizmo;
          if (pGVar6 != (Gizmo *)0x0) {
            pVVar7 = Gizmo::Gizmo_get_RelativeDragScale
                                ((Vector3 *)&stack0xffffffc0,pGVar6,(MethodInfo *)0x0);
            uVar8._0_4_ = pVVar7->x;
            uVar8._4_4_ = pVVar7->y;
            fVar9 = pVVar7->z;
            pVVar7 = BoxColliderGizmo3D_CalcWorldSize
                                ((Vector3 *)&stack0xffffffc0,this,(MethodInfo *)(float)uVar8);
            uVar10 = pVVar7->x;
            uVar11 = pVVar7->y;
            VVar12.y = (float)uVar11 * SUB84(uVar8,4);
            VVar12.x = (float)uVar10 * (float)uVar8;
            VVar12.z = pVVar7->z * fVar9;
            pVVar7 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffc0,VVar12,(MethodInfo *)0x0)
            ;
            uVar13._0_4_ = pVVar7->x;
            uVar13._4_4_ = pVVar7->y;
            pVVar7 = (Vector3 *)pVVar7->z;
            pMVar14 = (MonitorData *)&UNK_?;
            pHVar15 = (Hotkeys__Class *)(float)uVar13;
            pVVar16 = pVVar7;
            pVVar17 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                      MVWorldObject_get_WorldPosition
                                (pVVar7,(MVWorldObject *)0x0,in_stack_18);
            uVar19 = pVVar17->x;
            uVar20 = pVVar17->y;
            fVar21 = (float)uVar13 - (float)uVar19;
            fVar22 = SUB84(uVar13,4) - (float)uVar20;
            fVar9 = (float)pVVar7 - pVVar17->z;
            if (fVar22 * fVar22 + fVar21 * fVar21 + fVar9 * fVar9 < _UNK_?) {
              pVVar7 = Vector3Ex::Vector3Ex_FromValue
                                  ((Vector3 *)&stack0xffffffc0,1e-08,(MethodInfo *)0x0);
              pHVar15 = (Hotkeys__Class *)pVVar7->x;
              pMVar14 = (MonitorData *)pVVar7->y;
              pVVar16 = (Vector3 *)pVVar7->z;
            }
            pBVar23 = (this->fields)._targetCollider;
            if ((pBVar23 != (BoxCollider *)0x0) &&
               (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pBVar23,(MethodInfo *)0x0),
               pTVar24 != (Transform *)0x0)) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)&stack0xffffffc0,pTVar24,(MethodInfo *)0x0);
              pVVar7 = Vector3Ex::Vector3Ex_GetInverse
                                  ((Vector3 *)&stack0xffffffc0,*pVVar7,(MethodInfo *)0x0);
              uVar25 = pVVar7->x;
              uVar26 = pVVar7->y;
              fVar22 = (float)pHVar15 * (float)uVar25;
              fVar21 = (float)pMVar14 * (float)uVar26;
              fVar9 = (float)pVVar16 * pVVar7->z;
code_?:
              value.y = fVar21;
              value.x = fVar22;
              value.z = fVar9;
              UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                        (pBVar23,value,(MethodInfo *)0x0);
              BoxColliderGizmo3D_UpdateTicks(this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffcc,this,(MethodInfo *)0x0);
          pGVar6 = (this->fields)._._gizmo;
          if (pGVar6 != (Gizmo *)0x0) {
            pVVar7 = Gizmo::Gizmo_get_RelativeDragOffset
                                ((Vector3 *)&stack0xffffffd8,pGVar6,(MethodInfo *)0x0);
            uVar27._0_4_ = pVVar7->x;
            uVar27._4_4_ = pVVar7->y;
            fVar9 = pVVar7->z;
            pGVar3 = (this->fields)._offsetDrag;
            if (pGVar3 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              pVVar7 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                  ((Vector3 *)&stack0xffffffc0,pGVar3,(MethodInfo *)0x0);
              uVar28 = pVVar7->x;
              uVar29 = pVVar7->y;
              pHVar15 = (Hotkeys__Class *)&stack0xffffffe4;
              index = (Hotkeys__Class *)(this->fields)._dragAxisIndex;
              fVar22 = (float)uVar29 * SUB84(uVar27,4) + (float)uVar28 * (float)uVar27 +
                       pVVar7->z * fVar9;
              pHVar30 = (Hotkeys__Class *)&UNK_?;
              pHVar31 = index;
              fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                 ((Vector3 *)pHVar15,(int32_t)index,(MethodInfo *)0x0);
              fVar21 = (float)((uint)fVar22 & _UNK_?);
              fVar9 = _UNK_?;
              if (0.0 <= fVar22) {
                fVar9 = _UNK_?;
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pHVar33 = (Hotkeys__Class *)
                        mscorlib.dll::System::Math::Math_Max_7
                                  (0.0,fVar9 * fVar21 + fVar32,(MethodInfo *)0x0);
              pHVar34 = pHVar33;
              pHVar35 = pHVar15;
              if (((index == (Hotkeys__Class *)0x0) ||
                  (pHVar34 = pHVar30, pHVar35 = pHVar33, index == (Hotkeys__Class *)0x1)) ||
                 (pHVar35 = pHVar15, pHVar31 = pHVar33, index == (Hotkeys__Class *)0x2)) {
                fVar9 = (this->fields)._scalePivot.x;
                pGVar3 = (this->fields)._offsetDrag;
                if (pGVar3 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                  pVVar7 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                      ((Vector3 *)&stack0xffffffc0,pGVar3,(MethodInfo *)0x0);
                  fVar21 = pVVar7->x;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                     ((Vector3 *)&stack0xffffffe4,(this->fields)._dragAxisIndex,
                                      (MethodInfo *)0x0);
                  if ((this->fields)._sharedHotkeys == (BoxColliderGizmo3DHotkeys *)0x0) {
                    pBVar36 = (this->fields)._hotkeys;
                    if (pBVar36 == (BoxColliderGizmo3DHotkeys *)0x0) goto code_?;
                  }
                  else {
                    pBVar36 = (this->fields)._sharedHotkeys;
                  }
                  pHVar15 = (Hotkeys__Class *)(pBVar36->fields)._scaleFromCenter;
                  if (pHVar15 != (Hotkeys__Class *)0x0) {
                    uVar37._4_4_ = (float)&UNK_?;
                    uVar37._0_4_ = fVar9 + fVar21 * fVar22 * _UNK_?;
                    bVar1 = Hotkeys::Hotkeys_IsActive((Hotkeys *)pHVar15,1,(MethodInfo *)0x0);
                    if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                      pBVar23 = (this->fields)._targetCollider;
                      if ((pBVar23 == (BoxCollider *)0x0) ||
                         (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pBVar23,(MethodInfo *)0x0),
                         pTVar24 == (Transform *)0x0)) goto code_?;
                      pHVar34 = (Hotkeys__Class *)uVar37;
                      pHVar35 = SUB84(uVar37,4);
                      position.z = (float)pHVar15;
                      position.x = (float)uVar37;
                      position.y = SUB84(uVar37,4);
                      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_InverseTransformPoint
                                          ((Vector3 *)&stack0xffffffc0,pTVar24,position,
                                           (MethodInfo *)0x0);
                      uVar38 = pVVar7->x;
                      uVar39 = pVVar7->y;
                      this = (BoxColliderGizmo3D *)pVVar7->z;
                      fVar40 = (float)uVar39;
                      VVar12.x = (float)uVar38;
                      VVar12 = (Vector3)CONCAT84(uVar41,VVar12.x);
                      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                      BoxCollider_set_center(pBVar23,VVar12,(MethodInfo *)0x0);
                      pHVar31 = pHVar15;
                    }
                    pBVar23 = (this_00->fields)._targetCollider;
                    if ((pBVar23 != (BoxCollider *)0x0) &&
                       (pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pBVar23,(MethodInfo *)0x0),
                       pTVar24 != (Transform *)0x0)) {
                      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_lossyScale
                                          ((Vector3 *)&stack0xffffffc0,pTVar24,(MethodInfo *)0x0);
                      pVVar7 = Vector3Ex::Vector3Ex_GetInverse
                                          ((Vector3 *)&stack0xffffffc0,*pVVar7,(MethodInfo *)0x0);
                      uVar42 = pVVar7->x;
                      uVar43 = pVVar7->y;
                      fVar22 = (float)uVar42 * (float)pHVar34;
                      fVar21 = (float)uVar43 * (float)pHVar35;
                      fVar9 = pVVar7->z * (float)pHVar31;
                      goto code_?;
                    }
                  }
                }
              }
              else {
                func_?();
                this_01 = (IndexOutOfRangeException *)func_?();
                method_00 = (MethodInfo *)0x0;
                message = (String *)func_?();
                mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                          (this_01,message,method_00);
                func_?();
                func_?();
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoRender
               (BoxColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = BoxColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
  }
  this_01 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_01 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel == (BoxColliderGizmo3DLookAndFeel *)0x0) {
      pBVar2 = (this->fields)._lookAndFeel;
      if (pBVar2 == (BoxColliderGizmo3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pBVar2 = (this->fields)._sharedLookAndFeel;
    }
    GizmoLineMaterial::GizmoLineMaterial_SetColor
              (this_01,(pBVar2->fields)._wireColor,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
    pVVar3 = BoxColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
    fVar4 = 0.0;
    fVar5 = pVVar3->z;
    pBVar6 = this;
    pVVar3 = BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
    uVar7 = pVVar3->y;
    fVar8 = pVVar3->z;
    this_00 = (this->fields)._targetCollider;
    if ((this_00 != (BoxCollider *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
    {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,this_02,(MethodInfo *)0x0);
      size.y = (float)uVar7;
      size.x = 6.16571e-44;
      fVar10 = pQVar9->x;
      fVar11 = pQVar9->y;
      fVar12 = pQVar9->z;
      fVar13 = pQVar9->w;
      uVar14 = CONCAT44(&stack0xffffffac,&UNK_?);
      func_?();
      center.z = fVar5;
      center.x = (float)(int)uVar14;
      center.y = (float)(int)((ulonglong)uVar14 >> 0x20);
      size.z = fVar8;
      rotation.y = fVar11;
      rotation.x = fVar10;
      rotation.z = fVar12;
      rotation.w = fVar13;
      OBB::OBB__ctor_1((OBB *)&stack0xffffffac,center,size,rotation,(MethodInfo *)0x0);
      box._size.y = fVar4;
      box._size.x = (float)pBVar6;
      box._size.z = fStack_15;
      box._center.x = fStack_16;
      box._center.y = fStack_17;
      box._center.z = fStack_18;
      box._rotation.x = fStack_19;
      box._rotation.y = fStack_20;
      box._rotation.z = fStack_21;
      box._rotation.w = fStack_22;
      box._isValid = (bool)in_stack_23;
      box._41_3_ = SUB43(in_stack_23,1);
      GraphicsEx::GraphicsEx_DrawWireBox_1(box,(MethodInfo *)0x0);
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_03 = (RTGizmosEngine *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (this_03 != (RTGizmosEngine *)0x0) {
        iVar24 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_03,(MethodInfo *)0x0);
        if (1 < iVar24) {
          BoxColliderGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
        }
        BoxColliderGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
        pGVar25 = (this->fields)._leftTick;
        if (pGVar25 != (GizmoCap2D *)0x0) {
          (*(code *)(pGVar25->klass->vtable).Render_1.method)();
          pGVar25 = (this->fields)._rightTick;
          if (pGVar25 != (GizmoCap2D *)0x0) {
            (*(code *)(pGVar25->klass->vtable).Render_1.method)();
            pGVar25 = (this->fields)._topTick;
            if (pGVar25 != (GizmoCap2D *)0x0) {
              (*(code *)(pGVar25->klass->vtable).Render_1.method)();
              pGVar25 = (this->fields)._bottomTick;
              if (pGVar25 != (GizmoCap2D *)0x0) {
                (*(code *)(pGVar25->klass->vtable).Render_1.method)();
                pGVar25 = (this->fields)._frontTick;
                if (pGVar25 != (GizmoCap2D *)0x0) {
                  (*(code *)(pGVar25->klass->vtable).Render_1.method)();
                  pGVar25 = (this->fields)._backTick;
                  if (pGVar25 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar25->klass->vtable).Render_1.method)();
                    pGVar26 = (this->fields)._midCap;
                    if (pGVar26 != (GizmoCap3D *)0x0) {
                      (*(code *)(pGVar26->klass->vtable).Render_1.method)();
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
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoUpdateBegin
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  bVar1 = BoxColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    pGVar3 = (pGVar2->fields)._transform;
    pVVar4 = BoxColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
    if (pGVar3 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Position3D(pGVar3,*pVVar4,(MethodInfo *)0x0);
      BoxColliderGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        BoxColliderGizmo3D_UpdateHoverPriorities(this,camera,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._._gizmo;
        if ((((pGVar2 != (Gizmo *)0x0) &&
             (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
            (pGVar5 = (this->fields)._midCap, pGVar5 != (GizmoCap3D *)0x0)) &&
           (this_00 = (pGVar5->fields)._transform, this_00 != (GizmoTransform *)0x0)) {
          GizmoTransform::GizmoTransform_set_Position3D
                    (this_00,(pGVar3->fields)._position3D,(MethodInfo *)0x0);
          pGStack6 = (this->fields)._midCap;
          if ((this->fields)._sharedLookAndFeel == (BoxColliderGizmo3DLookAndFeel *)0x0) {
            pBVar7 = (this->fields)._lookAndFeel;
            if (pBVar7 == (BoxColliderGizmo3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pBVar7 = (this->fields)._sharedLookAndFeel;
          }
          if ((pBVar7->fields)._isMidCapVisible == 0) {
            bVar1 = 0;
          }
          else {
            bVar1 = (this->fields)._isMidCapVisible;
          }
          if (pGStack6 != (GizmoCap3D *)0x0) {
            if ((bool)(pGStack6->fields)._._isVisible == (bVar1 != 0)) {
              return;
            }
            (pGStack6->fields)._._isVisible = bVar1 != 0;
            pIStack8 = (pGStack6->klass->vtable).OnHoverableStateChanged.methodPtr;
            (*(code *)(pGStack6->klass->vtable).OnVisibilityStateChanged.method)();
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OwnsHandle
               (BoxColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._leftTick;
  if ((pGVar2 != (GizmoCap2D *)0x0) &&
     (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
    if (handleId == (pGVar3->fields)._id) {
      return 1;
    }
    pGVar2 = (this->fields)._rightTick;
    if ((pGVar2 != (GizmoCap2D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
      if (handleId == (pGVar3->fields)._id) {
        return 1;
      }
      pGVar2 = (this->fields)._topTick;
      if ((pGVar2 != (GizmoCap2D *)0x0) &&
         (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
        if (handleId == (pGVar3->fields)._id) {
          return 1;
        }
        pGVar2 = (this->fields)._bottomTick;
        if ((pGVar2 != (GizmoCap2D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
          if (handleId == (pGVar3->fields)._id) {
            return 1;
          }
          pGVar2 = (this->fields)._frontTick;
          if ((pGVar2 != (GizmoCap2D *)0x0) &&
             (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
            if (handleId == (pGVar3->fields)._id) {
              return 1;
            }
            pGVar2 = (this->fields)._backTick;
            if ((pGVar2 != (GizmoCap2D *)0x0) &&
               (pGVar3 = (pGVar2->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
              if (handleId == (pGVar3->fields)._id) {
                return 1;
              }
              pGVar4 = (this->fields)._midCap;
              if ((pGVar4 != (GizmoCap3D *)0x0) &&
                 (pGVar3 = (pGVar4->fields)._._handle, pGVar3 != (GizmoHandle *)0x0)) {
                return handleId == (pGVar3->fields)._id;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_SetupSharedLookAndFeel
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (BoxColliderGizmo3DLookAndFeel *)0x0) {
    pBVar1 = (this->fields)._lookAndFeel;
    if (pBVar1 == (BoxColliderGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pBVar1 = (this->fields)._sharedLookAndFeel;
  }
  pGVar2 = (pBVar1->fields)._tickLookAndFeel;
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


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_UpdateHoverPriorities
               (BoxColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._faceTicks;
  if (pBVar1 == (BoxColliderGizmo3D_FaceTick__Array *)0x0) goto code_?;
  if (pBVar1->max_length < 3) goto code_?;
  pBVar2 = (this->fields)._faceTicks;
  pBVar3 = pBVar1->vector[2];
  if (pBVar2->max_length < 4) goto code_?;
  pBVar4 = pBVar2->vector[3];
  if ((((pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
       (pGVar5 = (pBVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
      (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
     (((pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0 &&
       ((pPVar7->fields)._priority = 0, pBVar4 != (BoxColliderGizmo3D_FaceTick *)0x0)) &&
      ((pGVar5 = (pBVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
       ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
        (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))))))) {
    (pPVar7->fields)._priority = 0;
    fVar8 = (pBVar3->fields).FaceCenter.z;
    uVar9._0_4_ = (pBVar3->fields).FaceCenter.x;
    uVar9._4_4_ = (pBVar3->fields).FaceCenter.y;
    VVar10 = (pBVar3->fields).FaceNormal;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    point.z = fVar8;
    point.x = (float)(int)uVar9;
    point.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    bVar11 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar10,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      pGVar5 = (pBVar4->fields).Tick;
      if ((pGVar5 != (GizmoCap2D *)0x0) &&
         (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
        pGVar5 = (pBVar3->fields).Tick;
code_?:
        pPVar7 = (pGVar6->fields)._hoverPriority2D;
        if (((pGVar5 != (GizmoCap2D *)0x0) &&
            (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
           (pPVar7 != (Priority *)0x0)) {
          Priority::Priority_MakeHigherThan
                    (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
          pGVar12 = (this->fields)._midCap;
          if (((pGVar12 != (GizmoCap3D *)0x0) &&
              (pGVar6 = (pGVar12->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
             ((pGVar5 = (pBVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
              ((pGVar13 = (pGVar5->fields)._._handle, pGVar13 != (GizmoHandle *)0x0 &&
               (pPVar7 = (pGVar6->fields)._genericHoverPriority, pPVar7 != (Priority *)0x0)))))) {
            Priority::Priority_MakeHigherThan
                      (pPVar7,(pGVar13->fields)._genericHoverPriority,(MethodInfo *)0x0);
            pGVar12 = (this->fields)._midCap;
            if ((pGVar12 != (GizmoCap3D *)0x0) &&
               ((((pGVar6 = (pGVar12->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                  (pGVar5 = (pBVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                 (pGVar13 = (pGVar5->fields)._._handle, pGVar13 != (GizmoHandle *)0x0)) &&
                (camera_00 = (Camera *)(pGVar6->fields)._genericHoverPriority,
                camera_00 != (Camera *)0x0)))) {
              Priority::Priority_MakeHigherThan
                        ((Priority *)camera_00,(pGVar13->fields)._genericHoverPriority,
                         (MethodInfo *)0x0);
              pBVar1 = (this->fields)._faceTicks;
              if (pBVar1 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                if (pBVar1->max_length < 6) goto code_?;
                pBVar2 = (this->fields)._faceTicks;
                pBVar3 = pBVar1->vector[5];
                if (pBVar2->max_length < 5) goto code_?;
                pBVar4 = pBVar2->vector[4];
                if (((pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
                    (pGVar5 = (pBVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                   ((((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                      ((pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0 &&
                       ((pPVar7->fields)._priority = 2, pBVar4 != (BoxColliderGizmo3D_FaceTick *)0x0
                       )))) && (pGVar5 = (pBVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                    ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                     (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))))) {
                  (pPVar7->fields)._priority = 2;
                  fVar8 = (pBVar3->fields).FaceCenter.z;
                  uVar14 = (pBVar3->fields).FaceCenter.x;
                  uVar15 = (pBVar3->fields).FaceCenter.y;
                  VVar10.y = (float)uVar15;
                  VVar10.x = (float)uVar14;
                  uVar16._0_4_ = (pBVar3->fields).FaceNormal.x;
                  uVar16._4_4_ = (pBVar3->fields).FaceNormal.y;
                  fVar17 = (pBVar3->fields).FaceNormal.z;
                  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  VVar10.z = fVar8;
                  pointNormal.z = fVar17;
                  pointNormal.x = (float)(int)uVar16;
                  pointNormal.y = (float)(int)((ulonglong)uVar16 >> 0x20);
                  bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                     (camera_00,VVar10,pointNormal,(MethodInfo *)0x0);
                  if (bVar11 == 0) {
                    pGVar5 = (pBVar4->fields).Tick;
                    if ((pGVar5 != (GizmoCap2D *)0x0) &&
                       (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                      pGVar5 = (pBVar3->fields).Tick;
code_?:
                      pPVar7 = (pGVar6->fields)._hoverPriority2D;
                      if (((pGVar5 != (GizmoCap2D *)0x0) &&
                          (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
                         (pPVar7 != (Priority *)0x0)) {
                        Priority::Priority_MakeHigherThan
                                  (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
                        pGVar12 = (this->fields)._midCap;
                        if (((pGVar12 != (GizmoCap3D *)0x0) &&
                            (pGVar6 = (pGVar12->fields)._._handle, pGVar6 != (GizmoHandle *)0x0))
                           && ((pGVar5 = (pBVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
                               ((pGVar13 = (pGVar5->fields)._._handle,
                                pGVar13 != (GizmoHandle *)0x0 &&
                                (pPVar7 = (pGVar6->fields)._genericHoverPriority,
                                pPVar7 != (Priority *)0x0)))))) {
                          Priority::Priority_MakeHigherThan
                                    (pPVar7,(pGVar13->fields)._genericHoverPriority,
                                     (MethodInfo *)0x0);
                          pGVar12 = (this->fields)._midCap;
                          if ((pGVar12 != (GizmoCap3D *)0x0) &&
                             ((((pGVar6 = (pGVar12->fields)._._handle,
                                pGVar6 != (GizmoHandle *)0x0 &&
                                (pGVar5 = (pBVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                               (pGVar13 = (pGVar5->fields)._._handle, pGVar13 != (GizmoHandle *)0x0
                               )) && (pPVar7 = (pGVar6->fields)._genericHoverPriority,
                                     pPVar7 != (Priority *)0x0)))) {
                            Priority::Priority_MakeHigherThan
                                      (pPVar7,(pGVar13->fields)._genericHoverPriority,
                                       (MethodInfo *)0x0);
                            pBVar1 = (this->fields)._faceTicks;
                            if (pBVar1 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                              if (pBVar1->max_length == 0) goto code_?;
                              pBVar2 = (this->fields)._faceTicks;
                              pBVar3 = pBVar1->vector[0];
                              if (pBVar2->max_length < 2) goto code_?;
                              pBVar4 = pBVar2->vector[1];
                              if ((((pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
                                   (pGVar5 = (pBVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0))
                                  && ((pGVar6 = (pGVar5->fields)._._handle,
                                      pGVar6 != (GizmoHandle *)0x0 &&
                                      ((pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                       pPVar7 != (Priority *)0x0 &&
                                       ((pPVar7->fields)._priority = 4,
                                       pBVar4 != (BoxColliderGizmo3D_FaceTick *)0x0)))))) &&
                                 ((pGVar5 = (pBVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
                                  ((pGVar6 = (pGVar5->fields)._._handle,
                                   pGVar6 != (GizmoHandle *)0x0 &&
                                   (pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                   pPVar7 != (Priority *)0x0)))))) {
                                (pPVar7->fields)._priority = 4;
                                fVar8 = (pBVar3->fields).FaceCenter.z;
                                uVar18 = (pBVar3->fields).FaceCenter.x;
                                uVar19 = (pBVar3->fields).FaceCenter.y;
                                point_00.y = (float)uVar19;
                                point_00.x = (float)uVar18;
                                uVar20._0_4_ = (pBVar3->fields).FaceNormal.x;
                                uVar20._4_4_ = (pBVar3->fields).FaceNormal.y;
                                fVar17 = (pBVar3->fields).FaceNormal.z;
                                if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__RTG__CameraEx);
                                }
                                point_00.z = fVar8;
                                pointNormal_00.z = fVar17;
                                pointNormal_00.x = (float)(int)uVar20;
                                pointNormal_00.y = (float)(int)((ulonglong)uVar20 >> 0x20);
                                bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                                   (camera_00,point_00,pointNormal_00,
                                                    (MethodInfo *)0x0);
                                if (bVar11 == 0) {
                                  pGVar5 = (pBVar4->fields).Tick;
                                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                                     (pGVar6 = (pGVar5->fields)._._handle,
                                     pGVar6 != (GizmoHandle *)0x0)) {
                                    pGVar5 = (pBVar3->fields).Tick;
code_?:
                                    pPVar7 = (pGVar6->fields)._hoverPriority2D;
                                    if (((pGVar5 != (GizmoCap2D *)0x0) &&
                                        (pGVar6 = (pGVar5->fields)._._handle,
                                        pGVar6 != (GizmoHandle *)0x0)) &&
                                       (pPVar7 != (Priority *)0x0)) {
                                      Priority::Priority_MakeHigherThan
                                                (pPVar7,(pGVar6->fields)._hoverPriority2D,
                                                 (MethodInfo *)0x0);
                                      pGVar12 = (this->fields)._midCap;
                                      if (((pGVar12 != (GizmoCap3D *)0x0) &&
                                          (pGVar6 = (pGVar12->fields)._._handle,
                                          pGVar6 != (GizmoHandle *)0x0)) &&
                                         ((pGVar5 = (pBVar3->fields).Tick,
                                          pGVar5 != (GizmoCap2D *)0x0 &&
                                          ((pGVar13 = (pGVar5->fields)._._handle,
                                           pGVar13 != (GizmoHandle *)0x0 &&
                                           (pPVar7 = (pGVar6->fields)._genericHoverPriority,
                                           pPVar7 != (Priority *)0x0)))))) {
                                        Priority::Priority_MakeHigherThan
                                                  (pPVar7,(pGVar13->fields)._genericHoverPriority,
                                                   (MethodInfo *)0x0);
                                        pGVar12 = (this->fields)._midCap;
                                        if ((pGVar12 != (GizmoCap3D *)0x0) &&
                                           ((((pGVar6 = (pGVar12->fields)._._handle,
                                              pGVar6 != (GizmoHandle *)0x0 &&
                                              (pGVar5 = (pBVar4->fields).Tick,
                                              pGVar5 != (GizmoCap2D *)0x0)) &&
                                             (pGVar13 = (pGVar5->fields)._._handle,
                                             pGVar13 != (GizmoHandle *)0x0)) &&
                                            (pPVar7 = (pGVar6->fields)._genericHoverPriority,
                                            pPVar7 != (Priority *)0x0)))) {
                                          Priority::Priority_MakeHigherThan
                                                    (pPVar7,(pGVar13->fields)._genericHoverPriority,
                                                     (MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  pGVar5 = (pBVar3->fields).Tick;
                                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                                     (pGVar6 = (pGVar5->fields)._._handle,
                                     pGVar6 != (GizmoHandle *)0x0)) {
                                    pGVar5 = (pBVar4->fields).Tick;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pGVar5 = (pBVar3->fields).Tick;
                    if ((pGVar5 != (GizmoCap2D *)0x0) &&
                       (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                      pGVar5 = (pBVar4->fields).Tick;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pGVar5 = (pBVar3->fields).Tick;
      if ((pGVar5 != (GizmoCap2D *)0x0) &&
         (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
        pGVar5 = (pBVar4->fields).Tick;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void UpdateTickColors(Camera) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_UpdateTickColors
               (BoxColliderGizmo3D *this,Camera *camera,MethodInfo *method)

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
    uStack_4._4_4_ = (BoxColliderGizmo3D_FaceTick__Array *)pVVar2->y;
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
      pBVar14 = (this->fields)._faceTicks;
      uStack_4 = CONCAT44(pBVar14,(undefined4)uStack_4);
      fStack_15 = (float)((uint)(fStack_10 * (float)uVar12 + fStack_9 * (float)uVar11 +
                                fStack_8 * fVar5) ^
                         __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      fStack_16 = (float)uVar11;
      fStack_17 = (float)uVar12;
      fStack_18 = fVar5;
      if (pBVar14 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
        ppBStack_19 = pBVar14->vector;
        do {
          if ((int)pBVar14->max_length <= (int)uStack_13) {
            return;
          }
          if (pBVar14->max_length <= uStack_13) goto code_?;
          pBStack_20 = *ppBStack_19;
          if (pBStack_20 == (BoxColliderGizmo3D_FaceTick *)0x0) break;
          this_00 = (pBStack_20->fields).Tick;
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
            uVar24._0_4_ = (pBStack_20->fields).FaceCenter.x;
            uVar24._4_4_ = (pBStack_20->fields).FaceCenter.y;
            fStack_25 = (pBStack_20->fields).FaceCenter.z;
            uVar26._0_4_ = (pBStack_20->fields).FaceNormal.x;
            uVar26._4_4_ = (pBStack_20->fields).FaceNormal.y;
            pGStack_27 = (GizmoOverrideColor *)(pBStack_20->fields).FaceNormal.z;
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
            if ((this->fields)._sharedLookAndFeel == (BoxColliderGizmo3DLookAndFeel *)0x0) {
              pBVar31 = (this->fields)._lookAndFeel;
              if (pBVar31 == (BoxColliderGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pBVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar29->fields)._color,
                                 fStack_8 * (pBVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
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
            if ((this->fields)._sharedLookAndFeel == (BoxColliderGizmo3DLookAndFeel *)0x0) {
              pBVar31 = (this->fields)._lookAndFeel;
              if (pBVar31 == (BoxColliderGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pBVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar29->fields)._borderColor,
                                 fStack_8 * (pBVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
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
          VStack_3.x = (pBStack_20->fields).FaceCenter.x;
          VStack_3.y = (pBStack_20->fields).FaceCenter.y;
          VStack_3.z = (pBStack_20->fields).FaceCenter.z;
          isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                            fVar5 * VStack_3.z + fStack_15;
          _bStack_20 = CONCAT31(uStack_36,isVisible);
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_00,isVisible,(MethodInfo *)0x0);
          uStack_13 = uStack_13 + 1;
          ppBStack_19 = ppBStack_19 + 1;
          pBVar14 = uStack_4._4_4_;
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


/* Void UpdateTicks() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_UpdateTicks
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    pCStack_1 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pVVar2 = BoxColliderGizmo3D_CalcWorldCenter((Vector3 *)&stack0xffffffbc,this,(MethodInfo *)0x0)
    ;
    uStack_3._0_4_ = pVVar2->x;
    uStack_3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    fStack_5 = fVar4;
    pVVar2 = BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffbc,this,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar2->x;
    uStack_6._4_4_ = pVVar2->y;
    fVar7 = pVVar2->z;
    pBVar8 = (this->fields)._targetCollider;
    if (pBVar8 != (BoxCollider *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pBVar8,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffffb8,pTVar9,(MethodInfo *)0x0);
        boxRotation_04 = *pQVar10;
        boxRotation_03 = *pQVar10;
        boxRotation_02 = *pQVar10;
        boxRotation_01 = *pQVar10;
        boxRotation_00 = *pQVar10;
        fVar11 = pQVar10->x;
        fVar12 = pQVar10->y;
        fVar13 = pQVar10->z;
        uVar14._0_4_ = pQVar10->y;
        uVar14._4_4_ = pQVar10->z;
        fVar15 = pQVar10->w;
        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          fVar12 = (float)uVar14;
          fVar13 = SUB84(uVar14,4);
        }
        boxCenter.z = fVar4;
        boxCenter.x = (float)(undefined4)uStack_3;
        boxCenter.y = (float)uStack_3._4_4_;
        boxSize.z = fVar7;
        boxSize.x = (float)(undefined4)uStack_6;
        boxSize.y = (float)uStack_6._4_4_;
        boxRotation.y = fVar12;
        boxRotation.x = fVar11;
        boxRotation.z = fVar13;
        boxRotation.w = fVar15;
        pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                            ((Vector3 *)&stack0xffffffbc,boxCenter,boxSize,boxRotation,
                             BoxFace__Enum_Left,(MethodInfo *)0x0);
        pGVar16 = (this->fields)._leftTick;
        uVar17 = pVVar2->x;
        uVar18 = pVVar2->y;
        fStack_19 = pVVar2->z;
        if (pCStack_1 != (Camera *)0x0) {
          position.z = pVVar2->z;
          position.x = (float)uVar17;
          position.y = (float)uVar18;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              (&VStack_20,pCStack_1,position,(MethodInfo *)0x0);
          value.x = pVVar2->x;
          value.y = pVVar2->y;
          VStack_20.y = value.x;
          VStack_20.z = value.y;
          if ((pGVar16 != (GizmoCap2D *)0x0) &&
             (pGVar21 = (pGVar16->fields)._transform, pGVar21 != (GizmoTransform *)0x0)) {
            GizmoTransform::GizmoTransform_set_Position2D(pGVar21,value,(MethodInfo *)0x0);
            pBVar22 = (this->fields)._faceTicks;
            if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
              if (pBVar22->max_length < 3) goto code_?;
              pBVar23 = pBVar22->vector[2];
              if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                (pBVar23->fields).FaceCenter.x = (float)uVar17;
                (pBVar23->fields).FaceCenter.y = (float)uVar18;
                (pBVar23->fields).FaceCenter.z = fStack_19;
                pBVar22 = (this->fields)._faceTicks;
                if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                  if (pBVar22->max_length < 3) goto code_?;
                  pBVar23 = pBVar22->vector[2];
                  pBVar8 = (this->fields)._targetCollider;
                  if (pBVar8 != (BoxCollider *)0x0) {
                    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pBVar8,(MethodInfo *)0x0);
                    if (pTVar9 != (Transform *)0x0) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)&stack0xffffffbc,pTVar9,
                                                    (MethodInfo *)0x0);
                      uVar24 = pVVar2->x;
                      uVar25 = pVVar2->y;
                      uVar26 = uVar25 ^ 
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                      ;
                      fVar4 = (float)((uint)pVVar2->z ^
                                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                      );
                      if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                        (pBVar23->fields).FaceNormal.x =
                             (float)(uVar24 ^ 
                                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                    );
                        (pBVar23->fields).FaceNormal.y = (float)uVar26;
                        (pBVar23->fields).FaceNormal.z = fVar4;
                        boxCenter_00.z = fStack_5;
                        boxCenter_00.x = (float)(undefined4)uStack_3;
                        boxCenter_00.y = (float)uStack_3._4_4_;
                        boxSize_00.z = fVar7;
                        boxSize_00.x = (float)(undefined4)uStack_6;
                        boxSize_00.y = (float)uStack_6._4_4_;
                        pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                            ((Vector3 *)&stack0xffffffbc,boxCenter_00,boxSize_00,
                                             boxRotation_00,BoxFace__Enum_Right,(MethodInfo *)0x0);
                        pGVar16 = (this->fields)._rightTick;
                        fStack_19 = pVVar2->z;
                        fVar4 = pVVar2->x;
                        fVar11 = pVVar2->y;
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_WorldToScreenPoint_1
                                            (&VStack_20,pCStack_1,*pVVar2,(MethodInfo *)0x0);
                        value_00.x = pVVar2->x;
                        value_00.y = pVVar2->y;
                        VStack_20.y = value_00.x;
                        VStack_20.z = value_00.y;
                        if ((pGVar16 != (GizmoCap2D *)0x0) &&
                           (pGVar21 = (pGVar16->fields)._transform, pGVar21 != (GizmoTransform *)0x0
                           )) {
                          GizmoTransform::GizmoTransform_set_Position2D
                                    (pGVar21,value_00,(MethodInfo *)0x0);
                          pBVar22 = (this->fields)._faceTicks;
                          if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                            if (pBVar22->max_length < 4) goto code_?;
                            pBVar23 = pBVar22->vector[3];
                            if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                              (pBVar23->fields).FaceCenter.x = fVar4;
                              (pBVar23->fields).FaceCenter.y = fVar11;
                              (pBVar23->fields).FaceCenter.z = fStack_19;
                              pBVar22 = (this->fields)._faceTicks;
                              if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                if (pBVar22->max_length < 4) goto code_?;
                                pBVar23 = pBVar22->vector[3];
                                pBVar8 = (this->fields)._targetCollider;
                                if (pBVar8 != (BoxCollider *)0x0) {
                                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pBVar8,(MethodInfo *)0x0);
                                  if (pTVar9 != (Transform *)0x0) {
                                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_right((Vector3 *)&stack0xffffffbc,
                                                                  pTVar9,(MethodInfo *)0x0);
                                    fVar11 = pVVar2->y;
                                    fVar4 = pVVar2->z;
                                    if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                                      (pBVar23->fields).FaceNormal.x = pVVar2->x;
                                      (pBVar23->fields).FaceNormal.y = fVar11;
                                      (pBVar23->fields).FaceNormal.z = fVar4;
                                      boxCenter_01.z = fStack_5;
                                      boxCenter_01.x = (float)(undefined4)uStack_3;
                                      boxCenter_01.y = (float)uStack_3._4_4_;
                                      boxSize_01.z = fVar7;
                                      boxSize_01.x = (float)(undefined4)uStack_6;
                                      boxSize_01.y = (float)uStack_6._4_4_;
                                      pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                          ((Vector3 *)&stack0xffffffbc,boxCenter_01,
                                                           boxSize_01,boxRotation_01,
                                                           BoxFace__Enum_Top,(MethodInfo *)0x0);
                                      pGVar16 = (this->fields)._topTick;
                                      fStack_19 = pVVar2->z;
                                      fVar4 = pVVar2->x;
                                      fVar11 = pVVar2->y;
                                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                Camera_WorldToScreenPoint_1
                                                          (&VStack_20,pCStack_1,*pVVar2,
                                                           (MethodInfo *)0x0);
                                      value_01.x = pVVar2->x;
                                      value_01.y = pVVar2->y;
                                      VStack_20.y = value_01.x;
                                      VStack_20.z = value_01.y;
                                      if ((pGVar16 != (GizmoCap2D *)0x0) &&
                                         (pGVar21 = (pGVar16->fields)._transform,
                                         pGVar21 != (GizmoTransform *)0x0)) {
                                        GizmoTransform::GizmoTransform_set_Position2D
                                                  (pGVar21,value_01,(MethodInfo *)0x0);
                                        pBVar22 = (this->fields)._faceTicks;
                                        if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                          if (pBVar22->max_length < 6) goto code_?;
                                          pBVar23 = pBVar22->vector[5];
                                          if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                                            (pBVar23->fields).FaceCenter.x = fVar4;
                                            (pBVar23->fields).FaceCenter.y = fVar11;
                                            (pBVar23->fields).FaceCenter.z = fStack_19;
                                            pBVar22 = (this->fields)._faceTicks;
                                            if (pBVar22 != (BoxColliderGizmo3D_FaceTick__Array *)0x0
                                               ) {
                                              if (pBVar22->max_length < 6) goto code_?;
                                              pBVar23 = pBVar22->vector[5];
                                              pBVar8 = (this->fields)._targetCollider;
                                              if (pBVar8 != (BoxCollider *)0x0) {
                                                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_transform
                                                                    ((Component *)pBVar8,
                                                                     (MethodInfo *)0x0);
                                                if (pTVar9 != (Transform *)0x0) {
                                                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_up
                                                                      ((Vector3 *)&stack0xffffffbc,
                                                                       pTVar9,(MethodInfo *)0x0);
                                                  fVar11 = pVVar2->y;
                                                  fVar4 = pVVar2->z;
                                                  if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar23->fields).FaceNormal.x = pVVar2->x;
                                                    (pBVar23->fields).FaceNormal.y = fVar11;
                                                    (pBVar23->fields).FaceNormal.z = fVar4;
                                                    boxCenter_02.z = fStack_5;
                                                    boxCenter_02.x = (float)(undefined4)uStack_3;
                                                    boxCenter_02.y = (float)uStack_3._4_4_;
                                                    boxSize_02.z = fVar7;
                                                    boxSize_02.x = (float)(undefined4)uStack_6;
                                                    boxSize_02.y = (float)uStack_6._4_4_;
                                                    pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                                        ((Vector3 *)&stack0xffffffbc
                                                                         ,boxCenter_02,boxSize_02,
                                                                         boxRotation_02,
                                                                         BoxFace__Enum_Bottom,
                                                                         (MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._bottomTick;
                                                    fStack_19 = pVVar2->z;
                                                    fVar4 = pVVar2->x;
                                                    fVar11 = pVVar2->y;
                                                    pVVar2 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_20,pCStack_1,
                                                                         *pVVar2,(MethodInfo *)0x0)
                                                    ;
                                                    value_02.x = pVVar2->x;
                                                    value_02.y = pVVar2->y;
                                                    VStack_20.y = value_02.x;
                                                    VStack_20.z = value_02.y;
                                                    if ((pGVar16 != (GizmoCap2D *)0x0) &&
                                                       (pGVar21 = (pGVar16->fields)._transform,
                                                       pGVar21 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar21,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pBVar22 = (this->fields)._faceTicks;
                                                      if (pBVar22 !=
                                                          (BoxColliderGizmo3D_FaceTick__Array *)0x0)
                                                      {
                                                        if (pBVar22->max_length < 5)
                                                        goto code_?;
                                                        pBVar23 = pBVar22->vector[4];
                                                        if (pBVar23 !=
                                                            (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                          (pBVar23->fields).FaceCenter.x = fVar4;
                                                          (pBVar23->fields).FaceCenter.y = fVar11;
                                                          (pBVar23->fields).FaceCenter.z = fStack_19
                                                          ;
                                                          pBVar22 = (this->fields)._faceTicks;
                                                          if (pBVar22 !=
                                                              (BoxColliderGizmo3D_FaceTick__Array *)
                                                              0x0) {
                                                            if (pBVar22->max_length < 5)
                                                            goto code_?;
                                                            pBVar23 = pBVar22->vector[4];
                                                            pBVar8 = (this->fields)._targetCollider
                                                            ;
                                                            if (pBVar8 != (BoxCollider *)0x0) {
                                                              pTVar9 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pBVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar9 != (Transform *)0x0) {
                                                    pVVar2 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_up((Vector3 *)
                                                                               &stack0xffffffbc,
                                                                               pTVar9,(MethodInfo *
                                                                                       )0x0);
                                                    uVar27 = pVVar2->x;
                                                    uVar28 = pVVar2->y;
                                                    uVar26 = uVar28 ^ 
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  ;
                                                  fVar4 = (float)((uint)pVVar2->z ^
                                                                                                                                    
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar23->fields).FaceNormal.x =
                                                         (float)(uVar27 ^ 
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  (pBVar23->fields).FaceNormal.y = (float)uVar26;
                                                  (pBVar23->fields).FaceNormal.z = fVar4;
                                                  boxCenter_03.z = fStack_5;
                                                  boxCenter_03.x = (float)(undefined4)uStack_3;
                                                  boxCenter_03.y = (float)uStack_3._4_4_;
                                                  boxSize_03.z = fVar7;
                                                  boxSize_03.x = (float)(undefined4)uStack_6;
                                                  boxSize_03.y = (float)uStack_6._4_4_;
                                                  pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                                      ((Vector3 *)&stack0xffffffbc,
                                                                       boxCenter_03,boxSize_03,
                                                                       boxRotation_03,
                                                                       BoxFace__Enum_Front,
                                                                       (MethodInfo *)0x0);
                                                  pGVar16 = (this->fields)._frontTick;
                                                  fStack_19 = pVVar2->z;
                                                  fVar4 = pVVar2->x;
                                                  fVar11 = pVVar2->y;
                                                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      (&VStack_20,pCStack_1,*pVVar2
                                                                       ,(MethodInfo *)0x0);
                                                  value_03.x = pVVar2->x;
                                                  value_03.y = pVVar2->y;
                                                  VStack_20.y = value_03.x;
                                                  VStack_20.z = value_03.y;
                                                  if ((pGVar16 != (GizmoCap2D *)0x0) &&
                                                     (pGVar21 = (pGVar16->fields)._transform,
                                                     pGVar21 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar21,value_03,(MethodInfo *)0x0);
                                                    pBVar22 = (this->fields)._faceTicks;
                                                    if (pBVar22 !=
                                                        (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                                      if (pBVar22->max_length == 0)
                                                      goto code_?;
                                                      pBVar23 = pBVar22->vector[0];
                                                      if (pBVar23 !=
                                                          (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                        (pBVar23->fields).FaceCenter.x = fVar4;
                                                        (pBVar23->fields).FaceCenter.y = fVar11;
                                                        (pBVar23->fields).FaceCenter.z = fStack_19;
                                                        pBVar22 = (this->fields)._faceTicks;
                                                        if (pBVar22 !=
                                                            (BoxColliderGizmo3D_FaceTick__Array *)
                                                            0x0) {
                                                          if (pBVar22->max_length == 0)
                                                          goto code_?;
                                                          pBVar23 = pBVar22->vector[0];
                                                          pBVar8 = (this->fields)._targetCollider;
                                                          if (pBVar8 != (BoxCollider *)0x0) {
                                                            pTVar9 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)
                                                                                 pBVar8,(MethodInfo
                                                                                          *)0x0);
                                                            if (pTVar9 != (Transform *)0x0) {
                                                              pVVar2 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_get_forward
                                                                                  ((Vector3 *)
                                                                                   &stack0xffffffbc,
                                                                                   pTVar9,(
                                                  MethodInfo *)0x0);
                                                  uVar29 = pVVar2->x;
                                                  uVar30 = pVVar2->y;
                                                  uVar26 = uVar30 ^ 
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  ;
                                                  fVar4 = (float)((uint)pVVar2->z ^
                                                                                                                                    
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar23->fields).FaceNormal.x =
                                                         (float)(uVar29 ^ 
                                                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                  );
                                                  (pBVar23->fields).FaceNormal.y = (float)uVar26;
                                                  (pBVar23->fields).FaceNormal.z = fVar4;
                                                  boxCenter_04.z = fStack_5;
                                                  boxCenter_04.x = (float)(undefined4)uStack_3;
                                                  boxCenter_04.y = (float)uStack_3._4_4_;
                                                  boxSize_04.z = fVar7;
                                                  boxSize_04.x = (float)(undefined4)uStack_6;
                                                  boxSize_04.y = (float)uStack_6._4_4_;
                                                  pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                                      ((Vector3 *)&stack0xffffffbc,
                                                                       boxCenter_04,boxSize_04,
                                                                       boxRotation_04,
                                                                       BoxFace__Enum_Back,
                                                                       (MethodInfo *)0x0);
                                                  pGVar16 = (this->fields)._backTick;
                                                  fVar4 = pVVar2->z;
                                                  fVar7 = pVVar2->x;
                                                  fVar11 = pVVar2->y;
                                                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      (&VStack_20,pCStack_1,*pVVar2
                                                                       ,(MethodInfo *)0x0);
                                                  value_04.x = pVVar2->x;
                                                  value_04.y = pVVar2->y;
                                                  VStack_20.y = value_04.x;
                                                  VStack_20.z = value_04.y;
                                                  if ((pGVar16 != (GizmoCap2D *)0x0) &&
                                                     (pGVar21 = (pGVar16->fields)._transform,
                                                     pGVar21 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar21,value_04,(MethodInfo *)0x0);
                                                    pBVar22 = (this->fields)._faceTicks;
                                                    if (pBVar22 !=
                                                        (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                                      if (pBVar22->max_length < 2)
                                                      goto code_?;
                                                      pBVar23 = pBVar22->vector[1];
                                                      if (pBVar23 !=
                                                          (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                        (pBVar23->fields).FaceCenter.x = fVar7;
                                                        (pBVar23->fields).FaceCenter.y = fVar11;
                                                        (pBVar23->fields).FaceCenter.z = fVar4;
                                                        pBVar22 = (this->fields)._faceTicks;
                                                        if (pBVar22 !=
                                                            (BoxColliderGizmo3D_FaceTick__Array *)
                                                            0x0) {
                                                          if (pBVar22->max_length < 2)
                                                          goto code_?;
                                                          pBVar23 = pBVar22->vector[1];
                                                          pBVar8 = (this->fields)._targetCollider;
                                                          if (pBVar8 != (BoxCollider *)0x0) {
                                                            pTVar9 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)
                                                                                 pBVar8,(MethodInfo
                                                                                          *)0x0);
                                                            if (pTVar9 != (Transform *)0x0) {
                                                              pVVar2 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_get_forward
                                                                                  ((Vector3 *)
                                                                                   &stack0xffffffbc,
                                                                                   pTVar9,(
                                                  MethodInfo *)0x0);
                                                  fVar7 = pVVar2->y;
                                                  fVar4 = pVVar2->z;
                                                  if (pBVar23 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar23->fields).FaceNormal.x = pVVar2->x;
                                                    (pBVar23->fields).FaceNormal.y = fVar7;
                                                    (pBVar23->fields).FaceNormal.z = fVar4;
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
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* BoxColliderGizmo3D() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D__ctor
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxCollider3DSnapshot);
    func_?(&TypeInfo__RTG__BoxColliderGizmo3DHotkeys);
    func_?(&TypeInfo__RTG__BoxColliderGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__BoxColliderGizmo3DSettings);
    func_?(&TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__GizmoUniformScaleDrag3D);
    cRam_? = '\x01';
  }
  (this->fields)._isMidCapVisible = 1;
  pBVar1 = (BoxColliderGizmo3D_FaceTick__Array *)
           func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick,6);
  (this->fields)._faceTicks = pBVar1;
  func_?(&(this->fields)._faceTicks,pBVar1);
  pBVar2 = TypeInfo__RTG__BoxCollider3DSnapshot;
  pBVar3 = (BoxCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pBVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar2);
  (this->fields)._preChangeColliderSnapshot = pBVar3;
  func_?(&(this->fields)._preChangeColliderSnapshot,pBVar3);
  pBVar2 = TypeInfo__RTG__BoxCollider3DSnapshot;
  pBVar3 = (BoxCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pBVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar2);
  (this->fields)._postChangeColliderSnapshot = pBVar3;
  func_?(&(this->fields)._postChangeColliderSnapshot,pBVar3);
  this_00 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_00;
  func_?();
  (this->fields)._dragAxisIndex = -1;
  this_01 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._uniScaleDrag = this_01;
  func_?(&(this->fields)._uniScaleDrag,this_01);
  this_02 = (BoxColliderGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__BoxColliderGizmo3DLookAndFeel);
  BoxColliderGizmo3DLookAndFeel::BoxColliderGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  method_00 = TypeInfo__RTG__BoxColliderGizmo3DSettings;
  value = (BoxColliderGizmo3DSettings *)func_?();
  (value->fields)._xSizeSnapStep = 0.1;
  (value->fields)._ySizeSnapStep = 0.1;
  (value->fields)._zSizeSnapStep = 0.1;
  (value->fields)._uniformSizeSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._settings = value;
  func_?(&(this->fields)._settings,value);
  value_00 = (BoxColliderGizmo3DHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar4 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar4,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar4 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar4,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar4->fields)._lCtrl = 1;
    (value_00->fields)._enableSnapping = pHVar4;
    func_?();
    pHVar4 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar4,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar4 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar4,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar4->fields)._lShift = 1;
      (value_00->fields)._scaleFromCenter = pHVar4;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_get_IsSnapEnabled
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  if ((this->fields)._sharedHotkeys == (BoxColliderGizmo3DHotkeys *)0x0) {
    pBVar1 = (this->fields)._hotkeys;
    if (pBVar1 == (BoxColliderGizmo3DHotkeys *)0x0) goto code_?;
  }
  else {
    pBVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pBVar1->fields)._enableSnapping;
  if (this_00 != (Hotkeys *)0x0) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
code_?:
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void set_SharedHotkeys(BoxColliderGizmo3DHotkeys) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_set_SharedHotkeys
               (BoxColliderGizmo3D *this,BoxColliderGizmo3DHotkeys *value,MethodInfo *method)

{
  (this->fields)._sharedHotkeys = value;
  func_?(&(this->fields)._sharedHotkeys,value);
  return;
}


/* Void set_SharedLookAndFeel(BoxColliderGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_set_SharedLookAndFeel
               (BoxColliderGizmo3D *this,BoxColliderGizmo3DLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  BoxColliderGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings(BoxColliderGizmo3DSettings) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_set_SharedSettings
               (BoxColliderGizmo3D *this,BoxColliderGizmo3DSettings *value,MethodInfo *method)

{
  (this->fields)._sharedSettings = value;
  func_?(&(this->fields)._sharedSettings,value);
  return;
}

