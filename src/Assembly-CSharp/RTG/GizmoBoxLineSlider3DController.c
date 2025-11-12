
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
      GizmoBoxLineSlider3DController_GetRealSizeAlongDirection
                (GizmoBoxLineSlider3DController *this,Vector3 *direction,float zoomFactor,
                MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (direction,(MethodInfo *)direction);
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) {
    fVar2 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    fVar3 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    fVar4 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                       (this_00,zoomFactor,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (pBVar5 = (pGVar1->fields).Box, pBVar5 != (BoxShape3D *)0x0)) {
      fVar6 = (pBVar5->fields)._rotation.x;
      fVar7 = (pBVar5->fields)._rotation.y;
      fVar8 = (pBVar5->fields)._rotation.z;
      fVar9 = (pBVar5->fields)._rotation.w;
      fVar10 = fVar7 + fVar7;
      fVar11 = fVar6 * (fVar6 + fVar6);
      fVar12 = fVar8 + fVar8;
      fVar13 = fVar9 * (fVar6 + fVar6);
      uVar14 = direction->x;
      uVar15 = direction->y;
      return (float)((uint)(((_UNK_? - (fVar8 * fVar12 + fVar11)) * fVar3 +
                             (fVar9 * fVar12 + fVar6 * fVar10) * fVar2 +
                            (fVar7 * fVar12 - fVar13) * fVar4) * (float)uVar15 +
                            ((_UNK_? - (fVar8 * fVar12 + fVar7 * fVar10)) * fVar2 +
                             (fVar6 * fVar10 - fVar9 * fVar12) * fVar3 +
                            (fVar9 * fVar10 + fVar6 * fVar12) * fVar4) * (float)uVar14 +
                           ((fVar6 * fVar12 - fVar9 * fVar10) * fVar2 +
                            (fVar13 + fVar7 * fVar12) * fVar3 +
                           (_UNK_? - (fVar7 * fVar10 + fVar11)) * fVar4) * direction->z) &
                    _UNK_?);
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  fVar2 = (float)(*pcVar16)();
  return fVar2;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider3DController::
     GizmoBoxLineSlider3DController_UpdateEpsilons
               (GizmoBoxLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoLineSlider3D *)0x0)) {
    lVar3 = 0xd0;
    if ((pGVar2->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
      lVar3 = 200;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if (lVar3 != 0) {
      fVar4 = zoomFactor * *(float *)(lVar3 + 0x14);
      pBVar5 = (((this->fields)._._data)->fields).Box;
      if (pBVar5 != (BoxShape3D *)0x0) {
        fVar6 = (float)((uint)fVar4 & _UNK_?);
        lVar3 = (ulonglong)((uint)fVar4 & _UNK_?) << 0x20;
        (pBVar5->fields)._epsilon._sizeEps.x = (float)(int)lVar3;
        (pBVar5->fields)._epsilon._sizeEps.y = (float)(int)((ulonglong)lVar3 >> 0x20);
        (pBVar5->fields)._epsilon._sizeEps.z = fVar6;
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        bVar4 = (pGVar3->fields)._._isVisible;
        uVar5 = (pGVar1->fields).BoxIndex;
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
                         (aVStack_4,this_00,(MethodInfo *)0x0);
      if (pBVar2 != (BoxShape3D *)0x0) {
        VStack_5.x = pVVar3->x;
        VStack_5.y = pVVar3->y;
        VStack_5.z = pVVar3->z;
        BoxShape3D::BoxShape3D_AlignWidth(pBVar2,&VStack_5,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
          pBVar2 = (pGVar1->fields).Box;
          fVar6 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                            (this_00,zoomFactor,(MethodInfo *)0x0);
          fVar7 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxHeight
                            (this_00,zoomFactor,(MethodInfo *)0x0);
          fVar8 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealBoxDepth
                            (this_00,zoomFactor,(MethodInfo *)0x0);
          if (pBVar2 != (BoxShape3D *)0x0) {
            uVar9 = (uint)fVar7 & _UNK_?;
            fVar8 = (float)((uint)fVar8 & _UNK_?);
            (pBVar2->fields)._size.x = (float)((uint)fVar6 & _UNK_?);
            (pBVar2->fields)._size.y = (float)uVar9;
            (pBVar2->fields)._size.z = fVar8;
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
                (pGVar10 = (this_00->fields)._transform, pGVar10 != (GizmoTransform *)0x0)) &&
               (pBVar2 = (pGVar1->fields).Box, pBVar2 != (BoxShape3D *)0x0)) {
              VStack_5.x = (pGVar10->fields)._position3D.x;
              VStack_5.y = (pGVar10->fields)._position3D.y;
              VStack_5.z = (pGVar10->fields)._position3D.z;
              BoxShape3D::BoxShape3D_SetFaceCenter
                        (pBVar2,BoxFace__Enum_Left,&VStack_5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

