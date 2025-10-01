/* decompilation failed: Exception while decompiling 10597f90: Decompiler process died */


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::
     GizmoRATriangle3DBorder_OnGizmoPreUpdateBegin
               (GizmoRATriangle3DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._planeSlider;
      pIVar3 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0);
        if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
           (pIVar3 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
          uVar5 = (pGVar4->fields)._raTriangleBorderType;
          if (pIVar3->max_length <= uVar5) goto code_?;
          if (pIVar3->vector[uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
            func_?();
            pGVar2 = (this->fields)._planeSlider;
            pIVar3 = (this->fields)._controllers;
            if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
              pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                 (pGVar2,(MethodInfo *)0x0);
              if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
                 (pIVar3 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
                uVar5 = (pGVar4->fields)._raTriangleBorderType;
                if (pIVar3->max_length <= uVar5) goto code_?;
                if (pIVar3->vector[uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
                  func_?(1,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                                  pIVar3->vector[uVar5],0);
                  return;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTriangleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::
     GizmoRATriangle3DBorder_OnTriangleShapeChanged
               (GizmoRATriangle3DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._targetHandle;
  if ((pGVar1 != (GizmoHandle *)0x0) && (this_00 = (pGVar1->fields)._gizmo, this_00 != (Gizmo *)0x0)
     ) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._planeSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor(pGVar2,camera,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._planeSlider;
      pIVar3 = (this->fields)._controllers;
      if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
        pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0);
        if ((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
           (pIVar3 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
          uVar5 = (pGVar4->fields)._raTriangleBorderType;
          if (pIVar3->max_length <= uVar5) goto code_?;
          if (pIVar3->vector[uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
            puStack6 = (undefined *)0x0;
            func_?();
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_Render
               (GizmoRATriangle3DBorder *this,Camera *camera,MethodInfo *method)

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
  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
     (pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0),
     pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
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
          if ((pGVar1 == (GizmoPlaneSlider3D *)0x0) ||
             (pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                 (pGVar1,(MethodInfo *)0x0),
             pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)) goto code_?;
          fVar3 = (pGVar2->fields)._hoveredBorderColor.r;
          fVar4 = (pGVar2->fields)._hoveredBorderColor.g;
          fStack_5 = (pGVar2->fields)._hoveredBorderColor.b;
          fStack_6 = (pGVar2->fields)._hoveredBorderColor.a;
        }
        pGVar1 = (this->fields)._planeSlider;
        if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
           (pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                               (pGVar1,(MethodInfo *)0x0),
           pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
          if ((pGVar2->fields)._raTriangleBorderType != 0) {
            return;
          }
          if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0
             ) {
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
              GizmoHandle::GizmoHandle_Render3DWire_1
                        (pGVar7,(this->fields)._borderTriangleIndex,(MethodInfo *)0x0);
              return;
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

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetHoverable
               (GizmoRATriangle3DBorder *this,bool isHoverable,MethodInfo *method)

{
  this_00 = (this->fields)._targetHandle;
  (this->fields)._isHoverable = isHoverable;
  if (this_00 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_Set3DShapeHoverable
              (this_00,(this->fields)._borderTriangleIndex,isHoverable,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible
               (GizmoRATriangle3DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
      (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0),
      pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
     (pIVar1 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._raTriangleBorderType;
    if (pIVar1->max_length <= uVar4) goto code_?;
    if (pIVar1->vector[uVar4] != (IGizmoRATriangle3DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoRATriangle3DBorderController,pIVar1->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar5 = (this->fields)._targetHandle;
      if ((pGVar5 != (GizmoHandle *)0x0) &&
         (pGVar6 = (pGVar5->fields)._gizmo, pGVar6 != (Gizmo *)0x0)) {
        pCVar7 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._planeSlider;
        if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
          fVar8 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor
                            (pGVar2,pCVar7,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._planeSlider;
          pIVar1 = (this->fields)._controllers;
          if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
              (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                  (pGVar2,(MethodInfo *)0x0),
              pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
             (pIVar1 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._raTriangleBorderType;
            if (pIVar1->max_length <= uVar4) goto code_?;
            if (pIVar1->vector[uVar4] != (IGizmoRATriangle3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                              pIVar1->vector[uVar4],fVar8);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
                cRam_? = '\x01';
              }
              pGVar5 = (this->fields)._targetHandle;
              if ((pGVar5 != (GizmoHandle *)0x0) &&
                 (pGVar6 = (pGVar5->fields)._gizmo, pGVar6 != (Gizmo *)0x0)) {
                pCVar7 = Gizmo::Gizmo_GetWorkCamera(pGVar6,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._planeSlider;
                if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
                  fVar8 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetZoomFactor
                                    (pGVar2,pCVar7,(MethodInfo *)0x0);
                  pGVar2 = (this->fields)._planeSlider;
                  pIVar1 = (this->fields)._controllers;
                  if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
                      (pGVar3 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                          (pGVar2,(MethodInfo *)0x0),
                      pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
                     (pIVar1 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
                    uVar4 = (pGVar3->fields)._raTriangleBorderType;
                    if (pIVar1->max_length <= uVar4) goto code_?;
                    if (pIVar1->vector[uVar4] != (IGizmoRATriangle3DBorderController *)0x0) {
                      func_?(2,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                                      pIVar1->vector[uVar4],fVar8);
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
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GizmoRATriangle3DBorder(GizmoPlaneSlider3D, GizmoHandle, RightAngTriangle3D) */

void Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder__ctor
               (GizmoRATriangle3DBorder *this,GizmoPlaneSlider3D *planeSlider,
               GizmoHandle *targetHandle,RightAngTriangle3D *targetRiangle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoRATriangle3DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoRATriangle3DBorderType);
    func_?(&MethodInfo__RTG__GizmoRATriangle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoThinRATriangle3DBorderController);
    func_?(&TypeInfo__RTG__IGizmoRATriangle3DBorderController);
    func_?(&TypeInfo__RTG__RightAngTriangle3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pRVar1 = (RightAngTriangle3D *)func_?(TypeInfo__RTG__RightAngTriangle3D);
  RightAngTriangle3D::RightAngTriangle3D__ctor(pRVar1,(MethodInfo *)0x0);
  (this->fields)._borderTriangle = pRVar1;
  func_?(&(this->fields)._borderTriangle,pRVar1);
  method_02 = TypeInfo__RTG__GizmoRATriangle3DBorderControllerData;
  pGVar2 = (GizmoRATriangle3DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  (this->fields)._controllerData = pGVar2;
  func_?(&(this->fields)._controllerData,pGVar2);
  handle = TypeRef__RTG__GizmoRATriangle3DBorderType;
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
    pIVar4 = TypeInfo__RTG__IGizmoRATriangle3DBorderController;
    pIVar5 = (IGizmoRATriangle3DBorderController__Array *)func_?();
    (this->fields)._controllers = pIVar5;
    method_01 = (MethodInfo *)&(this->fields)._controllers;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_01);
    (this->fields)._planeSlider = (GizmoPlaneSlider3D *)pIVar4;
    func_?(&this->fields,pIVar4);
    (this->fields)._targetHandle = pGVar3;
    func_?(&(this->fields)._targetHandle,pGVar3);
    (this->fields)._targetTriangle = targetRiangle;
    func_?(&(this->fields)._targetTriangle,targetRiangle);
    pGVar3 = (this->fields)._targetHandle;
    if (pGVar3 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add3DShape
                      (pGVar3,(Shape3D *)(this->fields)._borderTriangle,(MethodInfo *)0x0);
    (this->fields)._borderTriangleIndex = iVar6;
    pRVar1 = (this->fields)._borderTriangle;
    if (pRVar1 == (RightAngTriangle3D *)0x0) goto code_?;
    (pRVar1->fields)._raycastMode = 1;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Border = this;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    pGVar3 = (this->fields)._targetHandle;
    if (pGVar3 == (GizmoHandle *)0x0) goto code_?;
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).Gizmo = (pGVar3->fields)._gizmo;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetHandle = (this->fields)._targetHandle;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).TargetTriangle = (this->fields)._targetTriangle;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).BorderTriangle = (this->fields)._borderTriangle;
    func_?();
    pGVar2 = (this->fields)._controllerData;
    if (pGVar2 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    (pGVar2->fields).BorderTriangleIndex = (this->fields)._borderTriangleIndex;
    method_00 = TypeInfo__RTG__GizmoThinRATriangle3DBorderController;
    pGVar2 = (this->fields)._controllerData;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)pGVar2;
    func_?();
    if (value == (Object *)0xfffffff8) goto code_?;
    iVar7 = func_?();
    if (iVar7 != 0) {
      if (value[2].monitor == (MonitorData *)0x0) goto code_?;
      value[3].klass = (Object__Class *)value;
      func_?();
      pGVar3 = (this->fields)._targetHandle;
      if (pGVar3 != (GizmoHandle *)0x0) {
        this_00 = (pGVar3->fields)._gizmo;
        value_00 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                   MethodInfo__RTG__GizmoRATriangle3DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

