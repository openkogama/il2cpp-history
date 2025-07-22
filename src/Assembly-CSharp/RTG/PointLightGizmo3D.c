
/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_CalcScalePivot
                    (Vector3 *__return_storage_ptr__,PointLightGizmo3D *this,int32_t handleId,
                    MethodInfo *method)

{
  iVar1 = handleId;
  bVar2 = PointLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if (cRam_? == '\0') {
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
  pLVar5 = (this->fields)._targetLight;
  if (pLVar5 == (Light *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar6)();
    return pVVar7;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pLVar5,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) goto code_?;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&puStack_8,this_00,(MethodInfo *)0x0);
  this_01 = (GizmoCap2D *)pVVar7->z;
  pLVar5 = (this->fields)._targetLight;
  if (pLVar5 == (Light *)0x0) goto code_?;
  stack0xffffffe8 = (float)pLVar5;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(pLVar5,(MethodInfo *)0x0)
  ;
  pGVar9 = (this->fields)._leftTick;
  if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
  uVar10 = ZEXT48(pGVar9);
  pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar11) {
    if (cRam_? == '\0') {
      this_01 = (GizmoCap2D *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar12._0_4_ = (pVVar3->rightVector).x;
    uVar12._4_4_ = (pVVar3->rightVector).y;
    fVar13 = (pVVar3->rightVector).z;
    handleId = (int32_t)fVar4;
code_?:
    puStack_8 = (undefined *)uVar12;
    stack0xffffffe8 = (float)((ulonglong)uVar12 >> 0x20);
    fVar14 = (float)uVar10 + (float)puStack_8 * (float)handleId;
    fVar4 = (float)this_01 + fVar13 * (float)handleId;
    register0x00001240 = (float)(uVar10 >> 0x20) + stack0xffffffe8 * (float)handleId;
  }
  else {
    this_01 = (this->fields)._rightTick;
    if (this_01 == (GizmoCap2D *)0x0) goto code_?;
    uVar10 = CONCAT44(&UNK_?,(int)uVar10);
    pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar11) {
      __return_storage_ptr__ = (Vector3 *)0x0;
      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                          ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      handleId = (int32_t)fVar4;
    }
    else {
      pGVar9 = (this->fields)._topTick;
      if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
      pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
      if ((void *)handleId != pvVar11) {
        pGVar9 = (this->fields)._bottomTick;
        if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
        __return_storage_ptr__ = (Vector3 *)&UNK_?;
        pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                  AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar11) {
          handleId = (int32_t)&UNK_?;
          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
        }
        else {
          pGVar9 = (this->fields)._frontTick;
          if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
          handleId = (int32_t)&UNK_?;
          pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
          if ((void *)iVar1 != pvVar11) {
            pGVar9 = (this->fields)._backTick;
            if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
            pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                      AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
            if ((void *)iVar1 != pvVar11) goto code_?;
            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                                ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
            goto code_?;
          }
          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
        }
        uVar12._0_4_ = pVVar7->x;
        uVar12._4_4_ = pVVar7->y;
        fVar13 = pVVar7->z;
        goto code_?;
      }
      handleId = 0;
      __return_storage_ptr__ = (Vector3 *)&UNK_?;
      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    }
code_?:
    uVar15 = pVVar7->x;
    uVar16 = pVVar7->y;
    fVar14 = (float)uVar10 - (float)uVar15 * (float)handleId;
    fVar4 = (float)this_01 - pVVar7->z * (float)handleId;
    register0x00001240 = (float)(uVar10 >> 0x20) - (float)uVar16 * (float)handleId;
  }
  __return_storage_ptr__->x = fVar14;
  __return_storage_ptr__->y = register0x00001240;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_IsTargetReady
               (PointLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pLVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
    {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0;
      }
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        LVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_type
                          (pLVar1,(MethodInfo *)0x0);
        return LVar3 == LightType__Enum_Point;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnAttached
               (PointLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3D);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
  GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1d,(MethodInfo *)0x0);
  (this->fields)._leftTick = pGVar2;
  func_?(&(this->fields)._leftTick,pGVar2);
  pGVar3 = (GizmoCap3D *)(this->fields)._leftTick;
  if (pGVar3 == (GizmoCap3D *)0x0) {
code_?:
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1a,(MethodInfo *)0x0);
    (this->fields)._rightTick = pGVar2;
    func_?(&(this->fields)._rightTick,pGVar2);
    pGVar3 = (GizmoCap3D *)(this->fields)._rightTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1b,(MethodInfo *)0x0);
    (this->fields)._topTick = pGVar2;
    func_?(&(this->fields)._topTick,pGVar2);
    pGVar3 = (GizmoCap3D *)(this->fields)._topTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1e,(MethodInfo *)0x0);
    (this->fields)._bottomTick = pGVar2;
    func_?(&(this->fields)._bottomTick,pGVar2);
    pGVar3 = (GizmoCap3D *)(this->fields)._bottomTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1f,(MethodInfo *)0x0);
    (this->fields)._backTick = pGVar2;
    func_?(&(this->fields)._backTick,pGVar2);
    pGVar3 = (GizmoCap3D *)(this->fields)._backTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar5 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    method_00 = (MethodInfo *)&UNK_?;
    pGVar2 = pGVar5;
    GizmoCap2D::GizmoCap2D__ctor(pGVar5,pGVar1,0x1c,(MethodInfo *)0x0);
    (this->fields)._frontTick = pGVar5;
    func_?(&(this->fields)._frontTick,pGVar5);
    pGVar3 = (GizmoCap3D *)(this->fields)._frontTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,method_00);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
      if (iVar8 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar6->max_length < 3) goto code_?;
    pPVar6->vector[2] = pPVar7;
    func_?(pPVar6->vector + 2,pPVar7);
    pPVar6 = (this->fields)._extentTicks;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6->max_length < 3) goto code_?;
    pPVar7 = pPVar6->vector[2];
    pGVar5 = (this->fields)._leftTick;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar7->fields).Tick = pGVar5;
    func_?(&(pPVar7->fields).Tick,pGVar5);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
      if (iVar8 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar6->max_length < 4) goto code_?;
    pPVar6->vector[3] = pPVar7;
    func_?(pPVar6->vector + 3,pPVar7);
    pPVar6 = (this->fields)._extentTicks;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6->max_length < 4) goto code_?;
    pPVar7 = pPVar6->vector[3];
    pGVar5 = (this->fields)._rightTick;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar7->fields).Tick = pGVar5;
    func_?(&(pPVar7->fields).Tick,pGVar5);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
      if (iVar8 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar6->max_length < 6) goto code_?;
    pPVar6->vector[5] = pPVar7;
    func_?(pPVar6->vector + 5,pPVar7);
    pPVar6 = (this->fields)._extentTicks;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6->max_length < 6) goto code_?;
    pPVar7 = pPVar6->vector[5];
    pGVar5 = (this->fields)._topTick;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar7->fields).Tick = pGVar5;
    func_?(&(pPVar7->fields).Tick,pGVar5);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
      if (iVar8 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar6->max_length < 5) goto code_?;
    pPVar6->vector[4] = pPVar7;
    func_?(pPVar6->vector + 4,pPVar7);
    pPVar6 = (this->fields)._extentTicks;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6->max_length < 5) goto code_?;
    pPVar7 = pPVar6->vector[4];
    pGVar5 = (this->fields)._bottomTick;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar7->fields).Tick = pGVar5;
    func_?(&(pPVar7->fields).Tick,pGVar5);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
      if (iVar8 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar6->max_length == 0) goto code_?;
    pPVar6->vector[0] = pPVar7;
    func_?(pPVar6->vector,pPVar7);
    pPVar6 = (this->fields)._extentTicks;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6->max_length == 0) goto code_?;
    pPVar7 = pPVar6->vector[0];
    pGVar5 = (this->fields)._frontTick;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar7->fields).Tick = pGVar5;
    func_?(&(pPVar7->fields).Tick,pGVar5);
    pPVar6 = (this->fields)._extentTicks;
    pPVar7 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pPVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pPVar6 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar7 == (PointLightGizmo3D_ExtentTick *)0x0) {
code_?:
      if (pPVar6->max_length < 2) goto code_?;
      pPVar6->vector[1] = pPVar7;
      func_?(pPVar6->vector + 1,pPVar7);
      pPVar6 = (this->fields)._extentTicks;
      if (pPVar6 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
        if (pPVar6->max_length < 2) goto code_?;
        pPVar7 = pPVar6->vector[1];
        pGVar2 = (this->fields)._backTick;
        if (pPVar7 != (PointLightGizmo3D_ExtentTick *)0x0) {
          (pPVar7->fields).Tick = pGVar2;
          func_?(&(pPVar7->fields).Tick,pGVar2);
          pGVar1 = (this->fields)._._gizmo;
          pGVar9 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
          GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar9,pGVar1,0x23,(MethodInfo *)0x0);
          (this->fields)._axialCircleXY = pGVar9;
          func_?(&(this->fields)._axialCircleXY,pGVar9);
          pGVar9 = (this->fields)._axialCircleXY;
          if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar9,0,(MethodInfo *)0x0);
            pGVar9 = (this->fields)._axialCircleXY;
            if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(pGVar9,0,(MethodInfo *)0x0);
              pGVar9 = (this->fields)._axialCircleXY;
              if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                    (pGVar9,(MethodInfo *)0x0);
                if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  (pGVar10->fields)._useZoomFactor = 0;
                  pGVar9 = (this->fields)._axialCircleXY;
                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        (pGVar9,(MethodInfo *)0x0);
                    if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      (pGVar10->fields)._planeType = 2;
                      pGVar1 = (this->fields)._._gizmo;
                      pGVar9 = (GizmoPlaneSlider3D *)
                               func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar9,pGVar1,0x24,(MethodInfo *)0x0);
                      (this->fields)._axialCircleYZ = pGVar9;
                      func_?(&(this->fields)._axialCircleYZ,pGVar9);
                      pGVar9 = (this->fields)._axialCircleYZ;
                      if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoSlider::GizmoSlider_SetVisible
                                  ((GizmoSlider *)pGVar9,0,(MethodInfo *)0x0);
                        pGVar9 = (this->fields)._axialCircleYZ;
                        if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                    (pGVar9,0,(MethodInfo *)0x0);
                          pGVar9 = (this->fields)._axialCircleYZ;
                          if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                            pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                (pGVar9,(MethodInfo *)0x0);
                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              (pGVar10->fields)._useZoomFactor = 0;
                              pGVar9 = (this->fields)._axialCircleYZ;
                              if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                    (pGVar9,(MethodInfo *)0x0);
                                if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  (pGVar10->fields)._planeType = 2;
                                  pGVar1 = (this->fields)._._gizmo;
                                  pGVar9 = (GizmoPlaneSlider3D *)
                                           func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                            (pGVar9,pGVar1,0x25,(MethodInfo *)0x0);
                                  (this->fields)._axialCircleZX = pGVar9;
                                  func_?(&(this->fields)._axialCircleZX,pGVar9);
                                  pGVar9 = (this->fields)._axialCircleZX;
                                  if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)pGVar9,0,(MethodInfo *)0x0);
                                    pGVar9 = (this->fields)._axialCircleZX;
                                    if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                                (pGVar9,0,(MethodInfo *)0x0);
                                      pGVar9 = (this->fields)._axialCircleZX;
                                      if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                        pGVar10 = GizmoPlaneSlider3D::
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar9,(MethodInfo *)0x0);
                                        if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          (pGVar10->fields)._useZoomFactor = 0;
                                          pGVar9 = (this->fields)._axialCircleZX;
                                          if (pGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                            pGVar10 = GizmoPlaneSlider3D::
                                                      GizmoPlaneSlider3D_get_LookAndFeel
                                                                (pGVar9,(MethodInfo *)0x0);
                                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                              (pGVar10->fields)._planeType = 2;
                                              PointLightGizmo3D_SetupSharedLookAndFeel
                                                        (this,(MethodInfo *)0x0);
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
    iVar8 = func_?(pPVar7,(pPVar6->klass->_0).element_class);
    if (iVar8 != 0) goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoAttemptHandleDragBegin
               (PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields)._preChangeSnapshot;
  if (this_00 == (Light3DSnapshot *)0x0) goto code_?;
  Light3DSnapshot::Light3DSnapshot_Snapshot(this_00,(this->fields)._targetLight,(MethodInfo *)0x0);
  bVar1 = PointLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_01 = (this->fields)._targetLight;
  if (this_01 == (Light *)0x0) goto code_?;
  stack0xfffffff4 = (float)this_01;
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_01,(MethodInfo *)0x0);
  if (this_03 == (Transform *)0x0) goto code_?;
  stack0xfffffff4 = (float)&UNK_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&puStack_3,this_03,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar2->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar4;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar5;
  if ((this->fields)._sharedSettings == (PointLightGizmo3DSettings *)0x0) {
    pPVar6 = (this->fields)._settings;
    if (pPVar6 == (PointLightGizmo3DSettings *)0x0) goto code_?;
  }
  else {
    pPVar6 = (this->fields)._sharedSettings;
  }
  (this->fields)._offsetDragWorkData.SnapStep = (pPVar6->fields)._radiusSnapStep;
  pGVar7 = (this->fields)._leftTick;
  if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
  pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar8) {
    pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_9,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar7 = (this->fields)._rightTick;
  if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
  pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar8) {
    pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_9,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
    (this->fields)._offsetDragWorkData.Axis.y = fVar4;
code_?:
    (this->fields)._offsetDragWorkData.Axis.z = fVar5;
  }
  else {
    pGVar7 = (this->fields)._topTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_9,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
      goto code_?;
    }
    pGVar7 = (this->fields)._bottomTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_9,(MethodInfo *)0x0);
