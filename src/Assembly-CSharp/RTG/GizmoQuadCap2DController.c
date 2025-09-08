
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_CapSlider2D
               (GizmoQuadCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_AlignAxis2D
              (pGVar3,0,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
        (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
       (pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                 [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
       pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) {
      fVar5 = (pGVar4->fields)._quadWidth *
              ((&(pGVar2->fields)._lookAndFeel)
               [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields)._scale
      ;
      pGVar3 = (pGVar2->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        value.y = sliderDirection.y * fVar5 * _UNK_? + sliderEndPt.y;
        value.x = sliderDirection.x * fVar5 * _UNK_? + sliderEndPt.x;
        GizmoTransform::GizmoTransform_set_Position2D(pGVar3,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_CapSlider2DInvert
               (GizmoQuadCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if ((pGVar2 != (GizmoCap2D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      axis.y = (float)((uint)sliderDirection.y ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      axis.x = (float)((uint)sliderDirection.x ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      GizmoTransform::GizmoTransform_AlignAxis2D
                (pGVar3,0,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
         ((pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0 &&
          (pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                    [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
          pGVar4 != (GizmoCap2DLookAndFeel *)0x0)))) {
        fVar5 = (pGVar4->fields)._quadWidth *
                ((&(pGVar2->fields)._lookAndFeel)
                 [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields).
                _scale;
        pGVar3 = (pGVar2->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          value.y = sliderDirection.y * fVar5 * _UNK_? + sliderEndPt.y;
          value.x = sliderDirection.x * fVar5 * _UNK_? + sliderEndPt.x;
          GizmoTransform::GizmoTransform_set_Position2D(pGVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single GetSliderAlignedRealLength() */

float Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::
      GizmoQuadCap2DController_GetSliderAlignedRealLength
                (GizmoQuadCap2DController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if (((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar3 = (pGVar2->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
     (pGVar4 = (&(pGVar3->fields)._lookAndFeel)
               [(pGVar3->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
     pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) {
    return ((&(pGVar3->fields)._lookAndFeel)
            [(pGVar3->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields)._scale *
           (pGVar4->fields)._quadWidth;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_UpdateHandles
               (GizmoQuadCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).ArrowIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set2DShapeVisible
                  (pGVar2,(pGVar1->fields).QuadIndex,(pGVar3->fields)._._isVisible,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoQuadCap2DController::GizmoQuadCap2DController_UpdateTransforms
               (GizmoQuadCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    pQVar3 = (((this->fields)._._data)->fields).Quad;
    if ((pGVar2 != (GizmoCap2D *)0x0) &&
       (pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                 [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
       pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) {
      if (pQVar3 != (QuadShape2D *)0x0) {
        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                  ((RightAngTriangle2D *)pQVar3,
                   (pGVar4->fields)._quadWidth *
                   ((&(pGVar2->fields)._lookAndFeel)
                    [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields).
                   _scale,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
          this_00 = (TriangPrismShape3D *)(pGVar1->fields).Quad;
          pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                   [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0];
          if (pGVar4 != (GizmoCap2DLookAndFeel *)0x0) {
            ppGVar5 = &(pGVar2->fields)._sharedLookAndFeel;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              ppGVar5 = &(pGVar2->fields)._lookAndFeel;
            }
            if ((*ppGVar5 != (GizmoCap2DLookAndFeel *)0x0) && (this_00 != (TriangPrismShape3D *)0x0)
               ) {
              TriangPrismShape3D::TriangPrismShape3D_set_Width
                        (this_00,(pGVar4->fields)._quadHeight * ((*ppGVar5)->fields)._scale,
                         (MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
                pGVar6 = (pGVar2->fields)._transform;
                pQVar3 = (pGVar1->fields).Quad;
                if (pGVar6 != (GizmoTransform *)0x0) {
                  fVar7 = (pGVar6->fields)._position2D.y;
                  if (pQVar3 != (QuadShape2D *)0x0) {
                    (pQVar3->fields)._center.x = (pGVar6->fields)._position2D.x;
                    (pQVar3->fields)._center.y = fVar7;
                    pGVar1 = (this->fields)._._data;
                    if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
                      pGVar6 = (pGVar2->fields)._transform;
                      pQVar3 = (pGVar1->fields).Quad;
                      if ((pGVar6 != (GizmoTransform *)0x0) && (pQVar3 != (QuadShape2D *)0x0)) {
                        QuadShape2D::QuadShape2D_set_RotationDegrees
                                  (pQVar3,(pGVar6->fields)._rotation2DDegrees,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

