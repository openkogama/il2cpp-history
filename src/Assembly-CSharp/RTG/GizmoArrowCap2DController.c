
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
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      axis.x = (float)((uint)sliderDirection.x ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      GizmoTransform::GizmoTransform_AlignAxis2D
                (pGVar3,1,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
        pGVar2 = (pGVar1->fields).Cap;
        uVar4 = func_?(&sliderDirection);
        pGVar1 = (this->fields)._._data;
        if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
            (pGVar5 = (pGVar1->fields).Cap, pGVar5 != (GizmoCap2D *)0x0)) &&
           (pGVar6 = (&(pGVar5->fields)._lookAndFeel)
                     [(pGVar5->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
           pGVar6 != (GizmoCap2DLookAndFeel *)0x0)) {
          fVar7 = (pGVar6->fields)._arrowHeight *
                  ((&(pGVar5->fields)._lookAndFeel)
                   [(pGVar5->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields).
                  _scale;
          if ((pGVar2 != (GizmoCap2D *)0x0) &&
             (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
            value.y = (float)((ulonglong)uVar4 >> 0x20) * fVar7 + sliderEndPt.y;
            value.x = (float)uVar4 * fVar7 + sliderEndPt.x;
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
     (pGVar4 = (&(pGVar3->fields)._lookAndFeel)
               [(pGVar3->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
     pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) {
    return ((&(pGVar3->fields)._lookAndFeel)
            [(pGVar3->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->fields)._scale *
           (pGVar4->fields)._arrowHeight;
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
    pGVar2 = (pGVar1->fields).Cap;
    pTVar3 = (TriangPrismShape3D *)(((this->fields)._._data)->fields).Arrow;
    if ((pGVar2 != (GizmoCap2D *)0x0) &&
       (pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                 [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0],
       pGVar4 != (GizmoCap2DLookAndFeel *)0x0)) {
      if (pTVar3 != (TriangPrismShape3D *)0x0) {
        TriangPrismShape3D::TriangPrismShape3D_set_Height
                  (pTVar3,(pGVar4->fields)._arrowHeight *
                          ((&(pGVar2->fields)._lookAndFeel)
                           [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0]->
                          fields)._scale,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
          pTVar3 = (TriangPrismShape3D *)(pGVar1->fields).Arrow;
          pGVar4 = (&(pGVar2->fields)._lookAndFeel)
                   [(pGVar2->fields)._sharedLookAndFeel != (GizmoCap2DLookAndFeel *)0x0];
          if (pGVar4 != (GizmoCap2DLookAndFeel *)0x0) {
            ppGVar5 = &(pGVar2->fields)._sharedLookAndFeel;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
              ppGVar5 = &(pGVar2->fields)._lookAndFeel;
            }
            if ((*ppGVar5 != (GizmoCap2DLookAndFeel *)0x0) && (pTVar3 != (TriangPrismShape3D *)0x0))
            {
              TriangPrismShape3D::TriangPrismShape3D_set_Width
                        (pTVar3,(pGVar4->fields)._arrowBaseRadius * ((*ppGVar5)->fields)._scale,
                         (MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
                pGVar6 = (pGVar2->fields)._transform;
                pCVar7 = (pGVar1->fields).Arrow;
                if ((pGVar6 != (GizmoTransform *)0x0) && (pCVar7 != (ConeShape2D *)0x0)) {
                  ConeShape2D::ConeShape2D_set_RotationDegrees
                            (pCVar7,(pGVar6->fields)._rotation2DDegrees,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
                    pGVar6 = (pGVar2->fields)._transform;
                    pCVar7 = (pGVar1->fields).Arrow;
                    if (pGVar6 != (GizmoTransform *)0x0) {
                      fVar8 = (pGVar6->fields)._position2D.y;
                      if (pCVar7 != (ConeShape2D *)0x0) {
                        (pCVar7->fields)._baseCenter.x = (pGVar6->fields)._position2D.x;
                        (pCVar7->fields)._baseCenter.y = fVar8;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

