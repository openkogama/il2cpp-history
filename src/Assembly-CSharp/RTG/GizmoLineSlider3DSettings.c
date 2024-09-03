
/* GizmoLineSlider3DSettings() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DSettings::GizmoLineSlider3DSettings__ctor
               (GizmoLineSlider3DSettings *this,MethodInfo *method)

{
  (this->fields)._lineHoverEps = 0.7;
  (this->fields)._boxHoverEps = 0.5;
  (this->fields)._cylinderHoverEps = 0.5;
  (this->fields)._offsetSnapStep = 1.0;
  (this->fields)._rotationSnapStep = 15.0;
  (this->fields)._scaleSnapStep = 0.1;
  (this->fields)._offsetSensitivity = 1.0;
  (this->fields)._rotationSensitivity = 0.45;
  (this->fields)._scaleSensitivity = 1.0;
  return;
}


/* Void set_ScaleSensitivity(Single) */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DSettings::
     GizmoLineSlider3DSettings_set_ScaleSensitivity
               (GizmoLineSlider3DSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._scaleSensitivity = fVar1;
  return;
}

