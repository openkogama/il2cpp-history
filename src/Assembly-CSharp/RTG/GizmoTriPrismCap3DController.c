
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3D
               (GizmoTriPrismCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Rotation3D
                (pGVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         ((pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0 &&
          (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)))) {
        GizmoTransform::GizmoTransform_AlignAxis3D
                  (pGVar3,2,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
           ((pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0 &&
            (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)))) {
          GizmoTransform::GizmoTransform_set_Position3D(pGVar3,sliderEndPt,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3DInvert
               (GizmoTriPrismCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if ((pGVar2 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Rotation3D
                (pGVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
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
                    (pGVar3,2,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
            pGVar2 = (pGVar1->fields).Cap;
            pIVar4 = this->klass[1]._0.image;
            fVar5 = (float10)(*(code *)(this->klass->vtable).GetSliderAlignedRealLength_1.method)();
            fVar6 = (float)fVar5;
            if ((pGVar2 != (GizmoCap3D *)0x0) &&
               (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
              value.y = (float)pIVar4 + fVar6 * 4.1789956e-29;
              value.x = zoomFactor + sliderDirection.x * fVar6;
              value.z = sliderEndPt.z + (float)this * fVar6;
              GizmoTransform::GizmoTransform_set_Position3D(pGVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
      GizmoTriPrismCap3DController_GetSliderAlignedRealLength
                (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

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
    return (pGVar4->fields)._scale * (pGVar4->fields)._trPrismDepth * fStack_3;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateHandles
               (GizmoTriPrismCap3DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
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
                      (pGVar2,(pGVar1->fields).TrPrismIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateTransforms
               (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pTVar2 = (pGVar1->fields).TrPrism;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._rotation3D.y;
      fVar6 = (pGVar4->fields)._rotation3D.z;
      fVar7 = (pGVar4->fields)._rotation3D.w;
      if (pTVar2 != (TriangPrismShape3D *)0x0) {
        (pTVar2->fields)._rotation.x = (pGVar4->fields)._rotation3D.x;
        (pTVar2->fields)._rotation.y = fVar5;
        (pTVar2->fields)._rotation.z = fVar6;
        (pTVar2->fields)._rotation.w = fVar7;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pTVar2 = (pGVar1->fields).TrPrism;
          if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            pGVar8 = (pGVar3->fields)._lookAndFeel;
            if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
          }
          fVar5 = zoomFactor;
          if ((pGVar8->fields)._useZoomFactor == 0) {
            fVar5 = _UNK_?;
          }
          if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
            pGVar8 = (pGVar3->fields)._lookAndFeel;
            if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
          }
          if (pTVar2 != (TriangPrismShape3D *)0x0) {
            TriangPrismShape3D::TriangPrismShape3D_set_Width
                      (pTVar2,(pGVar8->fields)._trPrismWidth * (pGVar8->fields)._scale * fVar5,
                       (MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              pTVar2 = (pGVar1->fields).TrPrism;
              if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                pGVar8 = (pGVar3->fields)._lookAndFeel;
                if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
              }
              fVar5 = zoomFactor;
              if ((pGVar8->fields)._useZoomFactor == 0) {
                fVar5 = _UNK_?;
              }
              if ((pGVar3->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                pGVar8 = (pGVar3->fields)._lookAndFeel;
                if (pGVar8 == (GizmoCap3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pGVar8 = (pGVar3->fields)._sharedLookAndFeel;
              }
              if (pTVar2 != (TriangPrismShape3D *)0x0) {
                TriangPrismShape3D::TriangPrismShape3D_set_Height
                          (pTVar2,(pGVar8->fields)._trPrismHeight * (pGVar8->fields)._scale * fVar5,
                           (MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                  pTVar2 = (pGVar1->fields).TrPrism;
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
                  if (pTVar2 != (TriangPrismShape3D *)0x0) {
                    TriangPrismShape3D::TriangPrismShape3D_set_Depth
                              (pTVar2,(pGVar8->fields)._trPrismDepth * (pGVar8->fields)._scale *
                                      zoomFactor,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._data;
                    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                      pGVar4 = (pGVar3->fields)._transform;
                      pTVar2 = (pGVar1->fields).TrPrism;
                      if ((pGVar4 != (GizmoTransform *)0x0) && (pTVar2 != (TriangPrismShape3D *)0x0)
                         ) {
                        fStack9 = (pGVar4->fields)._position3D.z;
                        TriangPrismShape3D::TriangPrismShape3D_set_FrontCenter
                                  (pTVar2,(pGVar4->fields)._position3D,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

