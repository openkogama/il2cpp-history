
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
      GizmoBoxLineSlider3DController_GetRealSizeAlongDirection
                (GizmoBoxLineSlider3DController *this,Vector3 direction,float zoomFactor,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uVar1 = 0;
  dVar2 = (double)(direction.y * direction.y + direction.x * direction.x + direction.z * direction.z
                  );
  if (dVar2 < 0.0) {
    func_?();
  }
  else {
    dVar2 = SQRT(dVar2);
  }
  if ((float)dVar2 <= _UNK_?) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar1 = 0;
  }
  uVar3 = 0;
  pGVar4 = (this->fields)._._data;
  if ((pGVar4 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar4->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,(MethodInfo *)0x0);
    GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight(this_00,zoomFactor,(MethodInfo *)0x0);
    fVar5 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                      (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._._data;
    if ((pGVar4 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pBVar6 = (pGVar4->fields).Box, pBVar6 != (BoxShape3D *)0x0)) {
      point.y = (float)uVar3;
      point.x = (float)uVar1;
      point.z = fVar5;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xfffffff4,(pBVar6->fields)._rotation,point,
                          (MethodInfo *)0x0);
      v1.z = direction.x;
      v1._0_8_ = in_stack_8;
      fVar5 = Vector3Ex::Vector3Ex_AbsDot(v1,*pVVar7,(MethodInfo *)0x0);
      return fVar5;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
     GizmoBoxLineSlider3DController_UpdateEpsilons
               (GizmoBoxLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoLineSlider3D *)0x0)) &&
     (pGVar3 = (&(pGVar2->fields)._settings)
               [(pGVar2->fields)._sharedSettings != (GizmoLineSlider3DSettings *)0x0],
     pGVar3 != (GizmoLineSlider3DSettings *)0x0)) {
    fVar4 = zoomFactor * (pGVar3->fields)._boxHoverEps;
    this_00 = (((this->fields)._._data)->fields).Box;
    if (this_00 != (BoxShape3D *)0x0) {
      auVar5._4_4_ = fVar4;
      auVar5._0_4_ = fVar4;
      auVar5._8_4_ = 0;
      BoxShape3D::BoxShape3D_set_SizeEps(this_00,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
     GizmoBoxLineSlider3DController_UpdateHandles
               (GizmoBoxLineSlider3DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set3DShapeVisible
              (pGVar2,(pGVar1->fields).CylinderIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set3DShapeVisible
                (pGVar2,(pGVar1->fields).SegmentIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider3D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
        GizmoHandle::GizmoHandle_Set3DShapeVisible
                  (pGVar2,(pGVar1->fields).BoxIndex,(pGVar3->fields)._._isVisible,(MethodInfo *)0x0)
        ;
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

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
     GizmoBoxLineSlider3DController_UpdateTransforms
               (GizmoBoxLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
    pBVar2 = (pGVar1->fields).Box;
    this_00 = (pGVar1->fields).Slider;
    if (this_00 != (GizmoLineSlider3D *)0x0) {
      pVVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                         ((Vector3 *)&fStack_4,this_00,(MethodInfo *)0x0);
      if (pBVar2 != (BoxShape3D *)0x0) {
        BoxShape3D::BoxShape3D_AlignWidth(pBVar2,*pVVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
          pBVar2 = (pGVar1->fields).Box;
          GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,(MethodInfo *)0x0);
          puStack_5 = (undefined *)
                       GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                                 (this_00,zoomFactor,(MethodInfo *)0x0);
          fStack_4 = zoomFactor;
          fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                            (this_00,0.0,(MethodInfo *)0x0);
          if (pBVar2 != (BoxShape3D *)0x0) {
            value.y = (float)puStack_5;
            value.x = fStack_4;
            value.z = fVar6;
            BoxShape3D::BoxShape3D_set_Size(pBVar2,value,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pGVar7 = (this_00->fields)._transform;
              pBVar2 = (pGVar1->fields).Box;
              if ((pGVar7 != (GizmoTransform *)0x0) && (pBVar2 != (BoxShape3D *)0x0)) {
                BoxShape3D::BoxShape3D_SetFaceCenter
                          (pBVar2,BoxFace__Enum_Left,(pGVar7->fields)._position3D,(MethodInfo *)0x0)
                ;
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

