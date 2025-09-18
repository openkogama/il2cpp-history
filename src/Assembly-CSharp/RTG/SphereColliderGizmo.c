
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
  iVar1 = handleId;
  bVar2 = PointLightGizmo3D::PointLightGizmo3D_OwnsHandle
                    ((PointLightGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
  pSVar6 = (this->fields)._targetCollider;
  if (pSVar6 == (SphereCollider *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                     (pSVar6,(MethodInfo *)0x0);
  fVar4 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._leftTick;
  if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
  pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar10) {
    pSVar6 = (this->fields)._targetCollider;
    if (pSVar6 == (SphereCollider *)0x0) goto code_?;
    uVar11 = CONCAT44(&UNK_?,pGVar9);
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar6,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    __return_storage_ptr__ = (Vector3 *)0x0;
    this_00 = (GizmoCap2D *)&UNK_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
    handleId = (int32_t)(fVar4 * fVar5);
    goto code_?;
  }
  this_00 = (this->fields)._rightTick;
  if (this_00 == (GizmoCap2D *)0x0) goto code_?;
  uVar11 = CONCAT44(&UNK_?,pGVar9);
  pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar10) {
    pSVar6 = (this->fields)._targetCollider;
    if (pSVar6 == (SphereCollider *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar6,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    handleId = 0;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (__return_storage_ptr__,pTVar12,(MethodInfo *)0x0);
  }
  else {
    pGVar9 = (this->fields)._topTick;
    if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
    pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar10) {
      pGVar9 = (this->fields)._bottomTick;
      if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
      __return_storage_ptr__ = (Vector3 *)&UNK_?;
      pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar10) {
        pSVar6 = (this->fields)._targetCollider;
        if (pSVar6 == (SphereCollider *)0x0) goto code_?;
        handleId = (int32_t)&UNK_?;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar6,(MethodInfo *)0x0);
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
      }
      else {
        pGVar9 = (this->fields)._frontTick;
        if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
        handleId = (int32_t)&UNK_?;
        pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                  AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
        if ((void *)iVar1 != pvVar10) {
          pGVar9 = (this->fields)._backTick;
          if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
          pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
          if ((void *)iVar1 != pvVar10) goto code_?;
          pSVar6 = (this->fields)._targetCollider;
          if (pSVar6 == (SphereCollider *)0x0) goto code_?;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar6,(MethodInfo *)0x0);
          if (pTVar12 == (Transform *)0x0) goto code_?;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
          goto code_?;
        }
        pSVar6 = (this->fields)._targetCollider;
        if (pSVar6 == (SphereCollider *)0x0) goto code_?;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar6,(MethodInfo *)0x0);
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
      }
code_?:
      uVar13 = pVVar8->x;
      uVar14 = pVVar8->y;
      fVar15 = (float)uVar11 + (float)uVar13 * (float)handleId;
      fVar5 = (float)this_00 + pVVar8->z * (float)handleId;
      fVar4 = (float)((ulonglong)uVar11 >> 0x20) + (float)uVar14 * (float)handleId;
      goto code_?;
    }
    pSVar6 = (this->fields)._targetCollider;
    if (pSVar6 == (SphereCollider *)0x0) goto code_?;
    __return_storage_ptr__ = (Vector3 *)&UNK_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar6,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    handleId = (int32_t)&stack0xffffffd8;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)handleId,pTVar12,(MethodInfo *)0x0);
  }
code_?:
  uVar16 = pVVar8->x;
  uVar17 = pVVar8->y;
  fVar15 = (float)uVar11 - (float)uVar16 * (float)handleId;
  fVar5 = (float)this_00 - pVVar8->z * (float)handleId;
  fVar4 = (float)((ulonglong)uVar11 >> 0x20) - (float)uVar17 * (float)handleId;
