
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
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      axis.x = (float)((uint)sliderDirection.x ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      axis.z = (float)((uint)sliderDirection.z ^
                      __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealPyramidHeight(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
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
    this_00 = (pGVar1->fields).Cap;
    pPVar2 = (((this->fields)._._data)->fields).Pyramid;
    if ((this_00 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (this_00->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      fVar4 = (pGVar3->fields)._position3D.y;
      fVar5 = (pGVar3->fields)._position3D.z;
      if (pPVar2 != (PyramidShape3D *)0x0) {
        (pPVar2->fields)._baseCenter.x = (pGVar3->fields)._position3D.x;
        (pPVar2->fields)._baseCenter.y = fVar4;
        (pPVar2->fields)._baseCenter.z = fVar5;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar3 = (this_00->fields)._transform;
          pPVar2 = (pGVar1->fields).Pyramid;
          if (pGVar3 != (GizmoTransform *)0x0) {
            fVar5 = (pGVar3->fields)._rotation3D.y;
            fVar4 = (pGVar3->fields)._rotation3D.z;
            fVar6 = (pGVar3->fields)._rotation3D.w;
            if (pPVar2 != (PyramidShape3D *)0x0) {
              (pPVar2->fields)._rotation.x = (pGVar3->fields)._rotation3D.x;
              (pPVar2->fields)._rotation.y = fVar5;
              (pPVar2->fields)._rotation.z = fVar4;
              (pPVar2->fields)._rotation.w = fVar6;
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                pPVar2 = (pGVar1->fields).Pyramid;
                pGVar7 = (&(this_00->fields)._lookAndFeel)
                         [(this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0];
                if (pGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                  fVar5 = zoomFactor;
                  if ((pGVar7->fields)._useZoomFactor == 0) {
                    fVar5 = _UNK_?;
                  }
                  bVar8 = (this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0;
                  ppGVar9 = &(this_00->fields)._sharedLookAndFeel;
                  if (!bVar8) {
                    ppGVar9 = &(this_00->fields)._lookAndFeel;
                  }
                  if ((*ppGVar9 != (GizmoCap3DLookAndFeel *)0x0) &&
                     (pPVar2 != (PyramidShape3D *)0x0)) {
                    TriangPrismShape3D::TriangPrismShape3D_set_Width
                              ((TriangPrismShape3D *)pPVar2,
                               ((&(this_00->fields)._lookAndFeel)[bVar8]->fields)._pyramidWidth *
                               ((*ppGVar9)->fields)._scale * fVar5,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._data;
                    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                      pPVar2 = (pGVar1->fields).Pyramid;
                      pGVar7 = (&(this_00->fields)._lookAndFeel)
                               [(this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0
                               ];
                      if (pGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                        fVar5 = zoomFactor;
                        if ((pGVar7->fields)._useZoomFactor == 0) {
                          fVar5 = _UNK_?;
                        }
                        ppGVar9 = &(this_00->fields)._sharedLookAndFeel;
                        if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                          ppGVar9 = &(this_00->fields)._lookAndFeel;
                        }
                        if (*ppGVar9 != (GizmoCap3DLookAndFeel *)0x0) {
                          ppGVar10 = &(this_00->fields)._sharedLookAndFeel;
                          if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0)
                          {
                            ppGVar10 = &(this_00->fields)._lookAndFeel;
                          }
                          if ((*ppGVar10 != (GizmoCap3DLookAndFeel *)0x0) &&
                             (pPVar2 != (PyramidShape3D *)0x0)) {
                            TriangPrismShape3D::TriangPrismShape3D_set_Height
                                      ((TriangPrismShape3D *)pPVar2,
                                       ((*ppGVar9)->fields)._pyramidDepth *
                                       ((*ppGVar10)->fields)._scale * fVar5,(MethodInfo *)0x0);
                            pGVar1 = (this->fields)._._data;
                            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                              pPVar2 = (pGVar1->fields).Pyramid;
                              fVar5 = GizmoCap3D::GizmoCap3D_GetRealPyramidHeight
                                                 (this_00,zoomFactor,(MethodInfo *)0x0);
                              if (pPVar2 != (PyramidShape3D *)0x0) {
                                TriangPrismShape3D::TriangPrismShape3D_set_Depth
                                          ((TriangPrismShape3D *)pPVar2,fVar5,(MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

