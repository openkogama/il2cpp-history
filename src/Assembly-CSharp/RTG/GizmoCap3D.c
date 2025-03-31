
/* Void AlignTransformAxis(Int32, AxisSign, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_AlignTransformAxis
               (GizmoCap3D *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector3 axis,
               MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_AlignAxis3D(this_00,axisIndex,axisSign,axis,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ApplyZoomFactor(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_ApplyZoomFactor
               (GizmoCap3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
code_?:
    if ((pGVar1->fields)._useZoomFactor == 0) {
      return;
    }
    pIVar2 = (this->fields)._controllers;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar1->fields)._capType;
      if (pIVar2->max_length <= uVar3) goto code_?;
      pIVar4 = pIVar2->vector[uVar3];
      if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
        pGVar1 = (this->fields)._lookAndFeel;
        if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar1 = (this->fields)._sharedLookAndFeel;
      }
      fVar5 = _UNK_?;
      if ((pGVar1->fields)._useZoomFactor != 0) {
        this_00 = (this->fields)._._handle;
        if (this_00 == (GizmoHandle *)0x0) goto code_?;
        fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_00,camera,(MethodInfo *)0x0);
      }
      if (pIVar4 != (IGizmoCap3DController *)0x0) {
        func_?(1,TypeInfo__RTG__IGizmoCap3DController,pIVar4,fVar5);
        return;
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


/* Void CapSlider3D(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_CapSlider3D
               (GizmoCap3D *this,Vector3 sliderDirection,Vector3 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      pIVar4 = pIVar1->vector[uVar3];
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar2 = (this->fields)._lookAndFeel;
          if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar2 = (this->fields)._sharedLookAndFeel;
        }
        fVar5 = _UNK_?;
        if ((pGVar2->fields)._useZoomFactor != 0) {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar4 != (IGizmoCap3DController *)0x0) {
          func_?(2,TypeInfo__RTG__IGizmoCap3DController,pIVar4,sliderDirection._0_8_,
                          sliderDirection.z,sliderEndPt._0_8_,sliderEndPt.z,fVar5);
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


/* Void CapSlider3DInvert(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_CapSlider3DInvert
               (GizmoCap3D *this,Vector3 sliderDirection,Vector3 sliderEndPt,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      pIVar4 = pIVar1->vector[uVar3];
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar2 = (this->fields)._lookAndFeel;
          if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar2 = (this->fields)._sharedLookAndFeel;
        }
        fVar5 = _UNK_?;
        if ((pGVar2->fields)._useZoomFactor != 0) {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar4 != (IGizmoCap3DController *)0x0) {
          func_?(3,TypeInfo__RTG__IGizmoCap3DController,pIVar4,sliderDirection._0_8_,
                          sliderDirection.z,sliderEndPt._0_8_,sliderEndPt.z,fVar5);
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


/* Single GetRealBoxDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._boxDepth * zoomFactor;
}


/* Single GetRealBoxHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._boxHeight * zoomFactor;
}


/* Vector3 GetRealBoxSize(Single) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxSize
                    (Vector3 *__return_storage_ptr__,GizmoCap3D *this,float zoomFactor,
                    MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar1->fields)._useZoomFactor == 0) {
    zoomFactor = _UNK_?;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
  }
  fVar4 = (pGVar1->fields)._boxDepth;
  fVar5 = (pGVar1->fields)._scale;
  fVar6 = (pGVar1->fields)._boxHeight;
  __return_storage_ptr__->x = fVar5 * (pGVar1->fields)._boxWidth * zoomFactor;
  __return_storage_ptr__->y = fVar5 * fVar6 * zoomFactor;
  __return_storage_ptr__->z = fVar4 * fVar5 * zoomFactor;
  return __return_storage_ptr__;
}


/* Single GetRealBoxWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealBoxWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._boxWidth * zoomFactor;
}


/* Single GetRealConeHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealConeHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._coneHeight * zoomFactor;
}


/* Single GetRealConeRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealConeRadius
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._coneRadius * zoomFactor;
}


/* Single GetRealPyramidDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._pyramidDepth * zoomFactor;
}


/* Single GetRealPyramidHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._pyramidHeight * zoomFactor;
}


/* Single GetRealPyramidWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealPyramidWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._pyramidWidth * zoomFactor;
}


/* Single GetRealSphereRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealSphereRadius
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._sphereRadius * zoomFactor;
}


/* Single GetRealTriPrismDepth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._trPrismDepth * zoomFactor;
}


/* Single GetRealTriPrismHeight(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismHeight
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._trPrismHeight * zoomFactor;
}


/* Single GetRealTriPrismWidth(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetRealTriPrismWidth
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar2->fields)._useZoomFactor == 0) {
    zoomFactor = 1.0;
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
code_?:
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      fVar6 = (float10)(*pcVar5)();
      return (float)fVar6;
    }
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
  }
  return (pGVar2->fields)._scale * (pGVar2->fields)._trPrismWidth * zoomFactor;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_GetSliderAlignedRealLength
                (GizmoCap3D *this,float zoomFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      pIVar4 = pIVar1->vector[uVar3];
      if (pIVar4 != (IGizmoCap3DController *)0x0) {
        pIVar5 = pIVar4->klass;
        uVar6 = 0;
        uVar7._0_1_ = (pIVar5->_1).rank;
        uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
        if (uVar7 != 0) {
          do {
            if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                (Il2CppClass *)TypeInfo__RTG__IGizmoCap3DController) {
              ppMVar8 = &(&(pIVar4->klass->vtable).GetSliderAlignedRealLength)
                         [pIVar4->klass->interfaceOffsets[uVar6].offset].method;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        ppMVar8 = (MethodInfo **)func_?(pIVar4,TypeInfo__RTG__IGizmoCap3DController,4);
code_?:
        fVar9 = (float10)(*(code *)*ppMVar8)(pIVar4,zoomFactor,ppMVar8[1]);
        return (float)fVar9;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  fVar9 = (float10)(*pcVar10)();
  return (float)fVar9;
}

/* decompilation failed: Exception while decompiling 10519320: Decompiler process died */


