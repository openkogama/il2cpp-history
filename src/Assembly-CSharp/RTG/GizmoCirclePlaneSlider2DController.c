
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
        GizmoCirclePlaneSlider2DController_GetRealExtentPoint
                  (GizmoCirclePlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (this_00 = (pGVar2->fields).Circle, this_00 == (CircleShape2D *)0x0)) {
    uVar3 = func_?(&VStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    VVar6 = (Vector2)(*pcVar5)();
    return VVar6;
  }
  switch(extentPt) {
  case Shape2DExtentPoint__Enum_Left:
    extentPt = (Shape2DExtentPoint__Enum)(this_00->fields)._center.x;
    puStack_1 = (undefined1 *)(this_00->fields)._center.y;
    VVar6 = CircleShape2D::CircleShape2D_get_Right(this_00,(MethodInfo *)0x0);
    fVar7 = VVar6.y;
    break;
  case Shape2DExtentPoint__Enum_Top:
    extentPt = (Shape2DExtentPoint__Enum)(this_00->fields)._center.x;
    puStack_1 = (undefined1 *)(this_00->fields)._center.y;
    VVar6 = CircleShape2D::CircleShape2D_get_Up(this_00,(MethodInfo *)0x0);
    fVar7 = VVar6.y;
    goto code_?;
  case Shape2DExtentPoint__Enum_Right:
    extentPt = (Shape2DExtentPoint__Enum)(this_00->fields)._center.x;
    puStack_1 = (undefined1 *)(this_00->fields)._center.y;
    VVar6 = CircleShape2D::CircleShape2D_get_Right(this_00,(MethodInfo *)0x0);
    fVar7 = VVar6.y;
code_?:
    VStack_4.y = fVar7 * (this_00->fields)._radius + (float)puStack_1;
    VStack_4.x = VStack_4.x * (this_00->fields)._radius + (float)extentPt;
    return VStack_4;
  case Shape2DExtentPoint__Enum_Bottom:
    extentPt = (Shape2DExtentPoint__Enum)(this_00->fields)._center.x;
    puStack_1 = (undefined1 *)(this_00->fields)._center.y;
    VVar6 = CircleShape2D::CircleShape2D_get_Up(this_00,(MethodInfo *)0x0);
    fVar7 = VVar6.y;
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  VStack_4.y = (float)puStack_1 - fVar7 * (this_00->fields)._radius;
  VStack_4.x = (float)extentPt - VStack_4.x * (this_00->fields)._radius;
  return VStack_4;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
     GizmoCirclePlaneSlider2DController_UpdateEpsilons
               (GizmoCirclePlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Circle;
    pGVar2 = (((this->fields)._._data)->fields).Slider;
    if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoPlaneSlider2DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (CircleShape2D *)0x0) {
        SegmentShape2D::SegmentShape2D_set_RaycastEps
                  ((SegmentShape2D *)this_00,(pGVar3->fields)._areaHoverEps,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
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
              GizmoHandle::GizmoHandle_Set2DShapeVisible
                        (pGVar2,(pGVar1->fields).CircleIndex,(pGVar3->fields)._._isVisible,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransforms() */

void Assembly-CSharp.dll::RTG::GizmoCirclePlaneSlider2DController::
     GizmoCirclePlaneSlider2DController_UpdateTransforms
               (GizmoCirclePlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
      (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoPlaneSlider2D *)0x0)) &&
     (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    this_01 = (pGVar1->fields).Circle;
    fVar3 = (pGVar2->fields)._position2D.y;
    if (this_01 != (CircleShape2D *)0x0) {
      (this_01->fields)._center.x = (pGVar2->fields)._position2D.x;
      (this_01->fields)._center.y = fVar3;
      pGVar2 = (this_00->fields)._transform;
      if (pGVar2 != (GizmoTransform *)0x0) {
        (this_01->fields)._rotationDegrees = (pGVar2->fields)._rotation2DDegrees;
        fVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealCircleRadius
                          (this_00,(MethodInfo *)0x0);
        RightAngTriangle2D::RightAngTriangle2D_set_XLength
                  ((RightAngTriangle2D *)this_01,fVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           ((pGVar1->fields).CircleBorder != (GizmoCircle2DBorder *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          iVar4 = *(int *)(in_stack_5 + 0x24);
          iVar6 = *(int *)(in_stack_5 + 8);
          if (iVar6 != 0) {
            if (*(int *)(iVar6 + 0xa4) == 0) {
              iVar6 = *(int *)(iVar6 + 0xa0);
              if (iVar6 == 0) goto code_?;
            }
            else {
              iVar6 = *(int *)(iVar6 + 0xa4);
            }
            if (iVar4 != 0) {
              if (*(uint *)(iVar4 + 0xc) <= *(uint *)(iVar6 + 0x6c)) {
                func_?();
                func_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (*(int *)(iVar4 + 0x10 + *(uint *)(iVar6 + 0x6c) * 4) != 0) {
                func_?();
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

