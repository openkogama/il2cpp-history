
/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoConeCap3DController::
      GizmoConeCap3DController_GetSliderAlignedRealLength
                (GizmoConeCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealConeHeight(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
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
    this_00 = (pGVar1->fields).Cap;
    pCVar2 = (((this->fields)._._data)->fields).Cone;
    if ((this_00 != (GizmoCap3D *)0x0) &&
       (pGVar3 = (this_00->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
      fVar4 = (pGVar3->fields)._position3D.y;
      fVar5 = (pGVar3->fields)._position3D.z;
      if (pCVar2 != (ConeShape3D *)0x0) {
        (pCVar2->fields)._baseCenter.x = (pGVar3->fields)._position3D.x;
        (pCVar2->fields)._baseCenter.y = fVar4;
        (pCVar2->fields)._baseCenter.z = fVar5;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pGVar3 = (this_00->fields)._transform;
          pCVar2 = (pGVar1->fields).Cone;
          if (pGVar3 != (GizmoTransform *)0x0) {
            fVar5 = (pGVar3->fields)._rotation3D.y;
            fVar4 = (pGVar3->fields)._rotation3D.z;
            fVar6 = (pGVar3->fields)._rotation3D.w;
            if (pCVar2 != (ConeShape3D *)0x0) {
              (pCVar2->fields)._rotation.x = (pGVar3->fields)._rotation3D.x;
              (pCVar2->fields)._rotation.y = fVar5;
              (pCVar2->fields)._rotation.z = fVar4;
              (pCVar2->fields)._rotation.w = fVar6;
              pGVar1 = (this->fields)._._data;
              if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                pCVar2 = (pGVar1->fields).Cone;
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
                  if ((*ppGVar9 != (GizmoCap3DLookAndFeel *)0x0) && (pCVar2 != (ConeShape3D *)0x0))
                  {
                    ConeShape3D::ConeShape3D_set_BaseRadius
                              (pCVar2,((&(this_00->fields)._lookAndFeel)[bVar8]->fields)._coneRadius
                                      * ((*ppGVar9)->fields)._scale * fVar5,(MethodInfo *)0x0);
                    pGVar1 = (this->fields)._._data;
                    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                      pCVar2 = (pGVar1->fields).Cone;
                      fVar5 = GizmoCap3D::GizmoCap3D_GetRealConeHeight
                                         (this_00,zoomFactor,(MethodInfo *)0x0);
                      if (pCVar2 != (ConeShape3D *)0x0) {
                        ConeShape3D::ConeShape3D_set_Height(pCVar2,fVar5,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

