
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::
     GizmoThinCircle3DBorderController_UpdateEpsilons
               (GizmoThinCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).PlaneSlider;
    this_00 = (PolygonShape2D *)(pGVar1->fields).BorderCircle;
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       (((pGVar3 = (pGVar2->fields)._sharedSettings, pGVar3 != (GizmoPlaneSlider3DSettings *)0x0 ||
         (pGVar3 = (pGVar2->fields)._settings, pGVar3 != (GizmoPlaneSlider3DSettings *)0x0)) &&
        (this_00 != (PolygonShape2D *)0x0)))) {
      PolygonShape2D::PolygonShape2D_set_WireEps
                (this_00,zoomFactor * (pGVar3->fields)._borderLineHoverEps,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
         (this_01 = (Touch *)(pGVar1->fields).BorderCircle, this_01 != (Touch *)0x0)) {
        value = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::
                Touch_get_maximumPossiblePressure(this_01,(MethodInfo *)0x0);
        CircleShape3D::CircleShape3D_set_ExtrudeEps
                  ((CircleShape3D *)this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::
     GizmoThinCircle3DBorderController_UpdateHandles
               (GizmoThinCircle3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).BorderTorusIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).BorderCylTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
         (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BorderCircleIndex,(pGVar3->fields)._isVisible,
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


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinCircle3DBorderController::
     GizmoThinCircle3DBorderController_UpdateTransforms
               (GizmoThinCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (pCVar2 = (pGVar1->fields).TargetCircle, pCVar2 != (CircleShape3D *)0x0)) {
    this_00 = (pGVar1->fields).BorderCircle;
    fVar3 = (pCVar2->fields)._rotation.y;
    fVar4 = (pCVar2->fields)._rotation.z;
    fVar5 = (pCVar2->fields)._rotation.w;
    if (this_00 != (CircleShape3D *)0x0) {
      (this_00->fields)._rotation.x = (pCVar2->fields)._rotation.x;
      (this_00->fields)._rotation.y = fVar3;
      ((Quaternion *)&(this_00->fields)._rotation.z)->x = fVar4;
      (this_00->fields)._rotation.w = fVar5;
      fVar3 = (pCVar2->fields)._center.z;
      fVar4 = (pCVar2->fields)._center.y;
      (this_00->fields)._center.x = (pCVar2->fields)._center.x;
      (this_00->fields)._center.y = fVar4;
      (this_00->fields)._center.z = fVar3;
      TriangPrismShape3D::TriangPrismShape3D_set_Width
                ((TriangPrismShape3D *)this_00,(pCVar2->fields)._radius,(MethodInfo *)0x0);
      return;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

