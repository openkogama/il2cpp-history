
/* Void ConnectCamLookSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_ConnectCamLookSliderLookAndFeel(RotationGizmoLookAndFeel3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider2DLookAndFeel *)&stack0xfffffffc;
  if (slider != (GizmoPlaneSlider2D *)0x0) {
    pGStack_1 = (this->fields)._camLookSliderLookAndFeel;
    (slider->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(slider->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_ConnectMidCapLookAndFeel(RotationGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  pGStack_1 = (GizmoCap3DLookAndFeel *)&stack0xfffffffc;
  if (cap != (GizmoCap3D *)0x0) {
    pGStack_1 = (this->fields)._midCapLookAndFeel;
    (cap->fields)._sharedLookAndFeel = pGStack_1;
    ppGStack_2 = &(cap->fields)._sharedLookAndFeel;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ConnectSliderLookAndFeel(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_ConnectSliderLookAndFeel(RotationGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,MethodInfo *method)

{
  pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)&stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
      pGStack_1 = (GizmoPlaneSlider3DLookAndFeel *)0x0;
      ppGStack_3 = (GizmoPlaneSlider3DLookAndFeel **)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      pGStack_1 = pGVar2->vector[axisIndex];
      (slider->fields)._sharedLookAndFeel = pGStack_1;
      ppGStack_3 = &(slider->fields)._sharedLookAndFeel;
      func_?();
      return;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisBorderColor(RotationGizmoLookAndFeel3D *this,int32_t axisIndex,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length <= (uint)axisIndex) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = pGVar2->vector[axisIndex];
    if (pGVar5 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      (pGVar5->fields)._borderColor.r = color.r;
      (pGVar5->fields)._borderColor.g = color.g;
      (pGVar5->fields)._borderColor.b = color.b;
      (pGVar5->fields)._borderColor.a = color.a;
      return;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisBorderCullAlphaScale(RotationGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale(*ppGVar3,scale,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisBorderFillMode(RotationGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._borderFillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderType(GizmoCircle3DBorderType) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisBorderType(RotationGizmoLookAndFeel3D *this,GizmoCircle3DBorderType__Enum borderType,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppGVar3)->fields)._circleBorderType = borderType;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisCylTorusHeight(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisCylTorusHeight(RotationGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight(*ppGVar3,height,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisCylTorusWidth(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisCylTorusWidth(RotationGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusWidth(*ppGVar3,width,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisTorusThickness(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetAxisTorusThickness(RotationGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pGVar1->max_length <= uVar2) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_BorderTorusThickness(*ppGVar3,thickness,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetCamLookSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderBorderColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._borderColor.r = color.r;
    (pGVar2->fields)._borderColor.g = color.g;
    (pGVar2->fields)._borderColor.b = color.b;
    (pGVar2->fields)._borderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamLookSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderHoveredBorderColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredBorderColor.r = color.r;
    (pGVar2->fields)._hoveredBorderColor.g = color.g;
    (pGVar2->fields)._hoveredBorderColor.b = color.b;
    (pGVar2->fields)._hoveredBorderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamLookSliderPolyBorderThickness(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderPolyBorderThickness(RotationGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  this_00 = (this->fields)._camLookSliderLookAndFeel;
  if (this_00 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness(this_00,thickness,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamLookSliderPolyBorderType(GizmoPolygon2DBorderType) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderPolyBorderType(RotationGizmoLookAndFeel3D *this,GizmoPolygon2DBorderType__Enum polyBorderType,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar2->fields)._polygonBorderType = polyBorderType;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamLookSliderRadiusOffset(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset(RotationGizmoLookAndFeel3D *this,float offset,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= offset) {
    fVar1 = offset;
  }
  (this->fields)._camLookSliderRadiusOffset = fVar1;
  return;
}


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetHoveredColor(RotationGizmoLookAndFeel3D *this,Color hoveredColor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._hoveredColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredColor.a = hoveredColor.a;
      (pGVar4->fields)._hoveredBorderColor.r = hoveredColor.r;
      (pGVar4->fields)._hoveredBorderColor.g = hoveredColor.g;
      (pGVar4->fields)._hoveredBorderColor.b = hoveredColor.b;
      (pGVar4->fields)._hoveredBorderColor.a = hoveredColor.a;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetHoveredMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetHoveredMidCapColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._hoveredColor.r = color.r;
    (pGVar2->fields)._hoveredColor.g = color.g;
    (pGVar2->fields)._hoveredColor.b = color.b;
    (pGVar2->fields)._hoveredColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetMidCapBorderColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._sphereBorderColor.r = color.r;
    (pGVar2->fields)._sphereBorderColor.g = color.g;
    (pGVar2->fields)._sphereBorderColor.b = color.b;
    (pGVar2->fields)._sphereBorderColor.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetMidCapBorderVisible(RotationGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._isSphereBorderVisible = isVisible;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetMidCapColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar2->fields)._color.r = color.r;
    (pGVar2->fields)._color.g = color.g;
    (pGVar2->fields)._color.b = color.b;
    (pGVar2->fields)._color.a = color.a;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetNumAxisTorusWireAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetNumAxisTorusWireAxialSlices(RotationGizmoLookAndFeel3D *this,int32_t numSlices,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pGVar2->max_length <= uVar1) break;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_NumBorderTorusWireAxialSlices(*ppGVar3,numSlices,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppGVar3 = ppGVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRadius(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetRadius(RotationGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius(*ppGVar3,radius,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (this->fields)._midCapLookAndFeel;
    if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
      GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(this_00,radius,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRotationArcBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetRotationArcBorderColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) || (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel, pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._borderColor.r = color.r;
      (pGVar4->fields)._borderColor.g = color.g;
      (pGVar4->fields)._borderColor.b = color.b;
      (pGVar4->fields)._borderColor.a = color.a;
    }
    pGVar5 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) && (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._borderColor.r = color.r;
      (pGVar6->fields)._borderColor.g = color.g;
      (pGVar6->fields)._borderColor.b = color.b;
      (pGVar6->fields)._borderColor.a = color.a;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetRotationArcColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetRotationArcColor(RotationGizmoLookAndFeel3D *this,Color color,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) || (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel, pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      ppGVar3 = ppGVar3 + 1;
      (pGVar4->fields)._color.r = color.r;
      (pGVar4->fields)._color.g = color.g;
      (pGVar4->fields)._color.b = color.b;
      (pGVar4->fields)._color.a = color.a;
    }
    pGVar5 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) && (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._color.r = color.r;
      (pGVar6->fields)._color.g = color.g;
      (pGVar6->fields)._color.b = color.b;
      (pGVar6->fields)._color.a = color.a;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetRotationArcVisible(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetRotationArcVisible(RotationGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar3)->fields)._isRotationArcVisible = isVisible;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._camLookSliderLookAndFeel;
    if (pGVar4 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      (pGVar4->fields)._isRotationArcVisible = isVisible;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetScale(RotationGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if (pGVar1->max_length <= uVar2) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      Sphere::Sphere_set_Radius((Sphere *)*ppGVar3,scale,(MethodInfo *)0x0);
      ppGVar3 = ppGVar3 + 1;
    }
    this_00 = (this->fields)._midCapLookAndFeel;
    if (this_00 != (GizmoCap3DLookAndFeel *)0x0) {
      GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps((GizmoPlaneSlider3DSettings *)this_00,scale,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetShadeMode(RotationGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      pGVar4 = *ppGVar3;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar4->fields)._shadeMode = shadeMode;
      (pGVar4->fields)._borderShadeMode = shadeMode;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar5 = (this->fields)._midCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._shadeMode = shadeMode;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUseShortestRotationArc(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetUseShortestRotationArc(RotationGizmoLookAndFeel3D *this,bool useShortest,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) || (pGVar4 = ((*ppGVar3)->fields)._rotationArcLookAndFeel, pGVar4 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      (pGVar4->fields)._useShortestRotation = useShortest;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar5 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) && (pGVar6 = (pGVar5->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar6->fields)._useShortestRotation = useShortest;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetUseZoomFactor(RotationGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar2->vector;
    for (; (int)uVar1 < (int)pGVar2->max_length; uVar1 = uVar1 + 1) {
      if (pGVar2->max_length <= uVar1) goto code_?;
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      ((*ppGVar3)->fields)._useZoomFactor = useZoomFactor;
      ppGVar3 = ppGVar3 + 1;
    }
    pGVar4 = (this->fields)._midCapLookAndFeel;
    if (pGVar4 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar4->fields)._useZoomFactor = useZoomFactor;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RotationGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pRVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    func_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    cRam_? = '\x01';
  }
  (this->fields)._isMidCapVisible = 1;
  pGVar2 = (GizmoCap3DLookAndFeel *)func_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel__ctor(pGVar2,(MethodInfo *)0x0);
  (this->fields)._midCapLookAndFeel = pGVar2;
  func_?(&(this->fields)._midCapLookAndFeel,pGVar2);
  pBVar3 = (Boolean__Array *)func_?(TypeInfo__System__Boolean,3);
  (this->fields)._axesVis = pBVar3;
  func_?(&(this->fields)._axesVis,pBVar3);
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel__Array *)func_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel,3);
  (this->fields)._axesLookAndFeel = pGVar4;
  func_?(&(this->fields)._axesLookAndFeel,pGVar4);
  (this->fields)._isCamLookSliderVisible = 1;
  (this->fields)._camLookSliderRadiusOffset = 0.65;
  pGVar5 = (GizmoPlaneSlider2DLookAndFeel *)func_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._camLookSliderLookAndFeel = pGVar5;
  func_?(&(this->fields)._camLookSliderLookAndFeel);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar4 = (this->fields)._axesLookAndFeel;
  this = (RotationGizmoLookAndFeel3D *)0x0;
  if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    iStack_6 = 0x10;
    do {
      if ((int)pGVar4->max_length <= (int)this) {
        pBVar3 = (pRVar1->fields)._axesVis;
        if (pBVar3 != (Boolean__Array *)0x0) {
          if (pBVar3->max_length == 0) goto code_?;
          pBVar3->vector[0] = 1;
          pBVar3 = (pRVar1->fields)._axesVis;
          if (pBVar3 != (Boolean__Array *)0x0) {
            if (pBVar3->max_length < 2) goto code_?;
            pBVar3->vector[1] = 1;
            pBVar3 = (pRVar1->fields)._axesVis;
            if (pBVar3 != (Boolean__Array *)0x0) {
              if (pBVar3->max_length < 3) goto code_?;
              pBVar3->vector[2] = 1;
              pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
              if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
                (pGVar2->fields)._capType = 3;
                pGVar5 = (pRVar1->fields)._camLookSliderLookAndFeel;
                if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  (pGVar5->fields)._planeType = 2;
                  pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
                  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
                    (pGVar2->fields)._color.r = 0.3;
                    (pGVar2->fields)._color.g = 0.3;
                    (pGVar2->fields)._color.b = 0.3;
                    (pGVar2->fields)._color.a = 0.12;
                    pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
                    if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
                      (pGVar2->fields)._hoveredColor.r = 0.3;
                      (pGVar2->fields)._hoveredColor.g = 0.3;
                      (pGVar2->fields)._hoveredColor.b = 0.3;
                      (pGVar2->fields)._hoveredColor.a = 0.12;
                      pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
                      if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
                        (pGVar2->fields)._isSphereBorderVisible = 1;
                        pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
                        if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
                          (pGVar2->fields)._sphereBorderColor.r = 1.0;
                          (pGVar2->fields)._sphereBorderColor.g = 1.0;
                          (pGVar2->fields)._sphereBorderColor.b = 1.0;
                          (pGVar2->fields)._sphereBorderColor.a = 1.0;
                          pGVar4 = (pRVar1->fields)._axesLookAndFeel;
                          uVar7 = 0;
                          if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                            ppGVar8 = pGVar4->vector;
                            goto code_?;
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
        break;
      }
      pGVar4 = (pRVar1->fields)._axesLookAndFeel;
      pGVar9 = (GizmoPlaneSlider3DLookAndFeel *)func_?();
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar9,(MethodInfo *)0x0);
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
      if ((pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) && (iVar10 = func_?(), iVar10 == 0)) goto code_?;
      if ((RotationGizmoLookAndFeel3D *)pGVar4->max_length <= this) goto code_?;
      *(GizmoPlaneSlider3DLookAndFeel **)((int)pGVar4->vector + iStack_6 + -0x10) = pGVar9;
      func_?();
      pGVar4 = (pRVar1->fields)._axesLookAndFeel;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
      if ((RotationGizmoLookAndFeel3D *)pGVar4->max_length <= this) goto code_?;
      iVar10 = *(int *)((int)pGVar4->vector + iStack_6 + -0x10);
      if (iVar10 == 0) break;
      this = (RotationGizmoLookAndFeel3D *)((int)&this->klass + 1);
      *(undefined4 *)(iVar10 + 8) = 2;
      iStack_6 = iStack_6 + 4;
      pGVar4 = (pRVar1->fields)._axesLookAndFeel;
    } while (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0);
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  if ((int)pGVar4->max_length <= (int)uVar7) goto code_?;
  if (pGVar4->max_length <= uVar7) goto code_?;
  if (*ppGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
  GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_CircleRadius(*ppGVar8,6.5,(MethodInfo *)0x0);
  uVar7 = uVar7 + 1;
  ppGVar8 = ppGVar8 + 1;
  goto code_?;
code_?:
  pGVar2 = (pRVar1->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    GizmoCap3DLookAndFeel::GizmoCap3DLookAndFeel_set_SphereRadius(pGVar2,6.5,(MethodInfo *)0x0);
    pCVar12 = RTSystemValues::RTSystemValues_get_XAxisColor((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
    pGVar4 = (pRVar1->fields)._axesLookAndFeel;
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      if (pGVar4->max_length == 0) goto code_?;
      pGVar9 = pGVar4->vector[0];
      fVar13 = pCVar12->g;
      fVar14 = pCVar12->b;
      fVar15 = pCVar12->a;
      if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        (pGVar9->fields)._borderColor.r = pCVar12->r;
        (pGVar9->fields)._borderColor.g = fVar13;
        (pGVar9->fields)._borderColor.b = fVar14;
        (pGVar9->fields)._borderColor.a = fVar15;
        pCVar12 = RTSystemValues::RTSystemValues_get_YAxisColor((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
        pGVar4 = (pRVar1->fields)._axesLookAndFeel;
        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          if (pGVar4->max_length < 2) goto code_?;
          pGVar9 = pGVar4->vector[1];
          fVar13 = pCVar12->g;
          fVar14 = pCVar12->b;
          fVar15 = pCVar12->a;
          if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            (pGVar9->fields)._borderColor.r = pCVar12->r;
            (pGVar9->fields)._borderColor.g = fVar13;
            (pGVar9->fields)._borderColor.b = fVar14;
            (pGVar9->fields)._borderColor.a = fVar15;
            pCVar12 = RTSystemValues::RTSystemValues_get_ZAxisColor((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
            pGVar4 = (pRVar1->fields)._axesLookAndFeel;
            if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
              if (pGVar4->max_length < 3) goto code_?;
              pGVar9 = pGVar4->vector[2];
              fVar13 = pCVar12->g;
              fVar14 = pCVar12->b;
              fVar15 = pCVar12->a;
              if (pGVar9 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                (pGVar9->fields)._borderColor.r = pCVar12->r;
                (pGVar9->fields)._borderColor.g = fVar13;
                (pGVar9->fields)._borderColor.b = fVar14;
                (pGVar9->fields)._borderColor.a = fVar15;
                pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
                pGVar4 = (pRVar1->fields)._axesLookAndFeel;
                uVar7 = 0;
                fVar13 = pCVar12->r;
                fVar14 = pCVar12->g;
                fVar15 = pCVar12->b;
                fVar16 = pCVar12->a;
                if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                  ppGVar8 = pGVar4->vector;
                  for (; (int)uVar7 < (int)pGVar4->max_length; uVar7 = uVar7 + 1) {
                    if (pGVar4->max_length <= uVar7) goto code_?;
                    pGVar9 = *ppGVar8;
                    if (pGVar9 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    ppGVar8 = ppGVar8 + 1;
                    (pGVar9->fields)._hoveredColor.r = fVar13;
                    (pGVar9->fields)._hoveredColor.g = fVar14;
                    (pGVar9->fields)._hoveredColor.b = fVar15;
                    (pGVar9->fields)._hoveredColor.a = fVar16;
                    (pGVar9->fields)._hoveredBorderColor.r = fVar13;
                    (pGVar9->fields)._hoveredBorderColor.g = fVar14;
                    (pGVar9->fields)._hoveredBorderColor.b = fVar15;
                    (pGVar9->fields)._hoveredBorderColor.a = fVar16;
                  }
                  pGVar5 = (pRVar1->fields)._camLookSliderLookAndFeel;
                  if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderPolyThickness(pGVar5,4.0,(MethodInfo *)0x0);
                    pGVar5 = (pRVar1->fields)._camLookSliderLookAndFeel;
                    if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      (pGVar5->fields)._borderColor.r = 1.0;
                      (pGVar5->fields)._borderColor.g = 1.0;
                      (pGVar5->fields)._borderColor.b = 1.0;
                      (pGVar5->fields)._borderColor.a = 1.0;
                      pCVar12 = RTSystemValues::RTSystemValues_get_HoveredAxisColor((Color *)&stack0xffffffe8,(MethodInfo *)0x0);
                      pGVar5 = (pRVar1->fields)._camLookSliderLookAndFeel;
                      fVar13 = pCVar12->g;
                      fVar14 = pCVar12->b;
                      fVar15 = pCVar12->a;
                      if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        (pGVar5->fields)._hoveredBorderColor.r = pCVar12->r;
                        (pGVar5->fields)._hoveredBorderColor.g = fVar13;
                        (pGVar5->fields)._hoveredBorderColor.b = fVar14;
                        (pGVar5->fields)._hoveredBorderColor.a = fVar15;
                        pGVar4 = (pRVar1->fields)._axesLookAndFeel;
                        uVar7 = 0;
                        if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar8 = pGVar4->vector;
                          while( true ) {
                            if ((int)pGVar4->max_length <= (int)uVar7) {
                              return;
                            }
                            if (pGVar4->max_length <= uVar7) break;
                            if (*ppGVar8 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                            GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel_set_NumBorderTorusWireAxialSlices(*ppGVar8,2,(MethodInfo *)0x0);
                            uVar7 = uVar7 + 1;
                            ppGVar8 = ppGVar8 + 1;
                          }
                          goto code_?;
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
  goto code_?;
}


/* GizmoFillMode3D get_AxisBorderFillMode() */

