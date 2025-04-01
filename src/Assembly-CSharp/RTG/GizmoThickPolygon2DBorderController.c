
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateEpsilons
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).ThickBorderPolygon;
    this_01 = (pGVar1->fields).PlaneSlider;
    if (this_01 != (GizmoPlaneSlider2D *)0x0) {
      pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings(this_01,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) && (this_00 != (PolygonShape2D *)0x0)) {
        PolygonShape2D::PolygonShape2D_set_ThickWireEps
                  (this_00,(pGVar2->fields)._thickBorderPolyHoverEps,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateHandles
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).BorderPolygonIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoPolygon2DBorder *)0x0 &&
        (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).ThickBorderPolygonIndex,(pGVar3->fields)._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoThickPolygon2DBorderController::
     GizmoThickPolygon2DBorderController_UpdateTransforms
               (GizmoThickPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pPVar2 = (pGVar1->fields).ThickBorderPolygon, pPVar2 != (PolygonShape2D *)0x0)) {
    this_00 = (pGVar1->fields).PlaneSlider;
    this_01 = (TorusShape3D *)(pPVar2->fields)._borderRenderDesc;
    if (this_00 != (GizmoPlaneSlider2D *)0x0) {
      pGVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_LookAndFeel(this_00,(MethodInfo *)0x0);
      if ((pGVar3 != (GizmoPlaneSlider2DLookAndFeel *)0x0) && (this_01 != (TorusShape3D *)0x0)) {
        TorusShape3D::TorusShape3D_set_TubeRadius
                  (this_01,(pGVar3->fields)._borderPolyThickness,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
           (pPVar2 = (pGVar1->fields).ThickBorderPolygon, pPVar2 != (PolygonShape2D *)0x0)) {
          PolygonShape2D::PolygonShape2D_CopyPoints
                    (pPVar2,(pGVar1->fields).TargetPolygon,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

