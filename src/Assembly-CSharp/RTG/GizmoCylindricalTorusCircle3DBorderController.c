
/* Single GetTorusCoreRadius(Single) */

float Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
      GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoCircle3DBorder *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._planeSlider, pGVar3 != (GizmoPlaneSlider3D *)0x0)) {
    pGVar4 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel(pGVar3,(MethodInfo *)0x0);
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderCylTorusWidth;
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

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateEpsilons
               (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).BorderCylTorus;
    this_01 = (pGVar1->fields).PlaneSlider;
    if (this_01 != (GizmoPlaneSlider3D *)0x0) {
      pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_01,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider3DSettings *)0x0) && (this_00 != (CylTorusShape3D *)0x0)) {
        CylTorusShape3D::CylTorusShape3D_set_CylHrzRadiusEps
                  (this_00,zoomFactor * (pGVar2->fields)._borderTorusHoverEps,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
           (this_02 = (Touch *)(pGVar1->fields).BorderCylTorus, this_02 != (Touch *)0x0)) {
          value = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_radius
                            (this_02,(MethodInfo *)0x0);
          CylTorusShape3D::CylTorusShape3D_set_CylVertRadiusEps
                    ((CylTorusShape3D *)this_02,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateHandles
               (GizmoCylindricalTorusCircle3DBorderController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).BorderTorusIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Border, pGVar3 != (GizmoCircle3DBorder *)0x0)) &&
         (pGVar2 = (pGVar1->fields).TargetHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BorderCylTorusIndex,(pGVar3->fields)._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoCylindricalTorusCircle3DBorderController::
     GizmoCylindricalTorusCircle3DBorderController_UpdateTransforms
               (GizmoCylindricalTorusCircle3DBorderController *this,float zoomFactor,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
    pCVar2 = (pGVar1->fields).TargetCircle;
    this_00 = (pGVar1->fields).BorderCylTorus;
    if (pCVar2 != (CircleShape3D *)0x0) {
      fVar3 = (pCVar2->fields)._rotation.x;
      fVar4 = (pCVar2->fields)._rotation.y;
      fVar5 = (pCVar2->fields)._rotation.z;
      fVar6 = (pCVar2->fields)._rotation.w;
      euler.y = 0.0;
      euler.z = 0.0;
      euler.x = (float)_UNK_?;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffa0,euler,(MethodInfo *)0x0);
      fVar8 = pQVar7->x;
      fVar9 = pQVar7->y;
      fVar10 = pQVar7->z;
      fVar11 = pQVar7->w;
      fVar12 = pQVar7->x;
      fVar13 = pQVar7->x;
      if (this_00 != (CylTorusShape3D *)0x0) {
        (this_00->fields)._rotation.x =
             (fVar11 * fVar3 + fVar8 * fVar6 + fVar10 * fVar4) - fVar9 * fVar5;
        (this_00->fields)._rotation.y =
             (fVar4 * fVar11 + fVar9 * fVar6 + fVar5 * fVar8) - fVar10 * fVar3;
        (this_00->fields)._rotation.z =
             (fVar5 * fVar11 + fVar10 * fVar6 + fVar9 * fVar3) - fVar4 * fVar12;
        (this_00->fields)._rotation.w =
             ((fVar11 * fVar6 - fVar3 * fVar13) - fVar9 * fVar4) - fVar5 * fVar10;
        fVar13 = (pCVar2->fields)._center.y;
        fVar12 = (pCVar2->fields)._center.z;
        (this_00->fields)._center.x = (pCVar2->fields)._center.x;
        (this_00->fields)._center.y = fVar13;
        (this_00->fields)._center.z = fVar12;
        fVar12 = GizmoCylindricalTorusCircle3DBorderController_GetTorusCoreRadius
                           (this,zoomFactor,(MethodInfo *)0x0);
        TorusShape3D::TorusShape3D_set_CoreRadius((TorusShape3D *)this_00,fVar12,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) {
          pGVar14 = (pGVar1->fields).Border;
          if ((pGVar14 != (GizmoCircle3DBorder *)0x0) &&
             (pGVar15 = (pGVar14->fields)._planeSlider, pGVar15 != (GizmoPlaneSlider3D *)0x0)) {
            pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                (pGVar15,(MethodInfo *)0x0);
            if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
              fVar12 = (pGVar16->fields)._borderCylTorusWidth;
              pGVar15 = (pGVar14->fields)._planeSlider;
              if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                    (pGVar15,(MethodInfo *)0x0);
                if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                  TorusShape3D::TorusShape3D_set_TubeRadius
                            ((TorusShape3D *)this_00,
                             fVar12 * zoomFactor * (pGVar16->fields)._scale * _UNK_?,
                             (MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._data;
                  if (((pGVar1 != (GizmoCircle3DBorderControllerData *)0x0) &&
                      (pGVar14 = (pGVar1->fields).Border, pGVar14 != (GizmoCircle3DBorder *)0x0)) &&
                     (pGVar15 = (pGVar14->fields)._planeSlider, pGVar15 != (GizmoPlaneSlider3D *)0x0))
                  {
                    pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                        (pGVar15,(MethodInfo *)0x0);
                    if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                      fVar12 = (pGVar16->fields)._borderCylTorusHeight;
                      pGVar15 = (pGVar14->fields)._planeSlider;
                      if (pGVar15 != (GizmoPlaneSlider3D *)0x0) {
                        pGVar16 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_LookAndFeel
                                            (pGVar15,(MethodInfo *)0x0);
                        if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                          RightAngTriangle2D::RightAngTriangle2D_set_XLength
                                    ((RightAngTriangle2D *)this_00,
                                     fVar12 * zoomFactor * (pGVar16->fields)._scale * _UNK_?,
                                     (MethodInfo *)0x0);
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
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

