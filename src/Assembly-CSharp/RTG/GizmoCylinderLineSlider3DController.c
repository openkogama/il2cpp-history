
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
    if ((this_00->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      pGVar3 = (this_00->fields)._lookAndFeel;
      if (pGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (this_00->fields)._sharedLookAndFeel;
    }
    if ((pGVar3->fields)._useZoomFactor == 0) {
      zoomFactor = _UNK_?;
    }
    if ((this_00->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
      pGVar3 = (this_00->fields)._lookAndFeel;
      if (pGVar3 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
    }
    else {
      pGVar3 = (this_00->fields)._sharedLookAndFeel;
    }
    pGVar1 = (this->fields)._._data;
    fVar4 = (pGVar3->fields)._cylinderRadius * (pGVar3->fields)._scale * zoomFactor;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pCVar5 = (pGVar1->fields).Cylinder, pCVar5 != (CylinderShape3D *)0x0)) {
      VVar6.y = fVar2;
      VVar6.x = fVar4 + fVar4;
      VVar6.z = fVar4 + fVar4;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xfffffff0,(pCVar5->fields)._rotation,VVar6,
                          (MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      uVar9 = pVVar7->y;
      this = (GizmoCylinderLineSlider3DController *)pVVar7->z;
      fVar10 = (float)uVar9;
      VVar6.x = (float)uVar8;
      VVar6 = (Vector3)CONCAT84(uVar11,VVar6.x);
      fVar2 = Vector3Ex::Vector3Ex_AbsDot(VVar6,*pVVar7,(MethodInfo *)0x0);
      return fVar2;
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  fVar13 = (float10)(*pcVar12)();
  return (float)fVar13;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateEpsilons
               (GizmoCylinderLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    this_00 = (TorusShape3D *)(pGVar1->fields).Cylinder;
    pGVar2 = (((this->fields)._._data)->fields).Slider;
    if (pGVar2 != (GizmoLineSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (TorusShape3D *)0x0) {
        TorusShape3D::TorusShape3D_set_TubeRadiusEps
                  (this_00,zoomFactor * (pGVar3->fields)._cylinderHoverEps,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
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
    if (this_00 != (GizmoLineSlider3D *)0x0) {
      pVVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
      if (pCVar2 != (CylinderShape3D *)0x0) {
        CylinderShape3D::CylinderShape3D_AlignCentralAxis(pCVar2,*pVVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
          pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
          if ((this_00->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            pGVar5 = (this_00->fields)._lookAndFeel;
            if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar5 = (this_00->fields)._sharedLookAndFeel;
          }
          fVar6 = zoomFactor;
          if ((pGVar5->fields)._useZoomFactor == 0) {
            fVar6 = _UNK_?;
          }
          if ((this_00->fields)._sharedLookAndFeel == (GizmoLineSlider3DLookAndFeel *)0x0) {
            pGVar5 = (this_00->fields)._lookAndFeel;
            if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
          }
          else {
            pGVar5 = (this_00->fields)._sharedLookAndFeel;
          }
          if (pTVar4 != (TriangPrismShape3D *)0x0) {
            TriangPrismShape3D::TriangPrismShape3D_set_Width
                      (pTVar4,(pGVar5->fields)._cylinderRadius * (pGVar5->fields)._scale * fVar6,
                       (MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
              fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                                (this_00,zoomFactor,(MethodInfo *)0x0);
              if (pTVar4 != (TriangPrismShape3D *)0x0) {
                TriangPrismShape3D::TriangPrismShape3D_set_Height(pTVar4,fVar6,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
                  pGVar7 = (this_00->fields)._transform;
                  pCVar2 = (pGVar1->fields).Cylinder;
                  if (pGVar7 != (GizmoTransform *)0x0) {
                    fVar8 = (pGVar7->fields)._position3D.y;
                    fVar6 = (pGVar7->fields)._position3D.z;
                    if (pCVar2 != (CylinderShape3D *)0x0) {
                      (pCVar2->fields)._baseCenter.x = (pGVar7->fields)._position3D.x;
                      (pCVar2->fields)._baseCenter.y = fVar8;
                      (pCVar2->fields)._baseCenter.z = fVar6;
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

