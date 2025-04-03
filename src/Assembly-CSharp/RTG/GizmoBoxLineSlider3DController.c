
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
  dVar1 = (double)(direction.y * direction.y + direction.x * direction.x + direction.z * direction.z
                  );
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if (((float)dVar1 <= _UNK_?) && (cRam_? == '\0')) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar2->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    fVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar4 = (this_00->fields)._sharedLookAndFeel;
    pGVar5 = pGVar4;
    if ((pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
       (pGVar5 = (this_00->fields)._lookAndFeel, pGVar5 != (GizmoLineSlider3DLookAndFeel *)0x0)) {
      fVar6 = zoomFactor;
      if ((pGVar5->fields)._useZoomFactor == 0) {
        fVar6 = _UNK_?;
      }
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        pGVar5 = (this_00->fields)._lookAndFeel;
        if (pGVar5 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
        fVar7 = (pGVar5->fields)._boxHeight * (pGVar5->fields)._scale;
      }
      else {
        fVar7 = (pGVar4->fields)._boxHeight * (pGVar4->fields)._scale;
        pGVar5 = pGVar4;
      }
      fVar8 = zoomFactor;
      if ((pGVar5->fields)._useZoomFactor == 0) {
        fVar8 = _UNK_?;
      }
      if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) {
        pGVar4 = (this_00->fields)._lookAndFeel;
        if (pGVar4 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
        fVar9 = (pGVar4->fields)._boxDepth;
      }
      else {
        fVar9 = (pGVar4->fields)._boxDepth;
      }
      pGVar2 = (this->fields)._._data;
      if ((pGVar2 != (GizmoLineSlider3DControllerData *)0x0) &&
         (pBVar10 = (pGVar2->fields).Box, pBVar10 != (BoxShape3D *)0x0)) {
        point.y = fVar7 * fVar6;
        point.x = fVar3;
        point.z = fVar9 * (pGVar4->fields)._scale * fVar8;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&stack0xffffffdc,(pBVar10->fields)._rotation,point,
                            (MethodInfo *)0x0);
        v1.y = zoomFactor;
        v1.x = direction.z;
        v1.z = fStack_12;
        fVar3 = Vector3Ex::Vector3Ex_AbsDot(v1,*pVVar11,(MethodInfo *)0x0);
        return fVar3;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  fVar14 = (float10)(*pcVar13)();
  return (float)fVar14;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
     GizmoBoxLineSlider3DController_UpdateEpsilons
               (GizmoBoxLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoLineSlider3D *)0x0)) {
    pGVar3 = (pGVar2->fields)._sharedSettings;
    if (pGVar3 == (GizmoLineSlider3DSettings *)0x0) {
      pGVar3 = (pGVar2->fields)._settings;
      if (pGVar3 == (GizmoLineSlider3DSettings *)0x0) goto code_?;
      fVar4 = (pGVar3->fields)._boxHoverEps;
    }
    else {
      fVar4 = (pGVar3->fields)._boxHoverEps;
    }
    this_00 = (pGVar1->fields).Box;
    if (this_00 != (BoxShape3D *)0x0) {
      auVar5._4_4_ = zoomFactor * fVar4;
      auVar5._0_4_ = zoomFactor * fVar4;
      auVar5._8_4_ = 0;
      BoxShape3D::BoxShape3D_set_SizeEps(this_00,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
      return;
    }
  }
code_?:
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
    if ((this_00 != (GizmoLineSlider3D *)0x0) &&
       (pVVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealDirection
                           ((Vector3 *)&fStack_4,this_00,(MethodInfo *)0x0),
       pBVar2 != (BoxShape3D *)0x0)) {
      BoxShape3D::BoxShape3D_AlignWidth(pBVar2,*pVVar3,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
        pBVar2 = (pGVar1->fields).Box;
        fVar5 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                           (this_00,zoomFactor,(MethodInfo *)0x0);
        pGVar6 = (this_00->fields)._sharedLookAndFeel;
        pGVar7 = pGVar6;
        if ((pGVar6 != (GizmoLineSlider3DLookAndFeel *)0x0) ||
           (pGVar7 = (this_00->fields)._lookAndFeel, pGVar7 != (GizmoLineSlider3DLookAndFeel *)0x0))
        {
          fVar8 = zoomFactor;
          if ((pGVar7->fields)._useZoomFactor == 0) {
            fVar8 = _UNK_?;
          }
          if (pGVar6 == (GizmoLineSlider3DLookAndFeel *)0x0) {
            pGVar7 = (this_00->fields)._lookAndFeel;
            if (pGVar7 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
            fVar9 = (pGVar7->fields)._boxHeight * (pGVar7->fields)._scale;
          }
          else {
            fVar9 = (pGVar6->fields)._boxHeight * (pGVar6->fields)._scale;
            pGVar7 = pGVar6;
          }
          puVar10 = (undefined *)(fVar9 * fVar8);
          if ((pGVar7->fields)._useZoomFactor == 0) {
            zoomFactor = _UNK_?;
          }
          if (pGVar6 == (GizmoLineSlider3DLookAndFeel *)0x0) {
            pGVar6 = (this_00->fields)._lookAndFeel;
            if (pGVar6 == (GizmoLineSlider3DLookAndFeel *)0x0) goto code_?;
            fVar8 = (pGVar6->fields)._boxDepth;
          }
          else {
            fVar8 = (pGVar6->fields)._boxDepth;
          }
          fStack_4 = fVar5;
          puStack_11 = puVar10;
          if (pBVar2 != (BoxShape3D *)0x0) {
            value.y = (float)puVar10;
            value.x = fVar5;
            value.z = fVar8 * (pGVar6->fields)._scale * zoomFactor;
            BoxShape3D::BoxShape3D_set_Size(pBVar2,value,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pGVar12 = (this_00->fields)._transform;
              pBVar2 = (pGVar1->fields).Box;
              if ((pGVar12 != (GizmoTransform *)0x0) && (pBVar2 != (BoxShape3D *)0x0)) {
                BoxShape3D::BoxShape3D_SetFaceCenter
                          (pBVar2,BoxFace__Enum_Left,(pGVar12->fields)._position3D,(MethodInfo *)0x0)
                ;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

