
/* Void ConnectCamLookSliderLookAndFeel(GizmoPlaneSlider2D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_ConnectCamLookSliderLookAndFeel
               (RotationGizmoLookAndFeel3D *this,GizmoPlaneSlider2D *slider,MethodInfo *method)

{
  if (slider == (GizmoPlaneSlider2D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (slider->fields)._sharedLookAndFeel = (this->fields)._camLookSliderLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void ConnectMidCapLookAndFeel(GizmoCap3D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_ConnectMidCapLookAndFeel
               (RotationGizmoLookAndFeel3D *this,GizmoCap3D *cap,MethodInfo *method)

{
  if (cap == (GizmoCap3D *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (cap->fields)._sharedLookAndFeel = (this->fields)._midCapLookAndFeel;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(cap->fields)._sharedLookAndFeel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void ConnectSliderLookAndFeel(GizmoPlaneSlider3D, Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_ConnectSliderLookAndFeel
               (RotationGizmoLookAndFeel3D *this,GizmoPlaneSlider3D *slider,int32_t axisIndex,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (slider != (GizmoPlaneSlider3D *)0x0) {
      bVar3 = iRam_? != 0;
      (slider->fields)._sharedLookAndFeel = pGVar1->vector[axisIndex];
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(slider->fields)._sharedLookAndFeel >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisBorderColor(Int32, Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisBorderColor
               (RotationGizmoLookAndFeel3D *this,int32_t axisIndex,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length <= (uint)axisIndex) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = pGVar1->vector[axisIndex];
    if (pGVar3 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar4 = color->g;
      fVar5 = color->b;
      fVar6 = color->a;
      (pGVar3->fields)._borderColor.r = color->r;
      (pGVar3->fields)._borderColor.g = fVar4;
      (pGVar3->fields)._borderColor.b = fVar5;
      (pGVar3->fields)._borderColor.a = fVar6;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisBorderCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisBorderCullAlphaScale
               (RotationGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pGVar2 = (this->fields)._axesLookAndFeel;
  uVar3 = 0;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar2->vector;
    while( true ) {
      if ((int)pGVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((GizmoPlaneSlider3DLookAndFeel *)method->methodPointer ==
          (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      if (scale < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = scale;
        if (fVar1 < scale) {
          fVar5 = fVar1;
        }
      }
      uVar3 = uVar3 + 1;
      (((GizmoPlaneSlider3DLookAndFeel *)method->methodPointer)->fields)._borderCircleCullAlphaScale
           = fVar5;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
  }
  FUN_?(0,pGVar2,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisBorderFillMode
               (RotationGizmoLookAndFeel3D *this,GizmoFillMode3D__Enum fillMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._borderFillMode = fillMode;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisBorderType(GizmoCircle3DBorderType) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisBorderType
               (RotationGizmoLookAndFeel3D *this,GizmoCircle3DBorderType__Enum borderType,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._circleBorderType = borderType;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAxisCylTorusHeight(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisCylTorusHeight
               (RotationGizmoLookAndFeel3D *this,float height,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= height) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusHeight = height;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusHeight = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisCylTorusWidth(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisCylTorusWidth
               (RotationGizmoLookAndFeel3D *this,float width,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= width) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusWidth = width;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderCylTorusWidth = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisTorusThickness(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetAxisTorusThickness
               (RotationGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      if (0.0 <= thickness) {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusThickness = thickness;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar4->fields)._borderTorusThickness = 0.0;
        method = (MethodInfo *)&method->virtualMethodPointer;
      }
    }
  }
  FUN_?(0,pGVar1,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamLookSliderBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetCamLookSliderBorderColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._borderColor.r = color->r;
    (pGVar1->fields)._borderColor.g = fVar2;
    (pGVar1->fields)._borderColor.b = fVar3;
    (pGVar1->fields)._borderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamLookSliderHoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetCamLookSliderHoveredBorderColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredBorderColor.r = color->r;
    (pGVar1->fields)._hoveredBorderColor.g = fVar2;
    (pGVar1->fields)._hoveredBorderColor.b = fVar3;
    (pGVar1->fields)._hoveredBorderColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamLookSliderPolyBorderThickness(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetCamLookSliderPolyBorderThickness
               (RotationGizmoLookAndFeel3D *this,float thickness,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = 0.0;
    if (0.0 <= thickness) {
      fVar2 = thickness;
    }
    (pGVar1->fields)._borderPolyThickness = fVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamLookSliderPolyBorderType(GizmoPolygon2DBorderType) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetCamLookSliderPolyBorderType
               (RotationGizmoLookAndFeel3D *this,GizmoPolygon2DBorderType__Enum polyBorderType,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    (pGVar1->fields)._polygonBorderType = polyBorderType;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamLookSliderRadiusOffset(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetCamLookSliderRadiusOffset
               (RotationGizmoLookAndFeel3D *this,float offset,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= offset) {
    fVar1 = offset;
  }
  (this->fields)._camLookSliderRadiusOffset = fVar1;
  return;
}


/* Void SetHoveredColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetHoveredColor
               (RotationGizmoLookAndFeel3D *this,Color *hoveredColor,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      uVar6 = hoveredColor->r;
      uVar7 = hoveredColor->g;
      uVar8 = hoveredColor->b;
      uVar9 = hoveredColor->a;
      uVar2 = uVar2 + 1;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._hoveredColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredColor.a = (float)uVar9;
      (pGVar5->fields)._hoveredBorderColor.r = (float)uVar6;
      (pGVar5->fields)._hoveredBorderColor.g = (float)uVar7;
      (pGVar5->fields)._hoveredBorderColor.b = (float)uVar8;
      (pGVar5->fields)._hoveredBorderColor.a = (float)uVar9;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetHoveredMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetHoveredMidCapColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._hoveredColor.r = color->r;
    (pGVar1->fields)._hoveredColor.g = fVar2;
    (pGVar1->fields)._hoveredColor.b = fVar3;
    (pGVar1->fields)._hoveredColor.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMidCapBorderVisible(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetMidCapBorderVisible
               (RotationGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._isSphereBorderVisible = isVisible;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMidCapColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetMidCapColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = color->g;
    fVar3 = color->b;
    fVar4 = color->a;
    (pGVar1->fields)._color.r = color->r;
    (pGVar1->fields)._color.g = fVar2;
    (pGVar1->fields)._color.b = fVar3;
    (pGVar1->fields)._color.a = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetNumAxisTorusWireAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetNumAxisTorusWireAxialSlices
               (RotationGizmoLookAndFeel3D *this,int32_t numSlices,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while( true ) {
      if ((int)pGVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) break;
      iVar5 = 2;
      if (1 < numSlices) {
        iVar5 = numSlices;
      }
      uVar2 = uVar2 + 1;
      ((*ppGVar3)->fields)._numBorderTorusWireAxialSlices = iVar5;
      ppGVar3 = ppGVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRadius(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetRadius
               (RotationGizmoLookAndFeel3D *this,float radius,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= radius) {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._circleRadius = radius;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._circleRadius = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar6 = (this->fields)._midCapLookAndFeel;
    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
      fVar7 = _UNK_?;
      if (_UNK_? <= radius) {
        fVar7 = radius;
      }
      (pGVar6->fields)._sphereRadius = fVar7;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRotationArcBorderColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetRotationArcBorderColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar5 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._borderColor.r = color->r;
      (pGVar5->fields)._borderColor.g = fVar6;
      (pGVar5->fields)._borderColor.b = fVar7;
      (pGVar5->fields)._borderColor.a = fVar8;
    }
    pGVar9 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar10 = (pGVar9->fields)._rotationArcLookAndFeel,
       pGVar10 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      (pGVar10->fields)._borderColor.r = color->r;
      (pGVar10->fields)._borderColor.g = fVar6;
      (pGVar10->fields)._borderColor.b = fVar7;
      (pGVar10->fields)._borderColor.a = fVar8;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRotationArcColor(Color) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetRotationArcColor
               (RotationGizmoLookAndFeel3D *this,Color *color,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*ppGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar5 = ((*ppGVar3)->fields)._rotationArcLookAndFeel,
         pGVar5 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      ppGVar3 = ppGVar3 + 1;
      (pGVar5->fields)._color.r = color->r;
      (pGVar5->fields)._color.g = fVar6;
      (pGVar5->fields)._color.b = fVar7;
      (pGVar5->fields)._color.a = fVar8;
    }
    pGVar9 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar9 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar10 = (pGVar9->fields)._rotationArcLookAndFeel,
       pGVar10 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      (pGVar10->fields)._color.r = color->r;
      (pGVar10->fields)._color.g = fVar6;
      (pGVar10->fields)._color.b = fVar7;
      (pGVar10->fields)._color.a = fVar8;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRotationArcVisible(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetRotationArcVisible
               (RotationGizmoLookAndFeel3D *this,bool isVisible,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar3->fields)._isRotationArcVisible = isVisible;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._camLookSliderLookAndFeel;
    if (pGVar5 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
      (pGVar5->fields)._isRotationArcVisible = isVisible;
      return;
    }
  }
code_?:
  FUN_?(pGVar3,isVisible,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetScale
               (RotationGizmoLookAndFeel3D *this,float scale,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    ppGVar3 = pGVar1->vector;
    while ((int)uVar2 < (int)pGVar1->max_length) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = *ppGVar3;
      if (pGVar5 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      if (0.0 <= scale) {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._scale = scale;
        ppGVar3 = ppGVar3 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        (pGVar5->fields)._scale = 0.0;
        ppGVar3 = ppGVar3 + 1;
      }
    }
    pGVar6 = (this->fields)._midCapLookAndFeel;
    if (pGVar6 != (GizmoCap3DLookAndFeel *)0x0) {
      fVar7 = 0.0;
      if (0.0 <= scale) {
        fVar7 = scale;
      }
      (pGVar6->fields)._scale = fVar7;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetShadeMode(GizmoShadeMode) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_SetShadeMode
               (RotationGizmoLookAndFeel3D *this,GizmoShadeMode__Enum shadeMode,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar3->fields)._shadeMode = shadeMode;
      method = (MethodInfo *)&method->virtualMethodPointer;
      (pGVar3->fields)._borderShadeMode = shadeMode;
    }
    pGVar5 = (this->fields)._midCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._shadeMode = shadeMode;
      return;
    }
  }
code_?:
  FUN_?(pGVar3,shadeMode,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetUseShortestRotationArc(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetUseShortestRotationArc
               (RotationGizmoLookAndFeel3D *this,bool useShortest,MethodInfo *method)

{
  pGVar1 = (GizmoRotationArc3DLookAndFeel *)CONCAT71(in_register_00000011,useShortest);
  pGVar2 = (this->fields)._axesLookAndFeel;
  uVar3 = 0;
  pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)this;
  if (pGVar2 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar2->vector;
    for (; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar2->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar4 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if ((pGVar4 == (GizmoPlaneSlider3DLookAndFeel *)0x0) ||
         (pGVar1 = (pGVar4->fields)._rotationArcLookAndFeel,
         pGVar1 == (GizmoRotationArc3DLookAndFeel *)0x0)) goto code_?;
      (pGVar1->fields)._useShortestRotation = useShortest;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar6 = (this->fields)._camLookSliderLookAndFeel;
    if ((pGVar6 != (GizmoPlaneSlider2DLookAndFeel *)0x0) &&
       (pGVar7 = (pGVar6->fields)._rotationArcLookAndFeel,
       pGVar7 != (GizmoRotationArc2DLookAndFeel *)0x0)) {
      (pGVar7->fields)._useShortestRotation = useShortest;
      return;
    }
  }
code_?:
  FUN_?(pGVar4,pGVar1,method);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetUseZoomFactor(Boolean) */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_SetUseZoomFactor
               (RotationGizmoLookAndFeel3D *this,bool useZoomFactor,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  uVar2 = 0;
  pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)this;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    method = (MethodInfo *)pGVar1->vector;
    for (; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar3 = (GizmoPlaneSlider3DLookAndFeel *)method->methodPointer;
      if (pGVar3 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
      (pGVar3->fields)._useZoomFactor = useZoomFactor;
      method = (MethodInfo *)&method->virtualMethodPointer;
    }
    pGVar5 = (this->fields)._midCapLookAndFeel;
    if (pGVar5 != (GizmoCap3DLookAndFeel *)0x0) {
      (pGVar5->fields)._useZoomFactor = useZoomFactor;
      return;
    }
  }
