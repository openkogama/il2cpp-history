
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle2DBorderController::
     GizmoThinCircle2DBorderController_UpdateEpsilons
               (GizmoThinCircle2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle2DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PlaneSlider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pCVar4 = (pGVar1->fields).BorderCircle, pCVar4 != (CircleShape2D *)0x0)) {
      (pCVar4->fields)._epsilon._wireEps = (float)(*(uint *)(lVar3 + 0x14) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle2DBorderController::
     GizmoThinCircle2DBorderController_UpdateTransforms
               (GizmoThinCircle2DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle2DBorderControllerData *)0x0) &&
     (this = (GizmoThinCircle2DBorderController *)(pGVar1->fields).TargetCircle,
     (CircleShape2D *)this != (CircleShape2D *)0x0)) {
    pCVar2 = (pGVar1->fields).BorderCircle;
    fVar3 = (((CircleShape2D *)this)->fields)._center.y;
    method = (MethodInfo *)0x0;
    if (pCVar2 != (CircleShape2D *)0x0) {
      (pCVar2->fields)._center.x = (((CircleShape2D *)this)->fields)._center.x;
      (pCVar2->fields)._center.y = fVar3;
      (pCVar2->fields)._rotationDegrees = (((CircleShape2D *)this)->fields)._rotationDegrees;
      (pCVar2->fields)._radius =
           (float)((uint)(((CircleShape2D *)this)->fields)._radius & _UNK_?);
      return;
    }
  }
  FUN_?(this,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

