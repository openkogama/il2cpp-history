
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
    XVar2 = System.Xml.dll::System::Xml::Schema::Datatype_hexBinary::Datatype_hexBinary_get_TypeCode
                      ((Datatype_hexBinary *)0x0,(MethodInfo *)this);
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
    method_00 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor(pGVar3,pGVar1,XVar2,(MethodInfo *)0x0);
    ppGVar4 = &(this->fields)._backTick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if ((GizmoCap3D *)*ppGVar4 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar4,(IGizmoDragSession *)(this->fields)._offsetDrag,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    iVar6 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_SizeOf_31((MethodInfo *)0x0);
    this_00 = TypeInfo__RTG__GizmoCap2D;
    pIVar7 = (Il2CppClass *)func_?();
    method_01 = (MethodInfo *)&UNK_?;
    GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar7,pGVar1,iVar6,(MethodInfo *)0x0);
    ppIVar8 = &(this_00->_0).parent;
    *ppIVar8 = pIVar7;
    func_?(ppIVar8);
    if (*ppIVar8 == (Il2CppClass *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppIVar8,(IGizmoDragSession *)this_00->static_fields,(MethodInfo *)0x0
              );
    pIVar9 = (this_00->_0).generic_class;
    pOVar10 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar10,ExceptionArgument__Enum_obj,method_00);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar10 != (Object *)0x0) {
      iVar11 = func_?(pOVar10);
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar9->cached_class < (Il2CppClass *)0x3) goto code_?;
    ppIVar12 = &pIVar9[1].context.method_inst;
    *ppIVar12 = (Il2CppGenericInst *)pOVar10;
    func_?(ppIVar12);
    pIVar9 = (this_00->_0).generic_class;
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9->cached_class < (Il2CppClass *)0x3) goto code_?;
    pIVar13 = pIVar9[1].context.method_inst;
    if (pIVar13 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar13 = pIVar13 + 4;
    pIVar13->type_argc = (uint32_t)(this_00->_0).castClass;
    func_?(pIVar13);
    pIVar9 = (this_00->_0).generic_class;
    pIVar7 = (Il2CppClass *)func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar7,ExceptionArgument__Enum_obj,method_01);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar7 != (Il2CppClass *)0x0) {
      iVar11 = func_?(pIVar7);
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar9->cached_class < (Il2CppClass *)0x4) goto code_?;
    pIVar9[1].cached_class = pIVar7;
    func_?(&pIVar9[1].cached_class);
    pIVar9 = (this_00->_0).generic_class;
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9->cached_class < (Il2CppClass *)0x4) goto code_?;
    if (pIVar9[1].cached_class == (Il2CppClass *)0x0) goto code_?;
    ppIVar8 = &(pIVar9[1].cached_class)->element_class;
    *ppIVar8 = (Il2CppClass *)(this_00->_0).this_arg.data;
    func_?(ppIVar8);
    pIVar9 = (this_00->_0).generic_class;
    pOVar10 = (Object *)func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar10,ExceptionArgument__Enum_obj,method_01);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar10 != (Object *)0x0) {
      iVar11 = func_?(pOVar10);
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar9->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar9[2].context.class_inst = (Il2CppGenericInst *)pOVar10;
    func_?(&pIVar9[2].context);
    pIVar9 = (this_00->_0).generic_class;
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9->cached_class < (Il2CppClass *)0x6) goto code_?;
    pIVar13 = pIVar9[2].context.class_inst;
    if (pIVar13 == (Il2CppGenericInst *)0x0) goto code_?;
    pIVar13 = pIVar13 + 4;
    pIVar13->type_argc = *(uint32_t *)&(this_00->_0).this_arg.attrs;
    func_?(pIVar13);
    pIVar9 = (this_00->_0).generic_class;
    pIVar14 = (Il2CppType *)func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar14,ExceptionArgument__Enum_obj,method_01);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar14 != (Il2CppType *)0x0) {
      iVar11 = func_?(pIVar14);
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar9->cached_class < (Il2CppClass *)0x5) goto code_?;
    pIVar9[2].type = pIVar14;
    func_?(pIVar9 + 2);
    pIVar9 = (this_00->_0).generic_class;
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9->cached_class < (Il2CppClass *)0x5) goto code_?;
    if (pIVar9[2].type == (Il2CppType *)0x0) goto code_?;
    pIVar14 = pIVar9[2].type + 4;
    pIVar14->data = (_union_86)(this_00->_0).declaringType;
    func_?(pIVar14);
    pIVar9 = (this_00->_0).generic_class;
    pIVar14 = (Il2CppType *)func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar14,ExceptionArgument__Enum_obj,method_01);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar14 != (Il2CppType *)0x0) {
      iVar11 = func_?(pIVar14);
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar9->cached_class == (Il2CppClass *)0x0) goto code_?;
    pIVar9[1].type = pIVar14;
    func_?(pIVar9 + 1);
    pIVar9 = (this_00->_0).generic_class;
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pIVar9->cached_class == (Il2CppClass *)0x0) goto code_?;
    if (pIVar9[1].type == (Il2CppType *)0x0) goto code_?;
    pIVar14 = pIVar9[1].type + 4;
    pIVar14->data = (_union_86)(this_00->_0).parent;
    func_?(pIVar14);
    pIVar9 = (this_00->_0).generic_class;
    pOVar10 = (Object *)func_?(TypeInfo__RTG__BoxColliderGizmo3D__FaceTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar10,ExceptionArgument__Enum_obj,method_01);
    if (pIVar9 == (Il2CppGenericClass *)0x0) goto code_?;
    if (pOVar10 == (Object *)0x0) {
code_?:
      if (pIVar9->cached_class < (Il2CppClass *)0x2) goto code_?;
      pIVar9[1].context.class_inst = (Il2CppGenericInst *)pOVar10;
      func_?(&pIVar9[1].context);
      pIVar9 = (this_00->_0).generic_class;
      if (pIVar9 != (Il2CppGenericClass *)0x0) {
        if (pIVar9->cached_class < (Il2CppClass *)0x2) goto code_?;
        pIVar13 = pIVar9[1].context.class_inst;
        if (pIVar13 != (Il2CppGenericInst *)0x0) {
          pIVar13 = pIVar13 + 4;
          pIVar13->type_argc = (uint32_t)(this_00->_0).element_class;
          func_?(pIVar13);
          pGVar1 = (Gizmo *)(this_00->_0).name;
          iVar6 = GizmoHandleId::GizmoHandleId_get_MidScaleCap((MethodInfo *)0x0);
          this_01 = (GizmoCap3D *)func_?(TypeInfo__RTG__GizmoCap3D);
          GizmoCap3D::GizmoCap3D__ctor(this_01,pGVar1,iVar6,(MethodInfo *)0x0);
          pp_Var3 = &(this_00->_0).typeMetadataHandle;
          *pp_Var3 = (Il2CppMetadataTypeHandle)this_01;
          func_?(pp_Var3,this_01);
          if ((GizmoCap3D *)*pp_Var3 != (GizmoCap3D *)0x0) {
            GizmoCap3D::GizmoCap3D_set_DragSession
                      ((GizmoCap3D *)*pp_Var3,
                       (IGizmoDragSession *)(this_00->_1).thread_static_fields_offset,
                       (MethodInfo *)0x0);
            BoxColliderGizmo3D_SetupSharedLookAndFeel
                      ((BoxColliderGizmo3D *)this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    iVar11 = func_?(pOVar10);
    if (iVar11 != 0) goto code_?;
  }
  uVar5 = func_?();
  func_?(uVar5);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
        pBVar10 = (this->fields)._sharedSettings;
        if ((pBVar10 != (BoxColliderGizmo3DSettings *)0x0) ||
           (pBVar10 = (this->fields)._settings, pBVar10 != (BoxColliderGizmo3DSettings *)0x0)) {
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
                 (float)((ulonglong)
                         *(undefined8 *)&(this->fields)._uniScaleDragWorkData.DragOrigin.z >> 0x20);
            GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D_SetWorkData
                      (this_02,workData,(MethodInfo *)0x0);
            return;
          }
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
    uVar24 = uVar23 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar9 = (float)((uint)pVVar7->z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    (this->fields)._offsetDragWorkData.Axis.x =
         (float)(uVar22 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    (this->fields)._offsetDragWorkData.Axis.y = (float)uVar24;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar9;
    pBVar10 = (this->fields)._sharedSettings;
    if ((pBVar10 == (BoxColliderGizmo3DSettings *)0x0) &&
       (pBVar10 = (this->fields)._settings, pBVar10 == (BoxColliderGizmo3DSettings *)0x0))
    goto code_?;
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
      pBVar10 = (this->fields)._sharedSettings;
      if ((pBVar10 == (BoxColliderGizmo3DSettings *)0x0) &&
         (pBVar10 = (this->fields)._settings, pBVar10 == (BoxColliderGizmo3DSettings *)0x0))
      goto code_?;
      (this->fields)._offsetDragWorkData.SnapStep = (pBVar10->fields)._ySizeSnapStep;
      (this->fields)._dragAxisIndex = 1;
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
        uVar24 = uVar26 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        fVar9 = (float)((uint)pVVar7->z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        (this->fields)._offsetDragWorkData.Axis.x =
             (float)(uVar25 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
        uVar24 = uVar28 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
        fVar9 = (float)((uint)pVVar7->z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        (this->fields)._offsetDragWorkData.Axis.x =
             (float)(uVar27 ^ 
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        (this->fields)._offsetDragWorkData.Axis.y = (float)uVar24;
code_?:
        (this->fields)._offsetDragWorkData.Axis.z = fVar9;
        pBVar10 = (this->fields)._sharedSettings;
        if ((pBVar10 == (BoxColliderGizmo3DSettings *)0x0) &&
           (pBVar10 = (this->fields)._settings, pBVar10 == (BoxColliderGizmo3DSettings *)0x0))
        goto code_?;
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
      ppcVar3 = &(value_00->_0).name;
      *ppcVar3 = (char *)(pBVar2->fields)._boxCollider;
      func_?(ppcVar3);
      fVar4 = (pBVar2->fields)._localCenter.y;
      fVar5 = (pBVar2->fields)._localCenter.z;
      (value_00->_0).namespaze = (char *)(pBVar2->fields)._localCenter.x;
      (value_00->_0).byval_arg.data = (_union_86)fVar4;
      *(float *)&(value_00->_0).byval_arg.attrs = fVar5;
      pIVar6 = (Il2CppClass *)(pBVar2->fields)._localSize.z;
      (value_00->_0).this_arg = *(Il2CppType *)&(pBVar2->fields)._localSize;
      (value_00->_0).element_class = pIVar6;
      value[1].klass = value_00;
      func_?(value + 1,value_00);
      value_01 = (Object *)func_?(TypeInfo__RTG__BoxCollider3DSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (method_00 != (MethodInfo *)0x0) {
        value_01[1].klass = (Object__Class *)method_00->invoker_method;
        func_?(value_01 + 1);
        pIVar7 = method_00->return_type;
        *(undefined8 *)&value_01[1].monitor = *(undefined8 *)&method_00->name;
        value_01[2].monitor = (MonitorData *)pIVar7;
        _Var9 = method_00->field7_0x1c;
        _Var6 = method_00->field8_0x20;
        value_01[3].klass = (Object__Class *)method_00->parameters;
        value_01[3].monitor = (MonitorData *)_Var9;
        *(_union_155 *)(value_01 + 4) = _Var6;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_OnGizmoDragUpdate
               (BoxColliderGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  bVar1 = BoxColliderGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = BoxColliderGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._uniScaleDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    pBVar3 = (this->fields)._sharedHotkeys;
    if (((pBVar3 != (BoxColliderGizmo3DHotkeys *)0x0) ||
        (pBVar3 = (this->fields)._hotkeys, pBVar3 != (BoxColliderGizmo3DHotkeys *)0x0)) &&
       (pHVar4 = (pBVar3->fields)._enableSnapping, pHVar4 != (Hotkeys *)0x0)) {
      bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    bVar1 = 1;
code_?:
    if (pGVar2 != (GizmoUniformScaleDrag3D *)0x0) {
      (pGVar2->fields)._._isSnapEnabled = bVar1;
      pGVar5 = (this->fields)._offsetDrag;
      if ((this->fields)._isSnapEnabled == 0) {
        pBVar3 = (this->fields)._sharedHotkeys;
        if (((pBVar3 == (BoxColliderGizmo3DHotkeys *)0x0) &&
            (pBVar3 = (this->fields)._hotkeys, pBVar3 == (BoxColliderGizmo3DHotkeys *)0x0)) ||
           (pHVar4 = (pBVar3->fields)._enableSnapping, pHVar4 == (Hotkeys *)0x0))
        goto code_?;
        bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
      }
      else {
        bVar1 = 1;
      }
      if (pGVar5 != (GizmoSglAxisOffsetDrag3D *)0x0) {
        (pGVar5->fields)._._isSnapEnabled = bVar1;
        pGVar6 = (this->fields)._midCap;
        if ((pGVar6 != (GizmoCap3D *)0x0) &&
           (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) {
          if (handleId == (pGVar7->fields)._id) {
            pGVar8 = (this->fields)._._gizmo;
            if (pGVar8 != (Gizmo *)0x0) {
              pVVar9 = Gizmo::Gizmo_get_RelativeDragScale
                                  ((Vector3 *)&stack0xffffffc0,pGVar8,(MethodInfo *)0x0);
              fVar10 = pVVar9->x;
              fVar11 = pVVar9->y;
              fVar12 = pVVar9->z;
              pVVar9 = BoxColliderGizmo3D_CalcWorldSize
                                  ((Vector3 *)&stack0xffffffc0,this,(MethodInfo *)0x0);
              uVar13 = pVVar9->x;
              uVar14 = pVVar9->y;
              v.y = (float)uVar14 * fVar11;
              v.x = (float)uVar13 * fVar10;
              v.z = pVVar9->z * fVar12;
              pVVar9 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffc0,v,(MethodInfo *)0x0);
              uVar15._0_4_ = pVVar9->x;
              uVar15._4_4_ = pVVar9->y;
              this_01 = (MVWorldObject *)pVVar9->z;
              pMVar16 = this_01;
              pVVar9 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                        MVWorldObject_get_WorldPosition
                                  ((Vector3 *)&stack0xffffffc0,this_01,in_stack_17);
              uVar18 = pVVar9->x;
              uVar19 = pVVar9->y;
              fVar11 = (float)uVar15 - (float)uVar18;
              fVar12 = SUB84(uVar15,4) - (float)uVar19;
              fVar10 = (float)this_01 - pVVar9->z;
              if (fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 < _UNK_?) {
                pVVar9 = Vector3Ex::Vector3Ex_FromValue
                                    ((Vector3 *)&stack0xffffffc0,1e-08,(MethodInfo *)0x0);
                pMVar16 = (MVWorldObject *)pVVar9->z;
              }
              pBVar20 = (this->fields)._targetCollider;
              if ((pBVar20 != (BoxCollider *)0x0) &&
                 (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pBVar20,(MethodInfo *)0x0),
                 pTVar21 != (Transform *)0x0)) {
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffffc0,pTVar21,(MethodInfo *)0x0);
                fVar10 = pVVar9->z;
                fVar12 = 0.0;
                pVVar9 = Vector3Ex::Vector3Ex_GetInverse
                                    ((Vector3 *)&stack0xffffffc0,*pVVar9,(MethodInfo *)0x0);
                uVar22 = pVVar9->x;
                uVar23 = pVVar9->y;
                fVar10 = fVar10 * (float)uVar22;
                fVar12 = fVar12 * (float)uVar23;
                fVar11 = (float)pMVar16 * pVVar9->z;
                goto code_?;
              }
            }
          }
          else {
            BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffcc,this,(MethodInfo *)0x0);
            pGVar8 = (this->fields)._._gizmo;
            if (pGVar8 != (Gizmo *)0x0) {
              pVVar9 = Gizmo::Gizmo_get_RelativeDragOffset
                                  ((Vector3 *)&stack0xffffffd8,pGVar8,(MethodInfo *)0x0);
              uVar24._0_4_ = pVVar9->x;
              uVar24._4_4_ = pVVar9->y;
              fVar10 = pVVar9->z;
              pGVar5 = (this->fields)._offsetDrag;
              if (pGVar5 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                pVVar9 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                    ((Vector3 *)&stack0xffffffc0,pGVar5,(MethodInfo *)0x0);
                uVar25 = pVVar9->x;
                uVar26 = pVVar9->y;
                index = (this->fields)._dragAxisIndex;
                fVar11 = 0.0;
                fVar27 = (float)uVar26 * SUB84(uVar24,4) + (float)uVar25 * (float)uVar24 +
                        pVVar9->z * fVar10;
                fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                   ((Vector3 *)&stack0xffffffe4,index,(MethodInfo *)0x0);
                fVar12 = (float)((uint)fVar27 & _UNK_?);
                fVar10 = _UNK_?;
                if (0.0 <= fVar27) {
                  fVar10 = _UNK_?;
                }
                if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                fVar10 = mscorlib.dll::System::Math::Math_Max_7
                                  (0.0,fVar10 * fVar12 + fVar28,(MethodInfo *)0x0);
                if (((index != 0) && (index != 1)) && (fVar11 = fVar10, index != 2))
                goto code_?;
                fVar10 = (this->fields)._scalePivot.z;
                fVar12 = (this->fields)._scalePivot.x;
                fVar27 = (this->fields)._scalePivot.y;
                pGVar5 = (this->fields)._offsetDrag;
                if (pGVar5 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                  pVVar9 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                      ((Vector3 *)&stack0xffffffc0,pGVar5,(MethodInfo *)0x0);
                  uVar29._0_4_ = pVVar9->x;
                  uVar29._4_4_ = pVVar9->y;
                  fVar28 = pVVar9->z;
                  fVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                     ((Vector3 *)&stack0xffffffe4,(this->fields)._dragAxisIndex,
                                      (MethodInfo *)0x0);
                  fVar30 = fVar30 * _UNK_?;
                  uVar31._4_4_ = fVar27 + SUB84(uVar29,4) * fVar30;
                  uVar31._0_4_ = fVar12 + (float)uVar29 * fVar30;
                  fVar10 = fVar10 + fVar28 * fVar30;
                  pBVar3 = (this->fields)._sharedHotkeys;
                  if (((pBVar3 != (BoxColliderGizmo3DHotkeys *)0x0) ||
                      (pBVar3 = (this->fields)._hotkeys,
                      pBVar3 != (BoxColliderGizmo3DHotkeys *)0x0)) &&
                     (pHVar4 = (pBVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
                    bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                    if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                      pBVar20 = (this->fields)._targetCollider;
                      if ((pBVar20 == (BoxCollider *)0x0) ||
                         (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pBVar20,(MethodInfo *)0x0),
                         pTVar21 == (Transform *)0x0)) goto code_?;
                      position.z = fVar10;
                      position.x = (float)uVar31;
                      position.y = SUB84(uVar31,4);
                      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_InverseTransformPoint
                                          ((Vector3 *)&stack0xffffffc0,pTVar21,position,
                                           (MethodInfo *)0x0);
                      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::
                      BoxCollider_set_center(pBVar20,*pVVar9,(MethodInfo *)0x0);
                    }
                    pBVar20 = (this->fields)._targetCollider;
                    if ((pBVar20 != (BoxCollider *)0x0) &&
                       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pBVar20,(MethodInfo *)0x0),
                       pTVar21 != (Transform *)0x0)) {
                      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_lossyScale
                                          ((Vector3 *)&stack0xffffffc0,pTVar21,(MethodInfo *)0x0);
                      fVar10 = pVVar9->z;
                      fVar12 = 0.0;
                      pVVar9 = Vector3Ex::Vector3Ex_GetInverse
                                          ((Vector3 *)&stack0xffffffc0,*pVVar9,(MethodInfo *)0x0);
                      uVar32 = pVVar9->x;
                      uVar33 = pVVar9->y;
                      fVar10 = (float)uVar32 * fVar10;
                      fVar12 = (float)uVar33 * fVar12;
                      fVar11 = pVVar9->z * fVar11;
code_?:
                      value.y = fVar12;
                      value.x = fVar10;
                      value.z = fVar11;
                      UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                                (pBVar20,value,(MethodInfo *)0x0);
                      BoxColliderGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
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
code_?:
  func_?();
  this_00 = (IndexOutOfRangeException *)func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?();
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
            func_?(MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_01 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
    pBVar2 = (this->fields)._sharedLookAndFeel;
    if ((pBVar2 != (BoxColliderGizmo3DLookAndFeel *)0x0) ||
       (pBVar2 = (this->fields)._lookAndFeel, pBVar2 != (BoxColliderGizmo3DLookAndFeel *)0x0)) {
      GizmoLineMaterial::GizmoLineMaterial_SetColor
                (this_01,(pBVar2->fields)._wireColor,(MethodInfo *)0x0);
      GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
      pVVar3 = BoxColliderGizmo3D_CalcWorldCenter
                         ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
      fVar4 = 0.0;
      fVar5 = pVVar3->z;
      pVVar3 = BoxColliderGizmo3D_CalcWorldSize((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
      size = *pVVar3;
      this_00 = (this->fields)._targetCollider;
      if ((this_00 != (BoxCollider *)0x0) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0)
         ) {
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffd8,this_02,(MethodInfo *)0x0);
        fVar7 = pQVar6->x;
        fVar8 = pQVar6->y;
        fVar9 = pQVar6->z;
        uVar10 = ZEXT48(&stack0xffffffac);
        puVar11 = &UNK_?;
        func_?();
        center.z = fVar5;
        center.x = (float)(int)uVar10;
        center.y = (float)(int)(uVar10 >> 0x20);
        rotation.y = fVar8;
        rotation.x = fVar7;
        rotation.z = fVar9;
        rotation.w = (float)puVar11;
        OBB::OBB__ctor_1((OBB *)&stack0xffffffac,center,size,rotation,(MethodInfo *)0x0);
        box._size.y = fStack_12;
        box._size.x = fVar4;
        box._size.z = fStack_13;
        box._center.x = fStack_14;
        box._center.y = fStack_15;
        box._center.z = fStack_16;
        box._rotation.x = fStack_17;
        box._rotation.y = fStack_18;
        box._rotation.z = fStack_19;
        box._rotation.w = in_stack_20;
        box._isValid = (bool)in_stack_21;
        box._41_3_ = SUB43(in_stack_21,1);
        GraphicsEx::GraphicsEx_DrawWireBox_1(box,(MethodInfo *)0x0);
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        this_03 = (RTGizmosEngine *)
                  MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (this_03 != (RTGizmosEngine *)0x0) {
          iVar22 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_03,(MethodInfo *)0x0);
          if (1 < iVar22) {
            BoxColliderGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
          }
          BoxColliderGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
          pGVar23 = (this->fields)._leftTick;
          if (pGVar23 != (GizmoCap2D *)0x0) {
            (*(code *)(pGVar23->klass->vtable).Render_1.method)();
            pGVar23 = (this->fields)._rightTick;
            if (pGVar23 != (GizmoCap2D *)0x0) {
              (*(code *)(pGVar23->klass->vtable).Render_1.method)();
              pGVar23 = (this->fields)._topTick;
              if (pGVar23 != (GizmoCap2D *)0x0) {
                (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                pGVar23 = (this->fields)._bottomTick;
                if (pGVar23 != (GizmoCap2D *)0x0) {
                  (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                  pGVar23 = (this->fields)._frontTick;
                  if (pGVar23 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                    pGVar23 = (this->fields)._backTick;
                    if (pGVar23 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                      pGVar24 = (this->fields)._midCap;
                      if (pGVar24 != (GizmoCap3D *)0x0) {
                        (*(code *)(pGVar24->klass->vtable).Render_1.method)();
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
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
        if (((pGVar2 != (Gizmo *)0x0) &&
            (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
           (this_00 = (this->fields)._midCap, this_00 != (GizmoCap3D *)0x0)) {
          GizmoCap3D::GizmoCap3D_set_Position
                    (this_00,(pGVar3->fields)._position3D,(MethodInfo *)0x0);
          pBVar5 = (this->fields)._sharedLookAndFeel;
          pGStack6 = (this->fields)._midCap;
          if ((pBVar5 != (BoxColliderGizmo3DLookAndFeel *)0x0) ||
             (pBVar5 = (this->fields)._lookAndFeel, pBVar5 != (BoxColliderGizmo3DLookAndFeel *)0x0))
          {
            if ((pBVar5->fields)._isMidCapVisible == 0) {
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
              pIStack7 = (pGStack6->klass->vtable).OnHoverableStateChanged.methodPtr;
              (*(code *)(pGStack6->klass->vtable).OnVisibilityStateChanged.method)();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  pBVar1 = (this->fields)._sharedLookAndFeel;
  if ((pBVar1 != (BoxColliderGizmo3DLookAndFeel *)0x0) ||
     (pBVar1 = (this->fields)._lookAndFeel, pBVar1 != (BoxColliderGizmo3DLookAndFeel *)0x0)) {
    pGVar2 = (pBVar1->fields)._tickLookAndFeel;
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


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_UpdateHoverPriorities
               (BoxColliderGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields)._faceTicks;
  if (pBVar1 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
    if ((pBVar1->max_length < 3) || (pBVar2 = pBVar1->vector[2], pBVar1->max_length < 4))
    goto code_?;
    pBVar3 = pBVar1->vector[3];
    if ((((pBVar2 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
         (((pGVar4 = (pBVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0 &&
           (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) &&
          (pPVar6 = (pGVar5->fields)._hoverPriority2D, pPVar6 != (Priority *)0x0)))) &&
        ((((pPVar6->fields)._priority = 0, pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0 &&
          (pGVar4 = (pBVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) &&
         (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)))) &&
       (pPVar6 = (pGVar5->fields)._hoverPriority2D, pPVar6 != (Priority *)0x0)) {
      (pPVar6->fields)._priority = 0;
      fVar7 = (pBVar2->fields).FaceCenter.z;
      uVar8._0_4_ = (pBVar2->fields).FaceCenter.x;
      uVar8._4_4_ = (pBVar2->fields).FaceCenter.y;
      VVar9 = (pBVar2->fields).FaceNormal;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      point.z = fVar7;
      point.x = (float)(int)uVar8;
      point.y = (float)(int)((ulonglong)uVar8 >> 0x20);
      bVar10 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar9,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pGVar4 = (pBVar3->fields).Tick;
        if ((pGVar4 != (GizmoCap2D *)0x0) &&
           (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
          pGVar4 = (pBVar2->fields).Tick;
code_?:
          pPVar6 = (pGVar5->fields)._hoverPriority2D;
          if (((pGVar4 != (GizmoCap2D *)0x0) &&
              (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) &&
             (pPVar6 != (Priority *)0x0)) {
            Priority::Priority_MakeHigherThan
                      (pPVar6,(pGVar5->fields)._hoverPriority2D,(MethodInfo *)0x0);
            pGVar11 = (this->fields)._midCap;
            if (((pGVar11 != (GizmoCap3D *)0x0) &&
                (pGVar5 = (pGVar11->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) &&
               ((pGVar4 = (pBVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0 &&
                ((pGVar12 = (pGVar4->fields)._._handle, pGVar12 != (GizmoHandle *)0x0 &&
                 (pPVar6 = (pGVar5->fields)._genericHoverPriority, pPVar6 != (Priority *)0x0))))))
            {
              Priority::Priority_MakeHigherThan
                        (pPVar6,(pGVar12->fields)._genericHoverPriority,(MethodInfo *)0x0);
              pGVar11 = (this->fields)._midCap;
              if ((pGVar11 != (GizmoCap3D *)0x0) &&
                 ((((pGVar5 = (pGVar11->fields)._._handle, pGVar5 != (GizmoHandle *)0x0 &&
                    (pGVar4 = (pBVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) &&
                   (pGVar12 = (pGVar4->fields)._._handle, pGVar12 != (GizmoHandle *)0x0)) &&
                  (camera_00 = (Camera *)(pGVar5->fields)._genericHoverPriority,
                  camera_00 != (Camera *)0x0)))) {
                Priority::Priority_MakeHigherThan
                          ((Priority *)camera_00,(pGVar12->fields)._genericHoverPriority,
                           (MethodInfo *)0x0);
                pBVar1 = (this->fields)._faceTicks;
                if (pBVar1 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                  if (pBVar1->max_length < 6) goto code_?;
                  pBVar2 = pBVar1->vector[5];
                  pBVar3 = pBVar1->vector[4];
                  if ((((pBVar2 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
                       (pGVar4 = (pBVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) &&
                      ((pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0 &&
                       ((pPVar6 = (pGVar5->fields)._hoverPriority2D, pPVar6 != (Priority *)0x0 &&
                        ((pPVar6->fields)._priority = 2,
                        pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0)))))) &&
                     ((pGVar4 = (pBVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0 &&
                      ((pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0 &&
                       (pPVar6 = (pGVar5->fields)._hoverPriority2D, pPVar6 != (Priority *)0x0))))))
                  {
                    (pPVar6->fields)._priority = 2;
                    fVar7 = (pBVar2->fields).FaceCenter.z;
                    uVar13 = (pBVar2->fields).FaceCenter.x;
                    uVar14 = (pBVar2->fields).FaceCenter.y;
                    VVar9.y = (float)uVar14;
                    VVar9.x = (float)uVar13;
                    uVar15._0_4_ = (pBVar2->fields).FaceNormal.x;
                    uVar15._4_4_ = (pBVar2->fields).FaceNormal.y;
                    fVar16 = (pBVar2->fields).FaceNormal.z;
                    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    VVar9.z = fVar7;
                    pointNormal.z = fVar16;
                    pointNormal.x = (float)(int)uVar15;
                    pointNormal.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                    bVar10 = CameraEx::CameraEx_IsPointFacingCamera
                                       (camera_00,VVar9,pointNormal,(MethodInfo *)0x0);
                    if (bVar10 == 0) {
                      pGVar4 = (pBVar3->fields).Tick;
                      if ((pGVar4 != (GizmoCap2D *)0x0) &&
                         (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
                        pGVar4 = (pBVar2->fields).Tick;
code_?:
                        pPVar6 = (pGVar5->fields)._hoverPriority2D;
                        if (((pGVar4 != (GizmoCap2D *)0x0) &&
                            (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0))
                           && (pPVar6 != (Priority *)0x0)) {
                          Priority::Priority_MakeHigherThan
                                    (pPVar6,(pGVar5->fields)._hoverPriority2D,(MethodInfo *)0x0);
                          pGVar11 = (this->fields)._midCap;
                          if (((pGVar11 != (GizmoCap3D *)0x0) &&
                              (pGVar5 = (pGVar11->fields)._._handle, pGVar5 != (GizmoHandle *)0x0))
                             && ((pGVar4 = (pBVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0 &&
                                 ((pGVar12 = (pGVar4->fields)._._handle,
                                  pGVar12 != (GizmoHandle *)0x0 &&
                                  (pPVar6 = (pGVar5->fields)._genericHoverPriority,
                                  pPVar6 != (Priority *)0x0)))))) {
                            Priority::Priority_MakeHigherThan
                                      (pPVar6,(pGVar12->fields)._genericHoverPriority,
                                       (MethodInfo *)0x0);
                            pGVar11 = (this->fields)._midCap;
                            if ((pGVar11 != (GizmoCap3D *)0x0) &&
                               ((((pGVar5 = (pGVar11->fields)._._handle,
                                  pGVar5 != (GizmoHandle *)0x0 &&
                                  (pGVar4 = (pBVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0))
                                 && (pGVar12 = (pGVar4->fields)._._handle,
                                    pGVar12 != (GizmoHandle *)0x0)) &&
                                (pPVar6 = (pGVar5->fields)._genericHoverPriority,
                                pPVar6 != (Priority *)0x0)))) {
                              Priority::Priority_MakeHigherThan
                                        (pPVar6,(pGVar12->fields)._genericHoverPriority,
                                         (MethodInfo *)0x0);
                              pBVar1 = (this->fields)._faceTicks;
                              if (pBVar1 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                if ((pBVar1->max_length == 0) ||
                                   (pBVar2 = pBVar1->vector[0], pBVar1->max_length < 2))
                                goto code_?;
                                pBVar3 = pBVar1->vector[1];
                                if ((((pBVar2 != (BoxColliderGizmo3D_FaceTick *)0x0) &&
                                     ((pGVar4 = (pBVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0
                                      && (pGVar5 = (pGVar4->fields)._._handle,
                                         pGVar5 != (GizmoHandle *)0x0)))) &&
                                    (pPVar6 = (pGVar5->fields)._hoverPriority2D,
                                    pPVar6 != (Priority *)0x0)) &&
                                   (((((pPVar6->fields)._priority = 4,
                                      pBVar3 != (BoxColliderGizmo3D_FaceTick *)0x0 &&
                                      (pGVar4 = (pBVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0
                                      )) && (pGVar5 = (pGVar4->fields)._._handle,
                                            pGVar5 != (GizmoHandle *)0x0)) &&
                                    (pPVar6 = (pGVar5->fields)._hoverPriority2D,
                                    pPVar6 != (Priority *)0x0)))) {
                                  (pPVar6->fields)._priority = 4;
                                  fVar7 = (pBVar2->fields).FaceCenter.z;
                                  uVar17 = (pBVar2->fields).FaceCenter.x;
                                  uVar18 = (pBVar2->fields).FaceCenter.y;
                                  point_00.y = (float)uVar18;
                                  point_00.x = (float)uVar17;
                                  uVar19._0_4_ = (pBVar2->fields).FaceNormal.x;
                                  uVar19._4_4_ = (pBVar2->fields).FaceNormal.y;
                                  fVar16 = (pBVar2->fields).FaceNormal.z;
                                  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0)
                                  {
                                    func_?(TypeInfo__RTG__CameraEx);
                                  }
                                  point_00.z = fVar7;
                                  pointNormal_00.z = fVar16;
                                  pointNormal_00.x = (float)(int)uVar19;
                                  pointNormal_00.y = (float)(int)((ulonglong)uVar19 >> 0x20);
                                  bVar10 = CameraEx::CameraEx_IsPointFacingCamera
                                                     (camera_00,point_00,pointNormal_00,
                                                      (MethodInfo *)0x0);
                                  if (bVar10 == 0) {
                                    pGVar4 = (pBVar3->fields).Tick;
                                    if ((pGVar4 != (GizmoCap2D *)0x0) &&
                                       (pGVar5 = (pGVar4->fields)._._handle,
                                       pGVar5 != (GizmoHandle *)0x0)) {
                                      pGVar4 = (pBVar2->fields).Tick;
code_?:
                                      pPVar6 = (pGVar5->fields)._hoverPriority2D;
                                      if (((pGVar4 != (GizmoCap2D *)0x0) &&
                                          (pGVar5 = (pGVar4->fields)._._handle,
                                          pGVar5 != (GizmoHandle *)0x0)) &&
                                         (pPVar6 != (Priority *)0x0)) {
                                        Priority::Priority_MakeHigherThan
                                                  (pPVar6,(pGVar5->fields)._hoverPriority2D,
                                                   (MethodInfo *)0x0);
                                        pGVar11 = (this->fields)._midCap;
                                        if (((pGVar11 != (GizmoCap3D *)0x0) &&
                                            (pGVar5 = (pGVar11->fields)._._handle,
                                            pGVar5 != (GizmoHandle *)0x0)) &&
                                           ((pGVar4 = (pBVar2->fields).Tick,
                                            pGVar4 != (GizmoCap2D *)0x0 &&
                                            ((pGVar12 = (pGVar4->fields)._._handle,
                                             pGVar12 != (GizmoHandle *)0x0 &&
                                             (pPVar6 = (pGVar5->fields)._genericHoverPriority,
                                             pPVar6 != (Priority *)0x0)))))) {
                                          Priority::Priority_MakeHigherThan
                                                    (pPVar6,(pGVar12->fields)._genericHoverPriority,
                                                     (MethodInfo *)0x0);
                                          pGVar11 = (this->fields)._midCap;
                                          if (((pGVar11 != (GizmoCap3D *)0x0) &&
                                              (((pGVar5 = (pGVar11->fields)._._handle,
                                                pGVar5 != (GizmoHandle *)0x0 &&
                                                (pGVar4 = (pBVar3->fields).Tick,
                                                pGVar4 != (GizmoCap2D *)0x0)) &&
                                               (pGVar12 = (pGVar4->fields)._._handle,
                                               pGVar12 != (GizmoHandle *)0x0)))) &&
                                             (pPVar6 = (pGVar5->fields)._genericHoverPriority,
                                             pPVar6 != (Priority *)0x0)) {
                                            Priority::Priority_MakeHigherThan
                                                      (pPVar6,(pGVar12->fields).
                                                              _genericHoverPriority,
                                                       (MethodInfo *)0x0);
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    pGVar4 = (pBVar2->fields).Tick;
                                    if ((pGVar4 != (GizmoCap2D *)0x0) &&
                                       (pGVar5 = (pGVar4->fields)._._handle,
                                       pGVar5 != (GizmoHandle *)0x0)) {
                                      pGVar4 = (pBVar3->fields).Tick;
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
                      pGVar4 = (pBVar2->fields).Tick;
                      if ((pGVar4 != (GizmoCap2D *)0x0) &&
                         (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
                        pGVar4 = (pBVar3->fields).Tick;
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
        pGVar4 = (pBVar2->fields).Tick;
        if ((pGVar4 != (GizmoCap2D *)0x0) &&
           (pGVar5 = (pGVar4->fields)._._handle, pGVar5 != (GizmoHandle *)0x0)) {
          pGVar4 = (pBVar3->fields).Tick;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
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
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_16 = (float)uVar11;
        fStack_17 = (float)uVar12;
        fStack_18 = fVar5;
        if (pBVar14 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
          ppBStack_19 = pBVar14->vector;
          while( true ) {
            if ((int)pBVar14->max_length <= (int)uStack_13) {
              return;
            }
            if (pBVar14->max_length <= uStack_13) break;
            pBVar20 = *ppBStack_19;
            if (pBVar20 == (BoxColliderGizmo3D_FaceTick *)0x0) goto code_?;
            this_00 = (this->fields)._._gizmo;
            this_01 = (pBVar20->fields).Tick;
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
              pGStack_24 = (GizmoOverrideColor *)(pBVar20->fields).FaceCenter.z;
              uVar25._0_4_ = (pBVar20->fields).FaceCenter.x;
              uVar25._4_4_ = (pBVar20->fields).FaceCenter.y;
              uVar26._0_4_ = (pBVar20->fields).FaceNormal.x;
              uVar26._4_4_ = (pBVar20->fields).FaceNormal.y;
              fStack_27 = (pBVar20->fields).FaceNormal.z;
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
              pBVar32 = (this->fields)._sharedLookAndFeel;
              if ((pBVar32 == (BoxColliderGizmo3DLookAndFeel *)0x0) &&
                 (pBVar32 = (this->fields)._lookAndFeel,
                 pBVar32 == (BoxColliderGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff94,*pCVar30,
                                   fStack_8 * (pBVar32->fields)._tickCullAlphaScale,
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
              pBVar32 = (this->fields)._sharedLookAndFeel;
              if ((pBVar32 == (BoxColliderGizmo3DLookAndFeel *)0x0) &&
                 (pBVar32 = (this->fields)._lookAndFeel,
                 pBVar32 == (BoxColliderGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar30 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xffffff84,*pCVar30,
                                   fStack_8 * (pBVar32->fields)._tickCullAlphaScale,
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
            VStack_3.x = (pBVar20->fields).FaceCenter.x;
            VStack_3.y = (pBVar20->fields).FaceCenter.y;
            VStack_3.z = (pBVar20->fields).FaceCenter.z;
            isVisible = 0.0 < (float)uVar12 * VStack_3.y + (float)uVar11 * VStack_3.x +
                              fVar5 * VStack_3.z + fStack_15;
            _bStack_1c = CONCAT31(uStack_36,isVisible);
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_01,isVisible,(MethodInfo *)0x0);
            uStack_13 = uStack_13 + 1;
            ppBStack_19 = ppBStack_19 + 1;
            pBVar14 = uStack_4._4_4_;
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
          if (pGVar16 != (GizmoCap2D *)0x0) {
            GizmoCap2D::GizmoCap2D_set_Position(pGVar16,value,(MethodInfo *)0x0);
            pBVar21 = (this->fields)._faceTicks;
            if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
              if (pBVar21->max_length < 3) goto code_?;
              pBVar22 = pBVar21->vector[2];
              if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                (pBVar22->fields).FaceCenter.x = (float)uVar17;
                (pBVar22->fields).FaceCenter.y = (float)uVar18;
                (pBVar22->fields).FaceCenter.z = fStack_19;
                pBVar21 = (this->fields)._faceTicks;
                if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                  if (pBVar21->max_length < 3) goto code_?;
                  pBVar22 = pBVar21->vector[2];
                  pBVar8 = (this->fields)._targetCollider;
                  if (pBVar8 != (BoxCollider *)0x0) {
                    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pBVar8,(MethodInfo *)0x0);
                    if (pTVar9 != (Transform *)0x0) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)&stack0xffffffbc,pTVar9,
                                                    (MethodInfo *)0x0);
                      uVar23 = pVVar2->x;
                      uVar24 = pVVar2->y;
                      VStack_20.x = (float)(uVar23 ^ 
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           );
                      VStack_20.y = (float)(uVar24 ^ 
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           );
                      VStack_20.z = (float)((uint)pVVar2->z ^
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           );
                      if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                        (pBVar22->fields).FaceNormal.x = VStack_20.x;
                        (pBVar22->fields).FaceNormal.y = VStack_20.y;
                        (pBVar22->fields).FaceNormal.z = VStack_20.z;
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
                        if (pGVar16 != (GizmoCap2D *)0x0) {
                          GizmoCap2D::GizmoCap2D_set_Position(pGVar16,value_00,(MethodInfo *)0x0);
                          pBVar21 = (this->fields)._faceTicks;
                          if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                            if (pBVar21->max_length < 4) goto code_?;
                            pBVar22 = pBVar21->vector[3];
                            if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                              (pBVar22->fields).FaceCenter.x = fVar4;
                              (pBVar22->fields).FaceCenter.y = fVar11;
                              (pBVar22->fields).FaceCenter.z = fStack_19;
                              pBVar21 = (this->fields)._faceTicks;
                              if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                if (pBVar21->max_length < 4) goto code_?;
                                pBVar22 = pBVar21->vector[3];
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
                                    if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                                      (pBVar22->fields).FaceNormal.x = pVVar2->x;
                                      (pBVar22->fields).FaceNormal.y = fVar11;
                                      (pBVar22->fields).FaceNormal.z = fVar4;
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
                                      if (pGVar16 != (GizmoCap2D *)0x0) {
                                        GizmoCap2D::GizmoCap2D_set_Position
                                                  (pGVar16,value_01,(MethodInfo *)0x0);
                                        pBVar21 = (this->fields)._faceTicks;
                                        if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0) {
                                          if (pBVar21->max_length < 6) goto code_?;
                                          pBVar22 = pBVar21->vector[5];
                                          if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0) {
                                            (pBVar22->fields).FaceCenter.x = fVar4;
                                            (pBVar22->fields).FaceCenter.y = fVar11;
                                            (pBVar22->fields).FaceCenter.z = fStack_19;
                                            pBVar21 = (this->fields)._faceTicks;
                                            if (pBVar21 != (BoxColliderGizmo3D_FaceTick__Array *)0x0
                                               ) {
                                              if (pBVar21->max_length < 6) goto code_?;
                                              pBVar22 = pBVar21->vector[5];
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
                                                  if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar22->fields).FaceNormal.x = pVVar2->x;
                                                    (pBVar22->fields).FaceNormal.y = fVar11;
                                                    (pBVar22->fields).FaceNormal.z = fVar4;
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
                                                    if (pGVar16 != (GizmoCap2D *)0x0) {
                                                      GizmoCap2D::GizmoCap2D_set_Position
                                                                (pGVar16,value_02,(MethodInfo *)0x0)
                                                      ;
                                                      pBVar21 = (this->fields)._faceTicks;
                                                      if (pBVar21 !=
                                                          (BoxColliderGizmo3D_FaceTick__Array *)0x0)
                                                      {
                                                        if (pBVar21->max_length < 5)
                                                        goto code_?;
                                                        pBVar22 = pBVar21->vector[4];
                                                        if (pBVar22 !=
                                                            (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                          (pBVar22->fields).FaceCenter.x = fVar4;
                                                          (pBVar22->fields).FaceCenter.y = fVar11;
                                                          (pBVar22->fields).FaceCenter.z = fStack_19
                                                          ;
                                                          pBVar21 = (this->fields)._faceTicks;
                                                          if (pBVar21 !=
                                                              (BoxColliderGizmo3D_FaceTick__Array *)
                                                              0x0) {
                                                            if (pBVar21->max_length < 5)
                                                            goto code_?;
                                                            pBVar22 = pBVar21->vector[4];
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
                                                    uVar25 = pVVar2->x;
                                                    uVar26 = pVVar2->y;
                                                    VStack_20.x = (float)(uVar25 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_20.y = (float)(uVar26 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_20.z = (float)((uint)pVVar2->z ^
                                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar22->fields).FaceNormal.x = VStack_20.x;
                                                    (pBVar22->fields).FaceNormal.y = VStack_20.y;
                                                    (pBVar22->fields).FaceNormal.z = VStack_20.z;
                                                    boxCenter_03.z = fStack_5;
                                                    boxCenter_03.x = (float)(undefined4)uStack_3;
                                                    boxCenter_03.y = (float)uStack_3._4_4_;
                                                    boxSize_03.z = fVar7;
                                                    boxSize_03.x = (float)(undefined4)uStack_6;
                                                    boxSize_03.y = (float)uStack_6._4_4_;
                                                    pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                                        ((Vector3 *)&stack0xffffffbc
                                                                         ,boxCenter_03,boxSize_03,
                                                                         boxRotation_03,
                                                                         BoxFace__Enum_Front,
                                                                         (MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._frontTick;
                                                    fStack_19 = pVVar2->z;
                                                    fVar4 = pVVar2->x;
                                                    fVar11 = pVVar2->y;
                                                    pVVar2 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_20,pCStack_1,
                                                                         *pVVar2,(MethodInfo *)0x0)
                                                    ;
                                                    value_03.x = pVVar2->x;
                                                    value_03.y = pVVar2->y;
                                                    VStack_20.y = value_03.x;
                                                    VStack_20.z = value_03.y;
                                                    if (pGVar16 != (GizmoCap2D *)0x0) {
                                                      GizmoCap2D::GizmoCap2D_set_Position
                                                                (pGVar16,value_03,(MethodInfo *)0x0)
                                                      ;
                                                      pBVar21 = (this->fields)._faceTicks;
                                                      if (pBVar21 !=
                                                          (BoxColliderGizmo3D_FaceTick__Array *)0x0)
                                                      {
                                                        if (pBVar21->max_length == 0)
                                                        goto code_?;
                                                        pBVar22 = pBVar21->vector[0];
                                                        if (pBVar22 !=
                                                            (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                          (pBVar22->fields).FaceCenter.x = fVar4;
                                                          (pBVar22->fields).FaceCenter.y = fVar11;
                                                          (pBVar22->fields).FaceCenter.z = fStack_19
                                                          ;
                                                          pBVar21 = (this->fields)._faceTicks;
                                                          if (pBVar21 !=
                                                              (BoxColliderGizmo3D_FaceTick__Array *)
                                                              0x0) {
                                                            if (pBVar21->max_length == 0)
                                                            goto code_?;
                                                            pBVar22 = pBVar21->vector[0];
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
                                                              Transform_get_forward
                                                                        ((Vector3 *)&stack0xffffffbc
                                                                         ,pTVar9,(MethodInfo *)0x0)
                                                    ;
                                                    uVar27 = pVVar2->x;
                                                    uVar28 = pVVar2->y;
                                                    VStack_20.x = (float)(uVar27 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_20.y = (float)(uVar28 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_20.z = (float)((uint)pVVar2->z ^
                                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pBVar22 != (BoxColliderGizmo3D_FaceTick *)0x0)
                                                  {
                                                    (pBVar22->fields).FaceNormal.x = VStack_20.x;
                                                    (pBVar22->fields).FaceNormal.y = VStack_20.y;
                                                    (pBVar22->fields).FaceNormal.z = VStack_20.z;
                                                    boxCenter_04.z = fStack_5;
                                                    boxCenter_04.x = (float)(undefined4)uStack_3;
                                                    boxCenter_04.y = (float)uStack_3._4_4_;
                                                    boxSize_04.z = fVar7;
                                                    boxSize_04.x = (float)(undefined4)uStack_6;
                                                    boxSize_04.y = (float)uStack_6._4_4_;
                                                    pVVar2 = BoxMath::BoxMath_CalcBoxFaceCenter
                                                                        ((Vector3 *)&stack0xffffffbc
                                                                         ,boxCenter_04,boxSize_04,
                                                                         boxRotation_04,
                                                                         BoxFace__Enum_Back,
                                                                         (MethodInfo *)0x0);
                                                    pGVar16 = (this->fields)._backTick;
                                                    fVar4 = pVVar2->z;
                                                    fVar7 = pVVar2->x;
                                                    fVar11 = pVVar2->y;
                                                    pVVar2 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_20,pCStack_1,
                                                                         *pVVar2,(MethodInfo *)0x0)
                                                    ;
                                                    value_04.x = pVVar2->x;
                                                    value_04.y = pVVar2->y;
                                                    VStack_20.y = value_04.x;
                                                    VStack_20.z = value_04.y;
                                                    if (pGVar16 != (GizmoCap2D *)0x0) {
                                                      GizmoCap2D::GizmoCap2D_set_Position
                                                                (pGVar16,value_04,(MethodInfo *)0x0)
                                                      ;
                                                      pBVar21 = (this->fields)._faceTicks;
                                                      if (pBVar21 !=
                                                          (BoxColliderGizmo3D_FaceTick__Array *)0x0)
                                                      {
                                                        if (pBVar21->max_length < 2)
                                                        goto code_?;
                                                        pBVar22 = pBVar21->vector[1];
                                                        if (pBVar22 !=
                                                            (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                          (pBVar22->fields).FaceCenter.x = fVar7;
                                                          (pBVar22->fields).FaceCenter.y = fVar11;
                                                          (pBVar22->fields).FaceCenter.z = fVar4;
                                                          pBVar21 = (this->fields)._faceTicks;
                                                          if (pBVar21 !=
                                                              (BoxColliderGizmo3D_FaceTick__Array *)
                                                              0x0) {
                                                            if (pBVar21->max_length < 2)
                                                            goto code_?;
                                                            pBVar22 = pBVar21->vector[1];
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
                                                              Transform_get_forward
                                                                        ((Vector3 *)&stack0xffffffbc
                                                                         ,pTVar9,(MethodInfo *)0x0)
                                                    ;
                                                    fVar7 = pVVar2->y;
                                                    fVar4 = pVVar2->z;
                                                    if (pBVar22 !=
                                                        (BoxColliderGizmo3D_FaceTick *)0x0) {
                                                      (pBVar22->fields).FaceNormal.x = pVVar2->x;
                                                      (pBVar22->fields).FaceNormal.y = fVar7;
                                                      (pBVar22->fields).FaceNormal.z = fVar4;
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
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
  ppBVar2 = &(this->fields)._faceTicks;
  *ppBVar2 = pBVar1;
  func_?(ppBVar2,pBVar1);
  pBVar3 = TypeInfo__RTG__BoxCollider3DSnapshot;
  pBVar4 = (BoxCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pBVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
  ppBVar5 = &(this->fields)._preChangeColliderSnapshot;
  *ppBVar5 = pBVar4;
  func_?(ppBVar5,pBVar4);
  pBVar3 = TypeInfo__RTG__BoxCollider3DSnapshot;
  pBVar4 = (BoxCollider3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pBVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
  ppBVar5 = &(this->fields)._postChangeColliderSnapshot;
  *ppBVar5 = pBVar4;
  func_?(ppBVar5,pBVar4);
  this_00 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_00;
  func_?();
  (this->fields)._dragAxisIndex = -1;
  this_01 = (GizmoUniformScaleDrag3D *)func_?(TypeInfo__RTG__GizmoUniformScaleDrag3D);
  GizmoUniformScaleDrag3D::GizmoUniformScaleDrag3D__ctor(this_01,(MethodInfo *)0x0);
  ppGVar6 = &(this->fields)._uniScaleDrag;
  *ppGVar6 = this_01;
  func_?(ppGVar6,this_01);
  this_02 = (BoxColliderGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__BoxColliderGizmo3DLookAndFeel);
  BoxColliderGizmo3DLookAndFeel::BoxColliderGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  ppBVar7 = &(this->fields)._lookAndFeel;
  *ppBVar7 = this_02;
  func_?(ppBVar7,this_02);
  method_01 = TypeInfo__RTG__BoxColliderGizmo3DSettings;
  value = (BoxColliderGizmo3DSettings *)func_?();
  (value->fields)._xSizeSnapStep = 0.1;
  (value->fields)._ySizeSnapStep = 0.1;
  (value->fields)._zSizeSnapStep = 0.1;
  (value->fields)._uniformSizeSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  ppBVar8 = &(this->fields)._settings;
  *ppBVar8 = value;
  func_?(ppBVar8,value);
  value_00 = (BoxColliderGizmo3DHotkeys *)func_?();
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
    (value_00->fields)._enableSnapping = pHVar9;
    func_?();
    pHVar9 = (Hotkeys *)func_?();
    Hotkeys::Hotkeys__ctor_1
              (pHVar9,StringLiteral_Scale_from_Center,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar9 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar9,KeyCode__Enum_None,(MethodInfo *)0x0);
      method_00 = &(value_00->fields)._scaleFromCenter;
      (pHVar9->fields)._lShift = 1;
      *method_00 = pHVar9;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_get_IsSnapEnabled
               (BoxColliderGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pBVar1 = (this->fields)._sharedHotkeys;
  if (((pBVar1 != (BoxColliderGizmo3DHotkeys *)0x0) ||
      (pBVar1 = (this->fields)._hotkeys, pBVar1 != (BoxColliderGizmo3DHotkeys *)0x0)) &&
     (this_00 = (pBVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
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
  ppBVar1 = &(this->fields)._sharedHotkeys;
  *ppBVar1 = value;
  func_?(ppBVar1,value);
  return;
}


/* Void set_SharedLookAndFeel(BoxColliderGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_set_SharedLookAndFeel
               (BoxColliderGizmo3D *this,BoxColliderGizmo3DLookAndFeel *value,MethodInfo *method)

{
  ppBVar1 = &(this->fields)._sharedLookAndFeel;
  *ppBVar1 = value;
  func_?(ppBVar1,value);
  BoxColliderGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SharedSettings(BoxColliderGizmo3DSettings) */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3D::BoxColliderGizmo3D_set_SharedSettings
               (BoxColliderGizmo3D *this,BoxColliderGizmo3DSettings *value,MethodInfo *method)

{
  ppBVar1 = &(this->fields)._sharedSettings;
  *ppBVar1 = value;
  func_?(ppBVar1,value);
  return;
}