code_?:
      puStack_3 = (undefined *)pVVar2->x;
      unique0x0000a404 = pVVar2->y;
      uVar10 = (uint)unique0x0000a404 ^
               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
      fVar5 = (float)((uint)pVVar2->z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)((uint)puStack_3 ^
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar10;
      goto code_?;
    }
    pGVar7 = (this->fields)._frontTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_9,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar7 = (this->fields)._backTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar2 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                          ((Vector3 *)&puStack_3,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar2->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
      goto code_?;
    }
  }
  this_02 = (this->fields)._offsetDrag;
  if (this_02 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    uVar11 = (this->fields)._offsetDragWorkData.Axis.z;
    uVar12 = (this->fields)._offsetDragWorkData.DragOrigin.x;
    uVar13 = (this->fields)._offsetDragWorkData.DragOrigin.y;
    uVar14 = (this->fields)._offsetDragWorkData.DragOrigin.z;
    workData.DragOrigin.z = (float)uVar14;
    workData.DragOrigin.y = (float)uVar13;
    workData.DragOrigin.x = (float)uVar12;
    uVar15 = (this->fields)._offsetDragWorkData.Axis.x;
    uVar16 = (this->fields)._offsetDragWorkData.Axis.y;
    workData.Axis.y = (float)uVar16;
    workData.Axis.x = (float)uVar15;
    workData.Axis.z = (float)uVar11;
    workData.SnapStep = (this->fields)._offsetDragWorkData.SnapStep;
    GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
              (this_02,workData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoDragEnd
               (PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Light3DChangedAction);
    cRam_? = '\x01';
  }
  bVar1 = PointLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pLVar2 = (this->fields)._postChangeSnapshot;
  if (pLVar2 != (Light3DSnapshot *)0x0) {
    Light3DSnapshot::Light3DSnapshot_Snapshot(pLVar2,(this->fields)._targetLight,(MethodInfo *)0x0);
    pLVar2 = (this->fields)._preChangeSnapshot;
    postChangeSnapshot = (this->fields)._postChangeSnapshot;
    this_00 = (Light3DChangedAction *)func_?(TypeInfo__RTG__Light3DChangedAction);
    Light3DChangedAction::Light3DChangedAction__ctor
              (this_00,pLVar2,postChangeSnapshot,(MethodInfo *)0x0);
    if (this_00 != (Light3DChangedAction *)0x0) {
      Light3DChangedAction::Light3DChangedAction_Execute(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoDragUpdate
               (PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = PointLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  pGVar2 = (this->fields)._offsetDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    if ((this->fields)._sharedHotkeys == (PointLightGizmo3DHotkeys *)0x0) {
      pPVar3 = (this->fields)._hotkeys;
      if (pPVar3 == (PointLightGizmo3DHotkeys *)0x0) goto code_?;
    }
    else {
      pPVar3 = (this->fields)._sharedHotkeys;
    }
    this_00 = (pPVar3->fields)._enableSnapping;
    if (this_00 == (Hotkeys *)0x0) goto code_?;
    bVar1 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    this_01 = (this->fields)._targetLight;
    if (this_01 != (Light *)0x0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                         (this_01,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._._gizmo;
      if (pGVar5 != (Gizmo *)0x0) {
        Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&stack0xffffffe8,pGVar5,(MethodInfo *)0x0);
        fVar6 = (float10)func_?();
        pGVar5 = (this->fields)._._gizmo;
        if (pGVar5 != (Gizmo *)0x0) {
          Gizmo::Gizmo_get_RelativeDragOffset((Vector3 *)&stack0xffffffe8,pGVar5,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._offsetDrag;
          if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
            fVar7 = 0.0;
            __return_storage_ptr__ = (Vector3 *)&stack0xffffffd0;
            pVVar8 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                               (__return_storage_ptr__,pGVar2,(MethodInfo *)0x0);
            uVar9 = pVVar8->x;
            uVar10 = pVVar8->y;
            fVar11 = _UNK_?;
            if (0.0 <= (float)uVar10 * (float)pGVar2 + (float)__return_storage_ptr__ * (float)uVar9
                       + pVVar8->z * fVar7) {
              fVar11 = _UNK_?;
            }
            fVar4 = fVar11 * (float)fVar6 + fVar4;
            fVar11 = 0.0;
            if (0.0 <= fVar4) {
              fVar11 = fVar4;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                      (this_01,fVar11,(MethodInfo *)0x0);
            PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoRender
               (PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pOVar2 != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pOVar2[10].klass != (Object__Class *)0x0) {
      if (1 < (int)((pOVar2[10].klass)->_0).namespaze) {
        PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
      }
      PointLightGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
      if ((camera != (Camera *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
      {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&fStack_5,pTVar3,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        uVar7 = pVVar4->y;
        fVar8 = pVVar4->z;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
          fStack_5 = pVVar4->x;
          puStack_9 = (undefined *)pVVar4->y;
          fVar10 = pVVar4->z;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_11,pTVar3,(MethodInfo *)0x0);
            fVar12 = pVVar4->x;
            uVar13 = pVVar4->y;
            fVar14 = pVVar4->z;
            fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                               (camera,(MethodInfo *)0x0);
            fVar12 = fStack_5 + fVar12 * fVar15;
            fVar16 = (float)puStack_9 + (float)uVar13 * fVar15;
            fVar10 = fVar10 + fVar14 * fVar15;
            value.y = (float)uVar7;
            value.x = (float)uVar6;
            value.z = fVar8;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (&VStack_11,value,(MethodInfo *)0x0);
            fStack_5 = pVVar4->x;
            puStack_9 = (undefined *)pVVar4->y;
            fVar8 = pVVar4->z;
            pLVar17 = (this->fields)._targetLight;
            fVar10 = (float)((uint)((float)puStack_9 * fVar16 + fStack_5 * fVar12 + fVar8 * fVar10
                                   ) ^
                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                            );
            if ((pLVar17 != (Light *)0x0) &&
               (fVar12 = fStack_5, fVar14 = (float)puStack_9,
               pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pLVar17,(MethodInfo *)0x0),
               pTVar3 != (Transform *)0x0)) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_11,pTVar3,(MethodInfo *)0x0);
              uVar18 = pVVar4->x;
              uVar19 = pVVar4->y;
              fVar16 = pVVar4->z;
              pLVar17 = (this->fields)._targetLight;
              if (pLVar17 != (Light *)0x0) {
                fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                                   (pLVar17,(MethodInfo *)0x0);
                center.y = (float)uVar19;
                center.x = (float)uVar18;
                center.z = fVar16;
                Sphere::Sphere__ctor((Sphere *)&stack0xffffffac,center,fVar15,(MethodInfo *)0x0);
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_11,pTVar3,(MethodInfo *)0x0);
                  bVar1 = Sphere::Sphere_ContainsPoint
                                     ((Sphere *)&stack0xffffffac,*pVVar4,(MethodInfo *)0x0);
                  if (bVar1 == 0) {
                    pLVar17 = (this->fields)._targetLight;
                    if ((pLVar17 == (Light *)0x0) ||
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pLVar17,(MethodInfo *)0x0),
                       pTVar3 == (Transform *)0x0)) goto code_?;
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_11,pTVar3,(MethodInfo *)0x0);
                    fStack_5 = pVVar4->x;
                    puStack_9 = (undefined *)pVVar4->y;
                    if (_UNK_? <
                        fVar14 * (float)puStack_9 + fVar12 * fStack_5 + fVar8 * pVVar4->z +
                        fVar10) {
                      if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      this_00 = (GizmoLineMaterial *)
                                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                          (
                                          MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__
                                          );
                      if (this_00 == (GizmoLineMaterial *)0x0) goto code_?;
                      GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                                (this_00,(MethodInfo *)0x0);
                      if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0)
                      {
                        pPVar20 = (this->fields)._lookAndFeel;
                        if (pPVar20 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
                      }
                      else {
                        pPVar20 = (this->fields)._sharedLookAndFeel;
                      }
                      GizmoLineMaterial::GizmoLineMaterial_SetColor
                                (this_00,(pPVar20->fields)._sphereBorderColor,(MethodInfo *)0x0);
                      this_01 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                          (this_00,(MethodInfo *)0x0);
                      if (this_01 == (Material *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                (this_01,0,(MethodInfo *)0x0);
                      pLVar17 = (this->fields)._targetLight;
                      if ((pLVar17 == (Light *)0x0) ||
                         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pLVar17,(MethodInfo *)0x0),
                         pTVar3 == (Transform *)0x0)) goto code_?;
                      pPVar21 = (PolygonShape2D *)0x0;
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position(&VStack_11,pTVar3,(MethodInfo *)0x0);
                      uVar22 = pVVar4->x;
                      uVar23 = pVVar4->y;
                      pLVar17 = (this->fields)._targetLight;
                      if ((pLVar17 == (Light *)0x0) ||
                         (fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                                             (pLVar17,(MethodInfo *)0x0),
                         pPVar21 == (PolygonShape2D *)0x0)) goto code_?;
                      sphereCenter.y = (float)uVar23;
                      sphereCenter.x = (float)uVar22;
                      sphereCenter.z = (float)pLVar17;
                      PolygonShape2D::PolygonShape2D_MakeSphereBorder
                                (pPVar21,sphereCenter,fVar8,100,camera,(MethodInfo *)0x0);
                      pPVar21 = (this->fields)._sphereBorderPoly;
                      if (pPVar21 == (PolygonShape2D *)0x0) goto code_?;
                      (*(code *)(pPVar21->klass->vtable).RenderBorder.method)();
                    }
                  }
                  pGVar24 = (this->fields)._axialCircleXY;
                  if (pGVar24 != (GizmoPlaneSlider3D *)0x0) {
                    (*(code *)(pGVar24->klass->vtable).Render_1.method)(pGVar24,camera);
                    pGVar24 = (this->fields)._axialCircleYZ;
                    if (pGVar24 != (GizmoPlaneSlider3D *)0x0) {
                      (*(code *)(pGVar24->klass->vtable).Render_1.method)(pGVar24,camera);
                      pGVar24 = (this->fields)._axialCircleZX;
                      if (pGVar24 != (GizmoPlaneSlider3D *)0x0) {
                        (*(code *)(pGVar24->klass->vtable).Render_1.method)(pGVar24,camera);
                        pGVar25 = (this->fields)._leftTick;
                        if (pGVar25 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar25->klass->vtable).Render_1.method)(pGVar25,camera);
                          pGVar25 = (this->fields)._rightTick;
                          if (pGVar25 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar25->klass->vtable).Render_1.method)(pGVar25,camera);
                            pGVar25 = (this->fields)._topTick;
                            if (pGVar25 != (GizmoCap2D *)0x0) {
                              (*(code *)(pGVar25->klass->vtable).Render_1.method)(pGVar25,camera);
                              pGVar25 = (this->fields)._bottomTick;
                              if (pGVar25 != (GizmoCap2D *)0x0) {
                                (*(code *)(pGVar25->klass->vtable).Render_1.method)(pGVar25,camera);
                                pGVar25 = (this->fields)._frontTick;
                                if (pGVar25 != (GizmoCap2D *)0x0) {
                                  (*(code *)(pGVar25->klass->vtable).Render_1.method)
                                            (pGVar25,camera);
                                  pGVar25 = (this->fields)._backTick;
                                  if (pGVar25 != (GizmoCap2D *)0x0) {
                                    (*(code *)(pGVar25->klass->vtable).Render_1.method)
                                              (pGVar25,camera);
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
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoUpdateBegin
               (PointLightGizmo3D *this,MethodInfo *method)

{
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    this_01 = (this->fields)._targetLight;
    if (((this_01 != (Light *)0x0) &&
        (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
       && (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0),
          this_00 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(pGVar2,(MethodInfo *)0x0);
        PointLightGizmo3D_UpdateHoverPriorities(this,camera,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OwnsHandle
               (PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._leftTick;
  if (pGVar1 != (GizmoCap2D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar2) {
      return 1;
    }
    pGVar1 = (this->fields)._rightTick;
    if (pGVar1 != (GizmoCap2D *)0x0) {
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar2) {
        return 1;
      }
      pGVar1 = (this->fields)._topTick;
      if (pGVar1 != (GizmoCap2D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar2) {
          return 1;
        }
        pGVar1 = (this->fields)._bottomTick;
        if (pGVar1 != (GizmoCap2D *)0x0) {
          pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                   AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
          if ((void *)handleId == pvVar2) {
            return 1;
          }
          pGVar1 = (this->fields)._frontTick;
          if (pGVar1 != (GizmoCap2D *)0x0) {
            pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                     AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
            if ((void *)handleId == pvVar2) {
              return 1;
            }
            pGVar1 = (this->fields)._backTick;
            if (pGVar1 != (GizmoCap2D *)0x0) {
              pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                       AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0)
              ;
              if ((void *)handleId == pvVar2) {
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_SetupSharedLookAndFeel
               (PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  pGVar2 = (pPVar1->fields)._tickLookAndFeel;
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateHandles
               (PointLightGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pLVar1,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
    {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff98,this_02,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        fVar6 = fVar3;
        fVar7 = fVar4;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                           (pLVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar10 = (pVVar9->rightVector).x;
        uVar11 = (pVVar9->rightVector).y;
        fVar3 = fVar3 - (float)uVar10 * fVar8;
        fVar12 = fVar4 - (float)uVar11 * fVar8;
        fVar13 = fVar5 - (pVVar9->rightVector).z * fVar8;
        pGVar14 = (this->fields)._leftTick;
        if (this_01 != (Camera *)0x0) {
          ppVVar15 = (Vector3__Class **)0x0;
          position_04.y = fVar12;
          position_04.x = fVar3;
          position_04.z = fVar13;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&stack0xffffffd0,this_01,position_04,(MethodInfo *)0x0);
          value.x = pVVar2->x;
          value.y = pVVar2->y;
          if (pGVar14 != (GizmoCap2D *)0x0) {
            GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value,(MethodInfo *)0x0);
            pPVar16 = (this->fields)._extentTicks;
            if (pPVar16 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
              if (2 < pPVar16->max_length) {
                pPVar17 = pPVar16->vector[2];
                if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                (pPVar17->fields).Position.x = fVar3;
                (pPVar17->fields).Position.y = fVar12;
                (pPVar17->fields).Position.z = fVar13;
                pPVar16 = (this->fields)._extentTicks;
                if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
                if (2 < pPVar16->max_length) {
                  pPVar17 = pPVar16->vector[2];
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar18 = (pVVar9->rightVector).x;
                  uVar19 = (pVVar9->rightVector).y;
                  uVar20 = uVar19 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
                  fVar3 = (float)((uint)(pVVar9->rightVector).z ^
                                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                 );
                  if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                  (pPVar17->fields).Normal.x =
                       (float)(uVar18 ^ 
                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              );
                  (pPVar17->fields).Normal.y = (float)uVar20;
                  (pPVar17->fields).Normal.z = fVar3;
                  if (cRam_? == '\0') {
                    ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                    func_?();
                    cRam_? = '\x01';
                  }
                  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar21 = (pVVar9->rightVector).x;
                  uVar22 = (pVVar9->rightVector).y;
                  fVar13 = (float)uVar22 * fVar8 + fVar4;
                  fVar3 = (pVVar9->rightVector).z * fVar8 + fVar5;
                  pGVar14 = (this->fields)._rightTick;
                  position.y = fVar13;
                  position.x = (float)uVar21 * fVar8 + (float)ppVVar15;
                  position.z = fVar3;
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_WorldToScreenPoint_1
                                      ((Vector3 *)&stack0xffffffd0,this_01,position,
                                       (MethodInfo *)0x0);
                  value_00.x = pVVar2->x;
                  value_00.y = pVVar2->y;
                  if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
                  fVar12 = 0.0;
                  GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value_00,(MethodInfo *)0x0);
                  pPVar16 = (this->fields)._extentTicks;
                  if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
                  if (3 < pPVar16->max_length) {
                    pPVar17 = pPVar16->vector[3];
                    if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                    (pPVar17->fields).Position.x = fVar12;
                    (pPVar17->fields).Position.y = fVar13;
                    (pPVar17->fields).Position.z = fVar3;
                    pPVar16 = (this->fields)._extentTicks;
                    if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                    goto code_?;
                    if (3 < pPVar16->max_length) {
                      pPVar17 = pPVar16->vector[3];
                      if (cRam_? == '\0') {
                        ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                        func_?();
                        cRam_? = '\x01';
                      }
                      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                      fVar13 = (pVVar9->rightVector).y;
                      fVar3 = (pVVar9->rightVector).z;
                      if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                      (pPVar17->fields).Normal.x = (pVVar9->rightVector).x;
                      (pPVar17->fields).Normal.y = fVar13;
                      (pPVar17->fields).Normal.z = fVar3;
                      if (cRam_? == '\0') {
                        ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                        func_?();
                        cRam_? = '\x01';
                      }
                      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uVar23 = (pVVar9->upVector).x;
                      uVar24 = (pVVar9->upVector).y;
                      fVar13 = (float)uVar24 * fVar8 + fVar4;
                      fVar3 = (pVVar9->upVector).z * fVar8 + fVar5;
                      pGVar14 = (this->fields)._topTick;
                      position_00.y = fVar13;
                      position_00.x = (float)uVar23 * fVar8 + (float)ppVVar15;
                      position_00.z = fVar3;
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffd0,this_01,position_00,
                                           (MethodInfo *)0x0);
                      value_01.x = pVVar2->x;
                      value_01.y = pVVar2->y;
                      if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
                      fVar12 = 0.0;
                      GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value_01,(MethodInfo *)0x0);
                      pPVar16 = (this->fields)._extentTicks;
                      if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                      goto code_?;
                      if (5 < pPVar16->max_length) {
                        pPVar17 = pPVar16->vector[5];
                        if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                        (pPVar17->fields).Position.x = fVar12;
                        (pPVar17->fields).Position.y = fVar13;
                        (pPVar17->fields).Position.z = fVar3;
                        pPVar16 = (this->fields)._extentTicks;
                        if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                        goto code_?;
                        if (5 < pPVar16->max_length) {
                          pPVar17 = pPVar16->vector[5];
                          if (cRam_? == '\0') {
                            ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                          fVar13 = (pVVar9->upVector).y;
                          fVar3 = (pVVar9->upVector).z;
                          if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                          (pPVar17->fields).Normal.x = (pVVar9->upVector).x;
                          (pPVar17->fields).Normal.y = fVar13;
                          (pPVar17->fields).Normal.z = fVar3;
                          if (cRam_? == '\0') {
                            ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uVar25 = (pVVar9->upVector).x;
                          uVar26 = (pVVar9->upVector).y;
                          fVar13 = fVar4 - (float)uVar26 * fVar8;
                          fVar3 = fVar5 - (pVVar9->upVector).z * fVar8;
                          pGVar14 = (this->fields)._bottomTick;
                          position_01.y = fVar13;
                          position_01.x = (float)ppVVar15 - (float)uVar25 * fVar8;
                          position_01.z = fVar3;
                          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_WorldToScreenPoint_1
                                              ((Vector3 *)&stack0xffffffd0,this_01,position_01,
                                               (MethodInfo *)0x0);
                          value_02.x = pVVar2->x;
                          value_02.y = pVVar2->y;
                          if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
                          fVar12 = 0.0;
                          GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value_02,(MethodInfo *)0x0);
                          pPVar16 = (this->fields)._extentTicks;
                          if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                          goto code_?;
                          if (4 < pPVar16->max_length) {
                            pPVar17 = pPVar16->vector[4];
                            if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                            goto code_?;
                            (pPVar17->fields).Position.x = fVar12;
                            (pPVar17->fields).Position.y = fVar13;
                            (pPVar17->fields).Position.z = fVar3;
                            pPVar16 = (this->fields)._extentTicks;
                            if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                            goto code_?;
                            if (4 < pPVar16->max_length) {
                              pPVar17 = pPVar16->vector[4];
                              if (cRam_? == '\0') {
                                ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar27 = (pVVar9->upVector).x;
                              uVar28 = (pVVar9->upVector).y;
                              uVar20 = uVar28 ^ 
                                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                              ;
                              fVar3 = (float)((uint)(pVVar9->upVector).z ^
                                             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                             );
                              if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                              goto code_?;
                              (pPVar17->fields).Normal.x =
                                   (float)(uVar27 ^ 
                                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                          );
                              (pPVar17->fields).Normal.y = (float)uVar20;
                              (pPVar17->fields).Normal.z = fVar3;
                              if (cRam_? == '\0') {
                                ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar29 = (pVVar9->forwardVector).x;
                              uVar30 = (pVVar9->forwardVector).y;
                              fVar13 = fVar4 - (float)uVar30 * fVar8;
                              fVar3 = fVar5 - (pVVar9->forwardVector).z * fVar8;
                              pGVar14 = (this->fields)._frontTick;
                              position_02.y = fVar13;
                              position_02.x = (float)ppVVar15 - (float)uVar29 * fVar8;
                              position_02.z = fVar3;
                              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  ((Vector3 *)&stack0xffffffd0,this_01,position_02,
                                                   (MethodInfo *)0x0);
                              value_03.x = pVVar2->x;
                              value_03.y = pVVar2->y;
                              if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
                              fVar12 = 0.0;
                              GizmoCap2D::GizmoCap2D_set_Position
                                        (pGVar14,value_03,(MethodInfo *)0x0);
                              pPVar16 = (this->fields)._extentTicks;
                              if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                              goto code_?;
                              if (pPVar16->max_length != 0) {
                                pPVar17 = pPVar16->vector[0];
                                if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                                goto code_?;
                                (pPVar17->fields).Position.x = fVar12;
                                (pPVar17->fields).Position.y = fVar13;
                                (pPVar17->fields).Position.z = fVar3;
                                pPVar16 = (this->fields)._extentTicks;
                                if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                                goto code_?;
                                if (pPVar16->max_length != 0) {
                                  pPVar17 = pPVar16->vector[0];
                                  if (cRam_? == '\0') {
                                    ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  uVar31 = (pVVar9->forwardVector).x;
                                  uVar32 = (pVVar9->forwardVector).y;
                                  uVar20 = uVar32 ^ 
                                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                  ;
                                  fVar3 = (float)((uint)(pVVar9->forwardVector).z ^
                                                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                                 );
                                  if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                                  goto code_?;
                                  (pPVar17->fields).Normal.x =
                                       (float)(uVar31 ^ 
                                              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                              );
                                  (pPVar17->fields).Normal.y = (float)uVar20;
                                  (pPVar17->fields).Normal.z = fVar3;
                                  if (cRam_? == '\0') {
                                    ppVVar15 = &TypeInfo__UnityEngine__Vector3;
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  uVar33 = (pVVar9->forwardVector).x;
                                  uVar34 = (pVVar9->forwardVector).y;
                                  fVar13 = (float)ppVVar15 + (float)uVar33 * fVar8;
                                  fVar4 = fVar4 + (float)uVar34 * fVar8;
                                  fVar3 = fVar5 + (pVVar9->forwardVector).z * fVar8;
                                  pGVar14 = (this->fields)._backTick;
                                  position_03.y = fVar4;
                                  position_03.x = fVar13;
                                  position_03.z = fVar3;
                                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                            Camera_WorldToScreenPoint_1
                                                      ((Vector3 *)&stack0xffffffa8,this_01,
                                                       position_03,(MethodInfo *)0x0);
                                  value_04.x = pVVar2->x;
                                  value_04.y = pVVar2->y;
                                  if (pGVar14 == (GizmoCap2D *)0x0) goto code_?;
                                  GizmoCap2D::GizmoCap2D_set_Position
                                            (pGVar14,value_04,(MethodInfo *)0x0);
                                  pPVar16 = (this->fields)._extentTicks;
                                  if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                                  goto code_?;
                                  if (1 < pPVar16->max_length) {
                                    pPVar17 = pPVar16->vector[1];
                                    if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                                    goto code_?;
                                    (pPVar17->fields).Position.x = fVar13;
                                    (pPVar17->fields).Position.y = fVar4;
                                    (pPVar17->fields).Position.z = fVar3;
                                    pPVar16 = (this->fields)._extentTicks;
                                    if (pPVar16 == (PointLightGizmo3D_ExtentTick__Array *)0x0)
                                    goto code_?;
                                    if (1 < pPVar16->max_length) {
                                      pPVar17 = pPVar16->vector[1];
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      fVar4 = (pVVar9->forwardVector).y;
                                      fVar3 = (pVVar9->forwardVector).z;
                                      if (pPVar17 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                        (pPVar17->fields).Normal.x = (pVVar9->forwardVector).x;
                                        (pPVar17->fields).Normal.y = fVar4;
                                        (pPVar17->fields).Normal.z = fVar3;
                                        pGVar35 = (this->fields)._axialCircleXY;
                                        if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                          value_05.y = fVar7;
                                          value_05.x = fVar6;
                                          value_05.z = fVar5;
                                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                    (pGVar35,value_05,(MethodInfo *)0x0);
                                          pGVar35 = (this->fields)._axialCircleYZ;
                                          if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                            value_06.y = fVar7;
                                            value_06.x = fVar6;
                                            value_06.z = fVar5;
                                            GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                      (pGVar35,value_06,(MethodInfo *)0x0);
                                            pGVar35 = (this->fields)._axialCircleZX;
                                            if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                              value_07.y = fVar7;
                                              value_07.x = fVar6;
                                              value_07.z = fVar5;
                                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position
                                                        (pGVar35,value_07,(MethodInfo *)0x0);
                                              pGVar35 = (this->fields)._axialCircleXY;
                                              if (cRam_? == '\0') {
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation
                                                          (pGVar35,TypeInfo__UnityEngine__Quaternion
                                                                   ->static_fields->
                                                                   identityQuaternion,
                                                           (MethodInfo *)0x0);
                                                pGVar35 = (this->fields)._axialCircleYZ;
                                                auVar36._4_8_ = 0;
                                                auVar36._0_4_ = _UNK_?;
                                                fVar3 = _UNK_?;
                                                pQVar37 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Quaternion::
                                                          Quaternion_Internal_FromEulerRad
                                                                    ((Quaternion *)&stack0xffffff80,
                                                                     (Vector3)(auVar36 << 0x20),
                                                                     (MethodInfo *)0x0);
                                                if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                  GizmoPlaneSlider3D::
                                                  GizmoPlaneSlider3D_set_Rotation
                                                            (pGVar35,*pQVar37,(MethodInfo *)0x0);
                                                  pGVar35 = (this->fields)._axialCircleZX;
                                                  euler.y = 0.0;
                                                  euler.z = 0.0;
                                                  euler.x = fVar3;
                                                  pQVar37 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Quaternion::
                                                            Quaternion_Internal_FromEulerRad
                                                                      ((Quaternion *)
                                                                       &stack0xffffff70,euler,
                                                                       (MethodInfo *)0x0);
                                                  if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::
                                                    GizmoPlaneSlider3D_set_Rotation
                                                              (pGVar35,*pQVar37,(MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._axialCircleXY;
                                                    if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar38 = GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_get_LookAndFeel
                                                                          (pGVar35,(MethodInfo *)0x0
                                                                          );
                                                      if ((this->fields)._sharedLookAndFeel ==
                                                          (PointLightGizmo3DLookAndFeel *)0x0) {
                                                        pPVar39 = (this->fields)._lookAndFeel;
                                                        if (pPVar39 ==
                                                            (PointLightGizmo3DLookAndFeel *)0x0)
                                                        goto code_?;
                                                      }
                                                      else {
                                                        pPVar39 = (this->fields)._sharedLookAndFeel;
                                                      }
                                                      fVar3 = (pPVar39->fields)._wireColor.g;
                                                      fVar4 = (pPVar39->fields)._wireColor.b;
                                                      fVar5 = (pPVar39->fields)._wireColor.a;
                                                      if (pGVar38 !=
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                        (pGVar38->fields)._borderColor.r =
                                                             (pPVar39->fields)._wireColor.r;
                                                        (pGVar38->fields)._borderColor.g = fVar3;
                                                        (pGVar38->fields)._borderColor.b = fVar4;
                                                        (pGVar38->fields)._borderColor.a = fVar5;
                                                        pGVar40 = (this->fields)._axialCircleYZ;
                                                        if (pGVar40 != (GizmoPlaneSlider3D *)0x0) {
                                                          pGVar38 = GizmoPlaneSlider3D::
                                                                                                                                        
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar40,(MethodInfo *)0x0);
                                                  if ((this->fields)._sharedLookAndFeel ==
                                                      (PointLightGizmo3DLookAndFeel *)0x0) {
                                                    pPVar39 = (this->fields)._lookAndFeel;
                                                    if (pPVar39 ==
                                                        (PointLightGizmo3DLookAndFeel *)0x0)
                                                    goto code_?;
                                                  }
                                                  else {
                                                    pPVar39 = (this->fields)._sharedLookAndFeel;
                                                  }
                                                  fVar3 = (pPVar39->fields)._wireColor.g;
                                                  fVar4 = (pPVar39->fields)._wireColor.b;
                                                  fVar5 = (pPVar39->fields)._wireColor.a;
                                                  if (pGVar38 !=
                                                      (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                    (pGVar38->fields)._borderColor.r =
                                                         (pPVar39->fields)._wireColor.r;
                                                    (pGVar38->fields)._borderColor.g = fVar3;
                                                    (pGVar38->fields)._borderColor.b = fVar4;
                                                    (pGVar38->fields)._borderColor.a = fVar5;
                                                    pGVar40 = (this->fields)._axialCircleZX;
                                                    if (pGVar40 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar38 = GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_get_LookAndFeel
                                                                          (pGVar40,(MethodInfo *)0x0
                                                                          );
                                                      if ((this->fields)._sharedLookAndFeel ==
                                                          (PointLightGizmo3DLookAndFeel *)0x0) {
                                                        pPVar39 = (this->fields)._lookAndFeel;
                                                        if (pPVar39 ==
                                                            (PointLightGizmo3DLookAndFeel *)0x0)
                                                        goto code_?;
                                                      }
                                                      else {
                                                        pPVar39 = (this->fields)._sharedLookAndFeel;
                                                      }
                                                      fVar3 = (pPVar39->fields)._wireColor.g;
                                                      fVar4 = (pPVar39->fields)._wireColor.b;
                                                      fVar5 = (pPVar39->fields)._wireColor.a;
                                                      if (pGVar38 !=
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                        (pGVar38->fields)._borderColor.r =
                                                             (pPVar39->fields)._wireColor.r;
                                                        (pGVar38->fields)._borderColor.g = fVar3;
                                                        (pGVar38->fields)._borderColor.b = fVar4;
                                                        (pGVar38->fields)._borderColor.a = fVar5;
                                                        pGVar40 = (this->fields)._axialCircleXY;
                                                        if ((pGVar40 != (GizmoPlaneSlider3D *)0x0)
                                                           && (pGVar38 = GizmoPlaneSlider3D::
                                                                                                                                                  
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar40,(MethodInfo *)0x0),
                                                  pGVar38 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
                                                  {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                    GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                              (pGVar38,(float)pGVar35,
                                                               (MethodInfo *)0x0);
                                                    pGVar40 = (this->fields)._axialCircleYZ;
                                                    if ((pGVar40 != (GizmoPlaneSlider3D *)0x0) &&
                                                       (pGVar38 = GizmoPlaneSlider3D::
                                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                                            (pGVar40,(MethodInfo *)
                                                                                     0x0),
                                                       pGVar38 !=
                                                       (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                      GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                                (pGVar38,(float)pGVar35,
                                                                 (MethodInfo *)0x0);
                                                      pGVar40 = (this->fields)._axialCircleZX;
                                                      if ((pGVar40 != (GizmoPlaneSlider3D *)0x0) &&
                                                         (pGVar38 = GizmoPlaneSlider3D::
                                                                                                                                        
                                                  GizmoPlaneSlider3D_get_LookAndFeel
                                                            (pGVar40,(MethodInfo *)0x0),
                                                  pGVar38 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
                                                  {
                                                    GizmoPlaneSlider3DLookAndFeel::
                                                    GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
                                                              (pGVar38,(float)pGVar35,
                                                               (MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._axialCircleXY;
                                                    if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                      pGVar38 = GizmoPlaneSlider3D::
                                                                GizmoPlaneSlider3D_get_LookAndFeel
                                                                          (pGVar35,(MethodInfo *)0x0
                                                                          );
                                                      if ((this->fields)._sharedLookAndFeel ==
                                                          (PointLightGizmo3DLookAndFeel *)0x0) {
                                                        pPVar39 = (this->fields)._lookAndFeel;
                                                        if (pPVar39 ==
                                                            (PointLightGizmo3DLookAndFeel *)0x0)
                                                        goto code_?;
                                                      }
                                                      else {
                                                        pPVar39 = (this->fields)._sharedLookAndFeel;
                                                      }
                                                      if (pGVar38 !=
                                                          (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                        GizmoPlaneSlider3DLookAndFeel::
                                                                                                                
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar38,(pPVar39->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar35 = (this->fields)._axialCircleYZ;
                                                  if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar38 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar35,(MethodInfo *)0x0);
                                                    if ((this->fields)._sharedLookAndFeel ==
                                                        (PointLightGizmo3DLookAndFeel *)0x0) {
                                                      pPVar39 = (this->fields)._lookAndFeel;
                                                      if (pPVar39 ==
                                                          (PointLightGizmo3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                    }
                                                    else {
                                                      pPVar39 = (this->fields)._sharedLookAndFeel;
                                                    }
                                                    if (pGVar38 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar38,(pPVar39->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar35 = (this->fields)._axialCircleZX;
                                                  if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                    pGVar38 = GizmoPlaneSlider3D::
                                                              GizmoPlaneSlider3D_get_LookAndFeel
                                                                        (pGVar35,(MethodInfo *)0x0);
                                                    if ((this->fields)._sharedLookAndFeel ==
                                                        (PointLightGizmo3DLookAndFeel *)0x0) {
                                                      pPVar39 = (this->fields)._lookAndFeel;
                                                      if (pPVar39 ==
                                                          (PointLightGizmo3DLookAndFeel *)0x0)
                                                      goto code_?;
                                                    }
                                                    else {
                                                      pPVar39 = (this->fields)._sharedLookAndFeel;
                                                    }
                                                    if (pGVar38 !=
                                                        (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                      GizmoPlaneSlider3DLookAndFeel::
                                                                                                            
                                                  GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
                                                            (pGVar38,(pPVar39->fields).
                                                                     _axialCircleCullAlphaScale,
                                                             (MethodInfo *)0x0);
                                                  pGVar35 = (this->fields)._axialCircleXY;
                                                  if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                              (pGVar35,(MethodInfo *)0x0);
                                                    pGVar35 = (this->fields)._axialCircleYZ;
                                                    if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh
                                                                (pGVar35,(MethodInfo *)0x0);
                                                      pGVar35 = (this->fields)._axialCircleZX;
                                                      if (pGVar35 != (GizmoPlaneSlider3D *)0x0) {
                                                        GizmoPlaneSlider3D::
                                                        GizmoPlaneSlider3D_Refresh
                                                                  (pGVar35,(MethodInfo *)0x0);
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
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateHoverPriorities
               (PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._extentTicks;
  if (pPVar1 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
  if (pPVar1->max_length < 3) goto code_?;
  pPVar2 = (this->fields)._extentTicks;
  pPVar3 = pPVar1->vector[2];
  if (pPVar2->max_length < 4) goto code_?;
  pPVar4 = pPVar2->vector[3];
  if ((pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0) &&
     (pGVar5 = (pPVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) {
    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
              XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
    if ((pSVar6 != (String *)0x0) &&
       (((pSVar6->fields)._stringLength = 0, pPVar4 != (PointLightGizmo3D_ExtentTick *)0x0 &&
        (pGVar5 = (pPVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)))) {
      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
      if (pSVar6 != (String *)0x0) {
        (pSVar6->fields)._stringLength = 0;
        VVar7 = (pPVar3->fields).Position;
        VVar8 = (pPVar3->fields).Normal;
        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__CameraEx);
        }
        bVar9 = CameraEx::CameraEx_IsPointFacingCamera(camera,VVar7,VVar8,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          pGVar5 = (pPVar4->fields).Tick;
          if (pGVar5 != (GizmoCap2D *)0x0) {
            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                      XDocumentTypeWrapper_get_System
                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
            pGVar5 = (pPVar3->fields).Tick;
            if (pGVar5 != (GizmoCap2D *)0x0) {
              pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                        XDocumentTypeWrapper_get_System
                                  ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
code_?:
              if (pSVar6 != (String *)0x0) {
                Priority::Priority_MakeHigherThan
                          ((Priority *)pSVar6,(Priority *)pSVar10,(MethodInfo *)0x0);
                pPVar1 = (this->fields)._extentTicks;
                if (pPVar1 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                  if (pPVar1->max_length < 6) goto code_?;
                  pPVar2 = (this->fields)._extentTicks;
                  pPVar3 = pPVar1->vector[5];
                  if (pPVar2->max_length < 5) goto code_?;
                  pPVar4 = pPVar2->vector[4];
                  if ((pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0) &&
                     (pGVar5 = (pPVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)) {
                    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                              XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                        ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                    if ((pSVar6 != (String *)0x0) &&
                       (((pSVar6->fields)._stringLength = 2,
                        pPVar4 != (PointLightGizmo3D_ExtentTick *)0x0 &&
                        (pGVar5 = (pPVar4->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)))) {
                      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                          ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                      if (pSVar6 != (String *)0x0) {
                        (pSVar6->fields)._stringLength = 2;
                        VVar7 = (pPVar3->fields).Position;
                        uVar11._0_4_ = (pPVar3->fields).Normal.x;
                        uVar11._4_4_ = (pPVar3->fields).Normal.y;
                        fVar12 = (pPVar3->fields).Normal.z;
                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__RTG__CameraEx);
                        }
                        VVar8.z = fVar12;
                        VVar8.x = (float)(int)uVar11;
                        VVar8.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                        bVar9 = CameraEx::CameraEx_IsPointFacingCamera
                                          (camera,VVar7,VVar8,(MethodInfo *)0x0);
                        if (bVar9 == 0) {
                          pGVar5 = (pPVar4->fields).Tick;
                          if (pGVar5 != (GizmoCap2D *)0x0) {
                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                      XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                            pGVar5 = (pPVar3->fields).Tick;
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
                                pPVar1 = (this->fields)._extentTicks;
                                if (pPVar1 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                  if (pPVar1->max_length == 0) goto code_?;
                                  pPVar2 = (this->fields)._extentTicks;
                                  pPVar3 = pPVar1->vector[0];
                                  if (pPVar2->max_length < 2) goto code_?;
                                  pPVar4 = pPVar2->vector[1];
                                  if ((pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0) &&
                                     (pGVar5 = (pPVar3->fields).Tick, pGVar5 != (GizmoCap2D *)0x0)
                                     ) {
                                    pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                              XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                        ((XDocumentTypeWrapper *)pGVar5,
                                                         (MethodInfo *)0x0);
                                    if ((pSVar6 != (String *)0x0) &&
                                       (((pSVar6->fields)._stringLength = 4,
                                        pPVar4 != (PointLightGizmo3D_ExtentTick *)0x0 &&
                                        (pGVar5 = (pPVar4->fields).Tick,
                                        pGVar5 != (GizmoCap2D *)0x0)))) {
                                      pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                                XDocumentTypeWrapper::
                                                XDocumentTypeWrapper_get_System
                                                          ((XDocumentTypeWrapper *)pGVar5,
                                                           (MethodInfo *)0x0);
                                      if (pSVar6 != (String *)0x0) {
                                        (pSVar6->fields)._stringLength = 4;
                                        uVar13._0_4_ = (pPVar3->fields).Position.x;
                                        uVar13._4_4_ = (pPVar3->fields).Position.y;
                                        VVar7 = (pPVar3->fields).Normal;
                                        fVar12 = (pPVar3->fields).Position.z;
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
                                          pGVar5 = (pPVar4->fields).Tick;
                                          if (pGVar5 != (GizmoCap2D *)0x0) {
                                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                      Converters::XDocumentTypeWrapper::
                                                      XDocumentTypeWrapper_get_System
                                                                ((XDocumentTypeWrapper *)pGVar5,
                                                                 (MethodInfo *)0x0);
                                            pGVar5 = (pPVar3->fields).Tick;
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
                                          pGVar5 = (pPVar3->fields).Tick;
                                          if (pGVar5 != (GizmoCap2D *)0x0) {
                                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::
                                                      Converters::XDocumentTypeWrapper::
                                                      XDocumentTypeWrapper_get_System
                                                                ((XDocumentTypeWrapper *)pGVar5,
                                                                 (MethodInfo *)0x0);
                                            pGVar5 = (pPVar4->fields).Tick;
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
                          pGVar5 = (pPVar3->fields).Tick;
                          if (pGVar5 != (GizmoCap2D *)0x0) {
                            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::
                                      XDocumentTypeWrapper::XDocumentTypeWrapper_get_System
                                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
                            pGVar5 = (pPVar4->fields).Tick;
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
          pGVar5 = (pPVar3->fields).Tick;
          if (pGVar5 != (GizmoCap2D *)0x0) {
            pSVar6 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::
                      XDocumentTypeWrapper_get_System
                                ((XDocumentTypeWrapper *)pGVar5,(MethodInfo *)0x0);
            pGVar5 = (pPVar4->fields).Tick;
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateTickColors
               (PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

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
      pPVar11 = (this->fields)._extentTicks;
      fVar6 = (float)((uint)((float)uVar5 * fVar8 + (float)uVar4 * fVar7 + fVar6 * fVar9) ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      if (pPVar11 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
        ppPVar12 = pPVar11->vector;
        do {
          if ((int)pPVar11->max_length <= (int)uStack_10) {
            return;
          }
          if (pPVar11->max_length <= uStack_10) goto code_?;
          pPVar13 = *ppPVar12;
          if (pPVar13 == (PointLightGizmo3D_ExtentTick *)0x0) break;
          this_00 = (pPVar13->fields).Tick;
          this_01 = (this->fields)._._gizmo;
          if ((this_01 == (Gizmo *)0x0) ||
             (pvVar14 = (void *)UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                PointerCaptureEventBase`1[System::Object]::
                                PointerCaptureEventBase_1_System_Object__get_pointerId
                                          ((PointerCaptureEventBase_1_System_Object_ *)this_01,
                                           (MethodInfo *)0x0), this_00 == (GizmoCap2D *)0x0)) break;
          pvVar15 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
          if (pvVar14 == pvVar15) {
code_?:
            pGVar16 = (this_00->fields)._overrideFillColor;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._isActive = 0;
            pGVar16 = (this_00->fields)._overrideBorderColor;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._isActive = 0;
          }
          else {
            VVar3 = (pPVar13->fields).Position;
            pointNormal = (pPVar13->fields).Normal;
            if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar17 = CameraEx::CameraEx_IsPointFacingCamera
                               (camera,VVar3,pointNormal,(MethodInfo *)0x0);
            if (bVar17 != 0) goto code_?;
            pGVar16 = (this_00->fields)._overrideFillColor;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._isActive = 1;
            pGVar16 = (this_00->fields)._overrideBorderColor;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._isActive = 1;
            pGVar18 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar18 == (GizmoCap2DLookAndFeel *)0x0) break;
            pGVar16 = (this_00->fields)._overrideFillColor;
            if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
              pPVar19 = (this->fields)._lookAndFeel;
              if (pPVar19 == (PointLightGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pPVar19 = (this->fields)._sharedLookAndFeel;
            }
            pCVar20 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar18->fields)._color,
                                 (pGVar18->fields)._color.a * (pPVar19->fields)._tickCullAlphaScale,
                                 (MethodInfo *)0x0);
            fVar7 = pCVar20->g;
            fVar8 = pCVar20->b;
            fVar9 = pCVar20->a;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._color.r = pCVar20->r;
            (pGVar16->fields)._color.g = fVar7;
            (pGVar16->fields)._color.b = fVar8;
            (pGVar16->fields)._color.a = fVar9;
            pGVar18 = (this_00->fields)._sharedLookAndFeel;
            if (pGVar18 == (GizmoCap2DLookAndFeel *)0x0) break;
            pGVar16 = (this_00->fields)._overrideBorderColor;
            if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
              pPVar19 = (this->fields)._lookAndFeel;
              if (pPVar19 == (PointLightGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pPVar19 = (this->fields)._sharedLookAndFeel;
            }
            fVar7 = (pGVar18->fields)._borderColor.g;
            fVar8 = (pGVar18->fields)._borderColor.b;
            fVar9 = (pGVar18->fields)._borderColor.a;
            pCVar20 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar18->fields)._borderColor,
                                 (pGVar18->fields)._borderColor.a *
                                 (pPVar19->fields)._tickCullAlphaScale,(MethodInfo *)0x0);
            fVar21 = pCVar20->g;
            fVar22 = pCVar20->b;
            fVar23 = pCVar20->a;
            if (pGVar16 == (GizmoOverrideColor *)0x0) break;
            (pGVar16->fields)._color.r = pCVar20->r;
            (pGVar16->fields)._color.g = fVar21;
            (pGVar16->fields)._color.b = fVar22;
            (pGVar16->fields)._color.a = fVar23;
          }
          uVar24 = (pPVar13->fields).Position.x;
          uVar25 = (pPVar13->fields).Position.y;
          GizmoCap::GizmoCap_SetVisible
                    ((GizmoCap *)this_00,
                     0.0 < fVar8 * (float)uVar25 + fVar7 * (float)uVar24 +
                           fVar9 * (pPVar13->fields).Position.z + fVar6,(MethodInfo *)0x0);
          uStack_10 = uStack_10 + 1;
          ppPVar12 = ppPVar12 + 1;
        } while( true );
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* PointLightGizmo3D() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D__ctor
               (PointLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__Light3DSnapshot);
    func_?(&TypeInfo__RTG__PointLightGizmo3DHotkeys);
    func_?(&TypeInfo__RTG__PointLightGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__PointLightGizmo3DSettings);
    func_?(&TypeInfo__RTG__PolygonShape2D);
    cRam_? = '\x01';
  }
  pPVar1 = (PointLightGizmo3D_ExtentTick__Array *)
           func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick,6);
  (this->fields)._extentTicks = pPVar1;
  func_?(&(this->fields)._extentTicks,pPVar1);
  this_00 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._sphereBorderPoly = this_00;
  func_?(&(this->fields)._sphereBorderPoly,this_00);
  pLVar2 = TypeInfo__RTG__Light3DSnapshot;
  pLVar3 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar2);
  (this->fields)._preChangeSnapshot = pLVar3;
  func_?(&(this->fields)._preChangeSnapshot,pLVar3);
  pLVar2 = TypeInfo__RTG__Light3DSnapshot;
  pLVar3 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar2);
  (this->fields)._postChangeSnapshot = pLVar3;
  func_?();
  this_01 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = (GizmoSglAxisOffsetDrag3D *)this_01;
  func_?(&(this->fields)._offsetDrag,this_01);
  this_02 = (PointLightGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__PointLightGizmo3DLookAndFeel);
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  method_01 = TypeInfo__RTG__PointLightGizmo3DSettings;
  value = (PointLightGizmo3DSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields)._settings = value;
  func_?(&(this->fields)._settings,value);
  value_00 = (PointLightGizmo3DHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_03 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (this_03,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (this_03 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(this_03,KeyCode__Enum_None,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&value_00->fields;
    (this_03->fields)._lCtrl = 1;
    (value_00->fields)._enableSnapping = this_03;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
    (this->fields)._hotkeys = value_00;
    func_?();
    GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PointLightGizmo3DHotkeys get_Hotkeys() */

PointLightGizmo3DHotkeys *
Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_Hotkeys
          (PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (PointLightGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_IsSnapEnabled
               (PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  if ((this->fields)._sharedHotkeys == (PointLightGizmo3DHotkeys *)0x0) {
    pPVar1 = (this->fields)._hotkeys;
    if (pPVar1 == (PointLightGizmo3DHotkeys *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pPVar1->fields)._enableSnapping;
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


/* PointLightGizmo3DLookAndFeel get_LookAndFeel() */

PointLightGizmo3DLookAndFeel *
Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_LookAndFeel
          (PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


/* PointLightGizmo3DSettings get_Settings() */

PointLightGizmo3DSettings *
Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_Settings
          (PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings == (PointLightGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return (this->fields)._sharedSettings;
}


/* Void set_SharedLookAndFeel(PointLightGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_set_SharedLookAndFeel
               (PointLightGizmo3D *this,PointLightGizmo3DLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  PointLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

