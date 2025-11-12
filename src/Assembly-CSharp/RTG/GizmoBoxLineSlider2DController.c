
/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateEpsilons
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    pQVar2 = (pGVar1->fields).Quad;
    pGVar3 = (((this->fields)._._data)->fields).Slider;
    if (pGVar3 != (GizmoLineSlider2D *)0x0) {
      lVar4 = 0xe0;
      if ((pGVar3->fields)._sharedSettings == (GizmoLineSlider2DSettings *)0x0) {
        lVar4 = 0xd8;
      }
      lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
      if ((lVar4 != 0) && (uVar5 = *(uint *)(lVar4 + 0x14), pQVar2 != (QuadShape2D *)0x0)) {
        fVar6 = (float)(uVar5 & _UNK_?);
        (pQVar2->fields)._epsilon._sizeEps.x = (float)(uVar5 & _UNK_?);
        (pQVar2->fields)._epsilon._sizeEps.y = fVar6;
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

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateHandles
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
    GizmoHandle::GizmoHandle_Set2DShapeVisible
              (pGVar2,(pGVar1->fields).SegmentIndex,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoLineSlider2DControllerData *)0x0) &&
       ((pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoLineSlider2D *)0x0 &&
        (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)))) {
      bVar4 = (pGVar3->fields)._._isVisible;
      uVar5 = (pGVar1->fields).QuadIndex;
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

void Assembly-CSharp.dll::RTG::GizmoBoxLineSlider2DController::
     GizmoBoxLineSlider2DController_UpdateTransforms
               (GizmoBoxLineSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoLineSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Quad;
    this_01 = (((this->fields)._._data)->fields).Slider;
    if (this_01 != (GizmoLineSlider2D *)0x0) {
      fVar2 = GizmoLineSlider2D::GizmoLineSlider2D_GetRealLength(this_01,(MethodInfo *)0x0);
      axis = GizmoLineSlider2D::GizmoLineSlider2D_GetRealDirection(this_01,(MethodInfo *)0x0);
      uVar3 = _UNK_?;
      if (this_00 != (QuadShape2D *)0x0) {
        (this_00->fields)._size.x = (float)((uint)fVar2 & _UNK_?);
        lVar4 = 0xf0;
        if ((this_01->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
          lVar4 = 0xe8;
        }
        lVar4 = *(longlong *)((longlong)&this_01->klass + lVar4);
        if (lVar4 != 0) {
          uVar5 = 0xf0;
          if ((this_01->fields)._sharedLookAndFeel == (GizmoLineSlider2DLookAndFeel *)0x0) {
            uVar5 = 0xe8;
          }
          (this_00->fields)._size.y =
               (float)((uint)(*(float *)(*(longlong *)((longlong)&this_01->klass + (ulonglong)uVar5)
                                        + 0x1c) * *(float *)(lVar4 + 0x20)) & uVar3);
          QuadShape2D::QuadShape2D_AlignWidth(this_00,axis,(MethodInfo *)0x0);
          pGVar6 = (this_01->fields)._transform;
          if (pGVar6 != (GizmoTransform *)0x0) {
            fStackX_c = axis.y;
            fStackX_8 = axis.x;
            fStackX_8 = fStackX_8 * _UNK_?;
            fVar7 = (pGVar6->fields)._position2D.x;
            (this_00->fields)._center.y =
                 fStackX_c * _UNK_? * fVar2 + (pGVar6->fields)._position2D.y;
            (this_00->fields)._center.x = fStackX_8 * fVar2 + fVar7;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

