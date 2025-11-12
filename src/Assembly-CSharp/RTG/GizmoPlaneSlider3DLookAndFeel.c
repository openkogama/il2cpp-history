
/* GizmoPlaneSlider3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor
               (GizmoPlaneSlider3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._color.a = (float)uVar5;
  (this->fields)._scale = 1.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._hoveredColor.a = (float)uVar5;
  (this->fields)._useZoomFactor = 1;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._borderColor.a = (float)uVar5;
  (this->fields)._quadWidth = 1.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (this->fields)._hoveredBorderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._hoveredBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (this->fields)._hoveredBorderColor.a = (float)uVar5;
  (this->fields)._quadHeight = 1.0;
  (this->fields)._raTriangleXLength = 1.0;
  (this->fields)._raTriangleYLength = 1.0;
  (this->fields)._circleRadius = 0.5;
  (this->fields)._borderBoxHeight = 0.18;
  (this->fields)._borderBoxDepth = 0.18;
  (this->fields)._borderTorusThickness = 0.18;
  (this->fields)._numBorderTorusWireAxialSlices = 5;
  (this->fields)._borderCylTorusWidth = 0.18;
  (this->fields)._borderCylTorusHeight = 0.18;
  (this->fields)._shadeMode = 1;
  (this->fields)._isRotationArcVisible = 1;
  pGVar7 = (GizmoRotationArc3DLookAndFeel *)
           FUN_?(TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  bVar8 = iRam_? != 0;
  (pGVar7->fields)._useShortestRotation = 1;
  (pGVar7->fields)._fillFlags = 3;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar4 = _UNK_?;
  (pGVar7->fields)._color.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar4 = _UNK_?;
  (pGVar7->fields)._color.a = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar4 = _UNK_?;
  (pGVar7->fields)._borderColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pGVar7->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar4;
  (pGVar7->fields)._borderColor.a = (float)uVar5;
  (this->fields)._rotationArcLookAndFeel = pGVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Color get_BorderColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
        GizmoPlaneSlider3DLookAndFeel_get_BorderColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider3DLookAndFeel *this,
                  MethodInfo *method)

{
  fVar1 = (this->fields)._borderColor.g;
  fVar2 = (this->fields)._borderColor.b;
  fVar3 = (this->fields)._borderColor.a;
  __return_storage_ptr__->r = (this->fields)._borderColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Color get_HoveredBorderColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
        GizmoPlaneSlider3DLookAndFeel_get_HoveredBorderColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider3DLookAndFeel *this,
                  MethodInfo *method)

{
  fVar1 = (this->fields)._hoveredBorderColor.g;
  fVar2 = (this->fields)._hoveredBorderColor.b;
  fVar3 = (this->fields)._hoveredBorderColor.a;
  __return_storage_ptr__->r = (this->fields)._hoveredBorderColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Color get_HoveredColor() */

Color * Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
        GizmoPlaneSlider3DLookAndFeel_get_HoveredColor
                  (Color *__return_storage_ptr__,GizmoPlaneSlider3DLookAndFeel *this,
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


/* Boolean get_IsRotationArcVisible() */

bool Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_get_IsRotationArcVisible
               (GizmoPlaneSlider3DLookAndFeel *this,MethodInfo *method)

{
  return (this->fields)._isRotationArcVisible;
}


/* GizmoRATriangle3DBorderType get_RATriangleBorderType() */

GizmoRATriangle3DBorderType__Enum
Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
GizmoPlaneSlider3DLookAndFeel_get_RATriangleBorderType
          (GizmoPlaneSlider3DLookAndFeel *this,MethodInfo *method)

{
  return (this->fields)._raTriangleBorderType;
}


/* Void set_BorderBoxDepth(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderBoxDepth
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderBoxDepth = fVar1;
  return;
}


/* Void set_BorderBoxHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderBoxHeight
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderBoxHeight = fVar1;
  return;
}


/* Void set_BorderCircleCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderCircleCullAlphaScale
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = _UNK_?, value <= _UNK_?)) {
    (this->fields)._borderCircleCullAlphaScale = value;
    return;
  }
  (this->fields)._borderCircleCullAlphaScale = fVar1;
  return;
}


/* Void set_BorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderColor
               (GizmoPlaneSlider3DLookAndFeel *this,Color *value,MethodInfo *method)

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


/* Void set_BorderCylTorusHeight(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusHeight
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderCylTorusHeight = fVar1;
  return;
}


/* Void set_BorderCylTorusWidth(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderCylTorusWidth
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderCylTorusWidth = fVar1;
  return;
}


/* Void set_BorderTorusThickness(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderTorusThickness
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderTorusThickness = fVar1;
  return;
}


/* Void set_CircleBorderType(GizmoCircle3DBorderType) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_CircleBorderType
               (GizmoPlaneSlider3DLookAndFeel *this,GizmoCircle3DBorderType__Enum value,
               MethodInfo *method)

{
  (this->fields)._circleBorderType = value;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_HoveredBorderColor
               (GizmoPlaneSlider3DLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._hoveredBorderColor.r = value->r;
  (this->fields)._hoveredBorderColor.g = fVar1;
  (this->fields)._hoveredBorderColor.b = fVar2;
  (this->fields)._hoveredBorderColor.a = fVar3;
  return;
}


/* Void set_HoveredColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_HoveredColor
               (GizmoPlaneSlider3DLookAndFeel *this,Color *value,MethodInfo *method)

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


/* Void set_IsRotationArcVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_IsRotationArcVisible
               (GizmoPlaneSlider3DLookAndFeel *this,bool value,MethodInfo *method)

{
  (this->fields)._isRotationArcVisible = value;
  return;
}


/* Void set_NumBorderTorusWireAxialSlices(Int32) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_NumBorderTorusWireAxialSlices
               (GizmoPlaneSlider3DLookAndFeel *this,int32_t value,MethodInfo *method)

{
  iVar1 = 2;
  if (1 < value) {
    iVar1 = value;
  }
  (this->fields)._numBorderTorusWireAxialSlices = iVar1;
  return;
}


/* Void set_RATriangleBorderType(GizmoRATriangle3DBorderType) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_RATriangleBorderType
               (GizmoPlaneSlider3DLookAndFeel *this,GizmoRATriangle3DBorderType__Enum value,
               MethodInfo *method)

{
  (this->fields)._raTriangleBorderType = value;
  return;
}


/* Void set_RATriangleXLength(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_RATriangleXLength
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._raTriangleXLength = fVar1;
  return;
}


/* Void set_RATriangleYLength(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_RATriangleYLength
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._raTriangleYLength = fVar1;
  return;
}

