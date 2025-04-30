
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_CapSlider2D
               (GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_AlignAxis2D
              (pGVar3,1,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
        (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Position2D
                (pGVar3,(Vector2)((ulonglong)sliderEndPt & 0xffffffff00000000),(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::
     GizmoArrowCap2DController_CapSlider2DInvert
               (GizmoArrowCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
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
                (pGVar3,1,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
        pGVar2 = (pGVar1->fields).Cap;
        uVar4 = func_?(&sliderDirection);
        pGVar1 = (this->fields)._._data;
        if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
            (pGVar5 = (pGVar1->fields).Cap, pGVar5 != (GizmoCap2D *)0x0)) &&
           ((pGVar6 = (pGVar5->fields)._sharedLookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0 ||
            (pGVar6 = (pGVar5->fields)._lookAndFeel, pGVar6 != (GizmoCap2DLookAndFeel *)0x0)))) {
          fVar7 = (pGVar6->fields)._arrowHeight * (pGVar6->fields)._scale;
          if ((pGVar2 != (GizmoCap2D *)0x0) &&
             (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
            value.y = sliderEndPt.y + (float)((ulonglong)uVar4 >> 0x20) * fVar7;
            value.x = sliderEndPt.x + (float)uVar4 * fVar7;
            GizmoTransform::GizmoTransform_set_Position2D(pGVar3,value,(MethodInfo *)0x0);
            return;
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


/* Single GetSliderAlignedRealLength() */

float Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::
      GizmoArrowCap2DController_GetSliderAlignedRealLength
                (GizmoArrowCap2DController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if (((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar3 = (pGVar2->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
     ((pGVar4 = (pGVar3->fields)._sharedLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0 ||
      (pGVar4 = (pGVar3->fields)._lookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0)))) {
    return (pGVar4->fields)._scale * (pGVar4->fields)._arrowHeight;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateHandles
               (GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set2DShapeVisible
                  (pGVar2,(pGVar1->fields).ArrowIndex,(pGVar3->fields)._._isVisible,
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


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoArrowCap2DController::GizmoArrowCap2DController_UpdateTransforms
               (GizmoArrowCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
    pTVar2 = (TriangPrismShape3D *)(pGVar1->fields).Arrow;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap2D *)0x0) &&
       (((pGVar4 = (pGVar3->fields)._sharedLookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0 ||
         (pGVar4 = (pGVar3->fields)._lookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) &&
        (pTVar2 != (TriangPrismShape3D *)0x0)))) {
      TriangPrismShape3D::TriangPrismShape3D_set_Height
                (pTVar2,(pGVar4->fields)._arrowHeight * (pGVar4->fields)._scale,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
        pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
        pTVar2 = (TriangPrismShape3D *)(pGVar1->fields).Arrow;
        if (((pGVar4 != (GizmoCap2DLookAndFeel *)0x0) ||
            (pGVar4 = (pGVar3->fields)._lookAndFeel, pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) &&
           (pTVar2 != (TriangPrismShape3D *)0x0)) {
          TriangPrismShape3D::TriangPrismShape3D_set_Width
                    (pTVar2,(pGVar4->fields)._arrowBaseRadius * (pGVar4->fields)._scale,
                     (MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
              (pGVar5 = (pGVar3->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) &&
             (pCVar6 = (pGVar1->fields).Arrow, pCVar6 != (ConeShape2D *)0x0)) {
            ConeShape2D::ConeShape2D_set_RotationDegrees
                      (pCVar6,(pGVar5->fields)._rotation2DDegrees,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
               (pGVar5 = (pGVar3->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
              fVar7 = (pGVar5->fields)._position2D.y;
              pCVar6 = (pGVar1->fields).Arrow;
              if (pCVar6 != (ConeShape2D *)0x0) {
                (pCVar6->fields)._baseCenter.x = (pGVar5->fields)._position2D.x;
                (pCVar6->fields)._baseCenter.y = fVar7;
                return;
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

