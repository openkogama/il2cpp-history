
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
        GizmoPolygonPlaneSlider2DController_GetRealExtentPoint
                  (GizmoPolygonPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 == (GizmoPlaneSlider2DControllerData *)0x0) ||
     (pPVar2 = (pGVar1->fields).Polygon, pPVar2 == (PolygonShape2D *)0x0)) {
    VStack_3.y = (float)&stack0xfffffffc;
    pfStack_4 = &fStack_5;
    pfStack_4 = (float *)func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    VVar7 = (Vector2)(*pcVar6)();
    return VVar7;
  }
  pfVar8 = (float *)(*(code *)(pPVar2->klass->vtable).GetEncapsulatingRect.method)
                              (&fStack_9,pPVar2,pPVar2->klass[1]._0.image);
  fVar10 = _UNK_?;
  fVar11 = *pfVar8;
  fVar12 = pfVar8[1];
  fVar13 = pfVar8[2];
  fVar14 = pfVar8[3];
  fStack_9 = fVar11;
  puStack_15 = (undefined *)fVar12;
  pfStack_4 = (float *)fVar13;
  fStack_5 = fVar14;
  switch(extentPt) {
  case Shape2DExtentPoint__Enum_Left:
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
    VStack_3.x = VVar7.x;
    VStack_3.y = VVar7.y;
    fVar16 = VStack_3.x * (float)pfStack_4;
    VStack_3.y = VStack_3.y * (float)pfStack_4;
    break;
  case Shape2DExtentPoint__Enum_Top:
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
    VStack_3.x = VVar7.x;
    VStack_3.y = VVar7.y;
    fVar16 = VStack_3.x * fStack_5;
    VStack_3.y = VStack_3.y * fStack_5;
    goto code_?;
  case Shape2DExtentPoint__Enum_Right:
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
    VStack_3.x = VVar7.x;
    VStack_3.y = VVar7.y;
    fVar16 = VStack_3.x * (float)pfStack_4;
    VStack_3.y = VStack_3.y * (float)pfStack_4;
code_?:
    extentPt = (Shape2DExtentPoint__Enum)(fVar14 * fVar10 + fVar12);
    this = (GizmoPolygonPlaneSlider2DController *)(fVar13 * fVar10 + fVar11);
    VStack_3.y = (float)extentPt + VStack_3.y * _UNK_?;
    VStack_3.x = (float)this + fVar16 * _UNK_?;
    return VStack_3;
  case Shape2DExtentPoint__Enum_Bottom:
    VVar7 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
    VStack_3.x = VVar7.x;
    VStack_3.y = VVar7.y;
    fVar16 = VStack_3.x * fStack_5;
    VStack_3.y = VStack_3.y * fStack_5;
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  }
  extentPt = (Shape2DExtentPoint__Enum)(fVar14 * fVar10 + fVar12);
  this = (GizmoPolygonPlaneSlider2DController *)(fVar13 * fVar10 + fVar11);
  VStack_3.y = (float)extentPt - VStack_3.y * _UNK_?;
  VStack_3.x = (float)this - fVar16 * _UNK_?;
  return VStack_3;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateEpsilons
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Polygon;
    pGVar2 = (((this->fields)._._data)->fields).Slider;
    if (pGVar2 != (GizmoPlaneSlider2D *)0x0) {
      if ((pGVar2->fields)._sharedSettings == (GizmoPlaneSlider2DSettings *)0x0) {
        pGVar3 = (pGVar2->fields)._settings;
        if (pGVar3 == (GizmoPlaneSlider2DSettings *)0x0) goto code_?;
      }
      else {
        pGVar3 = (pGVar2->fields)._sharedSettings;
      }
      if (this_00 != (PolygonShape2D *)0x0) {
        SphereShape3D::SphereShape3D_set_RadiusEps
                  ((SphereShape3D *)this_00,(pGVar3->fields)._areaHoverEps,(MethodInfo *)0x0);
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
              GizmoHandle::GizmoHandle_Set2DShapeVisible
                        (pGVar2,(pGVar1->fields).PolygonIndex,(pGVar3->fields)._._isVisible,
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

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateTransforms
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (pGVar2 = (pGVar1->fields).PolygonBorder, pGVar2 != (GizmoPolygon2DBorder *)0x0)) {
    if (cRam_? == '\0') {
      pIStack_3 = (IGizmoPolygon2DBorderController *)&TypeInfo__RTG__IGizmoPolygon2DBorderController
      ;
      func_?();
      cRam_? = '\x01';
    }
    pIVar4 = (pGVar2->fields)._controllers;
    pGVar5 = (pGVar2->fields)._planeSlider;
    if (pGVar5 != (GizmoPlaneSlider2D *)0x0) {
      if ((pGVar5->fields)._sharedLookAndFeel == (GizmoPlaneSlider2DLookAndFeel *)0x0) {
        pGVar6 = (pGVar5->fields)._lookAndFeel;
        if (pGVar6 == (GizmoPlaneSlider2DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pGVar6 = (pGVar5->fields)._sharedLookAndFeel;
      }
      if (pIVar4 != (IGizmoPolygon2DBorderController__Array *)0x0) {
        uVar7 = (pGVar6->fields)._polygonBorderType;
        if (pIVar4->max_length <= uVar7) {
          pIStack_3 = (IGizmoPolygon2DBorderController *)0x0;
          pIStack_8 = (IGizmoPolygon2DBorderController__Class *)func_?();
          func_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pIStack_3 = pIVar4->vector[uVar7];
        if (pIStack_3 != (IGizmoPolygon2DBorderController *)0x0) {
          pIStack_8 = TypeInfo__RTG__IGizmoPolygon2DBorderController;
          puStack_10 = (undefined *)0x2;
          func_?();
          return;
        }
      }
    }
  }
code_?:
  pIStack_3 = (IGizmoPolygon2DBorderController *)&stack0xfffffffc;
  uVar11 = func_?(&puStack_10);
  func_?(uVar11);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

