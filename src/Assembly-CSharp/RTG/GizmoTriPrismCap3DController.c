
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
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          axis.x = (float)((uint)sliderDirection.x ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          axis.z = (float)((uint)sliderDirection.z ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
              value.y = (float)pIVar4 + fVar6 * 4.187932e-29;
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
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
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
    this_00 = (pGVar1->fields).Cap;
    pTVar2 = (((this->fields)._._data)->fields).TrPrism;
    if ((this_00 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (this_00->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      fVar4 = (pGVar3->fields)._rotation3D.y;
      fVar5 = (pGVar3->fields)._rotation3D.z;
      fVar6 = (pGVar3->fields)._rotation3D.w;
      if (pTVar2 != (TriangPrismShape3D *)0x0) {
        (pTVar2->fields)._rotation.x = (pGVar3->fields)._rotation3D.x;
        (pTVar2->fields)._rotation.y = fVar4;
        (pTVar2->fields)._rotation.z = fVar5;
        (pTVar2->fields)._rotation.w = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pTVar2 = (pGVar1->fields).TrPrism;
          pGVar7 = (&(this_00->fields)._lookAndFeel)
                   [(this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0];
          if (pGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
            fVar4 = zoomFactor;
            if ((pGVar7->fields)._useZoomFactor == 0) {
              fVar4 = _UNK_?;
            }
            bVar8 = (this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0;
            ppGVar9 = &(this_00->fields)._sharedLookAndFeel;
            if (!bVar8) {
              ppGVar9 = &(this_00->fields)._lookAndFeel;
            }
            if ((*ppGVar9 != (GizmoCap3DLookAndFeel *)0x0) && (pTVar2 != (TriangPrismShape3D *)0x0))
            {
              TriangPrismShape3D::TriangPrismShape3D_set_Width
                        (pTVar2,((&(this_00->fields)._lookAndFeel)[bVar8]->fields)._trPrismWidth *
                                ((*ppGVar9)->fields)._scale * fVar4,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                pTVar2 = (pGVar1->fields).TrPrism;
                pGVar7 = (&(this_00->fields)._lookAndFeel)
                         [(this_00->fields)._sharedLookAndFeel != (GizmoCap3DLookAndFeel *)0x0];
                if (pGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                  fVar4 = zoomFactor;
                  if ((pGVar7->fields)._useZoomFactor == 0) {
                    fVar4 = _UNK_?;
                  }
                  ppGVar9 = &(this_00->fields)._sharedLookAndFeel;
                  if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                    ppGVar9 = &(this_00->fields)._lookAndFeel;
                  }
                  if (*ppGVar9 != (GizmoCap3DLookAndFeel *)0x0) {
                    ppGVar10 = &(this_00->fields)._sharedLookAndFeel;
                    if ((this_00->fields)._sharedLookAndFeel == (GizmoCap3DLookAndFeel *)0x0) {
                      ppGVar10 = &(this_00->fields)._lookAndFeel;
                    }
                    if ((*ppGVar10 != (GizmoCap3DLookAndFeel *)0x0) &&
                       (pTVar2 != (TriangPrismShape3D *)0x0)) {
                      TriangPrismShape3D::TriangPrismShape3D_set_Height
                                (pTVar2,((*ppGVar9)->fields)._trPrismHeight *
                                        ((*ppGVar10)->fields)._scale * fVar4,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._._data;
                      if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                        pTVar2 = (pGVar1->fields).TrPrism;
                        fVar4 = GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth
                                           (this_00,zoomFactor,(MethodInfo *)0x0);
                        if (pTVar2 != (TriangPrismShape3D *)0x0) {
                          TriangPrismShape3D::TriangPrismShape3D_set_Depth
                                    (pTVar2,fVar4,(MethodInfo *)0x0);
                          pGVar1 = (this->fields)._._data;
                          if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                            pGVar3 = (this_00->fields)._transform;
                            pTVar2 = (pGVar1->fields).TrPrism;
                            if ((pGVar3 != (GizmoTransform *)0x0) &&
                               (pTVar2 != (TriangPrismShape3D *)0x0)) {
                              TriangPrismShape3D::TriangPrismShape3D_set_FrontCenter
                                        (pTVar2,(pGVar3->fields)._position3D,(MethodInfo *)0x0);
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
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

