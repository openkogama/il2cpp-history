
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateEpsilons
               (GizmoRATrianglePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    pRVar3 = (pGVar1->fields).RATriangle;
    if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
        (pGVar4 = (&(pGVar2->fields)._settings)
                  [(pGVar2->fields)._sharedSettings != (GizmoPlaneSlider3DSettings *)0x0],
        pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) && (pRVar3 != (RightAngTriangle3D *)0x0)) {
      RightAngTriangle3D::RightAngTriangle3D_set_AreaEps
                (pRVar3,zoomFactor * (pGVar4->fields)._areaHoverEps,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) {
        pRVar3 = (pGVar1->fields).RATriangle;
        pGVar2 = (((this->fields)._._data)->fields).Slider;
        if (((pGVar2 != (GizmoPlaneSlider3D *)0x0) &&
            (pGVar4 = (&(pGVar2->fields)._settings)
                      [(pGVar2->fields)._sharedSettings != (GizmoPlaneSlider3DSettings *)0x0],
            pGVar4 != (GizmoPlaneSlider3DSettings *)0x0)) && (pRVar3 != (RightAngTriangle3D *)0x0))
        {
          RightAngTriangle3D::RightAngTriangle3D_set_ExtrudeEps
                    (pRVar3,zoomFactor * (pGVar4->fields)._extrudeHoverEps,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateHandles
               (GizmoRATrianglePlaneSlider3DController *this,MethodInfo *method)

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
             (this_02 = (pGVar1->fields).RATriangleBorder, this_02 != (GizmoRATriangle3DBorder *)0x0
             )) {
            GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              GizmoHandle::GizmoHandle_Set3DShapeVisible
                        (pGVar2,(pGVar1->fields).RATriangleIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoRATrianglePlaneSlider3DController::
     GizmoRATrianglePlaneSlider3DController_UpdateTransforms
               (GizmoRATrianglePlaneSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._._data;
  if (pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) {
    this_00 = (pGVar2->fields).RATriangle;
    pGVar3 = (pGVar2->fields).Slider;
    if ((pGVar3 != (GizmoPlaneSlider3D *)0x0) &&
       (pGVar4 = (&(pGVar3->fields)._lookAndFeel)
                 [(pGVar3->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0],
       pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0)) {
      if ((pGVar4->fields)._useZoomFactor == 0) {
        zoomFactor = _UNK_?;
      }
      pGVar5 = (pGVar3->fields)._scaleDrag;
      if (pGVar5 != (GizmoDblAxisScaleDrag3D *)0x0) {
        cVar6 = (*(code *)(pGVar5->klass->vtable).get_IsActive_1.method)
                           (pGVar5,(pGVar5->klass->vtable).get_DragChannel_1.methodPtr);
        fVar7 = _UNK_?;
        if (cVar6 != '\0') {
          pGVar5 = (pGVar3->fields)._scaleDrag;
          if (pGVar5 == (GizmoDblAxisScaleDrag3D *)0x0) goto code_?;
          fVar1 = (pGVar5->fields)._totalScale1;
          fVar7 = (pGVar5->fields)._totalScale0;
        }
        pGVar4 = (&(pGVar3->fields)._lookAndFeel)
                 [(pGVar3->fields)._sharedLookAndFeel != (GizmoPlaneSlider3DLookAndFeel *)0x0];
        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
          ppGVar8 = &(pGVar3->fields)._sharedLookAndFeel;
          if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            ppGVar8 = &(pGVar3->fields)._lookAndFeel;
          }
          if (*ppGVar8 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            ppGVar9 = &(pGVar3->fields)._sharedLookAndFeel;
            if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              ppGVar9 = &(pGVar3->fields)._lookAndFeel;
            }
            if (*ppGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              ppGVar10 = &(pGVar3->fields)._sharedLookAndFeel;
              if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                ppGVar10 = &(pGVar3->fields)._lookAndFeel;
              }
              if (*ppGVar10 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                pGVar11 = (pGVar3->fields)._transform;
                fVar7 = ((*ppGVar8)->fields)._scale * (pGVar4->fields)._raTriangleXLength *
                         zoomFactor * fVar7;
                fVar1 = ((*ppGVar9)->fields)._raTriangleYLength * ((*ppGVar10)->fields)._scale *
                         zoomFactor * fVar1;
                if (pGVar11 != (GizmoTransform *)0x0) {
                  fVar12 = (pGVar11->fields)._position3D.y;
                  fVar13 = (pGVar11->fields)._position3D.z;
                  if (this_00 != (RightAngTriangle3D *)0x0) {
                    (this_00->fields)._rightAngleCorner.x = (pGVar11->fields)._position3D.x;
                    (this_00->fields)._rightAngleCorner.y = fVar12;
                    (this_00->fields)._rightAngleCorner.z = fVar13;
                    pGVar11 = (pGVar3->fields)._transform;
                    if (pGVar11 != (GizmoTransform *)0x0) {
                      fVar13 = (pGVar11->fields)._rotation3D.y;
                      fVar12 = (pGVar11->fields)._rotation3D.z;
                      fVar14 = (pGVar11->fields)._rotation3D.w;
                      (this_00->fields)._rotation.x = (pGVar11->fields)._rotation3D.x;
                      (this_00->fields)._rotation.y = fVar13;
                      (this_00->fields)._rotation.z = fVar12;
                      (this_00->fields)._rotation.w = fVar14;
                      TriangPrismShape3D::TriangPrismShape3D_set_Width
                                ((TriangPrismShape3D *)this_00,fVar7,(MethodInfo *)0x0);
                      TriangPrismShape3D::TriangPrismShape3D_set_Height
                                ((TriangPrismShape3D *)this_00,fVar1,(MethodInfo *)0x0);
                      (this_00->fields)._XLengthSign = (uint)(fVar7 < 0.0);
                      ((Quaternion *)&(this_00->fields)._YLengthSign)->x =
                           (float)(uint)(fVar1 < 0.0);
                      pGVar2 = (this->fields)._._data;
                      if ((pGVar2 != (GizmoPlaneSlider3DControllerData *)0x0) &&
                         (this_01 = (pGVar2->fields).RATriangleBorder,
                         this_01 != (GizmoRATriangle3DBorder *)0x0)) {
                        GizmoRATriangle3DBorder::GizmoRATriangle3DBorder_OnTriangleShapeChanged
                                  (this_01,(MethodInfo *)0x0);
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
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

