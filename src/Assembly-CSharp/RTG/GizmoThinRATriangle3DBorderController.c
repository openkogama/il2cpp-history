
/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::
     GizmoThinRATriangle3DBorderController_UpdateEpsilons
               (GizmoThinRATriangle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) {
    this_00 = (pGVar1->fields).BorderTriangle;
    this_01 = (pGVar1->fields).PlaneSlider;
    if (this_01 != (GizmoPlaneSlider3D *)0x0) {
      pGVar2 = GizmoPlaneSlider3D::GizmoPlaneSlider3D_get_Settings(this_01,(MethodInfo *)0x0);
      if ((pGVar2 != (GizmoPlaneSlider3DSettings *)0x0) && (this_00 != (RightAngTriangle3D *)0x0)) {
        RightAngTriangle3D::RightAngTriangle3D_set_WireEps
                  (this_00,zoomFactor * (pGVar2->fields)._borderLineHoverEps,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) &&
           (this_02 = (Touch *)(pGVar1->fields).BorderTriangle, this_02 != (Touch *)0x0)) {
          value = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_altitudeAngle
                            (this_02,(MethodInfo *)0x0);
          RightAngTriangle3D::RightAngTriangle3D_set_ExtrudeEps
                    ((RightAngTriangle3D *)this_02,value,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::
     GizmoThinRATriangle3DBorderController_UpdateHandles
               (GizmoThinRATriangle3DBorderController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Border, pGVar2 != (GizmoRATriangle3DBorder *)0x0)) &&
     (this_00 = (pGVar1->fields).TargetHandle, this_00 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (this_00,(pGVar1->fields).BorderTriangleIndex,(pGVar2->fields)._isVisible,
               (MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinRATriangle3DBorderController::
     GizmoThinRATriangle3DBorderController_UpdateTransforms
               (GizmoThinRATriangle3DBorderController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoRATriangle3DBorderControllerData *)0x0) &&
     (pRVar2 = (pGVar1->fields).TargetTriangle, pRVar2 != (RightAngTriangle3D *)0x0)) {
    this_00 = (pGVar1->fields).BorderTriangle;
    fVar3 = (pRVar2->fields)._rotation.y;
    fVar4 = (pRVar2->fields)._rotation.z;
    fVar5 = (pRVar2->fields)._rotation.w;
    if (this_00 != (RightAngTriangle3D *)0x0) {
      (this_00->fields)._rotation.x = (pRVar2->fields)._rotation.x;
      (this_00->fields)._rotation.y = fVar3;
      (this_00->fields)._rotation.z = fVar4;
      (this_00->fields)._rotation.w = fVar5;
      fVar3 = (pRVar2->fields)._rightAngleCorner.z;
      fVar4 = (pRVar2->fields)._rightAngleCorner.y;
      (this_00->fields)._rightAngleCorner.x = (pRVar2->fields)._rightAngleCorner.x;
      (this_00->fields)._rightAngleCorner.y = fVar4;
      (this_00->fields)._rightAngleCorner.z = fVar3;
      TriangPrismShape3D::TriangPrismShape3D_set_Width
                ((TriangPrismShape3D *)this_00,(pRVar2->fields)._XLength,(MethodInfo *)0x0);
      (this_00->fields)._XLengthSign = (pRVar2->fields)._XLengthSign;
      TriangPrismShape3D::TriangPrismShape3D_set_Height
                ((TriangPrismShape3D *)this_00,(pRVar2->fields)._YLength,(MethodInfo *)0x0);
      ((Quaternion *)&(this_00->fields)._YLengthSign)->x = (float)(pRVar2->fields)._YLengthSign;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

