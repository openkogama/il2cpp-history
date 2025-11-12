
/* GizmoPlaneSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor(GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._fillMode = 2;
  (this->fields)._scale = 1.0;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._circleRadius = 12.0;
  (this->fields)._isRotationArcVisible = 1;
  pGVar1 = (GizmoRotationArc2DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar1->fields)._useShortestRotation = 1;
  (pGVar1->fields)._fillFlags = 3;
  (pGVar1->fields)._color.r = 0.5;
  (pGVar1->fields)._color.g = 0.5;
  (pGVar1->fields)._color.b = 0.5;
  (pGVar1->fields)._color.a = 0.1;
  (pGVar1->fields)._borderColor.r = 0.8;
  (pGVar1->fields)._borderColor.g = 0.8;
  (pGVar1->fields)._borderColor.b = 0.8;
  (pGVar1->fields)._borderColor.a = 0.8;
  (this->fields)._rotationArcLookAndFeel = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._color.r = 1.0;
  (this->fields)._color.g = 1.0;
  (this->fields)._color.b = 1.0;
  (this->fields)._color.a = 1.0;
  (this->fields)._borderPolyThickness = 8.0;
  (this->fields)._hoveredColor.r = 0.96470594;
  (this->fields)._hoveredColor.g = 0.9490197;
  (this->fields)._hoveredColor.b = 0.19607845;
  (this->fields)._hoveredColor.a = 1.0;
  (this->fields)._borderColor.r = 1.0;
  (this->fields)._borderColor.g = 1.0;
  (this->fields)._borderColor.b = 1.0;
  (this->fields)._borderColor.a = 1.0;
  (this->fields)._hoveredBorderColor.r = 0.96470594;
  (this->fields)._hoveredBorderColor.g = 0.9490197;
  (this->fields)._hoveredBorderColor.b = 0.19607845;
  (this->fields)._hoveredBorderColor.a = 1.0;
  return;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_get_HoveredColor(Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

{
  fVar1 = (this->fields)._hoveredColor.g;
  fVar2 = (this->fields)._hoveredColor.b;
  fVar3 = (this->fields)._hoveredColor.a;
  __return_storage_ptr__->r = (this->fields)._hoveredColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Void set_BorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_BorderColor(GizmoPlaneSlider2DLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._borderColor.r = value->r;
  (this->fields)._borderColor.g = fVar1;
  (this->fields)._borderColor.b = fVar2;
  (this->fields)._borderColor.a = fVar3;
  return;
}


/* Void set_HoveredColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel_set_HoveredColor(GizmoPlaneSlider2DLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._hoveredColor.r = value->r;
  (this->fields)._hoveredColor.g = fVar1;
  (this->fields)._hoveredColor.b = fVar2;
  (this->fields)._hoveredColor.a = fVar3;
  return;
}

