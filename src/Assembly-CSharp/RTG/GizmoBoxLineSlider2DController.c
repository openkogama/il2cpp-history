
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateEpsilons
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    this_00 = (pGVar1->fields).Quad;
    if (pGVar2 != (GizmoLineSlider2D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoLineSlider2DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      value = Vector2Ex::Vector2Ex_FromValue((pGVar3->fields)._boxHoverEps,(MethodInfo *)0x0);
      if (this_00 != (QuadShape2D *)0x0) {
        QuadShape2D::QuadShape2D_set_SizeEps(this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateHandles
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).SegmentIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider2D *)0x0 &&
        (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).QuadIndex,(pGVar3->fields)._._isVisible,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateTransforms
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    this_00 = (TriangPrismShape3D *)(pGVar1->fields).Quad;
    this_01 = (((this->fields)._._data)->fields).Slider;
    if (this_01 != (GizmoLineSlider2D *)0x0) {
      fVar2 = GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength(this_01,(MethodInfo *)0x0);
      axis = GizmoLineSlider2D::GizmoLineSlider2D_GetRealDirection(this_01,(MethodInfo *)0x0);
      fVar3 = axis.x;
      fVar4 = axis.y;
      if (this_00 != (TriangPrismShape3D *)0x0) {
        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                  ((RightAngTriangle2D *)this_00,fVar2,(MethodInfo *)0x0);
        if ((this_01->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
          pGVar5 = (this_01->fields)._lookAndFeel;
          if (pGVar5 == (GizmoLineSlider2DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar5 = (this_01->fields)._sharedLookAndFeel;
        }
        TriangPrismShape3D::TriangPrismShape3D_set_Width
                  (this_00,(pGVar5->fields)._boxThickness * (pGVar5->fields)._scale,
                   (MethodInfo *)0x0);
        pTVar6 = this_00;
        QuadShape2D::QuadShape2D_AlignWidth((QuadShape2D *)this_00,axis,(MethodInfo *)0x0);
        pGVar7 = (this_01->fields)._transform;
        if (pGVar7 != (GizmoTransform *)0x0) {
          fVar3 = fVar3 * _UNK_?;
          fVar2 = (pGVar7->fields)._position2D.y;
          (this_00->fields)._baseCenter.x =
               (float)pTVar6 * _UNK_? * fVar4 + (pGVar7->fields)._position2D.x;
          (this_00->fields)._baseCenter.y = fVar3 * fVar4 + fVar2;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

