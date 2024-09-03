
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_CapSlider3D
               (GizmoBoxCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    GizmoTransform::GizmoTransform_AlignAxis3D
              (pGVar3,0,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
      pGVar2 = (pGVar1->fields).Cap;
      pBVar4 = (pGVar1->fields).Box;
      if (pBVar4 != (BoxShape3D *)0x0) {
        uVar5 = (pBVar4->fields)._size.x;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
          value.z = sliderEndPt.z + sliderDirection.z * (float)uVar5 * _UNK_?;
          value.x = sliderEndPt.x + sliderDirection.x * (float)uVar5 * _UNK_?;
          value.y = sliderEndPt.y + sliderDirection.y * (float)uVar5 * _UNK_?;
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


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_CapSlider3DInvert
               (GizmoBoxCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
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
                (pGVar3,0,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
        pGVar2 = (pGVar1->fields).Cap;
        fVar4 = (float10)(*(code *)(this->klass->vtable).GetSliderAlignedRealLength_1.method)
                                   (this,zoomFactor);
        fVar5 = (float)fVar4;
        if ((pGVar2 != (GizmoCap3D *)0x0) &&
           (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
          value.y = sliderEndPt.y + sliderDirection.y * fVar5 * _UNK_?;
          value.x = sliderEndPt.x + sliderDirection.x * fVar5 * _UNK_?;
          value.z = sliderEndPt.z + sliderDirection.z * fVar5 * _UNK_?;
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

float Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::
      GizmoBoxCap3DController_GetSliderAlignedRealLength
                (GizmoBoxCap3DController *this,float zoomFactor,MethodInfo *method)

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
    return (pGVar4->fields)._scale * (pGVar4->fields)._boxWidth * fStack_3;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_UpdateHandles
               (GizmoBoxCap3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).PyramidIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).TrPrismIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).ConeIndex,0,(MethodInfo *)0x0);
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
                      (pGVar2,(pGVar1->fields).BoxIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoBoxCap3DController::GizmoBoxCap3DController_UpdateTransforms
               (GizmoBoxCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pBVar2 = (pGVar1->fields).Box;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.y;
      fVar6 = (pGVar4->fields)._position3D.z;
      if (pBVar2 != (BoxShape3D *)0x0) {
        (pBVar2->fields)._center.x = (pGVar4->fields)._position3D.x;
        (pBVar2->fields)._center.y = fVar5;
        (pBVar2->fields)._center.z = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar4 = (pGVar3->fields)._transform;
          pBVar2 = (pGVar1->fields).Box;
          if ((pGVar4 != (GizmoTransform *)0x0) && (pBVar2 != (BoxShape3D *)0x0)) {
            BoxShape3D::BoxShape3D_set_Rotation
                      (pBVar2,(pGVar4->fields)._rotation3D,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              pBVar2 = (pGVar1->fields).Box;
              if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                pGVar7 = (pGVar3->fields)._lookAndFeel;
                if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar7 = (pGVar3->fields)._sharedLookAndFeel;
              }
              if ((pGVar7->fields)._useZoomFactor == 0) {
                zoomFactor = _UNK_?;
              }
              if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                pGVar7 = (pGVar3->fields)._lookAndFeel;
                if (pGVar7 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar7 = (pGVar3->fields)._sharedLookAndFeel;
              }
              fVar6 = (pGVar7->fields)._scale;
              if (pBVar2 != (BoxShape3D *)0x0) {
                value.y = zoomFactor * fVar6 * (pGVar7->fields)._boxHeight;
                value.x = zoomFactor * fVar6 * (pGVar7->fields)._boxWidth;
                value.z = zoomFactor * fVar6 * (pGVar7->fields)._boxDepth;
                BoxShape3D::BoxShape3D_set_Size(pBVar2,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

