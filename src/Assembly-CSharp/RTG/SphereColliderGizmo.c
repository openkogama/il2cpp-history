
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
  ppGVar4 = &(this->fields)._leftTick;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) {
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
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::
             Datatype_hexBinary_get_TypeCode((Datatype_hexBinary *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._rightTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_base64Binary::
             Datatype_base64Binary_get_TypeCode((Datatype_base64Binary *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._topTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_NOTATION::Datatype_NOTATION_get_TypeCode
                       ((Datatype_NOTATION *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._bottomTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_normalizedStringV1Compat::
             Datatype_normalizedStringV1Compat_get_TypeCode
                       ((Datatype_normalizedStringV1Compat *)0x0,(MethodInfo *)this);
    pGVar3 = (GizmoCap2D *)func_?();
    pMVar6 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._backTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    iVar7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    pGVar8 = TypeInfo__RTG__GizmoCap2D;
    pIVar9 = (Il2CppClass *)func_?();
    method_00 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar9,pGVar1,iVar7,(MethodInfo *)0x0);
    ppIVar10 = &(pGVar8->_0).parent;
    *ppIVar10 = pIVar9;
    func_?(ppIVar10);
    if (*ppIVar10 == (Il2CppClass *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppIVar10,(pGVar8->_1).unity_user_data,(MethodInfo *)0x0);
    pIVar11 = (pGVar8->_0).generic_class;
    pOVar12 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,pMVar6);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar12 != (Object *)0x0) {
      iVar13 = func_?(pOVar12);
      if (iVar13 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar11->cached_class < (Il2CppClass *)0x3) goto code_?;
    ppIVar14 = &pIVar11[1].context.method_inst;
    *ppIVar14 = (Il2CppGenericInst *)pOVar12;
    func_?(ppIVar14);
    pIVar11 = (pGVar8->_0).generic_class;
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar11->cached_class < (Il2CppClass *)0x3) goto code_?;
    pIVar15 = pIVar11[1].context.method_inst;
    if (pIVar15 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar15 = pIVar15 + 4;
    pIVar15->type_argc = (uint32_t)(pGVar8->_0).castClass;
    func_?(pIVar15);
    pIVar11 = (pGVar8->_0).generic_class;
    pIVar9 = (Il2CppClass *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar9,ExceptionArgument__Enum_obj,method_00);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9 != (Il2CppClass *)0x0) {
      iVar13 = func_?(pIVar9);
      if (iVar13 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar11->cached_class < (Il2CppClass *)0x4) goto code_?;
    pIVar11[1].cached_class = pIVar9;
    func_?(&pIVar11[1].cached_class);
    pIVar11 = (pGVar8->_0).generic_class;
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar11->cached_class < (Il2CppClass *)0x4) goto code_?;
    if (pIVar11[1].cached_class == (Il2CppClass *)0x0) goto code_?;
    ppIVar10 = &(pIVar11[1].cached_class)->element_class;
    *ppIVar10 = (Il2CppClass *)(pGVar8->_0).this_arg.data;
    func_?(ppIVar10);
    pIVar11 = (pGVar8->_0).generic_class;
    pOVar12 = (Object *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,method_00);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar12 != (Object *)0x0) {
      iVar13 = func_?(pOVar12);
      if (iVar13 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar11->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar11[2].context.class_inst = (Il2CppGenericInst *)pOVar12;
    func_?(&pIVar11[2].context);
    pIVar11 = (pGVar8->_0).generic_class;
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar11->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar15 = pIVar11[2].context.class_inst;
    if (pIVar15 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar15 = pIVar15 + 4;
    pIVar15->type_argc = *(uint32_t *)&(pGVar8->_0).this_arg.attrs;
    func_?(pIVar15);
    pIVar11 = (pGVar8->_0).generic_class;
    pIVar16 = (Il2CppType *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar16,ExceptionArgument__Enum_obj,method_00);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar16 != (Il2CppType *)0x0) {
      iVar13 = func_?(pIVar16);
      if (iVar13 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar11->cached_class < (Il2CppClass *)0x5) goto code_?;
    pIVar11[2].type = pIVar16;
    func_?(pIVar11 + 2);
    pIVar11 = (pGVar8->_0).generic_class;
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar11->cached_class < (Il2CppClass *)0x5) goto code_?;
    if (pIVar11[2].type == (Il2CppType *)0x0) goto code_?;
    pIVar16 = pIVar11[2].type + 4;
    pIVar16->data = (_union_86)(pGVar8->_0).declaringType;
    func_?(pIVar16);
    pIVar11 = (pGVar8->_0).generic_class;
    pIVar16 = (Il2CppType *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar16,ExceptionArgument__Enum_obj,method_00);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar16 != (Il2CppType *)0x0) {
      iVar13 = func_?(pIVar16);
      if (iVar13 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar11->cached_class == (Il2CppClass *)0x0) goto code_?;
    pIVar11[1].type = pIVar16;
    func_?(pIVar11 + 1);
    pIVar11 = (pGVar8->_0).generic_class;
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar11->cached_class == (Il2CppClass *)0x0) goto code_?;
    if (pIVar11[1].type == (Il2CppType *)0x0) goto code_?;
    pIVar16 = pIVar11[1].type + 4;
    pIVar16->data = (_union_86)(pGVar8->_0).parent;
    func_?(pIVar16);
    pIVar11 = (pGVar8->_0).generic_class;
    pOVar12 = (Object *)func_?(TypeInfo__RTG__SphereColliderGizmo__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar12,ExceptionArgument__Enum_obj,method_00);
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar12 == (Object *)0x0) {
code_?:
      if (pIVar11->cached_class < (Il2CppClass *)0x2) goto code_?;
      pIVar11[1].context.class_inst = (Il2CppGenericInst *)pOVar12;
      func_?(&pIVar11[1].context);
      pIVar11 = (pGVar8->_0).generic_class;
      if (pIVar11 != (Il2CppGenericClass *)0x0) {
        if (pIVar11->cached_class < (Il2CppClass *)0x2) goto code_?;
        pIVar15 = pIVar11[1].context.class_inst;
        if (pIVar15 != (Il2CppGenericInst *)0x0) {
          pMVar6 = (MethodInfo *)(pIVar15 + 4);
          pMVar6->methodPointer = (Il2CppMethodPointer)(pGVar8->_0).element_class;
          func_?();
          pGVar1 = (Gizmo *)(pGVar8->_0).name;
          XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_Name::Datatype_Name_get_TypeCode
                             ((Datatype_Name *)0x0,pMVar6);
          pGVar17 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
          GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar17,pGVar1,XVar2,(MethodInfo *)0x0);
          pp_Var3 = &(pGVar8->_0).typeMetadataHandle;
          *pp_Var3 = (Il2CppMetadataTypeHandle)pGVar17;
          func_?(pp_Var3,pGVar17);
          if ((GizmoSlider *)*pp_Var3 != (GizmoSlider *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)*pp_Var3,0,(MethodInfo *)0x0);
            if ((GizmoPlaneSlider3D *)*pp_Var3 != (GizmoPlaneSlider3D *)0x0) {
              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                        ((GizmoPlaneSlider3D *)*pp_Var3,0,(MethodInfo *)0x0);
              if ((GizmoPlaneSlider3D *)*pp_Var3 != (GizmoPlaneSlider3D *)0x0) {
                pGVar18 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                    ((GizmoPlaneSlider3D *)*pp_Var3,(MethodInfo *)0x0);
                if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  (pGVar18->fields)._useZoomFactor = 0;
                  if ((GizmoPlaneSlider3D *)*pp_Var3 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar18 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        ((GizmoPlaneSlider3D *)*pp_Var3,(MethodInfo *)0x0);
                    if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      (pGVar18->fields)._planeType = 2;
                      pGVar1 = (Gizmo *)(pGVar8->_0).name;
                      iVar7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                               UnsafeUtility::UnsafeUtility_SizeOf_25((MethodInfo *)0x0);
                      pGVar19 = TypeInfo__RTG__GizmoPlaneSlider3D;
                      pGVar17 = (GizmoPlaneSlider3D *)func_?();
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar17,pGVar1,iVar7,(MethodInfo *)0x0);
                      ppIVar20 = &(pGVar19->_0).interopData;
                      *ppIVar20 = (Il2CppInteropData *)pGVar17;
                      func_?(ppIVar20);
                      if (*ppIVar20 != (Il2CppInteropData *)0x0) {
                        GizmoSlider::GizmoSlider_SetVisible
                                  ((GizmoSlider *)*ppIVar20,0,(MethodInfo *)0x0);
                        if ((GizmoPlaneSlider3D *)*ppIVar20 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                    ((GizmoPlaneSlider3D *)*ppIVar20,0,(MethodInfo *)0x0);
                          if ((GizmoPlaneSlider3D *)*ppIVar20 != (GizmoPlaneSlider3D *)0x0) {
                            pGVar18 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                ((GizmoPlaneSlider3D *)*ppIVar20,(MethodInfo *)0x0);
                            if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              (pGVar18->fields)._useZoomFactor = 0;
                              if ((GizmoPlaneSlider3D *)*ppIVar20 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar18 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                    ((GizmoPlaneSlider3D *)*ppIVar20,
                                                     (MethodInfo *)0x0);
                                if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  (pGVar18->fields)._planeType = 2;
                                  pGVar1 = (Gizmo *)(pGVar19->_0).name;
                                  XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_ID::
                                           Datatype_ID_get_TypeCode
                                                     ((Datatype_ID *)0x0,(MethodInfo *)pGVar19);
                                  pGVar19 = TypeInfo__RTG__GizmoPlaneSlider3D;
                                  pIVar9 = (Il2CppClass *)func_?();
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                            ((GizmoPlaneSlider3D *)pIVar9,pGVar1,XVar2,
                                             (MethodInfo *)0x0);
                                  ppIVar10 = &(pGVar19->_0).klass;
                                  *ppIVar10 = pIVar9;
                                  func_?(ppIVar10);
                                  if (*ppIVar10 != (Il2CppClass *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)*ppIVar10,0,(MethodInfo *)0x0);
                                    if (*ppIVar10 != (Il2CppClass *)0x0) {
                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                                ((GizmoPlaneSlider3D *)*ppIVar10,0,(MethodInfo *)0x0
                                                );
                                      if (*ppIVar10 != (Il2CppClass *)0x0) {
                                        pGVar18 = GizmoPlaneSlider3D::
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            ((GizmoPlaneSlider3D *)*ppIVar10,
                                                             (MethodInfo *)0x0);
                                        if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          (pGVar18->fields)._useZoomFactor = 0;
                                          if (*ppIVar10 != (Il2CppClass *)0x0) {
                                            pGVar18 = GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_get_LookAndFeel
                                                                ((GizmoPlaneSlider3D *)*ppIVar10,
                                                                 (MethodInfo *)0x0);
                                            if (pGVar18 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                              (pGVar18->fields)._planeType = 2;
                                              SphereColliderGizmo_SetupSharedLookAndFeel
                                                        ((SphereColliderGizmo *)pGVar19,
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
    iVar13 = func_?(pOVar12);
    if (iVar13 != 0) goto code_?;
  }
  uVar5 = func_?();
  func_?(uVar5);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  pSVar6 = (this->fields)._sharedSettings;
  if ((pSVar6 == (SphereColliderGizmoSettings *)0x0) &&
     (pSVar6 = (this->fields)._settings, pSVar6 == (SphereColliderGizmoSettings *)0x0))
  goto code_?;
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
    pSVar3 = (this->fields)._sharedHotkeys;
    if (((pSVar3 == (SphereColliderGizmoHotkeys *)0x0) &&
        (pSVar3 = (this->fields)._hotkeys, pSVar3 == (SphereColliderGizmoHotkeys *)0x0)) ||
       (pHVar4 = (pSVar3->fields)._enableSnapping, pHVar4 == (Hotkeys *)0x0))
    goto code_?;
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
              uVar11 = CONCAT44(stack0xffffffec + (float)uVar15 * fVar12,
                                (float)puStack_7 + (float)uVar14 * fVar12);
              fVar8 = fVar8 + pVVar10->z * fVar12;
              pSVar3 = (this->fields)._sharedHotkeys;
              if (((pSVar3 != (SphereColliderGizmoHotkeys *)0x0) ||
                  (pSVar3 = (this->fields)._hotkeys, pSVar3 != (SphereColliderGizmoHotkeys *)0x0))
                 && (pHVar4 = (pSVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
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
      pSVar7 = (this->fields)._sharedLookAndFeel;
      if ((pSVar7 != (SphereColliderGizmoLookAndFeel *)0x0) ||
         (pSVar7 = (this->fields)._lookAndFeel, pSVar7 != (SphereColliderGizmoLookAndFeel *)0x0)) {
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
                          (pGVar11,camera,(pGVar11->klass->vtable).OnVisibilityStateChanged.methodPtr)
                ;
                pGVar11 = (this->fields)._axialCircleYZ;
                if (pGVar11 != (GizmoPlaneSlider3D *)0x0) {
                  (*(code *)(pGVar11->klass->vtable).Render_1.method)
                            (pGVar11,camera,
                             (pGVar11->klass->vtable).OnVisibilityStateChanged.methodPtr);
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
                                         (pGVar12->klass->vtable).OnVisibilityStateChanged.methodPtr)
                              ;
                              pGVar12 = (this->fields)._backTick;
                              if (pGVar12 != (GizmoCap2D *)0x0) {
                                (*(code *)(pGVar12->klass->vtable).Render_1.method)
                                          (pGVar12,camera,
                                           (pGVar12->klass->vtable).OnVisibilityStateChanged.
                                           methodPtr);
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
  pSVar1 = (this->fields)._sharedLookAndFeel;
  if ((pSVar1 != (SphereColliderGizmoLookAndFeel *)0x0) ||
     (pSVar1 = (this->fields)._lookAndFeel, pSVar1 != (SphereColliderGizmoLookAndFeel *)0x0)) {
    pGVar2 = (pSVar1->fields)._tickLookAndFeel;
    pGVar3 = (this->fields)._rightTick;
    if (pGVar2 != (GizmoCap2DLookAndFeel__Array *)0x0) {
      if (pGVar2->max_length == 0) goto code_?;
      pGVar4 = pGVar2->vector[0];
      if (pGVar3 != (GizmoCap2D *)0x0) {
        ppGVar5 = &(pGVar3->fields)._sharedLookAndFeel;
        *ppGVar5 = pGVar4;
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_UpdateHandles
               (SphereColliderGizmo *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pVVar1 = SphereColliderGizmo_CalcWorldCenter
                        ((Vector3 *)&stack0xffffff90,this,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uVar2._4_4_ = pVVar1->y;
    value.x = pVVar1->z;
    pSVar3 = (this->fields)._targetCollider;
    if (pSVar3 != (SphereCollider *)0x0) {
      value.y = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                SphereCollider_get_radius(pSVar3,(MethodInfo *)0x0);
      fVar4 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
      fVar4 = fVar4 * value.y;
      pSVar3 = (this->fields)._targetCollider;
      if (pSVar3 != (SphereCollider *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar3,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xffffff90,pTVar5,(MethodInfo *)0x0);
          uVar6 = pVVar1->x;
          uVar7 = pVVar1->y;
          pGVar8 = (this->fields)._leftTick;
          if (this_01 != (Camera *)0x0) {
            __return_storage_ptr__ = (Vector3 *)&stack0xffffffd0;
            position_03.y = SUB84(uVar2,4) - (float)uVar7 * fVar4;
            position_03.x = (float)uVar2 - (float)uVar6 * fVar4;
            position_03.z = value.x - pVVar1->z * fVar4;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                                (__return_storage_ptr__,this_01,position_03,(MethodInfo *)0x0);
            value.x = pVVar1->x;
            value.y = pVVar1->y;
            if (pGVar8 != (GizmoCap2D *)0x0) {
              fVar9 = 0.0;
              GizmoCap2D::GizmoCap2D_set_Position(pGVar8,value,(MethodInfo *)0x0);
              pSVar10 = (this->fields)._extentTicks;
              if (pSVar10 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                if (pSVar10->max_length < 3) goto code_?;
                pSVar11 = pSVar10->vector[2];
                if (pSVar11 != (SphereColliderGizmo_ExtentTick *)0x0) {
                  (pSVar11->fields).Position.x = value.x;
                  (pSVar11->fields).Position.y = value.y;
                  (pSVar11->fields).Position.z = fVar9;
                  pSVar10 = (this->fields)._extentTicks;
                  if (pSVar10 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                    if (pSVar10->max_length < 3) goto code_?;
                    pSVar11 = pSVar10->vector[2];
                    pSVar3 = (this->fields)._targetCollider;
                    if (pSVar3 != (SphereCollider *)0x0) {
                      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pSVar3,(MethodInfo *)0x0);
                      if (pTVar5 != (Transform *)0x0) {
                        value.y = 0.0;
                        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_right((Vector3 *)&stack0xffffff90,pTVar5,
                                                      (MethodInfo *)0x0);
                        uVar12 = pVVar1->x;
                        uVar13 = pVVar1->y;
                        uVar14 = uVar13 ^ 
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                        ;
                        value.x = (float)((uint)pVVar1->z ^
                                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                         );
                        if (pSVar11 != (SphereColliderGizmo_ExtentTick *)0x0) {
                          (pSVar11->fields).Normal.x =
                               (float)(uVar12 ^ 
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                          (pSVar11->fields).Normal.y = (float)uVar14;
                          (pSVar11->fields).Normal.z = value.x;
                          pSVar3 = (this->fields)._targetCollider;
                          if (pSVar3 != (SphereCollider *)0x0) {
                            pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pSVar3,(MethodInfo *)0x0);
                            if (pTVar15 != (Transform *)0x0) {
                              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_right((Vector3 *)&stack0xffffff90,pTVar15,
                                                            (MethodInfo *)0x0);
                              uVar16 = pVVar1->x;
                              uVar17 = pVVar1->y;
                              fVar18 = (float)__return_storage_ptr__ + (float)uVar16 * fVar4;
                              fVar9 = (float)pTVar5 + (float)uVar17 * fVar4;
                              fVar4 = value.y + pVVar1->z * fVar4;
                              pGVar8 = (this->fields)._rightTick;
                              position_04.y = fVar9;
                              position_04.x = fVar18;
                              position_04.z = fVar4;
                              value.x = fVar4;
                              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  ((Vector3 *)&stack0xffffffd0,this_01,position_04,
                                                   (MethodInfo *)0x0);
                              value_00.x = pVVar1->x;
                              value_00.y = pVVar1->y;
                              if (pGVar8 != (GizmoCap2D *)0x0) {
                                GizmoCap2D::GizmoCap2D_set_Position
                                          (pGVar8,value_00,(MethodInfo *)0x0);
                                pSVar10 = (this->fields)._extentTicks;
                                if (pSVar10 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                                  if (pSVar10->max_length < 4) goto code_?;
                                  pSVar11 = pSVar10->vector[3];
                                  if (pSVar11 != (SphereColliderGizmo_ExtentTick *)0x0) {
                                    (pSVar11->fields).Position.x = fVar18;
                                    (pSVar11->fields).Position.y = fVar9;
                                    (pSVar11->fields).Position.z = fVar4;
                                    pSVar10 = (this->fields)._extentTicks;
                                    if (pSVar10 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                                      if (pSVar10->max_length < 4) goto code_?;
                                      pSVar11 = pSVar10->vector[3];
                                      pSVar3 = (this->fields)._targetCollider;
                                      if (pSVar3 != (SphereCollider *)0x0) {
                                        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_transform
                                                            ((Component *)pSVar3,(MethodInfo *)0x0)
                                        ;
                                        if (pTVar15 != (Transform *)0x0) {
                                          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_get_right
                                                              ((Vector3 *)&stack0xffffff90,pTVar15,
                                                               (MethodInfo *)0x0);
                                          fVar9 = pVVar1->y;
                                          fVar4 = pVVar1->z;
                                          if (pSVar11 != (SphereColliderGizmo_ExtentTick *)0x0) {
                                            (pSVar11->fields).Normal.x = pVVar1->x;
                                            (pSVar11->fields).Normal.y = fVar9;
                                            (pSVar11->fields).Normal.z = fVar4;
                                            pSVar3 = (this->fields)._targetCollider;
                                            if (pSVar3 != (SphereCollider *)0x0) {
                                              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_transform
                                                                  ((Component *)pSVar3,
                                                                   (MethodInfo *)0x0);
                                              if (pTVar15 != (Transform *)0x0) {
                                                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_up
                                                                    ((Vector3 *)&stack0xffffff90,
                                                                     pTVar15,(MethodInfo *)0x0);
                                                uVar19 = pVVar1->x;
                                                uVar20 = pVVar1->y;
                                                fVar18 = (float)__return_storage_ptr__ +
                                                         (float)uVar19 * 4.1637528e-29;
                                                fVar9 = (float)pTVar5 +
                                                         (float)uVar20 * 4.1637528e-29;
                                                fVar4 = value.y + pVVar1->z * 4.1637528e-29;
                                                pGVar8 = (this->fields)._topTick;
                                                position.y = fVar9;
                                                position.x = fVar18;
                                                position.z = fVar4;
                                                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Camera::Camera_WorldToScreenPoint_1
                                                                    ((Vector3 *)&stack0xffffffd0,
                                                                     this_01,position,
                                                                     (MethodInfo *)0x0);
                                                value_01.x = pVVar1->x;
                                                value_01.y = pVVar1->y;
                                                if (pGVar8 != (GizmoCap2D *)0x0) {
                                                  GizmoCap2D::GizmoCap2D_set_Position
                                                            (pGVar8,value_01,(MethodInfo *)0x0);
                                                  pSVar10 = (this->fields)._extentTicks;
                                                  if (pSVar10 !=
                                                      (SphereColliderGizmo_ExtentTick__Array *)0x0)
                                                  {
                                                    if (pSVar10->max_length < 6)
                                                    goto code_?;
                                                    pSVar11 = pSVar10->vector[5];
                                                    if (pSVar11 !=
                                                        (SphereColliderGizmo_ExtentTick *)0x0) {
                                                      (pSVar11->fields).Position.x = fVar18;
                                                      (pSVar11->fields).Position.y = fVar9;
                                                      (pSVar11->fields).Position.z = fVar4;
                                                      pSVar10 = (this->fields)._extentTicks;
                                                      if (pSVar10 !=
                                                          (SphereColliderGizmo_ExtentTick__Array *)
                                                          0x0) {
                                                        if (pSVar10->max_length < 6)
                                                        goto code_?;
                                                        pSVar11 = pSVar10->vector[5];
                                                        pSVar3 = (this->fields)._targetCollider;
                                                        if (pSVar3 != (SphereCollider *)0x0) {
                                                          pTVar15 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              ((Component *)pSVar3,
                                                                               (MethodInfo *)0x0);
                                                          if (pTVar15 != (Transform *)0x0) {
                                                            pVVar1 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Transform::
                                                                      Transform_get_up((Vector3 *)
                                                                                       &
                                                  stack0xffffff90,pTVar15,(MethodInfo *)0x0);
                                                  fVar9 = pVVar1->y;
                                                  fVar4 = pVVar1->z;
                                                  if (pSVar11 !=
                                                      (SphereColliderGizmo_ExtentTick *)0x0) {
                                                    (pSVar11->fields).Normal.x = pVVar1->x;
                                                    (pSVar11->fields).Normal.y = fVar9;
                                                    (pSVar11->fields).Normal.z = fVar4;
                                                    pSVar3 = (this->fields)._targetCollider;
                                                    if (pSVar3 != (SphereCollider *)0x0) {
                                                      pTVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar3,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar15 != (Transform *)0x0) {
                                                        pVVar1 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_up((Vector3 *)
                                                                                   &stack0xffffff90,
                                                                                   pTVar15,(
                                                  MethodInfo *)0x0);
                                                  uVar21 = pVVar1->x;
                                                  uVar22 = pVVar1->y;
                                                  fVar18 = (float)__return_storage_ptr__ -
                                                           (float)uVar21 * 4.1637528e-29;
                                                  fVar9 = (float)pTVar5 -
                                                           (float)uVar22 * 4.1637528e-29;
                                                  fVar4 = value.y - pVVar1->z * 4.1637528e-29;
                                                  pGVar8 = (this->fields)._bottomTick;
                                                  position_00.y = fVar9;
                                                  position_00.x = fVar18;
                                                  position_00.z = fVar4;
                                                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&stack0xffffffd0,
                                                                       this_01,position_00,
                                                                       (MethodInfo *)0x0);
                                                  value_02.x = pVVar1->x;
                                                  value_02.y = pVVar1->y;
                                                  if (pGVar8 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar8,value_02,(MethodInfo *)0x0);
                                                    pSVar10 = (this->fields)._extentTicks;
                                                    if (pSVar10 !=
                                                        (SphereColliderGizmo_ExtentTick__Array *)0x0
                                                       ) {
                                                      if (pSVar10->max_length < 5)
                                                      goto code_?;
                                                      pSVar11 = pSVar10->vector[4];
                                                      if (pSVar11 !=
                                                          (SphereColliderGizmo_ExtentTick *)0x0) {
                                                        (pSVar11->fields).Position.x = fVar18;
                                                        (pSVar11->fields).Position.y = fVar9;
                                                        (pSVar11->fields).Position.z = fVar4;
                                                        pSVar10 = (this->fields)._extentTicks;
                                                        if (pSVar10 !=
                                                            (SphereColliderGizmo_ExtentTick__Array *
                                                            )0x0) {
                                                          if (pSVar10->max_length < 5)
                                                          goto code_?;
                                                          pSVar11 = pSVar10->vector[4];
                                                          pSVar3 = (this->fields)._targetCollider;
                                                          if (pSVar3 != (SphereCollider *)0x0) {
                                                            pTVar15 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)
                                                                                 pSVar3,(MethodInfo
                                                                                          *)0x0);
                                                            if (pTVar15 != (Transform *)0x0) {
                                                              pVVar1 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_get_up((Vector3 *)
                                                                                         &
                                                  stack0xffffff90,pTVar15,(MethodInfo *)0x0);
                                                  uVar23 = pVVar1->x;
                                                  uVar24 = pVVar1->y;
                                                  uVar14 = uVar24 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar4 = (float)((uint)pVVar1->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pSVar11 !=
                                                      (SphereColliderGizmo_ExtentTick *)0x0) {
                                                    (pSVar11->fields).Normal.x =
                                                         (float)(uVar23 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pSVar11->fields).Normal.y = (float)uVar14;
                                                  (pSVar11->fields).Normal.z = fVar4;
                                                  pSVar3 = (this->fields)._targetCollider;
                                                  if (pSVar3 != (SphereCollider *)0x0) {
                                                    pTVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pSVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar15 != (Transform *)0x0) {
                                                      pVVar1 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_forward
                                                                          ((Vector3 *)
                                                                           &stack0xffffff90,pTVar15,
                                                                           (MethodInfo *)0x0);
                                                      uVar25 = pVVar1->x;
                                                      uVar26 = pVVar1->y;
                                                      fVar18 = (float)__return_storage_ptr__ -
                                                               (float)uVar25 * 4.1637528e-29;
                                                      fVar9 = (float)pTVar5 -
                                                               (float)uVar26 * 4.1637528e-29;
                                                      fVar4 = value.y - pVVar1->z * 4.1637528e-29;
                                                      pGVar8 = (this->fields)._frontTick;
                                                      position_01.y = fVar9;
                                                      position_01.x = fVar18;
                                                      position_01.z = fVar4;
                                                      pVVar1 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Camera::
                                                                Camera_WorldToScreenPoint_1
                                                                          ((Vector3 *)
                                                                           &stack0xffffffd0,this_01,
                                                                           position_01,
                                                                           (MethodInfo *)0x0);
                                                      value_03.x = pVVar1->x;
                                                      value_03.y = pVVar1->y;
                                                      if (pGVar8 != (GizmoCap2D *)0x0) {
                                                        GizmoCap2D::GizmoCap2D_set_Position
                                                                  (pGVar8,value_03,
                                                                   (MethodInfo *)0x0);
                                                        pSVar10 = (this->fields)._extentTicks;
                                                        if (pSVar10 !=
                                                            (SphereColliderGizmo_ExtentTick__Array *
                                                            )0x0) {
                                                          if (pSVar10->max_length == 0)
                                                          goto code_?;
                                                          pSVar11 = pSVar10->vector[0];
                                                          if (pSVar11 !=
                                                              (SphereColliderGizmo_ExtentTick *)0x0)
                                                          {
                                                            (pSVar11->fields).Position.x = fVar18;
                                                            (pSVar11->fields).Position.y = fVar9;
                                                            (pSVar11->fields).Position.z = fVar4;
                                                            pSVar10 = (this->fields)._extentTicks;
                                                            if (pSVar10 !=
                                                                (
                                                  SphereColliderGizmo_ExtentTick__Array *)0x0) {
                                                    if (pSVar10->max_length == 0)
                                                    goto code_?;
                                                    pSVar11 = pSVar10->vector[0];
                                                    pSVar3 = (this->fields)._targetCollider;
                                                    if (pSVar3 != (SphereCollider *)0x0) {
                                                      pTVar15 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar3,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar15 != (Transform *)0x0) {
                                                        pVVar1 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_forward
                                                                            ((Vector3 *)
                                                                             &stack0xffffff90,
                                                                             pTVar15,(MethodInfo *)
                                                                                     0x0);
                                                        uVar27 = pVVar1->x;
                                                        uVar28 = pVVar1->y;
                                                        uVar14 = uVar28 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar4 = (float)((uint)pVVar1->z ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pSVar11 !=
                                                      (SphereColliderGizmo_ExtentTick *)0x0) {
                                                    (pSVar11->fields).Normal.x =
                                                         (float)(uVar27 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pSVar11->fields).Normal.y = (float)uVar14;
                                                  (pSVar11->fields).Normal.z = fVar4;
                                                  pSVar3 = (this->fields)._targetCollider;
                                                  if (pSVar3 != (SphereCollider *)0x0) {
                                                    pTVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pSVar3,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar15 != (Transform *)0x0) {
                                                      pVVar1 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_forward
                                                                          ((Vector3 *)
                                                                           &stack0xffffff90,pTVar15,
                                                                           (MethodInfo *)0x0);
                                                      uVar29 = pVVar1->x;
                                                      uVar30 = pVVar1->y;
                                                      fVar4 = (float)__return_storage_ptr__ +
                                                               (float)uVar29 * 4.1637528e-29;
                                                      value.y = value.y + pVVar1->z * 4.1637528e-29
                                                      ;
                                                      fVar9 = (float)pTVar5 +
                                                               (float)uVar30 * 4.1637528e-29;
                                                      pGVar8 = (this->fields)._backTick;
                                                      position_02.y = fVar9;
                                                      position_02.x = fVar4;
                                                      position_02.z = value.y;
                                                      pVVar1 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Camera::
                                                                Camera_WorldToScreenPoint_1
                                                                          ((Vector3 *)
                                                                           &stack0xffffffb8,this_01,
                                                                           position_02,
                                                                           (MethodInfo *)0x0);
                                                      value_04.x = pVVar1->x;
                                                      value_04.y = pVVar1->y;
                                                      if (pGVar8 != (GizmoCap2D *)0x0) {
                                                        GizmoCap2D::GizmoCap2D_set_Position
                                                                  (pGVar8,value_04,
                                                                   (MethodInfo *)0x0);
                                                        pSVar10 = (this->fields)._extentTicks;
                                                        if (pSVar10 !=
                                                            (SphereColliderGizmo_ExtentTick__Array *
                                                            )0x0) {
                                                          if (pSVar10->max_length < 2)
                                                          goto code_?;
                                                          pSVar11 = pSVar10->vector[1];
                                                          if (pSVar11 !=
                                                              (SphereColliderGizmo_ExtentTick *)0x0)
                                                          {
                                                            (pSVar11->fields).Position.x = fVar4;
                                                            (pSVar11->fields).Position.y = fVar9;
                                                            (pSVar11->fields).Position.z = value.y;
                                                            pSVar10 = (this->fields)._extentTicks;
                                                            if (pSVar10 !=
                                                                (
                                                  SphereColliderGizmo_ExtentTick__Array *)0x0) {
                                                    if (pSVar10->max_length < 2)
                                                    goto code_?;
                                                    pSVar11 = pSVar10->vector[1];
                                                    pSVar3 = (this->fields)._targetCollider;
                                                    if (pSVar3 != (SphereCollider *)0x0) {
                                                      pTVar5 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar3,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar5 != (Transform *)0x0) {
                                                        pVVar1 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_forward
                                                                            ((Vector3 *)
                                                                             &stack0xffffff90,
                                                                             pTVar5,(MethodInfo *)
                                                                                     0x0);
                                                        value.y = pVVar1->y;
                                                        fVar4 = pVVar1->z;
                                                        if (pSVar11 !=
                                                            (SphereColliderGizmo_ExtentTick *)0x0) {
                                                          (pSVar11->fields).Normal.x = pVVar1->x;
                                                          (pSVar11->fields).Normal.y = value.y;
                                                          (pSVar11->fields).Normal.z = fVar4;
                                                          pGVar31 = (this->fields)._axialCircleXY;
                                                          if (pGVar31 != (GizmoPlaneSlider3D *)0x0)
                                                          {
                                                            value_05.z = value.x;
                                                            value_05.x = 4.1636914e-29;
                                                            value_05.y = 4.1637348e-29;
                                                            GizmoPlaneSlider3D::
                                                            GizmoPlaneSlider3D_set_Position
                                                                      (pGVar31,value_05,
                                                                       (MethodInfo *)0x0);
                                                            pGVar31 = (this->fields)._axialCircleYZ;
                                                            if (pGVar31 != (GizmoPlaneSlider3D *)0x0
                                                               ) {
                                                              value_06.z = value.x;
                                                              value_06.x = 4.1636914e-29;
                                                              value_06.y = 4.1637348e-29;
                                                              GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_set_Position
                                                                        (pGVar31,value_06,
                                                                         (MethodInfo *)0x0);
                                                              pGVar31 = (this->fields).
                                                                        _axialCircleZX;
                                                              if (pGVar31 !=
                                                                  (GizmoPlaneSlider3D *)0x0) {
                                                                value_07.z = value.x;
                                                                value_07.x = 4.1636914e-29;
                                                                value_07.y = 4.1637348e-29;
                                                                GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_set_Position
                                                                          (pGVar31,value_07,
                                                                           (MethodInfo *)0x0);
                                                                pSVar3 = (this->fields).
                                                                          _targetCollider;
                                                                pGVar31 = (this->fields).
                                                                          _axialCircleXY;
                                                                if (pSVar3 != (SphereCollider *)0x0
                                                                   ) {
                                                                  pTVar5 = 
                                                  UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_transform
                                                            ((Component *)pSVar3,(MethodInfo *)0x0)
                                                  ;
                                                  if (pTVar5 != (Transform *)0x0) {
                                                    pQVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_rotation
                                                                        ((Quaternion *)
                                                                         &stack0xffffff70,pTVar5,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_Rotation
                                                                (pGVar31,*pQVar32,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar3 = (this->fields)._targetCollider;
                                                      pGVar31 = (this->fields)._axialCircleYZ;
                                                      if (pSVar3 != (SphereCollider *)0x0) {
                                                        pTVar5 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pSVar3,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar5 != (Transform *)0x0) {
                                                          pQVar32 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_rotation
                                                                              ((Quaternion *)
                                                                               &stack0xffffff70,
                                                                               pTVar5,(MethodInfo *
                                                                                       )0x0);
                                                          fVar9 = pQVar32->x;
                                                          fVar18 = pQVar32->y;
                                                          fVar33 = pQVar32->z;
                                                          fVar34 = pQVar32->w;
                                                          auVar35._4_8_ = 0;
                                                          auVar35._0_4_ = _UNK_?;
                                                          fVar36 = _UNK_?;
                                                          pQVar32 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Quaternion::
                                                                    Quaternion_Internal_FromEulerRad
                                                                              ((Quaternion *)
                                                                               &stack0xffffffb8,
                                                                               (Vector3)(auVar35 <<
                                                                                        0x20),
                                                                               (MethodInfo *)0x0);
                                                          value.x = pQVar32->y;
                                                          fVar4 = pQVar32->z;
                                                          value.y = pQVar32->w;
                                                          if (pGVar31 != (GizmoPlaneSlider3D *)0x0)
                                                          {
                                                            value_08.y = (value.y * fVar18 +
                                                                          value.x * fVar34 +
                                                                         pQVar32->x * fVar33) -
                                                                         fVar4 * fVar9;
                                                            value_08.x = (value.y * fVar9 +
                                                                          pQVar32->x * fVar34 +
                                                                         fVar4 * fVar18) -
                                                                         value.x * fVar33;
                                                            value_08.z = (value.y * fVar33 +
                                                                          fVar4 * fVar34 +
                                                                         value.x * fVar9) -
                                                                         pQVar32->x * fVar18;
                                                            value_08.w = ((value.y * fVar34 -
                                                                          pQVar32->x * fVar9) -
                                                                         value.x * fVar18) -
                                                                         fVar4 * fVar33;
                                                            GizmoPlaneSlider3D::
                                                            GizmoPlaneSlider3D_set_Rotation
                                                                      (pGVar31,value_08,
                                                                       (MethodInfo *)0x0);
                                                            pSVar3 = (this->fields)._targetCollider
                                                            ;
                                                            pGVar31 = (this->fields)._axialCircleZX;
                                                            if (pSVar3 != (SphereCollider *)0x0) {
                                                              pTVar5 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pSVar3,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar5 != (Transform *)0x0) {
                                                    pQVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_rotation
                                                                        ((Quaternion *)
                                                                         &stack0xffffff70,pTVar5,
                                                                         (MethodInfo *)0x0);
                                                    fVar9 = pQVar32->x;
                                                    fVar18 = pQVar32->y;
                                                    fVar33 = pQVar32->z;
                                                    fVar34 = pQVar32->w;
                                                    euler.y = 0.0;
                                                    euler.z = 0.0;
                                                    euler.x = fVar36;
                                                    pQVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Quaternion::
                                                              Quaternion_Internal_FromEulerRad
                                                                        ((Quaternion *)
                                                                         &stack0xffffffa0,euler,
                                                                         (MethodInfo *)0x0);
                                                    value.x = pQVar32->y;
                                                    fVar4 = pQVar32->z;
                                                    value.y = pQVar32->w;
                                                    if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                      value_09.y = (value.y * fVar18 +
                                                                    value.x * fVar34 +
                                                                   pQVar32->x * fVar33) -
                                                                   fVar4 * fVar9;
                                                      value_09.x = (value.y * fVar9 +
                                                                    pQVar32->x * fVar34 +
                                                                   fVar4 * fVar18) -
                                                                   value.x * fVar33;
                                                      value_09.z = (value.y * fVar33 +
                                                                    fVar4 * fVar34 +
                                                                   value.x * fVar9) -
                                                                   pQVar32->x * fVar18;
                                                      value_09.w = ((value.y * fVar34 -
                                                                    pQVar32->x * fVar9) -
                                                                   value.x * fVar18) -
                                                                   fVar4 * fVar33;
                                                      GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_set_Rotation
                                                                (pGVar31,value_09,(MethodInfo *)0x0)
                                                      ;
                                                      pGVar31 = (this->fields)._axialCircleXY;
                                                      if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar37 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar31,(MethodInfo *)
                                                                                     0x0);
                                                        pSVar38 = (this->fields)._sharedLookAndFeel;
                                                        if ((pSVar38 !=
                                                             (SphereColliderGizmoLookAndFeel *)0x0)
                                                           || (pSVar38 = (this->fields)._lookAndFeel
                                                              , pSVar38 !=
                                                                (SphereColliderGizmoLookAndFeel *)
                                                                0x0)) {
                                                          value.x = (pSVar38->fields)._wireColor.g;
                                                          fVar4 = (pSVar38->fields)._wireColor.b;
                                                          value.y = (pSVar38->fields)._wireColor.a;
                                                          if (pGVar37 !=
                                                              (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                          {
                                                            (pGVar37->fields)._borderColor.r =
                                                                 (pSVar38->fields)._wireColor.r;
                                                            (pGVar37->fields)._borderColor.g =
                                                                 value.x;
                                                            (pGVar37->fields)._borderColor.b =
                                                                 fVar4;
                                                            (pGVar37->fields)._borderColor.a =
                                                                 value.y;
                                                            pGVar31 = (this->fields)._axialCircleYZ;
                                                            if (pGVar31 != (GizmoPlaneSlider3D *)0x0
                                                               ) {
                                                              pGVar37 = GizmoPlaneSlider3D::
                                                                                                                                                
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar31,(MethodInfo *)0x0);
                                                  pSVar38 = (this->fields)._sharedLookAndFeel;
                                                  if ((pSVar38 !=
                                                       (SphereColliderGizmoLookAndFeel *)0x0) ||
                                                     (pSVar38 = (this->fields)._lookAndFeel,
                                                     pSVar38 !=
                                                     (SphereColliderGizmoLookAndFeel *)0x0)) {
                                                    value.x = (pSVar38->fields)._wireColor.g;
                                                    fVar4 = (pSVar38->fields)._wireColor.b;
                                                    value.y = (pSVar38->fields)._wireColor.a;
                                                    if (pGVar37 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      (pGVar37->fields)._borderColor.r =
                                                           (pSVar38->fields)._wireColor.r;
                                                      (pGVar37->fields)._borderColor.g = value.x;
                                                      (pGVar37->fields)._borderColor.b = fVar4;
                                                      (pGVar37->fields)._borderColor.a = value.y;
                                                      pGVar31 = (this->fields)._axialCircleZX;
                                                      if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar37 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar31,(MethodInfo *)
                                                                                     0x0);
                                                        pSVar38 = (this->fields)._sharedLookAndFeel;
                                                        if ((pSVar38 !=
                                                             (SphereColliderGizmoLookAndFeel *)0x0)
                                                           || (pSVar38 = (this->fields)._lookAndFeel
                                                              , pSVar38 !=
                                                                (SphereColliderGizmoLookAndFeel *)
                                                                0x0)) {
                                                          value.x = (pSVar38->fields)._wireColor.g;
                                                          fVar4 = (pSVar38->fields)._wireColor.b;
                                                          value.y = (pSVar38->fields)._wireColor.a;
                                                          if (pGVar37 !=
                                                              (GizmoPlaneSlider3DLookAndFeel *)0x0)
                                                          {
                                                            (pGVar37->fields)._borderColor.r =
                                                                 (pSVar38->fields)._wireColor.r;
                                                            (pGVar37->fields)._borderColor.g =
                                                                 value.x;
                                                            (pGVar37->fields)._borderColor.b =
                                                                 fVar4;
                                                            (pGVar37->fields)._borderColor.a =
                                                                 value.y;
                                                            pGVar31 = (this->fields)._axialCircleXY;
                                                            if (pGVar31 != (GizmoPlaneSlider3D *)0x0
                                                               ) {
                                                              pGVar37 = GizmoPlaneSlider3D::
                                                                                                                                                
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar31,(MethodInfo *)0x0);
                                                  if (pGVar37 !=
                                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                    GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                              (pGVar37,4.1637528e-29,
                                                               (MethodInfo *)0x0);
                                                    pGVar31 = (this->fields)._axialCircleYZ;
                                                    if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar37 = GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_get_LookAndFeel
                                                                          (pGVar31,(MethodInfo *)0x0
                                                                          );
                                                      if (pGVar37 !=
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                        GizmoPlaneSlider3DLookAndFeel::
                                                                                                                
                                                  GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                            (pGVar37,4.1637528e-29,(MethodInfo *)0x0
                                                            );
                                                  pGVar31 = (this->fields)._axialCircleZX;
                                                  if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar37 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar31,(MethodInfo *)0x0);
                                                    if (pGVar37 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                      GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                                (pGVar37,4.1637528e-29,
                                                                 (MethodInfo *)0x0);
                                                      pGVar31 = (this->fields)._axialCircleXY;
                                                      if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                        pGVar37 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar31,(MethodInfo *)
                                                                                     0x0);
                                                        pSVar38 = (this->fields)._sharedLookAndFeel;
                                                        if (((pSVar38 !=
                                                              (SphereColliderGizmoLookAndFeel *)0x0)
                                                            || (pSVar38 = (this->fields).
                                                                          _lookAndFeel,
                                                               pSVar38 !=
                                                               (SphereColliderGizmoLookAndFeel *)0x0
                                                               )) && (pGVar37 !=
                                                                      (GizmoPlaneSlider3DLookAndFeel
                                                                       *)0x0)) {
                                                          GizmoPlaneSlider3DLookAndFeel::
                                                                                                                    
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar37,(pSVar38->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar31 = (this->fields)._axialCircleYZ;
                                                  if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar37 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar31,(MethodInfo *)0x0);
                                                    pSVar38 = (this->fields)._sharedLookAndFeel;
                                                    if (((pSVar38 !=
                                                          (SphereColliderGizmoLookAndFeel *)0x0) ||
                                                        (pSVar38 = (this->fields)._lookAndFeel,
                                                        pSVar38 !=
                                                        (SphereColliderGizmoLookAndFeel *)0x0)) &&
                                                       (pGVar37 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar37,(pSVar38->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar31 = (this->fields)._axialCircleZX;
                                                  if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar37 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar31,(MethodInfo *)0x0);
                                                    pSVar38 = (this->fields)._sharedLookAndFeel;
                                                    if (((pSVar38 !=
                                                          (SphereColliderGizmoLookAndFeel *)0x0) ||
                                                        (pSVar38 = (this->fields)._lookAndFeel,
                                                        pSVar38 !=
                                                        (SphereColliderGizmoLookAndFeel *)0x0)) &&
                                                       (pGVar37 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar37,(pSVar38->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar31 = (this->fields)._axialCircleXY;
                                                  if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                              (pGVar31,(MethodInfo *)0x0);
                                                    pGVar31 = (this->fields)._axialCircleYZ;
                                                    if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                                (pGVar31,(MethodInfo *)0x0);
                                                      pGVar31 = (this->fields)._axialCircleZX;
                                                      if (pGVar31 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_Refresh
                                                                  (pGVar31,(MethodInfo *)0x0);
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
  }
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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
  if (pSVar2 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
    if ((pSVar2->max_length < 3) || (pSVar3 = pSVar2->vector[2], pSVar2->max_length < 4))
    goto code_?;
    pSVar4 = pSVar2->vector[3];
    if ((((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
         (((pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
          (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))) &&
        ((((pPVar7->fields)._priority = 0, pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0 &&
          (pGVar5 = (pSVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
         (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)))) &&
       (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)) {
      (pPVar7->fields)._priority = 0;
      fVar8 = (pSVar3->fields).Position.z;
      uVar9._0_4_ = (pSVar3->fields).Position.x;
      uVar9._4_4_ = (pSVar3->fields).Position.y;
      VVar10 = (pSVar3->fields).Normal;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      point.z = fVar8;
      point.x = (float)(int)uVar9;
      point.y = (float)(int)((ulonglong)uVar9 >> 0x20);
      bVar11 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar10,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        pGVar5 = (pSVar4->fields).Tick;
        if ((pGVar5 != (GizmoCap2D *)0x0) &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
          pGVar5 = (pSVar3->fields).Tick;
code_?:
          pPVar7 = (pGVar6->fields)._hoverPriority2D;
          if (((pGVar5 != (GizmoCap2D *)0x0) &&
              (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
             (pPVar7 != (Priority *)0x0)) {
            Priority::Priority_MakeHigherThan
                      (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
            pSVar2 = (this->fields)._extentTicks;
            if (pSVar2 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
              if (pSVar2->max_length < 6) goto code_?;
              pSVar3 = pSVar2->vector[5];
              pSVar4 = pSVar2->vector[4];
              if (((((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                    (pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                   ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                    ((pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0 &&
                     ((pPVar7->fields)._priority = 2,
                     pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0)))))) &&
                  (pGVar5 = (pSVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                 ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                  (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))) {
                (pPVar7->fields)._priority = 2;
                fVar8 = (pSVar3->fields).Position.z;
                uVar12 = (pSVar3->fields).Position.x;
                uVar13 = (pSVar3->fields).Position.y;
                VVar10.y = (float)uVar13;
                VVar10.x = (float)uVar12;
                uVar14._0_4_ = (pSVar3->fields).Normal.x;
                uVar14._4_4_ = (pSVar3->fields).Normal.y;
                this = (SphereColliderGizmo *)(pSVar3->fields).Normal.z;
                if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                  this = (SphereColliderGizmo *)TypeInfo__RTG__CameraEx;
                  func_?();
                }
                VVar10.z = fVar8;
                pointNormal.z = (float)this;
                pointNormal.x = (float)(int)uVar14;
                pointNormal.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                   (camera,VVar10,pointNormal,(MethodInfo *)0x0);
                if (bVar11 == 0) {
                  pGVar5 = (pSVar4->fields).Tick;
                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                     (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                    pGVar5 = (pSVar3->fields).Tick;
code_?:
                    pPVar7 = (pGVar6->fields)._hoverPriority2D;
                    if (((pGVar5 != (GizmoCap2D *)0x0) &&
                        (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
                       (pPVar7 != (Priority *)0x0)) {
                      Priority::Priority_MakeHigherThan
                                (pPVar7,(pGVar6->fields)._hoverPriority2D,(MethodInfo *)0x0);
                      pSVar2 = (pSVar1->fields)._extentTicks;
                      if (pSVar2 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                        if ((pSVar2->max_length == 0) ||
                           (pSVar3 = pSVar2->vector[0], pSVar2->max_length < 2))
                        goto code_?;
                        pSVar4 = pSVar2->vector[1];
                        if (((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                            ((pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
                             (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0))
                            )) && ((pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                   pPVar7 != (Priority *)0x0 &&
                                   (((((pPVar7->fields)._priority = 4,
                                      pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0 &&
                                      (pGVar5 = (pSVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0
                                      )) && (pGVar6 = (pGVar5->fields)._._handle,
                                            pGVar6 != (GizmoHandle *)0x0)) &&
                                    (pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                    pPVar7 != (Priority *)0x0)))))) {
                          (pPVar7->fields)._priority = 4;
                          fVar8 = (pSVar3->fields).Normal.z;
                          uVar15._0_4_ = (pSVar3->fields).Normal.x;
                          uVar15._4_4_ = (pSVar3->fields).Normal.y;
                          VVar10 = (pSVar3->fields).Position;
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          pointNormal_00.z = fVar8;
                          pointNormal_00.x = (float)(int)uVar15;
                          pointNormal_00.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                          bVar11 = CameraEx::CameraEx_IsPointFacingCamera
                                             (camera,VVar10,pointNormal_00,(MethodInfo *)0x0);
                          if (bVar11 == 0) {
                            pGVar5 = (pSVar4->fields).Tick;
                            if ((pGVar5 != (GizmoCap2D *)0x0) &&
                               (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0
                               )) {
                              pGVar5 = (pSVar3->fields).Tick;
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
                            pGVar5 = (pSVar3->fields).Tick;
                            if ((pGVar5 != (GizmoCap2D *)0x0) &&
                               (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0
                               )) {
                              pGVar5 = (pSVar4->fields).Tick;
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pGVar5 = (pSVar3->fields).Tick;
                  if ((pGVar5 != (GizmoCap2D *)0x0) &&
                     (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
                    pGVar5 = (pSVar4->fields).Tick;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pGVar5 = (pSVar3->fields).Tick;
        if ((pGVar5 != (GizmoCap2D *)0x0) &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) {
          pGVar5 = (pSVar4->fields).Tick;
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_UpdateTickColors
               (SphereColliderGizmo *this,Camera *camera,MethodInfo *method)

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
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_16 = (float)uVar11;
        fStack_17 = (float)uVar12;
        fStack_18 = fVar5;
        if (pSVar14 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
          ppSStack_19 = pSVar14->vector;
          while( true ) {
            if ((int)pSVar14->max_length <= (int)uStack_13) {
              return;
            }
            if (pSVar14->max_length <= uStack_13) break;
            pSVar20 = *ppSStack_19;
            if (pSVar20 == (SphereColliderGizmo_ExtentTick *)0x0) goto code_?;
            this_00 = (this->fields)._._gizmo;
            this_01 = (pSVar20->fields).Tick;
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
              pGStack_24 = (GizmoOverrideColor *)(pSVar20->fields).Position.z;
              uVar25._0_4_ = (pSVar20->fields).Position.x;
              uVar25._4_4_ = (pSVar20->fields).Position.y;
              uVar26._0_4_ = (pSVar20->fields).Normal.x;
              uVar26._4_4_ = (pSVar20->fields).Normal.y;
              fStack_27 = (pSVar20->fields).Normal.z;
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
              pSVar32 = (this->fields)._sharedLookAndFeel;
              if ((pSVar32 == (SphereColliderGizmoLookAndFeel *)0x0) &&
                 (pSVar32 = (this->fields)._lookAndFeel,
                 pSVar32 == (SphereColliderGizmoLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff94,*pCVar30,
                                   fStack_8 * (pSVar32->fields)._tickCullAlphaScale,
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
              pSVar32 = (this->fields)._sharedLookAndFeel;
              if ((pSVar32 == (SphereColliderGizmoLookAndFeel *)0x0) &&
                 (pSVar32 = (this->fields)._lookAndFeel,
                 pSVar32 == (SphereColliderGizmoLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff84,*pCVar30,
                                   fStack_8 * (pSVar32->fields)._tickCullAlphaScale,
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
            VStack_3.x = (pSVar20->fields).Position.x;
            VStack_3.y = (pSVar20->fields).Position.y;
            VStack_3.z = (pSVar20->fields).Position.z;
            isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                              fVar5 * VStack_3.z + fStack_15;
            _bStack_1c = CONCAT31(uStack_36,isVisible);
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,isVisible,(MethodInfo *)0x0);
            uStack_13 = uStack_13 + 1;
            ppSStack_19 = ppSStack_19 + 1;
            pSVar14 = uStack_4._4_4_;
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
  ppSVar2 = &(this->fields)._extentTicks;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  this_00 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(this_00,(MethodInfo *)0x0);
  ppPVar3 = &(this->fields)._sphereBorderPoly;
  *ppPVar3 = this_00;
  func_?(ppPVar3,this_00);
  pSVar4 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pSVar4,(MethodInfo *)0x0);
  ppSVar5 = &(this->fields)._preChangeColliderSnapshot;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  pSVar4 = (SphereColliderSnapshot *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pSVar4,(MethodInfo *)0x0);
  (this->fields)._postChangeColliderSnapshot = pSVar4;
  func_?();
  this_01 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_01,(MethodInfo *)0x0);
  ppGVar6 = &(this->fields)._offsetDrag;
  *ppGVar6 = (GizmoSglAxisOffsetDrag3D *)this_01;
  func_?(ppGVar6,this_01);
  this_02 = (SphereColliderGizmoLookAndFeel *)
            func_?(TypeInfo__RTG__SphereColliderGizmoLookAndFeel);
  SphereColliderGizmoLookAndFeel::SphereColliderGizmoLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  ppSVar7 = &(this->fields)._lookAndFeel;
  *ppSVar7 = this_02;
  func_?(ppSVar7,this_02);
  this_03 = (PointLightGizmo3DSettings *)func_?(TypeInfo__RTG__SphereColliderGizmoSettings)
  ;
  PointLightGizmo3DSettings::PointLightGizmo3DSettings__ctor(this_03,(MethodInfo *)0x0);
  ppSVar8 = &(this->fields)._settings;
  *ppSVar8 = (SphereColliderGizmoSettings *)this_03;
  func_?(ppSVar8,this_03);
  value = (SphereColliderGizmoHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pHVar9 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (pHVar9,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar9 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar9,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar9->fields)._lCtrl = 1;
    (value->fields)._enableSnapping = pHVar9;
    func_?();
    pHVar9 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar9,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar9 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar9,KeyCode__Enum_None,(MethodInfo *)0x0);
      method_00 = &(value->fields)._scaleFromCenter;
      (pHVar9->fields)._lShift = 1;
      *method_00 = pHVar9;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (this->fields)._hotkeys = value;
      func_?();
      GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_get_IsSnapEnabled
               (SphereColliderGizmo *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pSVar1 = (this->fields)._sharedHotkeys;
  if (((pSVar1 != (SphereColliderGizmoHotkeys *)0x0) ||
      (pSVar1 = (this->fields)._hotkeys, pSVar1 != (SphereColliderGizmoHotkeys *)0x0)) &&
     (this_00 = (pSVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
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
  ppSVar1 = &(this->fields)._sharedLookAndFeel;
  *ppSVar1 = value;
  func_?(ppSVar1,value);
  SphereColliderGizmo_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