code_?:
  FUN_?(pGVar3,useZoomFactor,method);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RotationGizmoLookAndFeel3D() */

void Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D__ctor
               (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isMidCapVisible = 1;
  pGVar1 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  uVar6 = _UNK_?;
  uVar7 = _UNK_?;
  bVar8 = iRam_? != 0;
  (pGVar1->fields)._scale = 1.0;
  (pGVar1->fields)._useZoomFactor = 1;
  (pGVar1->fields)._coneHeight = 1.65;
  (pGVar1->fields)._coneRadius = 0.5;
  (pGVar1->fields)._pyramidHeight = 1.65;
  (pGVar1->fields)._pyramidWidth = 0.8;
  (pGVar1->fields)._pyramidDepth = 0.8;
  (pGVar1->fields)._boxWidth = 0.7;
  (pGVar1->fields)._boxHeight = 0.7;
  (pGVar1->fields)._boxDepth = 0.7;
  (pGVar1->fields)._sphereRadius = 0.45;
  (pGVar1->fields)._trPrismWidth = 1.0;
  (pGVar1->fields)._trPrismHeight = 1.0;
  (pGVar1->fields)._trPrismDepth = 1.0;
  uVar9 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._sphereBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar9;
  uVar3 = _UNK_?;
  (pGVar1->fields)._sphereBorderColor.g = (float)uVar10;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._sphereBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pGVar1->fields)._sphereBorderColor.a = (float)uVar10;
  (pGVar1->fields)._numSphereBorderPoints = 100;
  uVar3 = _UNK_?;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar7 = _UNK_?;
  (pGVar1->fields)._color.g = (float)uVar10;
  _UNK_? = (undefined4)uVar6;
  _UNK_? = SUB84(uVar6,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (pGVar1->fields)._color.a = (float)uVar10;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (pGVar1->fields)._hoveredColor.g = (float)uVar10;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar10 = _UNK_?;
  (pGVar1->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar7;
  (pGVar1->fields)._hoveredColor.a = (float)uVar10;
  (this->fields)._midCapLookAndFeel = pGVar1;
  if (bVar8) {
    uVar11 = (uint)((ulonglong)&(this->fields)._midCapLookAndFeel >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar13 == *puVar14;
      if (bVar8) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pBVar15 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean,3);
  bVar8 = iRam_? != 0;
  (this->fields)._axesVis = pBVar15;
  if (bVar8) {
    uVar11 = (uint)((ulonglong)&(this->fields)._axesVis >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar13 == *puVar14;
      if (bVar8) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pGVar16 = (GizmoPlaneSlider3DLookAndFeel__Array *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
  bVar8 = iRam_? != 0;
  (this->fields)._axesLookAndFeel = pGVar16;
  if (bVar8) {
    uVar11 = (uint)((ulonglong)&(this->fields)._axesLookAndFeel >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar13 == *puVar14;
      if (bVar8) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  (this->fields)._isCamLookSliderVisible = 1;
  (this->fields)._camLookSliderRadiusOffset = 0.65;
  pGVar17 = (GizmoPlaneSlider2DLookAndFeel *)
            FUN_?(TypeInfo__RTG__GizmoPlaneSlider2DLookAndFeel);
  GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(pGVar17,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (this->fields)._camLookSliderLookAndFeel = pGVar17;
  if (bVar8) {
    uVar11 = (uint)((ulonglong)&(this->fields)._camLookSliderLookAndFeel >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar13 == *puVar14;
      if (bVar8) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  pGVar16 = (this->fields)._axesLookAndFeel;
  uVar11 = 0;
  uVar18 = 0;
  if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    lVar19 = 0x20;
    do {
      if ((int)pGVar16->max_length <= (int)uVar18) {
        pBVar15 = (this->fields)._axesVis;
        if (pBVar15 != (Boolean__Array *)0x0) {
          if ((int)pBVar15->max_length == 0) goto code_?;
          pBVar15->vector[0] = 1;
          pBVar15 = (this->fields)._axesVis;
          if (pBVar15 != (Boolean__Array *)0x0) {
            if ((uint)pBVar15->max_length < 2) goto code_?;
            pBVar15->vector[1] = 1;
            pBVar15 = (this->fields)._axesVis;
            if (pBVar15 != (Boolean__Array *)0x0) {
              if ((uint)pBVar15->max_length < 3) goto code_?;
              pBVar15->vector[2] = 1;
              pGVar1 = (this->fields)._midCapLookAndFeel;
              if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                (pGVar1->fields)._capType = 3;
                uVar3 = _UNK_?;
                uVar7 = _UNK_?;
                pGVar17 = (this->fields)._camLookSliderLookAndFeel;
                if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                  (pGVar17->fields)._planeType = 2;
                  uVar6 = _UNK_?;
                  pGVar1 = (this->fields)._midCapLookAndFeel;
                  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                    _UNK_? = (undefined4)uVar7;
                    _UNK_? = SUB84(uVar7,4);
                    uVar10 = _UNK_?;
                    (pGVar1->fields)._color.r = (float)_UNK_?;
                    _UNK_? = uVar6;
                    uVar6 = _UNK_?;
                    (pGVar1->fields)._color.g = (float)uVar10;
                    _UNK_? = (undefined4)uVar3;
                    _UNK_? = SUB84(uVar3,4);
                    uVar10 = _UNK_?;
                    (pGVar1->fields)._color.b = (float)_UNK_?;
                    _UNK_? = uVar6;
                    uVar6 = _UNK_?;
                    (pGVar1->fields)._color.a = (float)uVar10;
                    pGVar1 = (this->fields)._midCapLookAndFeel;
                    if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                      _UNK_? = (undefined4)uVar7;
                      _UNK_? = SUB84(uVar7,4);
                      uVar10 = _UNK_?;
                      (pGVar1->fields)._hoveredColor.r = (float)_UNK_?;
                      _UNK_? = uVar6;
                      uVar7 = _UNK_?;
                      (pGVar1->fields)._hoveredColor.g = (float)uVar10;
                      _UNK_? = (undefined4)uVar3;
                      _UNK_? = SUB84(uVar3,4);
                      uVar10 = _UNK_?;
                      (pGVar1->fields)._hoveredColor.b = (float)_UNK_?;
                      _UNK_? = uVar7;
                      uVar3 = _UNK_?;
                      uVar7 = _UNK_?;
                      (pGVar1->fields)._hoveredColor.a = (float)uVar10;
                      pGVar1 = (this->fields)._midCapLookAndFeel;
                      if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                        (pGVar1->fields)._isSphereBorderVisible = 1;
                        uVar6 = _UNK_?;
                        pGVar1 = (this->fields)._midCapLookAndFeel;
                        if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
                          _UNK_? = (undefined4)uVar7;
                          _UNK_? = SUB84(uVar7,4);
                          uVar10 = _UNK_?;
                          (pGVar1->fields)._sphereBorderColor.r = (float)_UNK_?;
                          _UNK_? = uVar6;
                          uVar6 = _UNK_?;
                          (pGVar1->fields)._sphereBorderColor.g = (float)uVar10;
                          _UNK_? = (undefined4)uVar3;
                          _UNK_? = SUB84(uVar3,4);
                          uVar10 = _UNK_?;
                          (pGVar1->fields)._sphereBorderColor.b = (float)_UNK_?;
                          _UNK_? = uVar6;
                          (pGVar1->fields)._sphereBorderColor.a = (float)uVar10;
                          pGVar16 = (this->fields)._axesLookAndFeel;
                          uVar18 = 0;
                          if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                            ppGVar20 = pGVar16->vector;
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
      pGVar16 = (this->fields)._axesLookAndFeel;
      pGVar21 = (GizmoPlaneSlider3DLookAndFeel *)
                FUN_?(TypeInfo__RTG__GizmoPlaneSlider3DLookAndFeel);
      GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor(pGVar21,(MethodInfo *)0x0);
      if (pGVar16 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
      if ((pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
         (lVar22 = FUN_?(pGVar21), lVar22 == 0)) {
        uVar7 = FUN_?();
        FUN_?(uVar7,0);
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      if ((uint)pGVar16->max_length <= uVar18) goto code_?;
      bVar8 = iRam_? != 0;
      *(GizmoPlaneSlider3DLookAndFeel **)((longlong)pGVar16->vector + lVar19 + -0x20) = pGVar21;
      if (bVar8) {
        uVar24 = (uint)((ulonglong)(pGVar16->vector + (int)uVar18) >> 0xc);
        uVar12 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar13 == *puVar14;
          if (bVar8) {
            *puVar14 = uVar13 | 1L << (uVar24 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pGVar16 = (this->fields)._axesLookAndFeel;
      if (pGVar16 == (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) break;
      if ((uint)pGVar16->max_length <= uVar18) goto code_?;
      lVar22 = *(longlong *)((longlong)pGVar16->vector + lVar19 + -0x20);
      if (lVar22 == 0) break;
      *(undefined4 *)(lVar22 + 0x10) = 2;
      uVar18 = uVar18 + 1;
      pGVar16 = (this->fields)._axesLookAndFeel;
      lVar19 = lVar19 + 8;
    } while (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0);
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
code_?:
  if ((int)pGVar16->max_length <= (int)uVar18) goto code_?;
  if ((uint)pGVar16->max_length <= uVar18) goto code_?;
  if (*ppGVar20 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
  uVar18 = uVar18 + 1;
  ((*ppGVar20)->fields)._circleRadius = 6.5;
  ppGVar20 = ppGVar20 + 1;
  goto code_?;
code_?:
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    (pGVar1->fields)._sphereRadius = 6.5;
    uVar6 = _UNK_?;
    pGVar16 = (this->fields)._axesLookAndFeel;
    if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
      if ((int)pGVar16->max_length == 0) {
code_?:
        FUN_?();
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pGVar21 = pGVar16->vector[0];
      if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
        uVar10 = _UNK_?;
        (pGVar21->fields)._borderColor.r = (float)_UNK_?;
        uVar9 = _UNK_?;
        (pGVar21->fields)._borderColor.g = (float)uVar10;
        _UNK_? = (undefined4)uVar6;
        _UNK_? = SUB84(uVar6,4);
        uVar10 = _UNK_?;
        (pGVar21->fields)._borderColor.b = (float)_UNK_?;
        _UNK_? = uVar9;
        uVar6 = _UNK_?;
        (pGVar21->fields)._borderColor.a = (float)uVar10;
        pGVar16 = (this->fields)._axesLookAndFeel;
        if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
          if ((uint)pGVar16->max_length < 2) goto code_?;
          pGVar21 = pGVar16->vector[1];
          if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
            uVar10 = _UNK_?;
            (pGVar21->fields)._borderColor.r = (float)_UNK_?;
            uVar9 = _UNK_?;
            (pGVar21->fields)._borderColor.g = (float)uVar10;
            _UNK_? = (undefined4)uVar6;
            _UNK_? = SUB84(uVar6,4);
            uVar10 = _UNK_?;
            (pGVar21->fields)._borderColor.b = (float)_UNK_?;
            _UNK_? = uVar9;
            uVar6 = _UNK_?;
            (pGVar21->fields)._borderColor.a = (float)uVar10;
            pGVar16 = (this->fields)._axesLookAndFeel;
            if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
              if ((uint)pGVar16->max_length < 3) goto code_?;
              pGVar21 = pGVar16->vector[2];
              if (pGVar21 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
                uVar10 = _UNK_?;
                (pGVar21->fields)._borderColor.r = (float)_UNK_?;
                uVar9 = _UNK_?;
                (pGVar21->fields)._borderColor.g = (float)uVar10;
                _UNK_? = (undefined4)uVar6;
                _UNK_? = SUB84(uVar6,4);
                uVar10 = _UNK_?;
                (pGVar21->fields)._borderColor.b = (float)_UNK_?;
                _UNK_? = uVar9;
                (pGVar21->fields)._borderColor.a = (float)uVar10;
                pGVar16 = (this->fields)._axesLookAndFeel;
                uVar18 = 0;
                if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                  ppGVar20 = pGVar16->vector;
                  for (; uVar6 = _UNK_?, (int)uVar18 < (int)pGVar16->max_length;
                      uVar18 = uVar18 + 1) {
                    if ((uint)pGVar16->max_length <= uVar18) goto code_?;
                    pGVar21 = *ppGVar20;
                    if (pGVar21 == (GizmoPlaneSlider3DLookAndFeel *)0x0) goto code_?;
                    _UNK_? = (undefined4)uVar5;
                    _UNK_? = SUB84(uVar5,4);
                    uVar10 = _UNK_?;
                    (pGVar21->fields)._hoveredColor.r = (float)_UNK_?;
                    _UNK_? = uVar6;
                    uVar6 = _UNK_?;
                    (pGVar21->fields)._hoveredColor.g = (float)uVar10;
                    _UNK_? = (undefined4)uVar4;
                    _UNK_? = SUB84(uVar4,4);
                    uVar10 = _UNK_?;
                    (pGVar21->fields)._hoveredColor.b = (float)_UNK_?;
                    _UNK_? = uVar6;
                    uVar6 = _UNK_?;
                    (pGVar21->fields)._hoveredColor.a = (float)uVar10;
                    ppGVar20 = ppGVar20 + 1;
                    _UNK_? = (undefined4)uVar5;
                    _UNK_? = SUB84(uVar5,4);
                    uVar10 = _UNK_?;
                    (pGVar21->fields)._hoveredBorderColor.r = (float)_UNK_?;
                    _UNK_? = uVar6;
                    uVar6 = _UNK_?;
                    (pGVar21->fields)._hoveredBorderColor.g = (float)uVar10;
                    _UNK_? = (undefined4)uVar4;
                    _UNK_? = SUB84(uVar4,4);
                    uVar10 = _UNK_?;
                    (pGVar21->fields)._hoveredBorderColor.b = (float)_UNK_?;
                    _UNK_? = uVar6;
                    (pGVar21->fields)._hoveredBorderColor.a = (float)uVar10;
                  }
                  pGVar17 = (this->fields)._camLookSliderLookAndFeel;
                  if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                    (pGVar17->fields)._borderPolyThickness = 4.0;
                    uVar6 = _UNK_?;
                    pGVar17 = (this->fields)._camLookSliderLookAndFeel;
                    if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                      _UNK_? = (undefined4)uVar7;
                      _UNK_? = SUB84(uVar7,4);
                      uVar10 = _UNK_?;
                      (pGVar17->fields)._borderColor.r = (float)_UNK_?;
                      _UNK_? = uVar6;
                      uVar7 = _UNK_?;
                      (pGVar17->fields)._borderColor.g = (float)uVar10;
                      _UNK_? = (undefined4)uVar3;
                      _UNK_? = SUB84(uVar3,4);
                      uVar10 = _UNK_?;
                      (pGVar17->fields)._borderColor.b = (float)_UNK_?;
                      _UNK_? = uVar7;
                      uVar7 = _UNK_?;
                      (pGVar17->fields)._borderColor.a = (float)uVar10;
                      pGVar17 = (this->fields)._camLookSliderLookAndFeel;
                      if (pGVar17 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
                        _UNK_? = (undefined4)uVar5;
                        _UNK_? = SUB84(uVar5,4);
                        uVar10 = _UNK_?;
                        (pGVar17->fields)._hoveredBorderColor.r = (float)_UNK_?;
                        _UNK_? = uVar7;
                        uVar7 = _UNK_?;
                        (pGVar17->fields)._hoveredBorderColor.g = (float)uVar10;
                        _UNK_? = (undefined4)uVar4;
                        _UNK_? = SUB84(uVar4,4);
                        uVar10 = _UNK_?;
                        (pGVar17->fields)._hoveredBorderColor.b = (float)_UNK_?;
                        _UNK_? = uVar7;
                        (pGVar17->fields)._hoveredBorderColor.a = (float)uVar10;
                        pGVar16 = (this->fields)._axesLookAndFeel;
                        if (pGVar16 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
                          ppGVar20 = pGVar16->vector;
                          while( true ) {
                            if ((int)pGVar16->max_length <= (int)uVar11) {
                              return;
                            }
                            if ((uint)pGVar16->max_length <= uVar11) break;
                            if (*ppGVar20 == (GizmoPlaneSlider3DLookAndFeel *)0x0)
                            goto code_?;
                            uVar11 = uVar11 + 1;
                            ((*ppGVar20)->fields)._numBorderTorusWireAxialSlices = 2;
                            ppGVar20 = ppGVar20 + 1;
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

GizmoFillMode3D__Enum
Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
RotationGizmoLookAndFeel3D_get_AxisBorderFillMode
          (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderFillMode;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GizmoCircle3DBorderType get_AxisBorderType() */

GizmoCircle3DBorderType__Enum
Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_AxisBorderType
          (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._circleBorderType;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Single get_AxisCullAlphaScale() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
      RotationGizmoLookAndFeel3D_get_AxisCullAlphaScale
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCircleCullAlphaScale;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_AxisCylTorusHeight() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
      RotationGizmoLookAndFeel3D_get_AxisCylTorusHeight
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCylTorusHeight;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_AxisCylTorusWidth() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
      RotationGizmoLookAndFeel3D_get_AxisCylTorusWidth
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderCylTorusWidth;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_AxisTorusThickness() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
      RotationGizmoLookAndFeel3D_get_AxisTorusThickness
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      fVar3 = (float)(*pcVar2)();
      return fVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._borderTorusThickness;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_CamLookSliderBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_CamLookSliderBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._borderColor.g;
    fVar3 = (pGVar1->fields)._borderColor.b;
    fVar4 = (pGVar1->fields)._borderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._borderColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Color get_CamLookSliderHoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_CamLookSliderHoveredBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredBorderColor.g;
    fVar3 = (pGVar1->fields)._hoveredBorderColor.b;
    fVar4 = (pGVar1->fields)._hoveredBorderColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredBorderColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Single get_CamLookSliderPolyBorderThickness() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
      RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderThickness
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._borderPolyThickness;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* GizmoPolygon2DBorderType get_CamLookSliderPolyBorderType() */

GizmoPolygon2DBorderType__Enum
Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
RotationGizmoLookAndFeel3D_get_CamLookSliderPolyBorderType
          (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._camLookSliderLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider2DLookAndFeel *)0x0) {
    return (pGVar1->fields)._polygonBorderType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_HoveredColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._hoveredColor.g;
      fVar6 = (pGVar4->fields)._hoveredColor.b;
      fVar7 = (pGVar4->fields)._hoveredColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._hoveredColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_HoveredMidCapColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_HoveredMidCapColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._hoveredColor.g;
    fVar3 = (pGVar1->fields)._hoveredColor.b;
    fVar4 = (pGVar1->fields)._hoveredColor.a;
    __return_storage_ptr__->r = (pGVar1->fields)._hoveredColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Boolean get_IsMidCapBorderVisible() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_get_IsMidCapBorderVisible
               (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._isSphereBorderVisible;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsRotationArcVisible() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_get_IsRotationArcVisible
               (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._isRotationArcVisible;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_MidCapColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_MidCapColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    fVar2 = (pGVar1->fields)._color.g;
    fVar3 = (pGVar1->fields)._color.b;
    fVar4 = (pGVar1->fields)._color.a;
    __return_storage_ptr__->r = (pGVar1->fields)._color.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Int32 get_NumAxisTorusWireAxialSlices() */

int32_t Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_NumAxisTorusWireAxialSlices
                  (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    if (pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      return (pGVar1->vector[0]->fields)._numBorderTorusWireAxialSlices;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_Radius
                (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._sphereRadius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Color get_RotationArcBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_RotationArcBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_RotationArcColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_RotationArcColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      fVar5 = (pGVar4->fields)._color.g;
      fVar6 = (pGVar4->fields)._color.b;
      fVar7 = (pGVar4->fields)._color.a;
      __return_storage_ptr__->r = (pGVar4->fields)._color.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* GizmoShadeMode get_ShadeMode() */

GizmoShadeMode__Enum
Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::RotationGizmoLookAndFeel3D_get_ShadeMode
          (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._shadeMode;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Boolean get_UseShortestRotationArc() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_get_UseShortestRotationArc
               (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((pGVar1->vector[0] != (GizmoPlaneSlider3DLookAndFeel *)0x0) &&
       (pGVar4 = (pGVar1->vector[0]->fields)._rotationArcLookAndFeel,
       pGVar4 != (GizmoRotationArc3DLookAndFeel *)0x0)) {
      return (pGVar4->fields)._useShortestRotation;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_UseZoomFactor() */

bool Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
     RotationGizmoLookAndFeel3D_get_UseZoomFactor
               (RotationGizmoLookAndFeel3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._midCapLookAndFeel;
  if (pGVar1 != (GizmoCap3DLookAndFeel *)0x0) {
    return (pGVar1->fields)._useZoomFactor;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Color get_XBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_XBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((int)pGVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[0];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_YBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_YBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 2) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[1];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}


/* Color get_ZBorderColor() */

Color * Assembly-CSharp.dll::RTG::RotationGizmoLookAndFeel3D::
        RotationGizmoLookAndFeel3D_get_ZBorderColor
                  (Color *__return_storage_ptr__,RotationGizmoLookAndFeel3D *this,MethodInfo *method
                  )

{
  pGVar1 = (this->fields)._axesLookAndFeel;
  if (pGVar1 != (GizmoPlaneSlider3DLookAndFeel__Array *)0x0) {
    if ((uint)pGVar1->max_length < 3) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pCVar3 = (Color *)(*pcVar2)();
      return pCVar3;
    }
    pGVar4 = pGVar1->vector[2];
    if (pGVar4 != (GizmoPlaneSlider3DLookAndFeel *)0x0) {
      fVar5 = (pGVar4->fields)._borderColor.g;
      fVar6 = (pGVar4->fields)._borderColor.b;
      fVar7 = (pGVar4->fields)._borderColor.a;
      __return_storage_ptr__->r = (pGVar4->fields)._borderColor.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color *)(*pcVar2)();
  return pCVar3;
}

