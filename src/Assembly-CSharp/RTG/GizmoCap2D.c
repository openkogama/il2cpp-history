
/* Void AlignTransformAxis(Int32, AxisSign, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_AlignTransformAxis
               (GizmoCap2D *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector2 axis,
               MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_AlignAxis2D(this_00,axisIndex,axisSign,axis,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_CapSlider2D
               (GizmoCap2D *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__RTG__IGizmoCap2DController;
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar3 = (this->fields)._lookAndFeel;
    if (pGVar3 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar3 = (this->fields)._sharedLookAndFeel;
  }
  if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
    uVar4 = (pGVar3->fields)._capType;
    if (pIVar2->max_length <= uVar4) {
      ppIStack_1 = (IGizmoCap2DController__Class **)0x0;
      puStack_5 = (undefined *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pIVar2->vector[uVar4] != (IGizmoCap2DController *)0x0) {
      ppIStack_1 = (IGizmoCap2DController__Class **)sliderEndPt.y;
      puStack_5 = (undefined *)sliderEndPt.x;
      puStack_7 = (undefined *)sliderDirection.y;
      func_?(2,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar4],sliderDirection.x
                     );
      return;
    }
  }
code_?:
  ppIStack_1 = (IGizmoCap2DController__Class **)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_CapSlider2DInvert
               (GizmoCap2D *this,Vector2 sliderDirection,Vector2 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__RTG__IGizmoCap2DController;
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar3 = (this->fields)._lookAndFeel;
    if (pGVar3 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar3 = (this->fields)._sharedLookAndFeel;
  }
  if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
    uVar4 = (pGVar3->fields)._capType;
    if (pIVar2->max_length <= uVar4) {
      ppIStack_1 = (IGizmoCap2DController__Class **)0x0;
      puStack_5 = (undefined *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pIVar2->vector[uVar4] != (IGizmoCap2DController *)0x0) {
      ppIStack_1 = (IGizmoCap2DController__Class **)sliderEndPt.y;
      puStack_5 = (undefined *)sliderEndPt.x;
      puStack_7 = (undefined *)sliderDirection.y;
      func_?(3,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar4],sliderDirection.x
                     );
      return;
    }
  }
code_?:
  ppIStack_1 = (IGizmoCap2DController__Class **)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single GetRealArrowBaseRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealArrowBaseRadius
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    return (pGVar2->fields)._scale * (pGVar2->fields)._arrowBaseRadius;
  }
  pGVar2 = (this->fields)._lookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale * (pGVar2->fields)._arrowBaseRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealArrowHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealArrowHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    return (pGVar2->fields)._scale * (pGVar2->fields)._arrowHeight;
  }
  pGVar2 = (this->fields)._lookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale * (pGVar2->fields)._arrowHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealCircleRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealCircleRadius
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    return (pGVar2->fields)._scale * (pGVar2->fields)._circleRadius;
  }
  pGVar2 = (this->fields)._lookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale * (pGVar2->fields)._circleRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealQuadHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    return (pGVar2->fields)._scale * (pGVar2->fields)._quadHeight;
  }
  pGVar2 = (this->fields)._lookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale * (pGVar2->fields)._quadHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetRealQuadWidth() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadWidth
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._sharedLookAndFeel;
    return (pGVar2->fields)._scale * (pGVar2->fields)._quadWidth;
  }
  pGVar2 = (this->fields)._lookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._scale * (pGVar2->fields)._quadWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPostEnabled
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap2DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoCap2DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCap2DController,pIVar1->vector[uVar3]);
        pIVar1 = (this->fields)._controllers;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          pGVar2 = (this->fields)._lookAndFeel;
          if (pGVar2 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar2 = (this->fields)._sharedLookAndFeel;
        }
        if (pIVar1 != (IGizmoCap2DController__Array *)0x0) {
          uVar3 = (pGVar2->fields)._capType;
          if (pIVar1->max_length <= uVar3) goto code_?;
          if (pIVar1->vector[uVar3] != (IGizmoCap2DController *)0x0) {
            func_?(1,TypeInfo__RTG__IGizmoCap2DController,pIVar1->vector[uVar3]);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPreUpdateBegin
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
code_?:
    pIVar2 = (this->fields)._controllers;
    if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
      uVar3 = (pGVar1->fields)._capType;
      if (pIVar2->max_length <= uVar3) goto code_?;
      if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
        pIVar2 = (this->fields)._controllers;
        if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
          if (pIVar2->max_length <= uVar3) goto code_?;
          if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
            func_?(1,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
            return;
          }
        }
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


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnTransformChanged
               (GizmoCap2D *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IGizmoCap2DController *)&TypeInfo__RTG__IGizmoCap2DController;
    func_?();
    cRam_? = '\x01';
  }
  if ((changeData.TRSDimension != 1) && (changeData.ChangeReason != 1)) {
    return;
  }
  pIVar2 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar3 = (this->fields)._lookAndFeel;
    if (pGVar3 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar3 = (this->fields)._sharedLookAndFeel;
  }
  if (pIVar2 != (IGizmoCap2DController__Array *)0x0) {
    uVar4 = (pGVar3->fields)._capType;
    if (pIVar2->max_length <= uVar4) {
      pIStack_1 = (IGizmoCap2DController *)0x0;
      pIStack_5 = (IGizmoCap2DController__Class *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_1 = pIVar2->vector[uVar4];
    if (pIStack_1 != (IGizmoCap2DController *)0x0) {
      pIStack_5 = TypeInfo__RTG__IGizmoCap2DController;
      puStack_7 = (undefined *)0x1;
      func_?();
      return;
    }
  }
code_?:
  pIStack_1 = (IGizmoCap2DController *)&stack0xfffffffc;
  uVar8 = func_?(&puStack_7);
  func_?(uVar8);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnVisibilityStateChanged
               (GizmoCap2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap2DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoCap2DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCap2DController,pIVar1->vector[uVar3]);
        pIVar1 = (this->fields)._controllers;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          pGVar2 = (this->fields)._lookAndFeel;
          if (pGVar2 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar2 = (this->fields)._sharedLookAndFeel;
        }
        if (pIVar1 != (IGizmoCap2DController__Array *)0x0) {
          uVar3 = (pGVar2->fields)._capType;
          if (pIVar1->max_length <= uVar3) goto code_?;
          if (pIVar1->vector[uVar3] != (IGizmoCap2DController *)0x0) {
            func_?(1,TypeInfo__RTG__IGizmoCap2DController,pIVar1->vector[uVar3]);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_RegisterTransformAsDragTarget
               (GizmoCap2D *this,IGizmoDragSession *dragSession,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pGStack_1 = (GizmoTransform *)&TypeInfo__RTG__IGizmoDragSession;
    func_?();
    cRam_? = '\x01';
  }
  if (dragSession != (IGizmoDragSession *)0x0) {
    pGStack_1 = (this->fields)._transform;
    pIStack_2 = dragSession;
    pIStack_3 = TypeInfo__RTG__IGizmoDragSession;
    func_?(9);
    return;
  }
  pGStack_1 = (GizmoTransform *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_Render
               (GizmoCap2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if ((this->fields)._._isVisible == 0) {
    return;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar1->fields)._fillMode == 2) {
code_?:
    pGVar2 = (this->fields)._overrideFillColor;
    if (pGVar2 == (GizmoOverrideColor *)0x0) goto code_?;
    if ((pGVar2->fields)._isActive == 0) {
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        pGVar1 = (this->fields)._lookAndFeel;
        if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar1 = (this->fields)._sharedLookAndFeel;
      }
      fVar3 = (pGVar1->fields)._color.r;
      fStack_4 = (pGVar1->fields)._color.g;
      fStack_5 = (pGVar1->fields)._color.b;
      fStack_6 = (pGVar1->fields)._color.a;
      pGVar7 = (this->fields)._._gizmo;
      if (pGVar7 == (Gizmo *)0x0) goto code_?;
      iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              PointerCaptureEventBase`1[System::Object]::
              PointerCaptureEventBase_1_System_Object__get_pointerId
                        ((PointerCaptureEventBase_1_System_Object_ *)pGVar7,(MethodInfo *)0x0);
      pGVar9 = (this->fields)._._handle;
      if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
      if (iVar8 == (pGVar9->fields)._id) {
        if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          pGVar1 = (this->fields)._lookAndFeel;
          if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar1 = (this->fields)._sharedLookAndFeel;
        }
        fVar3 = (pGVar1->fields)._hoveredColor.r;
        fStack_4 = (pGVar1->fields)._hoveredColor.g;
        fStack_5 = (pGVar1->fields)._hoveredColor.b;
        fStack_6 = (pGVar1->fields)._hoveredColor.a;
      }
    }
    else {
      fVar3 = (pGVar2->fields)._color.r;
      fStack_4 = (pGVar2->fields)._color.g;
      fStack_5 = (pGVar2->fields)._color.b;
      fStack_6 = (pGVar2->fields)._color.a;
    }
    if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    }
    this_00 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,0,(MethodInfo *)0x0);
    color.g = fStack_4;
    color.r = fVar3;
    color.b = fStack_5;
    color.a = fStack_6;
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_00,color,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render2DSolid(pGVar9,camera,(MethodInfo *)0x0);
  }
  else {
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    if ((pGVar1->fields)._fillMode == 0) goto code_?;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar1->fields)._fillMode != 2) {
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    if ((pGVar1->fields)._fillMode != 1) {
      return;
    }
  }
  pGVar2 = (this->fields)._overrideFillColor;
  if (pGVar2 == (GizmoOverrideColor *)0x0) goto code_?;
  if ((pGVar2->fields)._isActive == 0) {
    if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    fVar3 = (pGVar1->fields)._borderColor.r;
    fStack_4 = (pGVar1->fields)._borderColor.g;
    fStack_5 = (pGVar1->fields)._borderColor.b;
    fStack_6 = (pGVar1->fields)._borderColor.a;
    pGVar7 = (this->fields)._._gizmo;
    if (pGVar7 == (Gizmo *)0x0) goto code_?;
    iVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            PointerCaptureEventBase`1[System::Object]::
            PointerCaptureEventBase_1_System_Object__get_pointerId
                      ((PointerCaptureEventBase_1_System_Object_ *)pGVar7,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    if (iVar8 == (pGVar9->fields)._id) {
      if ((this->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        pGVar1 = (this->fields)._lookAndFeel;
        if (pGVar1 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar1 = (this->fields)._sharedLookAndFeel;
      }
      fVar3 = (pGVar1->fields)._hoveredBorderColor.r;
      fStack_4 = (pGVar1->fields)._hoveredBorderColor.g;
      fStack_5 = (pGVar1->fields)._hoveredBorderColor.b;
      fStack_6 = (pGVar1->fields)._hoveredBorderColor.a;
    }
  }
  else {
    pGVar2 = (this->fields)._overrideBorderColor;
    if (pGVar2 == (GizmoOverrideColor *)0x0) goto code_?;
    fVar3 = (pGVar2->fields)._color.r;
    fStack_4 = (pGVar2->fields)._color.g;
    fStack_5 = (pGVar2->fields)._color.b;
    fStack_6 = (pGVar2->fields)._color.a;
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
  }
  this_01 = (GizmoLineMaterial *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
  if (this_01 != (GizmoLineMaterial *)0x0) {
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(this_01,(MethodInfo *)0x0);
    color_00.g = fStack_4;
    color_00.r = fVar3;
    color_00.b = fStack_5;
    color_00.a = fStack_6;
    GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color_00,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 != (GizmoHandle *)0x0) {
      GizmoHandle::GizmoHandle_Render2DWire(pGVar9,camera,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnregisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_UnregisterTransformAsDragTarget
               (GizmoCap2D *this,IGizmoDragSession *dragSession,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pGStack_1 = (GizmoTransform *)&TypeInfo__RTG__IGizmoDragSession;
    func_?();
    cRam_? = '\x01';
  }
  if (dragSession != (IGizmoDragSession *)0x0) {
    pGStack_1 = (this->fields)._transform;
    pIStack_2 = dragSession;
    pIStack_3 = TypeInfo__RTG__IGizmoDragSession;
    func_?(10);
    return;
  }
  pGStack_1 = (GizmoTransform *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GizmoCap2D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D__ctor
               (GizmoCap2D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CircleShape2D);
    func_?(&TypeInfo__RTG__ConeShape2D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoArrowCap2DController);
    func_?(&TypeInfo__RTG__GizmoCap2DControllerData);
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeRef__RTG__GizmoCap2DType);
    func_?(&MethodInfo__RTG__GizmoCap2D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoCap2D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoCap2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoCircleCap2DController);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeInfo__RTG__GizmoOverrideColor);
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoQuadCap2DController);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    func_?(&TypeInfo__RTG__QuadShape2D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = (QuadShape2D *)func_?(TypeInfo__RTG__QuadShape2D);
  QuadShape2D::QuadShape2D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._quad = this_00;
  func_?(&(this->fields)._quad,this_00);
  this_01 = (CircleShape2D *)func_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._circle = this_01;
  func_?(&(this->fields)._circle,this_01);
  this_02 = (ConeShape2D *)func_?(TypeInfo__RTG__ConeShape2D);
  ConeShape2D::ConeShape2D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._arrow = this_02;
  func_?(&(this->fields)._arrow,this_02);
  pGVar1 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar1,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar1;
  func_?();
  pGVar2 = (GizmoOverrideColor *)func_?(TypeInfo__RTG__GizmoOverrideColor);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar2,(MethodInfo *)0x0);
  (this->fields)._overrideFillColor = pGVar2;
  func_?(&(this->fields)._overrideFillColor,pGVar2);
  pGVar2 = (GizmoOverrideColor *)func_?(TypeInfo__RTG__GizmoOverrideColor);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar2,(MethodInfo *)0x0);
  (this->fields)._overrideBorderColor = pGVar2;
  func_?(&(this->fields)._overrideBorderColor,pGVar2);
  handle = TypeRef__RTG__GizmoCap2DType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_03 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_03 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_03,(MethodInfo *)0x0);
    pIVar3 = (IGizmoCap2DController__Array *)func_?();
    (this->fields)._controllers = pIVar3;
    func_?();
    this_04 = (GizmoCap2DLookAndFeel *)func_?();
    GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(this_04,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&(this->fields)._lookAndFeel;
    (this->fields)._lookAndFeel = this_04;
    func_?();
    (this->fields)._._isVisible = 1;
    (this->fields)._._isHoverable = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields)._._gizmo = (Gizmo *)&UNK_?;
    func_?();
    pGVar4 = (this->fields)._._gizmo;
    if (pGVar4 == (Gizmo *)0x0) goto code_?;
    pGVar5 = Gizmo::Gizmo_CreateHandle(pGVar4,(int32_t)&this->fields,(MethodInfo *)0x0);
    (this->fields)._._handle = pGVar5;
    func_?();
    pGVar5 = (this->fields)._._handle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar5,(Shape2D *)(this->fields)._quad,(MethodInfo *)0x0);
    (this->fields)._quadIndex = iVar6;
    pGVar5 = (this->fields)._._handle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar5,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
    (this->fields)._circleIndex = iVar6;
    pGVar5 = (this->fields)._._handle;
    if (pGVar5 == (GizmoHandle *)0x0) goto code_?;
    iVar6 = GizmoHandle::GizmoHandle_Add2DShape
                      (pGVar5,(Shape2D *)(this->fields)._arrow,(MethodInfo *)0x0);
    (this->fields)._arrowIndex = iVar6;
    method_03 = TypeInfo__RTG__GizmoCap2DControllerData;
    pGVar7 = (GizmoCap2DControllerData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    (this->fields)._controllerData = pGVar7;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).Cap = this;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).CapHandle = (this->fields)._._handle;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).Quad = (this->fields)._quad;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).QuadIndex = (this->fields)._quadIndex;
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).Circle = (this->fields)._circle;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).CircleIndex = (this->fields)._circleIndex;
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).Arrow = (this->fields)._arrow;
    func_?();
    pGVar7 = (this->fields)._controllerData;
    if (pGVar7 == (GizmoCap2DControllerData *)0x0) goto code_?;
    (pGVar7->fields).ArrowIndex = (this->fields)._arrowIndex;
    pIVar3 = (this->fields)._controllers;
    pIVar8 = (IGizmoCap2DController__Class *)(this->fields)._controllerData;
    method_04 = TypeInfo__RTG__GizmoQuadCap2DController;
    pIVar9 = (IGizmoCap2DController *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_04);
    pIVar9[1].klass = pIVar8;
    func_?();
    if (pIVar3 == (IGizmoCap2DController__Array *)0x0) goto code_?;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pIVar3->max_length == 0) goto code_?;
    pIVar3->vector[0] = pIVar9;
    func_?();
    pIVar3 = (this->fields)._controllers;
    pIVar8 = (IGizmoCap2DController__Class *)(this->fields)._controllerData;
    method_01 = TypeInfo__RTG__GizmoCircleCap2DController;
    pIVar9 = (IGizmoCap2DController *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    pIVar9[1].klass = pIVar8;
    func_?();
    if (pIVar3 == (IGizmoCap2DController__Array *)0x0) goto code_?;
    iVar10 = func_?();
    if (iVar10 == 0) goto code_?;
    if (pIVar3->max_length < 2) goto code_?;
    pIVar3->vector[1] = pIVar9;
    func_?();
    pIVar3 = (this->fields)._controllers;
    pIVar8 = (IGizmoCap2DController__Class *)(this->fields)._controllerData;
    method_02 = TypeInfo__RTG__GizmoArrowCap2DController;
    pIVar9 = (IGizmoCap2DController *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pIVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    pIVar9[1].klass = pIVar8;
    func_?();
    if (pIVar3 == (IGizmoCap2DController__Array *)0x0) goto code_?;
    iVar10 = func_?();
    if (iVar10 != 0) {
      if (pIVar3->max_length < 3) goto code_?;
      pIVar3->vector[2] = pIVar9;
      func_?();
      pGVar1 = (this->fields)._transform;
      if (pGVar1 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_SetParent(pGVar1,_UNK_?,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._transform;
        value = (GizmoEntityTransformChangedHandler *)func_?();
        Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
        SerializationCallback__ctor
                  ((SerializationCallback *)value,(Object *)this,
                   MethodInfo__RTG__GizmoCap2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   ,(MethodInfo *)0x0);
        if (pGVar1 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_add_Changed(pGVar1,value,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._gizmo;
          value_00 = (GizmoPreUpdateBeginHandler *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
          VideoCapture+OnVideoCaptureResourceCreatedCallback::
          VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                    ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)this,
                     MethodInfo__RTG__GizmoCap2D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                     (MethodInfo *)0x0);
          if (pGVar4 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreUpdateBegin(pGVar4,value_00,(MethodInfo *)0x0);
            pGVar4 = (this->fields)._._gizmo;
            value_01 = (GizmoPostEnabledHandler *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_01,(Object *)this
                       ,MethodInfo__RTG__GizmoCap2D__OnGizmoPostEnabled_RTG__Gizmo_,
                       (MethodInfo *)0x0);
            if (pGVar4 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PostEnabled(pGVar4,value_01,(MethodInfo *)0x0);
              return;
            }
          }
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


/* GizmoCap2DLookAndFeel get_LookAndFeel() */

GizmoCap2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_LookAndFeel
          (GizmoCap2D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_Position
                  (GizmoCap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._transform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    return (pGVar1->fields)._position2D;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._rotation2D.y;
    fVar4 = (pGVar2->fields)._rotation2D.z;
    fVar5 = (pGVar2->fields)._rotation2D.w;
    __return_storage_ptr__->x = (pGVar2->fields)._rotation2D.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* Single get_RotationDegrees() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_RotationDegrees
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    return (pGVar2->fields)._rotation2DDegrees;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_set_Position
               (GizmoCap2D *this,Vector2 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Position2D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_set_RotationDegrees
               (GizmoCap2D *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Rotation2DDegrees(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

