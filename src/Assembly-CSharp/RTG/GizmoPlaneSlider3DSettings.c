
/* GizmoPlaneSlider3DSettings() */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::GizmoPlaneSlider3DSettings__ctor
               (GizmoPlaneSlider3DSettings *this,MethodInfo *method)

{
  (this->fields)._areaHoverEps = 1e-05;
  (this->fields)._extrudeHoverEps = 1e-05;
  (this->fields)._borderLineHoverEps = 0.7;
  (this->fields)._borderBoxHoverEps = 0.7;
  (this->fields)._borderTorusHoverEps = 0.7;
  (this->fields)._offsetSnapStepRight = 1.0;
  (this->fields)._offsetSnapStepUp = 1.0;
  (this->fields)._rotationSnapStep = 15.0;
  (this->fields)._scaleMode = 1;
  (this->fields)._scaleSnapStepRight = 0.1;
  (this->fields)._scaleSnapStepUp = 0.1;
  (this->fields)._proportionalScaleSnapStep = 0.1;
  (this->fields)._offsetSensitivity = 1.0;
  (this->fields)._rotationSensitivity = 0.45;
  (this->fields)._scaleSensitivity = 1.0;
  return;
}


/* Void set_AreaHoverEps(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_AreaHoverEps
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._areaHoverEps = fVar1;
  return;
}


/* Void set_BorderBoxHoverEps(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_BorderBoxHoverEps
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderBoxHoverEps = fVar1;
  return;
}


/* Void set_BorderLineHoverEps(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_BorderLineHoverEps
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._borderLineHoverEps = fVar1;
  return;
}


/* Void set_OffsetSensitivity(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_OffsetSensitivity
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._offsetSensitivity = fVar1;
  return;
}


/* Void set_OffsetSnapStepRight(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_OffsetSnapStepRight
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._offsetSnapStepRight = fVar1;
  return;
}


/* Void set_ProportionalScaleSnapStep(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_ProportionalScaleSnapStep
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._proportionalScaleSnapStep = fVar1;
  return;
}


/* Void set_RotationSensitivity(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_RotationSensitivity
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._rotationSensitivity = fVar1;
  return;
}


/* Void set_ScaleSensitivity(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_ScaleSensitivity
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._scaleSensitivity = fVar1;
  return;
}


/* Void set_ScaleSnapStepUp(Single) */

void Assembly-CSharp.dll::RTG::GizmoPlaneSlider3DSettings::
     GizmoPlaneSlider3DSettings_set_ScaleSnapStepUp
               (GizmoPlaneSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._scaleSnapStepUp = fVar1;
  return;
}

