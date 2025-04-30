
/* Void ConnectAxisSliderLookAndFeel(GizmoLineSlider3D) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_ConnectAxisSliderLookAndFeel
               (TerrainGizmoLookAndFeel *this,GizmoLineSlider3D *axisSlider,MethodInfo *method)

{
  if (axisSlider != (GizmoLineSlider3D *)0x0) {
    GizmoLineSlider3D::GizmoLineSlider3D_set_SharedLookAndFeel
              (axisSlider,(this->fields)._axisSliderLookAndFeel,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ConnectMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_ConnectMidCapLookAndFeel
               (TerrainGizmoLookAndFeel *this,GizmoCap3D *pickPointCap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  if (pickPointCap != (GizmoCap3D *)0x0) {
    ppGStack_2 = &(pickPointCap->fields)._sharedLookAndFeel;
    pGStack_1 = (this->fields)._midCapLookAndFeel;
    *ppGStack_2 = pGStack_1;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectRadiusTickLookAndFeel(GizmoCap2D) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_ConnectRadiusTickLookAndFeel
               (TerrainGizmoLookAndFeel *this,GizmoCap2D *radiusTick,MethodInfo *method)

{
  pGStack_1 = (GizmoCap2DLookAndFeel *)&stack0xfffffffc;
  if (radiusTick != (GizmoCap2D *)0x0) {
    ppGStack_2 = &(radiusTick->fields)._sharedLookAndFeel;
    pGStack_1 = (this->fields)._radiusTickLookAndFeel;
    *ppGStack_2 = pGStack_1;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TerrainGizmoLookAndFeel() */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel__ctor
               (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoCap2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._radiusCircleColor.r = _UNK_?;
  (this->fields)._radiusCircleColor.g = fVar3;
  (this->fields)._radiusCircleColor.b = fVar2;
  (this->fields)._radiusCircleColor.a = fVar1;
  pGVar4 = (GizmoLineSlider3DLookAndFeel *)
           func_?(TypeInfo__RTG__GizmoLineSlider3DLookAndFeel);
  GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(pGVar4,(MethodInfo *)0x0);
  ppGVar5 = &(this->fields)._axisSliderLookAndFeel;
  *ppGVar5 = pGVar4;
  func_?(ppGVar5,pGVar4);
  pGVar6 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar6,(MethodInfo *)0x0);
  ppGVar7 = &(this->fields)._midCapLookAndFeel;
  *ppGVar7 = pGVar6;
  func_?(ppGVar7,pGVar6);
  pGVar8 = (GizmoCap2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap2DLookAndFeel);
  GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(pGVar8,(MethodInfo *)0x0);
  (this->fields)._radiusTickLookAndFeel = pGVar8;
  ppGVar9 = &(this->fields)._radiusTickLookAndFeel;
  method_00 = (MethodInfo *)ppGVar9;
  func_?(ppGVar9,pGVar8);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pGVar4 = (this->fields)._axisSliderLookAndFeel;
  if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    (pGVar4->fields)._color.r = _UNK_?;
    (pGVar4->fields)._color.g = fVar3;
    (pGVar4->fields)._color.b = fVar2;
    (pGVar4->fields)._color.a = fVar1;
    fVar1 = _UNK_?;
    fVar2 = _UNK_?;
    fVar3 = _UNK_?;
    pGVar4 = (this->fields)._axisSliderLookAndFeel;
    if ((pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
       (pGVar6 = (pGVar4->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0)) {
      (pGVar6->fields)._color.r = _UNK_?;
      (pGVar6->fields)._color.g = fVar3;
      (pGVar6->fields)._color.b = fVar2;
      (pGVar6->fields)._color.a = fVar1;
      pGVar4 = (this->fields)._axisSliderLookAndFeel;
      if ((pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
         (pGVar6 = (pGVar4->fields)._capLookAndFeel, pGVar6 != (GizmoCap3DLookAndFeel *)0x0)) {
        (pGVar6->fields)._capType = 0;
        pGVar4 = (this->fields)._axisSliderLookAndFeel;
        if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
          (pGVar4->fields)._lineType = 0;
          pGVar4 = (this->fields)._axisSliderLookAndFeel;
          if (pGVar4 != (GizmoLineSlider3DLookAndFeel *)0x0) {
            GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
                      ((GizmoPlaneSlider3DSettings *)pGVar4,5.0,(MethodInfo *)0x0);
            if (*ppGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
              ((*ppGVar7)->fields)._capType = 2;
              if (*ppGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth
                          (*ppGVar7,0.7,(MethodInfo *)0x0);
                if (*ppGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight
                            (*ppGVar7,0.7,(MethodInfo *)0x0);
                  if (*ppGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth
                              (*ppGVar7,0.7,(MethodInfo *)0x0);
                    if (*ppGVar7 != (GizmoCap3DLookAndFeel *)0x0) {
                      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius
                                (*ppGVar7,0.35,(MethodInfo *)0x0);
                      fVar1 = _UNK_?;
                      fVar2 = _UNK_?;
                      fVar3 = _UNK_?;
                      pGVar6 = *ppGVar7;
                      if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
                        (pGVar6->fields)._color.r = _UNK_?;
                        (pGVar6->fields)._color.g = fVar3;
                        (pGVar6->fields)._color.b = fVar2;
                        (pGVar6->fields)._color.a = fVar1;
                        if (*ppGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                          ((*ppGVar9)->fields)._capType = 0;
                          fVar1 = _UNK_?;
                          fVar2 = _UNK_?;
                          fVar3 = _UNK_?;
                          pGVar8 = *ppGVar9;
                          if (pGVar8 != (GizmoCap2DLookAndFeel *)0x0) {
                            (pGVar8->fields)._color.r = _UNK_?;
                            (pGVar8->fields)._color.g = fVar3;
                            (pGVar8->fields)._color.b = fVar2;
                            (pGVar8->fields)._color.a = fVar1;
                            if (*ppGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                              CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
                                        ((CameraMoveSettings *)*ppGVar9,8.0,(MethodInfo *)0x0);
                              if ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar9 !=
                                  (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                                GizmoPlaneSlider3DLookAndFeel::
                                GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
                                          ((GizmoPlaneSlider3DLookAndFeel *)*ppGVar9,8.0,
                                           (MethodInfo *)0x0);
                                fVar10 = _UNK_?;
                                fVar1 = _UNK_?;
                                fVar2 = _UNK_?;
                                fVar3 = _UNK_?;
                                if (*ppGVar9 != (GizmoCap2DLookAndFeel *)0x0) {
                                  ((*ppGVar9)->fields)._circleRadius = 4.0;
                                  pGVar8 = *ppGVar9;
                                  color.g = fVar2;
                                  color.r = fVar3;
                                  color.b = fVar1;
                                  color.a = fVar10;
                                  pCVar11 = ColorEx::ColorEx_KeepAllButAlpha
                                                      ((Color *)&stack0xffffffec,color,0.0,
                                                       (MethodInfo *)0x0);
                                  fVar3 = pCVar11->g;
                                  fVar2 = pCVar11->b;
                                  fVar1 = pCVar11->a;
                                  if (pGVar8 != (GizmoCap2DLookAndFeel *)0x0) {
                                    (pGVar8->fields)._borderColor.r = pCVar11->r;
                                    (pGVar8->fields)._borderColor.g = fVar3;
                                    (pGVar8->fields)._borderColor.b = fVar2;
                                    (pGVar8->fields)._borderColor.a = fVar1;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Color get_AxisSliderCapColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_AxisSliderCapColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    fVar4 = (pGVar3->fields)._color.g;
    fVar5 = (pGVar3->fields)._color.b;
    fVar6 = (pGVar3->fields)._color.a;
    __return_storage_ptr__->r = (pGVar3->fields)._color.r;
    __return_storage_ptr__->g = fVar4;
    __return_storage_ptr__->b = fVar5;
    __return_storage_ptr__->a = fVar6;
    return __return_storage_ptr__;
  }
  uVar7 = func_?(auStack_8);
  func_?(uVar7);
  pcVar9 = (code *)swi(3);
  pCVar10 = (Color *)(*pcVar9)();
  return pCVar10;
}


/* Color get_AxisSliderCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_AxisSliderCapHoveredColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    fVar4 = (pGVar3->fields)._hoveredColor.g;
    fVar5 = (pGVar3->fields)._hoveredColor.b;
    fVar6 = (pGVar3->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar3->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar4;
    __return_storage_ptr__->b = fVar5;
    __return_storage_ptr__->a = fVar6;
    return __return_storage_ptr__;
  }
  uVar7 = func_?(auStack_8);
  func_?(uVar7);
  pcVar9 = (code *)swi(3);
  pCVar10 = (Color *)(*pcVar9)();
  return pCVar10;
}


/* GizmoCap3DType get_AxisSliderCapType() */

GizmoCap3DType__Enum
Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_AxisSliderCapType
          (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    return (pGVar3->fields)._capType;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  GVar7 = (*pcVar6)();
  return GVar7;
}


/* Color get_AxisSliderColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_AxisSliderColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._color.g;
    fVar4 = (pGVar2->fields)._color.b;
    fVar5 = (pGVar2->fields)._color.a;
    __return_storage_ptr__->r = (pGVar2->fields)._color.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_AxisSliderHoveredColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_AxisSliderHoveredColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredColor.g;
    fVar4 = (pGVar2->fields)._hoveredColor.b;
    fVar5 = (pGVar2->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_MidCapBoxDepth() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_MidCapBoxDepth
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxDepth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_MidCapBoxHeight() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_MidCapBoxHeight
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxHeight;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_MidCapBoxWidth() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_MidCapBoxWidth
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._boxWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_MidCapColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_MidCapColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._color.g;
    fVar4 = (pGVar2->fields)._color.b;
    fVar5 = (pGVar2->fields)._color.a;
    __return_storage_ptr__->r = (pGVar2->fields)._color.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_MidCapHoveredColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_MidCapHoveredColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredColor.g;
    fVar4 = (pGVar2->fields)._hoveredColor.b;
    fVar5 = (pGVar2->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_MidSphereRadius() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_MidSphereRadius
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._sphereRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_RadiusTickCircleRadius() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
      TerrainGizmoLookAndFeel_get_RadiusTickCircleRadius
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._circleRadius;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Color get_RadiusTickColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_RadiusTickColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._color.g;
    fVar4 = (pGVar2->fields)._color.b;
    fVar5 = (pGVar2->fields)._color.a;
    __return_storage_ptr__->r = (pGVar2->fields)._color.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Color get_RadiusTickHoveredColor() */

Color * Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
        TerrainGizmoLookAndFeel_get_RadiusTickHoveredColor
                  (Color *__return_storage_ptr__,TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredColor.g;
    fVar4 = (pGVar2->fields)._hoveredColor.b;
    fVar5 = (pGVar2->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* Single get_RadiusTickQuadWidth() */

float Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
      TerrainGizmoLookAndFeel_get_RadiusTickQuadWidth
                (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._quadWidth;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoCap2DType get_RadiusTickType() */

GizmoCap2DType__Enum
Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
          (TerrainGizmoLookAndFeel *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._capType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Void set_AxisSliderCapColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_AxisSliderCapColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    (pGVar3->fields)._color.r = value.r;
    (pGVar3->fields)._color.g = value.g;
    (pGVar3->fields)._color.b = value.b;
    (pGVar3->fields)._color.a = value.a;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_AxisSliderCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_AxisSliderCapHoveredColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    (pGVar3->fields)._hoveredColor.r = value.r;
    (pGVar3->fields)._hoveredColor.g = value.g;
    (pGVar3->fields)._hoveredColor.b = value.b;
    (pGVar3->fields)._hoveredColor.a = value.a;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_AxisSliderCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_AxisSliderCapType
               (TerrainGizmoLookAndFeel *this,GizmoCap3DType__Enum value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if ((pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) &&
     (pGVar3 = (pGVar2->fields)._capLookAndFeel, pGVar3 != (GizmoCap3DLookAndFeel *)0x0)) {
    (pGVar3->fields)._capType = value;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_AxisSliderColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_AxisSliderColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = value.r;
    (pGVar2->fields)._color.g = value.g;
    (pGVar2->fields)._color.b = value.b;
    (pGVar2->fields)._color.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_AxisSliderHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_AxisSliderHoveredColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axisSliderLookAndFeel;
  if (pGVar2 != (GizmoLineSlider3DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = value.r;
    (pGVar2->fields)._hoveredColor.g = value.g;
    (pGVar2->fields)._hoveredColor.b = value.b;
    (pGVar2->fields)._hoveredColor.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_MidCapBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidCapBoxDepth
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxDepth(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MidCapBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidCapBoxHeight
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxHeight(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MidCapBoxWidth(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidCapBoxWidth
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_BoxWidth(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MidCapColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidCapColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = value.r;
    (pGVar2->fields)._color.g = value.g;
    (pGVar2->fields)._color.b = value.b;
    (pGVar2->fields)._color.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_MidCapHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_MidCapHoveredColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = value.r;
    (pGVar2->fields)._hoveredColor.g = value.g;
    (pGVar2->fields)._hoveredColor.b = value.b;
    (pGVar2->fields)._hoveredColor.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_MidCapType(GizmoCap3DType) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidCapType
               (TerrainGizmoLookAndFeel *this,GizmoCap3DType__Enum value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((value == GizmoCap3DType__Enum_Box) || (value == GizmoCap3DType__Enum_Sphere)) {
    pGVar2 = (this->fields)._midCapLookAndFeel;
    if (pGVar2 == (GizmoCap3DLookAndFeel *)0x0) {
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar2->fields)._capType = value;
  }
  return;
}


/* Void set_MidSphereRadius(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_MidSphereRadius
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._midCapLookAndFeel;
  if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RadiusTickCircleRadius(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_RadiusTickCircleRadius
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._circleRadius = value;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_RadiusTickColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_RadiusTickColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = value.r;
    (pGVar2->fields)._color.g = value.g;
    (pGVar2->fields)._color.b = value.b;
    (pGVar2->fields)._color.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_RadiusTickHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_RadiusTickHoveredColor
               (TerrainGizmoLookAndFeel *this,Color value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._radiusTickLookAndFeel;
  if (pGVar2 != (GizmoCap2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = value.r;
    (pGVar2->fields)._hoveredColor.g = value.g;
    (pGVar2->fields)._hoveredColor.b = value.b;
    (pGVar2->fields)._hoveredColor.a = value.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_RadiusTickQuadHeight(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_RadiusTickQuadHeight
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (GizmoPlaneSlider3DLookAndFeel *)(this->fields)._radiusTickLookAndFeel;
  if (this_00 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
    GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RadiusTickQuadWidth(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::
     TerrainGizmoLookAndFeel_set_RadiusTickQuadWidth
               (TerrainGizmoLookAndFeel *this,float value,MethodInfo *method)

{
  this_00 = (this->fields)._radiusTickLookAndFeel;
  if (this_00 != (GizmoCap2DLookAndFeel *)0x0) {
    CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
              ((CameraMoveSettings *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RadiusTickType(GizmoCap2DType) */

void Assembly-CSharp.dll::RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_set_RadiusTickType
               (TerrainGizmoLookAndFeel *this,GizmoCap2DType__Enum value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((value == GizmoCap2DType__Enum_Circle) || (value == GizmoCap2DType__Enum_Quad)) {
    pGVar2 = (this->fields)._radiusTickLookAndFeel;
    if (pGVar2 == (GizmoCap2DLookAndFeel *)0x0) {
      uVar3 = func_?(auStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pGVar2->fields)._capType = value;
  }
  return;
}

