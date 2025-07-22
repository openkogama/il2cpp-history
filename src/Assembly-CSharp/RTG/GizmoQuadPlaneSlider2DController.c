
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
        GizmoQuadPlaneSlider2DController_GetRealExtentPoint
                  (GizmoQuadPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._._data;
  if ((pGVar2 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (this_00 = (pGVar2->fields).Quad, this_00 != (QuadShape2D *)0x0)) {
    fVar3 = (this_00->fields)._size.x * _UNK_?;
    puStack_1 = (undefined1 *)((this_00->fields)._size.y * _UNK_?);
    switch(extentPt) {
    case Shape2DExtentPoint__Enum_Left:
      fVar4 = (this_00->fields)._center.x;
      puStack_1 = (undefined1 *)(this_00->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                        ((RightAngTriangle2D *)this_00,(MethodInfo *)0x0);
      VStack_6.y = VVar5.y;
      VStack_6.y = (float)puStack_1 - VStack_6.y * fVar3;
      VStack_6.x = fVar4 - VStack_6.x * fVar3;
      return VStack_6;
    case Shape2DExtentPoint__Enum_Top:
      fVar3 = (this_00->fields)._center.x;
      fVar4 = (this_00->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                        ((RightAngTriangle2D *)this_00,(MethodInfo *)0x0);
      VStack_6.y = VVar5.y;
      VStack_6.y = VStack_6.y * (float)puStack_1 + fVar4;
      VStack_6.x = VStack_6.x * (float)puStack_1 + fVar3;
      return VStack_6;
    case Shape2DExtentPoint__Enum_Right:
      fVar4 = (this_00->fields)._center.x;
      puStack_1 = (undefined1 *)(this_00->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                        ((RightAngTriangle2D *)this_00,(MethodInfo *)0x0);
      VStack_6.y = VVar5.y;
      VStack_6.y = VStack_6.y * fVar3 + (float)puStack_1;
      VStack_6.x = VStack_6.x * fVar3 + fVar4;
      return VStack_6;
    case Shape2DExtentPoint__Enum_Bottom:
      fVar3 = (this_00->fields)._center.x;
      fVar4 = (this_00->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                        ((RightAngTriangle2D *)this_00,(MethodInfo *)0x0);
      VStack_6.y = VVar5.y;
      VStack_6.y = fVar4 - VStack_6.y * (float)puStack_1;
      VStack_6.x = fVar3 - VStack_6.x * (float)puStack_1;
      return VStack_6;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  uVar7 = func_?(&VStack_6);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar8)();
  return VVar5;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
     GizmoQuadPlaneSlider2DController_UpdateEpsilons
               (GizmoQuadPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    pGVar2 = (pGVar1->fields).Slider;
    this_00 = (pGVar1->fields).Quad;
    if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoPlaneSlider2DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      value = Vector2Ex::Vector2Ex_FromValue((pGVar3->fields)._areaHoverEps,(MethodInfo *)0x0);
      if (this_00 != (QuadShape2D *)0x0) {
        QuadShape2D::QuadShape2D_set_SizeEps(this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
              GizmoHandle::GizmoHandle_Set2DShapeVisible
                        (pGVar2,(pGVar1->fields).QuadIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoQuadPlaneSlider2DController::
     GizmoQuadPlaneSlider2DController_UpdateTransforms
               (GizmoQuadPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
      (this_00 = (pGVar1->fields).Slider, this_00 != (GizmoPlaneSlider2D *)0x0)) &&
     (pGVar2 = (this_00->fields)._transform, pGVar2 != (GizmoTransform *)0x0)) {
    this_01 = (pGVar1->fields).Quad;
    fVar3 = (pGVar2->fields)._position2D.y;
    if (this_01 != (QuadShape2D *)0x0) {
      (this_01->fields)._center.x = (pGVar2->fields)._position2D.x;
      (this_01->fields)._center.y = fVar3;
      pGVar2 = (this_00->fields)._transform;
      if (pGVar2 != (GizmoTransform *)0x0) {
        QuadShape2D::QuadShape2D_set_RotationDegrees
                  (this_01,(pGVar2->fields)._rotation2DDegrees,(MethodInfo *)0x0);
        fVar3 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadWidth(this_00,(MethodInfo *)0x0);
        fVar4 = GizmoPlaneSlider2D::GizmoPlaneSlider2D_GetRealQuadHeight(this_00,(MethodInfo *)0x0);
        value.y = fVar4;
        value.x = fVar3;
        QuadShape2D::QuadShape2D_set_Size(this_01,value,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
           (this_02 = (pGVar1->fields).QuadBorder, this_02 != (GizmoQuad2DBorder *)0x0)) {
          GizmoQuad2DBorder::GizmoQuad2DBorder_OnQuadShapeChanged(this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

