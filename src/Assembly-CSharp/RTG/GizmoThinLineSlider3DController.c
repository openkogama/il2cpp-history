
/* Single GetRealSizeAlongDirection(Vector3, Single) */

float Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
      GizmoThinLineSlider3DController_GetRealSizeAlongDirection
                (GizmoThinLineSlider3DController *this,Vector3 *direction,float zoomFactor,
                MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
      (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) &&
     (this_01 = (this_00->fields)._directionAxisMap, this_01 != (GizmoTransformAxisMap3D *)0x0)) {
    pVVar2 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                       (aVStack_3,this_01,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fVar7 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength(this_00,zoomFactor,(MethodInfo *)0x0)
    ;
    uVar8 = direction->x;
    uVar9 = direction->y;
    return (float)((uint)((float)uVar5 * fVar7 * (float)uVar9 + (float)uVar4 * fVar7 * (float)uVar8
                         + fVar6 * fVar7 * direction->z) & _UNK_?);
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar6 = (float)(*pcVar10)();
  return fVar6;
}


/* Void UpdateEpsilons(Single) */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateEpsilons
               (GizmoThinLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
     (this = (GizmoThinLineSlider3DController *)(pGVar1->fields).Slider,
     (GizmoLineSlider3D *)this != (GizmoLineSlider3D *)0x0)) {
    lVar2 = 0xd0;
    if ((((GizmoLineSlider3D *)this)->fields)._sharedSettings == (GizmoLineSlider3DSettings *)0x0) {
      lVar2 = 200;
    }
    method = *(MethodInfo **)((longlong)&((GizmoLineSlider3D *)this)->klass + lVar2);
    if ((method != (MethodInfo *)0x0) &&
       (pSVar3 = (pGVar1->fields).Segment, pSVar3 != (SegmentShape3D *)0x0)) {
      (pSVar3->fields)._epsilon._raycastEps =
           (float)((uint)(zoomFactor * *(float *)&method->invoker_method) & _UNK_?);
      return;
    }
  }
  FUN_?(this,pGVar1,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateHandles
               (GizmoThinLineSlider3DController *this,MethodInfo *method)

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
                (pGVar2,(pGVar1->fields).BoxIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if (((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
          (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider3D *)0x0)) &&
         (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
        bVar4 = (pGVar3->fields)._._isVisible;
        uVar5 = (pGVar1->fields).SegmentIndex;
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

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider3DController::
     GizmoThinLineSlider3DController_UpdateTransforms
               (GizmoThinLineSlider3DController *this,float zoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((((pGVar1 != (GizmoLineSlider3DControllerData *)0x0) &&
       (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider3D *)0x0)) &&
      (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) &&
     (pSVar3 = (pGVar1->fields).Segment, pSVar3 != (SegmentShape3D *)0x0)) {
    uVar4 = (pGVar2->fields)._position3D.x;
    uVar5 = (pGVar2->fields)._position3D.y;
    fVar6 = (pGVar2->fields)._position3D.z;
    fVar7 = (pSVar3->fields)._length;
    VStack_8.x = (pSVar3->fields)._direction.x;
    VStack_8.y = (pSVar3->fields)._direction.y;
    (pSVar3->fields)._startPoint.x = (float)uVar4;
    (pSVar3->fields)._startPoint.y = (float)uVar5;
    (pSVar3->fields)._startPoint.z = fVar6;
    fVar9 = (pSVar3->fields)._direction.z;
    (pSVar3->fields)._endPoint.x = fVar7 * VStack_8.x + (float)uVar4;
    (pSVar3->fields)._endPoint.y = fVar7 * VStack_8.y + (float)uVar5;
    (pSVar3->fields)._endPoint.z = fVar7 * fVar9 + fVar6;
    pGVar1 = (this->fields)._._data;
    if (pGVar1 != (GizmoLineSlider3DControllerData *)0x0) {
      this_01 = (this_00->fields)._directionAxisMap;
      pSVar3 = (pGVar1->fields).Segment;
      if (this_01 != (GizmoTransformAxisMap3D *)0x0) {
        pVVar10 = GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                            (&VStack_8,this_01,(MethodInfo *)0x0);
        uVar11 = pVVar10->x;
        uVar12 = pVVar10->y;
        fVar7 = pVVar10->z;
        fVar9 = GizmoLineSlider3D::GizmoLineSlider3D_GetRealLength
                           (this_00,zoomFactor,(MethodInfo *)0x0);
        if (pSVar3 != (SegmentShape3D *)0x0) {
          uVar13 = (pSVar3->fields)._startPoint.x;
          uVar14 = (pSVar3->fields)._startPoint.y;
          fVar15 = (float)uVar11 * fVar9 + (float)uVar13;
          fVar6 = (float)uVar12 * fVar9 + (float)uVar14;
          fVar9 = fVar7 * fVar9 + (pSVar3->fields)._startPoint.z;
          (pSVar3->fields)._endPoint.x = fVar15;
          (pSVar3->fields)._endPoint.y = fVar6;
          (pSVar3->fields)._endPoint.z = fVar9;
          fVar7 = (pSVar3->fields)._startPoint.z;
          (pSVar3->fields)._direction.x = fVar15 - (float)uVar13;
          (pSVar3->fields)._direction.y = fVar6 - (float)uVar14;
          (pSVar3->fields)._direction.z = fVar9 - fVar7;
          fVar7 = (float)FUN_?(&(pSVar3->fields)._direction);
          pVVar10 = &(pSVar3->fields)._direction;
          (pSVar3->fields)._length = fVar7;
          uStack_16._0_4_ = pVVar10->x;
          uStack_16._4_4_ = pVVar10->y;
          fStack_17 = (pSVar3->fields)._direction.z;
          fVar7 = (float)FUN_?(&uStack_16);
          if (fVar7 <= _UNK_?) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar7 = (pVVar18->zeroVector).z;
            fVar9 = (pVVar18->zeroVector).y;
            pVVar10->x = (pVVar18->zeroVector).x;
            pVVar10->y = fVar9;
            (pSVar3->fields)._direction.z = fVar7;
            return;
          }
          uVar19 = pVVar10->x;
          fVar9 = (pSVar3->fields)._direction.y;
          fVar6 = (pSVar3->fields)._direction.z;
          pVVar10->x = (float)uVar19 / fVar7;
          pVVar10->y = fVar9 / fVar7;
          (pSVar3->fields)._direction.z = fVar6 / fVar7;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