code_?:
  __return_storage_ptr__->x = fVar15;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
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
                                              PointLightGizmo3D::
                                              PointLightGizmo3D_SetupSharedLookAndFeel
                                                        ((PointLightGizmo3D *)pGVar17,
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
  bVar1 = PointLightGizmo3D::PointLightGizmo3D_OwnsHandle
                     ((PointLightGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pVVar2 = SphereColliderGizmo_CalcWorldCenter((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar2->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar3;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar4;
  if ((this->fields)._sharedSettings == (SphereColliderGizmoSettings *)0x0) {
    pSVar5 = (this->fields)._settings;
    if (pSVar5 == (SphereColliderGizmoSettings *)0x0) goto code_?;
  }
  else {
    pSVar5 = (this->fields)._sharedSettings;
  }
  (this->fields)._offsetDragWorkData.SnapStep = (pSVar5->fields)._radiusSnapStep;
  pGVar6 = (this->fields)._leftTick;
  if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
  pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar7) {
    pSVar8 = (this->fields)._targetCollider;
    if ((pSVar8 == (SphereCollider *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&fStack_10,pTVar9,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar6 = (this->fields)._rightTick;
  if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
  pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar7) {
    pSVar8 = (this->fields)._targetCollider;
    if ((pSVar8 == (SphereCollider *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&fStack_10,pTVar9,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
    (this->fields)._offsetDragWorkData.Axis.y = fVar3;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar4;
  }
  else {
    pGVar6 = (this->fields)._topTick;
    if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
    pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar7) {
      pSVar8 = (this->fields)._targetCollider;
      if ((pSVar8 == (SphereCollider *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
      goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&fStack_10,pTVar9,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar3;
      goto code_?;
    }
    pGVar6 = (this->fields)._bottomTick;
    if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
    pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar7) {
      pSVar8 = (this->fields)._targetCollider;
      if ((pSVar8 == (SphereCollider *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
      goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&fStack_10,pTVar9,(MethodInfo *)0x0);
code_?:
      uVar11 = pVVar2->x;
      uVar12 = pVVar2->y;
      uVar13 = uVar12 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar4 = (float)((uint)pVVar2->z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)(uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar13;
      goto code_?;
    }
    pGVar6 = (this->fields)._frontTick;
    if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
    pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar7) {
      pSVar8 = (this->fields)._targetCollider;
      if ((pSVar8 == (SphereCollider *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
      goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&fStack_10,pTVar9,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar6 = (this->fields)._backTick;
    if (pGVar6 == (GizmoCap2D *)0x0) goto code_?;
    pvVar7 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar6,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar7) {
      pSVar8 = (this->fields)._targetCollider;
      if ((pSVar8 == (SphereCollider *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pSVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
      goto code_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xfffffff0,pTVar9,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar3;
      goto code_?;
    }
  }
  fVar14 = (this->fields)._offsetDragWorkData.DragOrigin.x;
  fStack_10 = (this->fields)._offsetDragWorkData.DragOrigin.y;
  puStack_15 = (undefined *)(this->fields)._offsetDragWorkData.DragOrigin.z;
  fVar16 = (this->fields)._offsetDragWorkData.Axis.x;
  pGVar17 = (this->fields)._offsetDrag;
  fVar4 = (this->fields)._offsetDragWorkData.Axis.y;
  uVar18 = (this->fields)._offsetDragWorkData.Axis.z;
  fVar3 = (this->fields)._offsetDragWorkData.SnapStep;
  if (pGVar17 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    cVar19 = (*(code *)(pGVar17->klass->vtable).get_IsActive_1.method)();
    if (cVar19 == '\0') {
      (pGVar17->fields)._workData.DragOrigin.x = fVar14;
      (pGVar17->fields)._workData.DragOrigin.y = fStack_10;
      (pGVar17->fields)._workData.DragOrigin.z = (float)puStack_15;
      (pGVar17->fields)._workData.Axis.x = fVar16;
      (pGVar17->fields)._workData.Axis.y = fVar4;
      (pGVar17->fields)._workData.Axis.z = (float)uVar18;
      (pGVar17->fields)._workData.SnapStep = fVar3;
    }
    return;
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  bVar1 = PointLightGizmo3D::PointLightGizmo3D_OwnsHandle
                    ((PointLightGizmo3D *)this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  method_02 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
  if (method_02 != (MethodInfo *)0x0) {
    SphereColliderSnapshot::SphereColliderSnapshot_Snapshot
              ((SphereColliderSnapshot *)method_02,(this->fields)._targetCollider,(MethodInfo *)0x0)
    ;
    method_00 = (MethodInfo *)(this->fields)._preChangeColliderSnapshot;
    pSVar2 = (this->fields)._postChangeColliderSnapshot;
    value = (Object *)func_?(TypeInfo__RTG__SphereColliderChangedAction);
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
      value[1].klass = value_00;
      func_?(value + 1,value_00);
      value_01 = (Object *)func_?(TypeInfo__RTG__SphereColliderSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (pSVar2 != (SphereColliderSnapshot *)0x0) {
        value_01[1].klass = (Object__Class *)(pSVar2->fields)._sphereCollider;
        func_?(value_01 + 1);
        pMVar5 = (MonitorData *)(pSVar2->fields)._localCenter.z;
        *(undefined8 *)&value_01[1].monitor = *(undefined8 *)&(pSVar2->fields)._localCenter;
        value_01[2].monitor = pMVar5;
        value_01[3].klass = (Object__Class *)(pSVar2->fields)._localRadius;
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

void Assembly-CSharp.dll::RTG::SphereColliderGizmo::SphereColliderGizmo_OnGizmoDragUpdate
               (SphereColliderGizmo *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = SphereColliderGizmo_IsTargetReady(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = PointLightGizmo3D::PointLightGizmo3D_OwnsHandle
                         ((PointLightGizmo3D *)this,handleId,(MethodInfo *)0x0), bVar1 == 0)) {
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
      fVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::SphereCollider_get_radius
                         (pSVar5,(MethodInfo *)0x0);
      fVar7 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
      if ((this->fields)._._gizmo != (Gizmo *)0x0) {
        fVar8 = (float10)func_?();
        pGVar9 = (this->fields)._._gizmo;
        if (pGVar9 != (Gizmo *)0x0) {
          uVar10 = (pGVar9->fields)._dragInfo._relativeOffset.x;
          uVar11 = (pGVar9->fields)._dragInfo._relativeOffset.y;
          pGVar2 = (this->fields)._offsetDrag;
          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
            uVar12 = (pGVar2->fields)._workData.Axis.x;
            uVar13 = (pGVar2->fields)._workData.Axis.y;
            fVar14 = _UNK_?;
            if (0.0 <= (float)uVar13 * (float)uVar11 + (float)uVar12 * (float)uVar10 +
                       (pGVar2->fields)._workData.Axis.z *
                       (pGVar9->fields)._dragInfo._relativeOffset.z) {
              fVar14 = _UNK_?;
            }
            fVar7 = fVar14 * (float)fVar8 + fVar7 * fVar6;
            fVar6 = 0.0;
            if (0.0 <= fVar7) {
              fVar6 = fVar7;
            }
            pVVar15 = SphereColliderGizmo_CalcScalePivot
                                ((Vector3 *)&stack0xffffffdc,this,handleId,(MethodInfo *)0x0);
            uVar16 = pVVar15->x;
            uVar17 = pVVar15->y;
            pGVar2 = (this->fields)._offsetDrag;
            if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
              uVar18 = (pGVar2->fields)._workData.Axis.x;
              uVar19 = (pGVar2->fields)._workData.Axis.y;
              fVar7 = pVVar15->z + (pGVar2->fields)._workData.Axis.z * fVar6;
              uVar20._4_4_ = (float)uVar17 + (float)uVar19 * fVar6;
              uVar20._0_4_ = (float)uVar16 + (float)uVar18 * fVar6;
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
                  position.z = fVar7;
                  position.x = (float)uVar20;
                  position.y = SUB84(uVar20,4);
                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_InverseTransformPoint
                                      ((Vector3 *)&stack0xffffffdc,this_00,position,
                                       (MethodInfo *)0x0);
                  UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                  SphereCollider_set_center(pSVar5,*pVVar15,(MethodInfo *)0x0);
                }
                pSVar5 = (this->fields)._targetCollider;
                fVar7 = SphereColliderGizmo_CalcMaxTransformAbsScale(this,(MethodInfo *)0x0);
                if (pSVar5 != (SphereCollider *)0x0) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::SphereCollider::
                  SphereCollider_set_radius(pSVar5,fVar6 / fVar7,(MethodInfo *)0x0);
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    pVVar3 = SphereColliderGizmo_CalcWorldCenter
                        ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->x;
    uStack_5 = pVVar3->y;
    fVar6 = pVVar3->z;
    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_02 = (GizmoLineMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
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
            pPVar11 = pPVar8->klass;
            pIStack12 = (pPVar11->vtable).ContainsPoint.methodPtr;
            (*(code *)(pPVar11->vtable).RenderBorder.method)();
            pGVar13 = (this->fields)._axialCircleXY;
            if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
              pGVar14 = pGVar13->klass;
              pIStack12 = (pGVar14->vtable).OnVisibilityStateChanged.methodPtr;
              (*(code *)(pGVar14->vtable).Render_1.method)();
              pGVar13 = (this->fields)._axialCircleYZ;
              if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
                pGVar14 = pGVar13->klass;
                pIStack12 = (pGVar14->vtable).OnVisibilityStateChanged.methodPtr;
                (*(code *)(pGVar14->vtable).Render_1.method)();
                pGVar13 = (this->fields)._axialCircleZX;
                if (pGVar13 != (GizmoPlaneSlider3D *)0x0) {
                  pGVar14 = pGVar13->klass;
                  pIStack12 = (pGVar14->vtable).OnVisibilityStateChanged.methodPtr;
                  (*(code *)(pGVar14->vtable).Render_1.method)();
                  pGVar15 = (this->fields)._leftTick;
                  if (pGVar15 != (GizmoCap2D *)0x0) {
                    pGVar16 = pGVar15->klass;
                    pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                    (*(code *)(pGVar16->vtable).Render_1.method)();
                    pGVar15 = (this->fields)._rightTick;
                    if (pGVar15 != (GizmoCap2D *)0x0) {
                      pGVar16 = pGVar15->klass;
                      pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                      (*(code *)(pGVar16->vtable).Render_1.method)();
                      pGVar15 = (this->fields)._topTick;
                      if (pGVar15 != (GizmoCap2D *)0x0) {
                        pGVar16 = pGVar15->klass;
                        pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                        (*(code *)(pGVar16->vtable).Render_1.method)();
                        pGVar15 = (this->fields)._bottomTick;
                        if (pGVar15 != (GizmoCap2D *)0x0) {
                          pGVar16 = pGVar15->klass;
                          pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                          (*(code *)(pGVar16->vtable).Render_1.method)();
                          pGVar15 = (this->fields)._frontTick;
                          if (pGVar15 != (GizmoCap2D *)0x0) {
                            pGVar16 = pGVar15->klass;
                            pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                            (*(code *)(pGVar16->vtable).Render_1.method)();
                            pGVar15 = (this->fields)._backTick;
                            if (pGVar15 != (GizmoCap2D *)0x0) {
                              pGVar16 = pGVar15->klass;
                              pIStack12 = (pGVar16->vtable).OnVisibilityStateChanged.methodPtr;
                              (*(code *)(pGVar16->vtable).Render_1.method)();
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
                  fVar6 = pVVar2->z * fVar6 + 4.2019187e-29;
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
                      fVar6 = pVVar20->z * value.x + 4.2019187e-29;
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
                          fVar6 = 4.2019187e-29 - pVVar20->z * value.x;
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
                              fVar6 = 4.2019187e-29 - pVVar20->z * value.x;
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
                                  fVar6 = pVVar20->z * value.x + 4.2019187e-29;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._extentTicks;
  if (pSVar1 == (SphereColliderGizmo_ExtentTick__Array *)0x0) goto code_?;
  if (pSVar1->max_length < 3) goto code_?;
  pSVar2 = (this->fields)._extentTicks;
  pSVar3 = pSVar1->vector[2];
  if (pSVar2->max_length < 4) goto code_?;
  pSVar4 = pSVar2->vector[3];
  if ((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
     (pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) {
    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
              XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
    if ((pSVar6 != (String *)0x0) &&
       (((pSVar6->fields)._stringLength = 0, pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0 &&
        (pGVar5 = (pSVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)))) {
      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
      if (pSVar6 != (String *)0x0) {
        (pSVar6->fields)._stringLength = 0;
        VVar7 = (pSVar3->fields).Position;
        VVar8 = (pSVar3->fields).Normal;
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__CameraEx);
        }
        bVar9 = CameraEx::CameraEx_IsPointFacingCamera(camera,VVar7,VVar8,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          pGVar5 = (pSVar4->fields).Tick;
          if (pGVar5 != (GizmoCap2D *)0x0) {
            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                      XDocumentTypeWrapper_get_System
                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
            pGVar5 = (pSVar3->fields).Tick;
            if (pGVar5 != (GizmoCap2D *)0x0) {
              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                        XDocumentTypeWrapper_get_System
                                  ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
code_?:
              if (pSVar6 != (String *)0x0) {
                Priority::Priority_MakeHigherThan
                          ((Priority *)pSVar6,(Priority *)pSVar10,(MethodInfo *)0x0);
                pSVar1 = (this->fields)._extentTicks;
                if (pSVar1 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                  if (pSVar1->max_length < 6) goto code_?;
                  pSVar2 = (this->fields)._extentTicks;
                  pSVar3 = pSVar1->vector[5];
                  if (pSVar2->max_length < 5) goto code_?;
                  pSVar4 = pSVar2->vector[4];
                  if ((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                     (pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) {
                    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                              XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                        ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                    if ((pSVar6 != (String *)0x0) &&
                       (((pSVar6->fields)._stringLength = 2,
                        pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0 &&
                        (pGVar5 = (pSVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)))) {
                      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                          ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                      if (pSVar6 != (String *)0x0) {
                        (pSVar6->fields)._stringLength = 2;
                        VVar7 = (pSVar3->fields).Position;
                        uVar11._0_4_ = (pSVar3->fields).Normal.x;
                        uVar11._4_4_ = (pSVar3->fields).Normal.y;
                        fVar12 = (pSVar3->fields).Normal.z;
                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__RTG__CameraEx);
                        }
                        VVar8.z = fVar12;
                        VVar8.x = (float)(int)uVar11;
                        VVar8.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                        bVar9 = CameraEx::CameraEx_IsPointFacingCamera
                                          (camera,VVar7,VVar8,(MethodInfo *)0x0);
                        if (bVar9 == 0) {
                          pGVar5 = (pSVar4->fields).Tick;
                          if (pGVar5 != (GizmoCap2D *)0x0) {
                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                      XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                            pGVar5 = (pSVar3->fields).Tick;
code_?:
                            if (pGVar5 != (GizmoCap2D *)0x0) {
                              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                        XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                  ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0
                                                  );
                              if (pSVar6 != (String *)0x0) {
                                Priority::Priority_MakeHigherThan
                                          ((Priority *)pSVar6,(Priority *)pSVar10,(MethodInfo *)0x0
                                          );
                                pSVar1 = (this->fields)._extentTicks;
                                if (pSVar1 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
                                  if (pSVar1->max_length == 0) goto code_?;
                                  pSVar2 = (this->fields)._extentTicks;
                                  pSVar3 = pSVar1->vector[0];
                                  if (pSVar2->max_length < 2) goto code_?;
                                  pSVar4 = pSVar2->vector[1];
                                  if ((pSVar3 != (SphereColliderGizmo_ExtentTick *)0x0) &&
                                     (pGVar5 = (pSVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)
                                     ) {
                                    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                              XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                        ((XDocumentTypeWrapper *)pGVar5,
                                                         (MethodInfo *)0x0);
                                    if ((pSVar6 != (String *)0x0) &&
                                       (((pSVar6->fields)._stringLength = 4,
                                        pSVar4 != (SphereColliderGizmo_ExtentTick *)0x0 &&
                                        (pGVar5 = (pSVar4->fields).Tick,
                                        pGVar5 != (GizmoCap2D *)0x0)))) {
                                      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                                XDocumentTypeWrapper::
                                                XDocumentTypeWrapper_get_System
                                                          ((XDocumentTypeWrapper *)pGVar5,
                                                           (MethodInfo *)0x0);
                                      if (pSVar6 != (String *)0x0) {
                                        (pSVar6->fields)._stringLength = 4;
                                        uVar13._0_4_ = (pSVar3->fields).Position.x;
                                        uVar13._4_4_ = (pSVar3->fields).Position.y;
                                        VVar7 = (pSVar3->fields).Normal;
                                        fVar12 = (pSVar3->fields).Position.z;
                                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor
                                            == 0) {
                                          uVar13 = CONCAT44(uVar13._4_4_,TypeInfo__RTG__CameraEx);
                                          func_?(TypeInfo__RTG__CameraEx,uVar13._4_4_);
                                        }
                                        point.z = fVar12;
                                        point.x = (float)(int)uVar13;
                                        point.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                                        bVar9 = CameraEx::CameraEx_IsPointFacingCamera
                                                          (camera,point,VVar7,(MethodInfo *)0x0);
                                        if (bVar9 == 0) {
                                          pGVar5 = (pSVar4->fields).Tick;
                                          if (pGVar5 != (GizmoCap2D *)0x0) {
                                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                      Converters::XDocumentTypeWrapper::
                                                      XDocumentTypeWrapper_get_System
                                                                ((XDocumentTypeWrapper *)pGVar5,
                                                                 (MethodInfo *)0x0);
                                            pGVar5 = (pSVar3->fields).Tick;
                                            if (pGVar5 != (GizmoCap2D *)0x0) {
                                              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                        Converters::XDocumentTypeWrapper::
                                                        XDocumentTypeWrapper_get_System
                                                                  ((XDocumentTypeWrapper *)pGVar5,
                                                                   (MethodInfo *)0x0);
                                              if (pSVar6 != (String *)0x0) {
                                                Priority::Priority_MakeHigherThan
                                                          ((Priority *)pSVar6,(Priority *)pSVar10,
                                                           (MethodInfo *)0x0);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          pGVar5 = (pSVar3->fields).Tick;
                                          if (pGVar5 != (GizmoCap2D *)0x0) {
                                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                      Converters::XDocumentTypeWrapper::
                                                      XDocumentTypeWrapper_get_System
                                                                ((XDocumentTypeWrapper *)pGVar5,
                                                                 (MethodInfo *)0x0);
                                            pGVar5 = (pSVar4->fields).Tick;
                                            if (pGVar5 != (GizmoCap2D *)0x0) {
                                              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                        Converters::XDocumentTypeWrapper::
                                                        XDocumentTypeWrapper_get_System
                                                                  ((XDocumentTypeWrapper *)pGVar5,
                                                                   (MethodInfo *)0x0);
                                              if (pSVar6 != (String *)0x0) {
                                                Priority::Priority_MakeHigherThan
                                                          ((Priority *)pSVar6,(Priority *)pSVar10,
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
                        else {
                          pGVar5 = (pSVar3->fields).Tick;
                          if (pGVar5 != (GizmoCap2D *)0x0) {
                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                      XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                            pGVar5 = (pSVar4->fields).Tick;
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
        else {
          pGVar5 = (pSVar3->fields).Tick;
          if (pGVar5 != (GizmoCap2D *)0x0) {
            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                      XDocumentTypeWrapper_get_System
                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
            pGVar5 = (pSVar4->fields).Tick;
            if (pGVar5 != (GizmoCap2D *)0x0) {
              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                        XDocumentTypeWrapper_get_System
                                  ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
                        ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
    VVar3 = *pVVar2;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
      uVar4 = pVVar2->x;
      uVar5 = pVVar2->y;
      fVar6 = pVVar2->z;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffb0,VVar3,(MethodInfo *)0x0);
      fVar7 = pVVar2->x;
      fVar8 = pVVar2->y;
      fVar9 = pVVar2->z;
      uStack_10 = 0;
      pSVar11 = (this->fields)._extentTicks;
      fVar6 = (float)((uint)((float)uVar5 * fVar8 + (float)uVar4 * fVar7 + fVar6 * fVar9) ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      if (pSVar11 != (SphereColliderGizmo_ExtentTick__Array *)0x0) {
        ppSVar12 = pSVar11->vector;
        do {
          if ((int)pSVar11->max_length <= (int)uStack_10) {
            return;
          }
          if (pSVar11->max_length <= uStack_10) goto code_?;
          pSVar13 = *ppSVar12;
          if (pSVar13 == (SphereColliderGizmo_ExtentTick *)0x0) break;
          this_00 = (pSVar13->fields).Tick;
          pGVar14 = (this->fields)._._gizmo;
          if ((pGVar14 == (Gizmo *)0x0) ||
             (pvVar15 = (void *)(pGVar14->fields)._hoverInfo._handleId, this_00 == (GizmoCap2D *)0x0)
             ) break;
          pvVar16 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
          if (pvVar15 == pvVar16) {
code_?:
            pGVar17 = (this_00->fields)._overrideFillColor;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._isActive = 0;
            pGVar17 = (this_00->fields)._overrideBorderColor;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._isActive = 0;
          }
          else {
            VVar3 = (pSVar13->fields).Position;
            pointNormal = (pSVar13->fields).Normal;
            if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__CameraEx);
            }
            bVar18 = CameraEx::CameraEx_IsPointFacingCamera
                               (camera,VVar3,pointNormal,(MethodInfo *)0x0);
            if (bVar18 != 0) goto code_?;
            pGVar17 = (this_00->fields)._overrideFillColor;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._isActive = 1;
            pGVar17 = (this_00->fields)._overrideBorderColor;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._isActive = 1;
            pGVar19 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar19 == (GizmoCap2DLookAndFeel *)0x0) break;
            pGVar17 = (this_00->fields)._overrideFillColor;
            if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
              pSVar20 = (this->fields)._lookAndFeel;
              if (pSVar20 == (SphereColliderGizmoLookAndFeel *)0x0) break;
            }
            else {
              pSVar20 = (this->fields)._sharedLookAndFeel;
            }
            pCVar21 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar19->fields)._color,
                                 (pGVar19->fields)._color.a * (pSVar20->fields)._tickCullAlphaScale,
                                 (MethodInfo *)0x0);
            fVar7 = pCVar21->g;
            fVar8 = pCVar21->b;
            fVar9 = pCVar21->a;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._color.r = pCVar21->r;
            (pGVar17->fields)._color.g = fVar7;
            (pGVar17->fields)._color.b = fVar8;
            (pGVar17->fields)._color.a = fVar9;
            pGVar19 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar19 == (GizmoCap2DLookAndFeel *)0x0) break;
            pGVar17 = (this_00->fields)._overrideBorderColor;
            if ((this->fields)._sharedLookAndFeel == (SphereColliderGizmoLookAndFeel *)0x0) {
              pSVar20 = (this->fields)._lookAndFeel;
              if (pSVar20 == (SphereColliderGizmoLookAndFeel *)0x0) break;
            }
            else {
              pSVar20 = (this->fields)._sharedLookAndFeel;
            }
            fVar7 = (pGVar19->fields)._borderColor.g;
            fVar8 = (pGVar19->fields)._borderColor.b;
            fVar9 = (pGVar19->fields)._borderColor.a;
            pCVar21 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar19->fields)._borderColor,
                                 (pGVar19->fields)._borderColor.a *
                                 (pSVar20->fields)._tickCullAlphaScale,(MethodInfo *)0x0);
            fVar22 = pCVar21->g;
            fVar23 = pCVar21->b;
            fVar24 = pCVar21->a;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._color.r = pCVar21->r;
            (pGVar17->fields)._color.g = fVar22;
            (pGVar17->fields)._color.b = fVar23;
            (pGVar17->fields)._color.a = fVar24;
          }
          uVar25 = (pSVar13->fields).Position.x;
          uVar26 = (pSVar13->fields).Position.y;
          GizmoCap::GizmoCap_SetVisible
                    ((GizmoCap *)this_00,
                     0.0 < fVar8 * (float)uVar26 + fVar7 * (float)uVar25 +
                           fVar9 * (pSVar13->fields).Position.z + fVar6,(MethodInfo *)0x0);
          uStack_10 = uStack_10 + 1;
          ppSVar12 = ppSVar12 + 1;
        } while( true );
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  pSVar2 = TypeInfo__RTG__SphereColliderSnapshot;
  pSVar3 = (SphereColliderSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pSVar2);
  (this->fields)._preChangeColliderSnapshot = pSVar3;
  func_?(&(this->fields)._preChangeColliderSnapshot,pSVar3);
  pSVar2 = TypeInfo__RTG__SphereColliderSnapshot;
  pSVar3 = (SphereColliderSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pSVar2);
  (this->fields)._postChangeColliderSnapshot = pSVar3;
  func_?();
  this_01 = (GizmoSglAxisOffsetDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  (this_01->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_01,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = this_01;
  func_?(&(this->fields)._offsetDrag,this_01);
  this_02 = (SphereColliderGizmoLookAndFeel *)
            func_?(TypeInfo__RTG__SphereColliderGizmoLookAndFeel);
  SphereColliderGizmoLookAndFeel::SphereColliderGizmoLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  method_00 = TypeInfo__RTG__SphereColliderGizmoSettings;
  value = (SphereColliderGizmoSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._settings = value;
  func_?(&(this->fields)._settings,value);
  value_00 = (SphereColliderGizmoHotkeys *)func_?();
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
      (this->fields)._._isEnabled = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields)._hotkeys);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

