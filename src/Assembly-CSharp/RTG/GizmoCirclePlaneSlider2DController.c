
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
        GizmoCirclePlaneSlider2DController_GetRealExtentPoint
                  (GizmoCirclePlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (this_00 = (pGVar1->fields).Circle, this_00 == (CircleShape2D *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    fVar4 = (this_00->fields)._center.x;
    fVar5 = (this_00->fields)._center.y;
    VVar3 = CircleShape2D::CircleShape2D_get_Right(this_00,(MethodInfo *)0x0);
code_?:
    fVar6 = (this_00->fields)._radius;
    fStackX_c = VVar3.y;
    fStackX_8 = VVar3.x;
    VVar3.y = fVar5 - fVar6 * fStackX_c;
    VVar3.x = fVar4 - fVar6 * fStackX_8;
  }
  else {
    if (extentPt == Shape2DExtentPoint__Enum_Top) {
      fVar4 = (this_00->fields)._center.x;
      fVar5 = (this_00->fields)._center.y;
      VVar3 = CircleShape2D::CircleShape2D_get_Up(this_00,(MethodInfo *)0x0);
    }
    else {
      if (extentPt != Shape2DExtentPoint__Enum_Right) {
        if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
          VVar3 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                            ((MethodInfo *)this);
          return VVar3;
        }
        fVar4 = (this_00->fields)._center.x;
        fVar5 = (this_00->fields)._center.y;
        VVar3 = CircleShape2D::CircleShape2D_get_Up(this_00,(MethodInfo *)0x0);
        goto code_?;
      }
      fVar4 = (this_00->fields)._center.x;
      fVar5 = (this_00->fields)._center.y;
      VVar3 = CircleShape2D::CircleShape2D_get_Right(this_00,(MethodInfo *)0x0);
    }
    fVar6 = (this_00->fields)._radius;
    fStackX_c = VVar3.y;
    fStackX_8 = VVar3.x;
    VVar3.y = fVar6 * fStackX_c + fVar5;
    VVar3.x = fVar6 * fStackX_8 + fVar4;
  }
  return VVar3;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
     GizmoCirclePlaneSlider2DController_UpdateEpsilons
               (GizmoCirclePlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) {
    lVar3 = 0x100;
    if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
      lVar3 = 0xf8;
    }
    lVar3 = *(longlong *)((longlong)&pGVar2->klass + lVar3);
    if ((lVar3 != 0) && (pCVar4 = (pGVar1->fields).Circle, pCVar4 != (CircleShape2D *)0x0)) {
      (pCVar4->fields)._epsilon._radiusEps = (float)(*(uint *)(lVar3 + 0x10) & _UNK_?);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
     GizmoCirclePlaneSlider2DController_UpdateHandles
               (GizmoCirclePlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (this_00 = (pGVar1->fields).QuadBorder, this_00 != (GizmoQuad2DBorder *)0x0)) {
    GizmoQuad2DBorder::GizmoQuad2DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
       (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible
                (pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
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
             (this_02 = (pGVar1->fields).CircleBorder, this_02 != (GizmoCircle2DBorder *)0x0)) {
            GizmoCircle2DBorder::GizmoCircle2DBorder_SetVisible
                      (this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
                (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) &&
               (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              bVar4 = (pGVar3->fields)._._isVisible;
              uVar5 = (pGVar1->fields).CircleIndex;
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

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
     GizmoCirclePlaneSlider2DController_UpdateTransforms
               (GizmoCirclePlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
      (pGVar2 = (pGVar1->fields).Slider, pGVar2 != (GizmoPlaneSlider2D *)0x0)) &&
     (pGVar3 = (pGVar2->fields)._transform, pGVar3 != (GizmoTransform *)0x0)) {
    pCVar4 = (pGVar1->fields).Circle;
    fVar5 = (pGVar3->fields)._position2D.y;
    if (pCVar4 != (CircleShape2D *)0x0) {
      (pCVar4->fields)._center.x = (pGVar3->fields)._position2D.x;
      (pCVar4->fields)._center.y = fVar5;
      pGVar3 = (pGVar2->fields)._transform;
      if (pGVar3 != (GizmoTransform *)0x0) {
        (pCVar4->fields)._rotationDegrees = (pGVar3->fields)._rotation2DDegrees;
        fVar5 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealCircleRadius
                           (pGVar2,(MethodInfo *)0x0);
        (pCVar4->fields)._radius = (float)((uint)fVar5 & _UNK_?);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           (pGVar6 = (pGVar1->fields).CircleBorder, pGVar6 != (GizmoCircle2DBorder *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__IGizmoCircle2DBorderController,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = (pGVar6->fields)._planeSlider;
          if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
            lVar7 = 0x110;
            if ((pGVar2->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
              lVar7 = 0x108;
            }
            lVar7 = *(longlong *)((longlong)&pGVar2->klass + lVar7);
            if ((lVar7 != 0) &&
               (pIVar8 = (pGVar6->fields)._controllers,
               pIVar8 != (IGizmoCircle2DBorderController__Array *)0x0)) {
              uVar9 = *(uint *)(lVar7 + 0x7c);
              if ((uint)pIVar8->max_length <= uVar9) {
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              pIVar10 = pIVar8->vector[(int)uVar9];
              if (pIVar10 != (IGizmoCircle2DBorderController *)0x0) {
                uVar11 = 0;
                pIVar12 = pIVar10->klass;
                uVar13._0_1_ = (pIVar12->_1).rank;
                uVar13._1_1_ = (pIVar12->_1).minimumAlignment;
                if (uVar13 != 0) {
                  do {
                    if (pIVar12->interfaceOffsets[uVar11].interfaceType ==
                        (Il2CppClass *)TypeInfo__RTG__IGizmoCircle2DBorderController) {
                      pVVar14 = &(pIVar12->vtable).UpdateHandles +
                                (pIVar12->interfaceOffsets[uVar11].offset + 2);
                      UNRECOVERED_JUMPTABLE = pVVar14->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)(pIVar10,pVVar14->method,UNRECOVERED_JUMPTABLE);
                      return;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar13);
                }
                puVar15 = (undefined8 *)
                          FUN_?(pIVar10,TypeInfo__RTG__IGizmoCircle2DBorderController,2,
                                        uVar13,unaff_RBX);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar15)(pIVar10,puVar15[1],(code *)*puVar15);
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

