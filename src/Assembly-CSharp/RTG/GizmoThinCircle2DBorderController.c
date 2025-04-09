
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle2DBorderController::
     GizmoThinCircle2DBorderController_UpdateEpsilons
               (GizmoThinCircle2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle2DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).PlaneSlider;
    this_01 = (pGVar1->fields).BorderCircle;
    if (this_00 != (GizmoPlaneSlider2D *)0x0) {
      pGVar2 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_get_Settings(this_00,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider2DSettings *)0x0) && (this_01 != (CircleShape2D *)0x0)) {
        CircleShape2D::CircleShape2D_set_WireEps
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


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle2DBorderController::
     GizmoThinCircle2DBorderController_UpdateTransforms
               (GizmoThinCircle2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle2DBorderControllerData *)0x0) &&
     (pCVar2 = (pGVar1->fields).TargetCircle, pCVar2 != (CircleShape2D *)0x0)) {
    this_00 = (pGVar1->fields).BorderCircle;
    fVar3 = (pCVar2->fields)._center.y;
    if (this_00 != (CircleShape2D *)0x0) {
      (this_00->fields)._center.x = (pCVar2->fields)._center.x;
      (this_00->fields)._center.y = fVar3;
      (this_00->fields)._rotationDegrees = (pCVar2->fields)._rotationDegrees;
      RightAngTriangle2D::RightAngTriangle2D_set_XLength
                ((RightAngTriangle2D *)this_00,(pCVar2->fields)._radius,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

