
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
      GizmoCylinderLineSlider3DController_GetRealSizeAlongDirection
                (GizmoCylinderLineSlider3DController *this,Vector3 direction,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    fVar2 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar3 = (this_00->fields)._sharedLookAndFeel;
    pGVar4 = pGVar3;
    if ((pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar4 = (this_00->fields)._lookAndFeel, pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      if ((pGVar4->fields)._useZoomFactor == 0) {
        zoomFactor = _UNK_?;
      }
      if ((pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
         (pGVar3 = (this_00->fields)._lookAndFeel, pGVar3 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
        pGVar1 = (this->fields)._._data;
        fVar5 = (pGVar3->fields)._cylinderRadius * (pGVar3->fields)._scale * zoomFactor;
        if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
           (pCVar6 = (pGVar1->fields).Cylinder, pCVar6 != (CylinderShape3D *)0x0)) {
          fVar5 = fVar5 + fVar5;
          VVar7.y = fVar2;
          VVar7.x = fVar5;
          VVar7.z = fVar5;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             ((Vector3 *)&stack0xfffffff0,(pCVar6->fields)._rotation,VVar7,
                              (MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          this = (GizmoCylinderLineSlider3DController *)pVVar8->z;
          fVar11 = (float)uVar10;
          VVar7.x = (float)uVar9;
          VVar7 = (Vector3)CONCAT84(uVar12,VVar7.x);
          fVar2 = Vector3Ex::Vector3Ex_AbsDot(VVar7,*pVVar8,(MethodInfo *)0x0);
          return fVar2;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  fVar14 = (float10)(*pcVar13)();
  return (float)fVar14;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateEpsilons
               (GizmoCylinderLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    this_00 = (TorusShape3D *)(pGVar1->fields).Cylinder;
    if ((pGVar2 != (GizmoLineSlider3D *)0x0) &&
       (((pGVar3 = (pGVar2->fields)._sharedSettings, pGVar3 != (GizmoLineSlider3DSettings *)0x0 ||
         (pGVar3 = (pGVar2->fields)._settings, pGVar3 != (GizmoLineSlider3DSettings *)0x0)) &&
        (this_00 != (TorusShape3D *)0x0)))) {
      TorusShape3D::TorusShape3D_set_TubeRadiusEps
                (this_00,zoomFactor * (pGVar3->fields)._cylinderHoverEps,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateHandles
               (GizmoCylinderLineSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).SegmentIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).BoxIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider3D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).CylinderIndex,(pGVar3->fields)._._isVisible,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateTransforms
               (GizmoCylinderLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    pCVar2 = (pGVar1->fields).Cylinder;
    this_00 = (pGVar1->fields).Slider;
    if ((this_00 != (GizmoLineSlider3D *)0x0) &&
       (pVVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                           ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0),
       pCVar2 != (CylinderShape3D *)0x0)) {
      CylinderShape3D::CylinderShape3D_AlignCentralAxis(pCVar2,*pVVar3,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
        pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
        pGVar5 = (this_00->fields)._sharedLookAndFeel;
        pGVar6 = pGVar5;
        if ((pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
           (pGVar6 = (this_00->fields)._lookAndFeel, pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0))
        {
          fVar7 = zoomFactor;
          if ((pGVar6->fields)._useZoomFactor == 0) {
            fVar7 = _UNK_?;
          }
          if (((pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
              (pGVar5 = (this_00->fields)._lookAndFeel,
              pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0)) &&
             (pTVar4 != (TriangPrismShape3D *)0x0)) {
            TriangPrismShape3D::TriangPrismShape3D_set_Width
                      (pTVar4,(pGVar5->fields)._cylinderRadius * (pGVar5->fields)._scale * fVar7,
                       (MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
              fVar7 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                                 (this_00,zoomFactor,(MethodInfo *)0x0);
              if (pTVar4 != (TriangPrismShape3D *)0x0) {
                TriangPrismShape3D::TriangPrismShape3D_set_Height(pTVar4,fVar7,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
                  pGVar8 = (this_00->fields)._transform;
                  pCVar2 = (pGVar1->fields).Cylinder;
                  if (pGVar8 != (GizmoTransform *)0x0) {
                    fVar9 = (pGVar8->fields)._position3D.y;
                    fVar7 = (pGVar8->fields)._position3D.z;
                    if (pCVar2 != (CylinderShape3D *)0x0) {
                      (pCVar2->fields)._baseCenter.x = (pGVar8->fields)._position3D.x;
                      (pCVar2->fields)._baseCenter.y = fVar9;
                      (pCVar2->fields)._baseCenter.z = fVar7;
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

