
/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoConeCap3DController::
      GizmoConeCap3DController_GetSliderAlignedRealLength
                (GizmoConeCap3DController *this,float zoomFactor,MethodInfo *method)

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
    return (pGVar4->fields)._scale * (pGVar4->fields)._coneHeight * fStack_3;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoConeCap3DController::GizmoConeCap3DController_UpdateHandles
               (GizmoConeCap3DController *this,MethodInfo *method)

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
                      (pGVar2,(pGVar1->fields).ConeIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoConeCap3DController::GizmoConeCap3DController_UpdateTransforms
               (GizmoConeCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pCVar2 = (pGVar1->fields).Cone;
    pGVar3 = (pGVar1->fields).Cap;
    if ((pGVar3 != (GizmoCap3D *)0x0) &&
       (pGVar4 = (pGVar3->fields)._transform, pGVar4 != (GizmoTransform *)0x0)) {
      fVar5 = (pGVar4->fields)._position3D.y;
      fVar6 = (pGVar4->fields)._position3D.z;
      if (pCVar2 != (ConeShape3D *)0x0) {
        (pCVar2->fields)._baseCenter.x = (pGVar4->fields)._position3D.x;
        (pCVar2->fields)._baseCenter.y = fVar5;
        (pCVar2->fields)._baseCenter.z = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar4 = (pGVar3->fields)._transform;
          pCVar2 = (pGVar1->fields).Cone;
          if (pGVar4 != (GizmoTransform *)0x0) {
            fVar6 = (pGVar4->fields)._rotation3D.y;
            fVar5 = (pGVar4->fields)._rotation3D.z;
            fVar7 = (pGVar4->fields)._rotation3D.w;
            if (pCVar2 != (ConeShape3D *)0x0) {
              (pCVar2->fields)._rotation.x = (pGVar4->fields)._rotation3D.x;
              (pCVar2->fields)._rotation.y = fVar6;
              (pCVar2->fields)._rotation.z = fVar5;
              (pCVar2->fields)._rotation.w = fVar7;
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                pCVar2 = (pGVar1->fields).Cone;
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
                if (pCVar2 != (ConeShape3D *)0x0) {
                  ConeShape3D::ConeShape3D_set_BaseRadius
                            (pCVar2,(pGVar8->fields)._coneRadius * (pGVar8->fields)._scale * fVar6,
                             (MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                    pCVar2 = (pGVar1->fields).Cone;
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
                    if (pCVar2 != (ConeShape3D *)0x0) {
                      ConeShape3D::ConeShape3D_set_Height
                                (pCVar2,(pGVar8->fields)._coneHeight * (pGVar8->fields)._scale *
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

