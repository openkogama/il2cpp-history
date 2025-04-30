
/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_GetZoomFactor
                (GizmoRATriangle3DBorder *this,Camera *camera,MethodInfo *method)

{
  pGVar1 = (this->fields)._planeSlider;
  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
     ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0
      || (pGVar2 = (pGVar1->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    if ((pGVar2->fields)._useZoomFactor == 0) {
      return 1.0;
    }
    this_00 = (pGVar1->fields)._._handle;
    if (this_00 != (GizmoHandle *)0x0) {
      fVar3 = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


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
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
        pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
        (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
    {
      fVar4 = _UNK_?;
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        fVar4 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar5 = (this->fields)._controllers;
      if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
         (((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
           pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
           (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
          && (pIVar5 != (IGizmoRATriangle3DBorderController__Array *)0x0)))) {
        uVar6 = (pGVar3->fields)._raTriangleBorderType;
        if (pIVar5->max_length <= uVar6) goto code_?;
        if (pIVar5->vector[uVar6] != (IGizmoRATriangle3DBorderController *)0x0) {
          func_?(0,TypeInfo__RTG__IGizmoRATriangle3DBorderController,pIVar5->vector[uVar6])
          ;
          pGVar2 = (this->fields)._planeSlider;
          pIVar5 = (this->fields)._controllers;
          if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
              ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
               (pGVar3 = (pGVar2->fields)._lookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)))) &&
             (pIVar5 != (IGizmoRATriangle3DBorderController__Array *)0x0)) {
            uVar6 = (pGVar3->fields)._raTriangleBorderType;
            if (pIVar5->max_length <= uVar6) goto code_?;
            if (pIVar5->vector[uVar6] != (IGizmoRATriangle3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                              pIVar5->vector[uVar6],fVar4);
              return;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       ((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
        pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
        (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
    {
      if ((pGVar3->fields)._useZoomFactor != 0) {
        pGVar1 = (pGVar2->fields)._._handle;
        if (pGVar1 == (GizmoHandle *)0x0) goto code_?;
        GizmoHandle::GizmoHandle_GetZoomFactor(pGVar1,camera,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar4 = (this->fields)._controllers;
      if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
         (((pGVar3 = (pGVar2->fields)._sharedLookAndFeel,
           pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
           (pGVar3 = (pGVar2->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
          && (pIVar4 != (IGizmoRATriangle3DBorderController__Array *)0x0)))) {
        uVar5 = (pGVar3->fields)._raTriangleBorderType;
        if (pIVar4->max_length <= uVar5) goto code_?;
        if (pIVar4->vector[uVar5] != (IGizmoRATriangle3DBorderController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoRATriangle3DBorderController,pIVar4->vector[uVar5])
          ;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
     ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0
      || (pGVar2 = (pGVar1->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0))))
  {
    fStack_3 = (pGVar2->fields)._borderColor.r;
    fStack_4 = (pGVar2->fields)._borderColor.g;
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
        pGVar1 = (this->fields)._planeSlider;
        if (iVar8 == (pGVar7->fields)._id) {
          if ((pGVar1 == (GizmoPlaneSlider3D *)0x0) ||
             ((pGVar2 = (pGVar1->fields)._sharedLookAndFeel,
              pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0 &&
              (pGVar2 = (pGVar1->fields)._lookAndFeel,
              pGVar2 == (GizmoPlaneSlider3DLookAndFeel *)0x0)))) goto code_?;
          fStack_3 = (pGVar2->fields)._hoveredBorderColor.r;
          fStack_4 = (pGVar2->fields)._hoveredBorderColor.g;
          fStack_5 = (pGVar2->fields)._hoveredBorderColor.b;
          fStack_6 = (pGVar2->fields)._hoveredBorderColor.a;
        }
        else if (pGVar1 == (GizmoPlaneSlider3D *)0x0) goto code_?;
        pGVar2 = (pGVar1->fields)._sharedLookAndFeel;
        if ((pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
           (pGVar2 = (pGVar1->fields)._lookAndFeel, pGVar2 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
        {
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
            color.g = fStack_4;
            color.r = fStack_3;
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
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
     (((pGVar3 = (pGVar1->fields)._sharedLookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0
       || (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0))
      && (pIVar2 != (IGizmoRATriangle3DBorderController__Array *)0x0)))) {
    uVar4 = (pGVar3->fields)._raTriangleBorderType;
    if (pIVar2->max_length <= uVar4) goto code_?;
    if (pIVar2->vector[uVar4] != (IGizmoRATriangle3DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoRATriangle3DBorderController,pIVar2->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar5 = (this->fields)._targetHandle;
      if ((pGVar5 != (GizmoHandle *)0x0) &&
         (this_00 = (pGVar5->fields)._gizmo, this_00 != (Gizmo *)0x0)) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._planeSlider;
        if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
           ((pGVar3 = (pGVar1->fields)._sharedLookAndFeel,
            pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
            (pGVar3 = (pGVar1->fields)._lookAndFeel, pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)
            ))) {
          fVar6 = _UNK_?;
          if ((pGVar3->fields)._useZoomFactor != 0) {
            pGVar5 = (pGVar1->fields)._._handle;
            if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
            fVar6 = GizmoHandle::GizmoHandle_GetZoomFactor(pGVar5,camera,(MethodInfo *)0x0);
          }
          pGVar1 = (this->fields)._planeSlider;
          pIVar2 = (this->fields)._controllers;
          if ((pGVar1 != (GizmoPlaneSlider3D *)0x0) &&
             (((pGVar3 = (pGVar1->fields)._sharedLookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0 ||
               (pGVar3 = (pGVar1->fields)._lookAndFeel,
               pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) &&
              (pIVar2 != (IGizmoRATriangle3DBorderController__Array *)0x0)))) {
            uVar4 = (pGVar3->fields)._raTriangleBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoRATriangle3DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoRATriangle3DBorderController,
                              pIVar2->vector[uVar4],fVar6);
              GizmoRATriangle3DBorder_OnTriangleShapeChanged(this,(MethodInfo *)0x0);
              return;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  ppRVar2 = &(this->fields)._borderTriangle;
  *ppRVar2 = pRVar1;
  func_?(ppRVar2,pRVar1);
  method_02 = TypeInfo__RTG__GizmoRATriangle3DBorderControllerData;
  pGVar3 = (GizmoRATriangle3DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  ppGVar4 = &(this->fields)._controllerData;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
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
    pGVar5 = (GizmoHandle *)mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0)
    ;
    pIVar6 = TypeInfo__RTG__IGizmoRATriangle3DBorderController;
    pIVar7 = (IGizmoRATriangle3DBorderController__Array *)func_?();
    method_01 = (MethodInfo *)&(this->fields)._controllers;
    *(IGizmoRATriangle3DBorderController__Array **)method_01 = pIVar7;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_01);
    (this->fields)._planeSlider = (GizmoPlaneSlider3D *)pIVar6;
    func_?(&this->fields,pIVar6);
    ppGVar8 = &(this->fields)._targetHandle;
    *ppGVar8 = pGVar5;
    func_?(ppGVar8,pGVar5);
    ppRVar2 = &(this->fields)._targetTriangle;
    *ppRVar2 = targetRiangle;
    func_?(ppRVar2,targetRiangle);
    if (*ppGVar8 == (GizmoHandle *)0x0) goto code_?;
    iVar9 = GizmoHandle::GizmoHandle_Add3DShape
                       (*ppGVar8,(Shape3D *)(this->fields)._borderTriangle,(MethodInfo *)0x0);
    (this->fields)._borderTriangleIndex = iVar9;
    pRVar1 = (this->fields)._borderTriangle;
    if (pRVar1 == (RightAngTriangle3D *)0x0) goto code_?;
    (pRVar1->fields)._raycastMode = 1;
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Border = this;
    func_?();
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    if (*ppGVar8 == (GizmoHandle *)0x0) goto code_?;
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Gizmo = ((*ppGVar8)->fields)._gizmo;
    func_?();
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetHandle = *ppGVar8;
    func_?();
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetTriangle = (this->fields)._targetTriangle;
    func_?();
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).BorderTriangle = (this->fields)._borderTriangle;
    func_?();
    if (*ppGVar4 == (GizmoRATriangle3DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).BorderTriangleIndex = (this->fields)._borderTriangleIndex;
    method_00 = TypeInfo__RTG__GizmoThinRATriangle3DBorderController;
    pGVar3 = *ppGVar4;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)pGVar3;
    func_?();
    if (value + 1 == (Object *)0x0) goto code_?;
    iVar10 = func_?();
    if (iVar10 != 0) {
      if (value[2].monitor == (MonitorData *)0x0) goto code_?;
      value[3].klass = (Object__Class *)value;
      func_?();
      pGVar5 = (this->fields)._targetHandle;
      if (pGVar5 != (GizmoHandle *)0x0) {
        this_00 = (pGVar5->fields)._gizmo;
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

