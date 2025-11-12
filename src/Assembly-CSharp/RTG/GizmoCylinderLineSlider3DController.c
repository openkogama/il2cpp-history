
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
      GizmoCylinderLineSlider3DController_GetRealSizeAlongDirection
                (GizmoCylinderLineSlider3DController *this,Vector3 *direction,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    fVar2 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    fVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pCVar4 = (pGVar1->fields).Cylinder, pCVar4 != (CylinderShape3D *)0x0)) {
      fVar5 = (pCVar4->fields)._rotation.x;
      fVar6 = (pCVar4->fields)._rotation.y;
      fVar7 = (pCVar4->fields)._rotation.z;
      fVar8 = (pCVar4->fields)._rotation.w;
      fVar9 = fVar3 + fVar3;
      fVar3 = fVar3 + fVar3;
      fVar10 = fVar5 * (fVar5 + fVar5);
      fVar11 = fVar6 + fVar6;
      fVar12 = fVar7 + fVar7;
      fVar13 = fVar8 * (fVar5 + fVar5);
      uVar14 = direction->x;
      uVar15 = direction->y;
      return (float)((uint)(((_UNK_? - (fVar7 * fVar12 + fVar6 * fVar11)) * fVar9 +
                             (fVar5 * fVar11 - fVar8 * fVar12) * fVar2 +
                            (fVar8 * fVar11 + fVar5 * fVar12) * fVar3) * (float)uVar14 +
                            ((_UNK_? - (fVar7 * fVar12 + fVar10)) * fVar2 +
                             (fVar8 * fVar12 + fVar5 * fVar11) * fVar9 +
                            (fVar6 * fVar12 - fVar13) * fVar3) * (float)uVar15 +
                           ((fVar13 + fVar6 * fVar12) * fVar2 +
                            (fVar5 * fVar12 - fVar8 * fVar11) * fVar9 +
                           (_UNK_? - (fVar6 * fVar11 + fVar10)) * fVar3) * direction->z) &
                    _UNK_?);
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  fVar2 = (float)(*pcVar16)();
  return fVar2;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoCylinderLineSlider3DController::
     GizmoCylinderLineSlider3DController_UpdateEpsilons
               (GizmoCylinderLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this = (GizmoCylinderLineSlider3DController *)(pGVar1->fields).Slider,
     (GizmoLineSlider3D *)this != (GizmoLineSlider3D *)0x0)) {
    lVar2 = 0xd0;
    if ((((GizmoLineSlider3D *)this)->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
      lVar2 = 200;
    }
    method = *(MethodInfo **)((longlong)&((GizmoLineSlider3D *)this)->klass + lVar2);
    if ((method != (MethodInfo *)0x0) &&
       (pCVar3 = (pGVar1->fields).Cylinder, pCVar3 != (CylinderShape3D *)0x0)) {
      (pCVar3->fields)._epsilon._hrzEps =
           (float)((uint)(zoomFactor * *(float *)&method->name) & _UNK_?);
      return;
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        bVar4 = (pGVar3->fields)._._isVisible;
        uVar5 = (pGVar1->fields).CylinderIndex;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar6 = (pGVar2->fields)._3DShapes;
        if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
          if ((uint)(pLVar6->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pGVar8 = (pLVar6->fields)._items;
          if (pGVar8 != (GizmoHandleShape3D__Array *)0x0) {
            if ((uint)pGVar8->max_length <= uVar5) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape3D *)0x0) {
              (pGVar8->vector[(int)uVar5]->fields)._isVisible = bVar4;
              return;
            }
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
                         (aVStack_4,this_00,(MethodInfo *)0x0);
      if (pCVar2 != (CylinderShape3D *)0x0) {
        VStack_5.x = pVVar3->x;
        VStack_5.y = pVVar3->y;
        VStack_5.z = pVVar3->z;
        CylinderShape3D::CylinderShape3D_AlignCentralAxis(pCVar2,&VStack_5,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
          pCVar2 = (pGVar1->fields).Cylinder;
          fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealCylinderRadius
                            (this_00,zoomFactor,(MethodInfo *)0x0);
          if (pCVar2 != (CylinderShape3D *)0x0) {
            pGVar1 = (this->fields)._._data;
            (pCVar2->fields)._radius = (float)((uint)fVar6 & _UNK_?);
            if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
              pCVar2 = (pGVar1->fields).Cylinder;
              fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                                (this_00,zoomFactor,(MethodInfo *)0x0);
              if (pCVar2 != (CylinderShape3D *)0x0) {
                pGVar1 = (this->fields)._._data;
                (pCVar2->fields)._height = (float)((uint)fVar6 & _UNK_?);
                if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
                    (pGVar7 = (this_00->fields)._transform, pGVar7 != (GizmoTransform *)0x0)) &&
                   (pCVar2 = (pGVar1->fields).Cylinder, pCVar2 != (CylinderShape3D *)0x0)) {
                  fVar8 = (pGVar7->fields)._position3D.y;
                  fVar6 = (pGVar7->fields)._position3D.z;
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

