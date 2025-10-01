
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
    func_?(&(this->fields)._frontTick,pGVar3);
    pGVar3 = (this->fields)._frontTick;
    if ((pGVar3 == (GizmoCap2D *)0x0) ||
       (pGVar4 = (pGVar3->fields)._._handle, pGVar4 == (GizmoHandle *)0x0)) goto code_?;
    pGVar6 = (this->fields)._offsetDrag;
    (pGVar4->fields)._DragSession_k__BackingField = (IGizmoDragSession *)pGVar6;
    func_?(&(pGVar4->fields)._DragSession_k__BackingField,pGVar6);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 3) goto code_?;
    pCVar8->vector[2] = pCVar9;
    func_?(pCVar8->vector + 2,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 3) goto code_?;
    pCVar9 = pCVar8->vector[2];
    pGVar3 = (this->fields)._leftTick;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 4) goto code_?;
    pCVar8->vector[3] = pCVar9;
    func_?(pCVar8->vector + 3,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 4) goto code_?;
    pCVar9 = pCVar8->vector[3];
    pGVar3 = (this->fields)._rightTick;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 6) goto code_?;
    pCVar8->vector[5] = pCVar9;
    func_?(pCVar8->vector + 5,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 6) goto code_?;
    pCVar9 = pCVar8->vector[5];
    pGVar3 = (this->fields)._topTick;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length < 5) goto code_?;
    pCVar8->vector[4] = pCVar9;
    func_?(pCVar8->vector + 4,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length < 5) goto code_?;
    pCVar9 = pCVar8->vector[4];
    pGVar3 = (this->fields)._bottomTick;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (pCVar8->max_length == 0) goto code_?;
    pCVar8->vector[0] = pCVar9;
    func_?(pCVar8->vector,pCVar9);
    pCVar8 = (this->fields)._extentTicks;
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pCVar8->max_length == 0) goto code_?;
    pCVar9 = pCVar8->vector[0];
    pGVar3 = (this->fields)._frontTick;
    if (pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) goto code_?;
    (pCVar9->fields).Tick = pGVar3;
    func_?(&(pCVar9->fields).Tick,pGVar3);
    pCVar8 = (this->fields)._extentTicks;
    pCVar9 = (CharacterControllerGizmo3D_ExtentTick *)
              func_?(TypeInfo__RTG__CharacterControllerGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar9,(MethodInfo *)0x0);
    if (pCVar8 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if ((pCVar9 == (CharacterControllerGizmo3D_ExtentTick *)0x0) ||
       (iVar10 = func_?(pCVar9,(pCVar8->klass->_0).element_class), iVar10 != 0)) {
      if (pCVar8->max_length < 2) goto code_?;
      pCVar8->vector[1] = pCVar9;
      func_?(pCVar8->vector + 1,pCVar9);
      pCVar8 = (this->fields)._extentTicks;
      if (pCVar8 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
        if (pCVar8->max_length < 2) goto code_?;
        pCVar9 = pCVar8->vector[1];
        pGVar3 = (this->fields)._backTick;
        if (pCVar9 != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
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
          uVar15 = uVar14 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
          uVar16 = (uint)(TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
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
          CharacterControllerGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
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
  pCVar7 = (&(this->fields)._settings)
           [(this->fields)._sharedSettings != (CharacterControllerGizmo3DSettings *)0x0];
  if (pCVar7 == (CharacterControllerGizmo3DSettings *)0x0) goto code_?;
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
      value_01 = (Object *)func_?(TypeInfo__RTG__CharacterController3DSnapshot);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      if (pCVar2 != (CharacterController3DSnapshot *)0x0) {
        value_01[1].klass = (Object__Class *)(pCVar2->fields)._characterController;
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
    pCVar3 = (&(this->fields)._hotkeys)
              [(this->fields)._sharedHotkeys != (CharacterControllerGizmo3DHotkeys *)0x0];
    if ((pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0) ||
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
        fVar7 = pVVar11->z * fVar10 + fVar7;
        uVar20._4_4_ = (float)uVar19 * fVar10 + SUB84(uVar17,4);
        uVar20._0_4_ = (float)uVar18 * fVar10 + (float)uVar17;
        pCVar3 = (&(this->fields)._hotkeys)
                  [(this->fields)._sharedHotkeys != (CharacterControllerGizmo3DHotkeys *)0x0];
        if ((pCVar3 == (CharacterControllerGizmo3DHotkeys *)0x0) ||
           (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 == (Hotkeys *)0x0))
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
            CharacterController_set_height(pCVar21,fVar7 + fVar7,(MethodInfo *)0x0);
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
              fVar7 = pVVar11->z * fVar10 * _UNK_? + fVar7;
              uVar29._4_4_ = (float)uVar28 * fVar10 * _UNK_? + SUB84(uVar26,4);
              uVar29._0_4_ = (float)uVar27 * fVar10 * _UNK_? + (float)uVar26;
              pCVar3 = (&(this->fields)._hotkeys)
                        [(this->fields)._sharedHotkeys != (CharacterControllerGizmo3DHotkeys *)0x0];
              if ((pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0) &&
                 (pHVar4 = (pCVar3->fields)._scaleFromCenter, pHVar4 != (Hotkeys *)0x0)) {
                bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
                if ((bVar1 == 0) && ((this->fields)._scaleFromCenter == 0)) {
                  pCVar21 = (this->fields)._targetController;
                  if ((pCVar21 == (CharacterController *)0x0) ||
                     (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar21,(MethodInfo *)0x0),
                     pTVar22 == (Transform *)0x0)) goto code_?;
                  position_01.z = fVar7;
                  position_01.x = (float)uVar29;
                  position_01.y = SUB84(uVar29,4);
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
                    fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                             CharacterController_get_height(pCVar21,(MethodInfo *)0x0);
                    pCVar21 = (this->fields)._targetController;
                    if (pCVar21 != (CharacterController *)0x0) {
                      fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                               CharacterController_get_radius(pCVar21,(MethodInfo *)0x0);
                      if (fVar10 + fVar10 <= fVar7) goto code_?;
                      pCVar30 = (this->fields)._targetController;
                      if (pCVar30 != (CharacterController *)0x0) {
                        puVar31 = &UNK_?;
                        fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                                 CharacterController_get_radius(pCVar30,(MethodInfo *)0x0);
                        fVar7 = 0.0;
                        puVar32 = &UNK_?;
                        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                        CharacterController_set_height(pCVar30,fVar10 + fVar10,(MethodInfo *)0x0);
                        pCVar30 = (this->fields)._targetController;
                        if (pCVar30 != (CharacterController *)0x0) {
                          fVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                                   CharacterController_get_height(pCVar30,(MethodInfo *)0x0);
                          fVar13 = CharacterControllerGizmo3D_CalcHeightScale
                                             (this,(MethodInfo *)0x0);
                          pGVar2 = (this->fields)._offsetDrag;
                          fVar7 = fVar13 * fVar10 - fVar7;
                          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                            pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                                ((Vector3 *)&stack0xffffffc0,pGVar2,
                                                 (MethodInfo *)0x0);
                            uVar33 = pVVar11->x;
                            uVar34 = pVVar11->y;
                            fVar10 = pVVar11->z * fVar7 * _UNK_? + (float)pCVar21;
                            uVar35._4_4_ = (float)uVar34 * fVar7 * _UNK_? + (float)puVar31;
                            uVar35._0_4_ = (float)uVar33 * fVar7 * _UNK_? + (float)puVar32;
                            pCVar3 = (&(this->fields)._hotkeys)
                                      [(this->fields)._sharedHotkeys !=
                                       (CharacterControllerGizmo3DHotkeys *)0x0];
                            if ((pCVar3 != (CharacterControllerGizmo3DHotkeys *)0x0) &&
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
                                position.x = (float)uVar35;
                                position.y = SUB84(uVar35,4);
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
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
    pVVar3 = CharacterControllerGizmo3D_CalcWorldCenter
                        ((Vector3 *)&QStack_4,this,(MethodInfo *)0x0);
    fVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    fVar7 = pVVar3->z;
    pCVar8 = (this->fields)._targetController;
    if (pCVar8 != (CharacterController *)0x0) {
      fStack_9 = UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
                  CharacterController_get_radius(pCVar8,(MethodInfo *)0x0);
      fVar10 = CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      fStack_9 = fVar10 * fStack_9;
      fStack_9 = CharacterControllerGizmo3D_CalcWorldHeight(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar10 = (pQVar11->identityQuaternion).x;
      fVar12 = (pQVar11->identityQuaternion).y;
      fVar13 = (pQVar11->identityQuaternion).z;
      fVar14 = (pQVar11->identityQuaternion).w;
      fStack_15 = (pQVar11->identityQuaternion).x;
      puStack_16 = (undefined *)(pQVar11->identityQuaternion).y;
      fVar17 = (pQVar11->identityQuaternion).z;
      fVar18 = (pQVar11->identityQuaternion).w;
      pCVar8 = (this->fields)._targetController;
      if ((pCVar8 != (CharacterController *)0x0) &&
         (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar8,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0))
      {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&QStack_4,pTVar19,(MethodInfo *)0x0);
        rotation.y = (float)puStack_16;
        rotation.x = fStack_15;
        rotation.z = fVar17;
        rotation.w = fVar18;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&QStack_4,rotation,*pVVar3,(MethodInfo *)0x0);
        uStack_20._0_4_ = pVVar3->x;
        uStack_20._4_4_ = pVVar3->y;
        fVar17 = pVVar3->z;
        pCVar8 = (this->fields)._targetController;
        if ((pCVar8 != (CharacterController *)0x0) &&
           (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar8,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0
           )) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)&QStack_4,pTVar19,(MethodInfo *)0x0);
          rotation_00.y = fVar12;
          rotation_00.x = fVar10;
          rotation_00.z = fVar13;
          rotation_00.w = fVar14;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&QStack_4,rotation_00,*pVVar3,(MethodInfo *)0x0);
          uVar21 = pVVar3->x;
          uVar22 = pVVar3->y;
          fVar10 = pVVar3->z;
          pCVar8 = (this->fields)._targetController;
          if ((pCVar8 != (CharacterController *)0x0) &&
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar8,(MethodInfo *)0x0),
             pTVar19 != (Transform *)0x0)) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&QStack_4,pTVar19,(MethodInfo *)0x0);
            puVar23 = (undefined *)pVVar3->x;
            fVar13 = pVVar3->y;
            fVar18 = pVVar3->z;
            QStack_24.w = (float)&UNK_?;
            rotation_01.y = (float)puVar23;
            rotation_01.x = (float)pTVar19;
            rotation_01.z = fVar13;
            rotation_01.w = fVar14;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&QStack_4,rotation_01,*pVVar3,(MethodInfo *)0x0);
            uVar25 = pVVar3->x;
            uVar26 = pVVar3->y;
            fVar27 = pVVar3->z;
            if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor ==
                0) {
              uStack_20 = CONCAT44(uStack_20._4_4_,TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>)
              ;
              func_?();
            }
            this_01 = (GizmoLineMaterial *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
            if (this_01 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (this_01,(MethodInfo *)0x0);
              pCVar28 = (&(this->fields)._lookAndFeel)
                        [(this->fields)._sharedLookAndFeel !=
                         (CharacterControllerGizmo3DLookAndFeel *)0x0];
              if (pCVar28 != (CharacterControllerGizmo3DLookAndFeel *)0x0) {
                GizmoLineMaterial::GizmoLineMaterial_SetColor
                          (this_01,(pCVar28->fields)._wireColor,(MethodInfo *)0x0);
                GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                fStack_29 = fStack_9 - (fVar12 + fVar12);
                if (0.0 < fStack_29) {
                  QStack_4.z = (fVar7 - fVar17 * fVar12) - fVar10 * fStack_29 * _UNK_?;
                  endPoint.y = ((float)uVar6 - uStack_20._4_4_ * fVar12) +
                               (float)uVar22 * fStack_29 * _UNK_?;
                  endPoint.x = (fVar5 - (float)uStack_20 * fVar12) +
                               (float)uVar21 * fStack_29 * _UNK_?;
                  startPoint.y = ((float)uVar6 - uStack_20._4_4_ * fVar12) -
                                 (float)uVar22 * fStack_29 * _UNK_?;
                  startPoint.x = (fVar5 - (float)uStack_20 * fVar12) -
                                 (float)uVar21 * fStack_29 * _UNK_?;
                  startPoint.z = QStack_4.z;
                  endPoint.z = (fVar7 - fVar17 * fVar12) + fVar10 * fStack_29 * _UNK_?;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
                  QStack_4.z = fVar10 * fStack_29 * _UNK_? + fVar17 * fVar12 + fVar7;
                  endPoint_00.y =
                       (float)uVar22 * fStack_29 * _UNK_? +
                       uStack_20._4_4_ * fVar12 + (float)uVar6;
                  endPoint_00.x =
                       (float)uVar21 * fStack_29 * _UNK_? + (float)uStack_20 * fVar12 + fVar5;
                  startPoint_00.y =
                       (uStack_20._4_4_ * fVar12 + (float)uVar6) -
                       (float)uVar22 * fStack_29 * _UNK_?;
                  startPoint_00.x =
                       ((float)uStack_20 * fVar12 + fVar5) -
                       (float)uVar21 * fStack_29 * _UNK_?;
                  startPoint_00.z = (fVar17 * fVar12 + fVar7) - fVar10 * fStack_29 * _UNK_?;
                  endPoint_00.z = QStack_4.z;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0);
                  QStack_4.z = fVar10 * fStack_29 * _UNK_? + (fVar7 - fVar27 * fVar12);
                  endPoint_01.y =
                       (float)uVar22 * fStack_29 * _UNK_? +
                       ((float)uVar6 - (float)uVar26 * fVar12);
                  endPoint_01.x =
                       (float)uVar21 * fStack_29 * _UNK_? + (fVar5 - (float)uVar25 * fVar12);
                  startPoint_01.y =
                       ((float)uVar6 - (float)uVar26 * fVar12) -
                       (float)uVar22 * fStack_29 * _UNK_?;
                  startPoint_01.x =
                       (fVar5 - (float)uVar25 * fVar12) - (float)uVar21 * fStack_29 * _UNK_?;
                  startPoint_01.z = (fVar7 - fVar27 * fVar12) - fVar10 * fStack_29 * _UNK_?;
                  endPoint_01.z = QStack_4.z;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_01,endPoint_01,(MethodInfo *)0x0);
                  QStack_4.z = fVar10 * fStack_29 * _UNK_? + fVar27 * fVar12 + fVar7;
                  startPoint_02.y =
                       ((float)uVar26 * fVar12 + (float)uVar6) -
                       (float)uVar22 * fStack_29 * _UNK_?;
                  startPoint_02.x =
                       ((float)uVar25 * fVar12 + fVar5) - (float)uVar21 * fStack_29 * _UNK_?;
                  startPoint_02.z = (fVar27 * fVar12 + fVar7) - fVar10 * fStack_29 * _UNK_?;
                  endPoint_02.y =
                       (float)uVar22 * fStack_29 * _UNK_? +
                       (float)uVar26 * fVar12 + (float)uVar6;
                  endPoint_02.x =
                       (float)uVar21 * fStack_29 * _UNK_? + (float)uVar25 * fVar12 + fVar5;
                  endPoint_02.z = QStack_4.z;
                  GLRenderer::GLRenderer_DrawLine3D(startPoint_02,endPoint_02,(MethodInfo *)0x0);
                }
                QStack_4.w = 1.0;
                fVar17 = fStack_9 * _UNK_? - fVar12;
                fStack_29 = fVar17 * (float)uVar22 + (float)uVar6;
                fVar30 = fVar17 * fVar10 + fVar7;
                fVar31 = fVar17 * (float)uVar21 + fVar5;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                fVar32 = fStack_29;
                fVar33 = QStack_4.w;
                pos.y = fStack_29;
                pos.x = fVar31;
                pos.z = fVar30;
                q.y = (float)puVar23;
                q.x = fVar14;
                q.z = fVar13;
                q.w = fVar18;
                s.y = fVar12;
                s.x = fVar12;
                s.z = QStack_4.w;
                fVar34 = fVar12;
                fVar35 = fVar12;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos,q,s,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                fStack_15 = _UNK_?;
                puStack_16 = (undefined *)0x0;
                QStack_4.z = 0.0;
                auVar37._4_8_ = 0;
                auVar37._0_4_ = _UNK_?;
                QStack_24.x = (float)puVar23;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_24,(Vector3)(auVar37 << 0x20),(MethodInfo *)0x0);
                fVar17 = pQVar38->x;
                fVar27 = pQVar38->y;
                fVar39 = pQVar38->z;
                fVar40 = pQVar38->w;
                QStack_4.x = (fVar17 * fVar18 + fVar40 * fVar14 + fVar27 * fVar13) -
                              fVar39 * QStack_24.x;
                QStack_4.y = (fVar40 * QStack_24.x + fVar27 * fVar18 + fVar39 * fVar14) -
                              fVar17 * fVar13;
                QStack_4.z = (fVar39 * fVar18 + fVar40 * fVar13 + fVar17 * QStack_24.x) -
                              fVar27 * fVar14;
                QStack_4.w = ((fVar40 * fVar18 - fVar17 * fVar14) - fVar27 * QStack_24.x) -
                              fVar39 * fVar13;
                pos_00.y = fVar32;
                pos_00.x = fVar31;
                pos_00.z = fVar30;
                q_00.y = QStack_4.y;
                q_00.x = QStack_4.x;
                q_00.z = QStack_4.z;
                q_00.w = QStack_4.w;
                s_00.y = fVar12;
                s_00.x = fVar34;
                s_00.z = fVar33;
                QStack_24.y = QStack_24.x;
                QStack_24.z = QStack_24.x;
                QStack_24.w = QStack_24.x;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos_00,q_00,s_00,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                QStack_4.z = 0.0;
                euler.y = 0.0;
                euler.z = 0.0;
                euler.x = fStack_15;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad(&QStack_4,euler,(MethodInfo *)0x0);
                fVar17 = pQVar38->x;
                fVar27 = pQVar38->y;
                fVar39 = pQVar38->z;
                fVar40 = pQVar38->w;
                pos_01.y = fVar32;
                pos_01.x = fVar31;
                pos_01.z = fVar30;
                q_01.y = (fVar40 * QStack_24.x + fVar27 * fVar18 + fVar39 * fVar14) - fVar17 * fVar13
                ;
                q_01.x = (fVar17 * fVar18 + fVar40 * fVar14 + fVar27 * fVar13) - fVar39 * QStack_24.x
                ;
                q_01.z = (fVar39 * fVar18 + fVar40 * fVar13 + fVar17 * QStack_24.x) - fVar27 * fVar14
                ;
                q_01.w = ((fVar40 * fVar18 - fVar17 * fVar14) - fVar27 * QStack_24.x) -
                         fVar39 * fVar13;
                s_01.y = fVar35;
                s_01.x = fVar35;
                s_01.z = fVar35;
                QStack_4.w = fVar35;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos_01,q_01,s_01,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                fVar17 = fStack_9 * _UNK_? - fVar35;
                fVar5 = fVar5 - fVar17 * (float)uVar21;
                fStack_9 = (float)uVar6 - fVar17 * (float)uVar22;
                fVar7 = fVar7 - fVar17 * fVar10;
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                QStack_4.z = 3.1415927;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff80,
                                     (Vector3)(ZEXT412(0x40490fdb) << 0x40),(MethodInfo *)0x0);
                fVar10 = pQVar38->x;
                fVar17 = pQVar38->y;
                fVar27 = pQVar38->z;
                fVar39 = pQVar38->w;
                pos_02.y = fStack_9;
                pos_02.x = fVar5;
                pos_02.z = fVar7;
                q_02.y = (fVar39 * QStack_24.x + fVar17 * fVar18 + fVar27 * fVar14) - fVar10 * fVar13
                ;
                q_02.x = (fVar10 * fVar18 + fVar39 * fVar14 + fVar17 * fVar13) - fVar27 * QStack_24.x
                ;
                q_02.z = (fVar27 * fVar18 + fVar39 * fVar13 + fVar10 * QStack_24.x) - fVar17 * fVar14
                ;
                q_02.w = ((fVar39 * fVar18 - fVar10 * fVar14) - fVar17 * QStack_24.x) -
                         fVar27 * fVar13;
                s_02.y = fVar12;
                s_02.x = fVar34;
                s_02.z = fVar33;
                fVar31 = fStack_9;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos_02,q_02,s_02,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                QStack_4.z = 0.0;
                auVar41._4_8_ = 0;
                auVar41._0_4_ = fStack_15;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff80,(Vector3)(auVar41 << 0x20),
                                     (MethodInfo *)0x0);
                fVar39 = pQVar38->x;
                fVar40 = pQVar38->y;
                fVar32 = pQVar38->z;
                fVar30 = pQVar38->w;
                QStack_4.z = 3.1415927;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    (&QStack_4,(Vector3)(ZEXT412(0x40490fdb) << 0x40),
                                     (MethodInfo *)0x0);
                fVar10 = pQVar38->x;
                fVar17 = pQVar38->y;
                fVar27 = pQVar38->z;
                QStack_4.y = pQVar38->w;
                fStack_9 = (QStack_4.y * fVar39 + fVar10 * fVar30 + fVar27 * fVar40) -
                            fVar17 * fVar32;
                fStack_29 = (fVar40 * QStack_4.y + fVar17 * fVar30 + fVar32 * fVar10) -
                            fVar27 * fVar39;
                fVar42 = (fVar32 * QStack_4.y + fVar27 * fVar30 + fVar17 * fVar39) -
                         fVar40 * fVar10;
                QStack_4.x = QStack_4.y * fVar30;
                fVar10 = ((QStack_4.x - fVar39 * fVar10) - fVar17 * fVar40) - fVar32 * fVar27;
                pos_03.y = fVar31;
                pos_03.x = fVar5;
                pos_03.z = fVar7;
                q_03.y = (fVar10 * QStack_24.x + fStack_29 * fVar18 + fVar42 * fVar14) -
                         fStack_9 * fVar13;
                q_03.x = (fVar10 * fVar14 + fStack_9 * fVar18 + fStack_29 * fVar13) -
                         fVar42 * QStack_24.x;
                q_03.z = (fVar10 * fVar13 + fVar42 * fVar18 + fStack_9 * QStack_24.x) -
                         fStack_29 * fVar14;
                q_03.w = ((fVar10 * fVar18 - fStack_9 * fVar14) - fStack_29 * QStack_24.x) -
                         fVar42 * fVar13;
                s_03.y = fVar12;
                s_03.x = fVar34;
                s_03.z = fVar33;
                QStack_4.z = QStack_4.y;
                QStack_4.w = QStack_4.y;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos_03,q_03,s_03,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._semiCirclePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                QStack_4.z = 0.0;
                euler_00.y = 0.0;
                euler_00.z = 0.0;
                euler_00.x = fStack_15;
                pQVar38 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&fStack_15,euler_00,(MethodInfo *)0x0);
                fVar10 = pQVar38->x;
                fVar12 = pQVar38->y;
                fVar17 = pQVar38->z;
                fVar27 = pQVar38->w;
                pos_04.y = fVar31;
                pos_04.x = fVar5;
                pos_04.z = fVar7;
                q_04.y = (fVar27 * QStack_24.x + fVar12 * fVar18 + fVar17 * fVar14) - fVar10 * fVar13
                ;
                q_04.x = (fVar10 * fVar18 + fVar27 * fVar14 + fVar12 * fVar13) - fVar17 * QStack_24.x
                ;
                q_04.z = (fVar17 * fVar18 + fVar27 * fVar13 + fVar10 * QStack_24.x) - fVar12 * fVar14
                ;
                q_04.w = ((fVar27 * fVar18 - fVar10 * fVar14) - fVar12 * QStack_24.x) -
                         fVar17 * fVar13;
                s_04.y = fVar35;
                s_04.x = fVar35;
                s_04.z = fVar35;
                QStack_4.w = fVar35;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                    ((Matrix4x4 *)&stack0xfffffed0,pos_04,q_04,s_04,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                          (*pMVar36,(MethodInfo *)0x0);
                GLRenderer::GLRenderer_DrawLines3D((this->fields)._circlePts,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                CharacterControllerGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
                pGVar43 = (this->fields)._leftTick;
                if (pGVar43 != (GizmoCap2D *)0x0) {
                  (*(code *)(pGVar43->klass->vtable).Render_1.method)();
                  pGVar43 = (this->fields)._rightTick;
                  if (pGVar43 != (GizmoCap2D *)0x0) {
                    (*(code *)(pGVar43->klass->vtable).Render_1.method)();
                    pGVar43 = (this->fields)._topTick;
                    if (pGVar43 != (GizmoCap2D *)0x0) {
                      (*(code *)(pGVar43->klass->vtable).Render_1.method)();
                      pGVar43 = (this->fields)._bottomTick;
                      if (pGVar43 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar43->klass->vtable).Render_1.method)();
                        pGVar43 = (this->fields)._frontTick;
                        if (pGVar43 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar43->klass->vtable).Render_1.method)();
                          pGVar43 = (this->fields)._backTick;
                          if (pGVar43 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar43->klass->vtable).Render_1.method)();
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
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
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
  pPVar1 = (PointLightGizmo3DLookAndFeel *)
           (&(this->fields)._lookAndFeel)
           [(this->fields)._sharedLookAndFeel != (CharacterControllerGizmo3DLookAndFeel *)0x0];
  if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
    PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
              (pPVar1,(this->fields)._rightTick,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    pPVar1 = (PointLightGizmo3DLookAndFeel *)
             (&(this->fields)._lookAndFeel)
             [(this->fields)._sharedLookAndFeel != (CharacterControllerGizmo3DLookAndFeel *)0x0];
    if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
      PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
                (pPVar1,(this->fields)._topTick,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
      pPVar1 = (PointLightGizmo3DLookAndFeel *)
               (&(this->fields)._lookAndFeel)
               [(this->fields)._sharedLookAndFeel != (CharacterControllerGizmo3DLookAndFeel *)0x0];
      if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
        PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
                  (pPVar1,(this->fields)._backTick,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
        pPVar1 = (PointLightGizmo3DLookAndFeel *)
                 (&(this->fields)._lookAndFeel)
                 [(this->fields)._sharedLookAndFeel != (CharacterControllerGizmo3DLookAndFeel *)0x0]
        ;
        if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
          PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
                    (pPVar1,(this->fields)._leftTick,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
          pPVar1 = (PointLightGizmo3DLookAndFeel *)
                   (&(this->fields)._lookAndFeel)
                   [(this->fields)._sharedLookAndFeel !=
                    (CharacterControllerGizmo3DLookAndFeel *)0x0];
          if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
            PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
                      (pPVar1,(this->fields)._bottomTick,1,AxisSign__Enum_Negative,(MethodInfo *)0x0
                      );
            pPVar1 = (PointLightGizmo3DLookAndFeel *)
                     (&(this->fields)._lookAndFeel)
                     [(this->fields)._sharedLookAndFeel !=
                      (CharacterControllerGizmo3DLookAndFeel *)0x0];
            if (pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) {
              PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
                        (pPVar1,(this->fields)._frontTick,2,AxisSign__Enum_Negative,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_UpdateHandles
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  fVar1 = VStack_2.z;
  if (this_00 != (Gizmo *)0x0) {
    pCVar3 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    CharacterControllerGizmo3D_CalcWorldCenter((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
    pCVar4 = (this->fields)._targetController;
    fVar1 = VStack_2.z;
    if (pCVar4 != (CharacterController *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
      CharacterController_get_radius(pCVar4,(MethodInfo *)0x0);
      CharacterControllerGizmo3D_CalcRadiusScale(this,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._targetController;
      fVar1 = VStack_2.z;
      if (pCVar4 != (CharacterController *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::CharacterController::
        CharacterController_get_height(pCVar4,(MethodInfo *)0x0);
        pCVar4 = (this->fields)._targetController;
        fVar1 = VStack_2.z;
        if (pCVar4 != (CharacterController *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar4,(MethodInfo *)0x0);
          fVar1 = VStack_2.z;
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                      ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
            VStack_2.x = (pQVar6->identityQuaternion).x;
            VStack_2.y = (pQVar6->identityQuaternion).y;
            VStack_2.z = (pQVar6->identityQuaternion).z;
            puStack_7 = (undefined *)(pQVar6->identityQuaternion).w;
            pCVar4 = (this->fields)._targetController;
            fVar1 = VStack_2.z;
            if (pCVar4 != (CharacterController *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar4,(MethodInfo *)0x0);
              fVar1 = VStack_2.z;
              if (pTVar5 != (Transform *)0x0) {
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
                rotation.y = VStack_2.y;
                rotation.x = VStack_2.x;
                rotation.z = VStack_2.z;
                rotation.w = (float)puStack_7;
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_op_Multiply_1
                                    ((Vector3 *)&stack0xffffffe0,rotation,*pVVar8,(MethodInfo *)0x0
                                    );
                uVar9._0_4_ = pVVar8->x;
                uVar9._4_4_ = pVVar8->y;
                fVar10 = pVVar8->z;
                pCVar4 = (this->fields)._targetController;
                fVar1 = VStack_2.z;
                if (pCVar4 != (CharacterController *)0x0) {
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0);
                  fVar1 = VStack_2.z;
                  if (pTVar5 != (Transform *)0x0) {
                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                        ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
                    puVar11 = puStack_7;
                    fVar12 = pVVar8->x;
                    fVar13 = pVVar8->y;
                    fVar14 = pVVar8->z;
                    fVar15 = 0.0;
                    rotation_00.y = VStack_2.y;
                    rotation_00.x = VStack_2.x;
                    rotation_00.z = VStack_2.z;
                    rotation_00.w = (float)puVar11;
                    fVar16 = VStack_2.x;
                    pCVar17 = (Camera *)VStack_2.y;
                    fVar18 = VStack_2.z;
                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                              Quaternion_op_Multiply_1
                                        ((Vector3 *)&stack0xffffffe0,rotation_00,*pVVar8,
                                         (MethodInfo *)0x0);
                    uVar19 = pVVar8->x;
                    uVar20 = pVVar8->y;
                    fVar21 = pVVar8->z;
                    pCVar4 = (this->fields)._targetController;
                    fVar1 = VStack_2.z;
                    if (pCVar4 != (CharacterController *)0x0) {
                      fVar22 = (float)uVar19;
                      fVar23 = (float)uVar20;
                      fVar24 = fVar21;
                      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0);
                      fVar1 = VStack_2.z;
                      if (pTVar5 != (Transform *)0x0) {
                        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
                        rotation_01.y = VStack_2.y;
                        rotation_01.x = VStack_2.x;
                        rotation_01.z = VStack_2.z;
                        rotation_01.w = (float)puStack_7;
                        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                  Quaternion_op_Multiply_1
                                            ((Vector3 *)&stack0xffffffe0,rotation_01,*pVVar8,
                                             (MethodInfo *)0x0);
                        uVar25._0_4_ = pVVar8->x;
                        uStack_26 = pVVar8->y;
                        puVar27 = (undefined *)pVVar8->z;
                        fVar28 = fVar18 - fVar13 * fVar16;
                        fVar29 = (float)puVar11 - fVar14 * fVar16;
                        fVar30 = fVar12 - fVar15 * fVar16;
                        pGVar31 = (this->fields)._leftTick;
                        VStack_2.y = (float)(undefined4)uVar25;
                        fVar1 = (float)uStack_26;
                        puStack_7 = puVar27;
                        if (pCVar3 != (Camera *)0x0) {
                          position.y = fVar29;
                          position.x = fVar28;
                          position.z = fVar30;
                          VStack_2.z = (float)uStack_26;
                          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_WorldToScreenPoint_1
                                              ((Vector3 *)&stack0xffffffd0,pCVar17,position,
                                               (MethodInfo *)0x0);
                          value.x = pVVar8->x;
                          value.y = pVVar8->y;
                          fVar1 = VStack_2.z;
                          if ((pGVar31 != (GizmoCap2D *)0x0) &&
                             (pGVar32 = (pGVar31->fields)._transform, pGVar32 != (GizmoTransform *)0x0
                             )) {
                            GizmoTransform::GizmoTransform_set_Position2D
                                      (pGVar32,value,(MethodInfo *)0x0);
                            pCVar33 = (this->fields)._extentTicks;
                            fVar1 = VStack_2.z;
                            if (pCVar33 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                              if (pCVar33->max_length < 3) goto code_?;
                              pCVar34 = pCVar33->vector[2];
                              if (pCVar34 != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                (pCVar34->fields).Position.x = fVar28;
                                (pCVar34->fields).Position.y = fVar29;
                                (pCVar34->fields).Position.z = fVar30;
                                pCVar33 = (this->fields)._extentTicks;
                                if (pCVar33 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                                  if (pCVar33->max_length < 3) goto code_?;
                                  pCVar34 = pCVar33->vector[2];
                                  uVar35 = (uint)fVar14 ^
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  ;
                                  fVar30 = (float)((uint)fVar15 ^
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                  if (pCVar34 != (CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                    (pCVar34->fields).Normal.x =
                                         (float)((uint)fVar13 ^
                                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                );
                                    (pCVar34->fields).Normal.y = (float)uVar35;
                                    (pCVar34->fields).Normal.z = fVar30;
                                    fVar13 = fVar13 * fVar16 + fVar18;
                                    fVar30 = fVar14 * fVar16 + (float)puVar11;
                                    fVar14 = fVar15 * fVar16 + fVar12;
                                    pGVar31 = (this->fields)._rightTick;
                                    position_00.y = fVar30;
                                    position_00.x = fVar13;
                                    position_00.z = fVar14;
                                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                              Camera_WorldToScreenPoint_1
                                                        ((Vector3 *)&stack0xffffffb0,pCVar17,
                                                         position_00,(MethodInfo *)0x0);
                                    value_00.x = pVVar8->x;
                                    value_00.y = pVVar8->y;
                                    fVar1 = VStack_2.z;
                                    if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                       (pGVar32 = (pGVar31->fields)._transform,
                                       pGVar32 != (GizmoTransform *)0x0)) {
                                      GizmoTransform::GizmoTransform_set_Position2D
                                                (pGVar32,value_00,(MethodInfo *)0x0);
                                      pCVar33 = (this->fields)._extentTicks;
                                      fVar1 = VStack_2.z;
                                      if (pCVar33 != (CharacterControllerGizmo3D_ExtentTick__Array *)
                                                    0x0) {
                                        if (pCVar33->max_length < 4) goto code_?;
                                        pCVar34 = pCVar33->vector[3];
                                        if (pCVar34 != (CharacterControllerGizmo3D_ExtentTick *)0x0)
                                        {
                                          (pCVar34->fields).Position.x = fVar13;
                                          (pCVar34->fields).Position.y = fVar30;
                                          (pCVar34->fields).Position.z = fVar14;
                                          pCVar33 = (this->fields)._extentTicks;
                                          if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                             ) {
                                            if (pCVar33->max_length < 4) goto code_?;
                                            pCVar34 = pCVar33->vector[3];
                                            if (pCVar34 != (CharacterControllerGizmo3D_ExtentTick *)
                                                          0x0) {
                                              (pCVar34->fields).Normal.x = (float)(int)uVar9;
                                              (pCVar34->fields).Normal.y =
                                                   (float)(int)((ulonglong)uVar9 >> 0x20);
                                              (pCVar34->fields).Normal.z = fVar10;
                                              fVar14 = fVar22 * 4.1731402e-29 * _UNK_? +
                                                       fVar18;
                                              fVar13 = fVar23 * 4.1731402e-29 * _UNK_? +
                                                      (float)puVar11;
                                              fVar10 = fVar21 * 4.1731402e-29 * _UNK_? +
                                                       fVar12;
                                              pGVar31 = (this->fields)._topTick;
                                              position_01.y = fVar13;
                                              position_01.x = fVar14;
                                              position_01.z = fVar10;
                                              pCVar3 = pCVar17;
                                              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Camera::Camera_WorldToScreenPoint_1
                                                                  ((Vector3 *)&stack0xffffffb0,
                                                                   pCVar17,position_01,
                                                                   (MethodInfo *)0x0);
                                              value_01.x = pVVar8->x;
                                              value_01.y = pVVar8->y;
                                              fVar1 = VStack_2.z;
                                              if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                 (pGVar32 = (pGVar31->fields)._transform,
                                                 pGVar32 != (GizmoTransform *)0x0)) {
                                                GizmoTransform::GizmoTransform_set_Position2D
                                                          (pGVar32,value_01,(MethodInfo *)0x0);
                                                pCVar33 = (this->fields)._extentTicks;
                                                fVar1 = VStack_2.z;
                                                if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                  if (pCVar33->max_length < 6) goto code_?;
                                                  pCVar34 = pCVar33->vector[5];
                                                  if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Position.x = fVar14;
                                                    (pCVar34->fields).Position.y = fVar13;
                                                    (pCVar34->fields).Position.z = fVar10;
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length < 6)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[5];
                                                    if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Normal.x = (float)uVar19;
                                                    (pCVar34->fields).Normal.y = (float)uVar20;
                                                    (pCVar34->fields).Normal.z = fVar24;
                                                    fVar14 = fVar18 - fVar22 * 4.1731402e-29 *
                                                                      _UNK_?;
                                                    fVar13 = (float)puVar11 -
                                                            fVar23 * 4.1731402e-29 * _UNK_?;
                                                    fVar10 = fVar12 - fVar21 * 4.1731402e-29 *
                                                                     _UNK_?;
                                                    pGVar31 = (this->fields)._bottomTick;
                                                    position_02.y = fVar13;
                                                    position_02.x = fVar14;
                                                    position_02.z = fVar10;
                                                    pVVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        ((Vector3 *)&stack0xffffffb0
                                                                         ,pCVar17,position_02,
                                                                         (MethodInfo *)0x0);
                                                    value_02.x = pVVar8->x;
                                                    value_02.y = pVVar8->y;
                                                    fVar1 = VStack_2.z;
                                                    if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                       (pGVar32 = (pGVar31->fields)._transform,
                                                       pGVar32 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar32,value_02,(MethodInfo *)0x0);
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      fVar1 = VStack_2.z;
                                                      if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length < 5)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[4];
                                                    if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Position.x = fVar14;
                                                    (pCVar34->fields).Position.y = fVar13;
                                                    (pCVar34->fields).Position.z = fVar10;
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length < 5)
                                                    goto code_?;
                                                    uVar35 = (uint)fVar23 ^
                                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  pCVar34 = pCVar33->vector[4];
                                                  fVar21 = (float)((uint)fVar21 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Normal.x =
                                                         (float)((uint)fVar22 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pCVar34->fields).Normal.y = (float)uVar35;
                                                  (pCVar34->fields).Normal.z = fVar21;
                                                  fVar14 = fVar18 - VStack_2.y * fVar16;
                                                  fVar13 = (float)puVar11 - VStack_2.z * fVar16;
                                                  fVar10 = fVar12 - (float)puStack_7 * fVar16;
                                                  pGVar31 = (this->fields)._frontTick;
                                                  position_03.y = fVar13;
                                                  position_03.x = fVar14;
                                                  position_03.z = fVar10;
                                                  pCVar17 = (Camera *)VStack_2.y;
                                                  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Camera::Camera_WorldToScreenPoint_1
                                                                      ((Vector3 *)&stack0xffffffb0,
                                                                       pCVar3,position_03,
                                                                       (MethodInfo *)0x0);
                                                  value_03.x = pVVar8->x;
                                                  value_03.y = pVVar8->y;
                                                  fVar1 = VStack_2.z;
                                                  if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                     (pGVar32 = (pGVar31->fields)._transform,
                                                     pGVar32 != (GizmoTransform *)0x0)) {
                                                    GizmoTransform::GizmoTransform_set_Position2D
                                                              (pGVar32,value_03,(MethodInfo *)0x0);
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    fVar1 = VStack_2.z;
                                                    if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length == 0)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[0];
                                                    if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Position.x = fVar14;
                                                    (pCVar34->fields).Position.y = fVar13;
                                                    (pCVar34->fields).Position.z = fVar10;
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length == 0)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[0];
                                                    VStack_2.x = (float)((uint)pCVar17 ^
                                                                                                                                                  
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_2.y = (float)((uint)VStack_2.z ^
                                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  fVar1 = (float)((uint)puStack_7 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Normal.x = VStack_2.x;
                                                    (pCVar34->fields).Normal.y = VStack_2.y;
                                                    (pCVar34->fields).Normal.z = fVar1;
                                                    fVar18 = (float)pCVar17 * fVar16 + fVar18;
                                                    fVar10 = VStack_2.z * fVar16 + (float)puVar11;
                                                    fVar12 = (float)puStack_7 * fVar16 + fVar12;
                                                    pGVar31 = (this->fields)._backTick;
                                                    position_04.y = fVar10;
                                                    position_04.x = fVar18;
                                                    position_04.z = fVar12;
                                                    VStack_2.z = fVar1;
                                                    pVVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        (&VStack_2,pCVar3,
                                                                         position_04,
                                                                         (MethodInfo *)0x0);
                                                    value_04.x = pVVar8->x;
                                                    value_04.y = pVVar8->y;
                                                    fVar1 = VStack_2.z;
                                                    if ((pGVar31 != (GizmoCap2D *)0x0) &&
                                                       (pGVar32 = (pGVar31->fields)._transform,
                                                       pGVar32 != (GizmoTransform *)0x0)) {
                                                      GizmoTransform::GizmoTransform_set_Position2D
                                                                (pGVar32,value_04,(MethodInfo *)0x0);
                                                      pCVar33 = (this->fields)._extentTicks;
                                                      fVar1 = VStack_2.z;
                                                      if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length < 2)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[1];
                                                    if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    (pCVar34->fields).Position.x = fVar18;
                                                    (pCVar34->fields).Position.y = fVar10;
                                                    (pCVar34->fields).Position.z = fVar12;
                                                    pCVar33 = (this->fields)._extentTicks;
                                                    if (pCVar33 != (
                                                  CharacterControllerGizmo3D_ExtentTick__Array *)0x0
                                                  ) {
                                                    if (pCVar33->max_length < 2)
                                                    goto code_?;
                                                    pCVar34 = pCVar33->vector[1];
                                                    if (pCVar34 != (
                                                  CharacterControllerGizmo3D_ExtentTick *)0x0) {
                                                    uStack_26 = (undefined4)
                                                                ((ulonglong)uVar25 >> 0x20);
                                                    (pCVar34->fields).Normal.x =
                                                         (float)(undefined4)uVar25;
                                                    (pCVar34->fields).Normal.y = (float)uStack_26;
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
    }
  }
  VStack_2.z = fVar1;
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
  if (pCVar2 == (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) goto code_?;
  if (pCVar2->max_length < 3) goto code_?;
  pCVar3 = (this->fields)._extentTicks;
  pCVar4 = pCVar2->vector[2];
  if (pCVar3->max_length < 4) goto code_?;
  pCVar5 = pCVar3->vector[3];
  if ((((pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
       (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
      (pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0)) &&
     (((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
       ((pPVar8->fields)._priority = 0, pCVar5 != (CharacterControllerGizmo3D_ExtentTick *)0x0)) &&
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
          if (pCVar2 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
            if (pCVar2->max_length < 6) goto code_?;
            pCVar4 = pCVar2->vector[5];
            pCVar5 = ((this->fields)._extentTicks)->vector[4];
            if (((((pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
                  (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                 ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                  ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0 &&
                   ((pPVar8->fields)._priority = 2,
                   pCVar5 != (CharacterControllerGizmo3D_ExtentTick *)0x0)))))) &&
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
              this = (CharacterControllerGizmo3D *)(pCVar4->fields).Normal.z;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                this = (CharacterControllerGizmo3D *)TypeInfo__RTG__CameraEx;
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
                    if (pCVar2 != (CharacterControllerGizmo3D_ExtentTick__Array *)0x0) {
                      if (pCVar2->max_length == 0) goto code_?;
                      pCVar3 = (pCVar1->fields)._extentTicks;
                      pCVar4 = pCVar2->vector[0];
                      if (pCVar3->max_length < 2) goto code_?;
                      pCVar5 = pCVar3->vector[1];
                      if ((((pCVar4 != (CharacterControllerGizmo3D_ExtentTick *)0x0) &&
                           (pGVar6 = (pCVar4->fields).Tick, pGVar6 != (GizmoCap2D *)0x0)) &&
                          ((pGVar7 = (pGVar6->fields)._._handle, pGVar7 != (GizmoHandle *)0x0 &&
                           ((pPVar8 = (pGVar7->fields)._hoverPriority2D, pPVar8 != (Priority *)0x0
                            && ((pPVar8->fields)._priority = 4,
                               pCVar5 != (CharacterControllerGizmo3D_ExtentTick *)0x0)))))) &&
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
              pGStack_24 = (this_01->fields)._overrideFillColor;
              fStack_30 = (pGVar29->fields)._color.r;
              fStack_9 = (pGVar29->fields)._color.g;
              fStack_10 = (pGVar29->fields)._color.b;
              fStack_8 = (pGVar29->fields)._color.a;
              pCVar31 = (&(this->fields)._lookAndFeel)
                        [(this->fields)._sharedLookAndFeel !=
                         (CharacterControllerGizmo3DLookAndFeel *)0x0];
              if (pCVar31 == (CharacterControllerGizmo3DLookAndFeel *)0x0) goto code_?;
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
                         (CharacterControllerGizmo3DLookAndFeel *)0x0];
              if (pCVar31 == (CharacterControllerGizmo3DLookAndFeel *)0x0) goto code_?;
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
  pCVar3 = TypeInfo__RTG__CharacterController3DSnapshot;
  pCVar4 = (CharacterController3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar3);
  (this->fields)._preChangeColliderSnapshot = pCVar4;
  func_?();
  pCVar3 = TypeInfo__RTG__CharacterController3DSnapshot;
  pCVar4 = (CharacterController3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pCVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pCVar3);
  (this->fields)._postChangeColliderSnapshot = pCVar4;
  func_?(&(this->fields)._postChangeColliderSnapshot,pCVar4);
  this_00 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_00;
  func_?(&(this->fields)._offsetDrag,this_00);
  this_01 = (CharacterControllerGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__CharacterControllerGizmo3DLookAndFeel);
  CharacterControllerGizmo3DLookAndFeel::CharacterControllerGizmo3DLookAndFeel__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_01;
  func_?(&(this->fields)._lookAndFeel,this_01);
  pCStack5 = TypeInfo__RTG__CharacterControllerGizmo3DSettings;
  this_02 = (CharacterControllerGizmo3DSettings *)func_?();
  SpotLightGizmo3DSettings::SpotLightGizmo3DSettings__ctor
            ((SpotLightGizmo3DSettings *)this_02,(MethodInfo *)0x0);
  (this->fields)._settings = this_02;
  func_?();
  pCStack6 = TypeInfo__RTG__CharacterControllerGizmo3DHotkeys;
  this_03 = (CharacterControllerGizmo3DHotkeys *)func_?();
  CharacterControllerGizmo3DHotkeys::CharacterControllerGizmo3DHotkeys__ctor
            (this_03,(MethodInfo *)0x0);
  (this->fields)._hotkeys = this_03;
  func_?();
  GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* CharacterControllerGizmo3DHotkeys get_Hotkeys() */

CharacterControllerGizmo3DHotkeys *
Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_get_Hotkeys
          (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (CharacterControllerGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_get_IsSnapEnabled
               (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pCVar1 = (&(this->fields)._hotkeys)
           [(this->fields)._sharedHotkeys != (CharacterControllerGizmo3DHotkeys *)0x0];
  if ((pCVar1 != (CharacterControllerGizmo3DHotkeys *)0x0) &&
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
  if ((this->fields)._sharedLookAndFeel == (CharacterControllerGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


/* CharacterControllerGizmo3DSettings get_Settings() */

CharacterControllerGizmo3DSettings *
Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::CharacterControllerGizmo3D_get_Settings
          (CharacterControllerGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings == (CharacterControllerGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return (this->fields)._sharedSettings;
}


/* Void set_SharedLookAndFeel(CharacterControllerGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::CharacterControllerGizmo3D::
     CharacterControllerGizmo3D_set_SharedLookAndFeel
               (CharacterControllerGizmo3D *this,CharacterControllerGizmo3DLookAndFeel *value,
               MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  CharacterControllerGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

