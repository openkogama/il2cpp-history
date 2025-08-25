
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::GizmoPolygonPlaneSlider2DController_GetRealExtentPoint(GizmoPolygonPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pPVar2 = (pGVar1->fields).Polygon, pPVar2 != (PolygonShape2D *)0x0)) {
    pfVar3 = (float *)(*(code *)(pPVar2->klass->vtable).GetEncapsulatingRect.method)(&fStack_4,pPVar2,pPVar2->klass[1]._0.image);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    fStack_4 = fVar5;
    puStack_9 = (undefined *)fVar6;
    pfStack_10 = (float *)fVar7;
    fStack_11 = fVar8;
    switch(extentPt) {
    case Shape2DExtentPoint__Enum_Left:
      VVar12 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
      VStack_13.x = VVar12.x;
      VStack_13.y = VVar12.y;
      fVar14 = VStack_13.x * (float)pfStack_10;
      VStack_13.y = VStack_13.y * (float)pfStack_10;
      break;
    case Shape2DExtentPoint__Enum_Top:
      VVar12 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
      VStack_13.x = VVar12.x;
      VStack_13.y = VVar12.y;
      VStack_13.y = fVar8 * 0.5 + fVar6 + VStack_13.y * fStack_11 * 0.5;
      VStack_13.x = fVar7 * 0.5 + fVar5 + VStack_13.x * fStack_11 * 0.5;
      return VStack_13;
    case Shape2DExtentPoint__Enum_Right:
      VVar12 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
      VStack_13.x = VVar12.x;
      VStack_13.y = VVar12.y;
      VStack_13.y = VStack_13.y * (float)pfStack_10 * 0.5 + fVar8 * 0.5 + fVar6;
      VStack_13.x = VStack_13.x * (float)pfStack_10 * 0.5 + fVar7 * 0.5 + fVar5;
      return VStack_13;
    case Shape2DExtentPoint__Enum_Bottom:
      VVar12 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
      VStack_13.x = VVar12.x;
      VStack_13.y = VVar12.y;
      fVar14 = VStack_13.x * fStack_11;
      VStack_13.y = VStack_13.y * fStack_11;
      break;
    default:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
    }
    extentPt = (Shape2DExtentPoint__Enum)(fVar8 * 0.5 + fVar6);
    this = (GizmoPolygonPlaneSlider2DController *)(fVar7 * 0.5 + fVar5);
    VStack_13.y = (float)extentPt - VStack_13.y * 0.5;
    VStack_13.x = (float)this - fVar14 * 0.5;
    return VStack_13;
  }
  VStack_13.y = (float)&stack0xfffffffc;
  pfStack_10 = &fStack_11;
  pfStack_10 = (float *)func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  VVar12 = (Vector2)(*pcVar15)();
  return VVar12;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::GizmoPolygonPlaneSlider2DController_UpdateEpsilons(GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Polygon;
    pGVar2 = (pGVar1->fields).Slider;
    if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) && (pGVar3 = (&(pGVar2->fields)._settings)[(pGVar2->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0], pGVar3 != (GizmoPlaneSlider2DSettings *)0x0)) && (this_00 != (PolygonShape2D *)0x0)) {
      SphereShape3D::SphereShape3D_set_RadiusEps((SphereShape3D *)this_00,(pGVar3->fields)._areaHoverEps,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHandles() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::GizmoPolygonPlaneSlider2DController_UpdateHandles(GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (this_00 = (pGVar1->fields).CircleBorder, this_00 != (GizmoCircle2DBorder *)0x0)) {
    GizmoCircle2DBorder::GizmoCircle2DBorder_SetVisible(this_00,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._data;
    if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
      GizmoHandle::GizmoHandle_Set2DShapeVisible(pGVar2,(pGVar1->fields).CircleIndex,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._data;
      if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (this_01 = (pGVar1->fields).QuadBorder, this_01 != (GizmoQuad2DBorder *)0x0)) {
        GizmoQuad2DBorder::GizmoQuad2DBorder_SetVisible(this_01,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._data;
        if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
          GizmoHandle::GizmoHandle_Set2DShapeVisible(pGVar2,(pGVar1->fields).QuadIndex,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields)._._data;
          if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) && (this_02 = (pGVar1->fields).PolygonBorder, this_02 != (GizmoPolygon2DBorder *)0x0)) {
            GizmoPolygon2DBorder::GizmoPolygon2DBorder_SetVisible(this_02,(pGVar3->fields)._isBorderVisible,(MethodInfo *)0x0);
            pGVar1 = (this->fields)._._data;
            if (((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pGVar3 = (pGVar1->fields).Slider, pGVar3 != (GizmoPlaneSlider2D *)0x0)) && (pGVar2 = (pGVar1->fields).SliderHandle, pGVar2 != (GizmoHandle *)0x0)) {
              GizmoHandle::GizmoHandle_Set2DShapeVisible(pGVar2,(pGVar1->fields).PolygonIndex,(pGVar3->fields)._._isVisible,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::GizmoPolygonPlaneSlider2DController_UpdateTransforms(GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) && (pGVar2 = (pGVar1->fields).PolygonBorder, pGVar2 != (GizmoPolygon2DBorder *)0x0)) {
    if (cRam_? == '\0') {
      pIStack_3 = (IGizmoPolygon2DBorderController *)&TypeInfo__RTG__IGizmoPolygon2DBorderController;
      func_?();
      cRam_? = '\x01';
    }
    pGVar4 = (pGVar2->fields)._planeSlider;
    pIVar5 = (pGVar2->fields)._controllers;
    if (((pGVar4 != (GizmoPlaneSlider2D *)0x0) && (pGVar6 = (&(pGVar4->fields)._lookAndFeel)[(pGVar4->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0], pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) && (pIVar5 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
      uVar7 = (pGVar6->fields)._polygonBorderType;
      if (pIVar5->max_length <= uVar7) {
        pIStack_3 = (IGizmoPolygon2DBorderController *)0x0;
        pIStack_8 = (IGizmoPolygon2DBorderController__Class *)func_?();
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pIStack_3 = pIVar5->vector[uVar7];
      if (pIStack_3 != (IGizmoPolygon2DBorderController *)0x0) {
        pIStack_8 = TypeInfo__RTG__IGizmoPolygon2DBorderController;
        puStack_10 = (undefined *)0x2;
        func_?();
        return;
      }
    }
  }
  pIStack_3 = (IGizmoPolygon2DBorderController *)&stack0xfffffffc;
  uVar11 = func_?(&puStack_10);
  func_?(uVar11);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

