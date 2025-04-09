
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateEpsilons
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoQuad2DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).BorderQuad;
    this_01 = (pGVar1->fields).PlaneSlider;
    if (this_01 != (GizmoPlaneSlider2D *)0x0) {
      pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings(this_01,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) && (this_00 != (QuadShape2D *)0x0)) {
        QuadShape2D::QuadShape2D_set_WireEps
                  (this_00,(pGVar2->fields)._borderLineHoverEps,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateHandles
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoQuad2DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoQuad2DBorder *)0x0)) &&
     (this_00 = (pGVar1->fields).TargetHandle, this_00 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (this_00,(pGVar1->fields).BorderQuadIndex,(pGVar2->fields)._isVisible,
               (MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad2DBorderController::
     GizmoThinQuad2DBorderController_UpdateTransforms
               (GizmoThinQuad2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoQuad2DBorderControllerData *)0x0) {
    pQVar2 = (pGVar1->fields).TargetQuad;
    if (pQVar2 != (QuadShape2D *)0x0) {
      this_00 = (pGVar1->fields).BorderQuad;
      fVar3 = (pQVar2->fields)._center.y;
      if (this_00 != (QuadShape2D *)0x0) {
        (this_00->fields)._center.x = (pQVar2->fields)._center.x;
        (this_00->fields)._center.y = fVar3;
        QuadShape2D::QuadShape2D_set_RotationDegrees
                  (this_00,(pQVar2->fields)._rotationDegrees,(MethodInfo *)0x0);
        QuadShape2D::QuadShape2D_set_Size(this_00,(pQVar2->fields)._size,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

