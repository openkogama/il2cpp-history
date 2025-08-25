
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
      GizmoCylinderLineSlider3DController_GetRealSizeAlongDirection
                (GizmoCylinderLineSlider3DController *this,Vector3 direction,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    fVar2 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,(MethodInfo *)0x0)
    ;
    fVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                      (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pCVar4 = (pGVar1->fields).Cylinder, pCVar4 != (CylinderShape3D *)0x0)) {
      point.y = fVar2;
      point.x = fVar3 + fVar3;
      point.z = fVar3 + fVar3;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffec,(pCVar4->fields)._rotation,point,
                          (MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      v1.z = (float)uVar6;
      v1.x = (float)(int)direction._0_8_;
      v1.y = (float)(int)((ulonglong)direction._0_8_ >> 0x20);
      fVar2 = Vector3Ex::Vector3Ex_AbsDot(v1,*pVVar5,(MethodInfo *)0x0);
      return fVar2;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateEpsilons
               (GizmoCylinderLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    this_00 = (TorusShape3D *)(pGVar1->fields).Cylinder;
    pGVar2 = (pGVar1->fields).Slider;
    if (((pGVar2 != (GizmoLineSlider3D *)0x0) &&
        (pGVar3 = (&(pGVar2->fields)._settings)
                  [(pGVar2->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0],
        pGVar3 != (GizmoLineSlider3DSettings *)0x0)) && (this_00 != (TorusShape3D *)0x0)) {
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
    if (this_00 != (GizmoLineSlider3D *)0x0) {
      pVVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
      if (pCVar2 != (CylinderShape3D *)0x0) {
        CylinderShape3D::CylinderShape3D_AlignCentralAxis(pCVar2,*pVVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
          pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
          fVar5 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                            (this_00,zoomFactor,(MethodInfo *)0x0);
          if (pTVar4 != (TriangPrismShape3D *)0x0) {
            TriangPrismShape3D::TriangPrismShape3D_set_Width(pTVar4,fVar5,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pTVar4 = (TriangPrismShape3D *)(pGVar1->fields).Cylinder;
              fVar5 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                                (this_00,fVar5,(MethodInfo *)0x0);
              if (pTVar4 != (TriangPrismShape3D *)0x0) {
                TriangPrismShape3D::TriangPrismShape3D_set_Height(pTVar4,fVar5,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
                  pGVar6 = (this_00->fields)._transform;
                  pCVar2 = (pGVar1->fields).Cylinder;
                  if (pGVar6 != (GizmoTransform *)0x0) {
                    fVar7 = (pGVar6->fields)._position3D.y;
                    fVar5 = (pGVar6->fields)._position3D.z;
                    if (pCVar2 != (CylinderShape3D *)0x0) {
                      (pCVar2->fields)._baseCenter.x = (pGVar6->fields)._position3D.x;
                      (pCVar2->fields)._baseCenter.y = fVar7;
                      (pCVar2->fields)._baseCenter.z = fVar5;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

