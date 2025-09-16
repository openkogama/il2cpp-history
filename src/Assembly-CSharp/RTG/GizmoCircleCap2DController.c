
/* Void CapSlider2D(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::GizmoCircleCap2DController_CapSlider2D
               (GizmoCircleCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_AlignAxis2D
              (pGVar3,0,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
      pGVar2 = (pGVar1->fields).Cap;
      uVar4 = func_?(&sliderDirection);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
         (pGVar5 = (pGVar1->fields).Cap, pGVar5 != (GizmoCap2D *)0x0)) {
        if ((pGVar5->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
          pGVar6 = (pGVar5->fields)._lookAndFeel;
          if (pGVar6 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar6 = (pGVar5->fields)._sharedLookAndFeel;
        }
        fVar7 = (pGVar6->fields)._circleRadius * (pGVar6->fields)._scale;
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
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CapSlider2DInvert(Vector2, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
     GizmoCircleCap2DController_CapSlider2DInvert
               (GizmoCircleCap2DController *this,Vector2 sliderDirection,Vector2 sliderEndPt,
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
      if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
        pGVar2 = (pGVar1->fields).Cap;
        uVar4 = func_?(&sliderDirection);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
           (pGVar5 = (pGVar1->fields).Cap, pGVar5 != (GizmoCap2D *)0x0)) {
          if ((pGVar5->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
            pGVar6 = (pGVar5->fields)._lookAndFeel;
            if (pGVar6 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar6 = (pGVar5->fields)._sharedLookAndFeel;
          }
          fVar7 = (pGVar6->fields)._circleRadius * (pGVar6->fields)._scale;
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
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single GetSliderAlignedRealLength() */

float Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
      GizmoCircleCap2DController_GetSliderAlignedRealLength
                (GizmoCircleCap2DController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoCap2DControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) {
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
      pGVar4 = (pGVar3->fields)._lookAndFeel;
      if (pGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
    }
    fVar5 = (pGVar4->fields)._scale * (pGVar4->fields)._circleRadius;
    return fVar5 + fVar5;
  }
code_?:
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::GizmoCircleCap2DController_UpdateHandles
               (GizmoCircleCap2DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap2D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set2DShapeVisible
                  (pGVar2,(pGVar1->fields).CircleIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoCircleCap2DController::
     GizmoCircleCap2DController_UpdateTransforms
               (GizmoCircleCap2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap2DControllerData *)0x0) {
    pCVar2 = (pGVar1->fields).Circle;
    pGVar3 = (pGVar1->fields).Cap;
    if (pGVar3 != (GizmoCap2D *)0x0) {
      if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap2DLookAndFeel *)0x0) {
        pGVar4 = (pGVar3->fields)._lookAndFeel;
        if (pGVar4 == (GizmoCap2DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
      }
      if (pCVar2 != (CircleShape2D *)0x0) {
        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                  ((RightAngTriangle2D *)pCVar2,
                   (pGVar4->fields)._circleRadius * (pGVar4->fields)._scale,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap2DControllerData *)0x0) &&
           (pGVar5 = (pGVar3->fields)._transform, pGVar5 != (GizmoTransform *)0x0)) {
          fVar6 = (pGVar5->fields)._position2D.y;
          pCVar2 = (pGVar1->fields).Circle;
          if (pCVar2 != (CircleShape2D *)0x0) {
            (pCVar2->fields)._center.x = (pGVar5->fields)._position2D.x;
            (pCVar2->fields)._center.y = fVar6;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

