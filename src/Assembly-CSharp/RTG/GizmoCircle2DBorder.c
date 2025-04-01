
/* Void OnCircleShapeChanged() */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_OnCircleShapeChanged
               (GizmoCircle2DBorder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  this_00 = (this->fields)._planeSlider;
  if (this_00 != (GizmoPlaneSlider2D *)0x0) {
    pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(this_00,(MethodInfo *)0x0);
    if ((pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar1 != (IGizmoCircle2DBorderController__Array *)0x0)) {
      uVar3 = (pGVar2->fields)._circleBorderType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoCircle2DBorderController *)0x0) {
        func_?(2,TypeInfo__RTG__IGizmoCircle2DBorderController);
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


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_OnGizmoPreUpdateBegin
               (GizmoCircle2DBorder *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._planeSlider;
  pIVar2 = (this->fields)._controllers;
  if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
    pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
    if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pIVar2 != (IGizmoCircle2DBorderController__Array *)0x0)) {
      uVar4 = (pGVar3->fields)._circleBorderType;
      if (pIVar2->max_length <= uVar4) goto code_?;
      if (pIVar2->vector[uVar4] != (IGizmoCircle2DBorderController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCircle2DBorderController,pIVar2->vector[uVar4]);
        pGVar1 = (this->fields)._planeSlider;
        pIVar2 = (this->fields)._controllers;
        if (pGVar1 != (GizmoPlaneSlider2D *)0x0) {
          pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar1,(MethodInfo *)0x0);
          if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
             (pIVar2 != (IGizmoCircle2DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._circleBorderType;
            if (pIVar2->max_length <= uVar4) goto code_?;
            if (pIVar2->vector[uVar4] != (IGizmoCircle2DBorderController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoCircle2DBorderController);
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


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_Render
               (GizmoCircle2DBorder *this,Camera *camera,MethodInfo *method)

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
                      (pGVar7,camera,(this->fields)._borderCircleIndex,(MethodInfo *)0x0);
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


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder_SetVisible
               (GizmoCircle2DBorder *this,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  (this->fields)._isVisible = isVisible;
  pGVar2 = (this->fields)._planeSlider;
  if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
      (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0),
      pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
     (pIVar1 != (IGizmoCircle2DBorderController__Array *)0x0)) {
    uVar4 = (pGVar3->fields)._circleBorderType;
    if (pIVar1->max_length <= uVar4) goto code_?;
    if (pIVar1->vector[uVar4] != (IGizmoCircle2DBorderController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoCircle2DBorderController,pIVar1->vector[uVar4]);
      if ((this->fields)._isVisible == 0) {
        return;
      }
      pGVar2 = (this->fields)._planeSlider;
      pIVar1 = (this->fields)._controllers;
      if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
          (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(pGVar2,(MethodInfo *)0x0)
          , pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
         (pIVar1 != (IGizmoCircle2DBorderController__Array *)0x0)) {
        uVar4 = (pGVar3->fields)._circleBorderType;
        if (pIVar1->max_length <= uVar4) goto code_?;
        if (pIVar1->vector[uVar4] != (IGizmoCircle2DBorderController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoCircle2DBorderController,pIVar1->vector[uVar4]);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
            cRam_? = '\x01';
          }
          pGVar2 = (this->fields)._planeSlider;
          pIVar1 = (this->fields)._controllers;
          if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
              (pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel
                                  (pGVar2,(MethodInfo *)0x0),
              pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
             (pIVar1 != (IGizmoCircle2DBorderController__Array *)0x0)) {
            uVar4 = (pGVar3->fields)._circleBorderType;
            if (pIVar1->max_length <= uVar4) goto code_?;
            if (pIVar1->vector[uVar4] != (IGizmoCircle2DBorderController *)0x0) {
              func_?(2,TypeInfo__RTG__IGizmoCircle2DBorderController,pIVar1->vector[uVar4])
              ;
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


/* GizmoCircle2DBorder(GizmoPlaneSlider2D, GizmoHandle, CircleShape2D) */

void Assembly-CSharp.dll::RTG::GizmoCircle2DBorder::GizmoCircle2DBorder__ctor
               (GizmoCircle2DBorder *this,GizmoPlaneSlider2D *planeSlider,GizmoHandle *targetHandle,
               CircleShape2D *targetCircle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CircleShape2D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoCircle2DBorderControllerData);
    func_?(&TypeRef__RTG__GizmoCircle2DBorderType);
    func_?(&MethodInfo__RTG__GizmoCircle2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoThinCircle2DBorderController);
    func_?(&TypeInfo__RTG__IGizmoCircle2DBorderController);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields)._isVisible = 1;
  (this->fields)._isHoverable = 1;
  pCVar1 = (CircleShape2D *)func_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(this->fields)._borderCircle;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  method_01 = TypeInfo__RTG__GizmoCircle2DBorderControllerData;
  pGVar3 = (GizmoCircle2DBorderControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  ppGVar4 = &(this->fields)._controllerData;
  *ppGVar4 = pGVar3;
  func_?(ppGVar4,pGVar3);
  handle = TypeRef__RTG__GizmoCircle2DBorderType;
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
    pIVar6 = TypeInfo__RTG__IGizmoCircle2DBorderController;
    pIVar7 = (IGizmoCircle2DBorderController__Array *)func_?();
    method_00 = (MethodInfo *)&(this->fields)._controllers;
    *(IGizmoCircle2DBorderController__Array **)method_00 = pIVar7;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields)._planeSlider = (GizmoPlaneSlider2D *)pIVar6;
    func_?(&this->fields,pIVar6);
    ppGVar8 = &(this->fields)._targetHandle;
    *ppGVar8 = pGVar5;
    func_?(ppGVar8,pGVar5);
    ppCVar2 = &(this->fields)._targetCircle;
    *ppCVar2 = targetCircle;
    func_?(ppCVar2,targetCircle);
    pGVar9 = (this->fields)._targetHandle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar9,(Shape2D *)(this->fields)._borderCircle,(MethodInfo *)0x0);
    (this->fields)._borderCircleIndex = iVar10;
    pCVar1 = (this->fields)._borderCircle;
    if (pCVar1 == (CircleShape2D *)0x0) goto code_?;
    (pCVar1->fields)._ptContainMode = 1;
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Border = this;
    func_?();
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).PlaneSlider = (this->fields)._planeSlider;
    func_?();
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).BorderCircle = (this->fields)._borderCircle;
    func_?();
    if ((*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) ||
       (((*ppGVar4)->fields).BorderCircleIndex = (this->fields)._borderCircleIndex,
       pGVar5 == (GizmoHandle *)0x0)) goto code_?;
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).Gizmo = (pGVar5->fields)._gizmo;
    func_?();
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetHandle = pGVar5;
    func_?();
    if (*ppGVar4 == (GizmoCircle2DBorderControllerData *)0x0) goto code_?;
    ((*ppGVar4)->fields).TargetCircle = (this->fields)._targetCircle;
    func_?();
    pIVar7 = (this->fields)._controllers;
    pGVar3 = *ppGVar4;
    value = (Il2CppClass *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar7);
    value->name = (char *)pGVar3;
    func_?(&value->name);
    if (pIVar7 == (IGizmoCircle2DBorderController__Array *)0x0) goto code_?;
    iVar11 = func_?();
    if (iVar11 != 0) {
      if ((char *)pIVar7->max_length == (char *)0x0) goto code_?;
      pIVar7->vector[0] = (IGizmoCircle2DBorderController *)value;
      func_?();
      pGVar9 = (this->fields)._targetHandle;
      if (pGVar9 != (GizmoHandle *)0x0) {
        this_00 = (pGVar9->fields)._gizmo;
        value_00 = (GizmoPreUpdateBeginHandler *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
        VideoCapture+OnVideoCaptureResourceCreatedCallback::
        VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                  ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                   MethodInfo__RTG__GizmoCircle2DBorder__OnGizmoPreUpdateBegin_RTG__Gizmo_,
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

