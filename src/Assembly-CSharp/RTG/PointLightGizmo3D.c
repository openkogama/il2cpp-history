
/* Vector3 CalcScalePivot(Int32) */

Vector3 * Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_CalcScalePivot(Vector3 *__return_storage_ptr__,PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pLVar5,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) goto code_?;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&puStack_8,this_00,(MethodInfo *)0x0);
  this_01 = (GizmoCap2D *)pVVar7->z;
  pLVar5 = (this->fields)._targetLight;
  if (pLVar5 == (Light *)0x0) goto code_?;
  stack0xffffffe8 = (float)pLVar5;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(pLVar5,(MethodInfo *)0x0);
  pGVar9 = (this->fields)._leftTick;
  if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
  uVar10 = ZEXT48(pGVar9);
  pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
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
    pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_01,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar11) {
      __return_storage_ptr__ = (Vector3 *)0x0;
      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      handleId = (int32_t)fVar4;
    }
    else {
      pGVar9 = (this->fields)._topTick;
      if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
      pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
      if ((void *)handleId != pvVar11) {
        pGVar9 = (this->fields)._bottomTick;
        if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
        __return_storage_ptr__ = (Vector3 *)&UNK_?;
        pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar11) {
          handleId = (int32_t)&UNK_?;
          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
        }
        else {
          pGVar9 = (this->fields)._frontTick;
          if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
          handleId = (int32_t)&UNK_?;
          pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
          if ((void *)iVar1 != pvVar11) {
            pGVar9 = (this->fields)._backTick;
            if (pGVar9 == (GizmoCap2D *)0x0) goto code_?;
            pvVar11 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar9,(MethodInfo *)0x0);
            if ((void *)iVar1 != pvVar11) goto code_?;
            pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
            goto code_?;
          }
          pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
        }
        uVar12._0_4_ = pVVar7->x;
        uVar12._4_4_ = pVVar7->y;
        fVar13 = pVVar7->z;
        goto code_?;
      }
      handleId = 0;
      __return_storage_ptr__ = (Vector3 *)&UNK_?;
      pVVar7 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_IsTargetReady(PointLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled((Behaviour *)pLVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) && (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0;
      }
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        LVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_type(pLVar1,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnAttached(PointLightGizmo3D *this,MethodInfo *method)

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
  ppGVar3 = &(this->fields)._leftTick;
  *ppGVar3 = pGVar2;
  func_?(ppGVar3,pGVar2);
  if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) {
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
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1a,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._rightTick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1b,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._topTick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1e,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._bottomTick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1f,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._backTick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x1c,(MethodInfo *)0x0);
    ppGVar3 = &(this->fields)._frontTick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    if ((GizmoCap3D *)*ppGVar3 == (GizmoCap3D *)0x0) goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession((GizmoCap3D *)*ppGVar3,(IGizmoDragSession *)(this->fields)._offsetDrag,(MethodInfo *)0x0);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._leftTick;
    if (pPVar5->vector[2] == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar3 = &(pPVar5->vector[2]->fields).Tick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._rightTick;
    if (pPVar5->vector[3] == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar3 = &(pPVar5->vector[3]->fields).Tick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._topTick;
    if (pPVar5->vector[5] == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar3 = &(pPVar5->vector[5]->fields).Tick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._bottomTick;
    if (pPVar5->vector[4] == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar3 = &(pPVar5->vector[4]->fields).Tick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._frontTick;
    if (pPVar5->vector[0] == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
    ppGVar3 = &(pPVar5->vector[0]->fields).Tick;
    *ppGVar3 = pGVar2;
    func_?(ppGVar3,pGVar2);
    pPVar5 = (this->fields)._extentTicks;
    pPVar6 = (PointLightGizmo3D_ExtentTick *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UxmlObjectListAttributeDescription`1[System::Object]::UxmlObjectListAttributeDescription_1_System_Object___ctor((UxmlObjectListAttributeDescription_1_System_Object_ *)pPVar6,(MethodInfo *)0x0);
    if (pPVar5 == (PointLightGizmo3D_ExtentTick__Array *)0x0) goto code_?;
    if (pPVar6 == (PointLightGizmo3D_ExtentTick *)0x0) {
code_?:
      if (pPVar5->max_length < 2) goto code_?;
      pPVar5->vector[1] = pPVar6;
      func_?(pPVar5->vector + 1,pPVar6);
      pPVar5 = (this->fields)._extentTicks;
      if (pPVar5 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
        if (pPVar5->max_length < 2) goto code_?;
        pGVar2 = (this->fields)._backTick;
        if (pPVar5->vector[1] != (PointLightGizmo3D_ExtentTick *)0x0) {
          ppGVar3 = &(pPVar5->vector[1]->fields).Tick;
          *ppGVar3 = pGVar2;
          func_?(ppGVar3,pGVar2);
          pGVar1 = (this->fields)._._gizmo;
          pGVar8 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
          GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x23,(MethodInfo *)0x0);
          ppGVar9 = &(this->fields)._axialCircleXY;
          *ppGVar9 = pGVar8;
          func_?(ppGVar9,pGVar8);
          if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
            GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)*ppGVar9,0,(MethodInfo *)0x0);
            if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
              GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(*ppGVar9,0,(MethodInfo *)0x0);
              if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  (pGVar10->fields)._useZoomFactor = 0;
                  if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                    pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                    if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      (pGVar10->fields)._planeType = 2;
                      pGVar1 = (this->fields)._._gizmo;
                      pGVar8 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                      GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x24,(MethodInfo *)0x0);
                      ppGVar9 = &(this->fields)._axialCircleYZ;
                      *ppGVar9 = pGVar8;
                      func_?(ppGVar9,pGVar8);
                      if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                        GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)*ppGVar9,0,(MethodInfo *)0x0);
                        if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(*ppGVar9,0,(MethodInfo *)0x0);
                          if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                            pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                              (pGVar10->fields)._useZoomFactor = 0;
                              if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                                if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                  (pGVar10->fields)._planeType = 2;
                                  pGVar1 = (this->fields)._._gizmo;
                                  pGVar8 = (GizmoPlaneSlider3D *)func_?(TypeInfo__RTG__GizmoPlaneSlider3D);
                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D__ctor(pGVar8,pGVar1,0x25,(MethodInfo *)0x0);
                                  ppGVar9 = &(this->fields)._axialCircleZX;
                                  *ppGVar9 = pGVar8;
                                  func_?(ppGVar9,pGVar8);
                                  if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                    GizmoSlider::GizmoSlider_SetVisible((GizmoSlider *)*ppGVar9,0,(MethodInfo *)0x0);
                                    if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                      GizmoPlaneSlider3D::GizmoPlaneSlider3D_SetBorderHoverable(*ppGVar9,0,(MethodInfo *)0x0);
                                      if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                        pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                                        if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                          (pGVar10->fields)._useZoomFactor = 0;
                                          if (*ppGVar9 != (GizmoPlaneSlider3D *)0x0) {
                                            pGVar10 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(*ppGVar9,(MethodInfo *)0x0);
                                            if (pGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                              (pGVar10->fields)._planeType = 2;
                                              PointLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoAttemptHandleDragBegin(PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

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
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
  if (this_02 == (Transform *)0x0) goto code_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  (this->fields)._offsetDragWorkData.DragOrigin.x = pVVar3->x;
  (this->fields)._offsetDragWorkData.DragOrigin.y = fVar4;
  (this->fields)._offsetDragWorkData.DragOrigin.z = fVar5;
  pPVar6 = (this->fields)._sharedSettings;
  if ((pPVar6 == (PointLightGizmo3DSettings *)0x0) && (pPVar6 = (this->fields)._settings, pPVar6 == (PointLightGizmo3DSettings *)0x0)) goto code_?;
  (this->fields)._offsetDragWorkData.SnapStep = (pPVar6->fields)._radiusSnapStep;
  pGVar7 = (this->fields)._leftTick;
  if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
  pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
  if ((void *)handleId == pvVar8) {
    pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight(&VStack_2,(MethodInfo *)0x0);
    goto code_?;
  }
  pGVar7 = (this->fields)._rightTick;
  if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
  pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
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
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
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
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_2,(MethodInfo *)0x0);
code_?:
      uVar9._0_4_ = pVVar3->x;
      uVar9._4_4_ = pVVar3->y;
      fVar5 = -pVVar3->z;
      (this->fields)._offsetDragWorkData.Axis.x = (float)(int)(uVar9 ^ 0x8000000080000000);
      (this->fields)._offsetDragWorkData.Axis.y = (float)(int)((uVar9 ^ 0x8000000080000000) >> 0x20);
      goto code_?;
    }
    pGVar7 = (this->fields)._frontTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_2,(MethodInfo *)0x0);
      goto code_?;
    }
    pGVar7 = (this->fields)._backTick;
    if (pGVar7 == (GizmoCap2D *)0x0) goto code_?;
    pvVar8 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar7,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar8) {
      pVVar3 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
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
  pGVar10 = (this->fields)._offsetDrag;
  fVar5 = (this->fields)._offsetDragWorkData.SnapStep;
  if (pGVar10 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    puVar11 = &UNK_?;
    pGVar12 = pGVar10;
    cVar13 = (*(code *)(pGVar10->klass->vtable).get_IsActive_1.method)();
    if (cVar13 == '\0') {
      (pGVar10->fields)._workData.DragOrigin.x = fVar4;
      (pGVar10->fields)._workData.DragOrigin.y = VStack_2.x;
      (pGVar10->fields)._workData.DragOrigin.z = VStack_2.y;
      (pGVar10->fields)._workData.Axis.x = VStack_2.z;
      (pGVar10->fields)._workData.Axis.y = (float)puVar11;
      (pGVar10->fields)._workData.Axis.z = (float)pGVar12;
      (pGVar10->fields)._workData.SnapStep = fVar5;
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoDragEnd(PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

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
    Light3DChangedAction::Light3DChangedAction__ctor(this_00,pLVar2,postChangeSnapshot,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoDragUpdate(PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = PointLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._offsetDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    pPVar3 = (this->fields)._sharedHotkeys;
    if (((pPVar3 == (PointLightGizmo3DHotkeys *)0x0) && (pPVar3 = (this->fields)._hotkeys, pPVar3 == (PointLightGizmo3DHotkeys *)0x0)) || (this_00 = (pPVar3->fields)._enableSnapping, this_00 == (Hotkeys *)0x0)) goto code_?;
    bVar1 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    this_01 = (this->fields)._targetLight;
    if ((this_01 != (Light *)0x0) && (UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(this_01,(MethodInfo *)0x0), (this->fields)._._gizmo != (Gizmo *)0x0)) {
      fVar4 = (float10)func_?();
      pGVar5 = (this->fields)._._gizmo;
      if (pGVar5 != (Gizmo *)0x0) {
        uVar6 = (pGVar5->fields)._dragInfo._relativeOffset.x;
        uVar7 = (pGVar5->fields)._dragInfo._relativeOffset.y;
        pGVar2 = (this->fields)._offsetDrag;
        if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
          uVar8 = (pGVar2->fields)._workData.Axis.x;
          uVar9 = (pGVar2->fields)._workData.Axis.y;
          if ((float)uVar9 * (float)uVar7 + (float)uVar6 * (float)uVar8 + (pGVar2->fields)._workData.Axis.z * (pGVar5->fields)._dragInfo._relativeOffset.z < 0.0) {
            fVar10 = -1.0;
          }
          else {
            fVar10 = 1.0;
          }
          fVar11 = fVar10 * (float)fVar4 + (float)&stack0xffffffdc;
          fVar10 = 0.0;
          if (0.0 <= fVar11) {
            fVar10 = fVar11;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range(this_01,fVar10,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoRender(PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

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
  this_00 = (RTGizmosEngine *)MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get(MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_00 != (RTGizmosEngine *)0x0) {
    iVar2 = RTGizmosEngine::RTGizmosEngine_get_NumRenderCameras(this_00,(MethodInfo *)0x0);
    if (1 < iVar2) {
      PointLightGizmo3D_UpdateHandles(this,(MethodInfo *)0x0);
    }
    PointLightGizmo3D_UpdateTickColors(this,camera,(MethodInfo *)0x0);
    if ((camera != (Camera *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffc8,pTVar3,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar4->x;
      uStack_6 = pVVar4->y;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        uVar5 = uVar5 & 0xffffffff00000000;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&puStack_7,pTVar3,(MethodInfo *)0x0);
        uVar5 = uVar5 & 0xffffffff00000000;
        fVar8 = pVVar4->x;
        fVar9 = pVVar4->z;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
          uVar10 = pVVar4->x;
          fVar11 = pVVar4->z;
          puStack_7 = (undefined *)uVar10;
          pCVar12 = camera;
          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
          fVar8 = fVar8 + (float)puStack_7 * fVar13;
          puVar14 = &UNK_?;
          value.z = (float)pCVar12;
          uStack_6 = (undefined4)(uVar5 >> 0x20);
          value.x = (float)(undefined4)uVar5;
          value.y = (float)uStack_6;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffbc,value,(MethodInfo *)0x0);
          uVar15 = pVVar4->x;
          uVar16 = pVVar4->y;
          fVar17 = pVVar4->z;
          pLVar18 = (this->fields)._targetLight;
          fVar8 = -((float)uVar16 * (float)puVar14 + (float)uVar15 * fVar8 + fVar17 * (fVar9 + fVar11 * fVar13));
          puStack_7 = (undefined *)uVar16;
          if ((pLVar18 != (Light *)0x0) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pLVar18,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
            uVar5._0_4_ = pVVar4->x;
            uStack_6 = pVVar4->y;
            fVar9 = pVVar4->z;
            pLVar18 = (this->fields)._targetLight;
            if (pLVar18 != (Light *)0x0) {
              fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(pLVar18,(MethodInfo *)0x0);
              center.z = fVar9;
              uStack_6 = (undefined4)(uVar5 >> 0x20);
              center.x = (float)(undefined4)uVar5;
              center.y = (float)uStack_6;
              Sphere::Sphere__ctor((Sphere *)&stack0xffffffac,center,fVar11,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                bVar1 = Sphere::Sphere_ContainsPoint((Sphere *)&stack0xffffffac,*pVVar4,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  pLVar18 = (this->fields)._targetLight;
                  if ((pLVar18 == (Light *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pLVar18,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                  uVar19 = pVVar4->x;
                  uVar20 = pVVar4->y;
                  if (0.0 < (float)puStack_7 * (float)uVar20 + (float)uVar15 * (float)uVar19 + fVar17 * pVVar4->z + fVar8) {
                    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    this_01 = (GizmoLineMaterial *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
                    if (this_01 == (GizmoLineMaterial *)0x0) goto code_?;
                    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
                    pPVar21 = (this->fields)._sharedLookAndFeel;
                    if ((pPVar21 == (PointLightGizmo3DLookAndFeel *)0x0) && (pPVar21 = (this->fields)._lookAndFeel, pPVar21 == (PointLightGizmo3DLookAndFeel *)0x0)) goto code_?;
                    GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,(pPVar21->fields)._sphereBorderColor,(MethodInfo *)0x0);
                    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
                    pPVar22 = (this->fields)._sphereBorderPoly;
                    pLVar18 = (this->fields)._targetLight;
                    if ((pLVar18 == (Light *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pLVar18,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffbc,pTVar3,(MethodInfo *)0x0);
                    uVar5._0_4_ = pVVar4->x;
                    uStack_6 = pVVar4->y;
                    fVar8 = pVVar4->z;
                    pLVar18 = (this->fields)._targetLight;
                    if ((pLVar18 == (Light *)0x0) || (fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(pLVar18,(MethodInfo *)0x0), pPVar22 == (PolygonShape2D *)0x0)) goto code_?;
                    sphereCenter.z = fVar8;
                    uStack_6 = (undefined4)(uVar5 >> 0x20);
                    sphereCenter.x = (float)(undefined4)uVar5;
                    sphereCenter.y = (float)uStack_6;
                    PolygonShape2D::PolygonShape2D_MakeSphereBorder(pPVar22,sphereCenter,fVar9,100,camera,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OnGizmoUpdateBegin(PointLightGizmo3D *this,MethodInfo *method)

{
  bVar1 = PointLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    this_01 = (this->fields)._targetLight;
    if (((this_01 != (Light *)0x0) && (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) && (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0), this_00 != (GizmoTransform *)0x0)) {
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

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_OwnsHandle(PointLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  pGVar1 = (this->fields)._leftTick;
  if (pGVar1 != (GizmoCap2D *)0x0) {
    pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar2) {
      return 1;
    }
    pGVar1 = (this->fields)._rightTick;
    if (pGVar1 != (GizmoCap2D *)0x0) {
      pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar2) {
        return 1;
      }
      pGVar1 = (this->fields)._topTick;
      if (pGVar1 != (GizmoCap2D *)0x0) {
        pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
        if ((void *)handleId == pvVar2) {
          return 1;
        }
        pGVar1 = (this->fields)._bottomTick;
        if (pGVar1 != (GizmoCap2D *)0x0) {
          pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
          if ((void *)handleId == pvVar2) {
            return 1;
          }
          pGVar1 = (this->fields)._frontTick;
          if (pGVar1 != (GizmoCap2D *)0x0) {
            pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
            if ((void *)handleId == pvVar2) {
              return 1;
            }
            pGVar1 = (this->fields)._backTick;
            if (pGVar1 != (GizmoCap2D *)0x0) {
              pvVar2 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar1,(MethodInfo *)0x0);
              if ((void *)handleId == pvVar2) {
                return 1;
              }
              pGVar3 = (this->fields)._axialCircleXY;
              if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,(MethodInfo *)0x0);
                if (handleId == iVar4) {
                  return 1;
                }
                pGVar3 = (this->fields)._axialCircleYZ;
                if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                  iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,(MethodInfo *)0x0);
                  if (handleId == iVar4) {
                    return 1;
                  }
                  pGVar3 = (this->fields)._axialCircleZX;
                  if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
                    iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::SparselyPopulatedArrayFragment_1_System_Object__get_Length((SparselyPopulatedArrayFragment_1_System_Object_ *)pGVar3,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_SetupSharedLookAndFeel(PointLightGizmo3D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._sharedLookAndFeel;
  if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
    PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._rightTick,0,AxisSign__Enum_Positive,(MethodInfo *)0x0);
    pPVar1 = (this->fields)._sharedLookAndFeel;
    if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
      PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._topTick,1,AxisSign__Enum_Positive,(MethodInfo *)0x0);
      pPVar1 = (this->fields)._sharedLookAndFeel;
      if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
        PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._backTick,2,AxisSign__Enum_Positive,(MethodInfo *)0x0);
        pPVar1 = (this->fields)._sharedLookAndFeel;
        if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
          PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._leftTick,0,AxisSign__Enum_Negative,(MethodInfo *)0x0);
          pPVar1 = (this->fields)._sharedLookAndFeel;
          if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
            PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._bottomTick,1,AxisSign__Enum_Negative,(MethodInfo *)0x0);
            pPVar1 = (this->fields)._sharedLookAndFeel;
            if ((pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar1 = (this->fields)._lookAndFeel, pPVar1 != (PointLightGizmo3DLookAndFeel *)0x0)) {
              PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel_ConnectTickLookAndFeel(pPVar1,(this->fields)._frontTick,2,AxisSign__Enum_Negative,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateHandles(PointLightGizmo3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    this_01 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pLVar1 = (this->fields)._targetLight;
    if (pLVar1 != (Light *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pLVar1,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffff98,this_02,(MethodInfo *)0x0);
        fVar3 = pVVar2->x;
        fVar4 = pVVar2->y;
        fVar5 = pVVar2->z;
        pLVar1 = (this->fields)._targetLight;
        if (pLVar1 != (Light *)0x0) {
          fVar6 = fVar5;
          fVar7 = fVar3;
          fVar8 = fVar4;
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(pLVar1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar11 = (pVVar10->rightVector).x;
          uVar12 = (pVVar10->rightVector).y;
          fVar3 = fVar3 - (float)uVar11 * fVar9;
          fVar13 = fVar4 - (float)uVar12 * fVar9;
          fVar14 = fVar6 - (pVVar10->rightVector).z * fVar9;
          pGVar15 = (this->fields)._leftTick;
          if (this_01 != (Camera *)0x0) {
            ppVVar16 = (Vector3__Class **)0x0;
            position_04.y = fVar13;
            position_04.x = fVar3;
            position_04.z = fVar14;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffd0,this_01,position_04,(MethodInfo *)0x0);
            value.x = pVVar2->x;
            value.y = pVVar2->y;
            if (pGVar15 != (GizmoCap2D *)0x0) {
              GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value,(MethodInfo *)0x0);
              pPVar17 = (this->fields)._extentTicks;
              if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                if (pPVar17->max_length < 3) goto code_?;
                pPVar18 = pPVar17->vector[2];
                if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                  (pPVar18->fields).Position.x = fVar3;
                  (pPVar18->fields).Position.y = fVar13;
                  (pPVar18->fields).Position.z = fVar14;
                  pPVar17 = (this->fields)._extentTicks;
                  if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                    if (pPVar17->max_length < 3) goto code_?;
                    pPVar18 = pPVar17->vector[2];
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                    uVar19._0_4_ = (pVVar10->rightVector).x;
                    uVar19._4_4_ = (pVVar10->rightVector).y;
                    fVar3 = (pVVar10->rightVector).z;
                    if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                      (pPVar18->fields).Normal.x = (float)(int)(uVar19 ^ 0x8000000080000000);
                      (pPVar18->fields).Normal.y = (float)(int)((uVar19 ^ 0x8000000080000000) >> 0x20);
                      (pPVar18->fields).Normal.z = -fVar3;
                      if (cRam_? == '\0') {
                        ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                        func_?();
                        cRam_? = '\x01';
                      }
                      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                      uVar20 = (pVVar10->rightVector).x;
                      uVar21 = (pVVar10->rightVector).y;
                      fVar13 = fVar4 + (float)uVar21 * fVar9;
                      fVar3 = fVar6 + (pVVar10->rightVector).z * fVar9;
                      pGVar15 = (this->fields)._rightTick;
                      position.y = fVar13;
                      position.x = (float)ppVVar16 + (float)uVar20 * fVar9;
                      position.z = fVar3;
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffd0,this_01,position,(MethodInfo *)0x0);
                      value_00.x = pVVar2->x;
                      value_00.y = pVVar2->y;
                      if (pGVar15 != (GizmoCap2D *)0x0) {
                        fVar14 = 0.0;
                        GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value_00,(MethodInfo *)0x0);
                        pPVar17 = (this->fields)._extentTicks;
                        if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                          if (pPVar17->max_length < 4) goto code_?;
                          pPVar18 = pPVar17->vector[3];
                          if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                            (pPVar18->fields).Position.x = fVar14;
                            (pPVar18->fields).Position.y = fVar13;
                            (pPVar18->fields).Position.z = fVar3;
                            pPVar17 = (this->fields)._extentTicks;
                            if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                              if (pPVar17->max_length < 4) goto code_?;
                              pPVar18 = pPVar17->vector[3];
                              if (cRam_? == '\0') {
                                ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                              fVar13 = (pVVar10->rightVector).y;
                              fVar3 = (pVVar10->rightVector).z;
                              if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                (pPVar18->fields).Normal.x = (pVVar10->rightVector).x;
                                (pPVar18->fields).Normal.y = fVar13;
                                (pPVar18->fields).Normal.z = fVar3;
                                if (cRam_? == '\0') {
                                  ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uVar22 = (pVVar10->upVector).x;
                                uVar23 = (pVVar10->upVector).y;
                                fVar13 = fVar4 + (float)uVar23 * fVar9;
                                fVar3 = fVar6 + (pVVar10->upVector).z * fVar9;
                                pGVar15 = (this->fields)._topTick;
                                position_00.y = fVar13;
                                position_00.x = (float)ppVVar16 + (float)uVar22 * fVar9;
                                position_00.z = fVar3;
                                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffd0,this_01,position_00,(MethodInfo *)0x0);
                                value_01.x = pVVar2->x;
                                value_01.y = pVVar2->y;
                                if (pGVar15 != (GizmoCap2D *)0x0) {
                                  fVar14 = 0.0;
                                  GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value_01,(MethodInfo *)0x0);
                                  pPVar17 = (this->fields)._extentTicks;
                                  if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                    if (pPVar17->max_length < 6) goto code_?;
                                    pPVar18 = pPVar17->vector[5];
                                    if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                      (pPVar18->fields).Position.x = fVar14;
                                      (pPVar18->fields).Position.y = fVar13;
                                      (pPVar18->fields).Position.z = fVar3;
                                      pPVar17 = (this->fields)._extentTicks;
                                      if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                        if (pPVar17->max_length < 6) goto code_?;
                                        pPVar18 = pPVar17->vector[5];
                                        if (cRam_? == '\0') {
                                          ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                          func_?();
                                          cRam_? = '\x01';
                                        }
                                        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        fVar13 = (pVVar10->upVector).y;
                                        fVar3 = (pVVar10->upVector).z;
                                        if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                          (pPVar18->fields).Normal.x = (pVVar10->upVector).x;
                                          (pPVar18->fields).Normal.y = fVar13;
                                          (pPVar18->fields).Normal.z = fVar3;
                                          if (cRam_? == '\0') {
                                            ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar24 = (pVVar10->upVector).x;
                                          uVar25 = (pVVar10->upVector).y;
                                          fVar13 = fVar4 - (float)uVar25 * fVar9;
                                          fVar3 = fVar6 - (pVVar10->upVector).z * fVar9;
                                          pGVar15 = (this->fields)._bottomTick;
                                          position_01.y = fVar13;
                                          position_01.x = (float)ppVVar16 - (float)uVar24 * fVar9;
                                          position_01.z = fVar3;
                                          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffd0,this_01,position_01,(MethodInfo *)0x0);
                                          value_02.x = pVVar2->x;
                                          value_02.y = pVVar2->y;
                                          if (pGVar15 != (GizmoCap2D *)0x0) {
                                            fVar14 = 0.0;
                                            GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value_02,(MethodInfo *)0x0);
                                            pPVar17 = (this->fields)._extentTicks;
                                            if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                              if (pPVar17->max_length < 5) goto code_?;
                                              pPVar18 = pPVar17->vector[4];
                                              if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                (pPVar18->fields).Position.x = fVar14;
                                                (pPVar18->fields).Position.y = fVar13;
                                                (pPVar18->fields).Position.z = fVar3;
                                                pPVar17 = (this->fields)._extentTicks;
                                                if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                                  if (pPVar17->max_length < 5) goto code_?;
                                                  pPVar18 = pPVar17->vector[4];
                                                  if (cRam_? == '\0') {
                                                    ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                                    func_?();
                                                    cRam_? = '\x01';
                                                  }
                                                  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                  uVar26._0_4_ = (pVVar10->upVector).x;
                                                  uVar26._4_4_ = (pVVar10->upVector).y;
                                                  fVar3 = (pVVar10->upVector).z;
                                                  if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                    (pPVar18->fields).Normal.x = (float)(int)(uVar26 ^ 0x8000000080000000);
                                                    (pPVar18->fields).Normal.y = (float)(int)((uVar26 ^ 0x8000000080000000) >> 0x20);
                                                    (pPVar18->fields).Normal.z = -fVar3;
                                                    if (cRam_? == '\0') {
                                                      ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                    uVar27 = (pVVar10->forwardVector).x;
                                                    uVar28 = (pVVar10->forwardVector).y;
                                                    fVar13 = fVar4 - (float)uVar28 * fVar9;
                                                    fVar3 = fVar6 - (pVVar10->forwardVector).z * fVar9;
                                                    pGVar15 = (this->fields)._frontTick;
                                                    position_02.y = fVar13;
                                                    position_02.x = (float)ppVVar16 - (float)uVar27 * fVar9;
                                                    position_02.z = fVar3;
                                                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffd0,this_01,position_02,(MethodInfo *)0x0);
                                                    value_03.x = pVVar2->x;
                                                    value_03.y = pVVar2->y;
                                                    if (pGVar15 != (GizmoCap2D *)0x0) {
                                                      fVar14 = 0.0;
                                                      GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value_03,(MethodInfo *)0x0);
                                                      pPVar17 = (this->fields)._extentTicks;
                                                      if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                                        if (pPVar17->max_length == 0) goto code_?;
                                                        pPVar18 = pPVar17->vector[0];
                                                        if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                          (pPVar18->fields).Position.x = fVar14;
                                                          (pPVar18->fields).Position.y = fVar13;
                                                          (pPVar18->fields).Position.z = fVar3;
                                                          pPVar17 = (this->fields)._extentTicks;
                                                          if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                                            if (pPVar17->max_length == 0) goto code_?;
                                                            pPVar18 = pPVar17->vector[0];
                                                            if (cRam_? == '\0') {
                                                              ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                                              func_?();
                                                              cRam_? = '\x01';
                                                            }
                                                            pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                            uVar29._0_4_ = (pVVar10->forwardVector).x;
                                                            uVar29._4_4_ = (pVVar10->forwardVector).y;
                                                            fVar3 = (pVVar10->forwardVector).z;
                                                            if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                              (pPVar18->fields).Normal.x = (float)(int)(uVar29 ^ 0x8000000080000000);
                                                              (pPVar18->fields).Normal.y = (float)(int)((uVar29 ^ 0x8000000080000000) >> 0x20);
                                                              (pPVar18->fields).Normal.z = -fVar3;
                                                              if (cRam_? == '\0') {
                                                                ppVVar16 = &TypeInfo__UnityEngine__Vector3;
                                                                func_?();
                                                                cRam_? = '\x01';
                                                              }
                                                              pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                              uVar30 = (pVVar10->forwardVector).x;
                                                              uVar31 = (pVVar10->forwardVector).y;
                                                              fVar3 = (float)ppVVar16 + (float)uVar30 * fVar9;
                                                              fVar6 = fVar6 + (pVVar10->forwardVector).z * fVar9;
                                                              fVar4 = fVar4 + (float)uVar31 * fVar9;
                                                              pGVar15 = (this->fields)._backTick;
                                                              position_03.y = fVar4;
                                                              position_03.x = fVar3;
                                                              position_03.z = fVar6;
                                                              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1((Vector3 *)&stack0xffffffb8,this_01,position_03,(MethodInfo *)0x0);
                                                              value_04.x = pVVar2->x;
                                                              value_04.y = pVVar2->y;
                                                              if (pGVar15 != (GizmoCap2D *)0x0) {
                                                                GizmoCap2D::GizmoCap2D_set_Position(pGVar15,value_04,(MethodInfo *)0x0);
                                                                pPVar17 = (this->fields)._extentTicks;
                                                                if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                                                  if (pPVar17->max_length < 2) goto code_?;
                                                                  pPVar18 = pPVar17->vector[1];
                                                                  if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                                    (pPVar18->fields).Position.x = fVar3;
                                                                    (pPVar18->fields).Position.y = fVar4;
                                                                    (pPVar18->fields).Position.z = fVar6;
                                                                    pPVar17 = (this->fields)._extentTicks;
                                                                    if (pPVar17 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                                                      if (pPVar17->max_length < 2) goto code_?;
                                                                      pPVar18 = pPVar17->vector[1];
                                                                      if (cRam_? == '\0') {
                                                                        func_?();
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
                                                                      fVar4 = (pVVar10->forwardVector).y;
                                                                      fVar3 = (pVVar10->forwardVector).z;
                                                                      if (pPVar18 != (PointLightGizmo3D_ExtentTick *)0x0) {
                                                                        (pPVar18->fields).Normal.x = (pVVar10->forwardVector).x;
                                                                        (pPVar18->fields).Normal.y = fVar4;
                                                                        (pPVar18->fields).Normal.z = fVar3;
                                                                        pGVar32 = (this->fields)._axialCircleXY;
                                                                        if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                          value_05.y = fVar8;
                                                                          value_05.x = fVar7;
                                                                          value_05.z = fVar5;
                                                                          GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position(pGVar32,value_05,(MethodInfo *)0x0);
                                                                          pGVar32 = (this->fields)._axialCircleYZ;
                                                                          if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                            value_06.y = fVar8;
                                                                            value_06.x = fVar7;
                                                                            value_06.z = fVar5;
                                                                            GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position(pGVar32,value_06,(MethodInfo *)0x0);
                                                                            pGVar32 = (this->fields)._axialCircleZX;
                                                                            if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                              value_07.y = fVar8;
                                                                              value_07.x = fVar7;
                                                                              value_07.z = fVar5;
                                                                              GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Position(pGVar32,value_07,(MethodInfo *)0x0);
                                                                              pGVar32 = (this->fields)._axialCircleXY;
                                                                              if (cRam_? == '\0') {
                                                                                func_?();
                                                                                cRam_? = '\x01';
                                                                              }
                                                                              if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation(pGVar32,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,(MethodInfo *)0x0);
                                                                                pGVar32 = (this->fields)._axialCircleYZ;
                                                                                fVar3 = 1.5707964;
                                                                                pQVar33 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff80,(Vector3)ZEXT812(0x3fc90fdb00000000),(MethodInfo *)0x0);
                                                                                if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation(pGVar32,*pQVar33,(MethodInfo *)0x0);
                                                                                  pGVar32 = (this->fields)._axialCircleZX;
                                                                                  euler.y = 0.0;
                                                                                  euler.z = 0.0;
                                                                                  euler.x = fVar3;
                                                                                  pQVar33 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff70,euler,(MethodInfo *)0x0);
                                                                                  if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_set_Rotation(pGVar32,*pQVar33,(MethodInfo *)0x0);
                                                                                    pGVar32 = (this->fields)._axialCircleXY;
                                                                                    if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                      pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar32,(MethodInfo *)0x0);
                                                                                      pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                      if ((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) {
                                                                                        fVar3 = (pPVar35->fields)._wireColor.g;
                                                                                        fVar4 = (pPVar35->fields)._wireColor.b;
                                                                                        fVar5 = (pPVar35->fields)._wireColor.a;
                                                                                        if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                          (pGVar34->fields)._borderColor.r = (pPVar35->fields)._wireColor.r;
                                                                                          (pGVar34->fields)._borderColor.g = fVar3;
                                                                                          (pGVar34->fields)._borderColor.b = fVar4;
                                                                                          (pGVar34->fields)._borderColor.a = fVar5;
                                                                                          pGVar36 = (this->fields)._axialCircleYZ;
                                                                                          if (pGVar36 != (GizmoPlaneSlider3D *)0x0) {
                                                                                            pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar36,(MethodInfo *)0x0);
                                                                                            pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                            if ((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) {
                                                                                              fVar3 = (pPVar35->fields)._wireColor.g;
                                                                                              fVar4 = (pPVar35->fields)._wireColor.b;
                                                                                              fVar5 = (pPVar35->fields)._wireColor.a;
                                                                                              if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                (pGVar34->fields)._borderColor.r = (pPVar35->fields)._wireColor.r;
                                                                                                (pGVar34->fields)._borderColor.g = fVar3;
                                                                                                (pGVar34->fields)._borderColor.b = fVar4;
                                                                                                (pGVar34->fields)._borderColor.a = fVar5;
                                                                                                pGVar36 = (this->fields)._axialCircleZX;
                                                                                                if (pGVar36 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                  pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar36,(MethodInfo *)0x0);
                                                                                                  pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                                  if ((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) {
                                                                                                    fVar3 = (pPVar35->fields)._wireColor.g;
                                                                                                    fVar4 = (pPVar35->fields)._wireColor.b;
                                                                                                    fVar5 = (pPVar35->fields)._wireColor.a;
                                                                                                    if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                      (pGVar34->fields)._borderColor.r = (pPVar35->fields)._wireColor.r;
                                                                                                      (pGVar34->fields)._borderColor.g = fVar3;
                                                                                                      (pGVar34->fields)._borderColor.b = fVar4;
                                                                                                      (pGVar34->fields)._borderColor.a = fVar5;
                                                                                                      pGVar36 = (this->fields)._axialCircleXY;
                                                                                                      if (pGVar36 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                        pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar36,(MethodInfo *)0x0);
                                                                                                        if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                          GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius(pGVar34,(float)pGVar32,(MethodInfo *)0x0);
                                                                                                          pGVar36 = (this->fields)._axialCircleYZ;
                                                                                                          if (pGVar36 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                            pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar36,(MethodInfo *)0x0);
                                                                                                            if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                              GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius(pGVar34,(float)pGVar32,(MethodInfo *)0x0);
                                                                                                              pGVar36 = (this->fields)._axialCircleZX;
                                                                                                              if (pGVar36 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar36,(MethodInfo *)0x0);
                                                                                                                if (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                                                                                                  GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius(pGVar34,(float)pGVar32,(MethodInfo *)0x0);
                                                                                                                  pGVar32 = (this->fields)._axialCircleXY;
                                                                                                                  if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                    pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar32,(MethodInfo *)0x0);
                                                                                                                    pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                                                    if (((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) && (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                                                                                      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale(pGVar34,(pPVar35->fields)._axialCircleCullAlphaScale,(MethodInfo *)0x0);
                                                                                                                      pGVar32 = (this->fields)._axialCircleYZ;
                                                                                                                      if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                        pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar32,(MethodInfo *)0x0);
                                                                                                                        pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                                                        if (((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) && (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                                                                                          GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale(pGVar34,(pPVar35->fields)._axialCircleCullAlphaScale,(MethodInfo *)0x0);
                                                                                                                          pGVar32 = (this->fields)._axialCircleZX;
                                                                                                                          if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                            pGVar34 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar32,(MethodInfo *)0x0);
                                                                                                                            pPVar35 = (this->fields)._sharedLookAndFeel;
                                                                                                                            if (((pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0) || (pPVar35 = (this->fields)._lookAndFeel, pPVar35 != (PointLightGizmo3DLookAndFeel *)0x0)) && (pGVar34 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                                                                                                                              GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale(pGVar34,(pPVar35->fields)._axialCircleCullAlphaScale,(MethodInfo *)0x0);
                                                                                                                              pGVar32 = (this->fields)._axialCircleXY;
                                                                                                                              if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                                GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh(pGVar32,(MethodInfo *)0x0);
                                                                                                                                pGVar32 = (this->fields)._axialCircleYZ;
                                                                                                                                if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                                  GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh(pGVar32,(MethodInfo *)0x0);
                                                                                                                                  pGVar32 = (this->fields)._axialCircleZX;
                                                                                                                                  if (pGVar32 != (GizmoPlaneSlider3D *)0x0) {
                                                                                                                                    GizmoPlaneSlider3D::GizmoPlaneSlider3D_Refresh(pGVar32,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void UpdateHoverPriorities(Camera) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateHoverPriorities(PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._extentTicks;
  if (pPVar1 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
    if ((pPVar1->max_length < 3) || (pPVar2 = pPVar1->vector[2], pPVar1->max_length < 4)) goto code_?;
    pPVar3 = pPVar1->vector[3];
    if ((pPVar2 != (PointLightGizmo3D_ExtentTick *)0x0) && (pGVar4 = (pPVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
      pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
      if (((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength = 0, pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0)) && (pGVar4 = (pPVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
        pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
        if (pSVar5 != (String *)0x0) {
          (pSVar5->fields)._stringLength = 0;
          fVar6 = (pPVar2->fields).Normal.z;
          uVar7._0_4_ = (pPVar2->fields).Normal.x;
          uVar7._4_4_ = (pPVar2->fields).Normal.y;
          VVar8 = (pPVar2->fields).Position;
          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
            uVar7 = CONCAT44(uVar7._4_4_,TypeInfo__RTG__CameraEx);
            func_?(TypeInfo__RTG__CameraEx,uVar7._4_4_);
          }
          pointNormal.z = fVar6;
          pointNormal.x = (float)(int)uVar7;
          pointNormal.y = (float)(int)((ulonglong)uVar7 >> 0x20);
          bVar9 = CameraEx::CameraEx_IsPointFacingCamera(camera,VVar8,pointNormal,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            pGVar4 = (pPVar3->fields).Tick;
            if (pGVar4 != (GizmoCap2D *)0x0) {
              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
              pGVar4 = (pPVar2->fields).Tick;
code_?:
              if (pGVar4 != (GizmoCap2D *)0x0) {
                pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                if (pSVar5 != (String *)0x0) {
                  Priority::Priority_MakeHigherThan((Priority *)pSVar5,(Priority *)pSVar10,(MethodInfo *)0x0);
                  pPVar1 = (this->fields)._extentTicks;
                  if (pPVar1 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                    if (pPVar1->max_length < 6) goto code_?;
                    pPVar2 = pPVar1->vector[5];
                    pPVar3 = pPVar1->vector[4];
                    if ((pPVar2 != (PointLightGizmo3D_ExtentTick *)0x0) && (pGVar4 = (pPVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
                      pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                      if ((pSVar5 != (String *)0x0) && (((pSVar5->fields)._stringLength = 2, pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0 && (pGVar4 = (pPVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)))) {
                        pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                        if (pSVar5 != (String *)0x0) {
                          (pSVar5->fields)._stringLength = 2;
                          uVar11._0_4_ = (pPVar2->fields).Position.x;
                          uVar11._4_4_ = (pPVar2->fields).Position.y;
                          VVar8 = (pPVar2->fields).Normal;
                          fVar6 = (pPVar2->fields).Position.z;
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          point.z = fVar6;
                          point.x = (float)(int)uVar11;
                          point.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                          bVar9 = CameraEx::CameraEx_IsPointFacingCamera(camera,point,VVar8,(MethodInfo *)0x0);
                          if (bVar9 == 0) {
                            pGVar4 = (pPVar3->fields).Tick;
                            if (pGVar4 != (GizmoCap2D *)0x0) {
                              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                              pGVar4 = (pPVar2->fields).Tick;
code_?:
                              if (pGVar4 != (GizmoCap2D *)0x0) {
                                pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                if (pSVar5 != (String *)0x0) {
                                  Priority::Priority_MakeHigherThan((Priority *)pSVar5,(Priority *)pSVar10,(MethodInfo *)0x0);
                                  pPVar1 = (this->fields)._extentTicks;
                                  if (pPVar1 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
                                    if ((pPVar1->max_length == 0) || (pPVar2 = pPVar1->vector[0], pPVar1->max_length < 2)) goto code_?;
                                    pPVar3 = pPVar1->vector[1];
                                    if ((pPVar2 != (PointLightGizmo3D_ExtentTick *)0x0) && (pGVar4 = (pPVar2->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
                                      pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                      if (((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength = 4, pPVar3 != (PointLightGizmo3D_ExtentTick *)0x0)) && (pGVar4 = (pPVar3->fields).Tick, pGVar4 != (GizmoCap2D *)0x0)) {
                                        pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                        if (pSVar5 != (String *)0x0) {
                                          (pSVar5->fields)._stringLength = 4;
                                          uVar12._0_4_ = (pPVar2->fields).Position.x;
                                          uVar12._4_4_ = (pPVar2->fields).Position.y;
                                          VVar8 = (pPVar2->fields).Normal;
                                          fVar6 = (pPVar2->fields).Position.z;
                                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                                            uVar12 = CONCAT44(uVar12._4_4_,TypeInfo__RTG__CameraEx);
                                            func_?(TypeInfo__RTG__CameraEx,uVar12._4_4_);
                                          }
                                          point_00.z = fVar6;
                                          point_00.x = (float)(int)uVar12;
                                          point_00.y = (float)(int)((ulonglong)uVar12 >> 0x20);
                                          bVar9 = CameraEx::CameraEx_IsPointFacingCamera(camera,point_00,VVar8,(MethodInfo *)0x0);
                                          if (bVar9 == 0) {
                                            pGVar4 = (pPVar3->fields).Tick;
                                            if (pGVar4 != (GizmoCap2D *)0x0) {
                                              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                              pGVar4 = (pPVar2->fields).Tick;
                                              if (pGVar4 != (GizmoCap2D *)0x0) {
                                                pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                                if (pSVar5 != (String *)0x0) {
                                                  Priority::Priority_MakeHigherThan((Priority *)pSVar5,(Priority *)pSVar10,(MethodInfo *)0x0);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pGVar4 = (pPVar2->fields).Tick;
                                            if (pGVar4 != (GizmoCap2D *)0x0) {
                                              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                              pGVar4 = (pPVar3->fields).Tick;
                                              if (pGVar4 != (GizmoCap2D *)0x0) {
                                                pSVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                                                if (pSVar5 != (String *)0x0) {
                                                  Priority::Priority_MakeHigherThan((Priority *)pSVar5,(Priority *)pSVar10,(MethodInfo *)0x0);
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
                            pGVar4 = (pPVar2->fields).Tick;
                            if (pGVar4 != (GizmoCap2D *)0x0) {
                              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
                              pGVar4 = (pPVar3->fields).Tick;
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
            pGVar4 = (pPVar2->fields).Tick;
            if (pGVar4 != (GizmoCap2D *)0x0) {
              pSVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper_get_System((XDocumentTypeWrapper *)pGVar4,(MethodInfo *)0x0);
              pGVar4 = (pPVar3->fields).Tick;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateTickColors(Camera) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_UpdateTickColors(PointLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffb4,pTVar1,(MethodInfo *)0x0);
      VVar3 = *pVVar2;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb4,pTVar1,(MethodInfo *)0x0);
        uVar4 = pVVar2->x;
        uVar5 = pVVar2->y;
        fVar6 = pVVar2->z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffb4,VVar3,(MethodInfo *)0x0);
        fVar7 = pVVar2->x;
        fVar8 = pVVar2->y;
        fVar9 = pVVar2->z;
        fVar10 = (float)uVar5 * fVar8;
        fVar11 = (float)uVar4 * fVar7;
        uStack_12 = 0;
        pPVar13 = (this->fields)._extentTicks;
        fVar6 = fVar6 * fVar9;
        if (pPVar13 != (PointLightGizmo3D_ExtentTick__Array *)0x0) {
          ppPVar14 = pPVar13->vector;
          while( true ) {
            if ((int)pPVar13->max_length <= (int)uStack_12) {
              return;
            }
            if (pPVar13->max_length <= uStack_12) break;
            pPVar15 = *ppPVar14;
            if (pPVar15 == (PointLightGizmo3D_ExtentTick *)0x0) goto code_?;
            pGVar16 = (this->fields)._._gizmo;
            this_00 = (pPVar15->fields).Tick;
            if ((pGVar16 == (Gizmo *)0x0) || (pvVar17 = (void *)(pGVar16->fields)._hoverInfo._handleId, this_00 == (GizmoCap2D *)0x0)) goto code_?;
            pvVar18 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
            if (pvVar17 == pvVar18) {
code_?:
              pGVar19 = (this_00->fields)._overrideFillColor;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._isActive = 0;
              pGVar19 = (this_00->fields)._overrideBorderColor;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._isActive = 0;
            }
            else {
              VVar3 = (pPVar15->fields).Position;
              pointNormal = (pPVar15->fields).Normal;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__CameraEx);
              }
              bVar20 = CameraEx::CameraEx_IsPointFacingCamera(camera,VVar3,pointNormal,(MethodInfo *)0x0);
              if (bVar20 != 0) goto code_?;
              pGVar19 = (this_00->fields)._overrideFillColor;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._isActive = 1;
              pGVar19 = (this_00->fields)._overrideBorderColor;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._isActive = 1;
              pGVar21 = (this_00->fields)._sharedLookAndFeel;
              if (pGVar21 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              pGVar19 = (this_00->fields)._overrideFillColor;
              pPVar22 = (this->fields)._sharedLookAndFeel;
              if ((pPVar22 == (PointLightGizmo3DLookAndFeel *)0x0) && (pPVar22 = (this->fields)._lookAndFeel, pPVar22 == (PointLightGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar23 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&stack0xffffff94,(pGVar21->fields)._color,(pGVar21->fields)._color.a * (pPVar22->fields)._tickCullAlphaScale,(MethodInfo *)0x0);
              fVar7 = pCVar23->g;
              fVar8 = pCVar23->b;
              fVar9 = pCVar23->a;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._color.r = pCVar23->r;
              (pGVar19->fields)._color.g = fVar7;
              (pGVar19->fields)._color.b = fVar8;
              (pGVar19->fields)._color.a = fVar9;
              pGVar21 = (this_00->fields)._sharedLookAndFeel;
              if (pGVar21 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
              fVar7 = (pGVar21->fields)._borderColor.g;
              fVar8 = (pGVar21->fields)._borderColor.b;
              fVar9 = (pGVar21->fields)._borderColor.a;
              pGVar19 = (this_00->fields)._overrideBorderColor;
              pPVar22 = (this->fields)._sharedLookAndFeel;
              if ((pPVar22 == (PointLightGizmo3DLookAndFeel *)0x0) && (pPVar22 = (this->fields)._lookAndFeel, pPVar22 == (PointLightGizmo3DLookAndFeel *)0x0)) goto code_?;
              pCVar23 = ColorEx::ColorEx_KeepAllButAlpha((Color *)&stack0xffffff84,(pGVar21->fields)._borderColor,fVar9 * (pPVar22->fields)._tickCullAlphaScale,(MethodInfo *)0x0);
              fVar24 = pCVar23->g;
              fVar25 = pCVar23->b;
              fVar26 = pCVar23->a;
              if (pGVar19 == (GizmoOverrideColor *)0x0) goto code_?;
              (pGVar19->fields)._color.r = pCVar23->r;
              (pGVar19->fields)._color.g = fVar24;
              (pGVar19->fields)._color.b = fVar25;
              (pGVar19->fields)._color.a = fVar26;
            }
            uVar27 = (pPVar15->fields).Position.x;
            uVar28 = (pPVar15->fields).Position.y;
            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_00,0.0 < fVar8 * (float)uVar28 + fVar7 * (float)uVar27 + fVar9 * (pPVar15->fields).Position.z + -(fVar10 + fVar11 + fVar6),(MethodInfo *)0x0);
            uStack_12 = uStack_12 + 1;
            ppPVar14 = ppPVar14 + 1;
          }
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* PointLightGizmo3D() */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D__ctor(PointLightGizmo3D *this,MethodInfo *method)

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
  pPVar1 = (PointLightGizmo3D_ExtentTick__Array *)func_?(TypeInfo__RTG__PointLightGizmo3D__ExtentTick,6);
  ppPVar2 = &(this->fields)._extentTicks;
  *ppPVar2 = pPVar1;
  func_?(ppPVar2,pPVar1);
  this_00 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(this_00,(MethodInfo *)0x0);
  ppPVar3 = &(this->fields)._sphereBorderPoly;
  *ppPVar3 = this_00;
  func_?(ppPVar3,this_00);
  pLVar4 = TypeInfo__RTG__Light3DSnapshot;
  pLVar5 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)pLVar5,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar4);
  ppLVar6 = &(this->fields)._preChangeSnapshot;
  *ppLVar6 = pLVar5;
  func_?(ppLVar6,pLVar5);
  pLVar4 = TypeInfo__RTG__Light3DSnapshot;
  pLVar5 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)pLVar5,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar4);
  (this->fields)._postChangeSnapshot = pLVar5;
  func_?();
  this_01 = (GizmoSglAxisOffsetDrag3D *)func_?();
  (this_01->fields)._._sensitivity = 1.0;
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this_01,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._offsetDrag;
  *ppGVar7 = this_01;
  func_?(ppGVar7,this_01);
  this_02 = (PointLightGizmo3DLookAndFeel *)func_?(TypeInfo__RTG__PointLightGizmo3DLookAndFeel);
  PointLightGizmo3DLookAndFeel::PointLightGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  ppPVar8 = &(this->fields)._lookAndFeel;
  *ppPVar8 = this_02;
  func_?(ppPVar8,this_02);
  this_03 = (PointLightGizmo3DSettings *)func_?(TypeInfo__RTG__PointLightGizmo3DSettings);
  PointLightGizmo3DSettings::PointLightGizmo3DSettings__ctor(this_03,(MethodInfo *)0x0);
  ppPVar9 = &(this->fields)._settings;
  *ppPVar9 = this_03;
  func_?(ppPVar9,this_03);
  pPStack10 = TypeInfo__RTG__PointLightGizmo3DHotkeys;
  this_04 = (PointLightGizmo3DHotkeys *)func_?();
  PointLightGizmo3DHotkeys::PointLightGizmo3DHotkeys__ctor(this_04,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._hotkeys;
  *(PointLightGizmo3DHotkeys **)method_00 = this_04;
  func_?();
  (this->fields)._._isEnabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* PointLightGizmo3DHotkeys get_Hotkeys() */

PointLightGizmo3DHotkeys * Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_Hotkeys(PointLightGizmo3D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._sharedHotkeys;
  if (pPVar1 == (PointLightGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pPVar1;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_IsSnapEnabled(PointLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pPVar1 = (this->fields)._sharedHotkeys;
  if (((pPVar1 != (PointLightGizmo3DHotkeys *)0x0) || (pPVar1 = (this->fields)._hotkeys, pPVar1 != (PointLightGizmo3DHotkeys *)0x0)) && (this_00 = (pPVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* PointLightGizmo3DLookAndFeel get_LookAndFeel() */

PointLightGizmo3DLookAndFeel * Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_LookAndFeel(PointLightGizmo3D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._sharedLookAndFeel;
  if (pPVar1 == (PointLightGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return pPVar1;
}


/* PointLightGizmo3DSettings get_Settings() */

PointLightGizmo3DSettings * Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_get_Settings(PointLightGizmo3D *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._sharedSettings;
  if (pPVar1 == (PointLightGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return pPVar1;
}


/* Void set_SharedLookAndFeel(PointLightGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::PointLightGizmo3D::PointLightGizmo3D_set_SharedLookAndFeel(PointLightGizmo3D *this,PointLightGizmo3DLookAndFeel *value,MethodInfo *method)

{
  ppPVar1 = &(this->fields)._sharedLookAndFeel;
  *ppPVar1 = value;
  func_?(ppPVar1,value);
  PointLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

