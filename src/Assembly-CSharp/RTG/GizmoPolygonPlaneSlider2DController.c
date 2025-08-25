
/* Vector2 GetRealExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
        GizmoPolygonPlaneSlider2DController_GetRealExtentPoint
                  (GizmoPolygonPlaneSlider2DController *this,Shape2DExtentPoint__Enum extentPt,
                  MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if ((pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) &&
     (pPVar2 = (pGVar1->fields).Polygon, pPVar2 != (PolygonShape2D *)0x0)) {
    pfVar3 = (float *)(*(code *)(pPVar2->klass->vtable).GetEncapsulatingRect.method)
                                (&fStack_4,pPVar2,pPVar2->klass[1]._0.image);
    fVar5 = _UNK_?;
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    fStack_4 = fVar6;
    puStack_10 = (undefined *)fVar7;
    pfStack_11 = (float *)fVar8;
    fStack_12 = fVar9;
    switch(extentPt) {
    case Shape2DExtentPoint__Enum_Left:
      VVar13 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
      VStack_14.x = VVar13.x;
      VStack_14.y = VVar13.y;
      fVar15 = VStack_14.x * (float)pfStack_11;
      VStack_14.y = VStack_14.y * (float)pfStack_11;
      break;
    case Shape2DExtentPoint__Enum_Top:
      fVar8 = fVar8 * _UNK_?;
      fVar9 = fVar9 * _UNK_?;
      VVar13 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
      VStack_14.x = VVar13.x;
      VStack_14.y = VVar13.y;
      VStack_14.y = fVar9 + fVar7 + VStack_14.y * fStack_12 * _UNK_?;
      VStack_14.x = fVar8 + fVar6 + VStack_14.x * fStack_12 * _UNK_?;
      return VStack_14;
    case Shape2DExtentPoint__Enum_Right:
      fVar8 = fVar8 * _UNK_?;
      fVar9 = fVar9 * _UNK_?;
      VVar13 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight((MethodInfo *)0x0);
      VStack_14.x = VVar13.x;
      VStack_14.y = VVar13.y;
      VStack_14.y = VStack_14.y * (float)pfStack_11 * _UNK_? + fVar9 + fVar7;
      VStack_14.x = VStack_14.x * (float)pfStack_11 * _UNK_? + fVar8 + fVar6;
      return VStack_14;
    case Shape2DExtentPoint__Enum_Bottom:
      VVar13 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp((MethodInfo *)0x0);
      VStack_14.x = VVar13.x;
      VStack_14.y = VVar13.y;
      fVar15 = VStack_14.x * fStack_12;
      VStack_14.y = VStack_14.y * fStack_12;
      break;
    default:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
    }
    extentPt = (Shape2DExtentPoint__Enum)(fVar9 * fVar5 + fVar7);
    this = (GizmoPolygonPlaneSlider2DController *)(fVar8 * fVar5 + fVar6);
    VStack_14.y = (float)extentPt - VStack_14.y * _UNK_?;
    VStack_14.x = (float)this - fVar15 * _UNK_?;
    return VStack_14;
  }
  VStack_14.y = (float)&stack0xfffffffc;
  pfStack_11 = &fStack_12;
  pfStack_11 = (float *)func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  VVar13 = (Vector2)(*pcVar16)();
  return VVar13;
}


/* Void UpdateEpsilons() */

void Assembly-CSharp.dll::RTG::GizmoPolygonPlaneSlider2DController::
     GizmoPolygonPlaneSlider2DController_UpdateEpsilons
               (GizmoPolygonPlaneSlider2DController *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._data;
  if (pGVar1 != (GizmoPlaneSlider2DControllerData *)0x0) {
    this_00 = (pGVar1->fields).Polygon;
    pGVar2 = (pGVar1->fields).Slider;
    if (((pGVar2 != (GizmoPlaneSlider2D *)0x0) &&
        (pGVar3 = (&(pGVar2->fields)._settings)
                  [(pGVar2->fields)._sharedSettings != (GizmoPlaneSlider2DSettings *)0x0],
        pGVar3 != (GizmoPlaneSlider2DSettings *)0x0)) && (this_00 != (PolygonShape2D *)0x0)) {
      SphereShape3D::SphereShape3D_set_RadiusEps
                ((SphereShape3D *)this_00,(pGVar3->fields)._areaHoverEps,(MethodInfo *)0x0);
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
    pGVar4 = (pGVar2->fields)._planeSlider;
    pIVar5 = (pGVar2->fields)._controllers;
    if (((pGVar4 != (GizmoPlaneSlider2D *)0x0) &&
        (pGVar6 = (&(pGVar4->fields)._lookAndFeel)
                  [(pGVar4->fields)._sharedLookAndFeel != (GizmoPlaneSlider2DLookAndFeel *)0x0],
        pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0)) &&
       (pIVar5 != (IGizmoPolygon2DBorderController__Array *)0x0)) {
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

