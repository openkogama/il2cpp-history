
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateEpsilons
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).PlaneSlider;
    this_01 = (pGVar1->fields).BorderPolygon;
    if (this_00 != (GizmoPlaneSlider2D *)0x0) {
      pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings(this_00,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) && (this_01 != (PolygonShape2D *)0x0)) {
        PolygonShape2D::PolygonShape2D_set_WireEps
                  (this_01,(pGVar2->fields)._borderLineHoverEps,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateHandles
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).ThickBorderPolygonIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoPolygon2DBorder *)0x0 &&
        (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).BorderPolygonIndex,(pGVar3->fields)._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoThinPolygon2DBorderController::
     GizmoThinPolygon2DBorderController_UpdateTransforms
               (GizmoThinPolygon2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPolygon2DBorderControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).BorderPolygon, this_00 != (PolygonShape2D *)0x0)) {
    PolygonShape2D::PolygonShape2D_CopyPoints
              (this_00,(pGVar1->fields).TargetPolygon,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

