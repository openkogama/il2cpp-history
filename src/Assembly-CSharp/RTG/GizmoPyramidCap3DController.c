
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::GizmoPyramidCap3DController_CapSlider3D
               (GizmoPyramidCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_AlignAxis3D
              (pGVar3,1,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
        (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Position3D(pGVar3,sliderEndPt,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_CapSlider3DInvert
               (GizmoPyramidCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      axis.y = (float)((uint)sliderDirection.y ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      axis.x = (float)((uint)sliderDirection.x ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      axis.z = (float)((uint)sliderDirection.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      GizmoTransform::GizmoTransform_AlignAxis3D
                (pGVar3,1,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pGVar2 = (pGVar1->fields).Cap;
        fVar4 = (float10)(*(code *)(this->klass->vtable).GetSliderAlignedRealLength_1.method)
                                   (this,zoomFactor);
        fVar5 = (float)fVar4;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
          value.y = sliderEndPt.y + sliderDirection.y * fVar5;
          value.x = sliderEndPt.x + sliderDirection.x * fVar5;
          value.z = sliderEndPt.z + sliderDirection.z * fVar5;
          GizmoTransform::GizmoTransform_set_Position3D(pGVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
      GizmoPyramidCap3DController_GetSliderAlignedRealLength
                (GizmoPyramidCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
    fStack_3 = zoomFactor;
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar4 = (pGVar2->fields)._lookAndFeel;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar2->fields)._sharedLookAndFeel;
    }
    if ((pGVar4->fields)._useZoomFactor == 0) {
      fStack_3 = 1.0;
    }
    if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar4 = (pGVar2->fields)._lookAndFeel;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar2->fields)._sharedLookAndFeel;
    }
    return (pGVar4->fields)._scale * (pGVar4->fields)._pyramidHeight * fStack_3;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_UpdateHandles(GizmoPyramidCap3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).ConeIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).TrPrismIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BoxIndex,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set3DShapeVisible
                    (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            GizmoHandle::GizmoHandle_Set3DShapeVisible
                      (pGVar2,(pGVar1->fields).PyramidIndex,(pGVar3->fields)._._isVisible,
                       (MethodInfo *)0x0);
            return;
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

void Assembly-CSharp.dll::RTG::GizmoPyramidCap3DController::
     GizmoPyramidCap3DController_UpdateTransforms
               (GizmoPyramidCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pPVar2 = (pGVar1->fields).Pyramid;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.y;
      fVar6 = (pGVar4->fields)._position3D.z;
      if (pPVar2 != (PyramidShape3D *)0x0) {
        (pPVar2->fields)._baseCenter.x = (pGVar4->fields)._position3D.x;
        (pPVar2->fields)._baseCenter.y = fVar5;
        (pPVar2->fields)._baseCenter.z = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar4 = (pGVar3->fields)._transform;
          pPVar2 = (pGVar1->fields).Pyramid;
          if (pGVar4 != (GizmoTransform *)0x0) {
            fVar6 = (pGVar4->fields)._rotation3D.y;
            fVar5 = (pGVar4->fields)._rotation3D.z;
            fVar7 = (pGVar4->fields)._rotation3D.w;
            if (pPVar2 != (PyramidShape3D *)0x0) {
              (pPVar2->fields)._rotation.x = (pGVar4->fields)._rotation3D.x;
              (pPVar2->fields)._rotation.y = fVar6;
              (pPVar2->fields)._rotation.z = fVar5;
              (pPVar2->fields)._rotation.w = fVar7;
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                pPVar2 = (pGVar1->fields).Pyramid;
                if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                  pGVar8 = (pGVar3->fields)._lookAndFeel;
                  if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                }
                fVar6 = zoomFactor;
                if ((pGVar8->fields)._useZoomFactor == 0) {
                  fVar6 = _UNK_?;
                }
                if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                  pGVar8 = (pGVar3->fields)._lookAndFeel;
                  if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                }
                if (pPVar2 != (PyramidShape3D *)0x0) {
                  TriangPrismShape3D::TriangPrismShape3D_set_Width
                            ((TriangPrismShape3D *)pPVar2,
                             (pGVar8->fields)._pyramidWidth * (pGVar8->fields)._scale * fVar6,
                             (MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                    pPVar2 = (pGVar1->fields).Pyramid;
                    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                      pGVar8 = (pGVar3->fields)._lookAndFeel;
                      if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                    }
                    fVar6 = zoomFactor;
                    if ((pGVar8->fields)._useZoomFactor == 0) {
                      fVar6 = _UNK_?;
                    }
                    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                      pGVar8 = (pGVar3->fields)._lookAndFeel;
                      if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                    }
                    else {
                      pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                    }
                    if (pPVar2 != (PyramidShape3D *)0x0) {
                      TriangPrismShape3D::TriangPrismShape3D_set_Height
                                ((TriangPrismShape3D *)pPVar2,
                                 (pGVar8->fields)._pyramidDepth * (pGVar8->fields)._scale * fVar6,
                                 (MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._data;
                      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                        pPVar2 = (pGVar1->fields).Pyramid;
                        if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                          pGVar8 = (pGVar3->fields)._lookAndFeel;
                          if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                        }
                        else {
                          pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                        }
                        if ((pGVar8->fields)._useZoomFactor == 0) {
                          zoomFactor = _UNK_?;
                        }
                        if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                          pGVar8 = (pGVar3->fields)._lookAndFeel;
                          if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
                        }
                        else {
                          pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
                        }
                        if (pPVar2 != (PyramidShape3D *)0x0) {
                          TriangPrismShape3D::TriangPrismShape3D_set_Depth
                                    ((TriangPrismShape3D *)pPVar2,
                                     (pGVar8->fields)._pyramidHeight * (pGVar8->fields)._scale *
                                     zoomFactor,(MethodInfo *)0x0);
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
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

