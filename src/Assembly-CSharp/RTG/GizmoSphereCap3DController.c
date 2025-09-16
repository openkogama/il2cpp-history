
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_CapSlider3D
               (GizmoSphereCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
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
      pSVar4 = (pGVar1->fields).Sphere;
      if (pSVar4 != (SphereShape3D *)0x0) {
        fVar5 = (pSVar4->fields)._radius;
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


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_CapSlider3DInvert
               (GizmoSphereCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
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
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar4 = (pGVar2->fields)._lookAndFeel;
          if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar4 = (pGVar2->fields)._sharedLookAndFeel;
        }
        if ((pGVar4->fields)._useZoomFactor == 0) {
          zoomFactor = _UNK_?;
        }
        if ((pGVar2->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
          pGVar4 = (pGVar2->fields)._lookAndFeel;
          if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
        }
        else {
          pGVar4 = (pGVar2->fields)._sharedLookAndFeel;
        }
        fVar5 = (pGVar4->fields)._sphereRadius * (pGVar4->fields)._scale * zoomFactor;
        pGVar3 = (pGVar2->fields)._transform;
        if (pGVar3 != (GizmoTransform *)0x0) {
          value.y = sliderEndPt.y + sliderDirection.y * fVar5;
          value.x = sliderEndPt.x + sliderDirection.x * fVar5;
          value.z = sliderEndPt.z + sliderDirection.z * fVar5;
          GizmoTransform::GizmoTransform_set_Position3D(pGVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
      GizmoSphereCap3DController_GetSliderAlignedRealLength
                (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar3 = (pGVar2->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) {
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar4 = (pGVar3->fields)._lookAndFeel;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
    }
    if ((pGVar4->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
      pGVar4 = (pGVar3->fields)._lookAndFeel;
      if (pGVar4 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar4 = (pGVar3->fields)._sharedLookAndFeel;
    }
    fVar5 = (pGVar4->fields)._sphereRadius * (pGVar4->fields)._scale * zoomFactor;
    return fVar5 + fVar5;
  }
code_?:
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_UpdateHandles
               (GizmoSphereCap3DController *this,MethodInfo *method)

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
                    (pGVar2,(pGVar1->fields).PyramidIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            GizmoHandle::GizmoHandle_Set3DShapeVisible
                      (pGVar2,(pGVar1->fields).SphereIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_UpdateTransforms
               (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pSVar2 = (pGVar1->fields).Sphere;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.y;
      fVar6 = (pGVar4->fields)._position3D.z;
      if (pSVar2 != (SphereShape3D *)0x0) {
        (pSVar2->fields)._center.x = (pGVar4->fields)._position3D.x;
        (pSVar2->fields)._center.y = fVar5;
        (pSVar2->fields)._center.z = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar4 = (pGVar3->fields)._transform;
          pSVar2 = (pGVar1->fields).Sphere;
          if (pGVar4 != (GizmoTransform *)0x0) {
            fVar6 = (pGVar4->fields)._rotation3D.y;
            fVar5 = (pGVar4->fields)._rotation3D.z;
            fVar7 = (pGVar4->fields)._rotation3D.w;
            if (pSVar2 != (SphereShape3D *)0x0) {
              (pSVar2->fields)._rotation.x = (pGVar4->fields)._rotation3D.x;
              (pSVar2->fields)._rotation.y = fVar6;
              (pSVar2->fields)._rotation.z = fVar5;
              (pSVar2->fields)._rotation.w = fVar7;
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                this_00 = (TorusShape3D *)(pGVar1->fields).Sphere;
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
                if (this_00 != (TorusShape3D *)0x0) {
                  TorusShape3D::TorusShape3D_set_CoreRadius
                            (this_00,(pGVar8->fields)._sphereRadius * (pGVar8->fields)._scale *
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

