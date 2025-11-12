
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateEpsilons
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoLineSlider2D *)0x0)) {
    lVar3 = 0xe0;
    if ((pGVar2->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
      lVar3 = 0xd8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pSVar4 = (pGVar1->fields).Segment, pSVar4 != (SegmentShape2D *)0x0)) {
      (pSVar4->fields)._epsilon._ptOnSegmentEps = (float)(*(uint *)(lVar3 + 0x10) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateHandles
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider2D *)0x0 &&
        (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      bVar4 = (pGVar3->fields)._._isVisible;
      uVar5 = (pGVar1->fields).SegmentIndex;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar6 = (pGVar2->fields)._2DShapes;
      if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
        if ((uint)(pLVar6->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pGVar8 = (pLVar6->fields)._items;
        if (pGVar8 != (GizmoHandleShape2D__Array *)0x0) {
          if ((uint)pGVar8->max_length <= uVar5) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (pGVar8->vector[(int)uVar5] != (GizmoHandleShape2D *)0x0) {
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoThinLineSlider2DController::
     GizmoThinLineSlider2DController_UpdateTransforms
               (GizmoThinLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
      (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoLineSlider2D *)0x0)) &&
     (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    pSVar3 = (pGVar1->fields).Segment;
    fVar4 = (pGVar2->fields)._position2D.x;
    fVar5 = (pGVar2->fields)._position2D.y;
    if (pSVar3 != (SegmentShape2D *)0x0) {
      fVar6 = (pSVar3->fields)._length;
      (pSVar3->fields)._startPoint.x = fVar4;
      (pSVar3->fields)._startPoint.y = fVar5;
      fVar7 = (pSVar3->fields)._direction.x;
      (pSVar3->fields)._endPoint.y = fVar6 * (pSVar3->fields)._direction.y + fVar5;
      (pSVar3->fields)._endPoint.x = fVar6 * fVar7 + fVar4;
      this_01 = (this_00->fields)._directionAxisMap;
      if (this_01 != (GizmoTransformAxisMap2D *)0x0) {
        VVar8 = GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis(this_01,(MethodInfo *)0x0)
        ;
        fVar4 = GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength(this_00,(MethodInfo *)0x0);
        fStackX_8 = VVar8.x;
        fStackX_c = VVar8.y;
        fVar6 = fStackX_8 * fVar4 + (pSVar3->fields)._startPoint.x;
        fVar5 = fStackX_c * fVar4 + (pSVar3->fields)._startPoint.y;
        (pSVar3->fields)._endPoint.x = fVar6;
        (pSVar3->fields)._endPoint.y = fVar5;
        fVar4 = (pSVar3->fields)._startPoint.y;
        (pSVar3->fields)._direction.x = fVar6 - (pSVar3->fields)._startPoint.x;
        (pSVar3->fields)._direction.y = fVar5 - fVar4;
        fVar4 = (float)FUN_?(&(pSVar3->fields)._direction);
        pVVar9 = &(pSVar3->fields)._direction;
        (pSVar3->fields)._length = fVar4;
        fVar4 = (float)FUN_?();
        if (fVar4 <= _UNK_?) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector2);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          pVVar9->x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
          (pSVar3->fields)._direction.y = fVar4;
          return;
        }
        fVar5 = (pSVar3->fields)._direction.y;
        pVVar9->x = (*pVVar9).x / fVar4;
        (pSVar3->fields)._direction.y = fVar5 / fVar4;
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

