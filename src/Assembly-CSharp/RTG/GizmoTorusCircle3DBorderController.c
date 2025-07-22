
/* Single GetTorusCoreRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
      GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoCircle3DBorder *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._planeSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar3,(MethodInfo *)0x0);
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderTorusThickness;
      pGVar3 = (pGVar2->fields)._planeSlider;
      if (pGVar3 != (GizmoPlaneSlider3D *)0x0) {
        pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar3,(MethodInfo *)0x0);
        if (((pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
            (pGVar1 = (this->fields)._._data, pGVar1 != (GizmoCircle3DBorderControllerData *)0x0))
           && (pCVar6 = (pGVar1->fields).TargetCircle, pCVar6 != (CircleShape3D *)0x0)) {
          return (pCVar6->fields)._radius -
                 fVar5 * zoomFactor * (pGVar4->fields)._scale * _UNK_?;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateEpsilons
               (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).PlaneSlider;
    this_01 = (pGVar1->fields).BorderTorus;
    if (this_00 != (GizmoPlaneSlider3D *)0x0) {
      pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_00,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider3DSettings *)0x0) && (this_01 != (TorusShape3D *)0x0)) {
        TorusShape3D::TorusShape3D_set_TubeRadiusEps
                  (this_01,zoomFactor * (pGVar2->fields)._borderTorusHoverEps,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateHandles
               (GizmoTorusCircle3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).BorderCircleIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).BorderCylTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
         (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BorderTorusIndex,(pGVar3->fields)._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateTransforms
               (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).BorderTorus;
    pCVar2 = (((this->fields)._._data)->fields).TargetCircle;
    pGVar3 = (((this->fields)._._data)->fields).Border;
    if ((pGVar3 != (GizmoCircle3DBorder *)0x0) &&
       (pGVar4 = (pGVar3->fields)._planeSlider, pGVar4 != (GizmoPlaneSlider3D *)0x0)) {
      pGVar5 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar4,(MethodInfo *)0x0);
      if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        fVar6 = (pGVar5->fields)._borderTorusThickness;
        pGVar4 = (pGVar3->fields)._planeSlider;
        if (pGVar4 != (GizmoPlaneSlider3D *)0x0) {
          pGVar5 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar4,(MethodInfo *)0x0)
          ;
          if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            fVar7 = (pGVar5->fields)._scale;
            if (pCVar2 != (CircleShape3D *)0x0) {
              fVar8 = (pCVar2->fields)._rotation.x;
              fVar9 = (pCVar2->fields)._rotation.y;
              fVar10 = (pCVar2->fields)._rotation.z;
              fVar11 = (pCVar2->fields)._rotation.w;
              euler.y = 0.0;
              euler.z = 0.0;
              euler.x = (float)_UNK_?;
              pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffa0,euler,(MethodInfo *)0x0);
              fVar13 = pQVar12->x;
              fVar14 = pQVar12->y;
              fVar15 = pQVar12->z;
              fVar16 = pQVar12->w;
              fVar17 = pQVar12->x;
              fVar18 = pQVar12->x;
              if (this_00 != (TorusShape3D *)0x0) {
                (this_00->fields)._rotation.x =
                     (fVar16 * fVar8 + fVar13 * fVar11 + fVar15 * fVar9) - fVar14 * fVar10;
                (this_00->fields)._rotation.y =
                     (fVar9 * fVar16 + fVar14 * fVar11 + fVar10 * fVar13) - fVar15 * fVar8;
                (this_00->fields)._rotation.z =
                     (fVar10 * fVar16 + fVar15 * fVar11 + fVar14 * fVar8) - fVar9 * fVar17;
                (this_00->fields)._rotation.w =
                     ((fVar16 * fVar11 - fVar8 * fVar18) - fVar14 * fVar9) - fVar10 * fVar15;
                fVar18 = (pCVar2->fields)._center.y;
                fVar17 = (pCVar2->fields)._center.z;
                (this_00->fields)._center.x = (pCVar2->fields)._center.x;
                (this_00->fields)._center.y = fVar18;
                (this_00->fields)._center.z = fVar17;
                fVar17 = GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                                   (this,zoomFactor,(MethodInfo *)0x0);
                TorusShape3D::TorusShape3D_set_CoreRadius(this_00,fVar17,(MethodInfo *)0x0);
                TorusShape3D::TorusShape3D_set_TubeRadius
                          (this_00,fVar6 * zoomFactor * fVar7 * _UNK_?,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