GizmoFillMode3D__Enum Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisBorderFillMode(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderFillMode;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GizmoCircle3DBorderType get_AxisBorderType() */

GizmoCircle3DBorderType__Enum Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisBorderType(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      GVar5 = (*pcVar4)();
      return GVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._circleBorderType;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Single get_AxisCullAlphaScale() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisCullAlphaScale(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderCircleCullAlphaScale;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_AxisCylTorusHeight() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisCylTorusHeight(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderCylTorusHeight;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_AxisCylTorusWidth() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisCylTorusWidth(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderCylTorusWidth;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_AxisTorusThickness() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisTorusThickness(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._borderTorusThickness;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Color get_CamLookSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_CamLookSliderBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._borderColor.g;
    fVar4 = (pGVar2->fields)._borderColor.b;
    fVar5 = (pGVar2->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._borderColor.r;
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


/* Color get_CamLookSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_CamLookSliderHoveredBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._hoveredBorderColor.g;
    fVar4 = (pGVar2->fields)._hoveredBorderColor.b;
    fVar5 = (pGVar2->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._hoveredBorderColor.r;
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


/* Single get_CamLookSliderPolyBorderThickness() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderThickness(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._borderPolyThickness;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* GizmoPolygon2DBorderType get_CamLookSliderPolyBorderType() */

GizmoPolygon2DBorderType__Enum Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderType(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar2->fields)._polygonBorderType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  GVar6 = (*pcVar5)();
  return GVar6;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_HoveredColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._hoveredColor.g;
      fVar8 = (pGVar6->fields)._hoveredColor.b;
      fVar9 = (pGVar6->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_HoveredMidCapColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_HoveredMidCapColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Boolean get_IsMidCapBorderVisible() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_IsMidCapBorderVisible(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._isSphereBorderVisible;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsRotationArcVisible() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_IsRotationArcVisible(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._isRotationArcVisible;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Color get_MidCapBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_MidCapBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar3 = (pGVar2->fields)._sphereBorderColor.g;
    fVar4 = (pGVar2->fields)._sphereBorderColor.b;
    fVar5 = (pGVar2->fields)._sphereBorderColor.a;
    __return_storage_ptr__->r = (pGVar2->fields)._sphereBorderColor.r;
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


/* Color get_MidCapColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_MidCapColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Int32 get_NumAxisTorusWireAxialSlices() */

int32_t Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_NumAxisTorusWireAxialSlices(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    if (pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar2->vector[0]->fields)._numBorderTorusWireAxialSlices;
    }
  }
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_Radius(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

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


/* Color get_RotationArcBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_RotationArcBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) && (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_RotationArcColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_RotationArcColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) && (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      fVar7 = (pGVar6->fields)._color.g;
      fVar8 = (pGVar6->fields)._color.b;
      fVar9 = (pGVar6->fields)._color.a;
      __return_storage_ptr__->r = (pGVar6->fields)._color.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Boolean get_UseShortestRotationArc() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_UseShortestRotationArc(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if ((pGVar2->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) && (pGVar6 = (pGVar2->vector[0]->fields)._rotationArcLookAndFeel, pGVar6 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      return (pGVar6->fields)._useShortestRotation;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_UseZoomFactor() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_UseZoomFactor(RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._midCapLookAndFeel;
  if (pGVar2 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar2->fields)._useZoomFactor;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Color get_XBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_XBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length == 0) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[0];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_YBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_YBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 2) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[1];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}


/* Color get_ZBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_ZBorderColor(Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields)._axesLookAndFeel;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if (pGVar2->max_length < 3) {
      puStack_1 = (undefined1 *)0x0;
      puStack_3 = (undefined *)func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (Color *)(*pcVar4)();
      return pCVar5;
    }
    pGVar6 = pGVar2->vector[2];
    if (pGVar6 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar7 = (pGVar6->fields)._borderColor.g;
      fVar8 = (pGVar6->fields)._borderColor.b;
      fVar9 = (pGVar6->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar6->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar7;
      __return_storage_ptr__->b = fVar8;
      __return_storage_ptr__->a = fVar9;
      return __return_storage_ptr__;
    }
  }
  uVar10 = func_?(&puStack_11);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color *)(*pcVar4)();
  return pCVar5;
}

