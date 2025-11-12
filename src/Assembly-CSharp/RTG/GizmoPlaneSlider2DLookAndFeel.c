
/* GizmoPlaneSlider2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::GizmoPlaneSlider2DLookAndFeel__ctor
               (GizmoPlaneSlider2DLookAndFeel *this,MethodInfo *method)

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
  pGVar1 = (GizmoRotationArc2DLookAndFeel *)
           FUN_?(TypeInfo__RTG__GizmoRotationArc2DLookAndFeel);
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  bVar6 = iRam_? != 0;
  (pGVar1->fields)._useShortestRotation = 1;
  (pGVar1->fields)._fillFlags = 3;
  uVar7 = _UNK_?;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (pGVar1->fields)._color.g = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (pGVar1->fields)._color.a = (float)uVar8;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (pGVar1->fields)._borderColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (pGVar1->fields)._borderColor.a = (float)uVar8;
  (this->fields)._rotationArcLookAndFeel = pGVar1;
  if (bVar6) {
    uVar9 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar11 == *puVar12;
      if (bVar6) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  uVar7 = _UNK_?;
  (this->fields)._color.g = (float)uVar8;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar8 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar7;
  (this->fields)._color.a = (float)uVar8;
  (this->fields)._borderPolyThickness = 8.0;
  uVar7 = _UNK_?;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._hoveredColor.a = (float)uVar8;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar8 = _UNK_?;
  (this->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._borderColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar8 = _UNK_?;
  (this->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._borderColor.a = (float)uVar8;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._hoveredBorderColor.a = (float)uVar8;
  return;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
        GizmoPlaneSlider2DLookAndFeel_get_HoveredColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider2DLookAndFeel *this,
                  MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
     GizmoPlaneSlider2DLookAndFeel_set_BorderColor
               (GizmoPlaneSlider2DLookAndFeel *this,Color *value,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider2DLookAndFeel::
     GizmoPlaneSlider2DLookAndFeel_set_HoveredColor
               (GizmoPlaneSlider2DLookAndFeel *this,Color *value,MethodInfo *method)

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

