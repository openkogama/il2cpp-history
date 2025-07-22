
/* GizmoPlaneSlider3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::GizmoPlaneSlider3DLookAndFeel__ctor
               (GizmoPlaneSlider3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._scale = 1.0;
  (this->fields)._useZoomFactor = 1;
  (this->fields)._quadWidth = 1.0;
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
  (this->fields)._color.r = fVar4;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar2;
  (this->fields)._color.a = fVar1;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->g;
  fVar3 = pCVar5->b;
  fVar2 = pCVar5->a;
  (this->fields)._hoveredColor.r = pCVar5->r;
  (this->fields)._hoveredColor.g = fVar4;
  (this->fields)._hoveredColor.b = fVar3;
  (this->fields)._hoveredColor.a = fVar2;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._borderColor.r = _UNK_?;
  (this->fields)._borderColor.g = fVar4;
  (this->fields)._borderColor.b = fVar3;
  (this->fields)._borderColor.a = fVar2;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->r;
  fVar3 = pCVar5->g;
  fVar2 = pCVar5->b;
  fVar1 = pCVar5->a;
  (this->fields)._isRotationArcVisible = 1;
  (this->fields)._hoveredBorderColor.r = fVar4;
  (this->fields)._hoveredBorderColor.g = fVar3;
  (this->fields)._hoveredBorderColor.b = fVar2;
  (this->fields)._hoveredBorderColor.a = fVar1;
  this_00 = (GizmoRotationArc3DLookAndFeel *)
            func_?(TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
  GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._rotationArcLookAndFeel;
  (this->fields)._rotationArcLookAndFeel = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_BorderCircleCullAlphaScale() */

float Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
      GizmoPlaneSlider3DLookAndFeel_get_BorderCircleCullAlphaScale
                (GizmoPlaneSlider3DLookAndFeel *this,MethodInfo *method)

{
  return (this->fields)._borderCircleCullAlphaScale;
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


/* Void set_BorderFillMode(GizmoFillMode3D) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_BorderFillMode
               (GizmoPlaneSlider3DLookAndFeel *this,GizmoFillMode3D__Enum value,MethodInfo *method)

{
  (this->fields)._borderFillMode = value;
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


/* Void set_CircleRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_CircleRadius
               (GizmoPlaneSlider3DLookAndFeel *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._circleRadius = fVar1;
  return;
}


/* Void set_HoveredBorderColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_HoveredBorderColor
               (GizmoPlaneSlider3DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredBorderColor.r = value.r;
  (this->fields)._hoveredBorderColor.g = value.g;
  (this->fields)._hoveredBorderColor.b = value.b;
  (this->fields)._hoveredBorderColor.a = value.a;
  return;
}


/* Void set_HoveredColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DLookAndFeel::
     GizmoPlaneSlider3DLookAndFeel_set_HoveredColor
               (GizmoPlaneSlider3DLookAndFeel *this,Color value,MethodInfo *method)

{
  (this->fields)._hoveredColor.r = value.r;
  (this->fields)._hoveredColor.g = value.g;
  (this->fields)._hoveredColor.b = value.b;
  (this->fields)._hoveredColor.a = value.a;
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

