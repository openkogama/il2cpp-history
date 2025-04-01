
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateEpsilons
               (GizmoQuadPlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    pQVar3 = (pGVar1->fields).Quad;
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       ((pGVar4 = (pGVar2->fields)._sharedSettings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0 ||
        (pGVar4 = (pGVar2->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)))) {
      value = Vector2Ex::Vector2Ex_FromValue
                        (zoomFactor * (pGVar4->fields)._areaHoverEps,(MethodInfo *)0x0);
      if (pQVar3 != (QuadShape3D *)0x0) {
        QuadShape3D::QuadShape3D_set_SizeEps(pQVar3,value,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
          pQVar3 = (pGVar1->fields).Quad;
          pGVar2 = (pGVar1->fields).Slider;
          if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
             (((pGVar4 = (pGVar2->fields)._sharedSettings,
               pGVar4 != (GizmoPlaneSlider3DSettings *)0x0 ||
               (pGVar4 = (pGVar2->fields)._settings, pGVar4 != (GizmoPlaneSlider3DSettings *)0x0))
              && (pQVar3 != (QuadShape3D *)0x0)))) {
            QuadShape3D::QuadShape3D_set_ExtrudeEps
                      (pQVar3,zoomFactor * (pGVar4->fields)._extrudeHoverEps,(MethodInfo *)0x0);
            return;
          }
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

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateHandles
               (GizmoQuadPlaneSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).RATriangleBorder, this_00 != (GizmoRATriangle3DBorder *)0x0)) {
    GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).RATriangleIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
         (this_01 = (pGVar1->fields).CircleBorder, this_01 != (GizmoCircle3DBorder *)0x0)) {
        GizmoCircle3DBorder::GizmoCircle3DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
             (this_02 = (pGVar1->fields).QuadBorder, this_02 != (GizmoQuad3DBorder *)0x0)) {
            GizmoQuad3DBorder::GizmoQuad3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              GizmoHandle::GizmoHandle_Set3DShapeVisible
                        (pGVar2,(pGVar1->fields).QuadIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider3DController::
     GizmoQuadPlaneSlider3DController_UpdateTransforms
               (GizmoQuadPlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    this_00 = (pGVar1->fields).Quad;
    if ((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      fVar4 = (pGVar3->fields)._position3D.y;
      fVar5 = (pGVar3->fields)._position3D.z;
      if (this_00 != (QuadShape3D *)0x0) {
        (this_00->fields)._center.x = (pGVar3->fields)._position3D.x;
        (this_00->fields)._center.y = fVar4;
        (this_00->fields)._center.z = fVar5;
        pGVar3 = (pGVar2->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          fVar5 = (pGVar3->fields)._rotation3D.y;
          fVar4 = (pGVar3->fields)._rotation3D.z;
          fVar6 = (pGVar3->fields)._rotation3D.w;
          (this_00->fields)._rotation.x = (pGVar3->fields)._rotation3D.x;
          (this_00->fields)._rotation.y = fVar5;
          (this_00->fields)._rotation.z = fVar4;
          (this_00->fields)._rotation.w = fVar6;
          fVar5 = _UNK_?;
          pGVar7 = (pGVar2->fields)._sharedLookAndFeel;
          if ((pGVar7 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
             (pGVar7 = (pGVar2->fields)._lookAndFeel, pGVar7 != (GizmoPlaneSlider3DLookAndFeel *)0x0
             )) {
            if ((pGVar7->fields)._useZoomFactor == 0) {
              zoomFactor = _UNK_?;
            }
            pGVar8 = (pGVar2->fields)._scaleDrag;
            if (pGVar8 != (GizmoDblAxisScaleDrag3D *)0x0) {
              cVar9 = (*(code *)(pGVar8->klass->vtable).get_IsActive_1.method)
                                (pGVar8,(pGVar8->klass->vtable).get_DragChannel_1.methodPtr);
              fVar4 = _UNK_?;
              if (cVar9 != '\0') {
                pGVar8 = (pGVar2->fields)._scaleDrag;
                if (pGVar8 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
                fVar5 = (pGVar8->fields)._totalScale1;
                fVar4 = (pGVar8->fields)._totalScale0;
              }
              pGVar7 = (pGVar2->fields)._sharedLookAndFeel;
              if ((pGVar7 != (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
                 (pGVar7 = (pGVar2->fields)._lookAndFeel,
                 pGVar7 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
                value.y = (pGVar7->fields)._quadHeight * (pGVar7->fields)._scale * zoomFactor *
                          fVar5;
                value.x = (pGVar7->fields)._scale * (pGVar7->fields)._quadWidth * zoomFactor * fVar4
                ;
                QuadShape3D::QuadShape3D_set_Size(this_00,value,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if ((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                   (this_01 = (pGVar1->fields).QuadBorder, this_01 != (GizmoQuad3DBorder *)0x0)) {
                  GizmoQuad3DBorder::GizmoQuad3DBorder_OnQuadShapeChanged(this_01,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

