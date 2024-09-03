
/* GizmoLineSlider2DSettings() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DSettings::GizmoLineSlider2DSettings__ctor
               (GizmoLineSlider2DSettings *this,MethodInfo *method)

{
  (this->fields)._lineHoverEps = 10.0;
  (this->fields)._boxHoverEps = 10.0;
  (this->fields)._offsetSnapStep = 1.0;
  (this->fields)._rotationSnapStep = 15.0;
  (this->fields)._scaleSnapStep = 0.1;
  (this->fields)._offsetSensitivity = 1.0;
  (this->fields)._rotationSensitivity = 0.45;
  (this->fields)._scaleSensitivity = 1.0;
  return;
}


/* Void set_OffsetSnapStep(Single) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider2DSettings::
     GizmoLineSlider2DSettings_set_OffsetSnapStep
               (GizmoLineSlider2DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._offsetSnapStep = fVar1;
  return;
}

