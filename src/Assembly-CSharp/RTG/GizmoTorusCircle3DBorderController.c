
/* Single GetTorusCoreRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
      GizmoTorusCircle3DBorderController_GetTorusCoreRadius
                (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if (((pGVar2 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar3 = (pGVar2->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
     (pGVar4 = (pGVar3->fields)._planeSlider, pGVar4 != (GizmoPlaneSlider3D *)0x0)) {
    if ((pGVar4->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      pGVar5 = (pGVar4->fields)._lookAndFeel;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      fVar6 = (pGVar5->fields)._borderTorusThickness;
      pGVar5 = (((pGVar3->fields)._planeSlider)->fields)._lookAndFeel;
    }
    else {
      fVar6 = (((pGVar4->fields)._sharedLookAndFeel)->fields)._borderTorusThickness;
      pGVar5 = (((pGVar3->fields)._planeSlider)->fields)._sharedLookAndFeel;
    }
    pCVar7 = (((this->fields)._._data)->fields).TargetCircle;
    if (pCVar7 != (CircleShape3D *)0x0) {
      return (pCVar7->fields)._radius - fVar6 * zoomFactor * (pGVar5->fields)._scale * _UNK_?
      ;
    }
  }
code_?:
  uVar8 = func_?(auStack_9);
  func_?(uVar8);
  pcVar10 = (code *)swi(3);
  fVar11 = (float10)(*pcVar10)();
  return (float)fVar11;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoTorusCircle3DBorderController::
     GizmoTorusCircle3DBorderController_UpdateEpsilons
               (GizmoTorusCircle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).BorderTorus;
    pGVar2 = (((this->fields)._._data)->fields).PlaneSlider;
    if (pGVar2 != (GizmoPlaneSlider3D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider3DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoPlaneSlider3DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (TorusShape3D *)0x0) {
        TorusShape3D::TorusShape3D_set_TubeRadiusEps
                  (this_00,zoomFactor * (pGVar3->fields)._borderTorusHoverEps,(MethodInfo *)0x0);
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
    pGVar2 = (this->fields)._._data;
    this_00 = (pGVar1->fields).BorderTorus;
    pGVar3 = (pGVar2->fields).Border;
    pCVar4 = (pGVar2->fields).TargetCircle;
    if ((pGVar3 != (GizmoCircle3DBorder *)0x0) &&
       (pGVar5 = (pGVar3->fields)._planeSlider, pGVar5 != (GizmoPlaneSlider3D *)0x0)) {
      if ((pGVar5->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        pGVar6 = (pGVar5->fields)._lookAndFeel;
        if (pGVar6 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
        fVar7 = (pGVar6->fields)._borderTorusThickness;
        pGVar6 = (((pGVar3->fields)._planeSlider)->fields)._lookAndFeel;
      }
      else {
        fVar7 = (((pGVar5->fields)._sharedLookAndFeel)->fields)._borderTorusThickness;
        pGVar6 = (((pGVar3->fields)._planeSlider)->fields)._sharedLookAndFeel;
      }
      fVar8 = (pGVar6->fields)._scale;
      if (pCVar4 != (CircleShape3D *)0x0) {
        fVar9 = (pCVar4->fields)._rotation.x;
        fVar10 = (pCVar4->fields)._rotation.y;
        fVar11 = (pCVar4->fields)._rotation.z;
        fVar12 = (pCVar4->fields)._rotation.w;
        euler.y = 0.0;
        euler.z = 0.0;
        euler.x = (float)_UNK_?;
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffa0,euler,(MethodInfo *)0x0);
        fVar14 = pQVar13->x;
        fVar15 = pQVar13->y;
        fVar16 = pQVar13->z;
        fVar17 = pQVar13->w;
        fVar18 = pQVar13->x;
        fVar19 = pQVar13->x;
        if (this_00 != (TorusShape3D *)0x0) {
          (this_00->fields)._rotation.x =
               (fVar17 * fVar9 + fVar14 * fVar12 + fVar16 * fVar10) - fVar15 * fVar11;
          (this_00->fields)._rotation.y =
               (fVar10 * fVar17 + fVar15 * fVar12 + fVar11 * fVar14) - fVar16 * fVar9;
          (this_00->fields)._rotation.z =
               (fVar11 * fVar17 + fVar16 * fVar12 + fVar15 * fVar9) - fVar10 * fVar18;
          (this_00->fields)._rotation.w =
               ((fVar17 * fVar12 - fVar9 * fVar19) - fVar15 * fVar10) - fVar11 * fVar16;
          fVar19 = (pCVar4->fields)._center.y;
          fVar18 = (pCVar4->fields)._center.z;
          (this_00->fields)._center.x = (pCVar4->fields)._center.x;
          (this_00->fields)._center.y = fVar19;
          (this_00->fields)._center.z = fVar18;
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
             (pGVar5 = (pGVar3->fields)._planeSlider, pGVar5 != (GizmoPlaneSlider3D *)0x0)) {
            if ((pGVar5->fields)._sharedLookAndFeel == (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              pGVar6 = (pGVar5->fields)._lookAndFeel;
              if (pGVar6 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
              fVar18 = (pGVar6->fields)._borderTorusThickness;
              pGVar6 = (((pGVar3->fields)._planeSlider)->fields)._lookAndFeel;
            }
            else {
              fVar18 = (((pGVar5->fields)._sharedLookAndFeel)->fields)._borderTorusThickness;
              pGVar6 = (((pGVar3->fields)._planeSlider)->fields)._sharedLookAndFeel;
            }
            pCVar4 = (((this->fields)._._data)->fields).TargetCircle;
            if (pCVar4 != (CircleShape3D *)0x0) {
              TorusShape3D::TorusShape3D_set_CoreRadius
                        (this_00,(pCVar4->fields)._radius -
                                 fVar18 * zoomFactor * (pGVar6->fields)._scale * _UNK_?,
                         (MethodInfo *)0x0);
              TorusShape3D::TorusShape3D_set_TubeRadius
                        (this_00,fVar7 * zoomFactor * fVar8 * _UNK_?,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

