
/* Single CalcHeightScale() */

float Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
      CharacterControllerGizmo3D_CalcHeightScale
                (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetController;
  if (this_00 != (CharacterController *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      return (float)((uint)pVVar1->y & _UNK_?);
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Single CalcRadiusScale() */

float Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
      CharacterControllerGizmo3D_CalcRadiusScale
                (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetController;
  if (this_00 != (CharacterController *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      pVVar1 = Vector3Ex::Vector3Ex_Abs((Vector3 *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      fVar3 = (float)uVar2;
      if ((float)uVar2 <= pVVar1->z) {
        fVar3 = pVVar1->z;
      }
      return fVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
          CharacterControllerGizmo3D_CalcScalePivot
                    (Vector3 *__return_storage_ptr__,CharacterControllerGizmo3D *this,
                    int32_t handleId,MethodInfo *method)

{
  bVar1 = CharacterControllerGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      ppVStack2 = &TypeInfo__UnityEngine__Vector3;
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
  pVVar6 = CharacterControllerGizmo3D_CalcWorldCenter
                      ((Vector3 *)&stack0xffffffd4,this,(MethodInfo *)0x0);
  fVar5 = pVVar6->z;
  pCVar7 = (this->fields)._targetController;
  if (pCVar7 == (CharacterController *)0x0) {
code_?:
    func_?();
    pcVar8 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar8)();
    return pVVar6;
  }
  UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::CharacterController_get_radius
            (pCVar7,(MethodInfo *)0x0);
  CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
  fVar4 = CharacterControllerGizmo3D_CalcWorldHeight(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar9->identityQuaternion).x;
  fVar11 = (pQVar9->identityQuaternion).y;
  fVar12 = (pQVar9->identityQuaternion).z;
  fVar13 = (pQVar9->identityQuaternion).w;
  pCVar7 = (this->fields)._targetController;
  if (pCVar7 == (CharacterController *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar7,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                      ((Vector3 *)&stack0xffffffd4,pTVar14,(MethodInfo *)0x0);
  fVar15 = pVVar6->z;
  fVar16 = 0.0;
  rotation_01.y = fVar11;
  rotation_01.x = fVar10;
  rotation_01.z = fVar12;
  rotation_01.w = fVar13;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffe0,rotation_01,*pVVar6,(MethodInfo *)0x0);
  fVar17 = pVVar6->x;
  fVar18 = pVVar6->y;
  fVar19 = pVVar6->z;
  pCVar7 = (this->fields)._targetController;
  if (pCVar7 == (CharacterController *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar7,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffe0,pTVar14,(MethodInfo *)0x0);
  __return_storage_ptr__ = (Vector3 *)&UNK_?;
  rotation.y = fVar11;
  rotation.x = fVar10;
  rotation.z = fVar12;
  rotation.w = fVar13;
  fVar20 = fVar10;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffc8,rotation,*pVVar6,(MethodInfo *)0x0);
  fVar21 = pVVar6->x;
  fVar22 = pVVar6->y;
  fVar23 = pVVar6->z;
  pCVar7 = (this->fields)._targetController;
  if (pCVar7 == (CharacterController *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar7,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffc8,pTVar14,(MethodInfo *)0x0);
  rotation_00.y = fVar11;
  rotation_00.x = fVar20;
  rotation_00.z = fVar12;
  rotation_00.w = fVar13;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffc8,rotation_00,*pVVar6,(MethodInfo *)0x0);
  pGVar24 = (this->fields)._leftTick;
  if ((pGVar24 == (GizmoCap2D *)0x0) ||
     (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar25->fields)._id) {
code_?:
    fVar15 = fVar15 + fVar17 * fVar10;
    _UNK_? = fVar5 + fVar19 * fVar10;
    fVar16 = fVar16 + fVar18 * fVar10;
  }
  else {
    pGVar24 = (this->fields)._rightTick;
    if ((pGVar24 == (GizmoCap2D *)0x0) ||
       (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0))
    goto code_?;
    if (handleId != (pGVar25->fields)._id) {
      pGVar24 = (this->fields)._topTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        _UNK_? =
             CONCAT44(fVar16 - fVar22 * fVar4 * _UNK_?,
                      fVar15 - fVar21 * fVar4 * _UNK_?);
        _UNK_? = fVar5 - fVar23 * fVar4 * _UNK_?;
        return (Vector3 *)&UNK_?;
      }
      pGVar24 = (this->fields)._bottomTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        _UNK_? =
             CONCAT44(fVar16 + fVar22 * fVar4 * _UNK_?,
                      fVar15 + fVar21 * fVar4 * _UNK_?);
        _UNK_? = fVar5 + fVar23 * fVar4 * _UNK_?;
        return (Vector3 *)&UNK_?;
      }
      pGVar24 = (this->fields)._frontTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId == (pGVar25->fields)._id) {
        uVar26 = pVVar6->x;
        uVar27 = pVVar6->y;
        fVar19 = pVVar6->z;
        fVar17 = (float)uVar26;
        fVar18 = (float)uVar27;
        goto code_?;
      }
      pGVar24 = (this->fields)._backTick;
      if ((pGVar24 == (GizmoCap2D *)0x0) ||
         (pGVar25 = (pGVar24->fields)._._handle, pGVar25 == (GizmoHandle *)0x0))
      goto code_?;
      if (handleId != (pGVar25->fields)._id) goto code_?;
      uVar28 = pVVar6->x;
      uVar29 = pVVar6->y;
      fVar19 = pVVar6->z;
      fVar17 = (float)uVar28;
      fVar18 = (float)uVar29;
    }
    fVar15 = fVar15 - fVar17 * fVar10;
    _UNK_? = fVar5 - fVar19 * fVar10;
    fVar16 = fVar16 - fVar18 * fVar10;
  }
  _UNK_? = CONCAT44(fVar16,fVar15);
  return (Vector3 *)&UNK_?;
}


/* Vector3 CalcWorldCenter() */

Vector3 * Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
          CharacterControllerGizmo3D_CalcWorldCenter
                    (Vector3 *__return_storage_ptr__,CharacterControllerGizmo3D *this,
                    MethodInfo *method)

{
  pCVar1 = (this->fields)._targetController;
  if (pCVar1 != (CharacterController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._targetController;
    if (pCVar1 != (CharacterController *)0x0) {
      pVVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
               CharacterController_get_center((Vector3 *)&stack0xfffffff0,pCVar1,(MethodInfo *)0x0);
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

float Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
      CharacterControllerGizmo3D_CalcWorldHeight
                (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._targetController;
  if (pCVar1 != (CharacterController *)0x0) {
    fVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
            CharacterController_get_height(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._targetController;
    if (pCVar1 != (CharacterController *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
        return (float)((uint)pVVar3->y & _UNK_?) * fVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single CalcWorldRadius() */

float Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
      CharacterControllerGizmo3D_CalcWorldRadius
                (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetController;
  if (this_00 != (CharacterController *)0x0) {
    fVar1 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
            CharacterController_get_radius(this_00,(MethodInfo *)0x0);
    fVar2 = CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
    return fVar2 * fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_IsTargetReady
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._targetController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pCVar1 = (this->fields)._targetController;
  if (pCVar1 != (CharacterController *)0x0) {
    bVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_enabled
                      ((Collider *)pCVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pCVar1 = (this->fields)._targetController;
    if ((pCVar1 != (CharacterController *)0x0) &&
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

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_OnAttached
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
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
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_00);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 3) goto code_?;
    pCVar9->vector[2] = pCVar10;
    func_?(pCVar9->vector + 2,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 3) goto code_?;
    pGVar3 = (this->fields)._leftTick;
    if (pCVar9->vector[2] == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[2]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 4) goto code_?;
    pCVar9->vector[3] = pCVar10;
    func_?(pCVar9->vector + 3,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 4) goto code_?;
    pGVar3 = (this->fields)._rightTick;
    if (pCVar9->vector[3] == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[3]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 6) goto code_?;
    pCVar9->vector[5] = pCVar10;
    func_?(pCVar9->vector + 5,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 6) goto code_?;
    pGVar3 = (this->fields)._topTick;
    if (pCVar9->vector[5] == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[5]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length < 5) goto code_?;
    pCVar9->vector[4] = pCVar10;
    func_?(pCVar9->vector + 4,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length < 5) goto code_?;
    pGVar3 = (this->fields)._bottomTick;
    if (pCVar9->vector[4] == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[4]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (pCVar9->max_length == 0) goto code_?;
    pCVar9->vector[0] = pCVar10;
    func_?(pCVar9->vector,pCVar10);
    pCVar9 = (this->fields)._extentTicks;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar9->max_length == 0) goto code_?;
    pGVar3 = (this->fields)._frontTick;
    if (pCVar9->vector[0] == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar4 = &(pCVar9->vector[0]->fields).Tick;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pCVar9 = (this->fields)._extentTicks;
    pCVar10 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pCVar10,ExceptionArgument__Enum_obj,method_01);
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar10 == (CharacterControllerGizmo3D_ExtentTick *)0x0) ||
       (iVar11 = func_?(pCVar10,(pCVar9->klass->_0).element_class), iVar11 != 0)) {
      if (pCVar9->max_length < 2) goto code_?;
      pCVar9->vector[1] = pCVar10;
      func_?(pCVar9->vector + 1,pCVar10);
      pCVar9 = (this->fields)._extentTicks;
      if (pCVar9 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
        if (pCVar9->max_length < 2) goto code_?;
        pGVar3 = (this->fields)._backTick;
        if (pCVar9->vector[1] != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
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
          CharacterControllerGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_OnGizmoAttemptHandleDragBegin
               (CharacterControllerGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = CharacterControllerGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._preChangeColliderSnapshot;
  if (this_00 == (CharacterController3DSnapshot *)0x0) goto code_?;
  CharacterController3DSnapshot::CharacterController3DSnapshot_Snapshot
            (this_00,(this->fields)._targetController,(MethodInfo *)0x0);
  bVar1 = CharacterControllerGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pCVar2 = (this->fields)._targetController;
  if (pCVar2 == (CharacterController *)0x0) goto code_?;
  fVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
           CharacterController_get_height(pCVar2,(MethodInfo *)0x0);
  (this->fields)._heightOnDragBegin = fVar3;
  VStack_4.z = (float)&UNK_?;
  pVVar5 = CharacterControllerGizmo3D_CalcWorldCenter
                      ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  fVar6 = pVVar5->y;
  fVar3 = pVVar5->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar5->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar6;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar3;
  pCVar7 = (this->fields)._sharedSettings;
  if ((pCVar7 == (CharacterControllerGizmo3DSettings *)0x0) &&
     (pCVar7 = (this->fields)._settings, pCVar7 == (CharacterControllerGizmo3DSettings *)0x0))
  goto code_?;
  (this->fields)._offsetDragWorkData.SnapStep = (pCVar7->fields)._radiusSnapStep;
  pGVar8 = (this->fields)._leftTick;
  if ((pGVar8 == (GizmoCap2D *)0x0) ||
     (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar9->fields)._id) {
    pCVar2 = (this->fields)._targetController;
    if ((pCVar2 == (CharacterController *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_4,pTVar10,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar8 = (this->fields)._rightTick;
  if ((pGVar8 == (GizmoCap2D *)0x0) ||
     (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
  if (handleId == (pGVar9->fields)._id) {
    pCVar2 = (this->fields)._targetController;
    if ((pCVar2 == (CharacterController *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_4,pTVar10,(MethodInfo *)0x0);
    fVar6 = pVVar5->y;
    fVar3 = pVVar5->z;
    (this->fields)._offsetDragWorkData.Axis.x = pVVar5->x;
    (this->fields)._offsetDragWorkData.Axis.y = fVar6;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar3;
  }
  else {
    pGVar8 = (this->fields)._topTick;
    if ((pGVar8 == (GizmoCap2D *)0x0) ||
       (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar9->fields)._id) {
      pCVar2 = (this->fields)._targetController;
      if ((pCVar2 == (CharacterController *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_4,pTVar10,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar3 = pVVar5->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar5->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar6;
      goto code_?;
    }
    pGVar8 = (this->fields)._bottomTick;
    if ((pGVar8 == (GizmoCap2D *)0x0) ||
       (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar9->fields)._id) {
      pCVar2 = (this->fields)._targetController;
      if ((pCVar2 == (CharacterController *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_4,pTVar10,(MethodInfo *)0x0);
code_?:
      uVar11 = pVVar5->x;
      uVar12 = pVVar5->y;
      uVar13 = uVar12 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar3 = (float)((uint)pVVar5->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)(uVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar13;
      goto code_?;
    }
    pGVar8 = (this->fields)._frontTick;
    if ((pGVar8 == (GizmoCap2D *)0x0) ||
       (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar9->fields)._id) {
      pCVar2 = (this->fields)._targetController;
      if ((pCVar2 == (CharacterController *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_4,pTVar10,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar8 = (this->fields)._backTick;
    if ((pGVar8 == (GizmoCap2D *)0x0) ||
       (pGVar9 = (pGVar8->fields)._._handle, pGVar9 == (GizmoHandle *)0x0)) goto code_?;
    if (handleId == (pGVar9->fields)._id) {
      pCVar2 = (this->fields)._targetController;
      if ((pCVar2 == (CharacterController *)0x0) ||
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar2,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
      goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xfffffff0,pTVar10,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar3 = pVVar5->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar5->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar6;
      goto code_?;
    }
  }
  this_01 = (this->fields)._offsetDrag;
  if (this_01 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    fStack14 = (this->fields)._offsetDragWorkData.SnapStep;
    uVar15 = (this->fields)._offsetDragWorkData.Axis.z;
    uVar16 = (this->fields)._offsetDragWorkData.DragOrigin.x;
    uVar17 = (this->fields)._offsetDragWorkData.DragOrigin.y;
    uVar18 = (this->fields)._offsetDragWorkData.DragOrigin.z;
    workData.DragOrigin.z = (float)uVar18;
    workData.DragOrigin.y = (float)uVar17;
    workData.DragOrigin.x = (float)uVar16;
    uVar19 = (this->fields)._offsetDragWorkData.Axis.x;
    uVar20 = (this->fields)._offsetDragWorkData.Axis.y;
    workData.Axis.y = (float)uVar20;
    workData.Axis.x = (float)uVar19;
    workData.Axis.z = (float)uVar15;
    workData.SnapStep = fStack14;
    uStack21 = uVar15;
    GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
              (this_01,workData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_OnGizmoDragEnd
               (CharacterControllerGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CharacterController3DChangedAction);
    cRam_? = '\x01';
  }
  bVar1 = CharacterControllerGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  method_02 = (MethodInfo *)(this->fields)._postChangeColliderSnapshot;
  if (method_02 != (MethodInfo *)0x0) {
    CharacterController3DSnapshot::CharacterController3DSnapshot_Snapshot
              ((CharacterController3DSnapshot *)method_02,(this->fields)._targetController,
               (MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields)._preChangeColliderSnapshot;
    pCVar2 = (this->fields)._postChangeColliderSnapshot;
    value = (Object *)func_?(TypeInfo__RTG__CharacterController3DChangedAction);
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
      value_01 = (Object *)func_?(TypeInfo__RTG__CharacterController3DSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (pCVar2 != (CharacterController3DSnapshot *)0x0) {
        value_01[1].klass = (Object__Class *)(pCVar2->fields)._characterController;
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

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_OnGizmoDragUpdate
               (CharacterControllerGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = CharacterControllerGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = CharacterControllerGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._offsetDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    pCVar3 = (this->fields)._sharedHotkeys;
    if (((pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0) &&
        (pCVar3 = (this->fields)._hotkeys, pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0)) ||
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
        fVar7 = CharacterControllerGizmo3D_CalcWorldRadius(this,(MethodInfo *)0x0);
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
        pVVar11 = CharacterControllerGizmo3D_CalcScalePivot
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
        if (((pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0) &&
            (pCVar3 = (this->fields)._hotkeys, pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0)
            ) || (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 == (Hotkeys *)0x0))
        goto code_?;
        bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
        if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
          pCVar21 = (this->fields)._targetController;
          if ((pCVar21 == (CharacterController *)0x0) ||
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar21,(MethodInfo *)0x0),
             pTVar22 == (Transform *)0x0)) goto code_?;
          position_00.z = fVar7;
          position_00.x = (float)uVar20;
          position_00.y = SUB84(uVar20,4);
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&stack0xffffffc0,pTVar22,position_00,(MethodInfo *)0x0);
          UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
          CharacterController_set_center(pCVar21,*pVVar11,(MethodInfo *)0x0);
        }
        pCVar21 = (this->fields)._targetController;
        fVar7 = CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
        if (pCVar21 == (CharacterController *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
        CharacterController_set_radius(pCVar21,fVar10 / fVar7,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetController;
        if (pCVar21 == (CharacterController *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
        CharacterController_set_height(pCVar21,(this->fields)._heightOnDragBegin,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetController;
        if (pCVar21 == (CharacterController *)0x0) goto code_?;
        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                 CharacterController_get_height(pCVar21,(MethodInfo *)0x0);
        pCVar21 = (this->fields)._targetController;
        if (pCVar21 == (CharacterController *)0x0) goto code_?;
        fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                 CharacterController_get_radius(pCVar21,(MethodInfo *)0x0);
        if (fVar7 < fVar10 + fVar10) {
          pCVar21 = (this->fields)._targetController;
          if (pCVar21 != (CharacterController *)0x0) {
            fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                     CharacterController_get_radius(pCVar21,(MethodInfo *)0x0);
            UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
            CharacterController_set_height(pCVar21,fVar7 * _UNK_?,(MethodInfo *)0x0);
            CharacterControllerGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    fVar7 = CharacterControllerGizmo3D_CalcWorldHeight(this,(MethodInfo *)0x0);
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
          pCVar21 = (this->fields)._targetController;
          fVar7 = fVar16 * fVar10 + fVar7;
          fVar10 = 0.0;
          if (0.0 <= fVar7) {
            fVar10 = fVar7;
          }
          if ((pCVar21 != (CharacterController *)0x0) &&
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar21,(MethodInfo *)0x0),
             pTVar22 != (Transform *)0x0)) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                ((Vector3 *)&stack0xffffffc0,pTVar22,(MethodInfo *)0x0);
            fVar13 = fVar10 / (float)((uint)pVVar11->y & _UNK_?);
            pVVar11 = CharacterControllerGizmo3D_CalcScalePivot
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
              if (((pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0) ||
                  (pCVar3 = (this->fields)._hotkeys,
                  pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0)) &&
                 (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
                bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                  pCVar21 = (this->fields)._targetController;
                  if ((pCVar21 == (CharacterController *)0x0) ||
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
                  UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                  CharacterController_set_center(pCVar21,*pVVar11,(MethodInfo *)0x0);
                }
                pCVar21 = (this->fields)._targetController;
                if (pCVar21 != (CharacterController *)0x0) {
                  UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                  CharacterController_set_height(pCVar21,fVar13,(MethodInfo *)0x0);
                  pCVar21 = (this->fields)._targetController;
                  if (pCVar21 != (CharacterController *)0x0) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                    CharacterController_get_height(pCVar21,(MethodInfo *)0x0);
                    pCVar21 = (this->fields)._targetController;
                    if (pCVar21 != (CharacterController *)0x0) {
                      fVar10 = 0.0;
                      fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                               CharacterController_get_radius(pCVar21,(MethodInfo *)0x0);
                      if (fVar7 + fVar7 <= fVar10) goto code_?;
                      this_01 = (this->fields)._targetController;
                      if (this_01 != (CharacterController *)0x0) {
                        fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                                 CharacterController_get_radius(this_01,(MethodInfo *)0x0);
                        fVar7 = fVar7 * _UNK_?;
                        fVar10 = 0.0;
                        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                        CharacterController_set_height(this_01,fVar7,(MethodInfo *)0x0);
                        this_00 = (this->fields)._targetController;
                        if (this_00 != (CharacterController *)0x0) {
                          fVar16 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                                   CharacterController_get_height(this_00,(MethodInfo *)0x0);
                          fVar13 = CharacterControllerGizmo3D_CalcHeightScale
                                             (this,(MethodInfo *)0x0);
                          fVar13 = fVar13 * fVar16;
                          pGVar2 = (this->fields)._offsetDrag;
                          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                            pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                                ((Vector3 *)&stack0xffffffc0,pGVar2,
                                                 (MethodInfo *)0x0);
                            uVar30 = pVVar11->x;
                            uVar31 = pVVar11->y;
                            fVar13 = fVar13 - fVar10;
                            fVar10 = pVVar11->z * fVar13 * _UNK_? + (float)pCVar21;
                            uVar32._4_4_ = (float)uVar31 * fVar13 * _UNK_? + (float)this_01;
                            uVar32._0_4_ = (float)uVar30 * fVar13 * _UNK_? + fVar7;
                            pCVar3 = (this->fields)._sharedHotkeys;
                            if (((pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0) ||
                                (pCVar3 = (this->fields)._hotkeys,
                                pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0)) &&
                               (pHVar4 = (pCVar3->fields)._scaleFromCenter,
                               pHVar4 != (Hotkeys *)0x0)) {
                              bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                              if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                                pCVar21 = (this->fields)._targetController;
                                if ((pCVar21 == (CharacterController *)0x0) ||
                                   (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)pCVar21,(MethodInfo *)0x0),
                                   pTVar22 == (Transform *)0x0)) goto code_?;
                                position.z = fVar10;
                                position.x = (float)uVar32;
                                position.y = SUB84(uVar32,4);
                                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_InverseTransformPoint
                                                    ((Vector3 *)&stack0xffffffc0,pTVar22,position,
                                                     (MethodInfo *)0x0);
                                UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                                CharacterController_set_center(pCVar21,*pVVar11,(MethodInfo *)0x0);
                              }
code_?:
                              CharacterControllerGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
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
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_OnGizmoRender
               (CharacterControllerGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = CharacterControllerGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
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
      CharacterControllerGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
    }
    pVVar3 = CharacterControllerGizmo3D_CalcWorldCenter(&VStack_4,this,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fStack_6 = pVVar3->z;
    pCVar7 = (this->fields)._targetController;
    if (pCVar7 != (CharacterController *)0x0) {
      fStack_8 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                  CharacterController_get_radius(pCVar7,(MethodInfo *)0x0);
      fVar9 = CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      fStack_8 = fVar9 * fStack_8;
      fStack_8 = CharacterControllerGizmo3D_CalcWorldHeight(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
      puStack_11 = (undefined *)(pQVar10->identityQuaternion).x;
      pSStack_12 = (Singleton_1_GizmoLineMaterial___Class *)(pQVar10->identityQuaternion).y;
      fStack_13 = (pQVar10->identityQuaternion).z;
      fStack_14 = (pQVar10->identityQuaternion).w;
      fVar9 = (pQVar10->identityQuaternion).x;
      fVar15 = (pQVar10->identityQuaternion).y;
      fVar16 = (pQVar10->identityQuaternion).z;
      fVar17 = (pQVar10->identityQuaternion).w;
      pCVar7 = (this->fields)._targetController;
      if ((pCVar7 != (CharacterController *)0x0) &&
         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar7,(MethodInfo *)0x0), pTVar18 != (Transform *)0x0))
      {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_4,pTVar18,(MethodInfo *)0x0);
        rotation.y = fVar15;
        rotation.x = fVar9;
        rotation.z = fVar16;
        rotation.w = fVar17;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            (&VStack_4,rotation,*pVVar3,(MethodInfo *)0x0);
        uStack_19._0_4_ = pVVar3->x;
        uStack_19._4_4_ = pVVar3->y;
        fStack_20 = pVVar3->z;
        pCVar7 = (this->fields)._targetController;
        if ((pCVar7 != (CharacterController *)0x0) &&
           (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar7,(MethodInfo *)0x0), pTVar18 != (Transform *)0x0
           )) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (&VStack_4,pTVar18,(MethodInfo *)0x0);
          fVar9 = pVVar3->y;
          rotation_00.y = (float)pSStack_12;
          rotation_00.x = (float)puStack_11;
          rotation_00.z = fStack_13;
          rotation_00.w = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                    (&VStack_4,rotation_00,*pVVar3,(MethodInfo *)0x0);
          pCVar7 = (this->fields)._targetController;
          if ((pCVar7 != (CharacterController *)0x0) &&
             (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar7,(MethodInfo *)0x0),
             pTVar18 != (Transform *)0x0)) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_4,pTVar18,(MethodInfo *)0x0);
            fVar15 = pVVar3->x;
            fVar16 = pVVar3->y;
            QStack_21.w = (float)&UNK_?;
            rotation_01.y = (float)pSStack_12;
            rotation_01.x = (float)puStack_11;
            rotation_01.z = fStack_13;
            rotation_01.w = fStack_14;
            fVar22 = fStack_14;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                (&VStack_4,rotation_01,*pVVar3,(MethodInfo *)0x0);
            uVar23 = pVVar3->x;
            uVar24 = pVVar3->y;
            fVar17 = pVVar3->z;
            if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor ==
                0) {
              pSStack_12 = TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>;
              func_?();
            }
            pSStack_12 = (Singleton_1_GizmoLineMaterial___Class *)
                         MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__;
            this_01 = (GizmoLineMaterial *)func_?();
            if (this_01 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (this_01,(MethodInfo *)0x0);
              pCVar25 = (this->fields)._sharedLookAndFeel;
              if ((pCVar25 != (CharacterControllerGizmo3DLookAndFeel *)0x0) ||
                 (pCVar25 = (this->fields)._lookAndFeel,
                 pCVar25 != (CharacterControllerGizmo3DLookAndFeel *)0x0)) {
                GizmoLineMaterial::GizmoLineMaterial_SetColor
                          (this_01,(pCVar25->fields)._wireColor,(MethodInfo *)0x0);
                GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                fVar26 = fStack_8 - (fVar9 + fVar9);
                QStack_27.y = 0.0;
                QStack_27.z = 0.0;
                QStack_27.w = 0.0;
                fVar28 = 0.0;
                fVar29 = 0.0;
                fVar30 = 0.0;
                fVar31 = (float)uStack_5;
                if (0.0 < fVar26) {
                  fVar32 = (float)uStack_19 * fVar9;
                  fStack_33 = uStack_19._4_4_ * fVar9;
                  fStack_34 = fStack_20 * fVar9;
                  QStack_35.x = fVar22 * fVar26;
                  fStack_36 = fVar15 * fVar26;
                  fStack_37 = fVar16 * fVar26;
                  QStack_35.y = 0.0;
                  QStack_35.z = 0.0;
                  QStack_35.w = 0.0;
                  VStack_4.z = (fStack_6 - fStack_34) - fStack_37 * _UNK_?;
                  fStack_20 = fStack_37 * _UNK_? + (fStack_6 - fStack_34);
                  endPoint.y = fStack_36 * _UNK_? + (uStack_5._4_4_ - fStack_33);
                  endPoint.x = QStack_35.x * _UNK_? + ((float)uStack_5 - fVar32);
                  startPoint.y = (uStack_5._4_4_ - fStack_33) - fStack_36 * _UNK_?;
                  startPoint.x = ((float)uStack_5 - fVar32) - QStack_35.x * _UNK_?;
                  startPoint.z = VStack_4.z;
                  endPoint.z = fStack_20;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
                  fStack_20 = (fStack_6 + fStack_34) - fStack_37 * _UNK_?;
                  VStack_4.z = fStack_37 * _UNK_? + fStack_6 + fStack_34;
                  endPoint_00.y = fStack_36 * _UNK_? + uStack_5._4_4_ + fStack_33;
                  endPoint_00.x = QStack_35.x * _UNK_? + fVar31 + fVar32;
                  startPoint_00.y = (uStack_5._4_4_ + fStack_33) - fStack_36 * _UNK_?;
                  startPoint_00.x = (fVar31 + fVar32) - QStack_35.x * _UNK_?;
                  startPoint_00.z = fStack_20;
                  endPoint_00.z = VStack_4.z;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0);
                  fVar26 = (float)uVar23 * fVar9;
                  fStack_33 = (float)uVar24 * fVar9;
                  fStack_34 = fVar17 * fVar9;
                  VStack_4.z = fStack_37 * _UNK_? + (fStack_6 - fStack_34);
                  endPoint_01.y = fStack_36 * _UNK_? + (uStack_5._4_4_ - fStack_33);
                  endPoint_01.x = QStack_35.x * _UNK_? + (fVar31 - fVar26);
                  startPoint_01.y = (uStack_5._4_4_ - fStack_33) - fStack_36 * _UNK_?;
                  startPoint_01.x = (fVar31 - fVar26) - QStack_35.x * _UNK_?;
                  startPoint_01.z = (fStack_6 - fStack_34) - fStack_37 * _UNK_?;
                  endPoint_01.z = VStack_4.z;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0);
                  VStack_4.z = fStack_37 * _UNK_? + fStack_6 + fStack_34;
                  startPoint_02.y = (uStack_5._4_4_ + fStack_33) - fStack_36 * _UNK_?;
                  startPoint_02.x = (fVar31 + fVar26) - QStack_35.x * _UNK_?;
                  startPoint_02.z = (fStack_6 + fStack_34) - fStack_37 * _UNK_?;
                  endPoint_02.y = fStack_36 * _UNK_? + uStack_5._4_4_ + fStack_33;
                  endPoint_02.x = QStack_35.x * _UNK_? + fVar31 + fVar26;
                  endPoint_02.z = VStack_4.z;
                  QStack_27.y = fVar28;
                  QStack_27.z = fVar29;
                  QStack_27.w = fVar30;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_02,endPoint_02,(MethodInfo *)0x0);
                }
                VStack_4.z = 1.0;
                fVar38 = fStack_8 * _UNK_? - fVar9;
                QStack_27.x = fVar31 + fVar22 * fVar38;
                fStack_33 = uStack_5._4_4_ + fVar15 * fVar38;
                fVar39 = fStack_6 + fVar16 * fVar38;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                fVar32 = VStack_4.z;
                QStack_27.z = QStack_27.y;
                QStack_27.y = fStack_33;
                QStack_27.w = 0.0;
                pos.y = fStack_33;
                pos.x = QStack_27.x;
                pos.z = fVar39;
                q.y = (float)pSStack_12;
                q.x = (float)puStack_11;
                q.z = fStack_13;
                q.w = fStack_14;
                s.y = fVar9;
                s.x = fVar9;
                s.z = VStack_4.z;
                fVar40 = fVar9;
                fVar41 = fVar9;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos,q,s,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                VStack_4.z = 0.0;
                auVar43._4_8_ = 0;
                auVar43._0_4_ = _UNK_?;
                fVar44 = _UNK_?;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_21,(Vector3)(auVar43 << 0x20),(MethodInfo *)0x0);
                fVar30 = fStack_13;
                fVar17 = pQVar45->x;
                fVar26 = pQVar45->y;
                fVar28 = pQVar45->z;
                fVar29 = pQVar45->w;
                fStack_46 = fStack_14;
                uStack_19 = CONCAT44(fStack_14,fStack_14);
                fStack_20 = fStack_14;
                QStack_21.x = (float)pSStack_12;
                QStack_21.y = (float)pSStack_12;
                QStack_21.z = (float)pSStack_12;
                QStack_21.w = (float)pSStack_12;
                QStack_35.x = (fStack_14 * fVar17 + (float)puStack_11 * fVar29 + fStack_13 * fVar26)
                              - (float)pSStack_12 * fVar28;
                QStack_35.y = (fStack_14 * fVar26 + (float)pSStack_12 * fVar29 +
                              (float)puStack_11 * fVar28) - fStack_13 * fVar17;
                QStack_35.z = (fStack_14 * fVar28 + fStack_13 * fVar29 + (float)pSStack_12 * fVar17)
                              - (float)puStack_11 * fVar26;
                QStack_35.w = ((fStack_14 * fVar29 - (float)puStack_11 * fVar17) -
                              (float)pSStack_12 * fVar26) - fStack_13 * fVar28;
                pos_00.y = QStack_27.y;
                pos_00.x = QStack_27.x;
                pos_00.z = fVar39;
                q_00.y = QStack_35.y;
                q_00.x = QStack_35.x;
                q_00.z = QStack_35.z;
                q_00.w = QStack_35.w;
                s_00.y = fVar9;
                s_00.x = fVar40;
                s_00.z = fVar32;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos_00,q_00,s_00,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                VStack_4.z = 0.0;
                euler.y = 0.0;
                euler.z = 0.0;
                euler.x = fVar44;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad(&QStack_35,euler,(MethodInfo *)0x0);
                fVar17 = pQVar45->x;
                fVar26 = pQVar45->y;
                fVar28 = pQVar45->z;
                fVar29 = pQVar45->w;
                QStack_35.x = (fStack_46 * fVar17 + (float)puStack_11 * fVar29 + fVar30 * fVar26) -
                              QStack_21.x * fVar28;
                QStack_35.y = (fStack_46 * fVar26 + QStack_21.x * fVar29 +
                              (float)puStack_11 * fVar28) - fVar30 * fVar17;
                QStack_35.z = (fStack_46 * fVar28 + fVar30 * fVar29 + QStack_21.x * fVar17) -
                              (float)puStack_11 * fVar26;
                QStack_35.w = ((fStack_46 * fVar29 - (float)puStack_11 * fVar17) -
                              QStack_21.x * fVar26) - fVar30 * fVar28;
                pos_01.y = QStack_27.y;
                pos_01.x = QStack_27.x;
                pos_01.z = fVar39;
                q_01.y = QStack_35.y;
                q_01.x = QStack_35.x;
                q_01.z = QStack_35.z;
                q_01.w = QStack_35.w;
                s_01.y = fVar41;
                s_01.x = fVar41;
                s_01.z = fVar41;
                VStack_4.z = fVar41;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos_01,q_01,s_01,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                fVar31 = fVar31 - fVar22 * fVar38;
                fStack_33 = uStack_5._4_4_ - fVar15 * fVar38;
                fVar26 = fStack_6 - fVar16 * fVar38;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                VStack_4.z = 3.1415927;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_27,(Vector3)(ZEXT412(0x40490fdb) << 0x40),
                                     (MethodInfo *)0x0);
                fVar15 = pQVar45->x;
                fVar16 = pQVar45->y;
                fVar17 = pQVar45->z;
                fVar22 = pQVar45->w;
                QStack_27.x = (fStack_46 * fVar15 + (float)puStack_11 * fVar22 + fVar30 * fVar16) -
                              QStack_21.x * fVar17;
                QStack_27.y = (fStack_46 * fVar16 + QStack_21.x * fVar22 + (float)puStack_11 * fVar17
                              ) - fVar30 * fVar15;
                QStack_27.z = (fStack_46 * fVar17 + fVar30 * fVar22 + QStack_21.x * fVar15) -
                              (float)puStack_11 * fVar16;
                QStack_27.w = ((fStack_46 * fVar22 - (float)puStack_11 * fVar15) -
                              QStack_21.x * fVar16) - fVar30 * fVar17;
                pos_02.y = fStack_33;
                pos_02.x = fVar31;
                pos_02.z = fVar26;
                q_02.y = QStack_27.y;
                q_02.x = QStack_27.x;
                q_02.z = QStack_27.z;
                q_02.w = QStack_27.w;
                s_02.y = fVar9;
                s_02.x = fVar40;
                s_02.z = fVar32;
                fVar22 = fStack_33;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos_02,q_02,s_02,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                VStack_4.z = 0.0;
                auVar47._4_8_ = 0;
                auVar47._0_4_ = fVar44;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_27,(Vector3)(auVar47 << 0x20),(MethodInfo *)0x0);
                QStack_27.x = pQVar45->x;
                QStack_27.y = pQVar45->y;
                QStack_27.z = pQVar45->z;
                QStack_27.w = pQVar45->w;
                VStack_4.z = 3.1415927;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_35,(Vector3)(ZEXT412(0x40490fdb) << 0x40),
                                     (MethodInfo *)0x0);
                fVar15 = pQVar45->x;
                fVar16 = pQVar45->y;
                fVar17 = pQVar45->z;
                QStack_35.y = pQVar45->w;
                fStack_34 = (QStack_35.y * QStack_27.x + fVar15 * QStack_27.w + fVar17 * QStack_27.y)
                            - fVar16 * QStack_27.z;
                fStack_33 = (QStack_27.y * QStack_35.y + fVar16 * QStack_27.w + QStack_27.z * fVar15)
                            - fVar17 * QStack_27.x;
                fVar28 = (QStack_27.z * QStack_35.y + fVar17 * QStack_27.w + fVar16 * QStack_27.x) -
                         QStack_27.y * fVar15;
                QStack_35.x = QStack_35.y * QStack_27.w;
                fVar15 = ((QStack_35.x - QStack_27.x * fVar15) - fVar16 * QStack_27.y) -
                        QStack_27.z * fVar17;
                QStack_27.x = ((float)puStack_11 * fVar15 + fStack_46 * fStack_34 +
                              fVar30 * fStack_33) - QStack_21.x * fVar28;
                QStack_27.y = (QStack_21.x * fVar15 + fStack_46 * fStack_33 +
                              (float)puStack_11 * fVar28) - fVar30 * fStack_34;
                QStack_27.z = (fVar30 * fVar15 + fStack_46 * fVar28 + QStack_21.x * fStack_34) -
                              (float)puStack_11 * fStack_33;
                QStack_27.w = ((fStack_46 * fVar15 - (float)puStack_11 * fStack_34) -
                              QStack_21.x * fStack_33) - fVar30 * fVar28;
                pos_03.y = fVar22;
                pos_03.x = fVar31;
                pos_03.z = fVar26;
                q_03.y = QStack_27.y;
                q_03.x = QStack_27.x;
                q_03.z = QStack_27.z;
                q_03.w = QStack_27.w;
                s_03.y = fVar9;
                s_03.x = fVar40;
                s_03.z = fVar32;
                QStack_35.z = QStack_35.y;
                QStack_35.w = QStack_35.y;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos_03,q_03,s_03,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                VStack_4.z = 0.0;
                euler_00.y = 0.0;
                euler_00.z = 0.0;
                euler_00.x = fVar44;
                pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff10,euler_00,(MethodInfo *)0x0);
                fVar9 = pQVar45->x;
                fVar15 = pQVar45->y;
                fVar16 = pQVar45->z;
                fVar17 = pQVar45->w;
                fVar28 = (fStack_46 * fVar9 + (float)puStack_11 * fVar17 + fVar30 * fVar15) -
                         QStack_21.x * fVar16;
                QStack_21.y = (fStack_46 * fVar15 + QStack_21.x * fVar17 + (float)puStack_11 * fVar16)
                              - fVar30 * fVar9;
                QStack_21.z = (fStack_46 * fVar16 + fVar30 * fVar17 + QStack_21.x * fVar9) -
                              (float)puStack_11 * fVar15;
                QStack_21.w = ((fStack_46 * fVar17 - (float)puStack_11 * fVar9) -
                              QStack_21.x * fVar15) - fVar30 * fVar16;
                pos_04.y = fVar22;
                pos_04.x = fVar31;
                pos_04.z = fVar26;
                q_04.y = QStack_21.y;
                q_04.x = fVar28;
                q_04.z = QStack_21.z;
                q_04.w = QStack_21.w;
                s_04.y = fVar41;
                s_04.x = fVar41;
                s_04.z = fVar41;
                QStack_21.x = fVar28;
                VStack_4.z = fVar41;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffeb0,pos_04,q_04,s_04,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar42,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                CharacterControllerGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
                pGVar48 = (this->fields)._leftTick;
                if (pGVar48 != (GizmoCap2D *)0x0) {
                  (*(code *)(pGVar48->klass->vtable).Render_1.method)();
                  pGVar48 = (this->fields)._rightTick;
                  if (pGVar48 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar48->klass->vtable).Render_1.method)();
                    pGVar48 = (this->fields)._topTick;
                    if (pGVar48 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar48->klass->vtable).Render_1.method)();
                      pGVar48 = (this->fields)._bottomTick;
                      if (pGVar48 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar48->klass->vtable).Render_1.method)();
                        pGVar48 = (this->fields)._frontTick;
                        if (pGVar48 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar48->klass->vtable).Render_1.method)();
                          pGVar48 = (this->fields)._backTick;
                          if (pGVar48 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar48->klass->vtable).Render_1.method)();
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
  func_?();
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_OnGizmoUpdateBegin
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  bVar1 = CharacterControllerGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    pVVar3 = CharacterControllerGizmo3D_CalcWorldCenter
                       ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
    if (this_00 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      CharacterControllerGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        CharacterControllerGizmo3D_UpdateHoverPriorities(this,camera,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_OwnsHandle
               (CharacterControllerGizmo3D *this,int32_t handleId,MethodInfo *method)

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
              return handleId == (pGVar3->fields)._id;
            }
          }
        }
      }
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_SetupSharedLookAndFeel
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._sharedLookAndFeel;
  if ((pCVar1 != (CharacterControllerGizmo3DLookAndFeel *)0x0) ||
     (pCVar1 = (this->fields)._lookAndFeel, pCVar1 != (CharacterControllerGizmo3DLookAndFeel *)0x0))
  {
    pGVar2 = (pCVar1->fields)._tickLookAndFeel;
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

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_UpdateHandles
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pVVar1 = CharacterControllerGizmo3D_CalcWorldCenter
                        ((Vector3 *)&stack0xffffffd0,this,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pCVar5 = (this->fields)._targetController;
    if (pCVar5 != (CharacterController *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
      CharacterController_get_radius(pCVar5,(MethodInfo *)0x0);
      CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar5 = (this->fields)._targetController;
      if (pCVar5 != (CharacterController *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
        CharacterController_get_height(pCVar5,(MethodInfo *)0x0);
        pCVar5 = (this->fields)._targetController;
        if (pCVar5 != (CharacterController *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar5,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                      ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            fVar7 = (TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).w;
            pCVar5 = (this->fields)._targetController;
            if (pCVar5 != (CharacterController *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar5,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
                fVar8 = pVVar1->x;
                fVar9 = pVVar1->y;
                fVar10 = pVVar1->z;
                rotation.y = fVar8;
                rotation.x = (float)pTVar6;
                rotation.z = fVar9;
                rotation.w = fVar7;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffd0,rotation,*pVVar1,(MethodInfo *)0x0
                                    );
                fVar11 = pVVar1->x;
                fVar12 = pVVar1->y;
                pCVar5 = (this->fields)._targetController;
                if (pCVar5 != (CharacterController *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar5,(MethodInfo *)0x0);
                  if (pTVar6 != (Transform *)0x0) {
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
                    rotation_00.y = fVar8;
                    rotation_00.x = fVar7;
                    rotation_00.z = fVar9;
                    rotation_00.w = fVar10;
                    fVar13 = fVar8;
                    fVar14 = fVar9;
                    fVar15 = fVar10;
                    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        ((Vector3 *)&stack0xffffffd0,rotation_00,*pVVar1,
                                         (MethodInfo *)0x0);
                    uVar16._0_4_ = pVVar1->x;
                    fStack_17 = pVVar1->y;
                    fVar18 = pVVar1->z;
                    pCVar5 = (this->fields)._targetController;
                    _fStack_90 = uVar16;
                    if (pCVar5 != (CharacterController *)0x0) {
                      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar5,(MethodInfo *)0x0);
                      if (pTVar6 != (Transform *)0x0) {
                        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
                        pVVar1 = (Vector3 *)&stack0xffffffd0;
                        rotation_01.y = fVar8;
                        rotation_01.x = fVar7;
                        rotation_01.z = fVar9;
                        rotation_01.w = fVar10;
                        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                  Quaternion_op_Multiply_1
                                            (pVVar1,rotation_01,*pVVar19,(MethodInfo *)0x0);
                        uVar20 = pVVar19->x;
                        uVar21 = pVVar19->y;
                        fVar9 = pVVar19->z;
                        fVar22 = fVar13 * 4.1583768e-29;
                        fVar23 = fVar14 * 4.1583768e-29;
                        fVar24 = fVar15 * 4.1583768e-29;
                        fVar10 = fVar2 - fVar22;
                        fVar25 = fVar4 - fVar24;
                        pGVar26 = (this->fields)._leftTick;
                        if (this_01 != (Camera *)0x0) {
                          position_04.y = (float)uVar3 - fVar23;
                          position_04.x = fVar10;
                          position_04.z = fVar25;
                          fVar27 = fVar9;
                          pCVar28 = this_01;
                          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_WorldToScreenPoint_1
                                              ((Vector3 *)&stack0xffffffc0,this_01,position_04,
                                               (MethodInfo *)0x0);
                          value.x = pVVar19->x;
                          value.y = pVVar19->y;
                          if (pGVar26 != (GizmoCap2D *)0x0) {
                            GizmoCap2D::GizmoCap2D_set_Position(pGVar26,value,(MethodInfo *)0x0);
                            pCVar29 = (this->fields)._extentTicks;
                            if (pCVar29 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                              if (pCVar29->max_length < 3) goto code_?;
                              pCVar30 = pCVar29->vector[2];
                              if (pCVar30 != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                (pCVar30->fields).Position.x = (float)pCVar28;
                                (pCVar30->fields).Position.y = fVar10;
                                (pCVar30->fields).Position.z = fVar25;
                                pCVar29 = (this->fields)._extentTicks;
                                if (pCVar29 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                                  if (pCVar29->max_length < 3) goto code_?;
                                  pCVar30 = pCVar29->vector[2];
                                  uVar31 = (uint)fVar14 ^
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  ;
                                  fVar15 = (float)((uint)fVar15 ^
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                  if (pCVar30 != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                    (pCVar30->fields).Normal.x =
                                         (float)((uint)fVar13 ^
                                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                );
                                    (pCVar30->fields).Normal.y = (float)uVar31;
                                    (pCVar30->fields).Normal.z = fVar15;
                                    fVar24 = fVar4 + fVar24;
                                    fVar22 = fVar2 + fVar22;
                                    fVar23 = (float)uVar3 + fVar23;
                                    pGVar26 = (this->fields)._rightTick;
                                    position.y = fVar23;
                                    position.x = fVar22;
                                    position.z = fVar24;
                                    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                              Camera_WorldToScreenPoint_1
                                                        ((Vector3 *)&stack0xffffff80,this_01,
                                                         position,(MethodInfo *)0x0);
                                    value_00.x = pVVar19->x;
                                    value_00.y = pVVar19->y;
                                    if (pGVar26 != (GizmoCap2D *)0x0) {
                                      GizmoCap2D::GizmoCap2D_set_Position
                                                (pGVar26,value_00,(MethodInfo *)0x0);
                                      pCVar29 = (this->fields)._extentTicks;
                                      if (pCVar29 != (CharacterControllerGizmo3D_ExtentTick__Array *)
                                                    0x0) {
                                        if (pCVar29->max_length < 4) goto code_?;
                                        pCVar30 = pCVar29->vector[3];
                                        if (pCVar30 != (CharacterControllerGizmo3D_ExtentTick *)0x0)
                                        {
                                          (pCVar30->fields).Position.x = fVar22;
                                          (pCVar30->fields).Position.y = fVar23;
                                          (pCVar30->fields).Position.z = fVar24;
                                          pCVar29 = (this->fields)._extentTicks;
                                          if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                             ) {
                                            if (pCVar29->max_length < 4) goto code_?;
                                            pCVar30 = pCVar29->vector[3];
                                            if (pCVar30 != (CharacterControllerGizmo3D_ExtentTick *)
                                                          0x0) {
                                              (pCVar30->fields).Normal.x = fVar11;
                                              (pCVar30->fields).Normal.y = fVar12;
                                              fVar10 = fStack_32 * fVar7;
                                              (pCVar30->fields).Normal.z = fVar8;
                                              fVar13 = (float)puStack_33 * fVar7;
                                              fVar7 = fVar18 * fVar7;
                                              fVar12 = fVar2 + fVar10 * _UNK_?;
                                              fVar11 = (float)uVar3 + fVar13 * _UNK_?;
                                              fVar8 = fVar4 + fVar7 * _UNK_?;
                                              pGVar26 = (this->fields)._topTick;
                                              position_00.y = fVar11;
                                              position_00.x = fVar12;
                                              position_00.z = fVar8;
                                              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Camera::Camera_WorldToScreenPoint_1
                                                                  ((Vector3 *)&stack0xffffff80,
                                                                   this_01,position_00,
                                                                   (MethodInfo *)0x0);
                                              value_01.x = pVVar19->x;
                                              value_01.y = pVVar19->y;
                                              if (pGVar26 != (GizmoCap2D *)0x0) {
                                                GizmoCap2D::GizmoCap2D_set_Position
                                                          (pGVar26,value_01,(MethodInfo *)0x0);
                                                pCVar29 = (this->fields)._extentTicks;
                                                if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                  if (pCVar29->max_length < 6) goto code_?;
                                                  pCVar30 = pCVar29->vector[5];
                                                  if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Position.x = fVar12;
                                                    (pCVar30->fields).Position.y = fVar11;
                                                    (pCVar30->fields).Position.z = fVar8;
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length < 6)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[5];
                                                    if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x = (float)uVar16;
                                                    (pCVar30->fields).Normal.y = fStack_17;
                                                    (pCVar30->fields).Normal.z = (float)pVVar1;
                                                    fVar7 = fVar4 - fVar7 * _UNK_?;
                                                    fVar10 = fVar2 - fVar10 * _UNK_?;
                                                    fVar8 = (float)uVar3 - fVar13 * _UNK_?;
                                                    pGVar26 = (this->fields)._bottomTick;
                                                    position_01.y = fVar8;
                                                    position_01.x = fVar10;
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
                                                      pCVar29 = (this->fields)._extentTicks;
                                                      if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length < 5)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[4];
                                                    if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Position.x = fVar10;
                                                    (pCVar30->fields).Position.y = fVar8;
                                                    (pCVar30->fields).Position.z = fVar7;
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length < 5)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[4];
                                                    uVar31 = (uint)puStack_33 ^
                                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar18 = (float)((uint)fVar18 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x =
                                                         (float)((uint)fStack_32 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pCVar30->fields).Normal.y = (float)uVar31;
                                                  fVar7 = (float)uVar20 * 4.1583768e-29;
                                                  (pCVar30->fields).Normal.z = fVar18;
                                                  fVar12 = (float)uVar21 * 4.1583768e-29;
                                                  uVar16._0_4_ = fVar9 * 4.1583768e-29;
                                                  fVar11 = fVar2 - fVar7;
                                                  fVar10 = (float)uVar3 - fVar12;
                                                  fVar8 = fVar4 - (float)uVar16;
                                                  pGVar26 = (this->fields)._frontTick;
                                                  position_02.y = fVar10;
                                                  position_02.x = fVar11;
                                                  position_02.z = fVar8;
                                                  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&fStack_32,this_01
                                                                       ,position_02,
                                                                       (MethodInfo *)0x0);
                                                  value_03.x = pVVar1->x;
                                                  value_03.y = pVVar1->y;
                                                  if (pGVar26 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar26,value_03,(MethodInfo *)0x0);
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length == 0)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[0];
                                                    if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Position.x = fVar11;
                                                    (pCVar30->fields).Position.y = fVar10;
                                                    (pCVar30->fields).Position.z = fVar8;
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length == 0)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[0];
                                                    uVar31 = uVar21 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar9 = (float)((uint)fVar9 ^
                                                                                                                                  
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x =
                                                         (float)(uVar20 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pCVar30->fields).Normal.y = (float)uVar31;
                                                  (pCVar30->fields).Normal.z = fVar9;
                                                  fVar4 = fVar4 + (float)uVar16;
                                                  fVar2 = fVar2 + fVar7;
                                                  fVar12 = (float)uVar3 + fVar12;
                                                  pGVar26 = (this->fields)._backTick;
                                                  position_03.y = fVar12;
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
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length < 2)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[1];
                                                    if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Position.x = fVar2;
                                                    (pCVar30->fields).Position.y = fVar12;
                                                    (pCVar30->fields).Position.z = fVar4;
                                                    pCVar29 = (this->fields)._extentTicks;
                                                    if (pCVar29 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar29->max_length < 2)
                                                    goto code_?;
                                                    pCVar30 = pCVar29->vector[1];
                                                    if (pCVar30 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar30->fields).Normal.x = (float)uVar20;
                                                    (pCVar30->fields).Normal.y = (float)uVar21;
                                                    (pCVar30->fields).Normal.z = fVar27;
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
  func_?();
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_UpdateHoverPriorities
               (CharacterControllerGizmo3D *this,Camera *camera,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields)._extentTicks;
  if (pCVar2 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
    if ((pCVar2->max_length < 3) || (pCVar3 = pCVar2->vector[2], pCVar2->max_length < 4))
    goto code_?;
    pCVar4 = pCVar2->vector[3];
    if ((((pCVar3 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
         (((pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
           (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0)) &&
          (pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0)))) &&
        ((((pPVar7->fields)._priority = 0, pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0 &&
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
            if (pCVar2 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
              if (pCVar2->max_length < 6) goto code_?;
              pCVar3 = pCVar2->vector[5];
              pCVar4 = pCVar2->vector[4];
              if (((((pCVar3 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
                    (pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) &&
                   ((pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0 &&
                    ((pPVar7 = (pGVar6->fields)._hoverPriority2D, pPVar7 != (Priority *)0x0 &&
                     ((pPVar7->fields)._priority = 2,
                     pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0)))))) &&
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
                this = (CharacterControllerGizmo3D *)(pCVar3->fields).Normal.z;
                if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                  this = (CharacterControllerGizmo3D *)TypeInfo__RTG__CameraEx;
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
                      if (pCVar2 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                        if ((pCVar2->max_length == 0) ||
                           (pCVar3 = pCVar2->vector[0], pCVar2->max_length < 2))
                        goto code_?;
                        pCVar4 = pCVar2->vector[1];
                        if (((pCVar3 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
                            ((pGVar5 = (pCVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0 &&
                             (pGVar6 = (pGVar5->fields)._._handle, pGVar6 != (GizmoHandle *)0x0))
                            )) && ((pPVar7 = (pGVar6->fields)._hoverPriority2D,
                                   pPVar7 != (Priority *)0x0 &&
                                   (((((pPVar7->fields)._priority = 4,
                                      pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0 &&
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

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_UpdateTickColors
               (CharacterControllerGizmo3D *this,Camera *camera,MethodInfo *method)

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
      uStack_4._4_4_ = (CharacterControllerGizmo3D_ExtentTick__Array *)pVVar2->y;
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
        if (pCVar14 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
          ppCStack_19 = pCVar14->vector;
          while( true ) {
            if ((int)pCVar14->max_length <= (int)uStack_13) {
              return;
            }
            if (pCVar14->max_length <= uStack_13) break;
            pCVar20 = *ppCStack_19;
            if (pCVar20 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
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
              if ((pCVar32 == (CharacterControllerGizmo3DLookAndFeel *)0x0) &&
                 (pCVar32 = (this->fields)._lookAndFeel,
                 pCVar32 == (CharacterControllerGizmo3DLookAndFeel *)0x0)) goto code_?;
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
              if ((pCVar32 == (CharacterControllerGizmo3DLookAndFeel *)0x0) &&
                 (pCVar32 = (this->fields)._lookAndFeel,
                 pCVar32 == (CharacterControllerGizmo3DLookAndFeel *)0x0)) goto code_?;
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


/* CharacterControllerGizmo3D() */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D__ctor
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CharacterController3DSnapshot);
    func_?(&TypeInfo__RTG__CharacterControllerGizmo3DHotkeys);
    func_?(&TypeInfo__RTG__CharacterControllerGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__CharacterControllerGizmo3DSettings);
    func_?(&TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pCVar1 = (CharacterControllerGizmo3D_ExtentTick__Array *)
           func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick,6);
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
  pCVar5 = TypeInfo__RTG__CharacterController3DSnapshot;
  pCVar6 = (CharacterController3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar5);
  (this->fields)._preChangeColliderSnapshot = pCVar6;
  func_?();
  pCVar5 = TypeInfo__RTG__CharacterController3DSnapshot;
  pCVar6 = (CharacterController3DSnapshot *)func_?();
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
  this_01 = (CharacterControllerGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__CharacterControllerGizmo3DLookAndFeel);
  CharacterControllerGizmo3DLookAndFeel::CharacterControllerGizmo3DLookAndFeel__ctor
            (this_01,(MethodInfo *)0x0);
  ppCVar9 = &(this->fields)._lookAndFeel;
  *ppCVar9 = this_01;
  func_?(ppCVar9,this_01);
  method_01 = TypeInfo__RTG__CharacterControllerGizmo3DSettings;
  value = (CharacterControllerGizmo3DSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  (value->fields)._heightSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields)._settings = value;
  func_?();
  pCStack10 = TypeInfo__RTG__CharacterControllerGizmo3DHotkeys;
  value_00 = (CharacterControllerGizmo3DHotkeys *)func_?();
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


/* CharacterControllerGizmo3DHotkeys get_Hotkeys() */

CharacterControllerGizmo3DHotkeys *
Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_get_Hotkeys
          (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._sharedHotkeys;
  if (pCVar1 == (CharacterControllerGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pCVar1;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_get_IsSnapEnabled
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pCVar1 = (this->fields)._sharedHotkeys;
  if (((pCVar1 != (CharacterControllerGizmo3DHotkeys *)0x0) ||
      (pCVar1 = (this->fields)._hotkeys, pCVar1 != (CharacterControllerGizmo3DHotkeys *)0x0)) &&
     (this_00 = (pCVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* CharacterControllerGizmo3DLookAndFeel get_LookAndFeel() */

CharacterControllerGizmo3DLookAndFeel *
Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_get_LookAndFeel
          (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._sharedLookAndFeel;
  if (pCVar1 == (CharacterControllerGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return pCVar1;
}


/* CharacterControllerGizmo3DSettings get_Settings() */

CharacterControllerGizmo3DSettings *
Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_get_Settings
          (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._sharedSettings;
  if (pCVar1 == (CharacterControllerGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return pCVar1;
}


/* Void set_SharedLookAndFeel(CharacterControllerGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_set_SharedLookAndFeel
               (CharacterControllerGizmo3D *this,CharacterControllerGizmo3DLookAndFeel *value,
               MethodInfo *method)

{
  ppCVar1 = &(this->fields)._sharedLookAndFeel;
  *ppCVar1 = value;
  func_?(ppCVar1,value);
  CharacterControllerGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