/* Void OnGizmoPostDisabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPostDisabled
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._overrideColor;
  if (pGVar2 != (GizmoOverrideColor *)0x0) {
    (pGVar2->fields)._isActive = 0;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGizmoPostEnabled(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPostEnabled
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._gizmo;
  if (this_00 != (Gizmo *)0x0) {
    camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    if ((pGVar1->fields)._useZoomFactor != 0) {
      this_01 = (this->fields)._._handle;
      if (this_01 == (GizmoHandle *)0x0) goto code_?;
      GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
    }
    pIVar2 = (this->fields)._controllers;
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar1 = (this->fields)._lookAndFeel;
      if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar1 = (this->fields)._sharedLookAndFeel;
    }
    if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar1->fields)._capType;
      if (pIVar2->max_length <= uVar3) goto code_?;
      if (pIVar2->vector[uVar3] != (IGizmoCap3DController *)0x0) {
        func_?();
        pIVar2 = (this->fields)._controllers;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar1 = (this->fields)._lookAndFeel;
          if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar1 = (this->fields)._sharedLookAndFeel;
        }
        if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
          uVar3 = (pGVar1->fields)._capType;
          if (pIVar2->max_length <= uVar3) goto code_?;
          if (pIVar2->vector[uVar3] != (IGizmoCap3DController *)0x0) {
            func_?();
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

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnGizmoPreUpdateBegin
               (GizmoCap3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar1 = (this->fields)._lookAndFeel;
    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar1 = (this->fields)._sharedLookAndFeel;
code_?:
    pIVar2 = (this->fields)._controllers;
    if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar1->fields)._capType;
      if (pIVar2->max_length <= uVar3) goto code_?;
      if (pIVar2->vector[uVar3] != (IGizmoCap3DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCap3DController,pIVar2->vector[uVar3]);
        pIVar2 = (this->fields)._controllers;
        if (pIVar2 != (IGizmoCap3DController__Array *)0x0) {
          if (pIVar2->max_length <= uVar3) goto code_?;
          pIVar4 = pIVar2->vector[uVar3];
          this_00 = (this->fields)._._gizmo;
          if (this_00 != (Gizmo *)0x0) {
            camera = Gizmo::Gizmo_get_FocusCamera(this_00,(MethodInfo *)0x0);
            if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
              pGVar1 = (this->fields)._lookAndFeel;
              if (pGVar1 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar1 = (this->fields)._sharedLookAndFeel;
            }
            if ((pGVar1->fields)._useZoomFactor != 0) {
              this_01 = (this->fields)._._handle;
              if (this_01 == (GizmoHandle *)0x0) goto code_?;
              GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
            }
            if (pIVar4 != (IGizmoCap3DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoCap3DController);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnHoverableStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnHoverableStateChanged
               (GizmoCap3D *this,MethodInfo *method)

{
  this_00 = (this->fields)._._handle;
  if (this_00 != (GizmoHandle *)0x0) {
    GizmoHandle::GizmoHandle_SetHoverable(this_00,(this->fields)._._isHoverable,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransformChanged(GizmoTransform, GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnTransformChanged
               (GizmoCap3D *this,GizmoTransform *transform,GizmoTransform_ChangeData changeData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  if ((changeData.ChangeReason != 1) && (changeData.TRSDimension != 2)) {
    return;
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      pIVar4 = pIVar1->vector[uVar3];
      this_00 = (this->fields)._._gizmo;
      if (this_00 != (Gizmo *)0x0) {
        camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar2 = (this->fields)._lookAndFeel;
          if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar2 = (this->fields)._sharedLookAndFeel;
        }
        fVar5 = _UNK_?;
        if ((pGVar2->fields)._useZoomFactor != 0) {
          this_01 = (this->fields)._._handle;
          if (this_01 == (GizmoHandle *)0x0) goto code_?;
          fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
        }
        if (pIVar4 != (IGizmoCap3DController *)0x0) {
          func_?(1,TypeInfo__RTG__IGizmoCap3DController,pIVar4,fVar5);
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


/* Void OnVisibilityStateChanged() */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_OnVisibilityStateChanged
               (GizmoCap3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._controllers;
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar2 = (this->fields)._lookAndFeel;
    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar2 = (this->fields)._sharedLookAndFeel;
code_?:
    if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
      uVar3 = (pGVar2->fields)._capType;
      if (pIVar1->max_length <= uVar3) goto code_?;
      if (pIVar1->vector[uVar3] != (IGizmoCap3DController *)0x0) {
        func_?(0,TypeInfo__RTG__IGizmoCap3DController,pIVar1->vector[uVar3]);
        this_00 = (this->fields)._._gizmo;
        if (this_00 != (Gizmo *)0x0) {
          camera = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0);
          pIVar1 = (this->fields)._controllers;
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            pGVar2 = (this->fields)._lookAndFeel;
            if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar2 = (this->fields)._sharedLookAndFeel;
          }
          if (pIVar1 != (IGizmoCap3DController__Array *)0x0) {
            uVar3 = (pGVar2->fields)._capType;
            if (pIVar1->max_length <= uVar3) goto code_?;
            pIVar4 = pIVar1->vector[uVar3];
            if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
              pGVar2 = (this->fields)._lookAndFeel;
              if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
            }
            else {
              pGVar2 = (this->fields)._sharedLookAndFeel;
            }
            fVar5 = _UNK_?;
            if ((pGVar2->fields)._useZoomFactor != 0) {
              this_01 = (this->fields)._._handle;
              if (this_01 == (GizmoHandle *)0x0) goto code_?;
              fVar5 = GizmoHandle::GizmoHandle_GetZoomFactor(this_01,camera,(MethodInfo *)0x0);
            }
            if (pIVar4 != (IGizmoCap3DController *)0x0) {
              func_?(1,TypeInfo__RTG__IGizmoCap3DController,pIVar4,fVar5);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RegisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_RegisterTransformAsDragTarget
               (GizmoCap3D *this,IGizmoDragSession *dragSession,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_Render
               (GizmoCap3D *this,Camera *camera,MethodInfo *method)

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
  pGVar1 = (this->fields)._overrideColor;
  if (pGVar1 == (GizmoOverrideColor *)0x0) goto code_?;
  if ((pGVar1->fields)._isActive == 0) {
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 == (Gizmo *)0x0) goto code_?;
    bVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::ChangeEvent`1[System::
            Boolean]::ChangeEvent_1_System_Boolean__get_previousValue
                      ((ChangeEvent_1_System_Boolean_ *)pGVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 == (Gizmo *)0x0) goto code_?;
      pvVar4 = (void *)(pGVar2->fields)._hoverInfo._handleId;
      pvVar5 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)this,(MethodInfo *)0x0);
      if (pvVar4 == pvVar5) {
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar6 = (this->fields)._lookAndFeel;
          if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          fVar7 = (pGVar6->fields)._hoveredColor.r;
          fVar8 = (pGVar6->fields)._hoveredColor.g;
          fVar9 = (pGVar6->fields)._hoveredColor.b;
          fVar10 = (pGVar6->fields)._hoveredColor.a;
        }
        else {
          pGVar6 = (this->fields)._sharedLookAndFeel;
          fVar7 = (pGVar6->fields)._hoveredColor.r;
          fVar8 = (pGVar6->fields)._hoveredColor.g;
          fVar9 = (pGVar6->fields)._hoveredColor.b;
          fVar10 = (pGVar6->fields)._hoveredColor.a;
        }
        goto code_?;
      }
    }
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar6 = (this->fields)._lookAndFeel;
      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar6 = (this->fields)._sharedLookAndFeel;
    }
    fVar7 = (pGVar6->fields)._color.r;
    fVar8 = (pGVar6->fields)._color.g;
    fVar9 = (pGVar6->fields)._color.b;
    fVar10 = (pGVar6->fields)._color.a;
  }
  else {
    fVar7 = (pGVar1->fields)._color.r;
    fVar8 = (pGVar1->fields)._color.g;
    fVar9 = (pGVar1->fields)._color.b;
    fVar10 = (pGVar1->fields)._color.a;
  }
code_?:
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar6 = (this->fields)._lookAndFeel;
    if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar6 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar6->fields)._fillMode == 0) {
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar6 = (this->fields)._lookAndFeel;
      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar6 = (this->fields)._sharedLookAndFeel;
    }
    fVar11 = (float)(pGVar6->fields)._shadeMode;
    isLit = fVar11 == 0.0;
    if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    }
    this_00 = (GizmoSolidMaterial *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__get_Get__);
    if (this_00 == (GizmoSolidMaterial *)0x0) goto code_?;
    GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults(this_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetLit(this_00,isLit,(MethodInfo *)0x0);
    if (fVar11 == 0.0) {
      if ((camera == (Camera *)0x0) ||
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0), this_01 == (Transform *)0x0))
      goto code_?;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection(this_00,*pVVar12,(MethodInfo *)0x0);
    }
    color_00.g = fVar8;
    color_00.r = fVar7;
    color_00.b = fVar9;
    color_00.a = fVar10;
    GizmoSolidMaterial::GizmoSolidMaterial_SetColor(this_00,color_00,(MethodInfo *)0x0);
    GizmoSolidMaterial::GizmoSolidMaterial_SetPass(this_00,0,(MethodInfo *)0x0);
    pGVar13 = (this->fields)._._handle;
    if (pGVar13 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render3DSolid(pGVar13,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    }
    pGVar14 = (GizmoLineMaterial *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    if (pGVar14 == (GizmoLineMaterial *)0x0) goto code_?;
    GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar14,(MethodInfo *)0x0);
    color.g = fVar8;
    color.r = fVar7;
    color.b = fVar9;
    color.a = fVar10;
    GizmoLineMaterial::GizmoLineMaterial_SetColor(pGVar14,color,(MethodInfo *)0x0);
    GizmoLineMaterial::GizmoLineMaterial_SetPass(pGVar14,0,(MethodInfo *)0x0);
    pGVar13 = (this->fields)._._handle;
    if (pGVar13 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_Render3DWire(pGVar13,(MethodInfo *)0x0);
  }
  if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
    pGVar6 = (this->fields)._lookAndFeel;
    if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pGVar6 = (this->fields)._sharedLookAndFeel;
  }
  if ((pGVar6->fields)._capType == 3) {
    if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar6 = (this->fields)._lookAndFeel;
      if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar6 = (this->fields)._sharedLookAndFeel;
    }
    if ((pGVar6->fields)._isSphereBorderVisible != 0) {
      if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
      }
      pGVar14 = (GizmoLineMaterial *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
      if (pGVar14 != (GizmoLineMaterial *)0x0) {
        GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults(pGVar14,(MethodInfo *)0x0)
        ;
        if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar6 = (this->fields)._lookAndFeel;
          if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar6 = (this->fields)._sharedLookAndFeel;
        }
        GizmoLineMaterial::GizmoLineMaterial_SetColor
                  (pGVar14,(pGVar6->fields)._sphereBorderColor,(MethodInfo *)0x0);
        GizmoLineMaterial::GizmoLineMaterial_SetPass(pGVar14,0,(MethodInfo *)0x0);
        pGVar15 = (this->fields)._transform;
        if (pGVar15 != (GizmoTransform *)0x0) {
          method_00 = (MethodInfo *)(pGVar15->fields)._position3D.x;
          fVar7 = (pGVar15->fields)._position3D.z;
          fVar8 = GizmoCap3D_GetZoomFactor(this,camera,method_00);
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            pGVar6 = (this->fields)._lookAndFeel;
            if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar6 = (this->fields)._sharedLookAndFeel;
          }
          if ((pGVar6->fields)._useZoomFactor == 0) {
            fVar8 = _UNK_?;
          }
          if ((this->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            pGVar6 = (this->fields)._lookAndFeel;
            if (pGVar6 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar6 = (this->fields)._sharedLookAndFeel;
          }
          fVar8 = (pGVar6->fields)._sphereRadius * (pGVar6->fields)._scale * fVar8;
          sphereCenter.y = fVar8;
          sphereCenter.x = (float)method_00;
          sphereCenter.z = fVar7;
          GLRenderer::GLRenderer_DrawSphereBorder
                    (camera,sphereCenter,fVar8,(pGVar6->fields)._numSphereBorderPoints,
                     (MethodInfo *)0x0);
          return;
        }
      }
code_?:
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_SetZoomFactorTransform
               (GizmoCap3D *this,GizmoTransform *transform,MethodInfo *method)

{
  pGVar1 = (this->fields)._._handle;
  if (pGVar1 != (GizmoHandle *)0x0) {
    if (transform != (GizmoTransform *)0x0) {
      pGStack_2 = transform;
      (pGVar1->fields)._zoomFactorTransform = transform;
      ppGStack_3 = &(pGVar1->fields)._zoomFactorTransform;
      func_?();
      return;
    }
    pGVar4 = (pGVar1->fields)._gizmo;
    if (pGVar4 != (Gizmo *)0x0) {
      pGStack_2 = (pGVar4->fields)._transform;
      (pGVar1->fields)._zoomFactorTransform = pGStack_2;
      ppGStack_3 = &(pGVar1->fields)._zoomFactorTransform;
      func_?();
      return;
    }
  }
  pGStack_2 = (GizmoTransform *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnregisterTransformAsDragTarget(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_UnregisterTransformAsDragTarget
               (GizmoCap3D *this,IGizmoDragSession *dragSession,MethodInfo *method)

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


/* GizmoCap3D(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D__ctor
               (GizmoCap3D *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxShape3D);
    func_?(&TypeInfo__RTG__ConeShape3D);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GizmoBoxCap3DController);
    func_?(&TypeInfo__RTG__GizmoCap3DControllerData);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeRef__RTG__GizmoCap3DType);
    func_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPostDisabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPostEnabled_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__GizmoCap3D__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&
                    MethodInfo__RTG__GizmoCap3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                   );
    func_?(&TypeInfo__RTG__GizmoConeCap3DController);
    func_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    func_?(&TypeInfo__RTG__GizmoOverrideColor);
    func_?(&TypeInfo__RTG__GizmoPostDisabledHandler);
    func_?(&TypeInfo__RTG__GizmoPostEnabledHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoPyramidCap3DController);
    func_?(&TypeInfo__RTG__GizmoSphereCap3DController);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&TypeInfo__RTG__GizmoTriPrismCap3DController);
    func_?(&TypeInfo__RTG__IGizmoCap3DController);
    func_?(&TypeInfo__RTG__PyramidShape3D);
    func_?(&TypeInfo__RTG__SphereShape3D);
    func_?(&TypeInfo__RTG__TriangPrismShape3D);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  this_00 = (ConeShape3D *)func_?(TypeInfo__RTG__ConeShape3D);
  ConeShape3D::ConeShape3D__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._cone = this_00;
  func_?(&(this->fields)._cone,this_00);
  this_01 = (PyramidShape3D *)func_?(TypeInfo__RTG__PyramidShape3D);
  TriangPrismShape3D::TriangPrismShape3D__ctor((TriangPrismShape3D *)this_01,(MethodInfo *)0x0);
  (this->fields)._pyramid = this_01;
  func_?(&(this->fields)._pyramid,this_01);
  this_02 = (BoxShape3D *)func_?(TypeInfo__RTG__BoxShape3D);
  BoxShape3D::BoxShape3D__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._box = this_02;
  func_?(&(this->fields)._box,this_02);
  this_03 = (SphereShape3D *)func_?(TypeInfo__RTG__SphereShape3D);
  SphereShape3D::SphereShape3D__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._sphere = this_03;
  func_?();
  this_04 = (TriangPrismShape3D *)func_?();
  TriangPrismShape3D::TriangPrismShape3D__ctor(this_04,(MethodInfo *)0x0);
  (this->fields)._trPrism = this_04;
  func_?(&(this->fields)._trPrism,this_04);
  method_02 = TypeInfo__RTG__GizmoCap3DControllerData;
  pGVar1 = (GizmoCap3DControllerData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  (this->fields)._controllerData = pGVar1;
  func_?(&(this->fields)._controllerData,pGVar1);
  handle = TypeRef__RTG__GizmoCap3DType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_05 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_05 == (Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    mscorlib.dll::System::Array::Array_get_Length(this_05,(MethodInfo *)0x0);
    pIVar2 = (IGizmoCap3DController__Array *)func_?();
    (this->fields)._controllers = pIVar2;
    func_?();
    handleId_00 = TypeInfo__RTG__GizmoTransform;
    pGVar3 = (Gizmo *)func_?();
    GizmoTransform::GizmoTransform__ctor((GizmoTransform *)pGVar3,(MethodInfo *)0x0);
    (this->fields)._transform = (GizmoTransform *)pGVar3;
    func_?();
    this_06 = (GizmoOverrideColor *)func_?();
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_06,(MethodInfo *)0x0);
    (this->fields)._overrideColor = this_06;
    func_?();
    method_00 = TypeInfo__RTG__GizmoCap3DLookAndFeel;
    value = (GizmoCap3DLookAndFeel *)func_?();
    fVar4 = _UNK_?;
    fVar5 = _UNK_?;
    fVar6 = _UNK_?;
    fVar7 = _UNK_?;
    (value->fields)._scale = 1.0;
    (value->fields)._useZoomFactor = 1;
    (value->fields)._coneHeight = 1.65;
    (value->fields)._coneRadius = 0.5;
    (value->fields)._pyramidHeight = 1.65;
    (value->fields)._pyramidWidth = 0.8;
    (value->fields)._pyramidDepth = 0.8;
    (value->fields)._boxWidth = 0.7;
    (value->fields)._boxHeight = 0.7;
    (value->fields)._boxDepth = 0.7;
    (value->fields)._sphereRadius = 0.45;
    (value->fields)._trPrismWidth = 1.0;
    (value->fields)._trPrismHeight = 1.0;
    (value->fields)._trPrismDepth = 1.0;
    (value->fields)._numSphereBorderPoints = 100;
    (value->fields)._sphereBorderColor.r = fVar7;
    (value->fields)._sphereBorderColor.g = fVar6;
    (value->fields)._sphereBorderColor.b = fVar5;
    (value->fields)._sphereBorderColor.a = fVar4;
    pCVar8 = RTSystemValues::RTSystemValues_get_XAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar7 = pCVar8->g;
    fVar6 = pCVar8->b;
    fVar5 = pCVar8->a;
    (value->fields)._color.r = pCVar8->r;
    (value->fields)._color.g = fVar7;
    (value->fields)._color.b = fVar6;
    (value->fields)._color.a = fVar5;
    pCVar8 = RTSystemValues::RTSystemValues_get_HoveredAxisColor
                        ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar7 = pCVar8->g;
    fVar6 = pCVar8->b;
    fVar5 = pCVar8->a;
    (value->fields)._hoveredColor.r = pCVar8->r;
    (value->fields)._hoveredColor.g = fVar7;
    (value->fields)._hoveredColor.b = fVar6;
    (value->fields)._hoveredColor.a = fVar5;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields)._lookAndFeel = value;
    func_?();
    GizmoCap::GizmoCap__ctor((GizmoCap *)this,pGVar3,(int32_t)handleId_00,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar9,(Shape3D *)(this->fields)._cone,(MethodInfo *)0x0);
    (this->fields)._coneIndex = iVar10;
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar9,(Shape3D *)(this->fields)._pyramid,(MethodInfo *)0x0);
    (this->fields)._pyramidIndex = iVar10;
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar9,(Shape3D *)(this->fields)._box,(MethodInfo *)0x0);
    (this->fields)._boxIndex = iVar10;
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar9,(Shape3D *)(this->fields)._sphere,(MethodInfo *)0x0);
    (this->fields)._sphereIndex = iVar10;
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    iVar10 = GizmoHandle::GizmoHandle_Add3DShape
                       (pGVar9,(Shape3D *)(this->fields)._trPrism,(MethodInfo *)0x0);
    (this->fields)._trPrismIndex = iVar10;
    pGVar9 = (this->fields)._._handle;
    if (pGVar9 == (GizmoHandle *)0x0) goto code_?;
    GizmoHandle::GizmoHandle_SetZoomFactorTransform
              (pGVar9,(this->fields)._transform,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Gizmo = (this->fields)._._gizmo;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Cap = this;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).CapHandle = (this->fields)._._handle;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Cone = (this->fields)._cone;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).ConeIndex = (this->fields)._coneIndex;
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Pyramid = (this->fields)._pyramid;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).PyramidIndex = (this->fields)._pyramidIndex;
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Box = (this->fields)._box;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).BoxIndex = (this->fields)._boxIndex;
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).Sphere = (this->fields)._sphere;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).SphereIndex = (this->fields)._sphereIndex;
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).TrPrism = (this->fields)._trPrism;
    func_?();
    pGVar1 = (this->fields)._controllerData;
    if (pGVar1 == (GizmoCap3DControllerData *)0x0) goto code_?;
    (pGVar1->fields).TrPrismIndex = (this->fields)._trPrismIndex;
    pIVar2 = (this->fields)._controllers;
    pGVar1 = (this->fields)._controllerData;
    pMVar11 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar11,(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)pGVar1,
               (MethodInfo *)0x0);
    if (pIVar2 == (IGizmoCap3DController__Array *)0x0) goto code_?;
    if (pMVar11 != (MonoBtlsX509VerifyParam *)0x0) {
      iVar12 = func_?();
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar2->max_length == 0) goto code_?;
    pIVar2->vector[0] = (IGizmoCap3DController *)pMVar11;
    func_?();
    pIVar2 = (this->fields)._controllers;
    pGVar1 = (this->fields)._controllerData;
    pMVar11 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar11,(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)pGVar1,
               (MethodInfo *)pMVar11);
    if (pIVar2 == (IGizmoCap3DController__Array *)0x0) goto code_?;
    if (pMVar11 != (MonoBtlsX509VerifyParam *)0x0) {
      iVar12 = func_?();
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar2->max_length < 2) goto code_?;
    pIVar2->vector[1] = (IGizmoCap3DController *)pMVar11;
    func_?();
    pIVar2 = (this->fields)._controllers;
    pIVar13 = (IGizmoCap3DController__Class *)(this->fields)._controllerData;
    method_01 = TypeInfo__RTG__GizmoBoxCap3DController;
    value_00 = (IGizmoCap3DController *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    value_00[1].klass = pIVar13;
    func_?();
    if (pIVar2 == (IGizmoCap3DController__Array *)0x0) goto code_?;
    iVar12 = func_?();
    if (iVar12 == 0) goto code_?;
    if (pIVar2->max_length < 3) goto code_?;
    pIVar2->vector[2] = value_00;
    func_?();
    pIVar2 = (this->fields)._controllers;
    pGVar1 = (this->fields)._controllerData;
    pMVar11 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar11,(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)pGVar1,
               (MethodInfo *)pMVar11);
    if (pIVar2 == (IGizmoCap3DController__Array *)0x0) goto code_?;
    if (pMVar11 != (MonoBtlsX509VerifyParam *)0x0) {
      iVar12 = func_?();
      if (iVar12 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pIVar2->max_length < 4) goto code_?;
    pIVar2->vector[3] = (IGizmoCap3DController *)pMVar11;
    func_?();
    pIVar2 = (this->fields)._controllers;
    pGVar1 = (this->fields)._controllerData;
    pMVar11 = (MonoBtlsX509VerifyParam *)func_?();
    System.dll::Mono::Btls::MonoBtlsX509VerifyParam::MonoBtlsX509VerifyParam__ctor
              (pMVar11,(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle *)pGVar1,
               (MethodInfo *)pMVar11);
    if (pIVar2 == (IGizmoCap3DController__Array *)0x0) goto code_?;
    if (pMVar11 == (MonoBtlsX509VerifyParam *)0x0) {
code_?:
      if (pIVar2->max_length < 5) goto code_?;
      pIVar2->vector[4] = (IGizmoCap3DController *)pMVar11;
      func_?();
      pGVar14 = (this->fields)._transform;
      value_01 = (GizmoEntityTransformChangedHandler *)func_?();
      Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::SerializationCallback::
      SerializationCallback__ctor
                ((SerializationCallback *)value_01,(Object *)this,
                 MethodInfo__RTG__GizmoCap3D__OnTransformChanged_RTG__GizmoTransform__RTG__GizmoTransform__ChangeData_
                 ,(MethodInfo *)0x0);
      if (pGVar14 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_add_Changed(pGVar14,value_01,(MethodInfo *)0x0);
        pGVar3 = (this->fields)._._gizmo;
        if ((pGVar3 != (Gizmo *)0x0) &&
           (pGVar14 = (this->fields)._transform, pGVar14 != (GizmoTransform *)0x0)) {
          GizmoTransform::GizmoTransform_SetParent
                    (pGVar14,(pGVar3->fields)._transform,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._._gizmo;
          value_02 = (GizmoPreUpdateBeginHandler *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
          VideoCapture+OnVideoCaptureResourceCreatedCallback::
          VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                    ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_02,(Object *)this,
                     MethodInfo__RTG__GizmoCap3D__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                     (MethodInfo *)0x0);
          if (pGVar3 != (Gizmo *)0x0) {
            Gizmo::Gizmo_add_PreUpdateBegin(pGVar3,value_02,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._._gizmo;
            value_03 = (GizmoPostEnabledHandler *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
            VideoCapture+OnVideoCaptureResourceCreatedCallback::
            VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                      ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_03,(Object *)this
                       ,MethodInfo__RTG__GizmoCap3D__OnGizmoPostEnabled_RTG__Gizmo_,
                       (MethodInfo *)0x0);
            if (pGVar3 != (Gizmo *)0x0) {
              Gizmo::Gizmo_add_PostEnabled(pGVar3,value_03,(MethodInfo *)0x0);
              pGVar3 = (this->fields)._._gizmo;
              value_04 = (GizmoPostDisabledHandler *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_04,
                         (Object *)this,MethodInfo__RTG__GizmoCap3D__OnGizmoPostDisabled_RTG__Gizmo_
                         ,(MethodInfo *)0x0);
              if (pGVar3 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PostDisabled(pGVar3,value_04,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar12 = func_?();
    if (iVar12 != 0) goto code_?;
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* IGizmoDragSession get_DragSession() */

IGizmoDragSession *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_DragSession
          (GizmoCap3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    return (pGVar2->fields)._DragSession_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IGizmoDragSession *)(*pcVar5)();
  return pIVar6;
}


/* GizmoCap3DLookAndFeel get_LookAndFeel() */

GizmoCap3DLookAndFeel *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_LookAndFeel
          (GizmoCap3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0) {
    return (this->fields)._sharedLookAndFeel;
  }
  return (this->fields)._lookAndFeel;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_Position
                    (Vector3 *__return_storage_ptr__,GizmoCap3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._position3D.y;
    fVar4 = (pGVar2->fields)._position3D.z;
    __return_storage_ptr__->x = (pGVar2->fields)._position3D.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_get_Rotation
          (Quaternion *__return_storage_ptr__,GizmoCap3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._transform;
  if (pGVar2 != (GizmoTransform *)0x0) {
    fVar3 = (pGVar2->fields)._rotation3D.y;
    fVar4 = (pGVar2->fields)._rotation3D.z;
    fVar5 = (pGVar2->fields)._rotation3D.w;
    __return_storage_ptr__->x = (pGVar2->fields)._rotation3D.x;
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


/* Void set_DragSession(IGizmoDragSession) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_DragSession
               (GizmoCap3D *this,IGizmoDragSession *value,MethodInfo *method)

{
  pIStack_1 = (IGizmoDragSession *)&stack0xfffffffc;
  pGVar2 = (this->fields)._._handle;
  if (pGVar2 != (GizmoHandle *)0x0) {
    pIStack_1 = value;
    (pGVar2->fields)._DragSession_k__BackingField = value;
    ppIStack_3 = &(pGVar2->fields)._DragSession_k__BackingField;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_Position
               (GizmoCap3D *this,Vector3 value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Position3D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoCap3D::GizmoCap3D_set_Rotation
               (GizmoCap3D *this,Quaternion value,MethodInfo *method)

{
  this_00 = (this->fields)._transform;
  if (this_00 != (GizmoTransform *)0x0) {
    GizmoTransform::GizmoTransform_set_Rotation3D(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

