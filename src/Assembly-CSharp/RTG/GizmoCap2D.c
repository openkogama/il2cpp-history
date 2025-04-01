
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
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pIVar3 = (this->fields)._controllers;
  if (((pGVar2 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar3 != (IGizmoCap2DController__Array *)0x0)) {
    uVar4 = (pGVar2->fields)._capType;
    if (pIVar3->max_length <= uVar4) {
      ppIStack_1 = (IGizmoCap2DController__Class **)0x0;
      puStack_5 = (undefined *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pIVar3->vector[uVar4] != (IGizmoCap2DController *)0x0) {
      ppIStack_1 = (IGizmoCap2DController__Class **)sliderEndPt.y;
      puStack_5 = (undefined *)sliderEndPt.x;
      puStack_7 = (undefined *)sliderDirection.y;
      func_?(2,TypeInfo__RTG__IGizmoCap2DController,pIVar3->vector[uVar4],sliderDirection.x
                     );
      return;
    }
  }
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
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pIVar3 = (this->fields)._controllers;
  if (((pGVar2 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar3 != (IGizmoCap2DController__Array *)0x0)) {
    uVar4 = (pGVar2->fields)._capType;
    if (pIVar3->max_length <= uVar4) {
      ppIStack_1 = (IGizmoCap2DController__Class **)0x0;
      puStack_5 = (undefined *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pIVar3->vector[uVar4] != (IGizmoCap2DController *)0x0) {
      ppIStack_1 = (IGizmoCap2DController__Class **)sliderEndPt.y;
      puStack_5 = (undefined *)sliderEndPt.x;
      puStack_7 = (undefined *)sliderDirection.y;
      func_?(3,TypeInfo__RTG__IGizmoCap2DController,pIVar3->vector[uVar4],sliderDirection.x
                     );
      return;
    }
  }
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
  pGVar2 = (this->fields)._sharedLookAndFeel;
  if ((pGVar2 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0)) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._arrowBaseRadius;
}


/* Single GetRealArrowHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealArrowHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  if ((pGVar2 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0)) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._arrowHeight;
}


/* Single GetRealCircleRadius() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealCircleRadius
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  if ((pGVar2 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0)) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._circleRadius;
}


/* Single GetRealQuadHeight() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadHeight
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  if ((pGVar2 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0)) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._quadHeight;
}


/* Single GetRealQuadWidth() */

float Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_GetRealQuadWidth
                (GizmoCap2D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._sharedLookAndFeel;
  if ((pGVar2 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0)) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    fVar6 = (float10)(*pcVar5)();
    return (float)fVar6;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._quadWidth;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPostEnabled
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._capType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoCap2DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._capType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
          return;
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


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_OnGizmoPreUpdateBegin
               (GizmoCap2D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap2DController);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar2 = (this->fields)._controllers, pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
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
  pGVar2 = (this->fields)._sharedLookAndFeel;
  pIVar3 = (this->fields)._controllers;
  if (((pGVar2 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar3 != (IGizmoCap2DController__Array *)0x0)) {
    uVar4 = (pGVar2->fields)._capType;
    if (pIVar3->max_length <= uVar4) {
      pIStack_1 = (IGizmoCap2DController *)0x0;
      pIStack_5 = (IGizmoCap2DController__Class *)func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIStack_1 = pIVar3->vector[uVar4];
    if (pIStack_1 != (IGizmoCap2DController *)0x0) {
      pIStack_5 = TypeInfo__RTG__IGizmoCap2DController;
      puStack_7 = (undefined *)0x1;
      func_?();
      return;
    }
  }
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
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pIVar2 = (this->fields)._controllers;
  if (((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
      (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoCap2DLookAndFeel *)0x0)) &&
     (pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
    uVar3 = (pGVar1->fields)._capType;
    if (pIVar2->max_length <= uVar3) goto code_?;
    if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
      func_?(0,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
      pGVar1 = (this->fields)._sharedLookAndFeel;
      pIVar2 = (this->fields)._controllers;
      if (((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
          (pGVar1 = (this->fields)._lookAndFeel, pGVar1 != (GizmoCap2DLookAndFeel *)0x0)) &&
         (pIVar2 != (IGizmoCap2DController__Array *)0x0)) {
        uVar3 = (pGVar1->fields)._capType;
        if (pIVar2->max_length <= uVar3) goto code_?;
        if (pIVar2->vector[uVar3] != (IGizmoCap2DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoCap2DController,pIVar2->vector[uVar3]);
          return;
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
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pGVar2 = pGVar1;
  if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0))
  goto code_?;
  if ((pGVar2->fields)._fillMode == 2) {
code_?:
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
    if ((pGVar3->fields)._isActive == 0) {
      if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
         (pGVar1 = (this->fields)._lookAndFeel, pGVar1 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      fVar4 = (pGVar1->fields)._color.r;
      fStack_5 = (pGVar1->fields)._color.g;
      fStack_6 = (pGVar1->fields)._color.b;
      fStack_7 = (pGVar1->fields)._color.a;
      pGVar8 = (this->fields)._._gizmo;
      if (pGVar8 == (Gizmo *)0x0) goto code_?;
      pvVar9 = (void *)UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                       PointerCaptureEventBase`1[System::Object]::
                       PointerCaptureEventBase_1_System_Object__get_pointerId
                                 ((PointerCaptureEventBase_1_System_Object_ *)pGVar8,
                                  (MethodInfo *)0x0);
      pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)this,(MethodInfo *)0x0);
      if (pvVar9 == pvVar10) {
        pGVar1 = (this->fields)._sharedLookAndFeel;
        if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
           (pGVar1 = (this->fields)._lookAndFeel, pGVar1 == (GizmoCap2DLookAndFeel *)0x0))
        goto code_?;
        fVar4 = (pGVar1->fields)._hoveredColor.r;
        fStack_5 = (pGVar1->fields)._hoveredColor.g;
        fStack_6 = (pGVar1->fields)._hoveredColor.b;
        fStack_7 = (pGVar1->fields)._hoveredColor.a;
      }
    }
    else {
      fVar4 = (pGVar3->fields)._color.r;
      fStack_5 = (pGVar3->fields)._color.g;
      fStack_6 = (pGVar3->fields)._color.b;
      fStack_7 = (pGVar3->fields)._color.a;
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
    color.g = fStack_5;
    color.r = fVar4;
    color.b = fStack_6;
    color.a = fStack_7;
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_00,color,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._._handle;
    if (pGVar11 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render2DSolid(pGVar11,camera,(MethodInfo *)0x0);
  }
  else {
    pGVar2 = pGVar1;
    if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
       (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0))
    goto code_?;
    if ((pGVar2->fields)._fillMode == 0) goto code_?;
  }
  pGVar1 = (this->fields)._sharedLookAndFeel;
  pGVar2 = pGVar1;
  if ((pGVar1 != (GizmoCap2DLookAndFeel *)0x0) ||
     (pGVar2 = (this->fields)._lookAndFeel, pGVar2 != (GizmoCap2DLookAndFeel *)0x0)) {
    if ((pGVar2->fields)._fillMode != 2) {
      pGVar2 = pGVar1;
      if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
         (pGVar2 = (this->fields)._lookAndFeel, pGVar2 == (GizmoCap2DLookAndFeel *)0x0))
      goto code_?;
      if ((pGVar2->fields)._fillMode != 1) {
        return;
      }
    }
    pGVar3 = (this->fields)._overrideFillColor;
    if (pGVar3 != (GizmoOverrideColor *)0x0) {
      if ((pGVar3->fields)._isActive == 0) {
        if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
           (pGVar1 = (this->fields)._lookAndFeel, pGVar1 == (GizmoCap2DLookAndFeel *)0x0))
        goto code_?;
        fVar4 = (pGVar1->fields)._borderColor.r;
        fStack_5 = (pGVar1->fields)._borderColor.g;
        fStack_6 = (pGVar1->fields)._borderColor.b;
        fStack_7 = (pGVar1->fields)._borderColor.a;
        pGVar8 = (this->fields)._._gizmo;
        if (pGVar8 == (Gizmo *)0x0) goto code_?;
        pvVar9 = (void *)UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                         PointerCaptureEventBase`1[System::Object]::
                         PointerCaptureEventBase_1_System_Object__get_pointerId
                                   ((PointerCaptureEventBase_1_System_Object_ *)pGVar8,
                                    (MethodInfo *)0x0);
        pvVar10 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)this,(MethodInfo *)0x0);
        if (pvVar9 == pvVar10) {
          pGVar1 = (this->fields)._sharedLookAndFeel;
          if ((pGVar1 == (GizmoCap2DLookAndFeel *)0x0) &&
             (pGVar1 = (this->fields)._lookAndFeel, pGVar1 == (GizmoCap2DLookAndFeel *)0x0))
          goto code_?;
          fVar4 = (pGVar1->fields)._hoveredBorderColor.r;
          fStack_5 = (pGVar1->fields)._hoveredBorderColor.g;
          fStack_6 = (pGVar1->fields)._hoveredBorderColor.b;
          fStack_7 = (pGVar1->fields)._hoveredBorderColor.a;
        }
      }
      else {
        pGVar3 = (this->fields)._overrideBorderColor;
        if (pGVar3 == (GizmoOverrideColor *)0x0) goto code_?;
        fVar4 = (pGVar3->fields)._color.r;
        fStack_5 = (pGVar3->fields)._color.g;
        fStack_6 = (pGVar3->fields)._color.b;
        fStack_7 = (pGVar3->fields)._color.a;
      }
      if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      }
      this_01 = (GizmoLineMaterial *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (this_01 != (GizmoLineMaterial *)0x0) {
        GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                  (this_01,(MethodInfo *)0x0);
        color_00.g = fStack_5;
        color_00.r = fVar4;
        color_00.b = fStack_6;
        color_00.a = fStack_7;
        GizmoLineMaterial::GizmoLineMaterial_SetColor(this_01,color_00,(MethodInfo *)0x0);
        GizmoLineMaterial::GizmoLineMaterial_SetPass(this_01,0,(MethodInfo *)0x0);
        pGVar11 = (this->fields)._._handle;
        if (pGVar11 != (GizmoHandle *)0x0) {
          GizmoHandle::GizmoHandle_Render2DWire(pGVar11,camera,(MethodInfo *)0x0);
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
  ppQVar1 = &(this->fields)._quad;
  *ppQVar1 = this_00;
  func_?(ppQVar1,this_00);
  this_01 = (CircleShape2D *)func_?(TypeInfo__RTG__CircleShape2D);
  CircleShape2D::CircleShape2D__ctor(this_01,(MethodInfo *)0x0);
  ppCVar2 = &(this->fields)._circle;
  *ppCVar2 = this_01;
  func_?(ppCVar2,this_01);
  this_02 = (ConeShape2D *)func_?(TypeInfo__RTG__ConeShape2D);
  ConeShape2D::ConeShape2D__ctor(this_02,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields)._arrow;
  *ppCVar3 = this_02;
  func_?(ppCVar3,this_02);
  pGVar4 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(pGVar4,(MethodInfo *)0x0);
  (this->fields)._transform = pGVar4;
  func_?();
  pGStack_5 = TypeInfo__RTG__GizmoOverrideColor;
  pGVar6 = (GizmoOverrideColor *)func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar6,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._overrideFillColor;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
  pGVar6 = (GizmoOverrideColor *)func_?(TypeInfo__RTG__GizmoOverrideColor);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pGVar6,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._overrideBorderColor;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
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
    pIVar8 = (IGizmoCap2DController__Array *)func_?();
    handleId_00 = &(this->fields)._controllers;
    *handleId_00 = pIVar8;
    func_?();
    gizmo_00 = TypeInfo__RTG__GizmoCap2DLookAndFeel;
    value = (GizmoCap2DLookAndFeel *)func_?();
    fVar9 = _UNK_?;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    (value->fields)._fillMode = 2;
    (value->fields)._scale = 1.0;
    (value->fields)._circleRadius = 12.0;
    (value->fields)._quadWidth = 25.0;
    (value->fields)._quadHeight = 25.0;
    (value->fields)._arrowBaseRadius = 5.0;
    (value->fields)._arrowHeight = 20.0;
    (value->fields)._color.r = fVar12;
    (value->fields)._color.g = fVar11;
    (value->fields)._color.b = fVar10;
    (value->fields)._color.a = fVar9;
    pCVar13 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&pGStack_5,(MethodInfo *)0x0);
    fVar12 = pCVar13->g;
    fVar11 = pCVar13->b;
    fVar10 = pCVar13->a;
    (value->fields)._hoveredColor.r = pCVar13->r;
    (value->fields)._hoveredColor.g = fVar12;
    (value->fields)._hoveredColor.b = fVar11;
    (value->fields)._hoveredColor.a = fVar10;
    fVar10 = _UNK_?;
    fVar11 = _UNK_?;
    fVar12 = _UNK_?;
    (value->fields)._borderColor.r = _UNK_?;
    (value->fields)._borderColor.g = fVar12;
    (value->fields)._borderColor.b = fVar11;
    (value->fields)._borderColor.a = fVar10;
    pCVar13 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&pGStack_5,(MethodInfo *)0x0);
    fVar12 = pCVar13->g;
    fVar11 = pCVar13->b;
    fVar10 = pCVar13->a;
    (value->fields)._hoveredBorderColor.r = pCVar13->r;
    (value->fields)._hoveredBorderColor.g = fVar12;
    (value->fields)._hoveredBorderColor.b = fVar11;
    (value->fields)._hoveredBorderColor.a = fVar10;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)gizmo_00);
    (this->fields)._lookAndFeel = value;
    func_?();
    GizmoCap::GizmoCap__ctor
              ((GizmoCap *)this,(Gizmo *)gizmo_00,(int32_t)handleId_00,(MethodInfo *)0x0);
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape(pGVar14,(Shape2D *)*ppQVar1,(MethodInfo *)0x0);
    (this->fields)._quadIndex = iVar15;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._circle,(MethodInfo *)0x0);
    (this->fields)._circleIndex = iVar15;
    pGVar14 = (this->fields)._._handle;
    if (pGVar14 == (GizmoHandle *)0x0) goto code_?;
    iVar15 = GizmoHandle::GizmoHandle_Add2DShape
                       (pGVar14,(Shape2D *)(this->fields)._arrow,(MethodInfo *)0x0);
    (this->fields)._arrowIndex = iVar15;
    method_02 = TypeInfo__RTG__GizmoCap2DControllerData;
    pGVar16 = (GizmoCap2DControllerData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pGVar16,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    ppGVar17 = &(this->fields)._controllerData;
    *ppGVar17 = pGVar16;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).Cap = this;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).CapHandle = (this->fields)._._handle;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).Quad = (this->fields)._quad;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).QuadIndex = (this->fields)._quadIndex;
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).Circle = (this->fields)._circle;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).CircleIndex = (this->fields)._circleIndex;
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).Arrow = (this->fields)._arrow;
    func_?();
    if (*ppGVar17 == (GizmoCap2DControllerData *)0x0) goto code_?;
    ((*ppGVar17)->fields).ArrowIndex = (this->fields)._arrowIndex;
    pIVar8 = (this->fields)._controllers;
    pIVar18 = (IGizmoCap2DController__Class *)*ppGVar17;
    method_03 = TypeInfo__RTG__GizmoQuadCap2DController;
    value_00 = (IGizmoCap2DController *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
    value_00[1].klass = pIVar18;
    func_?();
    if (pIVar8 == (IGizmoCap2DController__Array *)0x0) goto code_?;
    iVar19 = func_?();
    if (iVar19 == 0) goto code_?;
    if (pIVar8->max_length == 0) goto code_?;
    pIVar8->vector[0] = value_00;
    func_?();
    method_01 = TypeInfo__RTG__GizmoCircleCap2DController;
    pIVar8 = (this->fields)._controllers;
    pGVar16 = *ppGVar17;
    pOVar20 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar20,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    _UNK_? = pGVar16;
    func_?();
    if (pIVar8 == (IGizmoCap2DController__Array *)0x0) goto code_?;
    iVar19 = func_?();
    if (iVar19 == 0) goto code_?;
    if (pIVar8->max_length < 2) goto code_?;
    pIVar8->vector[1] = (IGizmoCap2DController *)&UNK_?;
    func_?();
    method_00 = TypeInfo__RTG__GizmoArrowCap2DController;
    pOVar21 = (Object__Class *)*ppGVar17;
    pOVar20 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar20,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pOVar20[1].klass = pOVar21;
    func_?();
    iVar19 = func_?();
    if (iVar19 != 0) {
      if (_UNK_? < 3) goto code_?;
      _UNK_? = pOVar20;
      func_?();
      if ((pOVar20 + 1 != (Object *)0x0) &&
         (pGVar4 = (this->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
        GizmoTransform::GizmoTransform_SetParent
                  (pGVar4,(GizmoTransform *)pOVar20[0x20].klass,(MethodInfo *)0x0);
        pGVar4 = (this->fields)._transform;
        value_01 = (GizmoEntityTransformChangedHandler *)func_?();
        Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
        SerializationCallback__ctor
                  ((SerializationCallback *)value_01,(Object *)this,
                   MethodInfo__RTG__GizmoCap2D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   ,(MethodInfo *)0x0);
        if (pGVar4 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_add_Changed(pGVar4,value_01,(MethodInfo *)0x0);
          pGVar22 = (this->fields)._._gizmo;
          value_02 = (GizmoPreUpdateBeginHandler *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
          VideoCapture+OnVideoCaptureResourceCreatedCallback::
          VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                    ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_02,(Object *)this,
                     MethodInfo__RTG__GizmoCap2D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                     (MethodInfo *)0x0);
          if (pGVar22 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreUpdateBegin(pGVar22,value_02,(MethodInfo *)0x0);
            pGVar22 = (this->fields)._._gizmo;
            value_03 = (GizmoPostEnabledHandler *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_03,(Object *)this
                       ,MethodInfo__RTG__GizmoCap2D__OnGizmoPostEnabled_RTG__Gizmo_,
                       (MethodInfo *)0x0);
            if (pGVar22 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PostEnabled(pGVar22,value_03,(MethodInfo *)0x0);
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
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* GizmoCap2DLookAndFeel get_LookAndFeel() */

GizmoCap2DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoCap2D::GizmoCap2D_get_LookAndFeel
          (GizmoCap2D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._sharedLookAndFeel;
  if (pGVar1 != (GizmoCap2DLookAndFeel *)0x0) {
    return pGVar1;
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

