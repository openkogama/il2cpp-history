
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateEpsilons
               (GizmoCirclePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    pCVar3 = (pGVar1->fields).Circle;
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       (((pGVar4 = (pGVar2->fields)._sharedSettings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0 ||
         (pGVar4 = (pGVar2->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) &&
        (pCVar3 != (CircleShape3D *)0x0)))) {
      SphereShape3D::SphereShape3D_set_RadiusEps
                ((SphereShape3D *)pCVar3,zoomFactor * (pGVar4->fields)._areaHoverEps * _UNK_?
                 ,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
        pCVar3 = (pGVar1->fields).Circle;
        pGVar2 = (pGVar1->fields).Slider;
        if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
            ((pGVar4 = (pGVar2->fields)._sharedSettings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0
             || (pGVar4 = (pGVar2->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)))
            ) && (pCVar3 != (CircleShape3D *)0x0)) {
          CircleShape3D::CircleShape3D_set_ExtrudeEps
                    (pCVar3,zoomFactor * (pGVar4->fields)._extrudeHoverEps,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateHandles
               (GizmoCirclePlaneSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).QuadBorder, this_00 != (GizmoQuad3DBorder *)0x0)) {
    GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (this_01 = (pGVar1->fields).RATriangleBorder, this_01 != (GizmoRATriangle3DBorder *)0x0)) {
        GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).RATriangleIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
             (this_02 = (pGVar1->fields).CircleBorder, this_02 != (GizmoCircle3DBorder *)0x0)) {
            GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              GizmoHandle::GizmoHandle_Set3DShapeVisible
                        (pGVar2,(pGVar1->fields).CircleIndex,(pGVar3->fields)._._isVisible,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider3DController::
     GizmoCirclePlaneSlider3DController_UpdateTransforms
               (GizmoCirclePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Circle;
    this_01 = (pGVar1->fields).Slider;
    if ((this_01 != (GizmoPlaneSlider3D *)0x0) &&
       (pGVar2 = (this_01->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
      fVar3 = (pGVar2->fields)._position3D.y;
      fVar4 = (pGVar2->fields)._position3D.z;
      if (this_00 != (CircleShape3D *)0x0) {
        (this_00->fields)._center.x = (pGVar2->fields)._position3D.x;
        (this_00->fields)._center.y = fVar3;
        (this_00->fields)._center.z = fVar4;
        fVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_GetRealCircleRadius
                          (this_01,zoomFactor,(MethodInfo *)0x0);
        TriangPrismShape3D::TriangPrismShape3D_set_Width
                  ((TriangPrismShape3D *)this_00,fVar4,(MethodInfo *)0x0);
        pGVar2 = (this_01->fields)._transform;
        if (pGVar2 != (GizmoTransform *)0x0) {
          fVar4 = (pGVar2->fields)._rotation3D.y;
          fVar3 = (pGVar2->fields)._rotation3D.z;
          fVar5 = (pGVar2->fields)._rotation3D.w;
          (this_00->fields)._rotation.x = (pGVar2->fields)._rotation3D.x;
          (this_00->fields)._rotation.y = fVar4;
          ((Quaternion *)&(this_00->fields)._rotation.z)->x = fVar3;
          (this_00->fields)._rotation.w = fVar5;
          pGVar1 = (this->fields)._._data;
          if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
             (this_02 = (pGVar1->fields).CircleBorder, this_02 != (GizmoCircle3DBorder *)0x0)) {
            GizmoCircle3DBorder::GizmoCircle3DBorder_OnCircleShapeChanged(this_02,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

