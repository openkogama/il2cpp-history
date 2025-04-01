
/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder_OnGizmoPreUpdateBegin
               (GizmoQuad2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad2DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
    if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar2 != (IGizmoQuad2DBorderController__Array *)0x0)) {
      uVar4 = (pGVar3->fields)._quadBorderType;
      if (pIVar2->max_length <= uVar4) goto code_?;
      if (pIVar2->vector[uVar4] != (IGizmoQuad2DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoQuad2DBorderController,pIVar2->vector[uVar4]);
        pGVar1 = (this->fields)._planeSlider;
        pIVar2 = (this->fields)._controllers;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
          if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
             (pIVar2 != (IGizmoQuad2DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._quadBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoQuad2DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoQuad2DBorderController);
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


/* Void OnQuadShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder_OnQuadShapeChanged
               (GizmoQuad2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  this_00 = (this->fields)._planeSlider;
  if (this_00 != (GizmoPlaneSlider2D *)0x0) {
    pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(this_00,(MethodInfo *)0x0);
    if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar1 != (IGizmoQuad2DBorderController__Array *)0x0)) {
      uVar3 = (pGVar2->fields)._quadBorderType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoQuad2DBorderController *)0x0) {
        func_?(2,TypeInfo__RTG__IGizmoQuad2DBorderController,pIVar1->vector[uVar3]);
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

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder_Render
               (GizmoQuad2DBorder *this,Camera *camera,MethodInfo *method)

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
          pGVar7 = (this->fields)._targetHandle;
          if (pGVar7 != (GizmoHandle *)0x0) {
            GizmoHandle::GizmoHandle_Render2DWire_1
                      (pGVar7,camera,(this->fields)._borderQuadIndex,(MethodInfo *)0x0);
            return;
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

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder_SetHoverable
               (GizmoQuad2DBorder *this,bool isHoverable,MethodInfo *method)

{
  this_00 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (this_00 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set2DShapeHoverable
              (this_00,(this->fields)._borderQuadIndex,isHoverable,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder_SetVisible
               (GizmoQuad2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoQuad2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
      (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0),
      pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar1 != (IGizmoQuad2DBorderController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._quadBorderType;
    if (pIVar1->max_length <= uVar4) goto code_?;
    if (pIVar1->vector[uVar4] != (IGizmoQuad2DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoQuad2DBorderController,pIVar1->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar1 = (this->fields)._controllers;
      if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
          (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0)
          , pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
         (pIVar1 != (IGizmoQuad2DBorderController__Array *)0x0)) {
        uVar4 = (pGVar3->fields)._quadBorderType;
        if (pIVar1->max_length <= uVar4) goto code_?;
        if (pIVar1->vector[uVar4] != (IGizmoQuad2DBorderController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoQuad2DBorderController,pIVar1->vector[uVar4]);
          GizmoQuad2DBorder_OnQuadShapeChanged(this,(MethodInfo *)0x0);
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


/* GizmoQuad2DBorder(GizmoPlaneSlider2D, GizmoHandle, QuadShape2D) */

void Assembly-CSharp.dll::RTG::GizmoQuad2DBorder::GizmoQuad2DBorder__ctor
               (GizmoQuad2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle,
               QuadShape2D *targetQuad,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoQuad2DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoQuad2DBorderType);
    func_?(&MethodInfo__RTG__GizmoQuad2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoThinQuad2DBorderController);
    func_?(&TypeInfo__RTG__IGizmoQuad2DBorderController);
    func_?(&TypeInfo__RTG__QuadShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pQVar1 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(pQVar1,(MethodInfo *)0x0);
  (this->fields)._borderQuad = pQVar1;
  func_?(&(this->fields)._borderQuad,pQVar1);
  method_01 = TypeInfo__RTG__GizmoQuad2DBorderControllerData;
  pGVar2 = (GizmoQuad2DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields)._controllerData = pGVar2;
  func_?(&(this->fields)._controllerData,pGVar2);
  handle = TypeRef__RTG__GizmoQuad2DBorderType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
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
  }
  else {
    pGVar3 = (GizmoHandle *)mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0)
    ;
    pIVar4 = TypeInfo__RTG__IGizmoQuad2DBorderController;
    pIVar5 = (IGizmoQuad2DBorderController__Array *)func_?();
    (this->fields)._controllers = pIVar5;
    method_00 = (MethodInfo *)&(this->fields)._controllers;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields)._planeSlider = (GizmoPlaneSlider2D *)pIVar4;
    func_?(&this->fields,pIVar4);
    (this->fields)._targetHandle = pGVar3;
    func_?(&(this->fields)._targetHandle,pGVar3);
    (this->fields)._targetQuad = targetQuad;
    func_?(&(this->fields)._targetQuad,targetQuad);
    pGVar6 = (this->fields)._targetHandle;
    if (pGVar6 == (GizmoHandle *)0x0) goto code_?;
    iVar7 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar6,(Shape2D *)(this->fields)._borderQuad,(MethodInfo *)0x0);
    (this->fields)._borderQuadIndex = iVar7;
    pQVar1 = (this->fields)._borderQuad;
    if (pQVar1 == (QuadShape2D *)0x0) goto code_?;
    (pQVar1->fields)._ptContainMode = 1;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Border = this;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).BorderQuad = (this->fields)._borderQuad;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if ((pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) ||
       ((pGVar2->fields).BorderQuadIndex = (this->fields)._borderQuadIndex,
       pGVar3 == (GizmoHandle *)0x0)) goto code_?;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Gizmo = (pGVar3->fields)._gizmo;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetHandle = pGVar3;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoQuad2DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetQuad = (this->fields)._targetQuad;
    func_?();
    pIVar5 = (this->fields)._controllers;
    pGVar2 = (this->fields)._controllerData;
    value = (Il2CppClass *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar5);
    value->name = (char *)pGVar2;
    func_?(&value->name);
    if (pIVar5 == (IGizmoQuad2DBorderController__Array *)0x0) goto code_?;
    iVar8 = func_?();
    if (iVar8 != 0) {
      if ((char *)pIVar5->max_length == (char *)0x0) goto code_?;
      pIVar5->vector[0] = (IGizmoQuad2DBorderController *)value;
      func_?();
      pGVar6 = (this->fields)._targetHandle;
      if (pGVar6 != (GizmoHandle *)0x0) {
        this_00 = (pGVar6->fields)._gizmo;
        value_00 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                   MethodInfo__RTG__GizmoQuad2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

