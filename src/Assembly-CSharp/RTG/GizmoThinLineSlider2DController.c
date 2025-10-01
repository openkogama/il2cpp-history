
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateEpsilons
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Segment;
    pGVar2 = (pGVar1->fields).Slider;
    if (((pGVar2 != (GizmoLineSlider2D *)0x0) &&
        (pGVar3 = (&(pGVar2->fields)._settings)
                  [(pGVar2->fields)._sharedSettings != (GizmoLineSlider2DSettings *)0x0],
        pGVar3 != (GizmoLineSlider2DSettings *)0x0)) && (this_00 != (SegmentShape2D *)0x0)) {
      SegmentShape2D::SegmentShape2D_set_PtOnSegmentEps
                (this_00,(pGVar3->fields)._lineHoverEps,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateHandles
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider2D *)0x0 &&
        (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).SegmentIndex,(pGVar3->fields)._._isVisible,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateTransforms
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Slider;
    if ((this_00 != (GizmoLineSlider2D *)0x0) &&
       (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
      this_01 = (pGVar1->fields).Segment;
      if (this_01 != (SegmentShape2D *)0x0) {
        SegmentShape2D::SegmentShape2D_set_StartPoint
                  (this_01,(pGVar2->fields)._position2D,(MethodInfo *)0x0);
        this_02 = (this_00->fields)._directionAxisMap;
        if (this_02 != (GizmoTransformAxisMap2D *)0x0) {
          dirDromStart = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                                   (this_02,(MethodInfo *)0x0);
          offset = GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength(this_00,(MethodInfo *)0x0);
          SegmentShape2D::SegmentShape2D_SetEndPtFromStart
                    ((SegmentShape2D *)dirDromStart.y,dirDromStart,offset,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

