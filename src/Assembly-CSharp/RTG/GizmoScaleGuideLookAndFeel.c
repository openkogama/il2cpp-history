
/* GizmoScaleGuideLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel__ctor(GizmoScaleGuideLookAndFeel *this,MethodInfo *method)

{
  (this->fields)._xAxisColor.r = 0.8588236;
  (this->fields)._xAxisColor.g = 0.24313727;
  (this->fields)._xAxisColor.b = 0.1137255;
  (this->fields)._xAxisColor.a = 1.0;
  (this->fields)._useZoomFactor = 1;
  (this->fields)._zAxisColor.r = 0.227451;
  (this->fields)._zAxisColor.g = 0.4784314;
  (this->fields)._zAxisColor.b = 0.9725491;
  (this->fields)._zAxisColor.a = 1.0;
  (this->fields)._axisLength = 2.0;
  (this->fields)._yAxisColor.r = 0.6039216;
  (this->fields)._yAxisColor.g = 0.95294124;
  (this->fields)._yAxisColor.b = 0.28235295;
  (this->fields)._yAxisColor.a = 1.0;
  return;
}


/* Void set_ZAxisColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel_set_ZAxisColor(GizmoScaleGuideLookAndFeel *this,Color *value,MethodInfo *method)

{
  fVar1 = value->g;
  fVar2 = value->b;
  fVar3 = value->a;
  (this->fields)._zAxisColor.r = value->r;
  (this->fields)._zAxisColor.g = fVar1;
  (this->fields)._zAxisColor.b = fVar2;
  (this->fields)._zAxisColor.a = fVar3;
  return;
}

