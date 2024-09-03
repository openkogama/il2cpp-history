
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_CapSlider3D
               (GizmoSphereCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
    GizmoCap3D::GizmoCap3D_AlignTransformAxis
              (pGVar2,0,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
      pGVar2 = (pGVar1->fields).Cap;
      pSVar3 = (pGVar1->fields).Sphere;
      if (pSVar3 != (SphereShape3D *)0x0) {
        fVar4 = (pSVar3->fields)._radius;
        if (pGVar2 != (GizmoCap3D *)0x0) {
          value.y = sliderEndPt.y + sliderDirection.y * fVar4;
          value.x = sliderEndPt.x + sliderDirection.x * fVar4;
          value.z = sliderEndPt.z + sliderDirection.z * fVar4;
          GizmoCap3D::GizmoCap3D_set_Position(pGVar2,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_CapSlider3DInvert
               (GizmoSphereCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (pGVar2 != (GizmoCap3D *)0x0) {
      axis.y = (float)((uint)sliderDirection.y ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      axis.x = (float)((uint)sliderDirection.x ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      axis.z = (float)((uint)sliderDirection.z ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      GizmoCap3D::GizmoCap3D_AlignTransformAxis
                (pGVar2,0,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
        fVar3 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(pGVar2,zoomFactor,(MethodInfo *)0x0);
        value.y = sliderEndPt.y + sliderDirection.y * fVar3;
        value.x = sliderEndPt.x + sliderDirection.x * fVar3;
        value.z = sliderEndPt.z + sliderDirection.z * fVar3;
        GizmoCap3D::GizmoCap3D_set_Position(pGVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
      GizmoSphereCap3DController_GetSliderAlignedRealLength
                (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2 + fVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::GizmoSphereCap3DController_UpdateHandles
               (GizmoSphereCap3DController *this,MethodInfo *method)

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
                    (pGVar2,(pGVar1->fields).PyramidIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Cap, pGVar3 != (GizmoCap3D *)0x0)) &&
             (pGVar2 = (pGVar1->fields).CapHandle, pGVar2 != (GizmoHandle *)0x0)) {
            GizmoHandle::GizmoHandle_Set3DShapeVisible
                      (pGVar2,(pGVar1->fields).SphereIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoSphereCap3DController::
     GizmoSphereCap3DController_UpdateTransforms
               (GizmoSphereCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pSVar2 = (pGVar1->fields).Sphere;
    this_00 = (pGVar1->fields).Cap;
    if (this_00 != (GizmoCap3D *)0x0) {
      pVVar3 = GizmoCap3D::GizmoCap3D_get_Position
                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      if (pSVar2 != (SphereShape3D *)0x0) {
        (pSVar2->fields)._center.x = pVVar3->x;
        (pSVar2->fields)._center.y = fVar4;
        (pSVar2->fields)._center.z = fVar5;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pSVar2 = (pGVar1->fields).Sphere;
          pQVar6 = GizmoCap3D::GizmoCap3D_get_Rotation
                             ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
          fVar5 = pQVar6->y;
          fVar4 = pQVar6->z;
          fVar7 = pQVar6->w;
          if (pSVar2 != (SphereShape3D *)0x0) {
            (pSVar2->fields)._rotation.x = pQVar6->x;
            (pSVar2->fields)._rotation.y = fVar5;
            (pSVar2->fields)._rotation.z = fVar4;
            (pSVar2->fields)._rotation.w = fVar7;
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              this_01 = (TorusShape3D *)(pGVar1->fields).Sphere;
              fVar5 = GizmoCap3D::GizmoCap3D_GetRealSphereRadius
                                (this_00,zoomFactor,(MethodInfo *)0x0);
              if (this_01 != (TorusShape3D *)0x0) {
                TorusShape3D::TorusShape3D_set_CoreRadius(this_01,fVar5,(MethodInfo *)0x0);
                return;
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

