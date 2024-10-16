
/* Void CapSlider3D(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3D
               (GizmoTriPrismCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pGVar2 != (GizmoCap3D *)0x0) {
      GizmoCap3D::GizmoCap3D_set_Rotation
                (pGVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
         (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
        GizmoCap3D::GizmoCap3D_AlignTransformAxis
                  (pGVar2,2,AxisSign__Enum_Positive,sliderDirection,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).Cap, pGVar2 != (GizmoCap3D *)0x0)) {
          GizmoCap3D::GizmoCap3D_set_Position(pGVar2,sliderEndPt,(MethodInfo *)0x0);
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


/* Void CapSlider3DInvert(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_CapSlider3DInvert
               (GizmoTriPrismCap3DController *this,Vector3 sliderDirection,Vector3 sliderEndPt,
               float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Cap;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    if (pGVar2 != (GizmoCap3D *)0x0) {
      GizmoCap3D::GizmoCap3D_set_Rotation
                (pGVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
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
                    (pGVar2,2,AxisSign__Enum_Positive,axis,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
            pGVar2 = (pGVar1->fields).Cap;
            pIVar3 = this->klass[1]._0.image;
            fVar4 = (float10)(*(code *)(this->klass->vtable).GetSliderAlignedRealLength_1.method)();
            fVar5 = (float)fVar4;
            if (pGVar2 != (GizmoCap3D *)0x0) {
              value.y = (float)pIVar3 + fVar5 * 4.1670483e-29;
              value.x = zoomFactor + sliderDirection.x * fVar5;
              value.z = sliderEndPt.z + (float)this * fVar5;
              GizmoCap3D::GizmoCap3D_set_Position(pGVar2,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single GetSliderAlignedRealLength(Single) */

float Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
      GizmoTriPrismCap3DController_GetSliderAlignedRealLength
                (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoCap3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Cap, this_00 != (GizmoCap3D *)0x0)) {
    fVar2 = GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth(this_00,zoomFactor,(MethodInfo *)0x0);
    return fVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateHandles
               (GizmoTriPrismCap3DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).SphereIndex,0,(MethodInfo *)0x0);
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
                      (pGVar2,(pGVar1->fields).TrPrismIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoTriPrismCap3DController::
     GizmoTriPrismCap3DController_UpdateTransforms
               (GizmoTriPrismCap3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
    pTVar2 = (pGVar1->fields).TrPrism;
    this_00 = (pGVar1->fields).Cap;
    if (this_00 != (GizmoCap3D *)0x0) {
      pQVar3 = GizmoCap3D::GizmoCap3D_get_Rotation
                         ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      fVar4 = pQVar3->y;
      fVar5 = pQVar3->z;
      fVar6 = pQVar3->w;
      if (pTVar2 != (TriangPrismShape3D *)0x0) {
        (pTVar2->fields)._rotation.x = pQVar3->x;
        (pTVar2->fields)._rotation.y = fVar4;
        (pTVar2->fields)._rotation.z = fVar5;
        (pTVar2->fields)._rotation.w = fVar6;
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
          pTVar2 = (pGVar1->fields).TrPrism;
          fVar4 = GizmoCap3D::GizmoCap3D_GetRealTriPrismWidth(this_00,zoomFactor,(MethodInfo *)0x0);
          if (pTVar2 != (TriangPrismShape3D *)0x0) {
            TriangPrismShape3D::TriangPrismShape3D_set_Width(pTVar2,fVar4,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
              pTVar2 = (pGVar1->fields).TrPrism;
              fVar4 = GizmoCap3D::GizmoCap3D_GetRealTriPrismHeight
                                (this_00,zoomFactor,(MethodInfo *)0x0);
              if (pTVar2 != (TriangPrismShape3D *)0x0) {
                TriangPrismShape3D::TriangPrismShape3D_set_Height(pTVar2,fVar4,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._._data;
                if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                  pTVar2 = (pGVar1->fields).TrPrism;
                  fVar4 = GizmoCap3D::GizmoCap3D_GetRealTriPrismDepth
                                    (this_00,fVar4,(MethodInfo *)0x0);
                  if (pTVar2 != (TriangPrismShape3D *)0x0) {
                    TriangPrismShape3D::TriangPrismShape3D_set_Depth(pTVar2,fVar4,(MethodInfo *)0x0)
                    ;
                    pGVar1 = (this->fields)._._data;
                    if (pGVar1 != (GizmoCap3DControllerData *)0x0) {
                      pTVar2 = (pGVar1->fields).TrPrism;
                      pVVar7 = GizmoCap3D::GizmoCap3D_get_Position
                                         ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
                      if (pTVar2 != (TriangPrismShape3D *)0x0) {
                        TriangPrismShape3D::TriangPrismShape3D_set_FrontCenter
                                  (pTVar2,*pVVar7,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

