
/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnGizmoPreUpdateBegin
               (GizmoPolygon2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
    if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar2 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar4 = (pGVar3->fields)._polygonBorderType;
      if (pIVar2->max_length <= uVar4) goto code_?;
      if (pIVar2->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar2->vector[uVar4]);
        pGVar1 = (this->fields)._planeSlider;
        pIVar2 = (this->fields)._controllers;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
          if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
             (pIVar2 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._polygonBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoPolygon2DBorderController);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPolygonShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_OnPolygonShapeChanged
               (GizmoPolygon2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  this_00 = (this->fields)._planeSlider;
  if (this_00 != (GizmoPlaneSlider2D *)0x0) {
    pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(this_00,(MethodInfo *)0x0);
    if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar1 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar3 = (pGVar2->fields)._polygonBorderType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoPolygon2DBorderController *)0x0) {
        func_?(2,TypeInfo__RTG__IGizmoPolygon2DBorderController);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_Render
               (GizmoPolygon2DBorder *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._isVisible == 0) {
    return;
  }
  pGVar1 = (this->fields)._planeSlider;
  if ((pGVar1 != (GizmoPlaneSlider2D *)0x0) &&
     (pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0),
     pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
    fVar3 = (pGVar2->fields)._borderColor.r;
    fVar4 = (pGVar2->fields)._borderColor.g;
    fStack_5 = (pGVar2->fields)._borderColor.b;
    fStack_6 = (pGVar2->fields)._borderColor.a;
    pGVar7 = (this->fields)._targetHandle;
    if ((pGVar7 != (GizmoHandle *)0x0) &&
       (this_00 = (pGVar7->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
      iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              PointerCaptureEventBase`1[System::Object]::
              PointerCaptureEventBase_1_System_Object__get_pointerId
                        ((PointerCaptureEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      pGVar7 = (this->fields)._targetHandle;
      if (pGVar7 != (GizmoHandle *)0x0) {
        if (iVar8 == (pGVar7->fields)._id) {
          pGVar1 = (this->fields)._planeSlider;
          if ((pGVar1 == (GizmoPlaneSlider2D *)0x0) ||
             (pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
                                 (pGVar1,(MethodInfo *)0x0),
             pGVar2 == (GizmoPlaneSlider2DLookAndFeel *)0x0)) goto code_?;
          fVar3 = (pGVar2->fields)._hoveredBorderColor.r;
          fVar4 = (pGVar2->fields)._hoveredBorderColor.g;
          fStack_5 = (pGVar2->fields)._hoveredBorderColor.b;
          fStack_6 = (pGVar2->fields)._hoveredBorderColor.a;
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
        }
        this_01 = (GizmoLineMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
        if (this_01 != (GizmoLineMaterial *)0x0) {
          GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                    (this_01,(MethodInfo *)0x0);
          color.g = fVar4;
          color.r = fVar3;
          color.b = fStack_5;
          color.a = fStack_6;
          GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color,(MethodInfo *)0x0);
          GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._planeSlider;
          if ((pGVar1 != (GizmoPlaneSlider2D *)0x0) &&
             (pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
                                 (pGVar1,(MethodInfo *)0x0),
             pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
            if ((pGVar2->fields)._polygonBorderType == 0) {
              pGVar7 = (this->fields)._targetHandle;
              if (pGVar7 != (GizmoHandle *)0x0) {
                GizmoHandle::GizmoHandle_Render2DWire_1
                          (pGVar7,camera,(this->fields)._borderPolygonIndex,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pGVar1 = (this->fields)._planeSlider;
              if ((pGVar1 != (GizmoPlaneSlider2D *)0x0) &&
                 (pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
                                     (pGVar1,(MethodInfo *)0x0),
                 pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) {
                if ((pGVar2->fields)._polygonBorderType == 1) {
                  pGVar7 = (this->fields)._targetHandle;
                  if (pGVar7 == (GizmoHandle *)0x0) goto code_?;
                  GizmoHandle::GizmoHandle_Render2DWire_1
                            (pGVar7,camera,(this->fields)._thickBorderPolygonIndex,(MethodInfo *)0x0
                            );
                }
                return;
              }
            }
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


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetHoverable
               (GizmoPolygon2DBorder *this,bool isHoverable,MethodInfo *method)

{
  pGVar1 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (pGVar1 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (pGVar1,(this->fields)._borderPolygonIndex,isHoverable,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._targetHandle;
    if (pGVar1 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Set2DShapeHoverable
                (pGVar1,(this->fields)._thickBorderPolygonIndex,isHoverable,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible
               (GizmoPolygon2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
      (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0),
      pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar1 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._polygonBorderType;
    if (pIVar1->max_length <= uVar4) goto code_?;
    if (pIVar1->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar1->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar1 = (this->fields)._controllers;
      if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
          (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0)
          , pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
         (pIVar1 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
        uVar4 = (pGVar3->fields)._polygonBorderType;
        if (pIVar1->max_length <= uVar4) goto code_?;
        if (pIVar1->vector[uVar4] != (IGizmoPolygon2DBorderController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoPolygon2DBorderController,pIVar1->vector[uVar4]);
          GizmoPolygon2DBorder_OnPolygonShapeChanged(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GizmoPolygon2DBorder(GizmoPlaneSlider2D, GizmoHandle, PolygonShape2D) */

void Assembly-CSharp.dll::RTG::GizmoPolygon2DBorder::GizmoPolygon2DBorder__ctor
               (GizmoPolygon2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle
               ,PolygonShape2D *targetPolygon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoPolygon2DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoPolygon2DBorderType);
    func_?(&MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoThickPolygon2DBorderController);
    func_?(&TypeInfo__RTG__GizmoThinPolygon2DBorderController);
    func_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController);
    func_?(&TypeInfo__RTG__PolygonShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pPVar1 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields)._borderPolygon;
  *ppPVar2 = pPVar1;
  func_?(ppPVar2,pPVar1);
  pPVar1 = (PolygonShape2D *)func_?(TypeInfo__RTG__PolygonShape2D);
  PolygonShape2D::PolygonShape2D__ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields)._thickBorderPolygon;
  *ppPVar2 = pPVar1;
  func_?(ppPVar2,pPVar1);
  method_03 = TypeInfo__RTG__GizmoPolygon2DBorderControllerData;
  pGVar3 = (GizmoPolygon2DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
  ppGVar4 = &(this->fields)._controllerData;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  handle = TypeRef__RTG__GizmoPolygon2DBorderType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_01 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pPVar1 = (PolygonShape2D *)
             mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
    pIVar5 = TypeInfo__RTG__IGizmoPolygon2DBorderController;
    pGVar6 = (GizmoPlaneSlider2D *)func_?();
    method_00 = &(this->fields)._controllers;
    *method_00 = (IGizmoPolygon2DBorderController__Array *)pGVar6;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._planeSlider = pGVar6;
    func_?(&this->fields);
    ppGVar7 = &(this->fields)._targetHandle;
    *ppGVar7 = (GizmoHandle *)pIVar5;
    func_?(ppGVar7,pIVar5);
    ppPVar2 = &(this->fields)._targetPolygon;
    *ppPVar2 = pPVar1;
    func_?(ppPVar2,pPVar1);
    if (*ppGVar7 == (GizmoHandle *)0x0) goto code_?;
    iVar8 = GizmoHandle::GizmoHandle_Add2DShape
                       (*ppGVar7,(Shape2D *)(this->fields)._borderPolygon,(MethodInfo *)0x0);
    (this->fields)._borderPolygonIndex = iVar8;
    pPVar1 = (this->fields)._borderPolygon;
    if (pPVar1 == (PolygonShape2D *)0x0) goto code_?;
    (pPVar1->fields)._ptContainMode = 1;
    if (*ppGVar7 == (GizmoHandle *)0x0) goto code_?;
    iVar8 = GizmoHandle::GizmoHandle_Add2DShape
                       (*ppGVar7,(Shape2D *)(this->fields)._thickBorderPolygon,(MethodInfo *)0x0);
    (this->fields)._thickBorderPolygonIndex = iVar8;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if (pPVar1 == (PolygonShape2D *)0x0) goto code_?;
    (pPVar1->fields)._ptContainMode = 1;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if ((pPVar1 == (PolygonShape2D *)0x0) ||
       (pPVar9 = (pPVar1->fields)._borderRenderDesc,
       pPVar9 == (PolygonShape2D_BorderRenderDescriptor *)0x0)) goto code_?;
    (pPVar9->fields)._borderType = 1;
    pPVar1 = (this->fields)._thickBorderPolygon;
    if ((pPVar1 == (PolygonShape2D *)0x0) ||
       (pPVar9 = (pPVar1->fields)._borderRenderDesc,
       pPVar9 == (PolygonShape2D_BorderRenderDescriptor *)0x0)) goto code_?;
    (pPVar9->fields)._direction = 1;
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Border = this;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).BorderPolygon = (this->fields)._borderPolygon;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).BorderPolygonIndex = (this->fields)._borderPolygonIndex;
    pGVar3 = *ppGVar4;
    if (pGVar3 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ppPVar2 = &(pGVar3->fields).ThickBorderPolygon;
    *ppPVar2 = (this->fields)._thickBorderPolygon;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).ThickBorderPolygonIndex = (this->fields)._thickBorderPolygonIndex;
    if (ppPVar2 == (PolygonShape2D **)0x0) goto code_?;
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Gizmo = (Gizmo *)pGVar3[1].monitor;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetHandle = (GizmoHandle *)ppPVar2;
    func_?();
    if (*ppGVar4 == (GizmoPolygon2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetPolygon = (this->fields)._targetPolygon;
    func_?();
    method_02 = TypeInfo__RTG__GizmoThinPolygon2DBorderController;
    pIVar10 = (this->fields)._controllers;
    pOVar11 = (Object__Class *)*ppGVar4;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,(ExceptionArgument__Enum)value,(MethodInfo *)method_02);
    value[1].klass = pOVar11;
    func_?();
    if (pIVar10 == (IGizmoPolygon2DBorderController__Array *)0x0) goto code_?;
    iVar12 = func_?();
    if (iVar12 == 0) goto code_?;
    if (pIVar10->max_length == 0) goto code_?;
    pIVar10->vector[0] = (IGizmoPolygon2DBorderController *)pOVar11;
    func_?();
    method_01 = TypeInfo__RTG__GizmoThickPolygon2DBorderController;
    pGVar13 = (GizmoHandleCanHoverHandler *)*ppGVar4;
    pGVar14 = (GizmoHandle *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar14,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pGVar14->fields).CanHover = pGVar13;
    func_?();
    if (pGVar13 == (GizmoHandleCanHoverHandler *)0x0) goto code_?;
    iVar12 = func_?();
    if (iVar12 != 0) {
      if (((GizmoPolygon2DBorderControllerData__Fields *)&pGVar13->fields)->PlaneSlider <
          (GizmoPlaneSlider2D *)0x2) goto code_?;
      ((GizmoPolygon2DBorderControllerData__Fields *)&pGVar13->fields)->TargetHandle = pGVar14;
      func_?();
      pGVar14 = (this->fields)._targetHandle;
      if (pGVar14 != (GizmoHandle *)0x0) {
        this_00 = (pGVar14->fields)._gizmo;
        value_00 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                   MethodInfo__RTG__GizmoPolygon2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                   (MethodInfo *)0x0);
        if (this_00 != (Gizmo *)0x0) {
          Gizmo::Gizmo_add_PreUpdateBegin(this_00,value_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

