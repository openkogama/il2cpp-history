
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
        GizmoPolygonPlaneSlider2DController_GetRealExtentPoint
                  (GizmoPolygonPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (pPVar2 = (pGVar1->fields).Polygon, pPVar2 == (PolygonShape2D *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    VVar4 = (Vector2)(*pcVar3)();
    return VVar4;
  }
  method_00 = (MethodInfo *)auStack_5;
  pfVar6 = (float *)(*(pPVar2->klass->vtable).GetEncapsulatingRect.methodPtr)
                               (method_00,pPVar2,(pPVar2->klass->vtable).GetEncapsulatingRect.method
                               );
  fVar7 = *pfVar6;
  fVar8 = pfVar6[1];
  fVar9 = pfVar6[2];
  fVar10 = pfVar6[3];
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight(method_00);
    fStackX_8 = VVar4.x;
    fStackX_c = VVar4.y;
    VVar4.y = (fVar10 * _UNK_? + fVar8) - fStackX_c * fVar9 * _UNK_?;
    VVar4.x = (fVar9 * _UNK_? + fVar7) - fStackX_8 * fVar9 * _UNK_?;
    return VVar4;
  }
  if (extentPt != Shape2DExtentPoint__Enum_Top) {
    if (extentPt == Shape2DExtentPoint__Enum_Right) {
      VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight(method_00);
      fStackX_8 = VVar4.x;
      fStackX_c = VVar4.y;
      VVar11.y = fVar10 * _UNK_? + fVar8 + fStackX_c * fVar9 * _UNK_?;
      VVar11.x = fVar9 * _UNK_? + fVar7 + fStackX_8 * fVar9 * _UNK_?;
      return VVar11;
    }
    if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
    }
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp(method_00);
    fStackX_8 = VVar4.x;
    fStackX_c = VVar4.y;
    VVar12.y = (fVar10 * _UNK_? + fVar8) - fStackX_c * fVar10 * _UNK_?;
    VVar12.x = (fVar9 * _UNK_? + fVar7) - fStackX_8 * fVar10 * _UNK_?;
    return VVar12;
  }
  VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp(method_00);
  fStackX_8 = VVar4.x;
  fStackX_c = VVar4.y;
  VVar13.y = fVar10 * _UNK_? + fVar8 + fStackX_c * fVar10 * _UNK_?;
  VVar13.x = fVar9 * _UNK_? + fVar7 + fStackX_8 * fVar10 * _UNK_?;
  return VVar13;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateEpsilons
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pPVar4 = (pGVar1->fields).Polygon, pPVar4 != (PolygonShape2D *)0x0)) {
      (pPVar4->fields)._epsilon._areaEps = (float)(*(uint *)(lVar3 + 0x10) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateHandles
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

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
         (this_01 = (pGVar1->fields).QuadBorder, this_01 != (GizmoQuad2DBorder *)0x0)) {
        GizmoQuad2DBorder::GizmoQuad2DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set2DShapeVisible
                    (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
              (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) &&
             (this_02 = (pGVar1->fields).PolygonBorder, this_02 != (GizmoPolygon2DBorder *)0x0)) {
            GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              bVar4 = (pGVar3->fields)._._isVisible;
              uVar5 = (pGVar1->fields).PolygonIndex;
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

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateTransforms
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (pGVar2 = (pGVar1->fields).PolygonBorder, pGVar2 == (GizmoPolygon2DBorder *)0x0)) {
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IGizmoPolygon2DBorderController,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = (pGVar2->fields)._planeSlider;
  if (pGVar3 != (GizmoPlaneSlider2D *)0x0) {
    lVar4 = 0x110;
    if ((pGVar3->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      lVar4 = 0x108;
    }
    lVar4 = *(longlong *)((longlong)&pGVar3->klass + lVar4);
    if ((lVar4 != 0) &&
       (pIVar5 = (pGVar2->fields)._controllers,
       pIVar5 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar6 = *(uint *)(lVar4 + 0x80);
      if ((uint)pIVar5->max_length <= uVar6) {
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      pIVar7 = pIVar5->vector[(int)uVar6];
      if (pIVar7 != (IGizmoPolygon2DBorderController *)0x0) {
        uVar8 = 0;
        pIVar9 = pIVar7->klass;
        uVar10._0_1_ = (pIVar9->_1).rank;
        uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__RTG__IGizmoPolygon2DBorderController) {
              pVVar11 = &(pIVar9->vtable).UpdateHandles +
                        (pIVar9->interfaceOffsets[uVar8].offset + 2);
              UNRECOVERED_JUMPTABLE = pVVar11->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(pIVar7,pVVar11->method,UNRECOVERED_JUMPTABLE);
              return;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        puVar12 = (undefined8 *)FUN_?(pIVar7);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar12)(pIVar7,puVar12[1],(code *)*puVar12);
        return;
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

