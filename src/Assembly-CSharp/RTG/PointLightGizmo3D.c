
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
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1c,(MethodInfo *)0x0);
    (this->fields)._frontTick = pGVar2;
    func_?(&(this->fields)._frontTick,pGVar2);
    pGVar3 = (GizmoCap3D *)(this->fields)._frontTick;
    if (pGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar5->max_length < 3) goto code_?;
    pPVar5->vector[2] = pPVar6;
    func_?(pPVar5->vector + 2,pPVar6);
    pPVar5 = (this->fields)._extentTicks;
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar5->max_length < 3) goto code_?;
    pPVar6 = pPVar5->vector[2];
    pGVar2 = (this->fields)._leftTick;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar6->fields).Tick = pGVar2;
    func_?(&(pPVar6->fields).Tick,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar5->max_length < 4) goto code_?;
    pPVar5->vector[3] = pPVar6;
    func_?(pPVar5->vector + 3,pPVar6);
    pPVar5 = (this->fields)._extentTicks;
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar5->max_length < 4) goto code_?;
    pPVar6 = pPVar5->vector[3];
    pGVar2 = (this->fields)._rightTick;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar6->fields).Tick = pGVar2;
    func_?(&(pPVar6->fields).Tick,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar5->max_length < 6) goto code_?;
    pPVar5->vector[5] = pPVar6;
    func_?(pPVar5->vector + 5,pPVar6);
    pPVar5 = (this->fields)._extentTicks;
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar5->max_length < 6) goto code_?;
    pPVar6 = pPVar5->vector[5];
    pGVar2 = (this->fields)._topTick;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar6->fields).Tick = pGVar2;
    func_?(&(pPVar6->fields).Tick,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar5->max_length < 5) goto code_?;
    pPVar5->vector[4] = pPVar6;
    func_?(pPVar5->vector + 4,pPVar6);
    pPVar5 = (this->fields)._extentTicks;
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar5->max_length < 5) goto code_?;
    pPVar6 = pPVar5->vector[4];
    pGVar2 = (this->fields)._bottomTick;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar6->fields).Tick = pGVar2;
    func_?(&(pPVar6->fields).Tick,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
      iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pPVar5->max_length == 0) goto code_?;
    pPVar5->vector[0] = pPVar6;
    func_?(pPVar5->vector,pPVar6);
    pPVar5 = (this->fields)._extentTicks;
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar5->max_length == 0) goto code_?;
    pPVar6 = pPVar5->vector[0];
    pGVar2 = (this->fields)._frontTick;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    (pPVar6->fields).Tick = pGVar2;
    func_?(&(pPVar6->fields).Tick,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)
             func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) {
code_?:
      if (pPVar5->max_length < 2) goto code_?;
      pPVar5->vector[1] = pPVar6;
      func_?(pPVar5->vector + 1,pPVar6);
      pPVar5 = (this->fields)._extentTicks;
      if (pPVar5 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
        if (pPVar5->max_length < 2) goto code_?;
        pPVar6 = pPVar5->vector[1];
        pGVar2 = (this->fields)._backTick;
        if (pPVar6 != (PointLightGizmo3D_ExtentTick *)0x0) {
          (pPVar6->fields).Tick = pGVar2;
          func_?(&(pPVar6->fields).Tick,pGVar2);
          pGVar1 = (this->fields)._._gizmo;
          pGVar8 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
          GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x23,(MethodInfo *)0x0);
          (this->fields)._axialCircleXY = pGVar8;
          func_?(&(this->fields)._axialCircleXY,pGVar8);
          pGVar8 = (this->fields)._axialCircleXY;
          if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)pGVar8,0,(MethodInfo *)0x0);
            pGVar8 = (this->fields)._axialCircleXY;
            if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(pGVar8,0,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._axialCircleXY;
              if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                pGVar9 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                   (pGVar8,(MethodInfo *)0x0);
                if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  (pGVar9->fields)._useZoomFactor = 0;
                  pGVar8 = (this->fields)._axialCircleXY;
                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar9 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                       (pGVar8,(MethodInfo *)0x0);
                    if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      (pGVar9->fields)._planeType = 2;
                      pGVar1 = (this->fields)._._gizmo;
                      pGVar8 = (GizmoPlaneSlider3D *)
                               func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                (pGVar8,pGVar1,0x24,(MethodInfo *)0x0);
                      (this->fields)._axialCircleYZ = pGVar8;
                      func_?(&(this->fields)._axialCircleYZ,pGVar8);
                      pGVar8 = (this->fields)._axialCircleYZ;
                      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoSlider::GizmoSlider_SetVisible
                                  ((GizmoSlider *)pGVar8,0,(MethodInfo *)0x0);
                        pGVar8 = (this->fields)._axialCircleYZ;
                        if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                    (pGVar8,0,(MethodInfo *)0x0);
                          pGVar8 = (this->fields)._axialCircleYZ;
                          if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                            pGVar9 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                               (pGVar8,(MethodInfo *)0x0);
                            if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              (pGVar9->fields)._useZoomFactor = 0;
                              pGVar8 = (this->fields)._axialCircleYZ;
                              if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar9 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                                   (pGVar8,(MethodInfo *)0x0);
                                if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  (pGVar9->fields)._planeType = 2;
                                  pGVar1 = (this->fields)._._gizmo;
                                  pGVar8 = (GizmoPlaneSlider3D *)
                                           func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor
                                            (pGVar8,pGVar1,0x25,(MethodInfo *)0x0);
                                  (this->fields)._axialCircleZX = pGVar8;
                                  func_?(&(this->fields)._axialCircleZX,pGVar8);
                                  pGVar8 = (this->fields)._axialCircleZX;
                                  if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible
                                              ((GizmoSlider *)pGVar8,0,(MethodInfo *)0x0);
                                    pGVar8 = (this->fields)._axialCircleZX;
                                    if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable
                                                (pGVar8,0,(MethodInfo *)0x0);
                                      pGVar8 = (this->fields)._axialCircleZX;
                                      if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                        pGVar9 = GizmoPlaneSlider3D::
                                                 GizmoPlaneSlider3D_get_LookAndFeel
                                                           (pGVar8,(MethodInfo *)0x0);
                                        if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          (pGVar9->fields)._useZoomFactor = 0;
                                          pGVar8 = (this->fields)._axialCircleZX;
                                          if (pGVar8 != (GizmoPlaneSlider3D *)0x0) {
                                            pGVar9 = GizmoPlaneSlider3D::
                                                     GizmoPlaneSlider3D_get_LookAndFeel
                                                               (pGVar8,(MethodInfo *)0x0);
                                            if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                              (pGVar9->fields)._planeType = 2;
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
    iVar7 = func_?(pPVar6,(pPVar5->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  VStack_2.z = (float)&UNK_?;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_01,(MethodInfo *)0x0);
  if (this_02 == (Transform *)0x0) goto code_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar3->x;
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
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_2,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar7 = (this->fields)._rightTick;
  if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
  pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
            AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar8) {
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_2,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
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
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_2,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
      goto code_?;
    }
    pGVar7 = (this->fields)._bottomTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_2,(MethodInfo *)0x0);
code_?:
      uVar9 = pVVar3->x;
      uVar10 = pVVar3->y;
      uVar11 = uVar10 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar5 = (float)((uint)pVVar3->z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields)._offsetDragWorkData.Axis.x =
           (float)(uVar9 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      (this->fields)._offsetDragWorkData.Axis.y = (float)uVar11;
      goto code_?;
    }
    pGVar7 = (this->fields)._frontTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_2,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar7 = (this->fields)._backTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
              AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      (this->fields)._offsetDragWorkData.Axis.x = pVVar3->x;
      (this->fields)._offsetDragWorkData.Axis.y = fVar4;
      goto code_?;
    }
  }
  fVar4 = (this->fields)._offsetDragWorkData.DragOrigin.x;
  VStack_2.x = (this->fields)._offsetDragWorkData.DragOrigin.y;
  VStack_2.y = (this->fields)._offsetDragWorkData.DragOrigin.z;
  VStack_2.z = (this->fields)._offsetDragWorkData.Axis.x;
  pGVar12 = (this->fields)._offsetDrag;
  fVar5 = (this->fields)._offsetDragWorkData.SnapStep;
  if (pGVar12 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    puVar13 = &UNK_?;
    pGVar14 = pGVar12;
    cVar15 = (*(code *)(pGVar12->klass->vtable).get_IsActive_1.method)();
    if (cVar15 == '\0') {
      (pGVar12->fields)._workData.DragOrigin.x = fVar4;
      (pGVar12->fields)._workData.DragOrigin.y = VStack_2.x;
      (pGVar12->fields)._workData.DragOrigin.z = VStack_2.y;
      (pGVar12->fields)._workData.Axis.x = VStack_2.z;
      (pGVar12->fields)._workData.Axis.y = (float)puVar13;
      (pGVar12->fields)._workData.Axis.z = (float)pGVar14;
      (pGVar12->fields)._workData.SnapStep = fVar5;
    }
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    if ((this_01 != (Light *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(this_01,(MethodInfo *)0x0),
       (this->fields)._._gizmo != (Gizmo *)0x0)) {
      fVar4 = (float10)func_?();
      pGVar5 = (this->fields)._._gizmo;
      if (pGVar5 != (Gizmo *)0x0) {
        uVar6 = (pGVar5->fields)._dragInfo._relativeOffset.x;
        uVar7 = (pGVar5->fields)._dragInfo._relativeOffset.y;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
          uVar8 = (pGVar2->fields)._workData.Axis.x;
          uVar9 = (pGVar2->fields)._workData.Axis.y;
          fVar10 = _UNK_?;
          if (0.0 <= (float)uVar9 * (float)uVar7 + (float)uVar6 * (float)uVar8 +
                     (pGVar2->fields)._workData.Axis.z *
                     (pGVar5->fields)._dragInfo._relativeOffset.z) {
            fVar10 = _UNK_?;
          }
          fVar11 = fVar10 * (float)fVar4 + (float)&stack0xffffffdc;
          fVar10 = 0.0;
          if (0.0 <= fVar11) {
            fVar10 = fVar11;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                    (this_01,fVar10,(MethodInfo *)0x0);
          PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
          return;
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
  this_00 = (RTGizmosEngine *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_00 != (RTGizmosEngine *)0x0) {
    iVar2 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_00,(MethodInfo *)0x0);
    if (1 < iVar2) {
      PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
    }
    PointLightGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
    if ((camera != (Camera *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffc8,pTVar3,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar4->x;
      uStack_6 = pVVar4->y;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        uVar5 = uVar5 & 0xffffffff00000000;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_7,pTVar3,(MethodInfo *)0x0);
        uVar5 = uVar5 & 0xffffffff00000000;
        fVar8 = pVVar4->x;
        fVar9 = pVVar4->z;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
          uVar10 = pVVar4->x;
          fVar11 = pVVar4->z;
          puStack_7 = (undefined *)uVar10;
          pCVar12 = camera;
          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                             (camera,(MethodInfo *)0x0);
          fVar8 = fVar8 + (float)puStack_7 * fVar13;
          puVar14 = &UNK_?;
          value.z = (float)pCVar12;
          uStack_6 = (undefined4)(uVar5 >> 0x20);
          value.x = (float)(undefined4)uVar5;
          value.y = (float)uStack_6;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffbc,value,(MethodInfo *)0x0);
          uVar15 = pVVar4->x;
          uVar16 = pVVar4->y;
          fVar17 = pVVar4->z;
          pLVar18 = (this->fields)._targetLight;
          fVar8 = (float)((uint)((float)uVar16 * (float)puVar14 + (float)uVar15 * fVar8 +
                                fVar17 * (fVar9 + fVar11 * fVar13)) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          puStack_7 = (undefined *)uVar16;
          if ((pLVar18 != (Light *)0x0) &&
             (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pLVar18,(MethodInfo *)0x0),
             pTVar3 != (Transform *)0x0)) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
            uVar5._0_4_ = pVVar4->x;
            uStack_6 = pVVar4->y;
            fVar9 = pVVar4->z;
            pLVar18 = (this->fields)._targetLight;
            if (pLVar18 != (Light *)0x0) {
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                                 (pLVar18,(MethodInfo *)0x0);
              center.z = fVar9;
              uStack_6 = (undefined4)(uVar5 >> 0x20);
              center.x = (float)(undefined4)uVar5;
              center.y = (float)uStack_6;
              Sphere::Sphere__ctor((Sphere *)&stack0xffffffac,center,fVar11,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)camera,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                bVar1 = Sphere::Sphere_ContainsPoint
                                   ((Sphere *)&stack0xffffffac,*pVVar4,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  pLVar18 = (this->fields)._targetLight;
                  if ((pLVar18 == (Light *)0x0) ||
                     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pLVar18,(MethodInfo *)0x0),
                     pTVar3 == (Transform *)0x0)) goto code_?;
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                  uVar19 = pVVar4->x;
                  uVar20 = pVVar4->y;
                  if (_UNK_? <
                      (float)puStack_7 * (float)uVar20 + (float)uVar15 * (float)uVar19 +
                      fVar17 * pVVar4->z + fVar8) {
                    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    this_01 = (GizmoLineMaterial *)
                              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                        (
                                        MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__
                                        );
                    if (this_01 == (GizmoLineMaterial *)0x0) goto code_?;
                    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                              (this_01,(MethodInfo *)0x0);
                    if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
                      pPVar21 = (this->fields)._lookAndFeel;
                      if (pPVar21 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pPVar21 = (this->fields)._sharedLookAndFeel;
                    }
                    GizmoLineMaterial::GizmoLineMaterial_SetColor
                              (this_01,(pPVar21->fields)._sphereBorderColor,(MethodInfo *)0x0);
                    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                    pPVar22 = (this->fields)._sphereBorderPoly;
                    pLVar18 = (this->fields)._targetLight;
                    if ((pLVar18 == (Light *)0x0) ||
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pLVar18,(MethodInfo *)0x0),
                       pTVar3 == (Transform *)0x0)) goto code_?;
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                    uVar5._0_4_ = pVVar4->x;
                    uStack_6 = pVVar4->y;
                    fVar8 = pVVar4->z;
                    pLVar18 = (this->fields)._targetLight;
                    if ((pLVar18 == (Light *)0x0) ||
                       (fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                                           (pLVar18,(MethodInfo *)0x0),
                       pPVar22 == (PolygonShape2D *)0x0)) goto code_?;
                    sphereCenter.z = fVar8;
                    uStack_6 = (undefined4)(uVar5 >> 0x20);
                    sphereCenter.x = (float)(undefined4)uVar5;
                    sphereCenter.y = (float)uStack_6;
                    PolygonShape2D::PolygonShape2D_MakeSphereBorder
                              (pPVar22,sphereCenter,fVar9,100,camera,(MethodInfo *)0x0);
                    pPVar22 = (this->fields)._sphereBorderPoly;
                    if (pPVar22 == (PolygonShape2D *)0x0) goto code_?;
                    (*(code *)(pPVar22->klass->vtable).RenderBorder.method)();
                  }
                }
                pGVar23 = (this->fields)._axialCircleXY;
                if (pGVar23 != (GizmoPlaneSlider3D *)0x0) {
                  (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                  pGVar23 = (this->fields)._axialCircleYZ;
                  if (pGVar23 != (GizmoPlaneSlider3D *)0x0) {
                    (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                    pGVar23 = (this->fields)._axialCircleZX;
                    if (pGVar23 != (GizmoPlaneSlider3D *)0x0) {
                      (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                      pGVar24 = (this->fields)._leftTick;
                      if (pGVar24 != (GizmoCap2D *)0x0) {
                        (*(code *)(pGVar24->klass->vtable).Render_1.method)();
                        pGVar24 = (this->fields)._rightTick;
                        if (pGVar24 != (GizmoCap2D *)0x0) {
                          (*(code *)(pGVar24->klass->vtable).Render_1.method)();
                          pGVar24 = (this->fields)._topTick;
                          if (pGVar24 != (GizmoCap2D *)0x0) {
                            (*(code *)(pGVar24->klass->vtable).Render_1.method)();
                            pGVar24 = (this->fields)._bottomTick;
                            if (pGVar24 != (GizmoCap2D *)0x0) {
                              (*(code *)(pGVar24->klass->vtable).Render_1.method)();
                              pGVar24 = (this->fields)._frontTick;
                              if (pGVar24 != (GizmoCap2D *)0x0) {
                                (*(code *)(pGVar24->klass->vtable).Render_1.method)();
                                pGVar24 = (this->fields)._backTick;
                                if (pGVar24 != (GizmoCap2D *)0x0) {
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
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._rightTick,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._topTick,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._backTick,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._leftTick,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._bottomTick,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
  if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
    pPVar1 = (this->fields)._lookAndFeel;
    if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pPVar1 = (this->fields)._sharedLookAndFeel;
  }
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel
            (pPVar1,(this->fields)._frontTick,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
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
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
                  fVar3 = (float)((uint)(pVVar9->rightVector).z ^
                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                 );
                  if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
                  (pPVar17->fields).Normal.x =
                       (float)(uVar18 ^ 
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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
                                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ;
                              fVar3 = (float)((uint)(pVVar9->upVector).z ^
                                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                             );
                              if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                              goto code_?;
                              (pPVar17->fields).Normal.x =
                                   (float)(uVar27 ^ 
                                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  ;
                                  fVar3 = (float)((uint)(pVVar9->forwardVector).z ^
                                                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                 );
                                  if (pPVar17 == (PointLightGizmo3D_ExtentTick *)0x0)
                                  goto code_?;
                                  (pPVar17->fields).Normal.x =
                                       (float)(uVar31 ^ 
                                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
            VVar3 = (pPVar13->fields).Position;
            pointNormal = (pPVar13->fields).Normal;
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
            if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
              pPVar20 = (this->fields)._lookAndFeel;
              if (pPVar20 == (PointLightGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pPVar20 = (this->fields)._sharedLookAndFeel;
            }
            pCVar21 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff90,(pGVar19->fields)._color,
                                 (pGVar19->fields)._color.a * (pPVar20->fields)._tickCullAlphaScale,
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
            if ((this->fields)._sharedLookAndFeel == (PointLightGizmo3DLookAndFeel *)0x0) {
              pPVar20 = (this->fields)._lookAndFeel;
              if (pPVar20 == (PointLightGizmo3DLookAndFeel *)0x0) break;
            }
            else {
              pPVar20 = (this->fields)._sharedLookAndFeel;
            }
            fVar7 = (pGVar19->fields)._borderColor.g;
            fVar8 = (pGVar19->fields)._borderColor.b;
            fVar9 = (pGVar19->fields)._borderColor.a;
            pCVar21 = ColorEx::ColorEx_KeepAllButAlpha
                                ((Color *)&stack0xffffff80,(pGVar19->fields)._borderColor,
                                 (pGVar19->fields)._borderColor.a *
                                 (pPVar20->fields)._tickCullAlphaScale,(MethodInfo *)0x0);
            fVar22 = pCVar21->g;
            fVar23 = pCVar21->b;
            fVar24 = pCVar21->a;
            if (pGVar17 == (GizmoOverrideColor *)0x0) break;
            (pGVar17->fields)._color.r = pCVar21->r;
            (pGVar17->fields)._color.g = fVar22;
            (pGVar17->fields)._color.b = fVar23;
            (pGVar17->fields)._color.a = fVar24;
          }
          uVar25 = (pPVar13->fields).Position.x;
          uVar26 = (pPVar13->fields).Position.y;
          GizmoCap::GizmoCap_SetVisible
                    ((GizmoCap *)this_00,
                     0.0 < fVar8 * (float)uVar26 + fVar7 * (float)uVar25 +
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
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  this_01 = (GizmoSglAxisOffsetDrag3D *)func_?();
  (this_01->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_01,(MethodInfo *)0x0);
  (this->fields)._offsetDrag = this_01;
  func_?(&(this->fields)._offsetDrag,this_01);
  this_02 = (PointLightGizmo3DLookAndFeel *)
            func_?(TypeInfo__RTG__PointLightGizmo3DLookAndFeel);
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?(&(this->fields)._lookAndFeel,this_02);
  this_03 = (PointLightGizmo3DSettings *)func_?(TypeInfo__RTG__PointLightGizmo3DSettings);
  PointLightGizmo3DSettings::PointLightGizmo3DSettings__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._settings = this_03;
  func_?(&(this->fields)._settings,this_03);
  pPStack4 = TypeInfo__RTG__PointLightGizmo3DHotkeys;
  this_04 = (PointLightGizmo3DHotkeys *)func_?();
  PointLightGizmo3DHotkeys::PointLightGizmo3DHotkeys__ctor(this_04,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._hotkeys;
  (this->fields)._hotkeys = this_04;
  func_?();
  (this->fields)._._isEnabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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

