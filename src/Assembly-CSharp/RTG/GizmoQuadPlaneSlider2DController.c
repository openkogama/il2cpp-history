
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
        GizmoQuadPlaneSlider2DController_GetRealExtentPoint
                  (GizmoQuadPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (method_00 = (MethodInfo *)(pGVar1->fields).Quad, method_00 == (MethodInfo *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  fVar4 = *(float *)&method_00->name * _UNK_?;
  fVar5 = *(float *)((longlong)&method_00->name + 4) * _UNK_?;
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    fVar6 = *(float *)&method_00->invoker_method;
    fVar7 = *(float *)((longlong)&method_00->invoker_method + 4);
    VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)method_00,(MethodInfo *)0x0);
    fStackX_8 = VVar3.x;
    fStackX_c = VVar3.y;
    fStackX_8 = fStackX_8 * fVar4;
    fStackX_c = fStackX_c * fVar4;
  }
  else {
    if (extentPt == Shape2DExtentPoint__Enum_Top) {
      fVar4 = *(float *)&method_00->invoker_method;
      fVar6 = *(float *)((longlong)&method_00->invoker_method + 4);
      VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                        ((RightAngTriangle2D *)method_00,(MethodInfo *)0x0);
      fStackX_8 = VVar3.x;
      fStackX_c = VVar3.y;
      VVar3.y = fStackX_c * fVar5 + fVar6;
      VVar3.x = fStackX_8 * fVar5 + fVar4;
      return VVar3;
    }
    if (extentPt == Shape2DExtentPoint__Enum_Right) {
      fVar5 = *(float *)&method_00->invoker_method;
      fVar6 = *(float *)((longlong)&method_00->invoker_method + 4);
      VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                        ((RightAngTriangle2D *)method_00,(MethodInfo *)0x0);
      fStackX_8 = VVar3.x;
      fStackX_c = VVar3.y;
      VVar8.y = fStackX_c * fVar4 + fVar6;
      VVar8.x = fStackX_8 * fVar4 + fVar5;
      return VVar8;
    }
    if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
      VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner(method_00);
      return VVar3;
    }
    fVar6 = *(float *)&method_00->invoker_method;
    fVar7 = *(float *)((longlong)&method_00->invoker_method + 4);
    VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                      ((RightAngTriangle2D *)method_00,(MethodInfo *)0x0);
    fStackX_8 = VVar3.x;
    fStackX_c = VVar3.y;
    fStackX_8 = fStackX_8 * fVar5;
    fStackX_c = fStackX_c * fVar5;
  }
  VVar9.y = fVar7 - fStackX_c;
  VVar9.x = fVar6 - fStackX_8;
  return VVar9;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
     GizmoQuadPlaneSlider2DController_UpdateEpsilons
               (GizmoQuadPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    pQVar2 = (pGVar1->fields).Quad;
    pGVar3 = (((this->fields)._._data)->fields).Slider;
    if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
      lVar4 = 0x100;
      if ((pGVar3->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
        lVar4 = 0xf8;
      }
      lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
      if ((lVar4 != 0) && (uVar5 = *(uint *)(lVar4 + 0x10), pQVar2 != (QuadShape2D *)0x0)) {
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

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
     GizmoQuadPlaneSlider2DController_UpdateHandles
               (GizmoQuadPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).CircleBorder, this_00 != (GizmoCircle2DBorder *)0x0)) {
    GizmoCircle2DBorder::GizmoCircle2DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
         (this_01 = (pGVar1->fields).PolygonBorder, this_01 != (GizmoPolygon2DBorder *)0x0)) {
        GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set2DShapeVisible
                    (pGVar2,(pGVar1->fields).PolygonIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) &&
             (this_02 = (pGVar1->fields).QuadBorder, this_02 != (GizmoQuad2DBorder *)0x0)) {
            GizmoQuad2DBorder::GizmoQuad2DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
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
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
     GizmoQuadPlaneSlider2DController_UpdateTransforms
               (GizmoQuadPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    pQVar4 = (pGVar1->fields).Quad;
    fVar5 = (pGVar3->fields)._position2D.y;
    if (pQVar4 != (QuadShape2D *)0x0) {
      (pQVar4->fields)._center.x = (pGVar3->fields)._position2D.x;
      (pQVar4->fields)._center.y = fVar5;
      pGVar3 = (pGVar2->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        fVar5 = (float)FUN_?((pGVar3->fields)._rotation2DDegrees,_UNK_?);
        (pQVar4->fields)._rotationDegrees = fVar5;
        fVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadWidth(pGVar2,(MethodInfo *)0x0);
        fVar6 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadHeight(pGVar2,(MethodInfo *)0x0);
        fVar6 = (float)((uint)fVar6 & _UNK_?);
        (pQVar4->fields)._size.x = (float)((uint)fVar5 & _UNK_?);
        (pQVar4->fields)._size.y = fVar6;
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           (pGVar7 = (pGVar1->fields).QuadBorder, pGVar7 != (GizmoQuad2DBorder *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__IGizmoQuad2DBorderController,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = (pGVar7->fields)._planeSlider;
          if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
            lVar8 = 0x110;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              lVar8 = 0x108;
            }
            lVar8 = *(longlong *)((longlong)&pGVar2->klass + lVar8);
            if ((lVar8 != 0) &&
               (pIVar9 = (pGVar7->fields)._controllers,
               pIVar9 != (IGizmoQuad2DBorderController__Array *)0x0)) {
              uVar10 = *(uint *)(lVar8 + 0x78);
              if ((uint)pIVar9->max_length <= uVar10) {
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              pIVar11 = pIVar9->vector[(int)uVar10];
              if (pIVar11 != (IGizmoQuad2DBorderController *)0x0) {
                uVar12 = 0;
                pIVar13 = pIVar11->klass;
                uVar14._0_1_ = (pIVar13->_1).rank;
                uVar14._1_1_ = (pIVar13->_1).minimumAlignment;
                if (uVar14 != 0) {
                  do {
                    if (pIVar13->interfaceOffsets[uVar12].interfaceType ==
                        (Il2CppClass *)TypeInfo__RTG__IGizmoQuad2DBorderController) {
                      pVVar15 = &(pIVar13->vtable).UpdateHandles +
                                (pIVar13->interfaceOffsets[uVar12].offset + 2);
                      UNRECOVERED_JUMPTABLE = pVVar15->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)(pIVar11,pVVar15->method,UNRECOVERED_JUMPTABLE);
                      return;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar14);
                }
                puVar16 = (undefined8 *)
                          FUN_?(pIVar11,TypeInfo__RTG__IGizmoQuad2DBorderController,2,uVar14,
                                        unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar16)(pIVar11,puVar16[1],(code *)*puVar16);
                return;
              }
            }
          }
          FUN_?();
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

