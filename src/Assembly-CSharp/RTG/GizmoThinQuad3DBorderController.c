
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateEpsilons
               (GizmoThinQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).PlaneSlider;
    this_00 = (Touch *)(pGVar1->fields).BorderQuad;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (Touch *)0x0) {
        QuadShape3D::QuadShape3D_set_WireEps
                  ((QuadShape3D *)this_00,zoomFactor * (pGVar3->fields)._borderLineHoverEps,
                   (MethodInfo *)0x0);
        value = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_altitudeAngle
                          (this_00,(MethodInfo *)0x0);
        QuadShape3D::QuadShape3D_set_ExtrudeEps((QuadShape3D *)this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateHandles
               (GizmoThinQuad3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoQuad3DBorder *)0x0)) &&
     (this_00 = (pGVar1->fields).TargetHandle, this_00 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (this_00,(pGVar1->fields).BorderQuadIndex,(pGVar2->fields)._isVisible,
               (MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (this_00,(pGVar1->fields).TopBoxIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (this_00,(pGVar1->fields).RightBoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (this_00,(pGVar1->fields).BottomBoxIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
            GizmoHandle::GizmoHandle_Set3DShapeVisible
                      (this_00,(pGVar1->fields).LeftBoxIndex,0,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
              GizmoHandle::GizmoHandle_Set3DShapeVisible
                        (this_00,(pGVar1->fields).TopLeftBoxIndex,0,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                GizmoHandle::GizmoHandle_Set3DShapeVisible
                          (this_00,(pGVar1->fields).TopRightBoxIndex,0,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                  GizmoHandle::GizmoHandle_Set3DShapeVisible
                            (this_00,(pGVar1->fields).BottomRightBoxIndex,0,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) {
                    GizmoHandle::GizmoHandle_Set3DShapeVisible
                              (this_00,(pGVar1->fields).BottomLeftBoxIndex,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinQuad3DBorderController::
     GizmoThinQuad3DBorderController_UpdateTransforms
               (GizmoThinQuad3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoQuad3DBorderControllerData *)0x0) &&
     (pQVar2 = (pGVar1->fields).TargetQuad, pQVar2 != (QuadShape3D *)0x0)) {
    this_00 = (pGVar1->fields).BorderQuad;
    fVar3 = (pQVar2->fields)._center.y;
    fVar4 = (pQVar2->fields)._center.z;
    if (this_00 != (QuadShape3D *)0x0) {
      (this_00->fields)._center.x = (pQVar2->fields)._center.x;
      (this_00->fields)._center.y = fVar3;
      (this_00->fields)._center.z = fVar4;
      fVar4 = (pQVar2->fields)._rotation.y;
      fVar3 = (pQVar2->fields)._rotation.z;
      fVar5 = (pQVar2->fields)._rotation.w;
      (this_00->fields)._rotation.x = (pQVar2->fields)._rotation.x;
      (this_00->fields)._rotation.y = fVar4;
      (this_00->fields)._rotation.z = fVar3;
      (this_00->fields)._rotation.w = fVar5;
      QuadShape3D::QuadShape3D_set_Size(this_00,(pQVar2->fields)._size,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

