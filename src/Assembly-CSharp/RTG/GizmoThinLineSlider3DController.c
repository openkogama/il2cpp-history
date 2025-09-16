
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
      GizmoThinLineSlider3DController_GetRealSizeAlongDirection
                (GizmoThinLineSlider3DController *this,Vector3 direction,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
      (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) &&
     (this_01 = (this_00->fields)._directionAxisMap, this_01 != (GizmoTransformAxisMap3D *)0x0)) {
    pVVar2 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,(MethodInfo *)0x0)
    ;
    v2.y = fVar4 * fVar6;
    v2.x = fVar3 * fVar6;
    v2.z = fVar5 * fVar6;
    fVar3 = Vector3Ex::Vector3Ex_AbsDot(direction,v2,(MethodInfo *)0x0);
    return fVar3;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateEpsilons
               (GizmoThinLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Segment;
    pGVar2 = (((this->fields)._._data)->fields).Slider;
    if (pGVar2 != (GizmoLineSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (SegmentShape3D *)0x0) {
        TriangPrismShape3D::TriangPrismShape3D_set_PtContainEps
                  ((TriangPrismShape3D *)this_00,zoomFactor * (pGVar3->fields)._lineHoverEps,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateHandles
               (GizmoThinLineSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).CylinderIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).BoxIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider3D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).SegmentIndex,(pGVar3->fields)._._isVisible,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateTransforms
               (GizmoThinLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    pSVar2 = (pGVar1->fields).Segment;
    this_00 = (pGVar1->fields).Slider;
    if (((this_00 != (GizmoLineSlider3D *)0x0) &&
        (pGVar3 = (this_00->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) &&
       (pSVar2 != (SegmentShape3D *)0x0)) {
      SegmentShape3D::SegmentShape3D_set_StartPoint
                (pSVar2,(pGVar3->fields)._position3D,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
        pSVar2 = (pGVar1->fields).Segment;
        this_01 = (this_00->fields)._directionAxisMap;
        if (this_01 != (GizmoTransformAxisMap3D *)0x0) {
          pVVar4 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                             ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)pVVar4->y;
          fVar5 = pVVar4->z;
          offset = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,method_00);
          if (pSVar2 != (SegmentShape3D *)0x0) {
            dirDromStart.y = (float)method_00;
            dirDromStart.x = zoomFactor;
            dirDromStart.z = fVar5;
            SegmentShape3D::SegmentShape3D_SetEndPtFromStart
                      (pSVar2,dirDromStart,offset,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

