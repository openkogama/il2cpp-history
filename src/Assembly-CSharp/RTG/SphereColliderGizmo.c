
/* Single CalcMaxTransformAbsScale() */

float Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_CalcMaxTransformAbsScale
                (SphereColliderGizmo *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetCollider;
  if (this_00 != (SphereCollider *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      pVVar1 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      fVar3 = pVVar1->y;
      if (fVar3 <= (float)uVar2) {
        fVar3 = (float)uVar2;
      }
      fVar4 = pVVar1->z;
      if (pVVar1->z <= fVar3) {
        fVar4 = fVar3;
      }
      return fVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_CalcScalePivot
                    (Vector3 *__return_storage_ptr__,SphereColliderGizmo *this,int32_t handleId,
                    MethodInfo *method)

{
  bVar1 = SphereColliderGizmo_OwnsHandle(this,handleId,(MethodInfo *)0x0);
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
  SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
  pSVar5 = (this->fields)._targetCollider;
  if (pSVar5 == (SphereCollider *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  fVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                     (pSVar5,(MethodInfo *)0x0);
  fVar4 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
  fVar4 = fVar4 * fVar3;
  pGVar8 = (this->fields)._leftTick;
  if ((pGVar8 == (GizmoCap2D *)0x0) ||
     (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar9->fields)._id) {
    pSVar5 = (this->fields)._targetCollider;
    if (pSVar5 == (SphereCollider *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar5,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar8 = (this->fields)._rightTick;
  if ((pGVar8 == (GizmoCap2D *)0x0) ||
     (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar9->fields)._id) {
    pSVar5 = (this->fields)._targetCollider;
    if (pSVar5 == (SphereCollider *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar5,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
  }
  else {
    pGVar8 = (this->fields)._topTick;
    if ((pGVar8 == (GizmoCap2D *)0x0) ||
       (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId != (pGVar9->fields)._id) {
      pGVar8 = (this->fields)._bottomTick;
      if ((pGVar8 == (GizmoCap2D *)0x0) ||
         (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
      if (handleId == (pGVar9->fields)._id) {
        pSVar5 = (this->fields)._targetCollider;
        if (pSVar5 == (SphereCollider *)0x0) goto code_?;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar5,(MethodInfo *)0x0);
        if (pTVar10 == (Transform *)0x0) goto code_?;
        uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
      }
      else {
        pGVar8 = (this->fields)._frontTick;
        if ((pGVar8 == (GizmoCap2D *)0x0) ||
           (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
        goto code_?;
        if (handleId != (pGVar9->fields)._id) {
          pGVar8 = (this->fields)._backTick;
          if ((pGVar8 == (GizmoCap2D *)0x0) ||
             (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0))
          goto code_?;
          if (handleId != (pGVar9->fields)._id) goto code_?;
          pSVar5 = (this->fields)._targetCollider;
          if (pSVar5 == (SphereCollider *)0x0) goto code_?;
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar5,(MethodInfo *)0x0);
          if (pTVar10 == (Transform *)0x0) goto code_?;
          uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
          goto code_?;
        }
        pSVar5 = (this->fields)._targetCollider;
        if (pSVar5 == (SphereCollider *)0x0) goto code_?;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar5,(MethodInfo *)0x0);
        if (pTVar10 == (Transform *)0x0) goto code_?;
        uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
      }
code_?:
      uVar12 = pVVar7->x;
      uVar13 = pVVar7->y;
      fVar14 = (float)uVar11 + (float)uVar12 * fVar4;
      fVar3 = (float)pTVar10 + pVVar7->z * fVar4;
      fVar4 = (float)((ulonglong)uVar11 >> 0x20) + (float)uVar13 * fVar4;
      goto code_?;
    }
    pSVar5 = (this->fields)._targetCollider;
    if (pSVar5 == (SphereCollider *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar5,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    uVar11 = CONCAT44((Vector3 *)&stack0xffffffd8,&UNK_?);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)&stack0xffffffd8,pTVar10,(MethodInfo *)0x0);
  }
code_?:
  uVar15 = pVVar7->x;
  uVar16 = pVVar7->y;
  fVar14 = (float)uVar11 - (float)uVar15 * fVar4;
  fVar3 = (float)pTVar10 - pVVar7->z * fVar4;
  fVar4 = (float)((ulonglong)uVar11 >> 0x20) - (float)uVar16 * fVar4;
code_?:
  __return_storage_ptr__->x = fVar14;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 CalcWorldCenter() */

Vector3 * Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_CalcWorldCenter
                    (Vector3 *__return_storage_ptr__,SphereColliderGizmo *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._targetCollider;
  if (pSVar1 != (SphereCollider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._targetCollider;
    if (pSVar1 != (SphereCollider *)0x0) {
      pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_center
                         ((Vector3 *)&stack0xfffffff0,pSVar1,(MethodInfo *)0x0);
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


/* Single CalcWorldRadius() */

float Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_CalcWorldRadius
                (SphereColliderGizmo *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetCollider;
  if (this_00 != (SphereCollider *)0x0) {
    fVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                      (this_00,(MethodInfo *)0x0);
    fVar2 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_IsTargetReady
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._targetCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pSVar1 = (this->fields)._targetCollider;
  if (pSVar1 != (SphereCollider *)0x0) {
    bVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_enabled
                      ((Collider *)pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pSVar1 = (this->fields)._targetCollider;
    if ((pSVar1 != (SphereCollider *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnAttached
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_QName::Datatype_QName_get_TypeCode
                    ((Datatype_QName *)0x0,unaff_EDI);
  pGVar3 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
  GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
  (this->fields)._leftTick = pGVar3;
  func_?(&(this->fields)._leftTick,pGVar3);
  pGVar4 = (GizmoCap3D *)(this->fields)._leftTick;
  if (pGVar4 == (GizmoCap3D *)0x0) {
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
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::Datatype_hexBinary_get_TypeCode
                      ((Datatype_hexBinary *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._rightTick = pGVar3;
    func_?(&(this->fields)._rightTick,pGVar3);
    pGVar4 = (GizmoCap3D *)(this->fields)._rightTick;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
            Datatype_base64Binary_get_TypeCode((Datatype_base64Binary *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._topTick = pGVar3;
    func_?(&(this->fields)._topTick,pGVar3);
    pGVar4 = (GizmoCap3D *)(this->fields)._topTick;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::Datatype_NOTATION_get_TypeCode
                      ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._bottomTick = pGVar3;
    func_?(&(this->fields)._bottomTick,pGVar3);
    pGVar4 = (GizmoCap3D *)(this->fields)._bottomTick;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_normalizedStringV1Compat::
            Datatype_normalizedStringV1Compat_get_TypeCode
                      ((Datatype_normalizedStringV1Compat *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    pMVar6 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    (this->fields)._backTick = pGVar3;
    func_?(&(this->fields)._backTick,pGVar3);
    pGVar4 = (GizmoCap3D *)(this->fields)._backTick;
    if (pGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    iVar7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    pGVar8 = TypeInfo__RTG__GizmoCap2D;
    pIVar9 = (Il2CppClass *)func_?();
    method_00 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar9,pGVar1,iVar7,(MethodInfo *)0x0);
    (pGVar8->_0).parent = pIVar9;
    func_?(&(pGVar8->_0).parent);
    pIVar9 = (pGVar8->_0).parent;
    if (pIVar9 == (Il2CppClass *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)pIVar9,(pGVar8->_1).unity_user_data,(MethodInfo *)0x0);
    pIVar10 = (pGVar8->_0).generic_class;
    pOVar11 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar11,ExceptionArgument__Enum_obj,pMVar6);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar11 != (Object *)0x0) {
      iVar12 = func_?(pOVar11);
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar10->cached_class < (Il2CppClass *)0x3) goto code_?;
    pIVar10[1].context.method_inst = (Il2CppGenericInst *)pOVar11;
    func_?(&pIVar10[1].context.method_inst);
    pIVar10 = (pGVar8->_0).generic_class;
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar10->cached_class < (Il2CppClass *)0x3) goto code_?;
    pIVar13 = pIVar10[1].context.method_inst;
    if (pIVar13 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar13[4].type_argc = (uint32_t)(pGVar8->_0).castClass;
    func_?(pIVar13 + 4);
    pIVar10 = (pGVar8->_0).generic_class;
    pIVar9 = (Il2CppClass *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar9,ExceptionArgument__Enum_obj,method_00);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9 != (Il2CppClass *)0x0) {
      iVar12 = func_?(pIVar9);
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar10->cached_class < (Il2CppClass *)0x4) goto code_?;
    pIVar10[1].cached_class = pIVar9;
    func_?(&pIVar10[1].cached_class);
    pIVar10 = (pGVar8->_0).generic_class;
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar10->cached_class < (Il2CppClass *)0x4) goto code_?;
    pIVar9 = pIVar10[1].cached_class;
    if (pIVar9 == (Il2CppClass *)0x0) goto code_?;
    pIVar9->element_class = (Il2CppClass *)(pGVar8->_0).this_arg.data;
    func_?(&pIVar9->element_class);
    pIVar10 = (pGVar8->_0).generic_class;
    pOVar11 = (Object *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar11,ExceptionArgument__Enum_obj,method_00);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar11 != (Object *)0x0) {
      iVar12 = func_?(pOVar11);
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar10->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar10[2].context.class_inst = (Il2CppGenericInst *)pOVar11;
    func_?(&pIVar10[2].context);
    pIVar10 = (pGVar8->_0).generic_class;
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar10->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar13 = pIVar10[2].context.class_inst;
    if (pIVar13 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar13[4].type_argc = *(uint32_t *)&(pGVar8->_0).this_arg.attrs;
    func_?(pIVar13 + 4);
    pIVar10 = (pGVar8->_0).generic_class;
    pIVar14 = (Il2CppType *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar14,ExceptionArgument__Enum_obj,method_00);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar14 != (Il2CppType *)0x0) {
      iVar12 = func_?(pIVar14);
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar10->cached_class < (Il2CppClass *)0x5) goto code_?;
    pIVar10[2].type = pIVar14;
    func_?(pIVar10 + 2);
    pIVar10 = (pGVar8->_0).generic_class;
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar10->cached_class < (Il2CppClass *)0x5) goto code_?;
    pIVar14 = pIVar10[2].type;
    if (pIVar14 == (Il2CppType *)0x0) goto code_?;
    pIVar14[4].data = (_union_86)(pGVar8->_0).declaringType;
    func_?(pIVar14 + 4);
    pIVar10 = (pGVar8->_0).generic_class;
    pIVar14 = (Il2CppType *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar14,ExceptionArgument__Enum_obj,method_00);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar14 != (Il2CppType *)0x0) {
      iVar12 = func_?(pIVar14);
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar10->cached_class == (Il2CppClass *)0x0) goto code_?;
    pIVar10[1].type = pIVar14;
    func_?(pIVar10 + 1);
    pIVar10 = (pGVar8->_0).generic_class;
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar10->cached_class == (Il2CppClass *)0x0) goto code_?;
    pIVar14 = pIVar10[1].type;
    if (pIVar14 == (Il2CppType *)0x0) goto code_?;
    pIVar14[4].data = (_union_86)(pGVar8->_0).parent;
    func_?(pIVar14 + 4);
    pIVar10 = (pGVar8->_0).generic_class;
    pOVar11 = (Object *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar11,ExceptionArgument__Enum_obj,method_00);
    if (pIVar10 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar11 == (Object *)0x0) {
code_?:
      if (pIVar10->cached_class < (Il2CppClass *)0x2) goto code_?;
      pIVar10[1].context.class_inst = (Il2CppGenericInst *)pOVar11;
      func_?(&pIVar10[1].context);
      pIVar10 = (pGVar8->_0).generic_class;
      if (pIVar10 != (Il2CppGenericClass *)0x0) {
        if (pIVar10->cached_class < (Il2CppClass *)0x2) goto code_?;
        pIVar13 = pIVar10[1].context.class_inst;
        if (pIVar13 != (Il2CppGenericInst *)0x0) {
          pIVar13[4].type_argc = (uint32_t)(pGVar8->_0).element_class;
          pMVar6 = (MethodInfo *)(pIVar13 + 4);
          func_?();
          pGVar1 = (Gizmo *)(pGVar8->_0).name;
          XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                            ((Datatype_Name *)0x0,pMVar6);
          pGVar15 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
          GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar15,pGVar1,XVar2,(MethodInfo *)0x0);
          (pGVar8->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pGVar15;
          func_?(&(pGVar8->_0).typeMetadataHandle,pGVar15);
          this_00 = (GizmoSlider *)(pGVar8->_0).typeMetadataHandle;
          if (this_00 != (GizmoSlider *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible(this_00,0,(MethodInfo *)0x0);
            pGVar15 = (GizmoPlaneSlider3D *)(pGVar8->_0).typeMetadataHandle;
            if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(pGVar15,0,(MethodInfo *)0x0)
              ;
              pGVar15 = (GizmoPlaneSlider3D *)(pGVar8->_0).typeMetadataHandle;
              if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                    (pGVar15,(MethodInfo *)0x0);
                if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  (pGVar16->fields)._useZoomFactor = 0;
                  pGVar15 = (GizmoPlaneSlider3D *)(pGVar8->_0).typeMetadataHandle;
                  if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        (pGVar15,(MethodInfo *)0x0);
                    if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      (pGVar16->fields)._planeType = 2;
                      pGVar1 = (Gizmo *)(pGVar8->_0).name;
                      iVar7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                               UnsafeUtility::UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
                      pGVar17 = TypeInfo__RTG__GizmoPlaneSlider3D;
                      pGVar15 = (GizmoPlaneSlider3D *)func_?();
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar15,pGVar1,iVar7,(MethodInfo *)0x0);
                      (pGVar17->_0).interopData = (Il2CppInteropData *)pGVar15;
                      func_?(&(pGVar17->_0).interopData);
                      this_01 = (pGVar17->_0).interopData;
                      if (this_01 != (Il2CppInteropData *)0x0) {
                        GizmoSlider::GizmoSlider_SetVisible
                                  ((GizmoSlider *)this_01,0,(MethodInfo *)0x0);
                        pGVar15 = (GizmoPlaneSlider3D *)(pGVar17->_0).interopData;
                        if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                    (pGVar15,0,(MethodInfo *)0x0);
                          pGVar15 = (GizmoPlaneSlider3D *)(pGVar17->_0).interopData;
                          if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                            pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                (pGVar15,(MethodInfo *)0x0);
                            if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              (pGVar16->fields)._useZoomFactor = 0;
                              pGVar15 = (GizmoPlaneSlider3D *)(pGVar17->_0).interopData;
                              if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                    (pGVar15,(MethodInfo *)0x0);
                                if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  (pGVar16->fields)._planeType = 2;
                                  pGVar1 = (Gizmo *)(pGVar17->_0).name;
                                  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_ID::
                                          Datatype_ID_get_TypeCode
                                                    ((Datatype_ID *)0x0,(MethodInfo *)pGVar17);
                                  pGVar17 = TypeInfo__RTG__GizmoPlaneSlider3D;
                                  pIVar9 = (Il2CppClass *)func_?();
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                            ((GizmoPlaneSlider3D *)pIVar9,pGVar1,XVar2,
                                             (MethodInfo *)0x0);
                                  (pGVar17->_0).klass = pIVar9;
                                  func_?(&(pGVar17->_0).klass);
                                  pIVar9 = (pGVar17->_0).klass;
                                  if (pIVar9 != (Il2CppClass *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)pIVar9,0,(MethodInfo *)0x0);
                                    pIVar9 = (pGVar17->_0).klass;
                                    if (pIVar9 != (Il2CppClass *)0x0) {
                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                                ((GizmoPlaneSlider3D *)pIVar9,0,(MethodInfo *)0x0);
                                      pIVar9 = (pGVar17->_0).klass;
                                      if (pIVar9 != (Il2CppClass *)0x0) {
                                        pGVar16 = GizmoPlaneSlider3D::
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            ((GizmoPlaneSlider3D *)pIVar9,
                                                             (MethodInfo *)0x0);
                                        if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          (pGVar16->fields)._useZoomFactor = 0;
                                          pIVar9 = (pGVar17->_0).klass;
                                          if (pIVar9 != (Il2CppClass *)0x0) {
                                            pGVar16 = GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_get_LookAndFeel
                                                                ((GizmoPlaneSlider3D *)pIVar9,
                                                                 (MethodInfo *)0x0);
                                            if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                              (pGVar16->fields)._planeType = 2;
                                              SphereColliderGizmo_SetupSharedLookAndFeel
                                                        ((SphereColliderGizmo *)pGVar17,
                                                         (MethodInfo *)0x0);
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
      goto code_?;
    }
    iVar12 = func_?(pOVar11);
    if (iVar12 != 0) goto code_?;
  }
  uVar5 = func_?();
  func_?(uVar5);
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::
     SphereColliderGizmo_OnGizmoAttemptHandleDragBegin
               (SphereColliderGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = SphereColliderGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._preChangeColliderSnapshot;
  if (this_00 == (SphereColliderSnapshot *)0x0) goto code_?;
  SphereColliderSnapshot::SphereColliderSnapshot_Snapshot
            (this_00,(this->fields)._targetCollider,(MethodInfo *)0x0);
  bVar1 = SphereColliderGizmo_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  VStack_2.z = (float)&UNK_?;
  pVVar3 = SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar3->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar4;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar5;
  if ((this->fields)._sharedSettings == (SphereColliderGizmoSettings *)0x0) {
    pSVar6 = (this->fields)._settings;
    if (pSVar6 == (SphereColliderGizmoSettings *)0x0) goto code_?;
  }
  else {
    pSVar6 = (this->fields)._sharedSettings;
  }
  (this->fields)._offsetDragWorkData.SnapStep = (pSVar6->fields)._radiusSnapStep;
  pGVar7 = (this->fields)._leftTick;
  if ((pGVar7 == (GizmoCap2D *)0x0) ||
     (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar8->fields)._id) {
    pSVar9 = (this->fields)._targetCollider;
    if ((pSVar9 == (SphereCollider *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,pTVar10,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar7 = (this->fields)._rightTick;
  if ((pGVar7 == (GizmoCap2D *)0x0) ||
     (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar8->fields)._id) {
    pSVar9 = (this->fields)._targetCollider;
    if ((pSVar9 == (SphereCollider *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,pTVar10,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
    (this->fields)._offsetDragWorkData.Axis.y = fVar4;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar5;
  }
  else {
    pGVar7 = (this->fields)._topTick;
    if ((pGVar7 == (GizmoCap2D *)0x0) ||
       (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar8->fields)._id) {
      pSVar9 = (this->fields)._targetCollider;
      if ((pSVar9 == (SphereCollider *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_2,pTVar10,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
      goto code_?;
    }
    pGVar7 = (this->fields)._bottomTick;
    if ((pGVar7 == (GizmoCap2D *)0x0) ||
       (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar8->fields)._id) {
      pSVar9 = (this->fields)._targetCollider;
      if ((pSVar9 == (SphereCollider *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_2,pTVar10,(MethodInfo *)0x0);
code_?:
      uVar11 = pVVar3->x;
      uVar12 = pVVar3->y;
      uVar13 = uVar12 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar5 = (float)((uint)pVVar3->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)(uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar13;
      goto code_?;
    }
    pGVar7 = (this->fields)._frontTick;
    if ((pGVar7 == (GizmoCap2D *)0x0) ||
       (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar8->fields)._id) {
      pSVar9 = (this->fields)._targetCollider;
      if ((pSVar9 == (SphereCollider *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_2,pTVar10,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar7 = (this->fields)._backTick;
    if ((pGVar7 == (GizmoCap2D *)0x0) ||
       (pGVar8 = (pGVar7->fields)._._handle, pGVar8 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar8->fields)._id) {
      pSVar9 = (this->fields)._targetCollider;
      if ((pSVar9 == (SphereCollider *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xfffffff0,pTVar10,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnGizmoDragEnd
               (SphereColliderGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SphereColliderChangedAction);
    cRam_? = '\x01';
  }
  bVar1 = SphereColliderGizmo_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = (this->fields)._postChangeColliderSnapshot;
  if (pSVar2 != (SphereColliderSnapshot *)0x0) {
    SphereColliderSnapshot::SphereColliderSnapshot_Snapshot
              (pSVar2,(this->fields)._targetCollider,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
    pSVar2 = (this->fields)._preChangeColliderSnapshot;
    value = (Object *)func_?(TypeInfo__RTG__SphereColliderChangedAction);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,method_00);
    this_00 = (Object__Class *)func_?();
    SphereColliderSnapshot::SphereColliderSnapshot__ctor_1
              ((SphereColliderSnapshot *)this_00,pSVar2,(MethodInfo *)0x0);
    value[1].klass = this_00;
    func_?(value + 1);
    pSVar2 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
    SphereColliderSnapshot::SphereColliderSnapshot__ctor_1
              (pSVar2,(SphereColliderSnapshot *)method_00,(MethodInfo *)0x0);
    value[1].monitor = (MonitorData *)pSVar2;
    func_?(&value[1].monitor,pSVar2);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    }
    this_01 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (this_01 != (RTUndoRedo *)0x0) {
      RTUndoRedo::RTUndoRedo_RecordAction(this_01,(IUndoRedoAction *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnGizmoDragUpdate
               (SphereColliderGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = SphereColliderGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = SphereColliderGizmo_OwnsHandle(this,handleId,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  pGVar2 = (this->fields)._offsetDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    if ((this->fields)._sharedHotkeys == (SphereColliderGizmoHotkeys *)0x0) {
      pSVar3 = (this->fields)._hotkeys;
      if (pSVar3 == (SphereColliderGizmoHotkeys *)0x0) goto code_?;
    }
    else {
      pSVar3 = (this->fields)._sharedHotkeys;
    }
    pHVar4 = (pSVar3->fields)._enableSnapping;
    if (pHVar4 == (Hotkeys *)0x0) goto code_?;
    bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    pSVar5 = (this->fields)._targetCollider;
    if (pSVar5 != (SphereCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                (pSVar5,(MethodInfo *)0x0);
      SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
      pGVar6 = (this->fields)._._gizmo;
      if (pGVar6 != (Gizmo *)0x0) {
        stack0xffffffec = (float)&puStack_7;
        Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&puStack_7,pGVar6,(MethodInfo *)0x0);
        fVar8 = 0.0;
        stack0xffffffec = (float)&UNK_?;
        fVar9 = (float10)func_?();
        pGVar6 = (this->fields)._._gizmo;
        if (pGVar6 != (Gizmo *)0x0) {
          pVVar10 = Gizmo::Gizmo_get_RelativeDragOffset
                             ((Vector3 *)&puStack_7,pGVar6,(MethodInfo *)0x0);
          uVar11._0_4_ = pVVar10->x;
          uVar11._4_4_ = pVVar10->y;
          fVar12 = pVVar10->z;
          pGVar2 = (this->fields)._offsetDrag;
          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
            pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                               ((Vector3 *)&stack0xffffffd0,pGVar2,(MethodInfo *)0x0);
            puStack_7 = (undefined *)pVVar10->x;
            unique0x0000a404 = pVVar10->y;
            fVar13 = _UNK_?;
            if (0.0 <= unique0x0000a404 * (float)((ulonglong)uVar11 >> 0x20) +
                       (float)puStack_7 * (float)uVar11 + pVVar10->z * fVar12) {
              fVar13 = _UNK_?;
            }
            fVar8 = fVar13 * (float)fVar9 + fVar8;
            fVar12 = 0.0;
            if (0.0 <= fVar8) {
              fVar12 = fVar8;
            }
            pVVar10 = SphereColliderGizmo_CalcScalePivot
                               ((Vector3 *)&stack0xffffffd0,this,handleId,(MethodInfo *)0x0);
            puStack_7 = (undefined *)pVVar10->x;
            unique0x0000a404 = pVVar10->y;
            fVar8 = pVVar10->z;
            pGVar2 = (this->fields)._offsetDrag;
            if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              pVVar10 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                 ((Vector3 *)&stack0xffffffd0,pGVar2,(MethodInfo *)0x0);
              uVar14 = pVVar10->x;
              uVar15 = pVVar10->y;
              fVar8 = fVar8 + pVVar10->z * fVar12;
              uVar11 = CONCAT44(stack0xffffffec + (float)uVar15 * fVar12,
                                (float)puStack_7 + (float)uVar14 * fVar12);
              if ((this->fields)._sharedHotkeys == (SphereColliderGizmoHotkeys *)0x0) {
                pSVar3 = (this->fields)._hotkeys;
                if (pSVar3 == (SphereColliderGizmoHotkeys *)0x0) goto code_?;
              }
              else {
                pSVar3 = (this->fields)._sharedHotkeys;
              }
              pHVar4 = (pSVar3->fields)._scaleFromCenter;
              if (pHVar4 != (Hotkeys *)0x0) {
                bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                  pSVar5 = (this->fields)._targetCollider;
                  if ((pSVar5 == (SphereCollider *)0x0) ||
                     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0),
                     this_00 == (Transform *)0x0)) goto code_?;
                  position.z = fVar8;
                  position.x = (float)(int)uVar11;
                  position.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_InverseTransformPoint
                                     ((Vector3 *)&stack0xffffffd0,this_00,position,(MethodInfo *)0x0
                                     );
                  UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                  SphereCollider_set_center(pSVar5,*pVVar10,(MethodInfo *)0x0);
                }
                pSVar5 = (this->fields)._targetCollider;
                fVar8 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
                if (pSVar5 != (SphereCollider *)0x0) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                  SphereCollider_set_radius(pSVar5,fVar12 / fVar8,(MethodInfo *)0x0);
                  SphereColliderGizmo_UpdateHandles(this,(MethodInfo *)0x0);
                  return;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnGizmoRender
               (SphereColliderGizmo *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = SphereColliderGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  this_01 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_01 != (RTGizmosEngine *)0x0) {
    iVar2 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_01,(MethodInfo *)0x0);
    if (1 < iVar2) {
      SphereColliderGizmo_UpdateHandles(this,(MethodInfo *)0x0);
    }
    SphereColliderGizmo_UpdateTickColors(this,camera,(MethodInfo *)0x0);
    pVVar3 = SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0)
    ;
    uVar4._0_4_ = pVVar3->x;
    uStack_5 = pVVar3->y;
    fVar6 = pVVar3->z;
    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_02 = (GizmoLineMaterial *)func_?();
    if (this_02 != (GizmoLineMaterial *)0x0) {
      GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_02,(MethodInfo *)0x0);
      if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
        pSVar7 = (this->fields)._lookAndFeel;
        if (pSVar7 == (SphereColliderGizmoLookAndFeel *)0x0) goto code_?;
      }
      else {
        pSVar7 = (this->fields)._sharedLookAndFeel;
      }
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_02,(pSVar7->fields)._sphereBorderColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_02,0,(MethodInfo *)0x0);
      this_00 = (this->fields)._targetCollider;
      pPVar8 = (this->fields)._sphereBorderPoly;
      if (this_00 != (SphereCollider *)0x0) {
        fVar9 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                 SphereCollider_get_radius(this_00,(MethodInfo *)0x0);
        fVar10 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
        if (pPVar8 != (PolygonShape2D *)0x0) {
          sphereCenter.z = fVar6;
          uStack_5 = (undefined4)((ulonglong)uVar4 >> 0x20);
          sphereCenter.x = (float)(undefined4)uVar4;
          sphereCenter.y = (float)uStack_5;
          PolygonShape2D::PolygonShape2D_MakeSphereBorder
                    (pPVar8,sphereCenter,fVar10 * fVar9,100,camera,(MethodInfo *)0x0);
          pPVar8 = (this->fields)._sphereBorderPoly;
          if (pPVar8 != (PolygonShape2D *)0x0) {
            (*(code *)(pPVar8->klass->vtable).RenderBorder.method)
                      (pPVar8,camera,(pPVar8->klass->vtable).ContainsPoint.methodPtr);
            pGVar11 = (this->fields)._axialCircleXY;
            if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
              (*(code *)(pGVar11->klass->vtable).Render_1.method)
                        (pGVar11,camera,(pGVar11->klass->vtable).OnVisibilityStateChanged.methodPtr);
              pGVar11 = (this->fields)._axialCircleYZ;
              if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                (*(code *)(pGVar11->klass->vtable).Render_1.method)
                          (pGVar11,camera,(pGVar11->klass->vtable).OnVisibilityStateChanged.methodPtr)
                ;
                pGVar11 = (this->fields)._axialCircleZX;
                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                  (*(code *)(pGVar11->klass->vtable).Render_1.method)
                            (pGVar11,camera,
                             (pGVar11->klass->vtable).OnVisibilityStateChanged.methodPtr);
                  pGVar12 = (this->fields)._leftTick;
                  if (pGVar12 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar12->klass->vtable).Render_1.method)
                              (pGVar12,camera,
                               (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr);
                    pGVar12 = (this->fields)._rightTick;
                    if (pGVar12 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                (pGVar12,camera,
                                 (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr);
                      pGVar12 = (this->fields)._topTick;
                      if (pGVar12 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                  (pGVar12,camera,
                                   (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr);
                        pGVar12 = (this->fields)._bottomTick;
                        if (pGVar12 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                    (pGVar12,camera,
                                     (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr);
                          pGVar12 = (this->fields)._frontTick;
                          if (pGVar12 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                      (pGVar12,camera,
                                       (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr);
                            pGVar12 = (this->fields)._backTick;
                            if (pGVar12 != (GizmoCap2D *)0x0) {
                              (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                        (pGVar12,camera,
                                         (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr)
                              ;
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnGizmoUpdateBegin
               (SphereColliderGizmo *this,MethodInfo *method)

{
  bVar1 = SphereColliderGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    pVVar3 = SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0)
    ;
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      SphereColliderGizmo_UpdateHandles(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        SphereColliderGizmo_UpdateHoverPriorities(this,camera,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OwnsHandle
               (SphereColliderGizmo *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._leftTick;
  if ((pGVar1 != (GizmoCap2D *)0x0) &&
     (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
    if (handleId == (pGVar2->fields)._id) {
      return 1;
    }
    pGVar1 = (this->fields)._rightTick;
    if ((pGVar1 != (GizmoCap2D *)0x0) &&
       (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
      if (handleId == (pGVar2->fields)._id) {
        return 1;
      }
      pGVar1 = (this->fields)._topTick;
      if ((pGVar1 != (GizmoCap2D *)0x0) &&
         (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
        if (handleId == (pGVar2->fields)._id) {
          return 1;
        }
        pGVar1 = (this->fields)._bottomTick;
        if ((pGVar1 != (GizmoCap2D *)0x0) &&
           (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
          if (handleId == (pGVar2->fields)._id) {
            return 1;
          }
          pGVar1 = (this->fields)._frontTick;
          if ((pGVar1 != (GizmoCap2D *)0x0) &&
             (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
            if (handleId == (pGVar2->fields)._id) {
              return 1;
            }
            pGVar1 = (this->fields)._backTick;
            if ((pGVar1 != (GizmoCap2D *)0x0) &&
               (pGVar2 = (pGVar1->fields)._._handle, pGVar2 != (GizmoHandle *)0x0)) {
              if (handleId == (pGVar2->fields)._id) {
                return 1;
              }
              pGVar3 = (this->fields)._axialCircleXY;
              if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                        Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                  ((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,
                                   (MethodInfo *)0x0);
                if (handleId == iVar4) {
                  return 1;
                }
                pGVar3 = (this->fields)._axialCircleYZ;
                if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                  iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::
                          Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                    ((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,
                                     (MethodInfo *)0x0);
                  if (handleId == iVar4) {
                    return 1;
                  }
                  pGVar3 = (this->fields)._axialCircleZX;
                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                    iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System
                            ::Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length
                                      ((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,
                                       (MethodInfo *)0x0);
                    return handleId == iVar4;
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
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_SetupSharedLookAndFeel
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
    pSVar1 = (this->fields)._lookAndFeel;
    if (pSVar1 == (SphereColliderGizmoLookAndFeel *)0x0) goto code_?;
  }
  else {
    pSVar1 = (this->fields)._sharedLookAndFeel;
  }
  pGVar2 = (pSVar1->fields)._tickLookAndFeel;
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_UpdateHandles
               (SphereColliderGizmo *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    pCVar1 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pVVar2 = SphereColliderGizmo_CalcWorldCenter
                        ((Vector3 *)&stack0xffffff90,this,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    value.x = pVVar2->z;
    pSVar5 = (this->fields)._targetCollider;
    if (pSVar5 != (SphereCollider *)0x0) {
      value.y = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                SphereCollider_get_radius(pSVar5,(MethodInfo *)0x0);
      fVar6 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
      fVar6 = fVar6 * value.y;
      pSVar5 = (this->fields)._targetCollider;
      if ((pSVar5 != (SphereCollider *)0x0) &&
         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar5,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)
         ) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffff90,pTVar7,(MethodInfo *)0x0);
        uVar8 = pVVar2->x;
        uVar9 = pVVar2->y;
        pGVar10 = (this->fields)._leftTick;
        if (pCVar1 != (Camera *)0x0) {
          position_03.y = (float)uVar4 - (float)uVar9 * fVar6;
          position_03.x = (float)uVar3 - (float)uVar8 * fVar6;
          position_03.z = value.x - pVVar2->z * fVar6;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&stack0xffffffd0,pCVar1,position_03,(MethodInfo *)0x0);
          value.x = pVVar2->x;
          value.y = pVVar2->y;
          if (pGVar10 != (GizmoCap2D *)0x0) {
            fVar11 = 0.0;
            GizmoCap2D::GizmoCap2D_set_Position(pGVar10,value,(MethodInfo *)0x0);
            pSVar12 = (this->fields)._extentTicks;
            if (pSVar12 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
              if (2 < pSVar12->max_length) {
                pSVar13 = pSVar12->vector[2];
                if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
                (pSVar13->fields).Position.x = value.x;
                (pSVar13->fields).Position.y = value.y;
                (pSVar13->fields).Position.z = fVar11;
                pSVar12 = (this->fields)._extentTicks;
                if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0) goto code_?;
                if (2 < pSVar12->max_length) {
                  pSVar13 = pSVar12->vector[2];
                  pSVar5 = (this->fields)._targetCollider;
                  if (pSVar5 == (SphereCollider *)0x0) goto code_?;
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0);
                  if (pTVar7 == (Transform *)0x0) goto code_?;
                  uVar14._4_4_ = (float)&stack0xffffff90;
                  uVar14._0_4_ = (float)&UNK_?;
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                      ((Vector3 *)&stack0xffffff90,pTVar7,(MethodInfo *)0x0);
                  uVar15 = pVVar2->x;
                  uVar16 = pVVar2->y;
                  value.y = (float)(uVar16 ^ 
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   );
                  value.x = (float)((uint)pVVar2->z ^
                                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                   );
                  if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
                  (pSVar13->fields).Normal.x =
                       (float)(uVar15 ^ 
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              );
                  (pSVar13->fields).Normal.y = value.y;
                  (pSVar13->fields).Normal.z = value.x;
                  pSVar5 = (this->fields)._targetCollider;
                  if ((pSVar5 == (SphereCollider *)0x0) ||
                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0),
                     pTVar7 == (Transform *)0x0)) goto code_?;
                  this_01 = (Camera *)0x0;
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                      ((Vector3 *)&stack0xffffff90,pTVar7,(MethodInfo *)0x0);
                  uVar17 = pVVar2->x;
                  uVar18 = pVVar2->y;
                  pCVar19 = (Camera *)((float)uVar17 * fVar6 + 0.0);
                  value.y = (float)uVar18 * fVar6 + (float)uVar4;
                  fVar6 = pVVar2->z * fVar6 + 4.1728805e-29;
                  pGVar10 = (this->fields)._rightTick;
                  pVVar2 = (Vector3 *)&stack0xffffffd0;
                  position_04.y = value.y;
                  position_04.x = (float)pCVar19;
                  position_04.z = fVar6;
                  pCVar1 = pCVar19;
                  value.x = value.y;
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_WorldToScreenPoint_1
                                      (pVVar2,this_01,position_04,(MethodInfo *)0x0);
                  value_00.x = pVVar20->x;
                  value_00.y = pVVar20->y;
                  if (pGVar10 == (GizmoCap2D *)0x0) goto code_?;
                  GizmoCap2D::GizmoCap2D_set_Position(pGVar10,value_00,(MethodInfo *)0x0);
                  pSVar12 = (this->fields)._extentTicks;
                  if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                  goto code_?;
                  if (3 < pSVar12->max_length) {
                    pSVar13 = pSVar12->vector[3];
                    if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
                    (pSVar13->fields).Position.x = (float)pCVar19;
                    (pSVar13->fields).Position.y = value.y;
                    (pSVar13->fields).Position.z = fVar6;
                    pSVar12 = (this->fields)._extentTicks;
                    if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                    goto code_?;
                    if (3 < pSVar12->max_length) {
                      pSVar13 = pSVar12->vector[3];
                      pSVar5 = (this->fields)._targetCollider;
                      if ((pSVar5 == (SphereCollider *)0x0) ||
                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0),
                         pTVar7 == (Transform *)0x0)) goto code_?;
                      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)&stack0xffffff90,pTVar7,
                                                    (MethodInfo *)0x0);
                      value.y = pVVar20->y;
                      fVar6 = pVVar20->z;
                      if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
                      (pSVar13->fields).Normal.x = pVVar20->x;
                      (pSVar13->fields).Normal.y = value.y;
                      (pSVar13->fields).Normal.z = fVar6;
                      pSVar5 = (this->fields)._targetCollider;
                      if ((pSVar5 == (SphereCollider *)0x0) ||
                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0),
                         pTVar7 == (Transform *)0x0)) goto code_?;
                      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                          ((Vector3 *)&stack0xffffff90,pTVar7,(MethodInfo *)0x0);
                      uVar21 = pVVar20->x;
                      uVar22 = pVVar20->y;
                      fVar11 = (float)uVar21 * value.x + 0.0;
                      value.y = (float)uVar22 * value.x + (float)uVar4;
                      fVar6 = pVVar20->z * value.x + 4.1728805e-29;
                      pGVar10 = (this->fields)._topTick;
                      position.y = value.y;
                      position.x = fVar11;
                      position.z = fVar6;
                      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffd0,pCVar1,position,
                                           (MethodInfo *)0x0);
                      value_01.x = pVVar20->x;
                      value_01.y = pVVar20->y;
                      if (pGVar10 == (GizmoCap2D *)0x0) goto code_?;
                      GizmoCap2D::GizmoCap2D_set_Position(pGVar10,value_01,(MethodInfo *)0x0);
                      pSVar12 = (this->fields)._extentTicks;
                      if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                      goto code_?;
                      if (5 < pSVar12->max_length) {
                        pSVar13 = pSVar12->vector[5];
                        if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
                        (pSVar13->fields).Position.x = fVar11;
                        (pSVar13->fields).Position.y = value.y;
                        (pSVar13->fields).Position.z = fVar6;
                        pSVar12 = (this->fields)._extentTicks;
                        if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                        goto code_?;
                        if (5 < pSVar12->max_length) {
                          pSVar13 = pSVar12->vector[5];
                          pSVar5 = (this->fields)._targetCollider;
                          if ((pSVar5 == (SphereCollider *)0x0) ||
                             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pSVar5,(MethodInfo *)0x0),
                             pTVar7 == (Transform *)0x0)) goto code_?;
                          pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_up((Vector3 *)&stack0xffffff90,pTVar7,
                                                     (MethodInfo *)0x0);
                          value.y = pVVar20->y;
                          fVar6 = pVVar20->z;
                          if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                          goto code_?;
                          (pSVar13->fields).Normal.x = pVVar20->x;
                          (pSVar13->fields).Normal.y = value.y;
                          (pSVar13->fields).Normal.z = fVar6;
                          pSVar5 = (this->fields)._targetCollider;
                          if ((pSVar5 == (SphereCollider *)0x0) ||
                             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pSVar5,(MethodInfo *)0x0),
                             pTVar7 == (Transform *)0x0)) goto code_?;
                          pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_up((Vector3 *)&stack0xffffff90,pTVar7,
                                                     (MethodInfo *)0x0);
                          uVar23 = pVVar20->x;
                          uVar24 = pVVar20->y;
                          fVar11 = 0.0 - (float)uVar23 * value.x;
                          value.y = (float)uVar4 - (float)uVar24 * value.x;
                          fVar6 = 4.1728805e-29 - pVVar20->z * value.x;
                          pGVar10 = (this->fields)._bottomTick;
                          position_00.y = value.y;
                          position_00.x = fVar11;
                          position_00.z = fVar6;
                          pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_WorldToScreenPoint_1
                                              ((Vector3 *)&stack0xffffffd0,pCVar1,position_00,
                                               (MethodInfo *)0x0);
                          value_02.x = pVVar20->x;
                          value_02.y = pVVar20->y;
                          if (pGVar10 == (GizmoCap2D *)0x0) goto code_?;
                          GizmoCap2D::GizmoCap2D_set_Position(pGVar10,value_02,(MethodInfo *)0x0);
                          pSVar12 = (this->fields)._extentTicks;
                          if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                          goto code_?;
                          if (4 < pSVar12->max_length) {
                            pSVar13 = pSVar12->vector[4];
                            if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                            goto code_?;
                            (pSVar13->fields).Position.x = fVar11;
                            (pSVar13->fields).Position.y = value.y;
                            (pSVar13->fields).Position.z = fVar6;
                            pSVar12 = (this->fields)._extentTicks;
                            if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                            goto code_?;
                            if (4 < pSVar12->max_length) {
                              pSVar13 = pSVar12->vector[4];
                              pSVar5 = (this->fields)._targetCollider;
                              if ((pSVar5 == (SphereCollider *)0x0) ||
                                 (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pSVar5,(MethodInfo *)0x0),
                                 pTVar7 == (Transform *)0x0)) goto code_?;
                              pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_up((Vector3 *)&stack0xffffff90,pTVar7,
                                                         (MethodInfo *)0x0);
                              uVar25 = pVVar20->x;
                              uVar26 = pVVar20->y;
                              value.y = (float)(uVar26 ^ 
                                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                               );
                              fVar6 = (float)((uint)pVVar20->z ^
                                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                              );
                              if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                              goto code_?;
                              (pSVar13->fields).Normal.x =
                                   (float)(uVar25 ^ 
                                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                          );
                              (pSVar13->fields).Normal.y = value.y;
                              (pSVar13->fields).Normal.z = fVar6;
                              pSVar5 = (this->fields)._targetCollider;
                              if ((pSVar5 == (SphereCollider *)0x0) ||
                                 (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pSVar5,(MethodInfo *)0x0),
                                 pTVar7 == (Transform *)0x0)) goto code_?;
                              pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_forward
                                                  ((Vector3 *)&stack0xffffff90,pTVar7,
                                                   (MethodInfo *)0x0);
                              uVar27 = pVVar20->x;
                              uVar28 = pVVar20->y;
                              fVar11 = 0.0 - (float)uVar27 * value.x;
                              value.y = (float)uVar4 - (float)uVar28 * value.x;
                              fVar6 = 4.1728805e-29 - pVVar20->z * value.x;
                              pGVar10 = (this->fields)._frontTick;
                              position_01.y = value.y;
                              position_01.x = fVar11;
                              position_01.z = fVar6;
                              pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  ((Vector3 *)&stack0xffffffd0,pCVar1,position_01,
                                                   (MethodInfo *)0x0);
                              value_03.x = pVVar20->x;
                              value_03.y = pVVar20->y;
                              if (pGVar10 == (GizmoCap2D *)0x0) goto code_?;
                              GizmoCap2D::GizmoCap2D_set_Position
                                        (pGVar10,value_03,(MethodInfo *)0x0);
                              pSVar12 = (this->fields)._extentTicks;
                              if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                              goto code_?;
                              if (pSVar12->max_length != 0) {
                                pSVar13 = pSVar12->vector[0];
                                if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                                goto code_?;
                                (pSVar13->fields).Position.x = fVar11;
                                (pSVar13->fields).Position.y = value.y;
                                (pSVar13->fields).Position.z = fVar6;
                                pSVar12 = (this->fields)._extentTicks;
                                if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                                goto code_?;
                                if (pSVar12->max_length != 0) {
                                  pSVar13 = pSVar12->vector[0];
                                  pSVar5 = (this->fields)._targetCollider;
                                  if ((pSVar5 == (SphereCollider *)0x0) ||
                                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)pSVar5,(MethodInfo *)0x0),
                                     pTVar7 == (Transform *)0x0)) goto code_?;
                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_forward
                                                      ((Vector3 *)&stack0xffffff90,pTVar7,
                                                       (MethodInfo *)0x0);
                                  uVar29 = pVVar20->x;
                                  uVar30 = pVVar20->y;
                                  value.y = (float)(uVar30 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                  fVar6 = (float)((uint)pVVar20->z ^
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                  if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                                  goto code_?;
                                  (pSVar13->fields).Normal.x =
                                       (float)(uVar29 ^ 
                                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                              );
                                  (pSVar13->fields).Normal.y = value.y;
                                  (pSVar13->fields).Normal.z = fVar6;
                                  pSVar5 = (this->fields)._targetCollider;
                                  if ((pSVar5 == (SphereCollider *)0x0) ||
                                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)pSVar5,(MethodInfo *)0x0),
                                     pTVar7 == (Transform *)0x0)) goto code_?;
                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_forward
                                                      ((Vector3 *)&stack0xffffff90,pTVar7,
                                                       (MethodInfo *)0x0);
                                  uVar31 = pVVar20->x;
                                  uVar32 = pVVar20->y;
                                  fVar11 = (float)uVar31 * value.x + 0.0;
                                  value.y = (float)uVar32 * value.x + (float)uVar4;
                                  fVar6 = pVVar20->z * value.x + 4.1728805e-29;
                                  pGVar10 = (this->fields)._backTick;
                                  position_02.y = value.y;
                                  position_02.x = fVar11;
                                  position_02.z = fVar6;
                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                            Camera_WorldToScreenPoint_1
                                                      ((Vector3 *)&stack0xffffffa0,pCVar1,
                                                       position_02,(MethodInfo *)0x0);
                                  value_04.x = pVVar20->x;
                                  value_04.y = pVVar20->y;
                                  if (pGVar10 == (GizmoCap2D *)0x0) goto code_?;
                                  GizmoCap2D::GizmoCap2D_set_Position
                                            (pGVar10,value_04,(MethodInfo *)0x0);
                                  pSVar12 = (this->fields)._extentTicks;
                                  if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                                  goto code_?;
                                  if (1 < pSVar12->max_length) {
                                    pSVar13 = pSVar12->vector[1];
                                    if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0)
                                    goto code_?;
                                    (pSVar13->fields).Position.x = fVar11;
                                    (pSVar13->fields).Position.y = value.y;
                                    (pSVar13->fields).Position.z = fVar6;
                                    pSVar12 = (this->fields)._extentTicks;
                                    if (pSVar12 == (SphereColliderGizmo_ExtentTick__Array *)0x0)
                                    goto code_?;
                                    if (1 < pSVar12->max_length) {
                                      pSVar13 = pSVar12->vector[1];
                                      pSVar5 = (this->fields)._targetCollider;
                                      if ((pSVar5 != (SphereCollider *)0x0) &&
                                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_transform
                                                              ((Component *)pSVar5,
                                                               (MethodInfo *)0x0),
                                         pTVar7 != (Transform *)0x0)) {
                                        pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_forward
                                                            ((Vector3 *)&stack0xffffff90,pTVar7,
                                                             (MethodInfo *)0x0);
                                        value.y = pVVar20->y;
                                        fVar6 = pVVar20->z;
                                        if (pSVar13 != (SphereColliderGizmo_ExtentTick *)0x0) {
                                          (pSVar13->fields).Normal.x = pVVar20->x;
                                          (pSVar13->fields).Normal.y = value.y;
                                          (pSVar13->fields).Normal.z = fVar6;
                                          pGVar33 = (this->fields)._axialCircleXY;
                                          if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                            value_05.z = (float)pVVar2;
                                            value_05.x = (float)uVar14;
                                            value_05.y = SUB84(uVar14,4);
                                            GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                      (pGVar33,value_05,(MethodInfo *)0x0);
                                            pGVar33 = (this->fields)._axialCircleYZ;
                                            if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                              value_06.z = (float)pVVar2;
                                              value_06.x = (float)uVar14;
                                              value_06.y = SUB84(uVar14,4);
                                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                        (pGVar33,value_06,(MethodInfo *)0x0);
                                              pGVar33 = (this->fields)._axialCircleZX;
                                              if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                value_07.z = (float)pVVar2;
                                                value_07.x = (float)uVar14;
                                                value_07.y = SUB84(uVar14,4);
                                                GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                          (pGVar33,value_07,(MethodInfo *)0x0);
                                                pSVar5 = (this->fields)._targetCollider;
                                                pGVar33 = (this->fields)._axialCircleXY;
                                                if (((pSVar5 != (SphereCollider *)0x0) &&
                                                    (pTVar7 = UnityEngine.CoreModule.dll::
                                                               UnityEngine::Component::
                                                               Component_get_transform
                                                                         ((Component *)pSVar5,
                                                                          (MethodInfo *)0x0),
                                                    pTVar7 != (Transform *)0x0)) &&
                                                   (pQVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_rotation
                                                                        ((Quaternion *)
                                                                         &stack0xffffff80,pTVar7,
                                                                         (MethodInfo *)0x0),
                                                   pGVar33 != (GizmoPlaneSlider3D *)0x0)) {
                                                  GizmoPlaneSlider3D::
                                                  GizmoPlaneSlider3D_set_Rotation
                                                            (pGVar33,*pQVar34,(MethodInfo *)0x0);
                                                  pSVar5 = (this->fields)._targetCollider;
                                                  pGVar33 = (this->fields)._axialCircleYZ;
                                                  if ((pSVar5 != (SphereCollider *)0x0) &&
                                                     (pTVar7 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar5,
                                                                           (MethodInfo *)0x0),
                                                     pTVar7 != (Transform *)0x0)) {
                                                    pQVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_rotation
                                                                        ((Quaternion *)
                                                                         &stack0xffffff80,pTVar7,
                                                                         (MethodInfo *)0x0);
                                                    fVar35 = pQVar34->x;
                                                    fVar36 = pQVar34->y;
                                                    fVar37 = pQVar34->z;
                                                    fVar38 = pQVar34->w;
                                                    auVar39._4_8_ = 0;
                                                    auVar39._0_4_ = _UNK_?;
                                                    fVar40 = _UNK_?;
                                                    pQVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Quaternion::
                                                              Quaternion_Internal_FromEulerRad
                                                                        ((Quaternion *)
                                                                         &stack0xffffffc0,
                                                                         (Vector3)(auVar39 << 0x20),
                                                                         (MethodInfo *)0x0);
                                                    fVar6 = pQVar34->y;
                                                    value.y = pQVar34->z;
                                                    fVar11 = pQVar34->w;
                                                    if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                      value_08.y = (fVar36 * fVar11 +
                                                                    fVar6 * fVar38 +
                                                                   fVar37 * pQVar34->x) -
                                                                   value.y * fVar35;
                                                      value_08.x = (fVar11 * fVar35 +
                                                                    pQVar34->x * fVar38 +
                                                                   value.y * fVar36) -
                                                                   fVar6 * fVar37;
                                                      value_08.z = (fVar37 * fVar11 +
                                                                    value.y * fVar38 +
                                                                   fVar6 * fVar35) -
                                                                   fVar36 * pQVar34->x;
                                                      value_08.w = ((fVar11 * fVar38 -
                                                                    fVar35 * pQVar34->x) -
                                                                   fVar6 * fVar36) -
                                                                   fVar37 * value.y;
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_Rotation
                                                                (pGVar33,value_08,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar5 = (this->fields)._targetCollider;
                                                      pGVar33 = (this->fields)._axialCircleZX;
                                                      if ((pSVar5 != (SphereCollider *)0x0) &&
                                                         (pTVar7 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              ((Component *)pSVar5,
                                                                               (MethodInfo *)0x0),
                                                         pTVar7 != (Transform *)0x0)) {
                                                        pQVar34 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_rotation
                                                                            ((Quaternion *)
                                                                             &stack0xffffff80,
                                                                             pTVar7,(MethodInfo *)
                                                                                     0x0);
                                                        fVar35 = pQVar34->x;
                                                        fVar36 = pQVar34->y;
                                                        fVar37 = pQVar34->z;
                                                        fVar38 = pQVar34->w;
                                                        euler.y = 0.0;
                                                        euler.z = 0.0;
                                                        euler.x = fVar40;
                                                        pQVar34 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Quaternion::
                                                                  Quaternion_Internal_FromEulerRad
                                                                            ((Quaternion *)
                                                                             &stack0xffffffb0,euler,
                                                                             (MethodInfo *)0x0);
                                                        fVar6 = pQVar34->y;
                                                        value.y = pQVar34->z;
                                                        fVar11 = pQVar34->w;
                                                        if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                          value_09.y = (fVar36 * fVar11 +
                                                                        fVar6 * fVar38 +
                                                                       fVar37 * pQVar34->x) -
                                                                       value.y * fVar35;
                                                          value_09.x = (fVar11 * fVar35 +
                                                                        pQVar34->x * fVar38 +
                                                                       value.y * fVar36) -
                                                                       fVar6 * fVar37;
                                                          value_09.z = (fVar37 * fVar11 +
                                                                        value.y * fVar38 +
                                                                       fVar6 * fVar35) -
                                                                       fVar36 * pQVar34->x;
                                                          value_09.w = ((fVar11 * fVar38 -
                                                                        fVar35 * pQVar34->x) -
                                                                       fVar6 * fVar36) -
                                                                       fVar37 * value.y;
                                                          GizmoPlaneSlider3D::
                                                          GizmoPlaneSlider3D_set_Rotation
                                                                    (pGVar33,value_09,
                                                                     (MethodInfo *)0x0);
                                                          pGVar33 = (this->fields)._axialCircleXY;
                                                          if (pGVar33 != (GizmoPlaneSlider3D *)0x0)
                                                          {
                                                            pGVar41 = GizmoPlaneSlider3D::
                                                                                                                                            
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar33,(MethodInfo *)0x0);
                                                  if ((this->fields)._sharedLookAndFeel ==
                                                      (SphereColliderGizmoLookAndFeel *)0x0) {
                                                    pSVar42 = (this->fields)._lookAndFeel;
                                                    if (pSVar42 ==
                                                        (SphereColliderGizmoLookAndFeel *)0x0)
                                                    goto code_?;
                                                  }
                                                  else {
                                                    pSVar42 = (this->fields)._sharedLookAndFeel;
                                                  }
                                                  fVar6 = (pSVar42->fields)._wireColor.g;
                                                  value.y = (pSVar42->fields)._wireColor.b;
                                                  fVar11 = (pSVar42->fields)._wireColor.a;
                                                  if (pGVar41 !=
                                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                    (pGVar41->fields)._borderColor.r =
                                                         (pSVar42->fields)._wireColor.r;
                                                    (pGVar41->fields)._borderColor.g = fVar6;
                                                    (pGVar41->fields)._borderColor.b = value.y;
                                                    (pGVar41->fields)._borderColor.a = fVar11;
                                                    pGVar33 = (this->fields)._axialCircleYZ;
                                                    if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar41 = GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_get_LookAndFeel
                                                                          (pGVar33,(MethodInfo *)0x0
                                                                          );
                                                      if ((this->fields)._sharedLookAndFeel ==
                                                          (SphereColliderGizmoLookAndFeel *)0x0) {
                                                        pSVar42 = (this->fields)._lookAndFeel;
                                                        if (pSVar42 ==
                                                            (SphereColliderGizmoLookAndFeel *)0x0)
                                                        goto code_?;
                                                      }
                                                      else {
                                                        pSVar42 = (this->fields)._sharedLookAndFeel;
                                                      }
                                                      fVar6 = (pSVar42->fields)._wireColor.g;
                                                      value.y = (pSVar42->fields)._wireColor.b;
                                                      fVar11 = (pSVar42->fields)._wireColor.a;
                                                      if (pGVar41 !=
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                        (pGVar41->fields)._borderColor.r =
                                                             (pSVar42->fields)._wireColor.r;
                                                        (pGVar41->fields)._borderColor.g = fVar6;
                                                        (pGVar41->fields)._borderColor.b = value.y;
                                                        (pGVar41->fields)._borderColor.a = fVar11;
                                                        pGVar33 = (this->fields)._axialCircleZX;
                                                        if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                          pGVar41 = GizmoPlaneSlider3D::
                                                                                                                                        
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar33,(MethodInfo *)0x0);
                                                  if ((this->fields)._sharedLookAndFeel ==
                                                      (SphereColliderGizmoLookAndFeel *)0x0) {
                                                    pSVar42 = (this->fields)._lookAndFeel;
                                                    if (pSVar42 ==
                                                        (SphereColliderGizmoLookAndFeel *)0x0)
                                                    goto code_?;
                                                  }
                                                  else {
                                                    pSVar42 = (this->fields)._sharedLookAndFeel;
                                                  }
                                                  fVar6 = (pSVar42->fields)._wireColor.g;
                                                  value.y = (pSVar42->fields)._wireColor.b;
                                                  fVar11 = (pSVar42->fields)._wireColor.a;
                                                  if (pGVar41 !=
                                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                    (pGVar41->fields)._borderColor.r =
                                                         (pSVar42->fields)._wireColor.r;
                                                    (pGVar41->fields)._borderColor.g = fVar6;
                                                    (pGVar41->fields)._borderColor.b = value.y;
                                                    (pGVar41->fields)._borderColor.a = fVar11;
                                                    pGVar33 = (this->fields)._axialCircleXY;
                                                    if ((pGVar33 != (GizmoPlaneSlider3D *)0x0) &&
                                                       (pGVar41 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar33,(MethodInfo *)
                                                                                     0x0),
                                                       pGVar41 !=
                                                       (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                      GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                                (pGVar41,value.x,(MethodInfo *)0x0);
                                                      pGVar33 = (this->fields)._axialCircleYZ;
                                                      if ((pGVar33 != (GizmoPlaneSlider3D *)0x0) &&
                                                         (pGVar41 = GizmoPlaneSlider3D::
                                                                                                                                        
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar33,(MethodInfo *)0x0),
                                                  pGVar41 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
                                                  {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                    GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                              (pGVar41,value.x,(MethodInfo *)0x0);
                                                    pGVar33 = (this->fields)._axialCircleZX;
                                                    if ((pGVar33 != (GizmoPlaneSlider3D *)0x0) &&
                                                       (pGVar41 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar33,(MethodInfo *)
                                                                                     0x0),
                                                       pGVar41 !=
                                                       (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                      GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                                (pGVar41,value.x,(MethodInfo *)0x0);
                                                      pGVar33 = (this->fields)._axialCircleXY;
                                                      if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar41 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar33,(MethodInfo *)
                                                                                     0x0);
                                                        if ((this->fields)._sharedLookAndFeel ==
                                                            (SphereColliderGizmoLookAndFeel *)0x0) {
                                                          pSVar42 = (this->fields)._lookAndFeel;
                                                          if (pSVar42 ==
                                                              (SphereColliderGizmoLookAndFeel *)0x0)
                                                          goto code_?;
                                                        }
                                                        else {
                                                          pSVar42 = (this->fields).
                                                                    _sharedLookAndFeel;
                                                        }
                                                        if (pGVar41 !=
                                                            (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                          GizmoPlaneSlider3DLookAndFeel::
                                                                                                                    
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar41,(pSVar42->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar33 = (this->fields)._axialCircleYZ;
                                                  if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar41 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar33,(MethodInfo *)0x0);
                                                    if ((this->fields)._sharedLookAndFeel ==
                                                        (SphereColliderGizmoLookAndFeel *)0x0) {
                                                      pSVar42 = (this->fields)._lookAndFeel;
                                                      if (pSVar42 ==
                                                          (SphereColliderGizmoLookAndFeel *)0x0)
                                                      goto code_?;
                                                    }
                                                    else {
                                                      pSVar42 = (this->fields)._sharedLookAndFeel;
                                                    }
                                                    if (pGVar41 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar41,(pSVar42->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar33 = (this->fields)._axialCircleZX;
                                                  if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar41 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar33,(MethodInfo *)0x0);
                                                    if ((this->fields)._sharedLookAndFeel ==
                                                        (SphereColliderGizmoLookAndFeel *)0x0) {
                                                      pSVar42 = (this->fields)._lookAndFeel;
                                                      if (pSVar42 ==
                                                          (SphereColliderGizmoLookAndFeel *)0x0)
                                                      goto code_?;
                                                    }
                                                    else {
                                                      pSVar42 = (this->fields)._sharedLookAndFeel;
                                                    }
                                                    if (pGVar41 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar41,(pSVar42->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar33 = (this->fields)._axialCircleXY;
                                                  if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                              (pGVar33,(MethodInfo *)0x0);
                                                    pGVar33 = (this->fields)._axialCircleYZ;
                                                    if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                                (pGVar33,(MethodInfo *)0x0);
                                                      pGVar33 = (this->fields)._axialCircleZX;
                                                      if (pGVar33 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_Refresh
                                                                  (pGVar33,(MethodInfo *)0x0);
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
                  }
                }
              }
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_UpdateHoverPriorities
               (SphereColliderGizmo *this,Camera *camera,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pSVar2 = (this->fields)._extentTicks;
  if (pSVar2 == (SphereColliderGizmo_ExtentTick__Array *)0x0) goto code_?;
  if (pSVar2->max_length < 3) goto code_?;
  pSVar3 = (this->fields)._extentTicks;
  pSVar4 = pSVar2->vector[2];
  if (pSVar3->max_length < 4) goto code_?;
  pSVar5 = pSVar3->vector[3];
  if ((((pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0) &&
       (pGVar6 = (pSVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
      (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
     (((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
       ((pPVar8->fields)._priority = 0, pSVar5 != (SphereColliderGizmo_ExtentTick *)0x0)) &&
      ((pGVar6 = (pSVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0 &&
       ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
        (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0)))))))) {
    (pPVar8->fields)._priority = 0;
    fVar9 = (pSVar4->fields).Position.z;
    uVar10._0_4_ = (pSVar4->fields).Position.x;
    uVar10._4_4_ = (pSVar4->fields).Position.y;
    VVar11 = (pSVar4->fields).Normal;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    point.z = fVar9;
    point.x = (float)(int)uVar10;
    point.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    bVar12 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar11,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      pGVar6 = (pSVar5->fields).Tick;
      if ((pGVar6 != (GizmoCap2D *)0x0) &&
         (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
        pGVar6 = (pSVar4->fields).Tick;
code_?:
        pPVar8 = (pGVar7->fields)._hoverPriority2D;
        if (((pGVar6 != (GizmoCap2D *)0x0) &&
            (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
           (pPVar8 != (Priority *)0x0)) {
          Priority::Priority_MakeHigherThan
                    (pPVar8,(pGVar7->fields)._hoverPriority2D,(MethodInfo *)0x0);
          pSVar2 = (this->fields)._extentTicks;
          if (pSVar2 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
            if (pSVar2->max_length < 6) goto code_?;
            pSVar3 = (this->fields)._extentTicks;
            pSVar4 = pSVar2->vector[5];
            if (pSVar3->max_length < 5) goto code_?;
            pSVar5 = pSVar3->vector[4];
            if (((((pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                  (pGVar6 = (pSVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                 ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                  ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
                   ((pPVar8->fields)._priority = 2, pSVar5 != (SphereColliderGizmo_ExtentTick *)0x0)
                   ))))) && (pGVar6 = (pSVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
               ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0)))) {
              (pPVar8->fields)._priority = 2;
              fVar9 = (pSVar4->fields).Position.z;
              uVar13 = (pSVar4->fields).Position.x;
              uVar14 = (pSVar4->fields).Position.y;
              VVar11.y = (float)uVar14;
              VVar11.x = (float)uVar13;
              uVar15._0_4_ = (pSVar4->fields).Normal.x;
              uVar15._4_4_ = (pSVar4->fields).Normal.y;
              this = (SphereColliderGizmo *)(pSVar4->fields).Normal.z;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                this = (SphereColliderGizmo *)TypeInfo__RTG__CameraEx;
                func_?();
              }
              VVar11.z = fVar9;
              pointNormal.z = (float)this;
              pointNormal.x = (float)(int)uVar15;
              pointNormal.y = (float)(int)((ulonglong)uVar15 >> 0x20);
              bVar12 = CameraEx::CameraEx_IsPointFacingCamera
                                 (camera,VVar11,pointNormal,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                pGVar6 = (pSVar5->fields).Tick;
                if ((pGVar6 != (GizmoCap2D *)0x0) &&
                   (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
                  pGVar6 = (pSVar4->fields).Tick;
code_?:
                  pPVar8 = (pGVar7->fields)._hoverPriority2D;
                  if (((pGVar6 != (GizmoCap2D *)0x0) &&
                      (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
                     (pPVar8 != (Priority *)0x0)) {
                    Priority::Priority_MakeHigherThan
                              (pPVar8,(pGVar7->fields)._hoverPriority2D,(MethodInfo *)0x0);
                    pSVar2 = (pSVar1->fields)._extentTicks;
                    if (pSVar2 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                      if (pSVar2->max_length == 0) goto code_?;
                      pSVar3 = (pSVar1->fields)._extentTicks;
                      pSVar4 = pSVar2->vector[0];
                      if (pSVar3->max_length < 2) goto code_?;
                      pSVar5 = pSVar3->vector[1];
                      if ((((pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                           (pGVar6 = (pSVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                          ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                           ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0
                            && ((pPVar8->fields)._priority = 4,
                               pSVar5 != (SphereColliderGizmo_ExtentTick *)0x0)))))) &&
                         ((pGVar6 = (pSVar5->fields).Tick, pGVar6 != (GizmoCap2D *)0x0 &&
                          ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                           (pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0))
                          )))) {
                        (pPVar8->fields)._priority = 4;
                        fVar9 = (pSVar4->fields).Normal.z;
                        uVar16._0_4_ = (pSVar4->fields).Normal.x;
                        uVar16._4_4_ = (pSVar4->fields).Normal.y;
                        VVar11 = (pSVar4->fields).Position;
                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__RTG__CameraEx);
                        }
                        pointNormal_00.z = fVar9;
                        pointNormal_00.x = (float)(int)uVar16;
                        pointNormal_00.y = (float)(int)((ulonglong)uVar16 >> 0x20);
                        bVar12 = CameraEx::CameraEx_IsPointFacingCamera
                                           (camera,VVar11,pointNormal_00,(MethodInfo *)0x0);
                        if (bVar12 == 0) {
                          pGVar6 = (pSVar5->fields).Tick;
                          if ((pGVar6 != (GizmoCap2D *)0x0) &&
                             (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0))
                          {
                            pGVar6 = (pSVar4->fields).Tick;
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
                          pGVar6 = (pSVar4->fields).Tick;
                          if ((pGVar6 != (GizmoCap2D *)0x0) &&
                             (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0))
                          {
                            pGVar6 = (pSVar5->fields).Tick;
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pGVar6 = (pSVar4->fields).Tick;
                if ((pGVar6 != (GizmoCap2D *)0x0) &&
                   (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
                  pGVar6 = (pSVar5->fields).Tick;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else {
      pGVar6 = (pSVar4->fields).Tick;
      if ((pGVar6 != (GizmoCap2D *)0x0) &&
         (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
        pGVar6 = (pSVar5->fields).Tick;
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_UpdateTickColors
               (SphereColliderGizmo *this,Camera *camera,MethodInfo *method)

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
    uStack_4._4_4_ = (SphereColliderGizmo_ExtentTick__Array *)pVVar2->y;
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
      pSVar14 = (this->fields)._extentTicks;
      uStack_4 = CONCAT44(pSVar14,(undefined4)uStack_4);
      fStack_15 = (float)((uint)(fStack_10 * (float)uVar12 + fStack_9 * (float)uVar11 +
                                fStack_8 * fVar5) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fStack_16 = (float)uVar11;
      fStack_17 = (float)uVar12;
      fStack_18 = fVar5;
      if (pSVar14 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
        ppSStack_19 = pSVar14->vector;
        do {
          if ((int)pSVar14->max_length <= (int)uStack_13) {
            return;
          }
          if (pSVar14->max_length <= uStack_13) goto code_?;
          pSStack_20 = *ppSStack_19;
          if (pSStack_20 == (SphereColliderGizmo_ExtentTick *)0x0) break;
          this_00 = (pSStack_20->fields).Tick;
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
            uVar24._0_4_ = (pSStack_20->fields).Position.x;
            uVar24._4_4_ = (pSStack_20->fields).Position.y;
            fStack_25 = (pSStack_20->fields).Position.z;
            uVar26._0_4_ = (pSStack_20->fields).Normal.x;
            uVar26._4_4_ = (pSStack_20->fields).Normal.y;
            pGStack_27 = (GizmoOverrideColor *)(pSStack_20->fields).Normal.z;
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
            if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
              pSVar31 = (this->fields)._lookAndFeel;
              if (pSVar31 == (SphereColliderGizmoLookAndFeel *)0x0) break;
            }
            else {
              pSVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar29->fields)._color,
                                 fStack_8 * (pSVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
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
            if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
              pSVar31 = (this->fields)._lookAndFeel;
              if (pSVar31 == (SphereColliderGizmoLookAndFeel *)0x0) break;
            }
            else {
              pSVar31 = (this->fields)._sharedLookAndFeel;
            }
            pCVar32 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar29->fields)._borderColor,
                                 fStack_8 * (pSVar31->fields)._tickCullAlphaScale,(MethodInfo *)0x0
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
          VStack_3.x = (pSStack_20->fields).Position.x;
          VStack_3.y = (pSStack_20->fields).Position.y;
          VStack_3.z = (pSStack_20->fields).Position.z;
          isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                            fVar5 * VStack_3.z + fStack_15;
          _bStack_20 = CONCAT31(uStack_36,isVisible);
          GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_00,isVisible,(MethodInfo *)0x0);
          uStack_13 = uStack_13 + 1;
          ppSStack_19 = ppSStack_19 + 1;
          pSVar14 = uStack_4._4_4_;
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


/* SphereColliderGizmo() */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo__ctor
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__PolygonShape2D);
    func_?(&TypeInfo__RTG__SphereColliderGizmoHotkeys);
    func_?(&TypeInfo__RTG__SphereColliderGizmoLookAndFeel);
    func_?(&TypeInfo__RTG__SphereColliderGizmoSettings);
    func_?(&TypeInfo__RTG__SphereColliderSnapshot);
    cRam_? = '\x01';
  }
  pSVar1 = (SphereColliderGizmo_ExtentTick__Array *)
           func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick,6);
  (this->fields)._extentTicks = pSVar1;
  func_?(&(this->fields)._extentTicks,pSVar1);
  this_00 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._sphereBorderPoly = this_00;
  func_?(&(this->fields)._sphereBorderPoly,this_00);
  pSVar2 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pSVar2,(MethodInfo *)0x0);
  (this->fields)._preChangeColliderSnapshot = pSVar2;
  func_?(&(this->fields)._preChangeColliderSnapshot,pSVar2);
  pSVar2 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pSVar2,(MethodInfo *)0x0);
  (this->fields)._postChangeColliderSnapshot = pSVar2;
  func_?();
  this_01 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_01;
  func_?(&(this->fields)._offsetDrag,this_01);
  this_02 = (SphereColliderGizmoLookAndFeel *)
            func_?(TypeInfo__RTG__SphereColliderGizmoLookAndFeel);
  SphereColliderGizmoLookAndFeel::SphereColliderGizmoLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  this_03 = (PointLightGizmo3DSettings *)func_?(TypeInfo__RTG__SphereColliderGizmoSettings)
  ;
  PointLightGizmo3DSettings::PointLightGizmo3DSettings__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._settings = (SphereColliderGizmoSettings *)this_03;
  func_?(&(this->fields)._settings,this_03);
  value = (SphereColliderGizmoHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar3 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar3,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar3 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar3,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar3->fields)._lCtrl = 1;
    (value->fields)._enableSnapping = pHVar3;
    func_?();
    pHVar3 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar3,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar3 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar3,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar3->fields)._lShift = 1;
      (value->fields)._scaleFromCenter = pHVar3;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value,ExceptionArgument__Enum_obj,
                 (MethodInfo *)&(value->fields)._scaleFromCenter);
      (this->fields)._hotkeys = value;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_get_IsSnapEnabled
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  if ((this->fields)._sharedHotkeys == (SphereColliderGizmoHotkeys *)0x0) {
    pSVar1 = (this->fields)._hotkeys;
    if (pSVar1 == (SphereColliderGizmoHotkeys *)0x0) goto code_?;
  }
  else {
    pSVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pSVar1->fields)._enableSnapping;
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


/* Void set_SharedLookAndFeel(SphereColliderGizmoLookAndFeel) */

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_set_SharedLookAndFeel
               (SphereColliderGizmo *this,SphereColliderGizmoLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  SphereColliderGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

